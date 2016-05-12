/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_EFUSE_USR_H
#define X_EFUSE_USR_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_EFUSE_USR: public Primitive{

		//Verilog Parameters:
		parameter_string_t LOC;
		parameter_int_t SIM_EFUSE_VALUE;
		//Verilog Ports in definition order:
		NetFlow* EFUSEUSR_A31_B; // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
		NetFlow* EFUSEUSR_A30_B; // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
		NetFlow* EFUSEUSR_A29_B; // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
		NetFlow* EFUSEUSR_A28_B; // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
		NetFlow* EFUSEUSR_A27_B; // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
		NetFlow* EFUSEUSR_A26_B; // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
		NetFlow* EFUSEUSR_A25_B; // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
		NetFlow* EFUSEUSR_A24_B; // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
		NetFlow* EFUSEUSR_A23_B; // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
		NetFlow* EFUSEUSR_A22_B; // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
		NetFlow* EFUSEUSR_A21_B; // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
		NetFlow* EFUSEUSR_A20_B; // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
		NetFlow* EFUSEUSR_A19_B; // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
		NetFlow* EFUSEUSR_A18_B; // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
		NetFlow* EFUSEUSR_A17_B; // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
		NetFlow* EFUSEUSR_A16_B; // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
		NetFlow* EFUSEUSR_A15_B; // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
		NetFlow* EFUSEUSR_A14_B; // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
		NetFlow* EFUSEUSR_A13_B; // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
		NetFlow* EFUSEUSR_A12_B; // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
		NetFlow* EFUSEUSR_A11_B; // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
		NetFlow* EFUSEUSR_A10_B; // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
		NetFlow* EFUSEUSR_A9_B; // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
		NetFlow* EFUSEUSR_A8_B; // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
		NetFlow* EFUSEUSR_A7_B; // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
		NetFlow* EFUSEUSR_A6_B; // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
		NetFlow* EFUSEUSR_A5_B; // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
		NetFlow* EFUSEUSR_A4_B; // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
		NetFlow* EFUSEUSR_A3_B; // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
		NetFlow* EFUSEUSR_A2_B; // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
		NetFlow* EFUSEUSR_A1_B; // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
		NetFlow* EFUSEUSR_A0_B; // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
		
		public: X_EFUSE_USR(
			const char * name,
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_int_t SIM_EFUSE_VALUE, // Default: 32'h00000000
			//Verilog Ports in definition order:
			NetFlow* EFUSEUSR_A31_B, // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
			NetFlow* EFUSEUSR_A30_B, // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
			NetFlow* EFUSEUSR_A29_B, // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
			NetFlow* EFUSEUSR_A28_B, // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
			NetFlow* EFUSEUSR_A27_B, // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
			NetFlow* EFUSEUSR_A26_B, // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
			NetFlow* EFUSEUSR_A25_B, // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
			NetFlow* EFUSEUSR_A24_B, // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
			NetFlow* EFUSEUSR_A23_B, // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
			NetFlow* EFUSEUSR_A22_B, // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
			NetFlow* EFUSEUSR_A21_B, // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
			NetFlow* EFUSEUSR_A20_B, // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
			NetFlow* EFUSEUSR_A19_B, // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
			NetFlow* EFUSEUSR_A18_B, // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
			NetFlow* EFUSEUSR_A17_B, // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
			NetFlow* EFUSEUSR_A16_B, // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
			NetFlow* EFUSEUSR_A15_B, // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
			NetFlow* EFUSEUSR_A14_B, // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
			NetFlow* EFUSEUSR_A13_B, // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
			NetFlow* EFUSEUSR_A12_B, // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
			NetFlow* EFUSEUSR_A11_B, // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
			NetFlow* EFUSEUSR_A10_B, // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
			NetFlow* EFUSEUSR_A9_B, // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
			NetFlow* EFUSEUSR_A8_B, // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
			NetFlow* EFUSEUSR_A7_B, // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
			NetFlow* EFUSEUSR_A6_B, // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
			NetFlow* EFUSEUSR_A5_B, // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
			NetFlow* EFUSEUSR_A4_B, // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
			NetFlow* EFUSEUSR_A3_B, // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
			NetFlow* EFUSEUSR_A2_B, // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
			NetFlow* EFUSEUSR_A1_B, // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
			NetFlow* EFUSEUSR_A0_B // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->LOC = LOC; // Default: "UNPLACED"
			this->SIM_EFUSE_VALUE = SIM_EFUSE_VALUE; // Default: 32'h00000000
			//Verilog Ports in definition order:
			this->EFUSEUSR_A31_B = EFUSEUSR_A31_B; // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
			this->EFUSEUSR_A30_B = EFUSEUSR_A30_B; // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
			this->EFUSEUSR_A29_B = EFUSEUSR_A29_B; // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
			this->EFUSEUSR_A28_B = EFUSEUSR_A28_B; // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
			this->EFUSEUSR_A27_B = EFUSEUSR_A27_B; // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
			this->EFUSEUSR_A26_B = EFUSEUSR_A26_B; // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
			this->EFUSEUSR_A25_B = EFUSEUSR_A25_B; // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
			this->EFUSEUSR_A24_B = EFUSEUSR_A24_B; // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
			this->EFUSEUSR_A23_B = EFUSEUSR_A23_B; // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
			this->EFUSEUSR_A22_B = EFUSEUSR_A22_B; // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
			this->EFUSEUSR_A21_B = EFUSEUSR_A21_B; // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
			this->EFUSEUSR_A20_B = EFUSEUSR_A20_B; // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
			this->EFUSEUSR_A19_B = EFUSEUSR_A19_B; // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
			this->EFUSEUSR_A18_B = EFUSEUSR_A18_B; // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
			this->EFUSEUSR_A17_B = EFUSEUSR_A17_B; // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
			this->EFUSEUSR_A16_B = EFUSEUSR_A16_B; // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
			this->EFUSEUSR_A15_B = EFUSEUSR_A15_B; // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
			this->EFUSEUSR_A14_B = EFUSEUSR_A14_B; // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
			this->EFUSEUSR_A13_B = EFUSEUSR_A13_B; // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
			this->EFUSEUSR_A12_B = EFUSEUSR_A12_B; // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
			this->EFUSEUSR_A11_B = EFUSEUSR_A11_B; // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
			this->EFUSEUSR_A10_B = EFUSEUSR_A10_B; // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
			this->EFUSEUSR_A9_B = EFUSEUSR_A9_B; // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
			this->EFUSEUSR_A8_B = EFUSEUSR_A8_B; // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
			this->EFUSEUSR_A7_B = EFUSEUSR_A7_B; // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
			this->EFUSEUSR_A6_B = EFUSEUSR_A6_B; // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
			this->EFUSEUSR_A5_B = EFUSEUSR_A5_B; // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
			this->EFUSEUSR_A4_B = EFUSEUSR_A4_B; // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
			this->EFUSEUSR_A3_B = EFUSEUSR_A3_B; // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
			this->EFUSEUSR_A2_B = EFUSEUSR_A2_B; // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
			this->EFUSEUSR_A1_B = EFUSEUSR_A1_B; // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
			this->EFUSEUSR_A0_B = EFUSEUSR_A0_B; // net ID: EFUSEUSR lsb: 0  msb: 31 OUTPUT
			
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
#endif // X_EFUSE_USR_H
