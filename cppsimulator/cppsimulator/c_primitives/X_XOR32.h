/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_XOR32: public Primitive{

		//Verilog Parameters:
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* O; // net ID: O lsb: 0  msb: 0 OUTPUT
		NetFlow* I0; // net ID: I0 lsb: 0  msb: 0 INPUT
		NetFlow* I1; // net ID: I1 lsb: 0  msb: 0 INPUT
		NetFlow* I2; // net ID: I2 lsb: 0  msb: 0 INPUT
		NetFlow* I3; // net ID: I3 lsb: 0  msb: 0 INPUT
		NetFlow* I4; // net ID: I4 lsb: 0  msb: 0 INPUT
		NetFlow* I5; // net ID: I5 lsb: 0  msb: 0 INPUT
		NetFlow* I6; // net ID: I6 lsb: 0  msb: 0 INPUT
		NetFlow* I7; // net ID: I7 lsb: 0  msb: 0 INPUT
		NetFlow* I8; // net ID: I8 lsb: 0  msb: 0 INPUT
		NetFlow* I9; // net ID: I9 lsb: 0  msb: 0 INPUT
		NetFlow* I10; // net ID: I10 lsb: 0  msb: 0 INPUT
		NetFlow* I11; // net ID: I11 lsb: 0  msb: 0 INPUT
		NetFlow* I12; // net ID: I12 lsb: 0  msb: 0 INPUT
		NetFlow* I13; // net ID: I13 lsb: 0  msb: 0 INPUT
		NetFlow* I14; // net ID: I14 lsb: 0  msb: 0 INPUT
		NetFlow* I15; // net ID: I15 lsb: 0  msb: 0 INPUT
		NetFlow* I16; // net ID: I16 lsb: 0  msb: 0 INPUT
		NetFlow* I17; // net ID: I17 lsb: 0  msb: 0 INPUT
		NetFlow* I18; // net ID: I18 lsb: 0  msb: 0 INPUT
		NetFlow* I19; // net ID: I19 lsb: 0  msb: 0 INPUT
		NetFlow* I20; // net ID: I20 lsb: 0  msb: 0 INPUT
		NetFlow* I21; // net ID: I21 lsb: 0  msb: 0 INPUT
		NetFlow* I22; // net ID: I22 lsb: 0  msb: 0 INPUT
		NetFlow* I23; // net ID: I23 lsb: 0  msb: 0 INPUT
		NetFlow* I24; // net ID: I24 lsb: 0  msb: 0 INPUT
		NetFlow* I25; // net ID: I25 lsb: 0  msb: 0 INPUT
		NetFlow* I26; // net ID: I26 lsb: 0  msb: 0 INPUT
		NetFlow* I27; // net ID: I27 lsb: 0  msb: 0 INPUT
		NetFlow* I28; // net ID: I28 lsb: 0  msb: 0 INPUT
		NetFlow* I29; // net ID: I29 lsb: 0  msb: 0 INPUT
		NetFlow* I30; // net ID: I30 lsb: 0  msb: 0 INPUT
		NetFlow* I31; // net ID: I31 lsb: 0  msb: 0 INPUT
		
		X_XOR32(
			const char * name,
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* O, // net ID: O lsb: 0  msb: 0 OUTPUT
			NetFlow* I0, // net ID: I0 lsb: 0  msb: 0 INPUT
			NetFlow* I1, // net ID: I1 lsb: 0  msb: 0 INPUT
			NetFlow* I2, // net ID: I2 lsb: 0  msb: 0 INPUT
			NetFlow* I3, // net ID: I3 lsb: 0  msb: 0 INPUT
			NetFlow* I4, // net ID: I4 lsb: 0  msb: 0 INPUT
			NetFlow* I5, // net ID: I5 lsb: 0  msb: 0 INPUT
			NetFlow* I6, // net ID: I6 lsb: 0  msb: 0 INPUT
			NetFlow* I7, // net ID: I7 lsb: 0  msb: 0 INPUT
			NetFlow* I8, // net ID: I8 lsb: 0  msb: 0 INPUT
			NetFlow* I9, // net ID: I9 lsb: 0  msb: 0 INPUT
			NetFlow* I10, // net ID: I10 lsb: 0  msb: 0 INPUT
			NetFlow* I11, // net ID: I11 lsb: 0  msb: 0 INPUT
			NetFlow* I12, // net ID: I12 lsb: 0  msb: 0 INPUT
			NetFlow* I13, // net ID: I13 lsb: 0  msb: 0 INPUT
			NetFlow* I14, // net ID: I14 lsb: 0  msb: 0 INPUT
			NetFlow* I15, // net ID: I15 lsb: 0  msb: 0 INPUT
			NetFlow* I16, // net ID: I16 lsb: 0  msb: 0 INPUT
			NetFlow* I17, // net ID: I17 lsb: 0  msb: 0 INPUT
			NetFlow* I18, // net ID: I18 lsb: 0  msb: 0 INPUT
			NetFlow* I19, // net ID: I19 lsb: 0  msb: 0 INPUT
			NetFlow* I20, // net ID: I20 lsb: 0  msb: 0 INPUT
			NetFlow* I21, // net ID: I21 lsb: 0  msb: 0 INPUT
			NetFlow* I22, // net ID: I22 lsb: 0  msb: 0 INPUT
			NetFlow* I23, // net ID: I23 lsb: 0  msb: 0 INPUT
			NetFlow* I24, // net ID: I24 lsb: 0  msb: 0 INPUT
			NetFlow* I25, // net ID: I25 lsb: 0  msb: 0 INPUT
			NetFlow* I26, // net ID: I26 lsb: 0  msb: 0 INPUT
			NetFlow* I27, // net ID: I27 lsb: 0  msb: 0 INPUT
			NetFlow* I28, // net ID: I28 lsb: 0  msb: 0 INPUT
			NetFlow* I29, // net ID: I29 lsb: 0  msb: 0 INPUT
			NetFlow* I30, // net ID: I30 lsb: 0  msb: 0 INPUT
			NetFlow* I31 // net ID: I31 lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->O = O; // net ID: O lsb: 0  msb: 0 OUTPUT
			this->I0 = I0; // net ID: I0 lsb: 0  msb: 0 INPUT
			this->I1 = I1; // net ID: I1 lsb: 0  msb: 0 INPUT
			this->I2 = I2; // net ID: I2 lsb: 0  msb: 0 INPUT
			this->I3 = I3; // net ID: I3 lsb: 0  msb: 0 INPUT
			this->I4 = I4; // net ID: I4 lsb: 0  msb: 0 INPUT
			this->I5 = I5; // net ID: I5 lsb: 0  msb: 0 INPUT
			this->I6 = I6; // net ID: I6 lsb: 0  msb: 0 INPUT
			this->I7 = I7; // net ID: I7 lsb: 0  msb: 0 INPUT
			this->I8 = I8; // net ID: I8 lsb: 0  msb: 0 INPUT
			this->I9 = I9; // net ID: I9 lsb: 0  msb: 0 INPUT
			this->I10 = I10; // net ID: I10 lsb: 0  msb: 0 INPUT
			this->I11 = I11; // net ID: I11 lsb: 0  msb: 0 INPUT
			this->I12 = I12; // net ID: I12 lsb: 0  msb: 0 INPUT
			this->I13 = I13; // net ID: I13 lsb: 0  msb: 0 INPUT
			this->I14 = I14; // net ID: I14 lsb: 0  msb: 0 INPUT
			this->I15 = I15; // net ID: I15 lsb: 0  msb: 0 INPUT
			this->I16 = I16; // net ID: I16 lsb: 0  msb: 0 INPUT
			this->I17 = I17; // net ID: I17 lsb: 0  msb: 0 INPUT
			this->I18 = I18; // net ID: I18 lsb: 0  msb: 0 INPUT
			this->I19 = I19; // net ID: I19 lsb: 0  msb: 0 INPUT
			this->I20 = I20; // net ID: I20 lsb: 0  msb: 0 INPUT
			this->I21 = I21; // net ID: I21 lsb: 0  msb: 0 INPUT
			this->I22 = I22; // net ID: I22 lsb: 0  msb: 0 INPUT
			this->I23 = I23; // net ID: I23 lsb: 0  msb: 0 INPUT
			this->I24 = I24; // net ID: I24 lsb: 0  msb: 0 INPUT
			this->I25 = I25; // net ID: I25 lsb: 0  msb: 0 INPUT
			this->I26 = I26; // net ID: I26 lsb: 0  msb: 0 INPUT
			this->I27 = I27; // net ID: I27 lsb: 0  msb: 0 INPUT
			this->I28 = I28; // net ID: I28 lsb: 0  msb: 0 INPUT
			this->I29 = I29; // net ID: I29 lsb: 0  msb: 0 INPUT
			this->I30 = I30; // net ID: I30 lsb: 0  msb: 0 INPUT
			this->I31 = I31; // net ID: I31 lsb: 0  msb: 0 INPUT
			
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
