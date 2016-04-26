package main;

import java.io.BufferedWriter;
import java.io.File;
import java.io.FileWriter;
import java.io.IOException;

enum ThigsToDo{
	NOTHING,
	PAUSE,
	EXIT,
	COUNT}

public class Logger {
	static BufferedWriter errorStream;
	static String magicString = "CARRY";
	static ThigsToDo todoAtMatch = ThigsToDo.NOTHING;

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
		try {
			byte[] b = new byte[5];

			if(ThigsToDo.NOTHING != todoAtMatch){
				if (message.contains(magicString)){
					switch (todoAtMatch){
					case PAUSE:
							
							System.in.read(b, 4, 0);
						break;
					case EXIT:
						errorStream.write("magicString matched: " + magicString);
						System.out.println("magicString matched: " + magicString);
						errorStream.flush();
						System.exit(0);
						break;
					case COUNT:
						System.out.println("COUNT is not implemented");
					default:
						System.out.println("second biggest failure in the world. Default at enum");
					}
				}
			}
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}

	public static void close() throws IOException {
		errorStream.close();		
	}
}
