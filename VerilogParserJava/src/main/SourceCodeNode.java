package main;

public class SourceCodeNode {
	static String ln = "\r\n";
	static String identString = "\t";
	String str;
	SourceCodeGenerator child;
	
	public SourceCodeNode(String line) {
		str = line;
		child = null;
	}

	public SourceCodeNode(SourceCodeGenerator identedLine) {
		str = null;
		child = identedLine;
	}

	public String toStringIndent(int deepth) {
		if(null != str){
			return getIndents(deepth) + str + ln;
		}
		if(null != child){
			return child.toStringIndent(deepth+1);
		}
		else{
			return null;
		}
	}

	private String getIndents(int deepth) {
		String indents = "";
		for(int i = 0 ; i<deepth ; i++){
			indents+=identString;
		}
		return indents;
	}
	
	
}
