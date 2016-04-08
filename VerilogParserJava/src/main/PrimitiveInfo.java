package main;

import java.util.ArrayList;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;

@Deprecated
public class PrimitiveInfo {
	String verilogTypeName;
	String cTypeName;
	
	/** Map key is the name of the parameter
	 * The value is the default value of this parameter.
	 */
	Map<String, String> parameters;
	List<String> ports;
	
	public PrimitiveInfo() {
		parameters = new LinkedHashMap<String, String>();
		ports = new ArrayList<String>();
	}
	
	
	
	
}
