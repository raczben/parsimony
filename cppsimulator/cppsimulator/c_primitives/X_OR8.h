/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_OR8_H
#define X_OR8_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_OR8: public Primitive{

		//Verilog Parameters:
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* O_A0_B; // net ID: O lsb: 0  msb: 0 OUTPUT
		NetFlow* I0_A0_B; // net ID: I0 lsb: 0  msb: 0 INPUT
		NetFlow* I1_A0_B; // net ID: I1 lsb: 0  msb: 0 INPUT
		NetFlow* I2_A0_B; // net ID: I2 lsb: 0  msb: 0 INPUT
		NetFlow* I3_A0_B; // net ID: I3 lsb: 0  msb: 0 INPUT
		NetFlow* I4_A0_B; // net ID: I4 lsb: 0  msb: 0 INPUT
		NetFlow* I5_A0_B; // net ID: I5 lsb: 0  msb: 0 INPUT
		NetFlow* I6_A0_B; // net ID: I6 lsb: 0  msb: 0 INPUT
		NetFlow* I7_A0_B; // net ID: I7 lsb: 0  msb: 0 INPUT
		
		public: X_OR8(
			const char * name,
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* O_A0_B, // net ID: O lsb: 0  msb: 0 OUTPUT
			NetFlow* I0_A0_B, // net ID: I0 lsb: 0  msb: 0 INPUT
			NetFlow* I1_A0_B, // net ID: I1 lsb: 0  msb: 0 INPUT
			NetFlow* I2_A0_B, // net ID: I2 lsb: 0  msb: 0 INPUT
			NetFlow* I3_A0_B, // net ID: I3 lsb: 0  msb: 0 INPUT
			NetFlow* I4_A0_B, // net ID: I4 lsb: 0  msb: 0 INPUT
			NetFlow* I5_A0_B, // net ID: I5 lsb: 0  msb: 0 INPUT
			NetFlow* I6_A0_B, // net ID: I6 lsb: 0  msb: 0 INPUT
			NetFlow* I7_A0_B // net ID: I7 lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->O_A0_B = O_A0_B; // net ID: O lsb: 0  msb: 0 OUTPUT
			this->I0_A0_B = I0_A0_B; // net ID: I0 lsb: 0  msb: 0 INPUT
			this->I1_A0_B = I1_A0_B; // net ID: I1 lsb: 0  msb: 0 INPUT
			this->I2_A0_B = I2_A0_B; // net ID: I2 lsb: 0  msb: 0 INPUT
			this->I3_A0_B = I3_A0_B; // net ID: I3 lsb: 0  msb: 0 INPUT
			this->I4_A0_B = I4_A0_B; // net ID: I4 lsb: 0  msb: 0 INPUT
			this->I5_A0_B = I5_A0_B; // net ID: I5 lsb: 0  msb: 0 INPUT
			this->I6_A0_B = I6_A0_B; // net ID: I6 lsb: 0  msb: 0 INPUT
			this->I7_A0_B = I7_A0_B; // net ID: I7 lsb: 0  msb: 0 INPUT
			
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
#endif // X_OR8_H
