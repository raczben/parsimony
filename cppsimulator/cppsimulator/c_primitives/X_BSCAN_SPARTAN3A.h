/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_BSCAN_SPARTAN3A{

		//Verilog Parameters:
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* CAPTURE; // OUTPUT
		NetFlow* DRCK1; // OUTPUT
		NetFlow* DRCK2; // OUTPUT
		NetFlow* RESET; // OUTPUT
		NetFlow* SEL1; // OUTPUT
		NetFlow* SEL2; // OUTPUT
		NetFlow* SHIFT; // OUTPUT
		NetFlow* TCK; // OUTPUT
		NetFlow* TDI; // OUTPUT
		NetFlow* TMS; // OUTPUT
		NetFlow* UPDATE; // OUTPUT
		NetFlow* TDO1; // INPUT
		NetFlow* TDO2; // INPUT
		
	
		X_BSCAN_SPARTAN3A(
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* CAPTURE, // OUTPUT
			NetFlow* DRCK1, // OUTPUT
			NetFlow* DRCK2, // OUTPUT
			NetFlow* RESET, // OUTPUT
			NetFlow* SEL1, // OUTPUT
			NetFlow* SEL2, // OUTPUT
			NetFlow* SHIFT, // OUTPUT
			NetFlow* TCK, // OUTPUT
			NetFlow* TDI, // OUTPUT
			NetFlow* TMS, // OUTPUT
			NetFlow* UPDATE, // OUTPUT
			NetFlow* TDO1, // INPUT
			NetFlow* TDO2 // INPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->CAPTURE = CAPTURE; // OUTPUT
			this->DRCK1 = DRCK1; // OUTPUT
			this->DRCK2 = DRCK2; // OUTPUT
			this->RESET = RESET; // OUTPUT
			this->SEL1 = SEL1; // OUTPUT
			this->SEL2 = SEL2; // OUTPUT
			this->SHIFT = SHIFT; // OUTPUT
			this->TCK = TCK; // OUTPUT
			this->TDI = TDI; // OUTPUT
			this->TMS = TMS; // OUTPUT
			this->UPDATE = UPDATE; // OUTPUT
			this->TDO1 = TDO1; // INPUT
			this->TDO2 = TDO2; // INPUT
		
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
