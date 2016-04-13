/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_FRAME_ECCE2: public Primitive{

		//Verilog Parameters:
		parameter_string_t LOC;
		parameter_string_t FARSRC;
		parameter_string_t FRAME_RBT_IN_FILENAME;
		//Verilog Ports in definition order:
		NetFlow* CRCERROR; // net ID: CRCERROR lsb: 0  msb: 0 OUTPUT
		NetFlow* ECCERROR; // net ID: ECCERROR lsb: 0  msb: 0 OUTPUT
		NetFlow* ECCERRORSINGLE; // net ID: ECCERRORSINGLE lsb: 0  msb: 0 OUTPUT
		NetFlow* FAR; // net ID: FAR lsb: 0  msb: 0 OUTPUT
		NetFlow* SYNBIT; // net ID: SYNBIT lsb: 0  msb: 0 OUTPUT
		NetFlow* SYNDROME; // net ID: SYNDROME lsb: 0  msb: 0 OUTPUT
		NetFlow* SYNDROMEVALID; // net ID: SYNDROMEVALID lsb: 0  msb: 0 OUTPUT
		NetFlow* SYNWORD; // net ID: SYNWORD lsb: 0  msb: 0 OUTPUT
		
		X_FRAME_ECCE2(
			const char * name,
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_string_t FARSRC, // Default: "EFAR"
			parameter_string_t FRAME_RBT_IN_FILENAME, // Default: "NONE"
			//Verilog Ports in definition order:
			NetFlow* CRCERROR, // net ID: CRCERROR lsb: 0  msb: 0 OUTPUT
			NetFlow* ECCERROR, // net ID: ECCERROR lsb: 0  msb: 0 OUTPUT
			NetFlow* ECCERRORSINGLE, // net ID: ECCERRORSINGLE lsb: 0  msb: 0 OUTPUT
			NetFlow* FAR, // net ID: FAR lsb: 0  msb: 0 OUTPUT
			NetFlow* SYNBIT, // net ID: SYNBIT lsb: 0  msb: 0 OUTPUT
			NetFlow* SYNDROME, // net ID: SYNDROME lsb: 0  msb: 0 OUTPUT
			NetFlow* SYNDROMEVALID, // net ID: SYNDROMEVALID lsb: 0  msb: 0 OUTPUT
			NetFlow* SYNWORD // net ID: SYNWORD lsb: 0  msb: 0 OUTPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->LOC = LOC; // Default: "UNPLACED"
			this->FARSRC = FARSRC; // Default: "EFAR"
			this->FRAME_RBT_IN_FILENAME = FRAME_RBT_IN_FILENAME; // Default: "NONE"
			//Verilog Ports in definition order:
			this->CRCERROR = CRCERROR; // net ID: CRCERROR lsb: 0  msb: 0 OUTPUT
			this->ECCERROR = ECCERROR; // net ID: ECCERROR lsb: 0  msb: 0 OUTPUT
			this->ECCERRORSINGLE = ECCERRORSINGLE; // net ID: ECCERRORSINGLE lsb: 0  msb: 0 OUTPUT
			this->FAR = FAR; // net ID: FAR lsb: 0  msb: 0 OUTPUT
			this->SYNBIT = SYNBIT; // net ID: SYNBIT lsb: 0  msb: 0 OUTPUT
			this->SYNDROME = SYNDROME; // net ID: SYNDROME lsb: 0  msb: 0 OUTPUT
			this->SYNDROMEVALID = SYNDROMEVALID; // net ID: SYNDROMEVALID lsb: 0  msb: 0 OUTPUT
			this->SYNWORD = SYNWORD; // net ID: SYNWORD lsb: 0  msb: 0 OUTPUT
			
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
