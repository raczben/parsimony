package main;

import java.io.File;
import java.io.FileReader;
import java.io.IOException;
import java.util.List;

import org.antlr.v4.runtime.ANTLRInputStream;
import org.antlr.v4.runtime.CommonTokenStream;
import org.antlr.v4.runtime.tree.ParseTree;
import org.antlr.v4.runtime.tree.ParseTreeWalker;

import antlr.Verilog2001Lexer;
import antlr.Verilog2001Parser;

public class ParserWorker implements Runnable {
	List<String> jobs;
	ParseTreeWalker walker;
	PrimitiveMapper listener;
		
	public ParserWorker(List<String> jobs_, ParseTreeWalker walker_, PrimitiveMapper listener_) {
		this.jobs = jobs_;
		this.walker = walker_;
		this.listener = listener_;
	}
	
	@Override
	public void run() {
		String filePath;
		Verilog2001Lexer lexer;
		while(true){
		
			try {
				try{
				filePath = jobs.remove(0);
				Logger.writeInfo("Parsing file: " + filePath + " from " + Thread.currentThread().getName());
				}catch (IndexOutOfBoundsException ex){
					Logger.writeInfo("There is no job. By from " + Thread.currentThread().getName());
					return;
				}
				
				lexer = new Verilog2001Lexer(new ANTLRInputStream(new FileReader(new File(filePath))));
			} catch (IOException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
				return;
			}
			
			// Get a list of matched tokens
			CommonTokenStream tokens = new CommonTokenStream(lexer);
			
			// Pass the tokens to the parser
			Verilog2001Parser parser = new Verilog2001Parser(tokens);
		        		
			// Specify our entry point
	//		ParseTree verilogContext = parser.module_declaration();
			ParseTree sourceverilogContext = parser.source_text();
			
			walker.walk(listener, sourceverilogContext);
			System.out.flush();
			System.err.flush();
		}
	}

}
