/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_BUFGCTRL{

		//Verilog Parameters:
		parameter_int_t INIT_OUT;
		parameter_string_t LOC;
		parameter_enum_t PRESELECT_I0;
		parameter_enum_t PRESELECT_I1;
		//Verilog Ports in definition order:
		NetFlow* O; // OUTPUT
		NetFlow* CE0; // INPUT
		NetFlow* CE1; // INPUT
		NetFlow* I0; // INPUT
		NetFlow* I1; // INPUT
		NetFlow* IGNORE0; // INPUT
		NetFlow* IGNORE1; // INPUT
		NetFlow* S0; // INPUT
		NetFlow* S1; // INPUT
		
	
		X_BUFGCTRL(
			//Verilog Parameters:
			parameter_int_t INIT_OUT, // Default: 0
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_enum_t PRESELECT_I0, // Default: "FALSE"
			parameter_enum_t PRESELECT_I1, // Default: "FALSE"
			//Verilog Ports in definition order:
			NetFlow* O, // OUTPUT
			NetFlow* CE0, // INPUT
			NetFlow* CE1, // INPUT
			NetFlow* I0, // INPUT
			NetFlow* I1, // INPUT
			NetFlow* IGNORE0, // INPUT
			NetFlow* IGNORE1, // INPUT
			NetFlow* S0, // INPUT
			NetFlow* S1 // INPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->INIT_OUT = INIT_OUT; // Default: 0
			this->LOC = LOC; // Default: "UNPLACED"
			this->PRESELECT_I0 = PRESELECT_I0; // Default: "FALSE"
			this->PRESELECT_I1 = PRESELECT_I1; // Default: "FALSE"
			//Verilog Ports in definition order:
			this->O = O; // OUTPUT
			this->CE0 = CE0; // INPUT
			this->CE1 = CE1; // INPUT
			this->I0 = I0; // INPUT
			this->I1 = I1; // INPUT
			this->IGNORE0 = IGNORE0; // INPUT
			this->IGNORE1 = IGNORE1; // INPUT
			this->S0 = S0; // INPUT
			this->S1 = S1; // INPUT
		
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
