/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_STARTUP_FPGACORE: public Primitive{

		//Verilog Parameters:
		//Verilog Ports in definition order:
		NetFlow* CLK; // net ID: CLK lsb: 0  msb: 0 INPUT
		NetFlow* GSR; // net ID: GSR lsb: 0  msb: 0 INPUT
		
		X_STARTUP_FPGACORE(
			const char * name,
			//Verilog Parameters:
			//Verilog Ports in definition order:
			NetFlow* CLK, // net ID: CLK lsb: 0  msb: 0 INPUT
			NetFlow* GSR // net ID: GSR lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			//Verilog Ports in definition order:
			this->CLK = CLK; // net ID: CLK lsb: 0  msb: 0 INPUT
			this->GSR = GSR; // net ID: GSR lsb: 0  msb: 0 INPUT
			
			register_wait_on_event_nets();
			
		}
		
		void register_wait_on_event_nets(){
		// TODO
		}
		void calculate(int time){
		// TODO
		}
		};
		


}
