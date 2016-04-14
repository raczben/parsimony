/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_OR32_H
#define X_OR32_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"
namespace CPrimitives {
	
	class X_OR32: public Primitive{

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
		NetFlow* I8_A0_B; // net ID: I8 lsb: 0  msb: 0 INPUT
		NetFlow* I9_A0_B; // net ID: I9 lsb: 0  msb: 0 INPUT
		NetFlow* I10_A0_B; // net ID: I10 lsb: 0  msb: 0 INPUT
		NetFlow* I11_A0_B; // net ID: I11 lsb: 0  msb: 0 INPUT
		NetFlow* I12_A0_B; // net ID: I12 lsb: 0  msb: 0 INPUT
		NetFlow* I13_A0_B; // net ID: I13 lsb: 0  msb: 0 INPUT
		NetFlow* I14_A0_B; // net ID: I14 lsb: 0  msb: 0 INPUT
		NetFlow* I15_A0_B; // net ID: I15 lsb: 0  msb: 0 INPUT
		NetFlow* I16_A0_B; // net ID: I16 lsb: 0  msb: 0 INPUT
		NetFlow* I17_A0_B; // net ID: I17 lsb: 0  msb: 0 INPUT
		NetFlow* I18_A0_B; // net ID: I18 lsb: 0  msb: 0 INPUT
		NetFlow* I19_A0_B; // net ID: I19 lsb: 0  msb: 0 INPUT
		NetFlow* I20_A0_B; // net ID: I20 lsb: 0  msb: 0 INPUT
		NetFlow* I21_A0_B; // net ID: I21 lsb: 0  msb: 0 INPUT
		NetFlow* I22_A0_B; // net ID: I22 lsb: 0  msb: 0 INPUT
		NetFlow* I23_A0_B; // net ID: I23 lsb: 0  msb: 0 INPUT
		NetFlow* I24_A0_B; // net ID: I24 lsb: 0  msb: 0 INPUT
		NetFlow* I25_A0_B; // net ID: I25 lsb: 0  msb: 0 INPUT
		NetFlow* I26_A0_B; // net ID: I26 lsb: 0  msb: 0 INPUT
		NetFlow* I27_A0_B; // net ID: I27 lsb: 0  msb: 0 INPUT
		NetFlow* I28_A0_B; // net ID: I28 lsb: 0  msb: 0 INPUT
		NetFlow* I29_A0_B; // net ID: I29 lsb: 0  msb: 0 INPUT
		NetFlow* I30_A0_B; // net ID: I30 lsb: 0  msb: 0 INPUT
		NetFlow* I31_A0_B; // net ID: I31 lsb: 0  msb: 0 INPUT
		
