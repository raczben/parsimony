package verilog;

import java.io.Serializable;
import java.util.LinkedHashMap;
import java.util.Map;
import java.util.Map.Entry;

import antlr.Verilog2001Parser.RangeContext;


public class PrimitiveDescriptor implements Serializable {
	/**
	 * 
	 */
	private static final long serialVersionUID = 2315425009134984076L;
	
	/**
	 * The identifier of the primitive. (aka. the name if the module)
	 */
	private String primitiveIdentifier = null;
	
	/**
	 * The in/out/inout ports of this module. The map key stores the name of
	 * each port the value stores the direction (in/out/inout).
	 */
	private Map<String, PortDescriptior> ports = new LinkedHashMap<String, PortDescriptior>();
	
	/**
	 * parameters stores the parameters (aka. generics) of this module. The key
	 * of the map stores the name (aka. identifier) of the parameter, the values
	 * stores the default value and the type of each parameter.
	 */
	private Map<String, ParameterDescriptior> parameters = new LinkedHashMap<String, ParameterDescriptior>();
	
	public PrimitiveDescriptor(){
		
	}
	
	public void printInfo() {
		System.out.println("New primitive:");
		System.out.println("\tName: " + getPrimitiveIdentifier());
		System.out.println("\t_Params________Type_______Defaults_");

		for (Entry<String, ParameterDescriptior> entry : parameters.entrySet()){
		    System.out.println("\t\t" + entry.getKey() + "  " + entry.getValue().getType() +  "  " + entry.getValue().getDefaultValue());
		}

		System.out.println("");
		System.out.println("\t_Ports________Direction_");
		for (Map.Entry<String, PortDescriptior> entry : ports.entrySet()){
		    System.out.println("\t " + entry.getKey() + "\t\t" + entry.getValue());
		}
	}
	
	public String getPrimitiveClassType(){
		return getPrimitiveIdentifier();
	}
	

	public String getPrimitiveHeaderFilename(){
		return getPrimitiveIdentifier() + ".h";
	}

	public String getPrimitiveSourceFilename(){
		return getPrimitiveIdentifier() + ".cpp";
	}
	
	public final Map<String, ParameterDescriptior> getParameters(){
		return parameters; 
	}

	public final Map<String, PortDescriptior> getPorts() {
		return ports;
	}

	public final String getPrimitiveIdentifier() {
		return primitiveIdentifier;
	}

	public void setPrimitiveIdentifier(String moduleId) {
		primitiveIdentifier = moduleId;
		
	}
	
	public void addParameter(String parameterIdentifier, Type parameterType, String defaultValue){
		parameters.put(parameterIdentifier, new ParameterDescriptior(parameterType, defaultValue));
	}

	public void updatePort(String portIdentifier, Direction direction, Integer msb, Integer lsb) {
		if(! ports.containsKey(portIdentifier)){
			ports.put(portIdentifier, new PortDescriptior(portIdentifier));
		}
		PortDescriptior port = ports.get(portIdentifier);
		
		port.setDirection(direction);
		port.setLsb(lsb);
		port.setMsb(msb);
	}

	public void addPort(String portIdentifier) {
		ports.put(portIdentifier, new PortDescriptior(portIdentifier));
	}

	public void updatePort(String portIdentifier, Direction direction, RangeContext range) {
		if(! ports.containsKey(portIdentifier)){
			ports.put(portIdentifier, new PortDescriptior(portIdentifier));
		}
		PortDescriptior port = ports.get(portIdentifier);
		
		port.setDirection(direction);
		port.setRange(range);
	}



}
