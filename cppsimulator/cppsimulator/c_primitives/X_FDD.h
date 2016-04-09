/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_FDD{

		//Verilog Parameters:
		parameter_int_t INIT;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* O; // OUTPUT
		NetFlow* CE; // INPUT
		NetFlow* CLK; // INPUT
		NetFlow* I; // INPUT
		NetFlow* RST; // INPUT
		NetFlow* SET; // INPUT
		
	
		X_FDD(
			//Verilog Parameters:
			parameter_int_t INIT, // Default: 1'b0
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* O, // OUTPUT
			NetFlow* CE, // INPUT
			NetFlow* CLK, // INPUT
			NetFlow* I, // INPUT
			NetFlow* RST, // INPUT
			NetFlow* SET // INPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->INIT = INIT; // Default: 1'b0
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->O = O; // OUTPUT
			this->CE = CE; // INPUT
			this->CLK = CLK; // INPUT
			this->I = I; // INPUT
			this->RST = RST; // INPUT
			this->SET = SET; // INPUT
		
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
