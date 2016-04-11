package sourceGenerator;

/**
 * SourceCodeNode is a class to help generate source codes. It can store two
 * types of code: A single line, or a block of indented lines.
 * 
 * @author Benedek Racz
 *
 */
class SourceCodeNode {
	/**
	 * ln: is the line end string. It can be ex.: "\n" or "\r\n" . 
	 * identString: is the string which could be inserted at the beginning of 
	 * each line which should be indented. It can be ex.: "\t" or "    " . 
	 */
	static final String ln = "\r\n";
	static final String identString = "\t";
	
	/**
	 * singleCodeLine: is a single line of code.
	 * indentedBlock: contains multiple SourceCodeNode-s which can contain lines.
	 * 	this block should be indented.
	 */
	private String singleCodeLine;
	private SourceGenerator indentedBlock;
	
	/**
	 * Constructor: If you call this constructor this node will contain a single
	 * line (which is given in the parameter.)
	 * 
	 * @param line
	 */
	public SourceCodeNode(final String line) {
		singleCodeLine = line;
		indentedBlock = null;
	}

	/**
	 * Constructor: If you call this constructor this node will contain an
	 * indented block (which is given in the parameter.)
	 * 
	 * @param identedLine
	 */
	public SourceCodeNode(final SourceGenerator identedLine) {
		singleCodeLine = null;
		indentedBlock = identedLine;
	}

	/**
	 * toString(): calls and returns all children in an indented, line-broken
	 * format. The depth shows the first line indentation.
	 *  
	 * @param deepth
	 * @return
	 */
	protected String toString(final int depth) {
		if(null != singleCodeLine){
			return getIndents(depth) + singleCodeLine + ln;
		}
		if(null != indentedBlock){
			return indentedBlock.toString(depth+1);
		}
		else{
			return null;
		}
	}

	/**
	 * default indent is 0.
	 */
	public String toString() {
		return toString(0);
	}

	/**
	 * getIndents() concatenates indent string "depth" times. Then returns it.
	 * @param deepth
	 * @return
	 */
	private String getIndents(final int depth) {
		String indents = "";
		for(int i = 0 ; i<depth ; i++){
			indents+=identString;
		}
		return indents;
	}
	
}
