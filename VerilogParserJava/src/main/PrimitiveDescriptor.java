package main;

import java.io.Serializable;
import java.util.LinkedHashMap;
import java.util.Map;
import java.util.Map.Entry;

public class PrimitiveDescriptor implements Serializable {
	/**
	 * 
	 */
	private static final long serialVersionUID = 2315425009134984076L;
	
	/**
	 * The identifier of the primitive. (aka. the name if the module)
	 */
	String primitiveIdentifier;
	
	/**
	 * The in/out/inout ports of this module. The map key stores the name of
	 * each port the value stores the direction (in/out/inout).
	 */
	Map<String, Direction> ports = new LinkedHashMap<String, Direction>();
	
	/**
	 * parameters stores the parameters (aka. generics) of this module. The key
	 * of the map stores the name (aka. identifier) of the parameter, the values
	 * stores the default value and the type of each parameter.
	 */
	Map<String, ParameterInfo> parameters = new LinkedHashMap<String, ParameterInfo>();
	
	public void printInfo() {
		System.out.println("New primitive:");
		System.out.println("\tName: " + primitiveIdentifier);
		System.out.println("\t_Params________Type_______Defaults_");

		for (Entry<String, ParameterInfo> entry : parameters.entrySet()){
		    System.out.println("\t\t" + entry.getKey() + "  " + entry.getValue().type +  "  " + entry.getValue().defaultValue);
		}

		System.out.println("");
		System.out.println("\t_Ports________Direction_");
		for (Map.Entry<String, Direction> entry : ports.entrySet()){
		    System.out.println("\t " + entry.getKey() + "\t\t" + entry.getValue());
		}
	}
	
	public String getPrimitiveClassType(){
		return primitiveIdentifier;
	}
	

	public String getPrimitiveHeaderFilename(){
		return primitiveIdentifier + ".h";
	}

	public String getPrimitiveSourceFilename(){
		return primitiveIdentifier + ".cpp";
	}

}
