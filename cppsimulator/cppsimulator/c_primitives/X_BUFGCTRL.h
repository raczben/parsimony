/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_BUFGCTRL_H
#define X_BUFGCTRL_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_BUFGCTRL: public Primitive{

		//Verilog Parameters:
		parameter_int_t INIT_OUT;
		parameter_string_t LOC;
		parameter_enum_t PRESELECT_I0;
		parameter_enum_t PRESELECT_I1;
		//Verilog Ports in definition order:
		NetFlow* O_A0_B; // net ID: O lsb: 0  msb: 0 OUTPUT
		NetFlow* CE0_A0_B; // net ID: CE0 lsb: 0  msb: 0 INPUT
		NetFlow* CE1_A0_B; // net ID: CE1 lsb: 0  msb: 0 INPUT
		NetFlow* I0_A0_B; // net ID: I0 lsb: 0  msb: 0 INPUT
		NetFlow* I1_A0_B; // net ID: I1 lsb: 0  msb: 0 INPUT
		NetFlow* IGNORE0_A0_B; // net ID: IGNORE0 lsb: 0  msb: 0 INPUT
		NetFlow* IGNORE1_A0_B; // net ID: IGNORE1 lsb: 0  msb: 0 INPUT
		NetFlow* S0_A0_B; // net ID: S0 lsb: 0  msb: 0 INPUT
		NetFlow* S1_A0_B; // net ID: S1 lsb: 0  msb: 0 INPUT
		
		public: X_BUFGCTRL(
			const char * name,
			//Verilog Parameters:
			parameter_int_t INIT_OUT, // Default: 0
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_enum_t PRESELECT_I0, // Default: "FALSE"
			parameter_enum_t PRESELECT_I1, // Default: "FALSE"
			//Verilog Ports in definition order:
			NetFlow* O_A0_B, // net ID: O lsb: 0  msb: 0 OUTPUT
			NetFlow* CE0_A0_B, // net ID: CE0 lsb: 0  msb: 0 INPUT
			NetFlow* CE1_A0_B, // net ID: CE1 lsb: 0  msb: 0 INPUT
			NetFlow* I0_A0_B, // net ID: I0 lsb: 0  msb: 0 INPUT
			NetFlow* I1_A0_B, // net ID: I1 lsb: 0  msb: 0 INPUT
			NetFlow* IGNORE0_A0_B, // net ID: IGNORE0 lsb: 0  msb: 0 INPUT
			NetFlow* IGNORE1_A0_B, // net ID: IGNORE1 lsb: 0  msb: 0 INPUT
			NetFlow* S0_A0_B, // net ID: S0 lsb: 0  msb: 0 INPUT
			NetFlow* S1_A0_B // net ID: S1 lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->INIT_OUT = INIT_OUT; // Default: 0
			this->LOC = LOC; // Default: "UNPLACED"
			this->PRESELECT_I0 = PRESELECT_I0; // Default: "FALSE"
			this->PRESELECT_I1 = PRESELECT_I1; // Default: "FALSE"
			//Verilog Ports in definition order:
			this->O_A0_B = O_A0_B; // net ID: O lsb: 0  msb: 0 OUTPUT
			this->CE0_A0_B = CE0_A0_B; // net ID: CE0 lsb: 0  msb: 0 INPUT
			this->CE1_A0_B = CE1_A0_B; // net ID: CE1 lsb: 0  msb: 0 INPUT
			this->I0_A0_B = I0_A0_B; // net ID: I0 lsb: 0  msb: 0 INPUT
			this->I1_A0_B = I1_A0_B; // net ID: I1 lsb: 0  msb: 0 INPUT
			this->IGNORE0_A0_B = IGNORE0_A0_B; // net ID: IGNORE0 lsb: 0  msb: 0 INPUT
			this->IGNORE1_A0_B = IGNORE1_A0_B; // net ID: IGNORE1 lsb: 0  msb: 0 INPUT
			this->S0_A0_B = S0_A0_B; // net ID: S0 lsb: 0  msb: 0 INPUT
			this->S1_A0_B = S1_A0_B; // net ID: S1 lsb: 0  msb: 0 INPUT
			
			register_wait_on_event_nets();
			
		}
		
		void register_wait_on_event_nets(){
		// TODO
		}
		
		bool calculate(simtime_t time){
		// TODO
		}
		};
		
}
#endif // X_BUFGCTRL_H
