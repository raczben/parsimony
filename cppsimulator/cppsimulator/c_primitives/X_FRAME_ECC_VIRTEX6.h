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
		NetFlow* FAR_A0_B; // net ID: FAR lsb: 0  msb: 0 OUTPUT
		NetFlow* SYNBIT_A0_B; // net ID: SYNBIT lsb: 0  msb: 0 OUTPUT
		NetFlow* SYNDROME_A0_B; // net ID: SYNDROME lsb: 0  msb: 0 OUTPUT
		NetFlow* SYNDROMEVALID_A0_B; // net ID: SYNDROMEVALID lsb: 0  msb: 0 OUTPUT
		NetFlow* SYNWORD_A0_B; // net ID: SYNWORD lsb: 0  msb: 0 OUTPUT
		
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
			NetFlow* FAR_A0_B, // net ID: FAR lsb: 0  msb: 0 OUTPUT
			NetFlow* SYNBIT_A0_B, // net ID: SYNBIT lsb: 0  msb: 0 OUTPUT
			NetFlow* SYNDROME_A0_B, // net ID: SYNDROME lsb: 0  msb: 0 OUTPUT
			NetFlow* SYNDROMEVALID_A0_B, // net ID: SYNDROMEVALID lsb: 0  msb: 0 OUTPUT
			NetFlow* SYNWORD_A0_B // net ID: SYNWORD lsb: 0  msb: 0 OUTPUT
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
			this->FAR_A0_B = FAR_A0_B; // net ID: FAR lsb: 0  msb: 0 OUTPUT
			this->SYNBIT_A0_B = SYNBIT_A0_B; // net ID: SYNBIT lsb: 0  msb: 0 OUTPUT
			this->SYNDROME_A0_B = SYNDROME_A0_B; // net ID: SYNDROME lsb: 0  msb: 0 OUTPUT
			this->SYNDROMEVALID_A0_B = SYNDROMEVALID_A0_B; // net ID: SYNDROMEVALID lsb: 0  msb: 0 OUTPUT
			this->SYNWORD_A0_B = SYNWORD_A0_B; // net ID: SYNWORD lsb: 0  msb: 0 OUTPUT
			
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
#endif // X_FRAME_ECC_VIRTEX6_H
