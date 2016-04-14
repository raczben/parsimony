package sourceGenerator;

import java.util.ArrayList;
import java.util.List;

/**
 * SourceGenerator class help generate source codes. Add source code lines with
 * add() method, then get the formatted code calling toString() method.
 * 
 * @author ebenera
 *
 */
public class SourceGenerator {
	
	/**
	 * nodes: is a list which contains source code lines, or indented blocks.
	 */
	List<SourceCodeNode> nodes;
	
	/**
	 * Constructor: The parameter string will be the first line of the code.
	 * @param line
	 */
	public SourceGenerator(final String line){
		nodes = new ArrayList<SourceCodeNode>();
		add(line);
	}
	
	/**
	 * Default constructor. Initialize a class with an empty source code.
	 */
	public SourceGenerator(){
		nodes = new ArrayList<SourceCodeNode>();
	}
	
	/**
	 * Constructor: The parameter block of code will be the first block of the
	 * code. Note that this will be indented. (Not recommended to use.)
	 * 
	 * @param indentedBlock
	 */
	protected SourceGenerator(SourceCodeNode indentedBlock) {
		nodes = new ArrayList<SourceCodeNode>();
		nodes.add(indentedBlock);
	}

	/**
	 * Constructor: The parameter block of code will be the first block of the
	 * code. Note that this will be indented.
	 * 
	 * @param srcGen0
	 */
	public SourceGenerator(SourceGenerator srcGen0) {
		nodes = new ArrayList<SourceCodeNode>();
		add(srcGen0);
	}

	/**
	 * Append a line at the end of the source code.
	 * @param line
	 */
	public void add(final String line){
		add(line, 0);
	}
	
	/**
	 * Append an indented line at the end of the source code. 
	 * @param line
	 * @param indent
	 */
	public void add(final String line, final int indent){
		SourceCodeNode a;
		SourceGenerator b;
		a = new SourceCodeNode(line);
		
		for(int i = 0; i<indent; i++){
			b = new SourceGenerator(a);
			a = new SourceCodeNode(b);
		}
		
		nodes.add(a);
	}
	
	/**
	 * Append an indented block at the end of the source code. 
	 * @param identedLine
	 */
	public void add(final SourceGenerator identedBlock){
		try {
			add(identedBlock, 1);
		} catch (Exception e) {
			// Cannoot be error
		}
	}
	
	/**
	 * toString() returns an indented line-broken format of the source code.
	 */
	public String toString(){
		return toString(0);
	}
	
	/**
	 * toString() returns an indented line-broken format of the source code. The
	 * first line will be indented n-times.
	 * 
	 * @param deepth
	 * @return
	 */
	public String toString(final int deepth){
		String ret = "";
		for(SourceCodeNode node : nodes){
			ret += node.toString(deepth);
		}
		return ret;	
	}

	public void add(SourceGenerator indentedBlock, final int indent) throws Exception {
		if(indent<0)
			throw new Exception("indent is not positive.");
		if(0 == indent){
			for(SourceCodeNode node : indentedBlock.nodes){
				if(node.isSimpleLine()){
					add(node.singleCodeLine);
				}
				else{
					add(node.indentedBlock);
				}
			}
			return;
		}
		if(1 == indent){
			nodes.add(new SourceCodeNode(indentedBlock));
			return;
		}
		throw new Exception("Unsupported indent: " + indent);
	}
	
}
