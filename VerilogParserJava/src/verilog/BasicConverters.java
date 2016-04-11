package verilog;

import main.Logger;
import antlr.Verilog2001Parser.Constant_expressionContext;

public class BasicConverters {


    /**
     * Verilog identifiers can contains special characters which are illegal
     * characters in a c identifier. (ex.: / [ ] ...) toCIdentifier() convert
     * net identifiers into valid c identifiers.
     * 
     * @param str
     * @param uppercase
     * @return
     */
    static String toCIdentifier(String str, Boolean uppercase){
    	String ret;
    	ret = str.replace("_", "__"); 	// underscore
    	ret = ret.replace("/", "_s"); 	// slash
    	ret = ret.replace("\\", "_b");	// backslash
    	ret = ret.replace("<", "_l");	// less than
    	ret = ret.replace(">", "_g");	// greater than
    	ret = ret.replace("[", "_a");	// 
    	ret = ret.replace("]", "_b");	// 
    	ret = ret.replace(".", "_d");	// dot 
    	
    	if (uppercase)
    		return ret.toUpperCase();
    	
    	return ret;
    }

    /**
     * Convert a context to integer.
     * 
     * @param constExpr
     * @return
     */
    public static int toInteger(Constant_expressionContext constExpr){
    	try{
    		return Integer.valueOf(constExpr.getText());
    	}
    	catch(NumberFormatException ex){
    		Logger.writeError("Unsupproted number format: " + ex.getMessage());
    		return 0;
    	}
    }
}
