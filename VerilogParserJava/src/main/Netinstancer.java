package main;

import java.io.BufferedReader;
import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

import org.antlr.v4.runtime.tree.ParseTree;
import org.antlr.v4.runtime.tree.TerminalNodeImpl;

import antlr.Verilog2001BaseListener;
import antlr.Verilog2001Parser;
import antlr.Verilog2001Parser.Constant_expressionContext;
import antlr.Verilog2001Parser.List_of_net_identifiersContext;
import antlr.Verilog2001Parser.List_of_parameter_assignmentsContext;
import antlr.Verilog2001Parser.List_of_port_connectionsContext;
import antlr.Verilog2001Parser.Module_instanceContext;
import antlr.Verilog2001Parser.Named_parameter_assignmentContext;
import antlr.Verilog2001Parser.Named_port_connectionContext;
import antlr.Verilog2001Parser.Net_identifierContext;
import antlr.Verilog2001Parser.Net_typeContext;
import antlr.Verilog2001Parser.Parameter_identifierContext;
import antlr.Verilog2001Parser.Parameter_value_assignmentContext;
import antlr.Verilog2001Parser.RangeContext;


public class Netinstancer extends Verilog2001BaseListener {
	Map<PrimitiveClass, Histogram <String> > sub_module_histogram;
	List<String> nets;
	Map<String, Integer > defines;
	//FileOutputStream generatedNetInstancerFile;
	FileWriter netInstancerHeader;
	FileWriter netInstancerSource;
	
	Map<String, PrimitiveDescriptor> primitiveInfos;
	
	//int dimension = 1;

	Netinstancer() throws IOException{
		
    	System.out.println("Netinstancer ");
    	
    	nets = new ArrayList<String>();
    	
    	initFiles();
		
    	fillPrimitiveInfos();
    	
	}
	
	void fillPrimitiveInfos(){
		PrimitiveMapper.loadData();
		
		primitiveInfos = new HashMap<String, PrimitiveDescriptor>();
		
		for(PrimitiveDescriptor primitive: PrimitiveMapper.primitiveDEclarationList){
			primitiveInfos.put(primitive.primitiveIdentifier, primitive);
		} 
		
	}
	
	void initFiles() throws IOException{
		InputStream is;
		BufferedReader br;
		String path;
		
		path = "resources/netinstancerHeaderBegin.txt";
		is = Netinstancer.class.getResourceAsStream(path);
		br = new BufferedReader(new InputStreamReader(is));
		
		netInstancerHeader = new FileWriter(new File("netinstatiation.h"));
		while(true){
			String line = br.readLine();
			if (line == null)
				break;
			netInstancerHeader.write(line + "\n");
		}
		
		br.close();
		
		netInstancerSource = new FileWriter(new File("netinstatiation.cpp"));

		path = "resources/netinstancerSourceBegin.txt";
		is = Netinstancer.class.getResourceAsStream(path);
		br = new BufferedReader(new InputStreamReader(is));
		
		while(true){
			String line = br.readLine();
			if (line == null)
				break;
			netInstancerSource.write(line + "\n");
		}
		
		br.close();
		
		
	}
	

    @Override
    public void enterNet_declaration(Verilog2001Parser.Net_declarationContext ctx) {
    	int msb = 0;
    	int lsb = 0;
    	

    	for(int i = 0; i< ctx.getChildCount(); i++){
    		ParseTree child = ctx.getChild(i);

		if(child instanceof TerminalNodeImpl){
			continue;
			}
		if(child instanceof Net_typeContext){
	    	String type = ctx.net_type().getText();
	    	if(! type.equals("wire")){
	        	System.out.println("Warning: Unsupported net type: " + type);
	        	return;
	    	}
	    	continue;
		}
		if(child instanceof List_of_net_identifiersContext){
			for(int j = 0; j< child.getChildCount(); j++){
	    		ParseTree childchild = child.getChild(j);
	    		if(childchild instanceof Net_identifierContext){
	    			String name =  childchild.getText();
	    	    	System.out.println("Net identifier: " + name);
	    	    	System.out.println("Generating...");
	    	    	for(int index = lsb; index <=msb; index++){
	    	    		String name2 = name + "[" + String.valueOf(index) + "]";
		    	    	System.out.println("  Net identifier: " + name2);
		    	    	nets.add(name2);
		    	    	//defines.put(name2, value);
	    	    	}
	    		}
	    		else{
	    	    	System.out.println("Type is unknown: " + childchild.getText());
	    			
	    		}
			}
			continue;
		}
		if(child instanceof RangeContext){
	        RangeContext range = ((RangeContext)child);
	        msb = toInteger(range.msb_constant_expression().constant_expression());
	        lsb = toInteger(range.lsb_constant_expression().constant_expression());
	        continue;
		}
		
		System.out.println("ERROR: Net identifier: unexpected: " + child.getText() + " Type is: " + child.getClass());
    	}
    	//System.out.println("enterList_of_net_identifiers: " + txt);
    	
    }
    
