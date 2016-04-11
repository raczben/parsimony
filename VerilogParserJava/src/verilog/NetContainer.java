package verilog;

import java.util.HashMap;

public class NetContainer extends HashMap<String, NetDescriptor> {

	/**
	 * 
	 */
	private static final long serialVersionUID = 1L;
	
	public void add(NetDescriptor netDescriptor){
		put(netDescriptor.netIdentifier, netDescriptor);
	}
	

}
