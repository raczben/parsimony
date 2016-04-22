package main;

import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.StandardCopyOption;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

import org.antlr.v4.runtime.ANTLRInputStream;
import org.antlr.v4.runtime.CommonTokenStream;
import org.antlr.v4.runtime.tree.ParseTreeWalker;

import sourceGenerator.SourceGenerator;
import verilog.PrimitiveDescriptor;
import antlr.Verilog2001Lexer;
import antlr.Verilog2001Parser;
import antlr.Verilog2001Parser.Module_declarationContext;


public class Main {
	
	static final Map<FileNamesEnum, String> simulationFilenames = new HashMap<FileNamesEnum, String>(){/**
		 * 
		 */
		private static final long serialVersionUID = 1L;

	{
		put(FileNamesEnum.NET_INST_HEADER, "netinstatiation.h");
		put(FileNamesEnum.NET_INST_SRC, "netinstatiation.cpp");
//		put(FileNamesEnum.PRIM_INST_HEADER, "primitiveInstation.h");
		put(FileNamesEnum.PRIM_INST_SRC, "primitiveInstatiation.cpp");
	}
	};
	
	/**
	 * This was the first ANTLR example function. It collects and orders the
	 * primitives from a post-xxx simulation module.
	 * 
	 * @throws FileNotFoundException
	 * @throws IOException
	 */
	void firstprinter() throws FileNotFoundException, IOException{
		Verilog2001Lexer lexer = new Verilog2001Lexer(new ANTLRInputStream(new FileReader(new File("./par.v"))));
		
		// Get a list of matched tokens
		CommonTokenStream tokens = new CommonTokenStream(lexer);
		
		// Pass the tokens to the parser
		Verilog2001Parser parser = new Verilog2001Parser(tokens);
		
		// Specify our entry point
		Module_declarationContext verilogContext = parser.module_declaration();
		
		// Walk it and attach our listener
		ParseTreeWalker walker = new ParseTreeWalker();
		AntlrVerilogListener listener = new AntlrVerilogListener();
		
		walker.walk(listener, verilogContext);
		listener.printResults();
		
	}
	
	/**
	 * It is more than a net instancer! :)
	 * It parse a post-xxx simulation module and fetch the followings:
	 * 	- The nets (aka. wires) and generates an c file which contains these
	 * 		nets instantiation.
	 *  - The instantiated primitives and generates a c file  which contains
	 *  	these primitives instantiations.
	 * 
	 * @throws FileNotFoundException
	 * @throws IOException
	 */
	static void compile_verilog_to_c() throws FileNotFoundException, IOException{

//	    PrimitiveMapper primitiveMapper = new PrimitiveMapper();
	    if(! PrimitiveMapper.loadData()){
	    	Logger.writeError("Failure");
	    	return;
	    }
	    PrimitiveMapper.printResults();
		
		
		Verilog2001Lexer lexer = new Verilog2001Lexer(new ANTLRInputStream(new FileReader(new File("./par.v"))));
		
		// Get a list of matched tokens
		CommonTokenStream tokens = new CommonTokenStream(lexer);
		
		// Pass the tokens to the parser
		Verilog2001Parser parser = new Verilog2001Parser(tokens);
		
		// Specify our entry point
		Module_declarationContext verilogContext = parser.module_declaration();
		
		// Walk it and attach our listener
		ParseTreeWalker walker = new ParseTreeWalker();
		Netinstancer listener = new Netinstancer();
		
		walker.walk(listener, verilogContext);
		listener.printResults();
		
	}
	
