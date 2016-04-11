package verilog;

import java.io.Serializable;

public class PortDescriptior extends NetDescriptor implements Serializable {
	
	
	/**
	 * 
	 */
	private static final long serialVersionUID = -2457495994822256165L;
	private Direction direction;
	
	
	public PortDescriptior(String netIdentifier) {
		super(netIdentifier);
		direction = Direction.UNDEFINED;
	}
	

	PortDescriptior(String netIdentifier, int msb, int lsb){
		super(netIdentifier, msb, lsb);
	}


	public Direction getDirection() {
		return direction;
	}


	public void setDirection(Direction direction) {
		this.direction = direction;
	}
	
	public PortDescriptior(){
		direction = Direction.UNDEFINED;
		
	}
	
	@Override
	public String toString() {
		return super.toString() + " " + direction;
	}


}
