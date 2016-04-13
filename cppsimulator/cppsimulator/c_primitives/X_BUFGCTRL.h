/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_BUFGCTRL: public Primitive{

		//Verilog Parameters:
		parameter_string_t INIT_OUT;
		parameter_string_t LOC;
		parameter_enum_t PRESELECT_I0;
		parameter_enum_t PRESELECT_I1;
		//Verilog Ports in definition order:
		NetFlow* O; // net ID: O lsb: 0  msb: 0 OUTPUT
		NetFlow* CE0; // net ID: CE0 lsb: 0  msb: 0 INPUT
		NetFlow* CE1; // net ID: CE1 lsb: 0  msb: 0 INPUT
		NetFlow* I0; // net ID: I0 lsb: 0  msb: 0 INPUT
		NetFlow* I1; // net ID: I1 lsb: 0  msb: 0 INPUT
		NetFlow* IGNORE0; // net ID: IGNORE0 lsb: 0  msb: 0 INPUT
		NetFlow* IGNORE1; // net ID: IGNORE1 lsb: 0  msb: 0 INPUT
		NetFlow* S0; // net ID: S0 lsb: 0  msb: 0 INPUT
		NetFlow* S1; // net ID: S1 lsb: 0  msb: 0 INPUT
		
		X_BUFGCTRL(
			const char * name,
			//Verilog Parameters:
			parameter_string_t INIT_OUT, // Default: 0
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_enum_t PRESELECT_I0, // Default: "FALSE"
			parameter_enum_t PRESELECT_I1, // Default: "FALSE"
			//Verilog Ports in definition order:
			NetFlow* O, // net ID: O lsb: 0  msb: 0 OUTPUT
			NetFlow* CE0, // net ID: CE0 lsb: 0  msb: 0 INPUT
			NetFlow* CE1, // net ID: CE1 lsb: 0  msb: 0 INPUT
			NetFlow* I0, // net ID: I0 lsb: 0  msb: 0 INPUT
			NetFlow* I1, // net ID: I1 lsb: 0  msb: 0 INPUT
			NetFlow* IGNORE0, // net ID: IGNORE0 lsb: 0  msb: 0 INPUT
			NetFlow* IGNORE1, // net ID: IGNORE1 lsb: 0  msb: 0 INPUT
			NetFlow* S0, // net ID: S0 lsb: 0  msb: 0 INPUT
			NetFlow* S1 // net ID: S1 lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->INIT_OUT = INIT_OUT; // Default: 0
			this->LOC = LOC; // Default: "UNPLACED"
			this->PRESELECT_I0 = PRESELECT_I0; // Default: "FALSE"
			this->PRESELECT_I1 = PRESELECT_I1; // Default: "FALSE"
			//Verilog Ports in definition order:
			this->O = O; // net ID: O lsb: 0  msb: 0 OUTPUT
			this->CE0 = CE0; // net ID: CE0 lsb: 0  msb: 0 INPUT
			this->CE1 = CE1; // net ID: CE1 lsb: 0  msb: 0 INPUT
			this->I0 = I0; // net ID: I0 lsb: 0  msb: 0 INPUT
			this->I1 = I1; // net ID: I1 lsb: 0  msb: 0 INPUT
			this->IGNORE0 = IGNORE0; // net ID: IGNORE0 lsb: 0  msb: 0 INPUT
			this->IGNORE1 = IGNORE1; // net ID: IGNORE1 lsb: 0  msb: 0 INPUT
			this->S0 = S0; // net ID: S0 lsb: 0  msb: 0 INPUT
			this->S1 = S1; // net ID: S1 lsb: 0  msb: 0 INPUT
			
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
