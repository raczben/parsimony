/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_LUT6_2: public Primitive{

		//Verilog Parameters:
		parameter_string_t INIT;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* O5; // net ID: O5 lsb: 0  msb: 0 OUTPUT
		NetFlow* O6; // net ID: O6 lsb: 0  msb: 0 OUTPUT
		NetFlow* I0; // net ID: I0 lsb: 0  msb: 0 INPUT
		NetFlow* I1; // net ID: I1 lsb: 0  msb: 0 INPUT
		NetFlow* I2; // net ID: I2 lsb: 0  msb: 0 INPUT
		NetFlow* I3; // net ID: I3 lsb: 0  msb: 0 INPUT
		NetFlow* I4; // net ID: I4 lsb: 0  msb: 0 INPUT
		NetFlow* I5; // net ID: I5 lsb: 0  msb: 0 INPUT
		
		X_LUT6_2(
			const char * name,
			//Verilog Parameters:
			parameter_string_t INIT, // Default: 64'h0000000000000000
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* O5, // net ID: O5 lsb: 0  msb: 0 OUTPUT
			NetFlow* O6, // net ID: O6 lsb: 0  msb: 0 OUTPUT
			NetFlow* I0, // net ID: I0 lsb: 0  msb: 0 INPUT
			NetFlow* I1, // net ID: I1 lsb: 0  msb: 0 INPUT
			NetFlow* I2, // net ID: I2 lsb: 0  msb: 0 INPUT
			NetFlow* I3, // net ID: I3 lsb: 0  msb: 0 INPUT
			NetFlow* I4, // net ID: I4 lsb: 0  msb: 0 INPUT
			NetFlow* I5 // net ID: I5 lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->INIT = INIT; // Default: 64'h0000000000000000
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->O5 = O5; // net ID: O5 lsb: 0  msb: 0 OUTPUT
			this->O6 = O6; // net ID: O6 lsb: 0  msb: 0 OUTPUT
			this->I0 = I0; // net ID: I0 lsb: 0  msb: 0 INPUT
			this->I1 = I1; // net ID: I1 lsb: 0  msb: 0 INPUT
			this->I2 = I2; // net ID: I2 lsb: 0  msb: 0 INPUT
			this->I3 = I3; // net ID: I3 lsb: 0  msb: 0 INPUT
			this->I4 = I4; // net ID: I4 lsb: 0  msb: 0 INPUT
			this->I5 = I5; // net ID: I5 lsb: 0  msb: 0 INPUT
			
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
