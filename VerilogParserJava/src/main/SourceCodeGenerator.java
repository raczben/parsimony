package main;

import java.util.ArrayList;
import java.util.List;

public class SourceCodeGenerator {
	
	List<SourceCodeNode> nodes;
	
	SourceCodeGenerator(String line){
		nodes = new ArrayList<SourceCodeNode>();
		add(line);
	}
	
	SourceCodeGenerator(){
		nodes = new ArrayList<SourceCodeNode>();
	}
	
	void add(String line){
		nodes.add(new SourceCodeNode(line));
	}
	
	void add(SourceCodeGenerator identedLine){
		nodes.add(new SourceCodeNode(identedLine));
	}
	
	public String toString(){
		return toStringIndent(0);
	}
	
	String toStringIndent(int deepth){
		String ret = "";
		for(SourceCodeNode node : nodes){
			ret += node.toStringIndent(deepth);
		}
		return ret;
		
	}
}
