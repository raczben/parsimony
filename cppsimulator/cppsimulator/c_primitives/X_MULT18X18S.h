/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_MULT18X18S{

		//Verilog Parameters:
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* P; // OUTPUT
		NetFlow* A; // INPUT
		NetFlow* B; // INPUT
		NetFlow* C; // INPUT
		NetFlow* CE; // INPUT
		NetFlow* R; // INPUT
		
	
		X_MULT18X18S(
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* P, // OUTPUT
			NetFlow* A, // INPUT
			NetFlow* B, // INPUT
			NetFlow* C, // INPUT
			NetFlow* CE, // INPUT
			NetFlow* R // INPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->P = P; // OUTPUT
			this->A = A; // INPUT
			this->B = B; // INPUT
			this->C = C; // INPUT
			this->CE = CE; // INPUT
			this->R = R; // INPUT
		
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
