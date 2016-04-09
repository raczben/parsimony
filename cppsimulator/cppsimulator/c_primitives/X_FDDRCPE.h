/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_FDDRCPE{

		//Verilog Parameters:
		parameter_int_t INIT;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* Q; // OUTPUT
		NetFlow* C0; // INPUT
		NetFlow* C1; // INPUT
		NetFlow* CE; // INPUT
		NetFlow* CLR; // INPUT
		NetFlow* D0; // INPUT
		NetFlow* D1; // INPUT
		NetFlow* PRE; // INPUT
		
	
		X_FDDRCPE(
			//Verilog Parameters:
			parameter_int_t INIT, // Default: 1'b0
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* Q, // OUTPUT
			NetFlow* C0, // INPUT
			NetFlow* C1, // INPUT
			NetFlow* CE, // INPUT
			NetFlow* CLR, // INPUT
			NetFlow* D0, // INPUT
			NetFlow* D1, // INPUT
			NetFlow* PRE // INPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->INIT = INIT; // Default: 1'b0
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->Q = Q; // OUTPUT
			this->C0 = C0; // INPUT
			this->C1 = C1; // INPUT
			this->CE = CE; // INPUT
			this->CLR = CLR; // INPUT
			this->D0 = D0; // INPUT
			this->D1 = D1; // INPUT
			this->PRE = PRE; // INPUT
		
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
