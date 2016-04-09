/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_SRLC32E{

		//Verilog Parameters:
		parameter_int_t INIT;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* Q; // OUTPUT
		NetFlow* Q31; // OUTPUT
		NetFlow* A; // INPUT
		NetFlow* CE; // INPUT
		NetFlow* CLK; // INPUT
		NetFlow* D; // INPUT
		
	
		X_SRLC32E(
			//Verilog Parameters:
			parameter_int_t INIT, // Default: 32'h00000000
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* Q, // OUTPUT
			NetFlow* Q31, // OUTPUT
			NetFlow* A, // INPUT
			NetFlow* CE, // INPUT
			NetFlow* CLK, // INPUT
			NetFlow* D // INPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->INIT = INIT; // Default: 32'h00000000
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->Q = Q; // OUTPUT
			this->Q31 = Q31; // OUTPUT
			this->A = A; // INPUT
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
