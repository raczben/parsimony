/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_BSCAN_SPARTAN6{

		//Verilog Parameters:
		parameter_int_t JTAG_CHAIN;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* CAPTURE; // OUTPUT
		NetFlow* DRCK; // OUTPUT
		NetFlow* RESET; // OUTPUT
		NetFlow* RUNTEST; // OUTPUT
		NetFlow* SEL; // OUTPUT
		NetFlow* SHIFT; // OUTPUT
		NetFlow* TCK; // OUTPUT
		NetFlow* TDI; // OUTPUT
		NetFlow* TMS; // OUTPUT
		NetFlow* UPDATE; // OUTPUT
		NetFlow* TDO; // INPUT
		
	
		X_BSCAN_SPARTAN6(
			//Verilog Parameters:
			parameter_int_t JTAG_CHAIN, // Default: 1
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* CAPTURE, // OUTPUT
			NetFlow* DRCK, // OUTPUT
			NetFlow* RESET, // OUTPUT
			NetFlow* RUNTEST, // OUTPUT
			NetFlow* SEL, // OUTPUT
			NetFlow* SHIFT, // OUTPUT
			NetFlow* TCK, // OUTPUT
			NetFlow* TDI, // OUTPUT
			NetFlow* TMS, // OUTPUT
			NetFlow* UPDATE, // OUTPUT
			NetFlow* TDO // INPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->JTAG_CHAIN = JTAG_CHAIN; // Default: 1
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->CAPTURE = CAPTURE; // OUTPUT
			this->DRCK = DRCK; // OUTPUT
			this->RESET = RESET; // OUTPUT
			this->RUNTEST = RUNTEST; // OUTPUT
			this->SEL = SEL; // OUTPUT
			this->SHIFT = SHIFT; // OUTPUT
			this->TCK = TCK; // OUTPUT
			this->TDI = TDI; // OUTPUT
			this->TMS = TMS; // OUTPUT
			this->UPDATE = UPDATE; // OUTPUT
			this->TDO = TDO; // INPUT
		
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
