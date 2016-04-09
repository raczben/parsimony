/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_OBUFT_DCIEN{

		//Verilog Parameters:
		parameter_int_t DRIVE;
		parameter_string_t IOSTANDARD;
		parameter_string_t SLEW;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* O; // OUTPUT
		NetFlow* DCITERMDISABLE; // INPUT
		NetFlow* I; // INPUT
		NetFlow* T; // INPUT
		
	
		X_OBUFT_DCIEN(
			//Verilog Parameters:
			parameter_int_t DRIVE, // Default: 12
			parameter_string_t IOSTANDARD, // Default: "DEFAULT"
			parameter_string_t SLEW, // Default: "SLOW"
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* O, // OUTPUT
			NetFlow* DCITERMDISABLE, // INPUT
			NetFlow* I, // INPUT
			NetFlow* T // INPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->DRIVE = DRIVE; // Default: 12
			this->IOSTANDARD = IOSTANDARD; // Default: "DEFAULT"
			this->SLEW = SLEW; // Default: "SLOW"
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->O = O; // OUTPUT
			this->DCITERMDISABLE = DCITERMDISABLE; // INPUT
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
