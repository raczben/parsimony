package main;

import java.io.BufferedReader;
import java.io.File;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.PrintStream;
import java.util.ArrayList;
import java.util.List;
import java.util.Map.Entry;

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
				
			String oneCTemplate = String.join(ln + "\t", generateOneTemplate(primitive));
			
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


	List<String>  generateOneTemplate(PrimitiveDescriptor primitive){
		String parameterType = "int";
		List<String> cTemplate = new ArrayList<String>();
		cTemplate.add("");
		
		/**
		 * Define The class
		 */
		cTemplate.add("class " + primitive.getPrimitiveClassType() + "{" + ln);
		
		/**
		 * Define fields
		 */
		cTemplate.add("\t//Verilog Parameters:");
		for(Entry<String, ParameterDescriptior> parameter : primitive.getParameters().entrySet()){
			parameterType = String.valueOf(parameter.getValue().getType()).toLowerCase();
			cTemplate.add("\t" + parameterType + " " + parameter.getKey() + ";");				 
		}
		cTemplate.add("\t//Verilog Ports in definition order:");
		for(Entry<String, PortDescriptior> port : primitive.getPorts().entrySet()){
			cTemplate.add("\tNetFlow* " + port.getKey() + "; // " + port.getValue());				 
		}
		
		cTemplate.add("\t");
		

		/**
		 * Define the constructor
		 */
		cTemplate.addAll(generateConstructor(primitive));
		 
		 /**
		  * Wait on event register function template 
		  */
		 cTemplate.add("\tvoid register_wait_on_event_nets(){");
		 cTemplate.add("\t// TODO");
		 cTemplate.add("\t}");

		 /**
		  * Wait on event register function template 
		  */
		 cTemplate.add("\tvoid calculate(int time){");
		 cTemplate.add("\t// TODO");
		 cTemplate.add("\t}");
		 
		 
		 /**
		  * End class:
		  */
		 cTemplate.add("};");
		 cTemplate.add("");
		 

		 
		 return cTemplate;
	}
	
//	private Collection<? extends String> indent(Arra<String> codeList) {
//		for(int i = 0; i<codeList.size(); i++){
//			codeList.re = "\t" + codeList[i];
//		}
//		return codeList;
//	}


	List<String>  generateConstructor(PrimitiveDescriptor primitive){
		List<String> cTemplate = new ArrayList<String>();
		cTemplate.add("");
		String parameterType = "int";
		
		
		/**
		 * Define the constructor
		 */
		cTemplate.add("\t" + primitive.getPrimitiveClassType() + "(");
		cTemplate.add("\t\t//Verilog Parameters:");
		for(Entry<String, ParameterDescriptior> parameter : primitive.getParameters().entrySet()){
			parameterType = String.valueOf(parameter.getValue().getType()).toLowerCase();
			cTemplate.add("\t\t" + parameterType + " " + parameter.getKey() + ", // Default: " + parameter.getValue().getDefaultValue());				 
		}
		cTemplate.add("\t\t//Verilog Ports in definition order:");
		int i = 0;
		for(Entry<String, PortDescriptior> port : primitive.getPorts().entrySet()){
			 i++;
			 if(i < primitive.getPorts().size()){
				 cTemplate.add("\t\tNetFlow* " + port.getKey() + ", // " + port.getValue());
			 }
			 else{
				 cTemplate.add("\t\tNetFlow* " + port.getKey() + " // " + port.getValue());
			 }
		 }
		 cTemplate.add("\t\t){");
		 
		 /**
		  * Assign default arguments:
		  */
		 cTemplate.add("\t");
		 cTemplate.add("\t\t// Assign parameters and ports: ");
		 
		 cTemplate.add("\t\t//Verilog Parameters:");
		 for(Entry<String, ParameterDescriptior> parameter : primitive.getParameters().entrySet()){
			 cTemplate.add("\t\tthis->" + parameter.getKey() + " = " + parameter.getKey() + "; // Default: " + parameter.getValue().getDefaultValue());				 
		 }
		 cTemplate.add("\t\t//Verilog Ports in definition order:");
		 for(Entry<String, PortDescriptior> port : primitive.getPorts().entrySet()){
			 cTemplate.add("\t\tthis->" + port.getKey() + " = " + port.getKey() + "; // " + port.getValue());				 
		 }

		 cTemplate.add("\t");
		 cTemplate.add("\t\tregister_wait_on_event_nets();");
		 cTemplate.add("\t");
		 
		 cTemplate.add("\t}");
		 cTemplate.add("\t");
		 
		 return cTemplate;
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
