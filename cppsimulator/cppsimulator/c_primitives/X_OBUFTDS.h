/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_OBUFTDS{

		//Verilog Parameters:
		parameter_string_t LOC;
		parameter_string_t CAPACITANCE;
		parameter_string_t IOSTANDARD;
		parameter_string_t SLEW;
		//Verilog Ports in definition order:
		NetFlow* O; // OUTPUT
		NetFlow* OB; // OUTPUT
		NetFlow* I; // INPUT
		NetFlow* T; // INPUT
		
	
		X_OBUFTDS(
			//Verilog Parameters:
			parameter_string_t LOC, // Default: " UNPLACED"
			parameter_string_t CAPACITANCE, // Default: "DONT_CARE"
			parameter_string_t IOSTANDARD, // Default: "DEFAULT"
			parameter_string_t SLEW, // Default: "SLOW"
			//Verilog Ports in definition order:
			NetFlow* O, // OUTPUT
			NetFlow* OB, // OUTPUT
			NetFlow* I, // INPUT
			NetFlow* T // INPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->LOC = LOC; // Default: " UNPLACED"
			this->CAPACITANCE = CAPACITANCE; // Default: "DONT_CARE"
			this->IOSTANDARD = IOSTANDARD; // Default: "DEFAULT"
			this->SLEW = SLEW; // Default: "SLOW"
			//Verilog Ports in definition order:
			this->O = O; // OUTPUT
			this->OB = OB; // OUTPUT
			this->I = I; // INPUT
			this->T = T; // INPUT
		
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
