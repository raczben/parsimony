package main;

import java.io.BufferedReader;
import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.PrintStream;
import java.util.Map.Entry;

import sourceGenerator.SourceGenerator;
import verilog.ParameterDescriptior;
import verilog.PortDescriptior;
import verilog.PrimitiveDescriptor;

public class CppTemplateGenerator {
//	PrintStream printStream = null;
	File directory = null;
	FileWriter sourceFileWrier;
	String ln = "\r\n";
	
//	CppTemplateGenerator(PrintStream printStream_){
//		this.printStream = printStream_;		
//	}
	

	CppTemplateGenerator(String directoryPath_){		
		this.directory = new File(directoryPath_);
		
		if (! directory.exists() ) {
			try{
				directory.mkdir();
		    } 
		    catch(SecurityException se){
		    	Logger.writeError("Cannot create " + directoryPath_+ " directory.");
		    	return;
		    } 
		}
		else if( ! directory.isDirectory()){
	    	Logger.writeError(directoryPath_+ " already exist as a file.");
	    	return;	
		}
	}
	
//	void init(PrintStream printStream_){
//		CppTemplateGenerator.printStream = printStream_;
//	}
	
	void generateCTemplate() throws IOException{
		PrimitiveMapper.loadData();

		if(null != sourceFileWrier){
			insertSourceBegin();
		}
		
		for( PrimitiveDescriptor primitive : PrimitiveMapper.primitiveDEclarationList){

			SourceGenerator srcGen0 = new SourceGenerator();
			if(null != directory){
				File cTemplateFile = new File(directory, primitive.getPrimitiveHeaderFilename());
				sourceFileWrier = new FileWriter(cTemplateFile, false); 
//				printStream = new PrintStream(cTemplateFile);
//				insertSourceBegin();				
			}
			String headerGuardDefine = primitive.getPrimitiveClassType().toUpperCase() + "_H";
			
			srcGen0.add("/******************************************************************************");
			srcGen0.add(" * Generated Cpp template for simulation primitives.");
			srcGen0.add(" * Author: Benedek Racz");
			srcGen0.add(" ******************************************************************************/");
			srcGen0.add("");
			srcGen0.add("#ifndef " + headerGuardDefine);
			srcGen0.add("#define " + headerGuardDefine);
			srcGen0.add("");
			srcGen0.add("#include \"NetFlow.h\"");
			srcGen0.add("#include \"sim_types.h\"");
			srcGen0.add("#include \"Primitive.h\"");
			
			srcGen0.add("namespace CPrimitives {");
				
			srcGen0.add(generateOneTemplate(primitive));

			srcGen0.add("}");
			srcGen0.add("#endif // " + headerGuardDefine);
			
//			oneCTemplate.replaceAll(regex, replacement)ln, ln+"\t");
			
			if(null != sourceFileWrier){
				sourceFileWrier.write(srcGen0.toString());
			}
			
			if(null != directory){
//				insertSourceEnd();
				sourceFileWrier.close();
				sourceFileWrier = null;
			}
		}
	}


