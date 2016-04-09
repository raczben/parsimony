/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_SRL16E{

		//Verilog Parameters:
		parameter_int_t INIT;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* Q; // OUTPUT
		NetFlow* A0; // INPUT
		NetFlow* A1; // INPUT
		NetFlow* A2; // INPUT
		NetFlow* A3; // INPUT
		NetFlow* CE; // INPUT
		NetFlow* CLK; // INPUT
		NetFlow* D; // INPUT
		
	
		X_SRL16E(
			//Verilog Parameters:
			parameter_int_t INIT, // Default: 16'h0000
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* Q, // OUTPUT
			NetFlow* A0, // INPUT
			NetFlow* A1, // INPUT
			NetFlow* A2, // INPUT
			NetFlow* A3, // INPUT
			NetFlow* CE, // INPUT
			NetFlow* CLK, // INPUT
			NetFlow* D // INPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->INIT = INIT; // Default: 16'h0000
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->Q = Q; // OUTPUT
			this->A0 = A0; // INPUT
			this->A1 = A1; // INPUT
			this->A2 = A2; // INPUT
			this->A3 = A3; // INPUT
			this->CE = CE; // INPUT
			this->CLK = CLK; // INPUT
			this->D = D; // INPUT
		
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
