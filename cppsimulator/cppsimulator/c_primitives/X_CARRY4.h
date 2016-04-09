/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_CARRY4{

		//Verilog Parameters:
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* CO; // OUTPUT
		NetFlow* O; // OUTPUT
		NetFlow* CI; // INPUT
		NetFlow* CYINIT; // INPUT
		NetFlow* DI; // INPUT
		NetFlow* S; // INPUT
		
	
		X_CARRY4(
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* CO, // OUTPUT
			NetFlow* O, // OUTPUT
			NetFlow* CI, // INPUT
			NetFlow* CYINIT, // INPUT
			NetFlow* DI, // INPUT
			NetFlow* S // INPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->CO = CO; // OUTPUT
			this->O = O; // OUTPUT
			this->CI = CI; // INPUT
			this->CYINIT = CYINIT; // INPUT
			this->DI = DI; // INPUT
			this->S = S; // INPUT
		
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
