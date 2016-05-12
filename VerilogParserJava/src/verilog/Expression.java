package verilog;

import java.math.BigInteger;
import java.util.ArrayList;
import java.util.List;

public class Expression {
	List<ExpressionBit> bits = new ArrayList<ExpressionBit>();
	
	public Expression(NetDescriptor netDescriptor) {
		bits.add(new ExpressionBit(netDescriptor));
	}

	public Expression() {
	}

	public Expression(int intVal) {
		bits.add(new ExpressionBit(intVal));
	}

	public Expression(BigInteger intVal) {
		bits.add(new ExpressionBit(intVal));
	}

	@Deprecated
	public BigInteger getInteger() {
		return getInteger(0);
	}


	public BigInteger getInteger2() {
		BigInteger retInt = BigInteger.valueOf(0);
		if(null == bits){
			return null;
		}
		int bitId = 1;
		for(ExpressionBit bit: bits){
			if(null != bit){
				retInt =retInt.add(bit.getInteger().multiply(BigInteger.valueOf(bitId)));				
			}
			bitId++;
		} 
		return retInt;
	}
	

	public BigInteger getInteger(int i) {
		return bits.get(i).getInteger();
	}

	public void addBit(ExpressionBit parseExpression) {
		bits.add(parseExpression);		
	}
	

	public void addBit(int index, Expression exp) {
		for(ExpressionBit bit : exp.bits){
			if(index<0)
				bits.add(bit);
			else
				bits.add(index, bit);
		}
	}
	
	public void addBit(Expression exp) {
		addBit(-1, exp);
	}


	public boolean isNet(int i) {
		return bits.get(i).isNet();
	}
	
	@Deprecated
	public boolean isNet() {
		return isNet(0);
	}


	public final NetDescriptor getNet(int i) {
		return bits.get(i).getNet();
	}

		
	@Deprecated
	public final NetDescriptor getNet() {
		return getNet(0);
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
		String ret ="";
		for(ExpressionBit bit : bits){
			ret += bit.toString();
		}
		return ret;
	}
	
	
	
}
