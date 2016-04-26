package main;

import java.io.BufferedReader;
import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.PrintStream;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

import org.antlr.v4.runtime.tree.ParseTree;
import org.antlr.v4.runtime.tree.TerminalNodeImpl;

import sourceGenerator.SourceGenerator;
import verilog.Expression;
import verilog.NetContainer;
import verilog.NetDescriptor;
import verilog.ParameterDescriptior;
import verilog.PortConnection;
import verilog.PrimitiveDescriptor;
import antlr.Verilog2001BaseListener;
import antlr.Verilog2001Parser;
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
import antlr.Verilog2001Parser.Port_declarationContext;
import antlr.Verilog2001Parser.Port_identifierContext;
import antlr.Verilog2001Parser.RangeContext;

/**
 * Netinstancer parse the post-xxx simulation model's code and instantiate the
 * nets and the primitives in the generated c code.
 * 
 * @author Benedek Racz
 *
 */
public class Netinstancer extends Verilog2001BaseListener {
	/**
	 * nets contains the parsed net names. 
	 */
	private NetContainer nets;
	
	/**
	 * Each net has an id, aka. a serial number (based on the instantiation order)
	 * to help find them in an array in the generated source code.
	 * defines contains a list of the c defines and the values of them.
	 */
//	private Map<String, Integer > defines;

	/**
	 * Generated files pointer.
	 */
	private FileWriter netInstancerHeader;
	private FileWriter netInstancerSource;
//	private PrintStream primitiveInstancerHeader;
	private PrintStream primitiveInstancerSource;
	
	Histogram<String> primitiveHistogram = new Histogram<String>(); 
	
	/**
	 * Complex structure which contains all information of a primitive. The
	 * index is the name of the primitive. It contains the in/out/inout ports,
	 * and the parameters (aka. generics) of the primitive.  
	 */
	private Map<String, PrimitiveDescriptor> primitiveInfos;

	/**
	 * Constructor. Initialize file pointers, and data structures.
	 * @throws IOException
	 */
	Netinstancer() throws IOException{
		
    	System.out.println("Netinstancer ");
    	
    	nets = new NetContainer();
    	nets.add(new NetDescriptor("CONST_ZERO"));
    	nets.add(new NetDescriptor("CONST_ONE"));
    	
    	initFiles();
		
    	fillPrimitiveInfos();
    	
	}
	
	/**
	 * Loads data of primitives and store it in primitiveInfos
	 */
	void fillPrimitiveInfos(){
		PrimitiveMapper.loadData();
		
		primitiveInfos = new HashMap<String, PrimitiveDescriptor>();
		
		for(PrimitiveDescriptor primitive: PrimitiveMapper.primitiveDEclarationList){
			primitiveInfos.put(primitive.getPrimitiveIdentifier(), primitive);
		} 
		
	}
	
	/**
	 * Initialize files. Open it and insert common parts at the beginning of
	 * each files.
	 * 
	 * @throws IOException
	 */
	void initFiles() throws IOException{
		InputStream is;
		BufferedReader br;
		String path;
		
		path = "resources/netinstancerHeaderBegin.txt";
		is = Netinstancer.class.getResourceAsStream(path);
		br = new BufferedReader(new InputStreamReader(is));
		
		netInstancerHeader = new FileWriter(new File(Main.simulationFilenames.get(FileNamesEnum.NET_INST_HEADER)));
		while(true){
			String line = br.readLine();
			if (line == null)
				break;
			netInstancerHeader.write(line + "\n");
		}
		
		br.close();
		
		netInstancerSource = new FileWriter(new File(Main.simulationFilenames.get(FileNamesEnum.NET_INST_SRC)));
		

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
		
		
		primitiveInstancerSource = new PrintStream(Main.simulationFilenames.get(FileNamesEnum.PRIM_INST_SRC));
		CppTemplateGenerator.appendSource("resources/priminstancerSourceBegin.txt", primitiveInstancerSource);
		
	}
	
