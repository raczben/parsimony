/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_USR_ACCESS_VIRTEX6{

		//Verilog Parameters:
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* CFGCLK; // OUTPUT
		NetFlow* DATA; // OUTPUT
		NetFlow* DATAVALID; // OUTPUT
		
	
		X_USR_ACCESS_VIRTEX6(
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* CFGCLK, // OUTPUT
			NetFlow* DATA, // OUTPUT
			NetFlow* DATAVALID // OUTPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->CFGCLK = CFGCLK; // OUTPUT
			this->DATA = DATA; // OUTPUT
			this->DATAVALID = DATAVALID; // OUTPUT
		
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
