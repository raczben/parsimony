/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_BUFMRCE{

		//Verilog Parameters:
		parameter_string_t LOC;
		parameter_string_t CE_TYPE;
		parameter_int_t INIT_OUT;
		//Verilog Ports in definition order:
		NetFlow* O; // OUTPUT
		NetFlow* CE; // INPUT
		NetFlow* I; // INPUT
		
	
		X_BUFMRCE(
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_string_t CE_TYPE, // Default: "SYNC"
			parameter_int_t INIT_OUT, // Default: 0
			//Verilog Ports in definition order:
			NetFlow* O, // OUTPUT
			NetFlow* CE, // INPUT
			NetFlow* I // INPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->LOC = LOC; // Default: "UNPLACED"
			this->CE_TYPE = CE_TYPE; // Default: "SYNC"
			this->INIT_OUT = INIT_OUT; // Default: 0
			//Verilog Ports in definition order:
			this->O = O; // OUTPUT
			this->CE = CE; // INPUT
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
