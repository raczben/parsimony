/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_MULT18X18S_H
#define X_MULT18X18S_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_MULT18X18S: public Primitive{

		//Verilog Parameters:
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* P_A0_B; // net ID: P lsb: 0  msb: 35 OUTPUT
		NetFlow* P_A1_B; // net ID: P lsb: 0  msb: 35 OUTPUT
		NetFlow* P_A2_B; // net ID: P lsb: 0  msb: 35 OUTPUT
		NetFlow* P_A3_B; // net ID: P lsb: 0  msb: 35 OUTPUT
		NetFlow* P_A4_B; // net ID: P lsb: 0  msb: 35 OUTPUT
		NetFlow* P_A5_B; // net ID: P lsb: 0  msb: 35 OUTPUT
		NetFlow* P_A6_B; // net ID: P lsb: 0  msb: 35 OUTPUT
		NetFlow* P_A7_B; // net ID: P lsb: 0  msb: 35 OUTPUT
		NetFlow* P_A8_B; // net ID: P lsb: 0  msb: 35 OUTPUT
		NetFlow* P_A9_B; // net ID: P lsb: 0  msb: 35 OUTPUT
		NetFlow* P_A10_B; // net ID: P lsb: 0  msb: 35 OUTPUT
		NetFlow* P_A11_B; // net ID: P lsb: 0  msb: 35 OUTPUT
		NetFlow* P_A12_B; // net ID: P lsb: 0  msb: 35 OUTPUT
		NetFlow* P_A13_B; // net ID: P lsb: 0  msb: 35 OUTPUT
		NetFlow* P_A14_B; // net ID: P lsb: 0  msb: 35 OUTPUT
		NetFlow* P_A15_B; // net ID: P lsb: 0  msb: 35 OUTPUT
		NetFlow* P_A16_B; // net ID: P lsb: 0  msb: 35 OUTPUT
		NetFlow* P_A17_B; // net ID: P lsb: 0  msb: 35 OUTPUT
		NetFlow* P_A18_B; // net ID: P lsb: 0  msb: 35 OUTPUT
		NetFlow* P_A19_B; // net ID: P lsb: 0  msb: 35 OUTPUT
		NetFlow* P_A20_B; // net ID: P lsb: 0  msb: 35 OUTPUT
		NetFlow* P_A21_B; // net ID: P lsb: 0  msb: 35 OUTPUT
		NetFlow* P_A22_B; // net ID: P lsb: 0  msb: 35 OUTPUT
		NetFlow* P_A23_B; // net ID: P lsb: 0  msb: 35 OUTPUT
		NetFlow* P_A24_B; // net ID: P lsb: 0  msb: 35 OUTPUT
		NetFlow* P_A25_B; // net ID: P lsb: 0  msb: 35 OUTPUT
		NetFlow* P_A26_B; // net ID: P lsb: 0  msb: 35 OUTPUT
		NetFlow* P_A27_B; // net ID: P lsb: 0  msb: 35 OUTPUT
		NetFlow* P_A28_B; // net ID: P lsb: 0  msb: 35 OUTPUT
		NetFlow* P_A29_B; // net ID: P lsb: 0  msb: 35 OUTPUT
		NetFlow* P_A30_B; // net ID: P lsb: 0  msb: 35 OUTPUT
		NetFlow* P_A31_B; // net ID: P lsb: 0  msb: 35 OUTPUT
		NetFlow* P_A32_B; // net ID: P lsb: 0  msb: 35 OUTPUT
		NetFlow* P_A33_B; // net ID: P lsb: 0  msb: 35 OUTPUT
		NetFlow* P_A34_B; // net ID: P lsb: 0  msb: 35 OUTPUT
		NetFlow* P_A35_B; // net ID: P lsb: 0  msb: 35 OUTPUT
		NetFlow* A_A0_B; // net ID: A lsb: 0  msb: 17 INPUT
		NetFlow* A_A1_B; // net ID: A lsb: 0  msb: 17 INPUT
		NetFlow* A_A2_B; // net ID: A lsb: 0  msb: 17 INPUT
		NetFlow* A_A3_B; // net ID: A lsb: 0  msb: 17 INPUT
		NetFlow* A_A4_B; // net ID: A lsb: 0  msb: 17 INPUT
		NetFlow* A_A5_B; // net ID: A lsb: 0  msb: 17 INPUT
		NetFlow* A_A6_B; // net ID: A lsb: 0  msb: 17 INPUT
		NetFlow* A_A7_B; // net ID: A lsb: 0  msb: 17 INPUT
		NetFlow* A_A8_B; // net ID: A lsb: 0  msb: 17 INPUT
		NetFlow* A_A9_B; // net ID: A lsb: 0  msb: 17 INPUT
		NetFlow* A_A10_B; // net ID: A lsb: 0  msb: 17 INPUT
		NetFlow* A_A11_B; // net ID: A lsb: 0  msb: 17 INPUT
		NetFlow* A_A12_B; // net ID: A lsb: 0  msb: 17 INPUT
		NetFlow* A_A13_B; // net ID: A lsb: 0  msb: 17 INPUT
		NetFlow* A_A14_B; // net ID: A lsb: 0  msb: 17 INPUT
		NetFlow* A_A15_B; // net ID: A lsb: 0  msb: 17 INPUT
		NetFlow* A_A16_B; // net ID: A lsb: 0  msb: 17 INPUT
		NetFlow* A_A17_B; // net ID: A lsb: 0  msb: 17 INPUT
		NetFlow* B_A0_B; // net ID: B lsb: 0  msb: 17 INPUT
		NetFlow* B_A1_B; // net ID: B lsb: 0  msb: 17 INPUT
		NetFlow* B_A2_B; // net ID: B lsb: 0  msb: 17 INPUT
		NetFlow* B_A3_B; // net ID: B lsb: 0  msb: 17 INPUT
		NetFlow* B_A4_B; // net ID: B lsb: 0  msb: 17 INPUT
		NetFlow* B_A5_B; // net ID: B lsb: 0  msb: 17 INPUT
		NetFlow* B_A6_B; // net ID: B lsb: 0  msb: 17 INPUT
		NetFlow* B_A7_B; // net ID: B lsb: 0  msb: 17 INPUT
		NetFlow* B_A8_B; // net ID: B lsb: 0  msb: 17 INPUT
		NetFlow* B_A9_B; // net ID: B lsb: 0  msb: 17 INPUT
		NetFlow* B_A10_B; // net ID: B lsb: 0  msb: 17 INPUT
		NetFlow* B_A11_B; // net ID: B lsb: 0  msb: 17 INPUT
		NetFlow* B_A12_B; // net ID: B lsb: 0  msb: 17 INPUT
		NetFlow* B_A13_B; // net ID: B lsb: 0  msb: 17 INPUT
		NetFlow* B_A14_B; // net ID: B lsb: 0  msb: 17 INPUT
		NetFlow* B_A15_B; // net ID: B lsb: 0  msb: 17 INPUT
		NetFlow* B_A16_B; // net ID: B lsb: 0  msb: 17 INPUT
		NetFlow* B_A17_B; // net ID: B lsb: 0  msb: 17 INPUT
		NetFlow* C_A0_B; // net ID: C lsb: 0  msb: 0 INPUT
		NetFlow* CE_A0_B; // net ID: CE lsb: 0  msb: 0 INPUT
		NetFlow* R_A0_B; // net ID: R lsb: 0  msb: 0 INPUT
		
		public: X_MULT18X18S(
			const char * name,
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* P_A0_B, // net ID: P lsb: 0  msb: 35 OUTPUT
			NetFlow* P_A1_B, // net ID: P lsb: 0  msb: 35 OUTPUT
			NetFlow* P_A2_B, // net ID: P lsb: 0  msb: 35 OUTPUT
			NetFlow* P_A3_B, // net ID: P lsb: 0  msb: 35 OUTPUT
			NetFlow* P_A4_B, // net ID: P lsb: 0  msb: 35 OUTPUT
			NetFlow* P_A5_B, // net ID: P lsb: 0  msb: 35 OUTPUT
			NetFlow* P_A6_B, // net ID: P lsb: 0  msb: 35 OUTPUT
			NetFlow* P_A7_B, // net ID: P lsb: 0  msb: 35 OUTPUT
			NetFlow* P_A8_B, // net ID: P lsb: 0  msb: 35 OUTPUT
			NetFlow* P_A9_B, // net ID: P lsb: 0  msb: 35 OUTPUT
			NetFlow* P_A10_B, // net ID: P lsb: 0  msb: 35 OUTPUT
			NetFlow* P_A11_B, // net ID: P lsb: 0  msb: 35 OUTPUT
			NetFlow* P_A12_B, // net ID: P lsb: 0  msb: 35 OUTPUT
			NetFlow* P_A13_B, // net ID: P lsb: 0  msb: 35 OUTPUT
			NetFlow* P_A14_B, // net ID: P lsb: 0  msb: 35 OUTPUT
			NetFlow* P_A15_B, // net ID: P lsb: 0  msb: 35 OUTPUT
			NetFlow* P_A16_B, // net ID: P lsb: 0  msb: 35 OUTPUT
			NetFlow* P_A17_B, // net ID: P lsb: 0  msb: 35 OUTPUT
			NetFlow* P_A18_B, // net ID: P lsb: 0  msb: 35 OUTPUT
			NetFlow* P_A19_B, // net ID: P lsb: 0  msb: 35 OUTPUT
			NetFlow* P_A20_B, // net ID: P lsb: 0  msb: 35 OUTPUT
			NetFlow* P_A21_B, // net ID: P lsb: 0  msb: 35 OUTPUT
			NetFlow* P_A22_B, // net ID: P lsb: 0  msb: 35 OUTPUT
			NetFlow* P_A23_B, // net ID: P lsb: 0  msb: 35 OUTPUT
			NetFlow* P_A24_B, // net ID: P lsb: 0  msb: 35 OUTPUT
			NetFlow* P_A25_B, // net ID: P lsb: 0  msb: 35 OUTPUT
			NetFlow* P_A26_B, // net ID: P lsb: 0  msb: 35 OUTPUT
			NetFlow* P_A27_B, // net ID: P lsb: 0  msb: 35 OUTPUT
			NetFlow* P_A28_B, // net ID: P lsb: 0  msb: 35 OUTPUT
			NetFlow* P_A29_B, // net ID: P lsb: 0  msb: 35 OUTPUT
			NetFlow* P_A30_B, // net ID: P lsb: 0  msb: 35 OUTPUT
			NetFlow* P_A31_B, // net ID: P lsb: 0  msb: 35 OUTPUT
			NetFlow* P_A32_B, // net ID: P lsb: 0  msb: 35 OUTPUT
			NetFlow* P_A33_B, // net ID: P lsb: 0  msb: 35 OUTPUT
			NetFlow* P_A34_B, // net ID: P lsb: 0  msb: 35 OUTPUT
			NetFlow* P_A35_B, // net ID: P lsb: 0  msb: 35 OUTPUT
			NetFlow* A_A0_B, // net ID: A lsb: 0  msb: 17 INPUT
			NetFlow* A_A1_B, // net ID: A lsb: 0  msb: 17 INPUT
			NetFlow* A_A2_B, // net ID: A lsb: 0  msb: 17 INPUT
			NetFlow* A_A3_B, // net ID: A lsb: 0  msb: 17 INPUT
			NetFlow* A_A4_B, // net ID: A lsb: 0  msb: 17 INPUT
			NetFlow* A_A5_B, // net ID: A lsb: 0  msb: 17 INPUT
			NetFlow* A_A6_B, // net ID: A lsb: 0  msb: 17 INPUT
			NetFlow* A_A7_B, // net ID: A lsb: 0  msb: 17 INPUT
			NetFlow* A_A8_B, // net ID: A lsb: 0  msb: 17 INPUT
			NetFlow* A_A9_B, // net ID: A lsb: 0  msb: 17 INPUT
			NetFlow* A_A10_B, // net ID: A lsb: 0  msb: 17 INPUT
			NetFlow* A_A11_B, // net ID: A lsb: 0  msb: 17 INPUT
			NetFlow* A_A12_B, // net ID: A lsb: 0  msb: 17 INPUT
			NetFlow* A_A13_B, // net ID: A lsb: 0  msb: 17 INPUT
			NetFlow* A_A14_B, // net ID: A lsb: 0  msb: 17 INPUT
			NetFlow* A_A15_B, // net ID: A lsb: 0  msb: 17 INPUT
			NetFlow* A_A16_B, // net ID: A lsb: 0  msb: 17 INPUT
			NetFlow* A_A17_B, // net ID: A lsb: 0  msb: 17 INPUT
			NetFlow* B_A0_B, // net ID: B lsb: 0  msb: 17 INPUT
			NetFlow* B_A1_B, // net ID: B lsb: 0  msb: 17 INPUT
			NetFlow* B_A2_B, // net ID: B lsb: 0  msb: 17 INPUT
			NetFlow* B_A3_B, // net ID: B lsb: 0  msb: 17 INPUT
			NetFlow* B_A4_B, // net ID: B lsb: 0  msb: 17 INPUT
			NetFlow* B_A5_B, // net ID: B lsb: 0  msb: 17 INPUT
			NetFlow* B_A6_B, // net ID: B lsb: 0  msb: 17 INPUT
			NetFlow* B_A7_B, // net ID: B lsb: 0  msb: 17 INPUT
			NetFlow* B_A8_B, // net ID: B lsb: 0  msb: 17 INPUT
			NetFlow* B_A9_B, // net ID: B lsb: 0  msb: 17 INPUT
			NetFlow* B_A10_B, // net ID: B lsb: 0  msb: 17 INPUT
			NetFlow* B_A11_B, // net ID: B lsb: 0  msb: 17 INPUT
			NetFlow* B_A12_B, // net ID: B lsb: 0  msb: 17 INPUT
			NetFlow* B_A13_B, // net ID: B lsb: 0  msb: 17 INPUT
			NetFlow* B_A14_B, // net ID: B lsb: 0  msb: 17 INPUT
			NetFlow* B_A15_B, // net ID: B lsb: 0  msb: 17 INPUT
			NetFlow* B_A16_B, // net ID: B lsb: 0  msb: 17 INPUT
			NetFlow* B_A17_B, // net ID: B lsb: 0  msb: 17 INPUT
			NetFlow* C_A0_B, // net ID: C lsb: 0  msb: 0 INPUT
			NetFlow* CE_A0_B, // net ID: CE lsb: 0  msb: 0 INPUT
			NetFlow* R_A0_B // net ID: R lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->P_A0_B = P_A0_B; // net ID: P lsb: 0  msb: 35 OUTPUT
			this->P_A1_B = P_A1_B; // net ID: P lsb: 0  msb: 35 OUTPUT
			this->P_A2_B = P_A2_B; // net ID: P lsb: 0  msb: 35 OUTPUT
			this->P_A3_B = P_A3_B; // net ID: P lsb: 0  msb: 35 OUTPUT
			this->P_A4_B = P_A4_B; // net ID: P lsb: 0  msb: 35 OUTPUT
			this->P_A5_B = P_A5_B; // net ID: P lsb: 0  msb: 35 OUTPUT
			this->P_A6_B = P_A6_B; // net ID: P lsb: 0  msb: 35 OUTPUT
			this->P_A7_B = P_A7_B; // net ID: P lsb: 0  msb: 35 OUTPUT
			this->P_A8_B = P_A8_B; // net ID: P lsb: 0  msb: 35 OUTPUT
			this->P_A9_B = P_A9_B; // net ID: P lsb: 0  msb: 35 OUTPUT
			this->P_A10_B = P_A10_B; // net ID: P lsb: 0  msb: 35 OUTPUT
			this->P_A11_B = P_A11_B; // net ID: P lsb: 0  msb: 35 OUTPUT
			this->P_A12_B = P_A12_B; // net ID: P lsb: 0  msb: 35 OUTPUT
			this->P_A13_B = P_A13_B; // net ID: P lsb: 0  msb: 35 OUTPUT
			this->P_A14_B = P_A14_B; // net ID: P lsb: 0  msb: 35 OUTPUT
			this->P_A15_B = P_A15_B; // net ID: P lsb: 0  msb: 35 OUTPUT
			this->P_A16_B = P_A16_B; // net ID: P lsb: 0  msb: 35 OUTPUT
			this->P_A17_B = P_A17_B; // net ID: P lsb: 0  msb: 35 OUTPUT
			this->P_A18_B = P_A18_B; // net ID: P lsb: 0  msb: 35 OUTPUT
			this->P_A19_B = P_A19_B; // net ID: P lsb: 0  msb: 35 OUTPUT
			this->P_A20_B = P_A20_B; // net ID: P lsb: 0  msb: 35 OUTPUT
			this->P_A21_B = P_A21_B; // net ID: P lsb: 0  msb: 35 OUTPUT
			this->P_A22_B = P_A22_B; // net ID: P lsb: 0  msb: 35 OUTPUT
			this->P_A23_B = P_A23_B; // net ID: P lsb: 0  msb: 35 OUTPUT
			this->P_A24_B = P_A24_B; // net ID: P lsb: 0  msb: 35 OUTPUT
			this->P_A25_B = P_A25_B; // net ID: P lsb: 0  msb: 35 OUTPUT
			this->P_A26_B = P_A26_B; // net ID: P lsb: 0  msb: 35 OUTPUT
			this->P_A27_B = P_A27_B; // net ID: P lsb: 0  msb: 35 OUTPUT
			this->P_A28_B = P_A28_B; // net ID: P lsb: 0  msb: 35 OUTPUT
			this->P_A29_B = P_A29_B; // net ID: P lsb: 0  msb: 35 OUTPUT
			this->P_A30_B = P_A30_B; // net ID: P lsb: 0  msb: 35 OUTPUT
			this->P_A31_B = P_A31_B; // net ID: P lsb: 0  msb: 35 OUTPUT
			this->P_A32_B = P_A32_B; // net ID: P lsb: 0  msb: 35 OUTPUT
			this->P_A33_B = P_A33_B; // net ID: P lsb: 0  msb: 35 OUTPUT
			this->P_A34_B = P_A34_B; // net ID: P lsb: 0  msb: 35 OUTPUT
			this->P_A35_B = P_A35_B; // net ID: P lsb: 0  msb: 35 OUTPUT
			this->A_A0_B = A_A0_B; // net ID: A lsb: 0  msb: 17 INPUT
			this->A_A1_B = A_A1_B; // net ID: A lsb: 0  msb: 17 INPUT
			this->A_A2_B = A_A2_B; // net ID: A lsb: 0  msb: 17 INPUT
			this->A_A3_B = A_A3_B; // net ID: A lsb: 0  msb: 17 INPUT
			this->A_A4_B = A_A4_B; // net ID: A lsb: 0  msb: 17 INPUT
			this->A_A5_B = A_A5_B; // net ID: A lsb: 0  msb: 17 INPUT
			this->A_A6_B = A_A6_B; // net ID: A lsb: 0  msb: 17 INPUT
			this->A_A7_B = A_A7_B; // net ID: A lsb: 0  msb: 17 INPUT
			this->A_A8_B = A_A8_B; // net ID: A lsb: 0  msb: 17 INPUT
			this->A_A9_B = A_A9_B; // net ID: A lsb: 0  msb: 17 INPUT
			this->A_A10_B = A_A10_B; // net ID: A lsb: 0  msb: 17 INPUT
			this->A_A11_B = A_A11_B; // net ID: A lsb: 0  msb: 17 INPUT
			this->A_A12_B = A_A12_B; // net ID: A lsb: 0  msb: 17 INPUT
			this->A_A13_B = A_A13_B; // net ID: A lsb: 0  msb: 17 INPUT
			this->A_A14_B = A_A14_B; // net ID: A lsb: 0  msb: 17 INPUT
			this->A_A15_B = A_A15_B; // net ID: A lsb: 0  msb: 17 INPUT
			this->A_A16_B = A_A16_B; // net ID: A lsb: 0  msb: 17 INPUT
			this->A_A17_B = A_A17_B; // net ID: A lsb: 0  msb: 17 INPUT
			this->B_A0_B = B_A0_B; // net ID: B lsb: 0  msb: 17 INPUT
			this->B_A1_B = B_A1_B; // net ID: B lsb: 0  msb: 17 INPUT
			this->B_A2_B = B_A2_B; // net ID: B lsb: 0  msb: 17 INPUT
			this->B_A3_B = B_A3_B; // net ID: B lsb: 0  msb: 17 INPUT
			this->B_A4_B = B_A4_B; // net ID: B lsb: 0  msb: 17 INPUT
			this->B_A5_B = B_A5_B; // net ID: B lsb: 0  msb: 17 INPUT
			this->B_A6_B = B_A6_B; // net ID: B lsb: 0  msb: 17 INPUT
			this->B_A7_B = B_A7_B; // net ID: B lsb: 0  msb: 17 INPUT
			this->B_A8_B = B_A8_B; // net ID: B lsb: 0  msb: 17 INPUT
			this->B_A9_B = B_A9_B; // net ID: B lsb: 0  msb: 17 INPUT
			this->B_A10_B = B_A10_B; // net ID: B lsb: 0  msb: 17 INPUT
			this->B_A11_B = B_A11_B; // net ID: B lsb: 0  msb: 17 INPUT
			this->B_A12_B = B_A12_B; // net ID: B lsb: 0  msb: 17 INPUT
			this->B_A13_B = B_A13_B; // net ID: B lsb: 0  msb: 17 INPUT
			this->B_A14_B = B_A14_B; // net ID: B lsb: 0  msb: 17 INPUT
			this->B_A15_B = B_A15_B; // net ID: B lsb: 0  msb: 17 INPUT
			this->B_A16_B = B_A16_B; // net ID: B lsb: 0  msb: 17 INPUT
			this->B_A17_B = B_A17_B; // net ID: B lsb: 0  msb: 17 INPUT
			this->C_A0_B = C_A0_B; // net ID: C lsb: 0  msb: 0 INPUT
			this->CE_A0_B = CE_A0_B; // net ID: CE lsb: 0  msb: 0 INPUT
			this->R_A0_B = R_A0_B; // net ID: R lsb: 0  msb: 0 INPUT
			
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
#endif // X_MULT18X18S_H
