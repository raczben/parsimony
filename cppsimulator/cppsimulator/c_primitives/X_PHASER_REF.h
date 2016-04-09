/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_PHASER_REF{

		//Verilog Parameters:
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* LOCKED; // OUTPUT
		NetFlow* CLKIN; // INPUT
		NetFlow* PWRDWN; // INPUT
		NetFlow* RST; // INPUT
		
	
		X_PHASER_REF(
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* LOCKED, // OUTPUT
			NetFlow* CLKIN, // INPUT
			NetFlow* PWRDWN, // INPUT
			NetFlow* RST // INPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->LOCKED = LOCKED; // OUTPUT
			this->CLKIN = CLKIN; // INPUT
			this->PWRDWN = PWRDWN; // INPUT
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
