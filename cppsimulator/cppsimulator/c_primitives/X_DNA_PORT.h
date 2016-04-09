/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_DNA_PORT{

		//Verilog Parameters:
		parameter_int_t SIM_DNA_VALUE;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* DOUT; // OUTPUT
		NetFlow* CLK; // INPUT
		NetFlow* DIN; // INPUT
		NetFlow* READ; // INPUT
		NetFlow* SHIFT; // INPUT
		
	
		X_DNA_PORT(
			//Verilog Parameters:
			parameter_int_t SIM_DNA_VALUE, // Default: 57'h0
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* DOUT, // OUTPUT
			NetFlow* CLK, // INPUT
			NetFlow* DIN, // INPUT
			NetFlow* READ, // INPUT
			NetFlow* SHIFT // INPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->SIM_DNA_VALUE = SIM_DNA_VALUE; // Default: 57'h0
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->DOUT = DOUT; // OUTPUT
			this->CLK = CLK; // INPUT
			this->DIN = DIN; // INPUT
			this->READ = READ; // INPUT
			this->SHIFT = SHIFT; // INPUT
		
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
