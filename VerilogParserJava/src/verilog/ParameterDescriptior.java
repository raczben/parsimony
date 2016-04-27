package verilog;

import java.io.Serializable;
import java.math.BigInteger;
import java.util.HashMap;
import java.util.Map;


public class ParameterDescriptior implements Serializable{
	/**
	 * 
	 */
	private static final long serialVersionUID = 1L;
	private String defaultValueStr = null;
	private BigInteger defaultValueInt = null;
	private String defaultValueCFormat;
	private Type type;
//	protected String parameterIdentifier;
	
	final static Map <String, String> parameterEnums = new HashMap<String, String>(){/**
		 * 
		 */
		private static final long serialVersionUID = 1L;

	{
	    put("\"FALSE\"", "FALSE");
	    put("\"TRUE\"", "TRUE");
	    //add("\"UNPLACED\"");
	}};;
	
	public ParameterDescriptior(
			Type type_,
			String defaultValue_) {
		this.type = type_;
		this.setValue(defaultValue_);
	}
	
	public ParameterDescriptior(
			Type type_,
			int defaultValue_) {
		this.type = type_;
		this.setValue(BigInteger.valueOf(defaultValue_));
	}


	public ParameterDescriptior(ParameterDescriptior parameterDescriptior) {
		if(null != parameterDescriptior.defaultValueStr){
			this.defaultValueStr = new String(parameterDescriptior.defaultValueStr);
		}
		if(null != parameterDescriptior.defaultValueInt){
			this.defaultValueInt = parameterDescriptior.defaultValueInt;
		}
		this.defaultValueCFormat = new String(parameterDescriptior.getDefaultValueCformat());
		this.type = parameterDescriptior.type;
	}

	public static boolean isEnum(String val){
		return parameterEnums.containsKey(val);
	}

	public final Type getType() {
		return type;
	}

	/**
	 * 
	 * @return
	 */
	public final String getDefaultValue() {
		if(null != defaultValueStr){
			return defaultValueStr;
		}
		return String.valueOf(defaultValueInt);
	}

	/**
	 * 
	 * @return
	 */
	public final String getDefaultValueCformat() {
		if (null == defaultValueStr){
			return defaultValueCFormat;
		}
		if(isEnum(defaultValueStr)){
			return parameterEnums.get(defaultValueStr);
		}
		return defaultValueStr;
	}

	/**
	 * 
	 * @param bigInteger
	 */
	public  void setValue(BigInteger bigInteger) {
		defaultValueStr = null;
		defaultValueInt = bigInteger;
		defaultValueCFormat = "0x" + defaultValueInt.toString(16);
		type = Type.PARAMETER_INT_T;
	}
	
	public void setValue(String value){
		defaultValueStr = value;
		defaultValueInt = null;
		if(null == type){
			if (isEnum(defaultValueStr)){
				defaultValueCFormat = parameterEnums.get(defaultValueStr);
				type = Type.PARAMETER_ENUM_T;
				return;
			}else {
				defaultValueCFormat = defaultValueStr;
				type = Type.PARAMETER_STRING_T;
			}
		}
			
		
	}
	
	@Override
	public String toString() {
		String ret = "";
		
		ret += " defaultValueStr: " + defaultValueStr;
		ret += " defaultValueInt: " + defaultValueInt;
		ret += " defaultValueCFormat: " + defaultValueCFormat;
		ret += " type: " + type;
		return ret;
	}

	public String getParameterIdentifier() {
		return "";
	}
	
	
}
