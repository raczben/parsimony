/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_BUFGMUX_1_H
#define X_BUFGMUX_1_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_BUFGMUX_1: public Primitive{

		//Verilog Parameters:
		parameter_string_t CLK_SEL_TYPE;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* O_A0_B; // net ID: O lsb: 0  msb: 0 OUTPUT
		NetFlow* I0_A0_B; // net ID: I0 lsb: 0  msb: 0 INPUT
		NetFlow* I1_A0_B; // net ID: I1 lsb: 0  msb: 0 INPUT
		NetFlow* S_A0_B; // net ID: S lsb: 0  msb: 0 INPUT
		
		public: X_BUFGMUX_1(
			const char * name,
			//Verilog Parameters:
			parameter_string_t CLK_SEL_TYPE, // Default: "SYNC"
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* O_A0_B, // net ID: O lsb: 0  msb: 0 OUTPUT
			NetFlow* I0_A0_B, // net ID: I0 lsb: 0  msb: 0 INPUT
			NetFlow* I1_A0_B, // net ID: I1 lsb: 0  msb: 0 INPUT
			NetFlow* S_A0_B // net ID: S lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->CLK_SEL_TYPE = CLK_SEL_TYPE; // Default: "SYNC"
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->O_A0_B = O_A0_B; // net ID: O lsb: 0  msb: 0 OUTPUT
			this->I0_A0_B = I0_A0_B; // net ID: I0 lsb: 0  msb: 0 INPUT
			this->I1_A0_B = I1_A0_B; // net ID: I1 lsb: 0  msb: 0 INPUT
			this->S_A0_B = S_A0_B; // net ID: S lsb: 0  msb: 0 INPUT
			
			register_wait_on_event_nets();
			
		}
		
		void register_wait_on_event_nets(){
		// TODO
		}
		
		void calculate(simtime_t time){
		// TODO
		}
		};
		
}
#endif // X_BUFGMUX_1_H
