/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_MULT18X18SIO_H
#define X_MULT18X18SIO_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"
namespace CPrimitives {
	
	class X_MULT18X18SIO: public Primitive{

		//Verilog Parameters:
		parameter_int_t AREG;
		parameter_int_t BREG;
		parameter_string_t B_INPUT;
		parameter_string_t LOC;
		parameter_int_t PREG;
		//Verilog Ports in definition order:
		NetFlow* BCOUT_A0_B; // net ID: BCOUT lsb: 0  msb: 0 OUTPUT
		NetFlow* P_A0_B; // net ID: P lsb: 0  msb: 0 OUTPUT
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
		NetFlow* BCIN_A0_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
		NetFlow* BCIN_A1_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
		NetFlow* BCIN_A2_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
		NetFlow* BCIN_A3_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
		NetFlow* BCIN_A4_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
		NetFlow* BCIN_A5_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
		NetFlow* BCIN_A6_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
		NetFlow* BCIN_A7_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
		NetFlow* BCIN_A8_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
		NetFlow* BCIN_A9_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
		NetFlow* BCIN_A10_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
		NetFlow* BCIN_A11_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
		NetFlow* BCIN_A12_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
		NetFlow* BCIN_A13_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
		NetFlow* BCIN_A14_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
		NetFlow* BCIN_A15_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
		NetFlow* BCIN_A16_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
		NetFlow* BCIN_A17_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
		NetFlow* CEA_A0_B; // net ID: CEA lsb: 0  msb: 0 INPUT
		NetFlow* CEB_A0_B; // net ID: CEB lsb: 0  msb: 0 INPUT
		NetFlow* CEP_A0_B; // net ID: CEP lsb: 0  msb: 0 INPUT
		NetFlow* CLK_A0_B; // net ID: CLK lsb: 0  msb: 0 INPUT
		NetFlow* RSTA_A0_B; // net ID: RSTA lsb: 0  msb: 0 INPUT
		NetFlow* RSTB_A0_B; // net ID: RSTB lsb: 0  msb: 0 INPUT
		NetFlow* RSTP_A0_B; // net ID: RSTP lsb: 0  msb: 0 INPUT
		
