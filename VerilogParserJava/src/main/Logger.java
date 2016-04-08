package main;

import java.io.BufferedWriter;
import java.io.File;
import java.io.FileWriter;
import java.io.IOException;

public class Logger {
	static BufferedWriter errorStream;

	public static void init(String errorLogName) throws IOException{
		errorStream = new BufferedWriter(new FileWriter(new File(errorLogName)));
		
	}
	
	public static void writeError(String errorMessage){
		String message = "ERROR: " + Thread.currentThread().getName() + ": " + errorMessage;
		writeMessage(message);
	}
	

	public static void writeWarning(String warningMessage){
		String message = "WARNING: " + Thread.currentThread().getName() + ": " + warningMessage;
		writeMessage(message);
	}
	

	public static void writeInfo(String infoMessage){
		String message = "INFO: " + Thread.currentThread().getName() + ": " + infoMessage;
		writeMessage(message);
	}
	
	synchronized private static void writeMessage(String message){
		System.out.println(message);
		try {
			errorStream.write(message + "\n");
			errorStream.flush();
		} catch (IOException e) {
			System.out.println("Biggest failure in the world. Cannot write error stream.");
			e.printStackTrace();
			System.exit(-1);
		}
	}

	public static void close() throws IOException {
		errorStream.close();		
	}
}
