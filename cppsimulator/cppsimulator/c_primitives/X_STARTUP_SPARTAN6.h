/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_STARTUP_SPARTAN6{

		//Verilog Parameters:
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* CFGCLK; // OUTPUT
		NetFlow* CFGMCLK; // OUTPUT
		NetFlow* EOS; // OUTPUT
		NetFlow* CLK; // INPUT
		NetFlow* GSR; // INPUT
		NetFlow* GTS; // INPUT
		NetFlow* KEYCLEARB; // INPUT
		
	
		X_STARTUP_SPARTAN6(
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* CFGCLK, // OUTPUT
			NetFlow* CFGMCLK, // OUTPUT
			NetFlow* EOS, // OUTPUT
			NetFlow* CLK, // INPUT
			NetFlow* GSR, // INPUT
			NetFlow* GTS, // INPUT
			NetFlow* KEYCLEARB // INPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->CFGCLK = CFGCLK; // OUTPUT
			this->CFGMCLK = CFGMCLK; // OUTPUT
			this->EOS = EOS; // OUTPUT
			this->CLK = CLK; // INPUT
			this->GSR = GSR; // INPUT
			this->GTS = GTS; // INPUT
			this->KEYCLEARB = KEYCLEARB; // INPUT
		
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
