/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_IDELAYCTRL{

		//Verilog Parameters:
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* RDY; // OUTPUT
		NetFlow* REFCLK; // INPUT
		NetFlow* RST; // INPUT
		
	
		X_IDELAYCTRL(
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* RDY, // OUTPUT
			NetFlow* REFCLK, // INPUT
			NetFlow* RST // INPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->RDY = RDY; // OUTPUT
			this->REFCLK = REFCLK; // INPUT
			this->RST = RST; // INPUT
		
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
