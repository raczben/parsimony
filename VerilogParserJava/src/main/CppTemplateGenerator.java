package main;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.PrintStream;
import java.util.Map.Entry;

public class CppTemplateGenerator {
	static PrintStream printStream;

	static void init(PrintStream printStream_){
		CppTemplateGenerator.printStream = printStream_;
	}
	
	static void generateCTemplate() throws IOException{
		PrimitiveMapper.loadData();
		
		insertSourceBegin();
		
		for( PrimitiveDescriptor primitive : PrimitiveMapper.primitiveDEclarationList){
			printStream.println(generateOneTemplate(primitive));
		}
	}
			 
			 
	static String generateOneTemplate(PrimitiveDescriptor primitive){
		 String parameterType = "int";
		 /**
		  * Define The class
		  */
		 String cTemplate = "class " + primitive.getPrimitiveClassType() + "{\n";
		 
		 /**
		  * Define fields
		  */
		 cTemplate += "\t//Verilog Parameters:\n";
		 for(Entry<String, ParameterInfo> parameter : primitive.parameters.entrySet()){
			 parameterType = String.valueOf(parameter.getValue().type).toLowerCase();
			 cTemplate += "\t" + parameterType + " " + parameter.getKey() + ";\n";				 
		 }
		 cTemplate += "\t//Verilog Ports in definition order:\n";
		 for(Entry<String, Direction> port : primitive.ports.entrySet()){
			 cTemplate += "\tNetFlow* " + port.getKey() + "; // " + port.getValue() + "\n";				 
		 }
		 
		 cTemplate += "\t\n";
		 
		 /**
		  * Define the constructor
		  */
		 cTemplate += "\t" + primitive.getPrimitiveClassType() + "(\n";
		 cTemplate += "\t\t//Verilog Parameters:\n";
		 for(Entry<String, ParameterInfo> parameter : primitive.parameters.entrySet()){
			 parameterType = String.valueOf(parameter.getValue().type).toLowerCase();
			 cTemplate += "\t\t" + parameterType + " " + parameter.getKey() + ", // Default: " + parameter.getValue().defaultValue + "\n";				 
		 }
		 cTemplate += "\t\t//Verilog Ports in definition order:\n";
		 int i = 0;
		 for(Entry<String, Direction> port : primitive.ports.entrySet()){
			 i++;
			 if(i < primitive.ports.size()){
				 cTemplate += "\t\tNetFlow* " + port.getKey() + ", // " + port.getValue() + "\n";
			 }
			 else{
				 cTemplate += "\t\tNetFlow* " + port.getKey() + " // " + port.getValue() + "\n";
			 }
		 }
		 cTemplate += "\t\t){\n";
		 
		 /**
		  * Assign default arguments:
		  */
		 cTemplate += "\t\n";
		 cTemplate += "\t\t// Assign parameters and ports: \n";
		 
		 cTemplate += "\t\t//Verilog Parameters:\n";
		 for(Entry<String, ParameterInfo> parameter : primitive.parameters.entrySet()){
			 cTemplate += "\t\tthis->" + parameter.getKey() + " = " + parameter.getKey() + "; // Default: " + parameter.getValue().defaultValue + "\n";				 
		 }
		 cTemplate += "\t\t//Verilog Ports in definition order:\n";
		 for(Entry<String, Direction> port : primitive.ports.entrySet()){
			 cTemplate += "\t\tthis->" + port.getKey() + " = " + port.getKey() + "; // " + port.getValue() + "\n";				 
		 }

		 cTemplate += "\t\n";
		 cTemplate += "\t\tregister_wait_on_event_nets();\n";
		 cTemplate += "\t\n";
		 
		 cTemplate += "\t}\n";
		 cTemplate += "\t\n";
		 
		 /**
		  * Wait on event register function template 
		  */
		 cTemplate += "\tvoid register_wait_on_event_nets(){\n";
		 cTemplate += "\t// TODO\n";
		 cTemplate += "\t}\n";

		 /**
		  * Wait on event register function template 
		  */
		 cTemplate += "\tvoid calculate(int time){\n";
		 cTemplate += "\t// TODO\n";
		 cTemplate += "\t}\n";
		 
		 
		 /**
		  * End class:
		  */
		 cTemplate += "};\n";
		 cTemplate += "\n";
		 

		 
		 return cTemplate;
	}
	
	static void insertSourceBegin() throws IOException{
		InputStream is;
		BufferedReader br;
		String path;
		
		path = "resources/cppTemplateHeaderBegin.txt";
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