		public: X_OR32(
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
			NetFlow* I7_A0_B, // net ID: I7 lsb: 0  msb: 0 INPUT
			NetFlow* I8_A0_B, // net ID: I8 lsb: 0  msb: 0 INPUT
			NetFlow* I9_A0_B, // net ID: I9 lsb: 0  msb: 0 INPUT
			NetFlow* I10_A0_B, // net ID: I10 lsb: 0  msb: 0 INPUT
			NetFlow* I11_A0_B, // net ID: I11 lsb: 0  msb: 0 INPUT
			NetFlow* I12_A0_B, // net ID: I12 lsb: 0  msb: 0 INPUT
			NetFlow* I13_A0_B, // net ID: I13 lsb: 0  msb: 0 INPUT
			NetFlow* I14_A0_B, // net ID: I14 lsb: 0  msb: 0 INPUT
			NetFlow* I15_A0_B, // net ID: I15 lsb: 0  msb: 0 INPUT
			NetFlow* I16_A0_B, // net ID: I16 lsb: 0  msb: 0 INPUT
			NetFlow* I17_A0_B, // net ID: I17 lsb: 0  msb: 0 INPUT
			NetFlow* I18_A0_B, // net ID: I18 lsb: 0  msb: 0 INPUT
			NetFlow* I19_A0_B, // net ID: I19 lsb: 0  msb: 0 INPUT
			NetFlow* I20_A0_B, // net ID: I20 lsb: 0  msb: 0 INPUT
			NetFlow* I21_A0_B, // net ID: I21 lsb: 0  msb: 0 INPUT
			NetFlow* I22_A0_B, // net ID: I22 lsb: 0  msb: 0 INPUT
			NetFlow* I23_A0_B, // net ID: I23 lsb: 0  msb: 0 INPUT
			NetFlow* I24_A0_B, // net ID: I24 lsb: 0  msb: 0 INPUT
			NetFlow* I25_A0_B, // net ID: I25 lsb: 0  msb: 0 INPUT
			NetFlow* I26_A0_B, // net ID: I26 lsb: 0  msb: 0 INPUT
			NetFlow* I27_A0_B, // net ID: I27 lsb: 0  msb: 0 INPUT
			NetFlow* I28_A0_B, // net ID: I28 lsb: 0  msb: 0 INPUT
			NetFlow* I29_A0_B, // net ID: I29 lsb: 0  msb: 0 INPUT
			NetFlow* I30_A0_B, // net ID: I30 lsb: 0  msb: 0 INPUT
			NetFlow* I31_A0_B // net ID: I31 lsb: 0  msb: 0 INPUT
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
			this->I8_A0_B = I8_A0_B; // net ID: I8 lsb: 0  msb: 0 INPUT
			this->I9_A0_B = I9_A0_B; // net ID: I9 lsb: 0  msb: 0 INPUT
			this->I10_A0_B = I10_A0_B; // net ID: I10 lsb: 0  msb: 0 INPUT
			this->I11_A0_B = I11_A0_B; // net ID: I11 lsb: 0  msb: 0 INPUT
			this->I12_A0_B = I12_A0_B; // net ID: I12 lsb: 0  msb: 0 INPUT
			this->I13_A0_B = I13_A0_B; // net ID: I13 lsb: 0  msb: 0 INPUT
			this->I14_A0_B = I14_A0_B; // net ID: I14 lsb: 0  msb: 0 INPUT
			this->I15_A0_B = I15_A0_B; // net ID: I15 lsb: 0  msb: 0 INPUT
			this->I16_A0_B = I16_A0_B; // net ID: I16 lsb: 0  msb: 0 INPUT
			this->I17_A0_B = I17_A0_B; // net ID: I17 lsb: 0  msb: 0 INPUT
			this->I18_A0_B = I18_A0_B; // net ID: I18 lsb: 0  msb: 0 INPUT
			this->I19_A0_B = I19_A0_B; // net ID: I19 lsb: 0  msb: 0 INPUT
			this->I20_A0_B = I20_A0_B; // net ID: I20 lsb: 0  msb: 0 INPUT
			this->I21_A0_B = I21_A0_B; // net ID: I21 lsb: 0  msb: 0 INPUT
			this->I22_A0_B = I22_A0_B; // net ID: I22 lsb: 0  msb: 0 INPUT
			this->I23_A0_B = I23_A0_B; // net ID: I23 lsb: 0  msb: 0 INPUT
			this->I24_A0_B = I24_A0_B; // net ID: I24 lsb: 0  msb: 0 INPUT
			this->I25_A0_B = I25_A0_B; // net ID: I25 lsb: 0  msb: 0 INPUT
			this->I26_A0_B = I26_A0_B; // net ID: I26 lsb: 0  msb: 0 INPUT
			this->I27_A0_B = I27_A0_B; // net ID: I27 lsb: 0  msb: 0 INPUT
			this->I28_A0_B = I28_A0_B; // net ID: I28 lsb: 0  msb: 0 INPUT
			this->I29_A0_B = I29_A0_B; // net ID: I29 lsb: 0  msb: 0 INPUT
			this->I30_A0_B = I30_A0_B; // net ID: I30 lsb: 0  msb: 0 INPUT
			this->I31_A0_B = I31_A0_B; // net ID: I31 lsb: 0  msb: 0 INPUT
			
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
#endif // X_OR32_H
