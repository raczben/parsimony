/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_STARTUP_FPGACORE{

		//Verilog Parameters:
		//Verilog Ports in definition order:
		NetFlow* CLK; // INPUT
		NetFlow* GSR; // INPUT
		
	
		X_STARTUP_FPGACORE(
			//Verilog Parameters:
			//Verilog Ports in definition order:
			NetFlow* CLK, // INPUT
			NetFlow* GSR // INPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			//Verilog Ports in definition order:
			this->CLK = CLK; // INPUT
			this->GSR = GSR; // INPUT
		
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
