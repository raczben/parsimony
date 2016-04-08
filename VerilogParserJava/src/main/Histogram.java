package main;

import java.util.HashMap;

public class Histogram<K> extends HashMap<K, Integer>{
	
	/**
	 * 
	 */
	private static final long serialVersionUID = 1L;

	void touchBin(K key){
		if(containsKey(key)){
			replace(key, get(key)+1);
		}
		else
			put(key, 1);
	}

	@Override
	public
	String toString(){
		String ret = "";
		for(java.util.Map.Entry<K, Integer> entry : entrySet()) {
    		ret += entry.getKey() + ": " + entry.getValue()+"\n";
    	}
		return ret;
	}
	
	

}
