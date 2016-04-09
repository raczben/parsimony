/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_RAMS256{

		//Verilog Parameters:
		parameter_int_t INIT;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* O; // OUTPUT
		NetFlow* ADR0; // INPUT
		NetFlow* ADR1; // INPUT
		NetFlow* ADR2; // INPUT
		NetFlow* ADR3; // INPUT
		NetFlow* ADR4; // INPUT
		NetFlow* ADR5; // INPUT
		NetFlow* ADR6; // INPUT
		NetFlow* ADR7; // INPUT
		NetFlow* CLK; // INPUT
		NetFlow* I; // INPUT
		NetFlow* WE; // INPUT
		
	
		X_RAMS256(
			//Verilog Parameters:
			parameter_int_t INIT, // Default: 256'h0
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* O, // OUTPUT
			NetFlow* ADR0, // INPUT
			NetFlow* ADR1, // INPUT
			NetFlow* ADR2, // INPUT
			NetFlow* ADR3, // INPUT
			NetFlow* ADR4, // INPUT
			NetFlow* ADR5, // INPUT
			NetFlow* ADR6, // INPUT
			NetFlow* ADR7, // INPUT
			NetFlow* CLK, // INPUT
			NetFlow* I, // INPUT
			NetFlow* WE // INPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->INIT = INIT; // Default: 256'h0
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->O = O; // OUTPUT
			this->ADR0 = ADR0; // INPUT
			this->ADR1 = ADR1; // INPUT
			this->ADR2 = ADR2; // INPUT
			this->ADR3 = ADR3; // INPUT
			this->ADR4 = ADR4; // INPUT
			this->ADR5 = ADR5; // INPUT
			this->ADR6 = ADR6; // INPUT
			this->ADR7 = ADR7; // INPUT
			this->CLK = CLK; // INPUT
			this->I = I; // INPUT
			this->WE = WE; // INPUT
		
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