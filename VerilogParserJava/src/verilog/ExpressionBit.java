package verilog;

import java.math.BigInteger;

public class ExpressionBit {

	NetDescriptor netDescriptor;
	BigInteger intVal;
	
	
	public ExpressionBit(NetDescriptor netDescriptor) {
		this.netDescriptor = netDescriptor;
		intVal = null;
	}

	public ExpressionBit() {
		intVal = null;
		netDescriptor = null;
	}

	public ExpressionBit(int intVal) {
		this.intVal = BigInteger.valueOf(intVal);
		netDescriptor = null;
	}

	public ExpressionBit(BigInteger intVal2) {
		intVal = intVal2;
	}

	public BigInteger getInteger() {
		return intVal;
	}

	public void addBit(Expression parseExpression) {
		// TODO Auto-generated method stub
		
	}

	public boolean isNet() {
		return (null != getNet());
	}

	public final NetDescriptor getNet() {
		if (null != netDescriptor){
			return netDescriptor;
		}
		if(intVal.equals(BigInteger.ZERO)){
			return new NetDescriptor(NetDescriptor.const_zero_net_id);
		}
		if(intVal.equals(BigInteger.ONE)){
			return new NetDescriptor(NetDescriptor.const_one_net_id);
		}
		return null;
	}

//	public boolean isNet() {
//		// TODO Auto-generated method stub
//		return false;
//	}
	
/*	public Expression(String expression) {
		if(expression.equals("1'b0")){
			netDescriptor = 
		}
	}*/
	
	@Override
	public String toString() {
		String ret;
		ret = "Net: " + netDescriptor + "  int: " + intVal;
		return ret;
	}
}
