/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_FRAME_ECCE2{

		//Verilog Parameters:
		parameter_string_t LOC;
		parameter_string_t FARSRC;
		parameter_string_t FRAME_RBT_IN_FILENAME;
		//Verilog Ports in definition order:
		NetFlow* CRCERROR; // OUTPUT
		NetFlow* ECCERROR; // OUTPUT
		NetFlow* ECCERRORSINGLE; // OUTPUT
		NetFlow* FAR; // OUTPUT
		NetFlow* SYNBIT; // OUTPUT
		NetFlow* SYNDROME; // OUTPUT
		NetFlow* SYNDROMEVALID; // OUTPUT
		NetFlow* SYNWORD; // OUTPUT
		
	
		X_FRAME_ECCE2(
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_string_t FARSRC, // Default: "EFAR"
			parameter_string_t FRAME_RBT_IN_FILENAME, // Default: "NONE"
			//Verilog Ports in definition order:
			NetFlow* CRCERROR, // OUTPUT
			NetFlow* ECCERROR, // OUTPUT
			NetFlow* ECCERRORSINGLE, // OUTPUT
			NetFlow* FAR, // OUTPUT
			NetFlow* SYNBIT, // OUTPUT
			NetFlow* SYNDROME, // OUTPUT
			NetFlow* SYNDROMEVALID, // OUTPUT
			NetFlow* SYNWORD // OUTPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->LOC = LOC; // Default: "UNPLACED"
			this->FARSRC = FARSRC; // Default: "EFAR"
			this->FRAME_RBT_IN_FILENAME = FRAME_RBT_IN_FILENAME; // Default: "NONE"
			//Verilog Ports in definition order:
			this->CRCERROR = CRCERROR; // OUTPUT
			this->ECCERROR = ECCERROR; // OUTPUT
			this->ECCERRORSINGLE = ECCERRORSINGLE; // OUTPUT
			this->FAR = FAR; // OUTPUT
			this->SYNBIT = SYNBIT; // OUTPUT
			this->SYNDROME = SYNDROME; // OUTPUT
			this->SYNDROMEVALID = SYNDROMEVALID; // OUTPUT
			this->SYNWORD = SYNWORD; // OUTPUT
		
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
