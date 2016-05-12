package verilog;

import java.io.Serializable;
import java.util.ArrayList;
import java.util.List;

import antlr.Verilog2001Parser.RangeContext;

public class NetDescriptor implements Serializable{
	/**
	 * 
	 */
	private static final long serialVersionUID = -6017857266205374876L;
	public final static String const_zero_net_id = "CONST_ZERO";
	public static final String const_one_net_id = "CONST_ONE";
	
	protected String netIdentifier = null;
	private int lsb = -1;
	private int msb = -1;
	
	public NetDescriptor(){
		
	}
	
//	NetDescriptor copyNetDescriptor (NetDescriptor foo){
//		NetDescriptor f = new NetDescriptor();
//		f.set(foo.get());
//		return f;
//		}
	
	/**
	 * 
	 * @param netIdentifier
	 * @param msb
	 * @param lsb
	 */
	public NetDescriptor(String netIdentifier, int msb, int lsb){
		this.netIdentifier = netIdentifier;
		this.setLsb(lsb);
		this.setMsb(msb);
	}
	
	/**
	 * 
	 * @param netIdentifier
	 * @param msb
	 * @param lsb
	 */
	public NetDescriptor(String netIdentifier, RangeContext range){
		this.netIdentifier = netIdentifier;
		this.setRange(range);
	}
	
	/**
	 * 
	 * @param netIdentifier
	 */
	public NetDescriptor(String netIdentifier){
		this(netIdentifier, 0, 0);
	}


	public int getLsb() {
		return lsb;
	}


	protected void setLsb(int lsb) {
		this.lsb = lsb;
	}


	public int getMsb() {
		return msb;
	}


	protected void setMsb(int msb) {
		this.msb = msb;
	}
	
	void setRange(RangeContext range){
		if(null == range){
			msb = 0;
			lsb = 0;
			return;
		}
        msb = BasicConverters.toInteger(range.msb_constant_expression().constant_expression());
        lsb = BasicConverters.toInteger(range.lsb_constant_expression().constant_expression());
	}

    /**
     * Net identifiers usually contains special characters which are illegal
     * characters in a c identifier. (ex.: / [ ] ...) netId2CdefineId() convert
     * net identifiers into valid c identifiers.
     * 
     * @param netId
     * @return
     */
    static String netId2CdefineId(String netId){
		String ret = BasicConverters.toCIdentifier(netId, true);
		ret =  "NET_INDEX_" + ret;
		return ret;
    }
    
    /**
     * Net identifiers usually contains special characters which are illegal
     * characters in a c identifier. (ex.: / [ ] ...) netId2CdefineId() convert
     * net identifiers into valid c identifiers.
     * 
     * @param netId
     * @return
     */
    static String netId2CId(String netId){
		String ret = BasicConverters.toCIdentifier(netId, true);
		//ret =  ret;
		return ret;
    }
    
    /**
     * 
     * @param netId
     * @param bit
     * @return
     */
    public String getCdefineIdentifierBit(int bit){
		return netId2CdefineId(netIdentifier + "[" + String.valueOf(bit) + "]");
    }
    
    /**
     * 
     * @param netId
     * @param bit
     * @return
     */
    public String getCIdentifierBit(int bit){
		return netId2CId(netIdentifier + "[" + String.valueOf(bit) + "]");
    }
    
    /**
     * 
     * @return
     */
    public List<String> getCdefineIdentifierList(){
    	List<String> ret = new ArrayList<String>();
    	
    	for(int i = msb; i>=lsb; i--){
    		ret.add(getCdefineIdentifierBit(i));
    	}
    	return ret;
    }
    
    /**
     * 
     * @return
     */
    public List<String> getCIdentifierList(){
    	List<String> ret = new ArrayList<String>();
    	
    	for(int i = msb; i>=lsb; i--){
    		ret.add(getCIdentifierBit(i));
    	}
    	return ret;
    }
    
	@Override
	public String toString() {
		return "net ID: " + netIdentifier + " lsb: " + lsb + "  msb: " + msb;
	}
	
	public final String getNetIdentifier(){
		return netIdentifier;
	}
	
}