	SourceGenerator  generateOneTemplate(PrimitiveDescriptor primitive){
		
		String parameterType = "int";
		
		Logger.writeInfo("Generating " + primitive.getPrimitiveClassType() + " ...");
//		List<String> cTemplate = new ArrayList<String>();
		
		SourceGenerator srcGen0 = new SourceGenerator("");
		
		/**
		 * Define The class
		 */
		srcGen0.add("class " + primitive.getPrimitiveClassType() + ": public Primitive{" + ln);
		
		/**
		 * Define fields
		 */
		SourceGenerator memberGen = new SourceGenerator("//Verilog Parameters:");
		for(Entry<String, ParameterDescriptior> parameter : primitive.getParameters().entrySet()){
			parameterType = String.valueOf(parameter.getValue().getType()).toLowerCase();
			memberGen.add(parameterType + " " + parameter.getKey() + ";");				 
		}
		memberGen.add("//Verilog Ports in definition order:");
		for(PortDescriptior port : primitive.getPorts().values()){
			for(String cid : port.getCIdentifierList()){
				memberGen.add("NetFlow* " + cid + "; // " + port);
			}				 
		}
		
		memberGen.add("");
		

		/**
		 * Define the constructor
		 */
		try {
			memberGen.add(generateConstructor(primitive), 0);
		} catch (Exception e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		 
		/**
		 * Wait on event register function template 
		 */
		memberGen.add("void register_wait_on_event_nets(){");
		memberGen.add("// TODO");
		memberGen.add("}");

		 /**
		  * Wait on event register function template 
		  */
		memberGen.add("void calculate(int time){");
		memberGen.add("// TODO");
		memberGen.add("}");
		 
		 
		 /**
		  * End class:
		  */
		memberGen.add("};");
		memberGen.add("");
		
		srcGen0.add(memberGen);

		
		return srcGen0;
	}
	
//	private Collection<? extends String> indent(Arra<String> codeList) {
//		for(int i = 0; i<codeList.size(); i++){
//			codeList.re = "\t" + codeList[i];
//		}
//		return codeList;
//	}


	SourceGenerator  generateConstructor(PrimitiveDescriptor primitive){
//		List<String> cTemplate = new ArrayList<String>();
//		cTemplate.add("");
		
		SourceGenerator constrGen = new SourceGenerator();
		SourceGenerator constrParamGen = new SourceGenerator();
		
		String parameterType = "int";
		
		
		/**
		 * Define the constructor
		 */
		constrGen.add("public: " + primitive.getPrimitiveClassType() + "(");
		constrGen.add(constrParamGen);
		constrParamGen.add("const char * name,");
		constrParamGen.add("//Verilog Parameters:");
		for(Entry<String, ParameterDescriptior> parameter : primitive.getParameters().entrySet()){
			parameterType = String.valueOf(parameter.getValue().getType()).toLowerCase();
			constrParamGen.add("" + parameterType + " " + parameter.getKey() + ", // Default: " + parameter.getValue().getDefaultValue());				 
		}
		/**
		 * Parameters of constructor
		 */
		constrParamGen.add("//Verilog Ports in definition order:");
		int i = 0;
		for(PortDescriptior port : primitive.getPorts().values()){
			 i++;
			 boolean lastPort = (i == primitive.getPorts().size());
			 String comma = ",";
			 int index_cntr = port.getLsb();
			 for(String cid : port.getCIdentifierList()){
				 if(lastPort && index_cntr == port.getMsb()){
					 comma = "";
				 }
				 constrParamGen.add("NetFlow* " + cid + comma + " // " + port);
				 index_cntr++;
			 }
		 }
		constrParamGen.add("):Primitive(name){");
		 
		 /**
		  * Assign default arguments:
		  */
		constrParamGen.add("");
		constrParamGen.add("// Assign parameters and ports: ");
		 
		constrParamGen.add("//Verilog Parameters:");
		 for(Entry<String, ParameterDescriptior> parameter : primitive.getParameters().entrySet()){
			 constrParamGen.add("this->" + parameter.getKey() + " = " + parameter.getKey() + "; // Default: " + parameter.getValue().getDefaultValue());				 
		 }
		 constrParamGen.add("//Verilog Ports in definition order:");
		 for(PortDescriptior port : primitive.getPorts().values()){
			 for(String cid : port.getCIdentifierList()){
				 constrParamGen.add("this->" + cid + " = " + cid + "; // " + port);
			 }
		 }

		 constrParamGen.add("");
		 constrParamGen.add("register_wait_on_event_nets();");
		 constrParamGen.add("");
		 
		 constrGen.add("}");
		 constrGen.add("");
		 
		 return constrGen;
	}
	
	void insertSourceBegin() throws IOException{
		//SourceGenerator beginGenerator = new SourceGenerator();
		
		
		//printStream.println(beginGenerator);
		
//		appendSource("resources/cppTemplateHeaderBegin.txt");
	}
	

	private void insertSourceEnd() throws IOException {
//		appendSource("resources/cppTemplateHeaderEnd.txt");
		
	}
	
	private void appendSource(String path) throws IOException {
//		appendSource(path, sourceFileWrier);
		
	}


	static void appendSource(String path, PrintStream printStream) throws IOException{
		InputStream is;
		BufferedReader br;
		
		is = Netinstancer.class.getResourceAsStream(path);
		br = new BufferedReader(new InputStreamReader(is));
		
//		netInstancerHeader = new FileWriter(new File("netinstatiation.h"));
		while(true){
			String line = br.readLine();
			if (line == null)
				break;
			printStream.println(line);
		}
		
		br.close();	
	}
}
