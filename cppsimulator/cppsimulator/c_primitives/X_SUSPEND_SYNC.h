/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_SUSPEND_SYNC{

		//Verilog Parameters:
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* SREQ; // OUTPUT
		NetFlow* CLK; // INPUT
		NetFlow* SACK; // INPUT
		
	
		X_SUSPEND_SYNC(
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* SREQ, // OUTPUT
			NetFlow* CLK, // INPUT
			NetFlow* SACK // INPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->SREQ = SREQ; // OUTPUT
			this->CLK = CLK; // INPUT
			this->SACK = SACK; // INPUT
		
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
