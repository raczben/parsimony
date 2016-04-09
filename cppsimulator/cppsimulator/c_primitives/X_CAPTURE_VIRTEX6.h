/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_CAPTURE_VIRTEX6{

		//Verilog Parameters:
		parameter_string_t LOC;
		parameter_enum_t ONESHOT;
		//Verilog Ports in definition order:
		NetFlow* CAP; // INPUT
		NetFlow* CLK; // INPUT
		
	
		X_CAPTURE_VIRTEX6(
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_enum_t ONESHOT, // Default: "TRUE"
			//Verilog Ports in definition order:
			NetFlow* CAP, // INPUT
			NetFlow* CLK // INPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->LOC = LOC; // Default: "UNPLACED"
			this->ONESHOT = ONESHOT; // Default: "TRUE"
			//Verilog Ports in definition order:
			this->CAP = CAP; // INPUT
			this->CLK = CLK; // INPUT
		
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
