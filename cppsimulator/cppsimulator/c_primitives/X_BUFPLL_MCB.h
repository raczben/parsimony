/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_BUFPLL_MCB{

		//Verilog Parameters:
		parameter_int_t DIVIDE;
		parameter_string_t LOCK_SRC;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* IOCLK0; // OUTPUT
		NetFlow* IOCLK1; // OUTPUT
		NetFlow* LOCK; // OUTPUT
		NetFlow* SERDESSTROBE0; // OUTPUT
		NetFlow* SERDESSTROBE1; // OUTPUT
		NetFlow* GCLK; // INPUT
		NetFlow* LOCKED; // INPUT
		NetFlow* PLLIN0; // INPUT
		NetFlow* PLLIN1; // INPUT
		
	
		X_BUFPLL_MCB(
			//Verilog Parameters:
			parameter_int_t DIVIDE, // Default: 2
			parameter_string_t LOCK_SRC, // Default: "LOCK_TO_0"
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* IOCLK0, // OUTPUT
			NetFlow* IOCLK1, // OUTPUT
			NetFlow* LOCK, // OUTPUT
			NetFlow* SERDESSTROBE0, // OUTPUT
			NetFlow* SERDESSTROBE1, // OUTPUT
			NetFlow* GCLK, // INPUT
			NetFlow* LOCKED, // INPUT
			NetFlow* PLLIN0, // INPUT
			NetFlow* PLLIN1 // INPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->DIVIDE = DIVIDE; // Default: 2
			this->LOCK_SRC = LOCK_SRC; // Default: "LOCK_TO_0"
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->IOCLK0 = IOCLK0; // OUTPUT
			this->IOCLK1 = IOCLK1; // OUTPUT
			this->LOCK = LOCK; // OUTPUT
			this->SERDESSTROBE0 = SERDESSTROBE0; // OUTPUT
			this->SERDESSTROBE1 = SERDESSTROBE1; // OUTPUT
			this->GCLK = GCLK; // INPUT
			this->LOCKED = LOCKED; // INPUT
			this->PLLIN0 = PLLIN0; // INPUT
			this->PLLIN1 = PLLIN1; // INPUT
		
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
