package main;

import java.io.Serializable;
import java.util.ArrayList;
import java.util.List;

enum Type {
	PARAMETER_STRING_T,
	PARAMETER_INT_T,
	PARAMETER_ENUM_T,
	VOID,
	UNDEFINED
}

public class ParameterInfo implements Serializable{
	/**
	 * 
	 */
	private static final long serialVersionUID = 1L;
	String defaultValue;
	Type type;
	
	final static List<String> parameterEnums = new ArrayList<String>(){/**
		 * 
		 */
		private static final long serialVersionUID = 1L;

	{
	    add("\"FALSE\"");
	    add("\"TRUE\"");
	    //add("\"UNPLACED\"");
	}};;
	
	public ParameterInfo(
			Type type_,
			String defaultValue_) {
		this.type = type_;
		this.defaultValue = defaultValue_;
	}
	
	static boolean isEnum(String val){
		return parameterEnums.contains(val);
	}
	
}