    static int toInteger(Constant_expressionContext constExpr){
    	try{
    		return Integer.valueOf(constExpr.getText());
    	}
    	catch(NumberFormatException ex){
    		System.out.println("ERROR: Unsupproted number format: " + ex.getMessage());
    		return 0;
    	}
    }
    
    static String netId2CdefineId(String netId){
		String ret = toCIdentifier(netId, true);
		ret =  "NET_INDEX_" + ret;
		return ret;
    }
	
    static String toCIdentifier(String str, Boolean uppercase){
    	String ret;
    	ret = str.replace("_", "__"); 	// underscore
    	ret = ret.replace("/", "_s"); 	// slash
    	ret = ret.replace("\\", "_b");	// backslash
    	ret = ret.replace("<", "_l");	// less than
    	ret = ret.replace(">", "_g");	// greater than
    	ret = ret.replace("[", "_a");	// 
    	ret = ret.replace("]", "_b");	// 
    	ret = ret.replace(".", "_d");	// dot 
    	
    	return ret;
    }
    
    @Override
    public void enterModule_instantiation(Verilog2001Parser.Module_instantiationContext ctx) {
    	String primType = ctx.module_identifier().getText();
    	
    	System.out.println(primType);
    	Map<String, String> parameterAssignments = new HashMap<String, String>();
    	Map<String, String> portAssignments = new HashMap<String, String>();
    	
    	
    	Parameter_value_assignmentContext parameters = ctx.parameter_value_assignment();
    	if (parameters != null){
    		List_of_parameter_assignmentsContext parameterlist = parameters.list_of_parameter_assignments();
    		if(parameterlist.ordered_parameter_assignment().size()>0){
        		System.out.println("ERROR: Ordered parameter assignment is unsupproted.");    		
        		return;
    		}
    		for(Named_parameter_assignmentContext param : parameterlist.named_parameter_assignment()){
    			Parameter_identifierContext primitiveParameterName = param.parameter_identifier();
    			//int parameterValue = toInteger(param.expression());
    			
    			parameterAssignments.put(primitiveParameterName.getText(), param.expression().getText());
    		}
    	}
    	
    	List<Module_instanceContext> instances = ctx.module_instance();
    	if(instances.size()!= 1){
    		System.out.println("ERROR: Unsupproted to instantiate multiple instance.");    		
    		return;
    	}
    	
    	Module_instanceContext instance = instances.get(0);
    	if (instance.name_of_instance().range() != null){
    		System.out.println("ERROR: Unsupproted to instantiate multiple instance in range.");    		
    		return;
    	}
    	
    	String instanceName = instance.name_of_instance().module_instance_identifier().getText();
    	List_of_port_connectionsContext portConnections = instance.list_of_port_connections();
    	if(portConnections.ordered_port_connection().size()>0){
    		System.out.println("ERROR: The ordered port connection is unsupproted.");    		
    		return;
    	}
    	
    	List<Named_port_connectionContext> namedPortConnections = portConnections.named_port_connection();
    	for(Named_port_connectionContext portConnection : namedPortConnections){
    		if(portConnection.attribute_instance().size()>0){
        		System.out.println("ERROR: The attribute instance is unsupproted in port connections.");    		
        		return;
    		}
    		String nameOfPrimitivePort = portConnection.port_identifier().getText();
    		String nameOfNet = portConnection.expression().getText();
    		
    		portAssignments.put(nameOfPrimitivePort, nameOfNet);
    		
    	}

        generatePrimitiveInstantiation(primType, instanceName, parameterAssignments, portAssignments );
        	
    	
    }
    
