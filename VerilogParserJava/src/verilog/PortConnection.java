package verilog;


enum EXP_OR_NET{
	EXPRESSION,
	NET
}

public class PortConnection {
	Expression expression;
	PortDescriptior portIdentifier;
	

	public PortConnection(PortDescriptior portIdentifier, Expression expression){
		this.expression = expression; 
		this.portIdentifier = portIdentifier; 
	}


	public final Expression getExpression() {
		return expression;
	}
	
	@Override
	public String toString() {
		String ret;
		ret = "Expr: " + expression.toString() + "  portId: " + portIdentifier;
		return ret;
	}
	
	public final PortDescriptior getPortIdentifier(){
		return portIdentifier;
	}

	/*PortConnection(String value){
		this(value, EXP_OR_NET.NET);
	}
	
	@Deprecated
	PortConnection(String value, EXP_OR_NET flag){
		if(EXP_OR_NET.EXPRESSION == flag){
			expression = Integer.valueOf(value, 10);
			netIdentifier = null;
		}
		if(EXP_OR_NET.NET == flag){
			expression = null;
			netIdentifier = value;
		}		
	}
	
	PortConnection(String value, Integer radix){
		if(null == radix){
			radix = 10;
		}
		expression = Integer.valueOf(value.substring(3), radix);
		
		if(1 == expression){
			netIdentifier = "CONST_ONE";
			expression = null;
		}
		else if(0 == expression){
			netIdentifier = "CONST_ZERO";
			expression = null;
		}
	}	
	
	public String toString(){
		if(null != expression){
			return String.valueOf(expression);
		}

		if(null != netIdentifier){
			return netIdentifier.ge;
		}
		return null;		
	}
	
	boolean isExpression(){
		return null != expression;
	}
	
	boolean isNet(){
		return null != netIdentifier;
	}*/
}
