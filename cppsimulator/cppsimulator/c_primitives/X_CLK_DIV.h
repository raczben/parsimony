/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_CLK_DIV{

		//Verilog Parameters:
		parameter_int_t DIVIDE_BY;
		parameter_int_t DIVIDER_DELAY;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* CLKDV; // OUTPUT
		NetFlow* CDRST; // INPUT
		NetFlow* CLKIN; // INPUT
		
	
		X_CLK_DIV(
			//Verilog Parameters:
			parameter_int_t DIVIDE_BY, // Default: 2
			parameter_int_t DIVIDER_DELAY, // Default: 0
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* CLKDV, // OUTPUT
			NetFlow* CDRST, // INPUT
			NetFlow* CLKIN // INPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->DIVIDE_BY = DIVIDE_BY; // Default: 2
			this->DIVIDER_DELAY = DIVIDER_DELAY; // Default: 0
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->CLKDV = CLKDV; // OUTPUT
			this->CDRST = CDRST; // INPUT
			this->CLKIN = CLKIN; // INPUT
		
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