	@Override
	public void enterPort_declaration(Port_declarationContext portDeclaration) {
			List<Port_identifierContext> portIdList;
			RangeContext range = null;
			
			try{
				portIdList = portDeclaration.input_declaration().list_of_port_identifiers().port_identifier();
				range = portDeclaration.input_declaration().range();
			
	    		for(Port_identifierContext portId : portIdList){
	    			nets.add(new NetDescriptor(portId.getText(), range));
		    		continue;
	    		}
			}catch(NullPointerException ex){}

			try{
				portIdList = portDeclaration.output_declaration().list_of_port_identifiers().port_identifier();
				range = portDeclaration.output_declaration().range();
	    		for(Port_identifierContext portId : portIdList){
	    			nets.add(new NetDescriptor(portId.getText(), range));
		    		continue;
    			}
			}catch(NullPointerException ex){}

			try{
				portIdList = portDeclaration.inout_declaration().list_of_port_identifiers().port_identifier();
				range = portDeclaration.inout_declaration().range();
	    		for(Port_identifierContext portId : portDeclaration.inout_declaration().list_of_port_identifiers().port_identifier()){

	    			nets.add(new NetDescriptor(portId.getText(), range));
		    		continue;
    			}
			}catch(NullPointerException ex){}
		}
	

	/**
	 * enterNet_declaration() is the enter point of the parser. The parser call
	 * this function if it reach a declaration of a net. Ex.: "wire my_wire"
	 */
    @Override
    public void enterNet_declaration(Verilog2001Parser.Net_declarationContext ctx) {
//    	int msb = 0;
//    	int lsb = 0;
    	RangeContext range = null;

    	for(int i = 0; i< ctx.getChildCount(); i++){
    		ParseTree child = ctx.getChild(i);

		if(child instanceof TerminalNodeImpl){
			continue;
			}
		if(child instanceof Net_typeContext){
	    	String type = ctx.net_type().getText();
	    	if(! type.equals("wire")){
	        	Logger.writeWarning("Unsupported net type: " + type);
	        	return;
	    	}
	    	continue;
		}
		if(child instanceof List_of_net_identifiersContext){
			for(int j = 0; j< child.getChildCount(); j++){
	    		ParseTree childchild = child.getChild(j);
	    		if(childchild instanceof Net_identifierContext){
	    			String name =  childchild.getText();
	    			Logger.writeInfo("Net identifier: " + name);
	    			Logger.writeInfo("Generating...");
//	    	    	for(int index = lsb; index <=msb; index++){
//	    	    		String name2 = name + "[" + String.valueOf(index) + "]";
//	    	    		Logger.writeInfo("  Net identifier: " + name2);
		    	    	nets.add(new NetDescriptor(name, range));
		    	    	//defines.put(name2, value);
//	    	    	}
	    		}
	    		else{
	    			Logger.writeError("Type is unknown: " + childchild.getText());
	    			
	    		}
			}
			continue;
		}
		if(child instanceof RangeContext){
	        range = ((RangeContext)child);
//	        msb = BasicConverters.toInteger(range.msb_constant_expression().constant_expression());
//	        lsb = BasicConverters.toInteger(range.lsb_constant_expression().constant_expression());
	        continue;
		}
		
		Logger.writeError("Net identifier: unexpected: " + child.getText() + " Type is: " + child.getClass());
    	}
    	//System.out.println("enterList_of_net_identifiers: " + txt);
    	
    }
    

