package main;

import java.math.BigInteger;
import java.util.List;

import org.antlr.v4.runtime.tree.ParseTree;
import org.antlr.v4.runtime.tree.TerminalNode;

import verilog.Expression;
import verilog.NetDescriptor;
import antlr.Verilog2001Parser.Attribute_instanceContext;
import antlr.Verilog2001Parser.Binary_operatorContext;
import antlr.Verilog2001Parser.ConcatenationContext;
import antlr.Verilog2001Parser.ExpressionContext;
import antlr.Verilog2001Parser.Hierarchical_identifierContext;
import antlr.Verilog2001Parser.NumberContext;
import antlr.Verilog2001Parser.PrimaryContext;
import antlr.Verilog2001Parser.Range_expressionContext;
import antlr.Verilog2001Parser.TermContext;
import antlr.Verilog2001Parser.Unary_operatorContext;

public class ParseExpression {
	static Expression parseExpression(ExpressionContext expression){
		for(int childIndex = 0; childIndex<expression.getChildCount(); childIndex++){
			ParseTree expressionChild = expression.getChild(childIndex);
			
			if(expressionChild instanceof TermContext){
				return parseTerm((TermContext) expressionChild);
			}
			
			if(expressionChild instanceof Binary_operatorContext){
				Logger.writeError("Unsupported Binary operator in expression: value: " + expressionChild.getText());
				return null;
			}
			
			if(expressionChild instanceof Attribute_instanceContext){
				Logger.writeError("Unsupported Attribute instance in expression: value: " + expressionChild.getText());
				return null;
			}
			
			if(expressionChild instanceof ExpressionContext){
				Logger.writeError("Unsupported nested expressions: value: " + expressionChild.getText());
				return null;
			}


			Logger.writeError("Unsupported child type: " + expressionChild.getClass() + "  value: " + expressionChild.getText());
			return null;
		}
		return null;
		
	}
	
	
	static Expression parseTerm(TermContext term){
		Expression retExp = null;

		for(int childIndex = 0; childIndex<term.getChildCount(); childIndex++){
			ParseTree termChild = term.getChild(childIndex);
			
			if(termChild instanceof Unary_operatorContext){
				Logger.writeError("Unsupported Unary operator in TermContext: value: " + termChild.getText());
				return null;
			}
			if(termChild instanceof Attribute_instanceContext){
				Logger.writeError("Unsupported Attribute_instanceContext in TermContext: value: " + termChild.getText());
				return null;
			}

			if(termChild instanceof PrimaryContext){
				PrimaryContext primary = (PrimaryContext)termChild;
				if(null != primary.number()){
					NumberContext number = primary.number();
					
					TerminalNode num = number.Hex_number();
	    			if (null != num){
	    				retExp = new Expression(new BigInteger(num.getText().replaceAll(".+[hH]", ""), 16));
	    			}
	    			num = number.Decimal_number();
	    			if (null != num){
	    				retExp = new Expression(Integer.parseInt(num.getText().replaceAll(".+[dD]", ""), 10));
	    			}
	    			num = number.Binary_number();
	    			if (null != num){
	    				retExp = new Expression(Integer.parseInt(num.getText().replaceAll(".+[bB]", ""), 2));
	    			}
	    			num = number.Octal_number();
	    			if (null != num){
	    				retExp = new Expression(Integer.parseInt(num.getText().replaceAll(".+[oO]", ""), 2));
	    			}
	    			num = number.Real_number();
	    			if (null != num){
	    				retExp = new Expression(Integer.parseInt(num.getText()));
	    			}
	    			return retExp;
				}
				if(null != primary.concatenation()){
					ConcatenationContext concat = primary.concatenation();
					retExp = new Expression();
					for(ExpressionContext exp : concat.expression()){
						retExp.addBit(parseExpression(exp));
					}
					continue;
				}
				if(null != primary.hierarchical_identifier()){
					Hierarchical_identifierContext hierId = primary.hierarchical_identifier();
					if(null != primary.range_expression()){
						Range_expressionContext rangeExp = primary.range_expression();
						Expression msbExp = parseExpression(rangeExp.msb_constant_expression().constant_expression().expression());
						Expression lsbExp = parseExpression(rangeExp.lsb_constant_expression().constant_expression().expression());
						retExp = new Expression(new NetDescriptor(hierId.getText(), msbExp.getInteger().intValue(), (int)lsbExp.getInteger().intValue()));
						
					} if(primary.expression().size()>0){
						List<ExpressionContext> expList = primary.expression();
						if(expList.size()>1){
							Logger.writeError("Unsupported multiple expression: hierId " + hierId.getText() + "  primary.expression(): " + expList);
							return null;							
						}
						ExpressionContext exp = expList.get(0);
						Expression indexExp = parseExpression(exp);
						retExp = new Expression(new NetDescriptor(hierId.getText(), indexExp.getInteger().intValue(), (int)indexExp.getInteger().intValue()));
						
					}else{
						Integer vectorIndex = 0;
						if(null != hierId.simple_hierarchical_identifier()){
							String netName = hierId.simple_hierarchical_identifier().simple_hierarchical_branch().Simple_identifier(0).getText();
							try {
								TerminalNode num = hierId.simple_hierarchical_identifier().simple_hierarchical_branch().Decimal_number(0);
								vectorIndex =Integer.parseInt(num.getText().replaceAll(".+[dD]", ""), 10);
							} catch (Exception e) {
								// there is no vector selection
							}
							retExp = new Expression(new NetDescriptor(netName, vectorIndex, vectorIndex));
							
						}
						else if(null != hierId.escaped_hierarchical_identifier()){
							String netName = hierId.escaped_hierarchical_identifier().escaped_hierarchical_branch(0).Escaped_identifier(0).getText();
							try {
								TerminalNode num = hierId.escaped_hierarchical_identifier().escaped_hierarchical_branch(0).Decimal_number(0);
								vectorIndex = Integer.parseInt(num.getText().replaceAll(".+[dD]", ""), 10);
							} catch (Exception e) {
								// there is no vector selection
							}
							retExp = new Expression(new NetDescriptor(netName, vectorIndex, vectorIndex));
						}
						else{
						retExp = new Expression(new NetDescriptor(hierId.getText()));
						}
					}
					return retExp;							
				}
				
			}


			Logger.writeError("Unsupported child type in term: " + termChild.getClass() + "  value: " + termChild.getText());
			return null;
		}
		return retExp;
	}
}