		public: X_MULT18X18SIO(
			const char * name,
			//Verilog Parameters:
			parameter_int_t AREG, // Default: 1
			parameter_int_t BREG, // Default: 1
			parameter_string_t B_INPUT, // Default: "DIRECT"
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_int_t PREG, // Default: 1
			//Verilog Ports in definition order:
			NetFlow* BCOUT_A0_B, // net ID: BCOUT lsb: 0  msb: 0 OUTPUT
			NetFlow* P_A0_B, // net ID: P lsb: 0  msb: 0 OUTPUT
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
			NetFlow* BCIN_A0_B, // net ID: BCIN lsb: 0  msb: 17 INPUT
			NetFlow* BCIN_A1_B, // net ID: BCIN lsb: 0  msb: 17 INPUT
			NetFlow* BCIN_A2_B, // net ID: BCIN lsb: 0  msb: 17 INPUT
			NetFlow* BCIN_A3_B, // net ID: BCIN lsb: 0  msb: 17 INPUT
			NetFlow* BCIN_A4_B, // net ID: BCIN lsb: 0  msb: 17 INPUT
			NetFlow* BCIN_A5_B, // net ID: BCIN lsb: 0  msb: 17 INPUT
			NetFlow* BCIN_A6_B, // net ID: BCIN lsb: 0  msb: 17 INPUT
			NetFlow* BCIN_A7_B, // net ID: BCIN lsb: 0  msb: 17 INPUT
			NetFlow* BCIN_A8_B, // net ID: BCIN lsb: 0  msb: 17 INPUT
			NetFlow* BCIN_A9_B, // net ID: BCIN lsb: 0  msb: 17 INPUT
			NetFlow* BCIN_A10_B, // net ID: BCIN lsb: 0  msb: 17 INPUT
			NetFlow* BCIN_A11_B, // net ID: BCIN lsb: 0  msb: 17 INPUT
			NetFlow* BCIN_A12_B, // net ID: BCIN lsb: 0  msb: 17 INPUT
			NetFlow* BCIN_A13_B, // net ID: BCIN lsb: 0  msb: 17 INPUT
			NetFlow* BCIN_A14_B, // net ID: BCIN lsb: 0  msb: 17 INPUT
			NetFlow* BCIN_A15_B, // net ID: BCIN lsb: 0  msb: 17 INPUT
			NetFlow* BCIN_A16_B, // net ID: BCIN lsb: 0  msb: 17 INPUT
			NetFlow* BCIN_A17_B, // net ID: BCIN lsb: 0  msb: 17 INPUT
			NetFlow* CEA_A0_B, // net ID: CEA lsb: 0  msb: 0 INPUT
			NetFlow* CEB_A0_B, // net ID: CEB lsb: 0  msb: 0 INPUT
			NetFlow* CEP_A0_B, // net ID: CEP lsb: 0  msb: 0 INPUT
			NetFlow* CLK_A0_B, // net ID: CLK lsb: 0  msb: 0 INPUT
			NetFlow* RSTA_A0_B, // net ID: RSTA lsb: 0  msb: 0 INPUT
			NetFlow* RSTB_A0_B, // net ID: RSTB lsb: 0  msb: 0 INPUT
			NetFlow* RSTP_A0_B // net ID: RSTP lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->AREG = AREG; // Default: 1
			this->BREG = BREG; // Default: 1
			this->B_INPUT = B_INPUT; // Default: "DIRECT"
			this->LOC = LOC; // Default: "UNPLACED"
			this->PREG = PREG; // Default: 1
			//Verilog Ports in definition order:
			this->BCOUT_A0_B = BCOUT_A0_B; // net ID: BCOUT lsb: 0  msb: 0 OUTPUT
			this->P_A0_B = P_A0_B; // net ID: P lsb: 0  msb: 0 OUTPUT
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
			this->BCIN_A0_B = BCIN_A0_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
			this->BCIN_A1_B = BCIN_A1_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
			this->BCIN_A2_B = BCIN_A2_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
			this->BCIN_A3_B = BCIN_A3_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
			this->BCIN_A4_B = BCIN_A4_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
			this->BCIN_A5_B = BCIN_A5_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
			this->BCIN_A6_B = BCIN_A6_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
			this->BCIN_A7_B = BCIN_A7_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
			this->BCIN_A8_B = BCIN_A8_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
			this->BCIN_A9_B = BCIN_A9_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
			this->BCIN_A10_B = BCIN_A10_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
			this->BCIN_A11_B = BCIN_A11_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
			this->BCIN_A12_B = BCIN_A12_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
			this->BCIN_A13_B = BCIN_A13_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
			this->BCIN_A14_B = BCIN_A14_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
			this->BCIN_A15_B = BCIN_A15_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
			this->BCIN_A16_B = BCIN_A16_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
			this->BCIN_A17_B = BCIN_A17_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
			this->CEA_A0_B = CEA_A0_B; // net ID: CEA lsb: 0  msb: 0 INPUT
			this->CEB_A0_B = CEB_A0_B; // net ID: CEB lsb: 0  msb: 0 INPUT
			this->CEP_A0_B = CEP_A0_B; // net ID: CEP lsb: 0  msb: 0 INPUT
			this->CLK_A0_B = CLK_A0_B; // net ID: CLK lsb: 0  msb: 0 INPUT
			this->RSTA_A0_B = RSTA_A0_B; // net ID: RSTA lsb: 0  msb: 0 INPUT
			this->RSTB_A0_B = RSTB_A0_B; // net ID: RSTB lsb: 0  msb: 0 INPUT
			this->RSTP_A0_B = RSTP_A0_B; // net ID: RSTP lsb: 0  msb: 0 INPUT
			
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
#endif // X_MULT18X18SIO_H