	/**
	 * enterModule_instantiation() is the enter point of the parser. The parser
	 * call this function if it reach a primitive instantiation.
	 * Ex.:
	 * "
 	 * X_ZERO #(
 	 *     .LOC ( "SLICE_X6Y2" ))
 	 *   \ProtoComp1.CYINITGND  (
 	 *     .O(\ProtoComp1.CYINITGND.0 )
 	 *   );"
	 */
    @Override
    public void enterModule_instantiation(Verilog2001Parser.Module_instantiationContext ctx) {
    	String primType = ctx.module_identifier().getText();
    	
    	System.out.println(primType);
    	Map<String, ParameterDescriptior> parameterAssignments = new HashMap<String, ParameterDescriptior>();
    	Map<String, PortConnection> portAssignments = new HashMap<String, PortConnection>();
    	
    	
    	Parameter_value_assignmentContext parameters = ctx.parameter_value_assignment();
    	if (parameters != null){
    		List_of_parameter_assignmentsContext parameterlist = parameters.list_of_parameter_assignments();
    		if(parameterlist.ordered_parameter_assignment().size()>0){
    			Logger.writeError("Ordered parameter assignment is unsupproted.");    		
        		return;
    		}
    		for(Named_parameter_assignmentContext param : parameterlist.named_parameter_assignment()){
    			Parameter_identifierContext primitiveParameterName = param.parameter_identifier();
    			//int parameterValue = toInteger(param.expression());
    			System.out.println(primType);
    			System.out.println(primitiveParameterName.getText());
    		
    			ParameterDescriptior instanceParameter  = new ParameterDescriptior(
    					primitiveInfos.get(primType).getParameters().get(primitiveParameterName.getText())
    					);
    			
    			Expression exp = ParseExpression.parseExpression(param.expression());

    			if(null != exp){
	    			if(null != exp.getInteger2()){
	    				instanceParameter.setValue(exp.getInteger2());
	    			}
    			}
    			else{
    				instanceParameter.setValue(param.expression().getText());
    			}
    			
    			parameterAssignments.put(primitiveParameterName.getText(),
    					instanceParameter
    					);
    		}
    	}
    	
    	List<Module_instanceContext> instances = ctx.module_instance();
    	if(instances.size()!= 1){
    		Logger.writeError("Unsupproted to instantiate multiple instance.");    		
    		return;
    	}
    	
    	Module_instanceContext instance = instances.get(0);
    	if (instance.name_of_instance().range() != null){
    		Logger.writeError("Unsupproted to instantiate multiple instance in range.");    		
    		return;
    	}
    	
    	String instanceName = instance.name_of_instance().module_instance_identifier().getText();
    	List_of_port_connectionsContext portConnections = instance.list_of_port_connections();
    	if(portConnections.ordered_port_connection().size()>0){
    		Logger.writeError("The ordered port connection is unsupproted.");    		
    		return;
    	}
    	
    	List<Named_port_connectionContext> namedPortConnections = portConnections.named_port_connection();
    	for(Named_port_connectionContext portConnection : namedPortConnections){
    		if(portConnection.attribute_instance().size()>0){
    			Logger.writeError("The attribute instance is unsupproted in port connections.");
        		return;
    		}
    		String nameOfPrimitivePort = portConnection.port_identifier().getText();
    		//String errorCheck = portConnection.expression().getText();

    		PortConnection connection;

//    		ExpressionContext expr = portConnection.expression();
    		
    		Expression expression = ParseExpression.parseExpression(portConnection.expression());
    		
    		//String nameOfNet = portConnection.expression().getText();

        	PrimitiveDescriptor primitive = primitiveInfos.get(primType);
        	
    		connection = new PortConnection(primitive.getPorts().get(nameOfPrimitivePort), expression);
    		
    		portAssignments.put(nameOfPrimitivePort, connection);
    		
    	}

        generatePrimitiveInstantiation(primType, instanceName, parameterAssignments, portAssignments );
        primitiveHistogram.touchBin(primType);
    	
    }
    
