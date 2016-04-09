/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_BUFIODQS{

		//Verilog Parameters:
		parameter_enum_t DQSMASK_ENABLE;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* O; // OUTPUT
		NetFlow* DQSMASK; // INPUT
		NetFlow* I; // INPUT
		
	
		X_BUFIODQS(
			//Verilog Parameters:
			parameter_enum_t DQSMASK_ENABLE, // Default: "FALSE"
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* O, // OUTPUT
			NetFlow* DQSMASK, // INPUT
			NetFlow* I // INPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->DQSMASK_ENABLE = DQSMASK_ENABLE; // Default: "FALSE"
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->O = O; // OUTPUT
			this->DQSMASK = DQSMASK; // INPUT
			this->I = I; // INPUT
		
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