	/**
	 * primitiveMapper() reads all *.v files from a directory (given in
	 * directoryPath) and parse them. It search definitions of primitives and
	 * parse them. It stores all information in a file at the end of the parsing.
	 * It fetch the followings from a primitive:
	 *  - The identifier of the module
	 *  - The port list with direction
	 *  - The parameters with default value and type.
	 *  
	 * @param directoryPath
	 * @throws FileNotFoundException
	 * @throws IOException
	 * @throws InterruptedException
	 */
	static void primitiveMapper(String directoryPath) throws FileNotFoundException, IOException, InterruptedException{
		
		File folder = new File(directoryPath);

    	List<Thread> threads = new ArrayList<Thread>();
		
    	List<String> jobs  = Collections.synchronizedList(new ArrayList<String>());
    	
//		int i = 0;
	    for (final File fileEntry : folder.listFiles()) {
	        System.out.flush();
	        System.err.flush();
	        if (fileEntry.isFile()) {
	        	String fileName = fileEntry.getName();
	            if(fileName.endsWith(".v")) {
	            	jobs.add(fileEntry.getAbsolutePath());
	            	
	            
	            }
	            else {
	            	System.out.println("Skipping file: " + fileName);
	            }
	            
	        }
	        
//	        i++;
//	        if(i>10)
//	        	break;
	    }
	    
	    for(int threadId = 0; threadId<4; threadId++){
			ParseTreeWalker walker = new ParseTreeWalker();
			PrimitiveMapper listener = new PrimitiveMapper();
	    	ParserWorker parserWorker = new ParserWorker(jobs, walker, listener);
	    	threads.add(new Thread(parserWorker, "Thread" + threadId));
	    }
	    
	    for(Thread thread : threads){
	    	thread.start();	    	
	    }
	    
	    for(Thread thread : threads){
	    	thread.join();
	    }
	    
	    generatePrimitiveIncludeHeader();

	    PrimitiveMapper.printResults();
	    
	    List<PrimitiveDescriptor> list = PrimitiveMapper.primitiveDEclarationList;
	    
	    PrimitiveMapper.saveData();
	    
	    
	    PrimitiveMapper.loadData();
	    PrimitiveMapper.printResults();
	    
	    if(list.equals( PrimitiveMapper.primitiveDEclarationList)){
	    	System.out.println("Save success");
	    }
	    
	    
	}
	
	/**
	 * generateCTemplate() generates template classes from previously mapped
	 * (see primitiveMapper() ) primitives. This template helps you to write a
	 * code for a primitive.
	 * 
	 * @throws IOException
	 */
	private static void generateCTemplate() throws IOException {
		CppTemplateGenerator cppTemplateGen = new CppTemplateGenerator("./generatedCppTemplates");
		cppTemplateGen.generateCTemplate();
	}
	
	/**
	 * @throws IOException 
	 * 
	 */
	private static void copyResultsToCppProject() throws IOException {
		for(String filename : simulationFilenames.values()){
			File source = new File(filename);
			File target = new File("..\\cppsimulator\\cppsimulator", filename);
			Logger.writeInfo("Copy from: " + source.getAbsolutePath() + "  to " + target.getAbsolutePath());
			Files.copy(source.toPath(), target.toPath(), StandardCopyOption.REPLACE_EXISTING);
		}
		
	}
	

	/**
	 * @throws IOException 
	 * 
	 */
	private static void generatePrimitiveIncludeHeader() throws IOException {
		SourceGenerator srcgen = new SourceGenerator("");
		srcgen.add("#ifndef PRIMITIVE_INCLUDE_H");
		srcgen.add("#define PRIMITIVE_INCLUDE_H");
		
		File folder = new File("generatedCppTemplates");
	    for (final File fileEntry : folder.listFiles()) {
	        System.out.flush();
	        System.err.flush();
	        if (fileEntry.isFile()) {
	        	String fileName = fileEntry.getName();
	            if(fileName.endsWith(".h")) {
	            	srcgen.add("#include \"" + fileName + "\"");
	            }
	            else {
	            	System.out.println("Skipping file: " + fileName);
	            }
	        }
	    }
	    
    	srcgen.add("");

		srcgen.add("#endif // PRIMITIVE_INCLUDE_H");
	    
	    FileWriter outFile = new FileWriter(new File("generatedCppTemplates\\PrimitiveInclude.h"));
	    outFile.write(srcgen.toString());
	    outFile.close();
		
		
	}
	
	/**
	 * The main function. Choose (uncomment) functions below. First you should
	 * run the primitiveMapper() then the others. See above the description of
	 * the functions.
	 *   
	 * @param arg
	 * @throws FileNotFoundException
	 * @throws IOException
	 * @throws InterruptedException
	 */
	public static void main(String[] arg) throws FileNotFoundException, IOException, InterruptedException{
		Logger.init("error.log");
		
		
//		primitiveMapper("C:\\Users\\ebenera\\bme\\2015_16_tavasz\\onlab2\\xilinxPrimitives\\simprims");
		compile_verilog_to_c();
//		generateCTemplate();
//		generatePrimitiveIncludeHeader();
//		copyResultsToCppProject();
	
		
		Logger.close();
		System.out.println("Exit");
	}


	
}