    /**
     * generatePrimitiveInstantiation() generates a primitive instantiation file.
     * based on parsed results.
     * 
     * @param type
     * @param instanceName
     * @param parameterAssignments
     * @param portAssignments
     */
    void generatePrimitiveInstantiation(String type,
    		String instanceName,
    		Map<String,	ParameterDescriptior> parameterAssignments,
    		Map<String, PortConnection> portAssignments
    		){
    	/**
    	 * primitiveCType: is the c identifier of the c++ class of the to be instantiated primitive.
    	 */
    	String primitiveCType;
    	
    	/**
    	 * In c there is no way of calling function with giving parameters by
    	 * their name. orderedParameters and orderedPorts are contains values of
    	 * ports/parameters in the definition order.
    	 */
    	List<ParameterDescriptior> orderedParameters = new ArrayList<ParameterDescriptior>();
    	List<PortConnection> orderedPorts = new ArrayList<PortConnection>();
    	
    	// The descriptor of the to be instantiated primitive.
    	// Null pointer ex means the type does not exist in the primitives.
    	PrimitiveDescriptor primitive = primitiveInfos.get(type);
    	
    	if(null == primitiveInfos){
    		Logger.writeError("Primitive: " + type + " cannot be found in the list.");
    		return;
    	}
    	
    	primitiveCType = primitive.getPrimitiveClassType();
    	
    	// Find values of all parameters.
    	for(String param : primitive.getParameters().keySet()){
    		if(parameterAssignments.containsKey(param)){
    			ParameterDescriptior parameterValue = parameterAssignments.get(param);
    			orderedParameters.add(parameterValue);    			
    		}
    		else{
	    		// If the key does not exist in the parameter assignments, then we
	    		// put the default value into the list. 
    			orderedParameters.add(primitive.getParameters().get(param));
    		}
    	}

    	// Find values of all ports.
    	for(String port : primitive.getPorts().keySet()){
    		try{
    			PortConnection portNet = portAssignments.get(port);
    			orderedPorts.add(portNet);
    		}
    		// If the key does not exist in the parameter assignments, then we
    		// put the default value into the list. 
    		catch (NullPointerException ex){	
    			orderedPorts.add(null);
    		}
    	}
    	
    	/**
    	 * Generate source code based on previously calculated values.
    	 */
    	SourceGenerator srcGen0 = new SourceGenerator();
    	
    	srcGen0.add("engine.register_primitive(");
    	

    	SourceGenerator srcGen1 = new SourceGenerator();
    	
    	srcGen1.add("new " + primitiveCType + "(\"" + instanceName.replace("\\", "\\\\") + "\",");
    	srcGen1.add("//Module parameters:");
    	for(ParameterDescriptior param : orderedParameters){
    		srcGen1.add("" + param.getDefaultValueCformat() +  ", // " + param.getParameterIdentifier() );
    	}
    	srcGen1.add("");
    	srcGen1.add("//Module port assignments:");
    	PortConnection lastPort = orderedPorts.get(orderedPorts.size() - 1);
		String comma = ", "; //comma
		for(PortConnection portConnection : orderedPorts){
			int portLsb = portConnection.getPortIdentifier().getLsb();
			int portMsb = portConnection.getPortIdentifier().getMsb();
			
			for(int i = portLsb; i <= portMsb; i++){
				if(lastPort == portConnection & (portMsb == i)){
    				comma = " ";
				}
	    		if(portConnection.getExpression().isNet(i)){
	    			NetDescriptor netDesc = portConnection.getExpression().getNet(i);
	    			String comment = portConnection.getPortIdentifier().getNetIdentifier();
	    			srcGen1.add("engine.get_net(" + netDesc.getCdefineIdentifierBit(netDesc.getLsb()) +  ")" + comma + " // " + comment );
	    		}else{
	        		Logger.writeError("Primitiveinstantiation : portConnection: " + portConnection + " .");
	        		return;
	    		}
			}
    	}

    	srcGen1.add(")");

    	srcGen0.add(srcGen1);
    	srcGen0.add(");");
    	
    	SourceGenerator srcGen00 = new SourceGenerator(srcGen0);
    	
    	primitiveInstancerSource.println(srcGen00);
//    	System.out.println(srcGen0);
    	
    }

    /**
     * Prints the result of the parser in a formatted way.
     * @throws IOException
     */
	void printResults() throws IOException{
		System.out.println("");
		System.out.println("----------------------------------------------------------------------------");
		System.out.println("");
		int i = 0;
		List<String> defines = new ArrayList<String>();
		List<String> netinst = new ArrayList<String>();
		
    	for(NetDescriptor net : nets.values()) {
//    		String cid = toCIdentifier(net, true);
    		for(String cid : net.getCdefineIdentifierList() ){
    			netinst.add("\tengine.register_net(new NetFlow(\"" + cid + "\"));");
        		defines.add("#define " + cid + "\t\t" + String.valueOf(i));
        		i++;
    		}
//    		defines.add("#define " + net.getValue().getCdefineIdentifierList() + " " + String.valueOf(i));
//    		defines.add("#define " + net.getValue().getCdefineIdentifierList() + " " + String.valueOf(i));
//    		i++;
    	}

    	for(String def : defines) {
    		netInstancerHeader.write(def + "\n");
    	}

    	netInstancerHeader.write("\n");
    	netInstancerHeader.write("\n");
    	
    	for(String net : netinst) {
    		netInstancerSource.write(net + "\n");
    	}
    	
    	// TODO 
    	finishFiles();
    	
    	print_primitive_histogram();

    }
    
	private void print_primitive_histogram() {
		System.out.println(primitiveHistogram);
		
	}

	/**
	 * Append common end of each files and close them.
	 * @throws IOException
	 */
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
    	
    	
    	CppTemplateGenerator.appendSource("resources/netinstancerSourceEnd.txt", primitiveInstancerSource);
    	primitiveInstancerSource.close();
    	
    }
	
}