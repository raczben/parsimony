package verilog;

import java.io.Serializable;
import java.util.HashMap;

public class PortContainer extends HashMap<String, PortDescriptior> implements Serializable{
	/**
	 * 
	 */
	private static final long serialVersionUID = 1L;
	
	public void add(PortDescriptior portDescriptor){
		put(portDescriptor.netIdentifier, portDescriptor);
	}
	
}