    void generatePrimitiveInstantiation(String type, String instanceName, Map<String, String> parameterAssignments, Map<String, String> portAssignments ){
    	String primitiveCType;
    	List<String> orderedParameters = new ArrayList<String>();
    	List<String> orderedPorts = new ArrayList<String>();
    	
    	PrimitiveDescriptor primitive = primitiveInfos.get(type);		// Null pointer ex means the type does not exist in the primitives.
    	
    	primitiveCType = primitive.getPrimitiveClassType();
    	
    	for(String param : primitive.parameters.keySet()){
    		try{
    			String parameterValue = parameterAssignments.get(param);
    			orderedParameters.add(parameterValue);
    		}
    		// If the key does not exist in the parameter assignments, then we
    		// put the default value into the list. 
    		catch (NullPointerException ex){	
    			orderedParameters.add(primitive.parameters.get(param).defaultValue);
    		}
    	}
    	
    	for(String port : primitive.ports.keySet()){
    		try{
    			String portNet = portAssignments.get(port);
    			orderedPorts.add(portNet);
    		}
    		// If the key does not exist in the parameter assignments, then we
    		// put the default value into the list. 
    		catch (NullPointerException ex){	
    			orderedPorts.add(null);
    		}
    	}
    	
    	String instantiation = "engine.register_primitive(new " + primitiveCType + "(\"" + instanceName + "\", \n";
    	instantiation += "//Module parameters:\n";
    	for(String param : orderedParameters){
    		instantiation += "\"" + param +  "\", ";
    	}
    	instantiation += "\n";
    	instantiation += "//Module port assignments:\n";
    	for(String port : orderedPorts){
    		instantiation += "engine.get_net(" + netId2CdefineId(port) +  "), ";
    	}
    	
    	
    	instantiation += ")";
    	
    	System.out.println(instantiation);
    	
    }
    			
    
/*    private int toInteger(ExpressionContext expression) {
    	try{
    		return Integer.valueOf(expression.getText());
    	}
    	catch(NumberFormatException ex){
    		System.out.println("ERROR: Unsupproted number format: " + ex.getMessage());
    		return 0;
    	}
	}*/

	void printResults() throws IOException{
		System.out.println("");
		System.out.println("----------------------------------------------------------------------------");
		System.out.println("");
		int i = 0;
		List<String> defines = new ArrayList<String>();
		List<String> netinst = new ArrayList<String>();
		
    	for(String net : nets) {
    		netinst.add("\tengine.register_net(new NetFlow(\"" + net + "\"));");
//    		String cid = toCIdentifier(net, true);
    		defines.add("#define " + netId2CdefineId(net) + " " + String.valueOf(i));
    		i++;
    	}

    	for(String def : defines) {
    		netInstancerHeader.write(def + "\n");
    	}

    	netInstancerHeader.write("\n");
    	netInstancerHeader.write("\n");
    	
    	for(String net : netinst) {
    		netInstancerSource.write(net + "\n");
    	}
    	
    	finishFiles();


    }
    
    void finishFiles() throws IOException{
        
    	String path;
    	InputStream is;
    	BufferedReader br;

    	path = "resources/netinstancerHeaderEnd.txt";
    	is = Netinstancer.class.getResourceAsStream(path);
    	br = new BufferedReader(new InputStreamReader(is));
    	
    	while(true){
    		String line = br.readLine();
    		if (line == null)
    			break;
    		netInstancerHeader.write(line + "\n");
    	}
    	
    	netInstancerHeader.write("\n");
    	netInstancerHeader.close();
    	

    	path = "resources/netinstancerSourceEnd.txt";
    	is = Netinstancer.class.getResourceAsStream(path);
    	br = new BufferedReader(new InputStreamReader(is));
    	
    	while(true){
    		String line = br.readLine();
    		if (line == null)
    			break;
    		netInstancerSource.write(line + "\n");
    	}
    	
    	netInstancerSource.write("\n");
    	netInstancerSource.close();
    }
	
}