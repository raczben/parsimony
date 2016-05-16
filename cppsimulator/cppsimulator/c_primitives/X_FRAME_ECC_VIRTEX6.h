/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_FRAME_ECC_VIRTEX6_H
#define X_FRAME_ECC_VIRTEX6_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_FRAME_ECC_VIRTEX6: public Primitive{

		//Verilog Parameters:
		parameter_string_t LOC;
		parameter_string_t FARSRC;
		parameter_string_t FRAME_RBT_IN_FILENAME;
		//Verilog Ports in definition order:
		NetFlow* CRCERROR_A0_B; // net ID: CRCERROR lsb: 0  msb: 0 OUTPUT
		NetFlow* ECCERROR_A0_B; // net ID: ECCERROR lsb: 0  msb: 0 OUTPUT
		NetFlow* ECCERRORSINGLE_A0_B; // net ID: ECCERRORSINGLE lsb: 0  msb: 0 OUTPUT
		NetFlow* FAR_A23_B; // net ID: FAR lsb: 0  msb: 23 OUTPUT
		NetFlow* FAR_A22_B; // net ID: FAR lsb: 0  msb: 23 OUTPUT
		NetFlow* FAR_A21_B; // net ID: FAR lsb: 0  msb: 23 OUTPUT
		NetFlow* FAR_A20_B; // net ID: FAR lsb: 0  msb: 23 OUTPUT
		NetFlow* FAR_A19_B; // net ID: FAR lsb: 0  msb: 23 OUTPUT
		NetFlow* FAR_A18_B; // net ID: FAR lsb: 0  msb: 23 OUTPUT
		NetFlow* FAR_A17_B; // net ID: FAR lsb: 0  msb: 23 OUTPUT
		NetFlow* FAR_A16_B; // net ID: FAR lsb: 0  msb: 23 OUTPUT
		NetFlow* FAR_A15_B; // net ID: FAR lsb: 0  msb: 23 OUTPUT
		NetFlow* FAR_A14_B; // net ID: FAR lsb: 0  msb: 23 OUTPUT
		NetFlow* FAR_A13_B; // net ID: FAR lsb: 0  msb: 23 OUTPUT
		NetFlow* FAR_A12_B; // net ID: FAR lsb: 0  msb: 23 OUTPUT
		NetFlow* FAR_A11_B; // net ID: FAR lsb: 0  msb: 23 OUTPUT
		NetFlow* FAR_A10_B; // net ID: FAR lsb: 0  msb: 23 OUTPUT
		NetFlow* FAR_A9_B; // net ID: FAR lsb: 0  msb: 23 OUTPUT
		NetFlow* FAR_A8_B; // net ID: FAR lsb: 0  msb: 23 OUTPUT
		NetFlow* FAR_A7_B; // net ID: FAR lsb: 0  msb: 23 OUTPUT
		NetFlow* FAR_A6_B; // net ID: FAR lsb: 0  msb: 23 OUTPUT
		NetFlow* FAR_A5_B; // net ID: FAR lsb: 0  msb: 23 OUTPUT
		NetFlow* FAR_A4_B; // net ID: FAR lsb: 0  msb: 23 OUTPUT
		NetFlow* FAR_A3_B; // net ID: FAR lsb: 0  msb: 23 OUTPUT
		NetFlow* FAR_A2_B; // net ID: FAR lsb: 0  msb: 23 OUTPUT
		NetFlow* FAR_A1_B; // net ID: FAR lsb: 0  msb: 23 OUTPUT
		NetFlow* FAR_A0_B; // net ID: FAR lsb: 0  msb: 23 OUTPUT
		NetFlow* SYNBIT_A4_B; // net ID: SYNBIT lsb: 0  msb: 4 OUTPUT
		NetFlow* SYNBIT_A3_B; // net ID: SYNBIT lsb: 0  msb: 4 OUTPUT
		NetFlow* SYNBIT_A2_B; // net ID: SYNBIT lsb: 0  msb: 4 OUTPUT
		NetFlow* SYNBIT_A1_B; // net ID: SYNBIT lsb: 0  msb: 4 OUTPUT
		NetFlow* SYNBIT_A0_B; // net ID: SYNBIT lsb: 0  msb: 4 OUTPUT
		NetFlow* SYNDROME_A12_B; // net ID: SYNDROME lsb: 0  msb: 12 OUTPUT
		NetFlow* SYNDROME_A11_B; // net ID: SYNDROME lsb: 0  msb: 12 OUTPUT
		NetFlow* SYNDROME_A10_B; // net ID: SYNDROME lsb: 0  msb: 12 OUTPUT
		NetFlow* SYNDROME_A9_B; // net ID: SYNDROME lsb: 0  msb: 12 OUTPUT
		NetFlow* SYNDROME_A8_B; // net ID: SYNDROME lsb: 0  msb: 12 OUTPUT
		NetFlow* SYNDROME_A7_B; // net ID: SYNDROME lsb: 0  msb: 12 OUTPUT
		NetFlow* SYNDROME_A6_B; // net ID: SYNDROME lsb: 0  msb: 12 OUTPUT
		NetFlow* SYNDROME_A5_B; // net ID: SYNDROME lsb: 0  msb: 12 OUTPUT
		NetFlow* SYNDROME_A4_B; // net ID: SYNDROME lsb: 0  msb: 12 OUTPUT
		NetFlow* SYNDROME_A3_B; // net ID: SYNDROME lsb: 0  msb: 12 OUTPUT
		NetFlow* SYNDROME_A2_B; // net ID: SYNDROME lsb: 0  msb: 12 OUTPUT
		NetFlow* SYNDROME_A1_B; // net ID: SYNDROME lsb: 0  msb: 12 OUTPUT
		NetFlow* SYNDROME_A0_B; // net ID: SYNDROME lsb: 0  msb: 12 OUTPUT
		NetFlow* SYNDROMEVALID_A0_B; // net ID: SYNDROMEVALID lsb: 0  msb: 0 OUTPUT
		NetFlow* SYNWORD_A6_B; // net ID: SYNWORD lsb: 0  msb: 6 OUTPUT
		NetFlow* SYNWORD_A5_B; // net ID: SYNWORD lsb: 0  msb: 6 OUTPUT
		NetFlow* SYNWORD_A4_B; // net ID: SYNWORD lsb: 0  msb: 6 OUTPUT
		NetFlow* SYNWORD_A3_B; // net ID: SYNWORD lsb: 0  msb: 6 OUTPUT
		NetFlow* SYNWORD_A2_B; // net ID: SYNWORD lsb: 0  msb: 6 OUTPUT
		NetFlow* SYNWORD_A1_B; // net ID: SYNWORD lsb: 0  msb: 6 OUTPUT
		NetFlow* SYNWORD_A0_B; // net ID: SYNWORD lsb: 0  msb: 6 OUTPUT
		
		public: X_FRAME_ECC_VIRTEX6(
			const char * name,
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_string_t FARSRC, // Default: "EFAR"
			parameter_string_t FRAME_RBT_IN_FILENAME, // Default: "NONE"
			//Verilog Ports in definition order:
			NetFlow* CRCERROR_A0_B, // net ID: CRCERROR lsb: 0  msb: 0 OUTPUT
			NetFlow* ECCERROR_A0_B, // net ID: ECCERROR lsb: 0  msb: 0 OUTPUT
			NetFlow* ECCERRORSINGLE_A0_B, // net ID: ECCERRORSINGLE lsb: 0  msb: 0 OUTPUT
			NetFlow* FAR_A23_B, // net ID: FAR lsb: 0  msb: 23 OUTPUT
			NetFlow* FAR_A22_B, // net ID: FAR lsb: 0  msb: 23 OUTPUT
			NetFlow* FAR_A21_B, // net ID: FAR lsb: 0  msb: 23 OUTPUT
			NetFlow* FAR_A20_B, // net ID: FAR lsb: 0  msb: 23 OUTPUT
			NetFlow* FAR_A19_B, // net ID: FAR lsb: 0  msb: 23 OUTPUT
			NetFlow* FAR_A18_B, // net ID: FAR lsb: 0  msb: 23 OUTPUT
			NetFlow* FAR_A17_B, // net ID: FAR lsb: 0  msb: 23 OUTPUT
			NetFlow* FAR_A16_B, // net ID: FAR lsb: 0  msb: 23 OUTPUT
			NetFlow* FAR_A15_B, // net ID: FAR lsb: 0  msb: 23 OUTPUT
			NetFlow* FAR_A14_B, // net ID: FAR lsb: 0  msb: 23 OUTPUT
			NetFlow* FAR_A13_B, // net ID: FAR lsb: 0  msb: 23 OUTPUT
			NetFlow* FAR_A12_B, // net ID: FAR lsb: 0  msb: 23 OUTPUT
			NetFlow* FAR_A11_B, // net ID: FAR lsb: 0  msb: 23 OUTPUT
			NetFlow* FAR_A10_B, // net ID: FAR lsb: 0  msb: 23 OUTPUT
			NetFlow* FAR_A9_B, // net ID: FAR lsb: 0  msb: 23 OUTPUT
			NetFlow* FAR_A8_B, // net ID: FAR lsb: 0  msb: 23 OUTPUT
			NetFlow* FAR_A7_B, // net ID: FAR lsb: 0  msb: 23 OUTPUT
			NetFlow* FAR_A6_B, // net ID: FAR lsb: 0  msb: 23 OUTPUT
			NetFlow* FAR_A5_B, // net ID: FAR lsb: 0  msb: 23 OUTPUT
			NetFlow* FAR_A4_B, // net ID: FAR lsb: 0  msb: 23 OUTPUT
			NetFlow* FAR_A3_B, // net ID: FAR lsb: 0  msb: 23 OUTPUT
			NetFlow* FAR_A2_B, // net ID: FAR lsb: 0  msb: 23 OUTPUT
			NetFlow* FAR_A1_B, // net ID: FAR lsb: 0  msb: 23 OUTPUT
			NetFlow* FAR_A0_B, // net ID: FAR lsb: 0  msb: 23 OUTPUT
			NetFlow* SYNBIT_A4_B, // net ID: SYNBIT lsb: 0  msb: 4 OUTPUT
			NetFlow* SYNBIT_A3_B, // net ID: SYNBIT lsb: 0  msb: 4 OUTPUT
			NetFlow* SYNBIT_A2_B, // net ID: SYNBIT lsb: 0  msb: 4 OUTPUT
			NetFlow* SYNBIT_A1_B, // net ID: SYNBIT lsb: 0  msb: 4 OUTPUT
			NetFlow* SYNBIT_A0_B, // net ID: SYNBIT lsb: 0  msb: 4 OUTPUT
			NetFlow* SYNDROME_A12_B, // net ID: SYNDROME lsb: 0  msb: 12 OUTPUT
			NetFlow* SYNDROME_A11_B, // net ID: SYNDROME lsb: 0  msb: 12 OUTPUT
			NetFlow* SYNDROME_A10_B, // net ID: SYNDROME lsb: 0  msb: 12 OUTPUT
			NetFlow* SYNDROME_A9_B, // net ID: SYNDROME lsb: 0  msb: 12 OUTPUT
			NetFlow* SYNDROME_A8_B, // net ID: SYNDROME lsb: 0  msb: 12 OUTPUT
			NetFlow* SYNDROME_A7_B, // net ID: SYNDROME lsb: 0  msb: 12 OUTPUT
			NetFlow* SYNDROME_A6_B, // net ID: SYNDROME lsb: 0  msb: 12 OUTPUT
			NetFlow* SYNDROME_A5_B, // net ID: SYNDROME lsb: 0  msb: 12 OUTPUT
			NetFlow* SYNDROME_A4_B, // net ID: SYNDROME lsb: 0  msb: 12 OUTPUT
			NetFlow* SYNDROME_A3_B, // net ID: SYNDROME lsb: 0  msb: 12 OUTPUT
			NetFlow* SYNDROME_A2_B, // net ID: SYNDROME lsb: 0  msb: 12 OUTPUT
			NetFlow* SYNDROME_A1_B, // net ID: SYNDROME lsb: 0  msb: 12 OUTPUT
			NetFlow* SYNDROME_A0_B, // net ID: SYNDROME lsb: 0  msb: 12 OUTPUT
			NetFlow* SYNDROMEVALID_A0_B, // net ID: SYNDROMEVALID lsb: 0  msb: 0 OUTPUT
			NetFlow* SYNWORD_A6_B, // net ID: SYNWORD lsb: 0  msb: 6 OUTPUT
			NetFlow* SYNWORD_A5_B, // net ID: SYNWORD lsb: 0  msb: 6 OUTPUT
			NetFlow* SYNWORD_A4_B, // net ID: SYNWORD lsb: 0  msb: 6 OUTPUT
			NetFlow* SYNWORD_A3_B, // net ID: SYNWORD lsb: 0  msb: 6 OUTPUT
			NetFlow* SYNWORD_A2_B, // net ID: SYNWORD lsb: 0  msb: 6 OUTPUT
			NetFlow* SYNWORD_A1_B, // net ID: SYNWORD lsb: 0  msb: 6 OUTPUT
			NetFlow* SYNWORD_A0_B // net ID: SYNWORD lsb: 0  msb: 6 OUTPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->LOC = LOC; // Default: "UNPLACED"
			this->FARSRC = FARSRC; // Default: "EFAR"
			this->FRAME_RBT_IN_FILENAME = FRAME_RBT_IN_FILENAME; // Default: "NONE"
			//Verilog Ports in definition order:
			this->CRCERROR_A0_B = CRCERROR_A0_B; // net ID: CRCERROR lsb: 0  msb: 0 OUTPUT
			this->ECCERROR_A0_B = ECCERROR_A0_B; // net ID: ECCERROR lsb: 0  msb: 0 OUTPUT
			this->ECCERRORSINGLE_A0_B = ECCERRORSINGLE_A0_B; // net ID: ECCERRORSINGLE lsb: 0  msb: 0 OUTPUT
			this->FAR_A23_B = FAR_A23_B; // net ID: FAR lsb: 0  msb: 23 OUTPUT
			this->FAR_A22_B = FAR_A22_B; // net ID: FAR lsb: 0  msb: 23 OUTPUT
			this->FAR_A21_B = FAR_A21_B; // net ID: FAR lsb: 0  msb: 23 OUTPUT
			this->FAR_A20_B = FAR_A20_B; // net ID: FAR lsb: 0  msb: 23 OUTPUT
			this->FAR_A19_B = FAR_A19_B; // net ID: FAR lsb: 0  msb: 23 OUTPUT
			this->FAR_A18_B = FAR_A18_B; // net ID: FAR lsb: 0  msb: 23 OUTPUT
			this->FAR_A17_B = FAR_A17_B; // net ID: FAR lsb: 0  msb: 23 OUTPUT
			this->FAR_A16_B = FAR_A16_B; // net ID: FAR lsb: 0  msb: 23 OUTPUT
			this->FAR_A15_B = FAR_A15_B; // net ID: FAR lsb: 0  msb: 23 OUTPUT
			this->FAR_A14_B = FAR_A14_B; // net ID: FAR lsb: 0  msb: 23 OUTPUT
			this->FAR_A13_B = FAR_A13_B; // net ID: FAR lsb: 0  msb: 23 OUTPUT
			this->FAR_A12_B = FAR_A12_B; // net ID: FAR lsb: 0  msb: 23 OUTPUT
			this->FAR_A11_B = FAR_A11_B; // net ID: FAR lsb: 0  msb: 23 OUTPUT
			this->FAR_A10_B = FAR_A10_B; // net ID: FAR lsb: 0  msb: 23 OUTPUT
			this->FAR_A9_B = FAR_A9_B; // net ID: FAR lsb: 0  msb: 23 OUTPUT
			this->FAR_A8_B = FAR_A8_B; // net ID: FAR lsb: 0  msb: 23 OUTPUT
			this->FAR_A7_B = FAR_A7_B; // net ID: FAR lsb: 0  msb: 23 OUTPUT
			this->FAR_A6_B = FAR_A6_B; // net ID: FAR lsb: 0  msb: 23 OUTPUT
			this->FAR_A5_B = FAR_A5_B; // net ID: FAR lsb: 0  msb: 23 OUTPUT
			this->FAR_A4_B = FAR_A4_B; // net ID: FAR lsb: 0  msb: 23 OUTPUT
			this->FAR_A3_B = FAR_A3_B; // net ID: FAR lsb: 0  msb: 23 OUTPUT
			this->FAR_A2_B = FAR_A2_B; // net ID: FAR lsb: 0  msb: 23 OUTPUT
			this->FAR_A1_B = FAR_A1_B; // net ID: FAR lsb: 0  msb: 23 OUTPUT
			this->FAR_A0_B = FAR_A0_B; // net ID: FAR lsb: 0  msb: 23 OUTPUT
			this->SYNBIT_A4_B = SYNBIT_A4_B; // net ID: SYNBIT lsb: 0  msb: 4 OUTPUT
			this->SYNBIT_A3_B = SYNBIT_A3_B; // net ID: SYNBIT lsb: 0  msb: 4 OUTPUT
			this->SYNBIT_A2_B = SYNBIT_A2_B; // net ID: SYNBIT lsb: 0  msb: 4 OUTPUT
			this->SYNBIT_A1_B = SYNBIT_A1_B; // net ID: SYNBIT lsb: 0  msb: 4 OUTPUT
			this->SYNBIT_A0_B = SYNBIT_A0_B; // net ID: SYNBIT lsb: 0  msb: 4 OUTPUT
			this->SYNDROME_A12_B = SYNDROME_A12_B; // net ID: SYNDROME lsb: 0  msb: 12 OUTPUT
			this->SYNDROME_A11_B = SYNDROME_A11_B; // net ID: SYNDROME lsb: 0  msb: 12 OUTPUT
			this->SYNDROME_A10_B = SYNDROME_A10_B; // net ID: SYNDROME lsb: 0  msb: 12 OUTPUT
			this->SYNDROME_A9_B = SYNDROME_A9_B; // net ID: SYNDROME lsb: 0  msb: 12 OUTPUT
			this->SYNDROME_A8_B = SYNDROME_A8_B; // net ID: SYNDROME lsb: 0  msb: 12 OUTPUT
			this->SYNDROME_A7_B = SYNDROME_A7_B; // net ID: SYNDROME lsb: 0  msb: 12 OUTPUT
			this->SYNDROME_A6_B = SYNDROME_A6_B; // net ID: SYNDROME lsb: 0  msb: 12 OUTPUT
			this->SYNDROME_A5_B = SYNDROME_A5_B; // net ID: SYNDROME lsb: 0  msb: 12 OUTPUT
			this->SYNDROME_A4_B = SYNDROME_A4_B; // net ID: SYNDROME lsb: 0  msb: 12 OUTPUT
			this->SYNDROME_A3_B = SYNDROME_A3_B; // net ID: SYNDROME lsb: 0  msb: 12 OUTPUT
			this->SYNDROME_A2_B = SYNDROME_A2_B; // net ID: SYNDROME lsb: 0  msb: 12 OUTPUT
			this->SYNDROME_A1_B = SYNDROME_A1_B; // net ID: SYNDROME lsb: 0  msb: 12 OUTPUT
			this->SYNDROME_A0_B = SYNDROME_A0_B; // net ID: SYNDROME lsb: 0  msb: 12 OUTPUT
			this->SYNDROMEVALID_A0_B = SYNDROMEVALID_A0_B; // net ID: SYNDROMEVALID lsb: 0  msb: 0 OUTPUT
			this->SYNWORD_A6_B = SYNWORD_A6_B; // net ID: SYNWORD lsb: 0  msb: 6 OUTPUT
			this->SYNWORD_A5_B = SYNWORD_A5_B; // net ID: SYNWORD lsb: 0  msb: 6 OUTPUT
			this->SYNWORD_A4_B = SYNWORD_A4_B; // net ID: SYNWORD lsb: 0  msb: 6 OUTPUT
			this->SYNWORD_A3_B = SYNWORD_A3_B; // net ID: SYNWORD lsb: 0  msb: 6 OUTPUT
			this->SYNWORD_A2_B = SYNWORD_A2_B; // net ID: SYNWORD lsb: 0  msb: 6 OUTPUT
			this->SYNWORD_A1_B = SYNWORD_A1_B; // net ID: SYNWORD lsb: 0  msb: 6 OUTPUT
			this->SYNWORD_A0_B = SYNWORD_A0_B; // net ID: SYNWORD lsb: 0  msb: 6 OUTPUT
			
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
#endif // X_FRAME_ECC_VIRTEX6_H
