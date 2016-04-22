/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_BUF_H
#define X_BUF_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"
#include "built_in_primitives.h"

namespace CPrimitives {
	
	class X_BUF: public Primitive{

		//Verilog Parameters:
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* O_A0_B; // net ID: O lsb: 0  msb: 0 OUTPUT
		NetFlow* I_A0_B; // net ID: I lsb: 0  msb: 0 INPUT
		
		public: X_BUF(
			const char * name,
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* O_A0_B, // net ID: O lsb: 0  msb: 0 OUTPUT
			NetFlow* I_A0_B // net ID: I lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->O_A0_B = O_A0_B; // net ID: O lsb: 0  msb: 0 OUTPUT
			this->I_A0_B = I_A0_B; // net ID: I lsb: 0  msb: 0 INPUT
			
			register_wait_on_event_nets();
			
		}
		
		void register_wait_on_event_nets(){
			I_A0_B->register_event_reader(this);
		}

		void calculate(int time){
			calculate_BUF(time, O_A0_B, I_A0_B);
		}

	};
		
}
#endif // X_BUF_H
