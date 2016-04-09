/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_BUFPLL{

		//Verilog Parameters:
		parameter_int_t DIVIDE;
		parameter_enum_t ENABLE_SYNC;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* IOCLK; // OUTPUT
		NetFlow* LOCK; // OUTPUT
		NetFlow* SERDESSTROBE; // OUTPUT
		NetFlow* GCLK; // INPUT
		NetFlow* LOCKED; // INPUT
		NetFlow* PLLIN; // INPUT
		
	
		X_BUFPLL(
			//Verilog Parameters:
			parameter_int_t DIVIDE, // Default: 1
			parameter_enum_t ENABLE_SYNC, // Default: "TRUE"
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* IOCLK, // OUTPUT
			NetFlow* LOCK, // OUTPUT
			NetFlow* SERDESSTROBE, // OUTPUT
			NetFlow* GCLK, // INPUT
			NetFlow* LOCKED, // INPUT
			NetFlow* PLLIN // INPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->DIVIDE = DIVIDE; // Default: 1
			this->ENABLE_SYNC = ENABLE_SYNC; // Default: "TRUE"
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->IOCLK = IOCLK; // OUTPUT
			this->LOCK = LOCK; // OUTPUT
			this->SERDESSTROBE = SERDESSTROBE; // OUTPUT
			this->GCLK = GCLK; // INPUT
			this->LOCKED = LOCKED; // INPUT
			this->PLLIN = PLLIN; // INPUT
		
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
