package main;

import java.io.BufferedReader;
import java.io.File;
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
	PrintStream printStream = null;
	File directory = null;
	String ln = "\r\n";
	
	CppTemplateGenerator(PrintStream printStream_){
		this.printStream = printStream_;		
	}
	

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

		if(null != printStream){
			insertSourceBegin();
		}
		
		for( PrimitiveDescriptor primitive : PrimitiveMapper.primitiveDEclarationList){

			if(null != directory){
				File cTemplateFile = new File(directory, primitive.getPrimitiveHeaderFilename());
				printStream = new PrintStream(cTemplateFile);
				insertSourceBegin();				
			}
				
			String oneCTemplate = generateOneTemplate(primitive).toString(1);
			
//			oneCTemplate.replaceAll(regex, replacement)ln, ln+"\t");
			
			if(null != printStream){
				printStream.println(oneCTemplate);
			}
			
			if(null != directory){
				insertSourceEnd();
				printStream.close();
				printStream = null;
			}
		}
	}


	SourceGenerator  generateOneTemplate(PrimitiveDescriptor primitive){
		String parameterType = "int";
//		List<String> cTemplate = new ArrayList<String>();
		
		SourceGenerator srcGen0 = new SourceGenerator("");
		
//		cTemplate.add("");
		
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
		for(Entry<String, PortDescriptior> port : primitive.getPorts().entrySet()){
			memberGen.add("NetFlow* " + port.getKey() + "; // " + port.getValue());				 
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
		constrGen.add("" + primitive.getPrimitiveClassType() + "(");
		constrGen.add(constrParamGen);
		constrParamGen.add("const char * name,");
		constrParamGen.add("//Verilog Parameters:");
		for(Entry<String, ParameterDescriptior> parameter : primitive.getParameters().entrySet()){
			parameterType = String.valueOf(parameter.getValue().getType()).toLowerCase();
			constrParamGen.add("" + parameterType + " " + parameter.getKey() + ", // Default: " + parameter.getValue().getDefaultValue());				 
		}
		constrParamGen.add("//Verilog Ports in definition order:");
		int i = 0;
		for(Entry<String, PortDescriptior> port : primitive.getPorts().entrySet()){
			 i++;
			 if(i < primitive.getPorts().size()){
				 constrParamGen.add("NetFlow* " + port.getKey() + ", // " + port.getValue());
			 }
			 else{
				 constrParamGen.add("NetFlow* " + port.getKey() + " // " + port.getValue());
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
		 for(Entry<String, PortDescriptior> port : primitive.getPorts().entrySet()){
			 constrParamGen.add("this->" + port.getKey() + " = " + port.getKey() + "; // " + port.getValue());				 
		 }

		 constrParamGen.add("");
		 constrParamGen.add("register_wait_on_event_nets();");
		 constrParamGen.add("");
		 
		 constrGen.add("}");
		 constrGen.add("");
		 
		 return constrGen;
	}
	
	void insertSourceBegin() throws IOException{
		appendSource("resources/cppTemplateHeaderBegin.txt");
	}
	

	private void insertSourceEnd() throws IOException {
		appendSource("resources/cppTemplateHeaderEnd.txt");
	}
	
	private void appendSource(String path) throws IOException {
		appendSource(path, printStream);
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
