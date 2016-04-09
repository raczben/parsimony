/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_RAM64M{

		//Verilog Parameters:
		parameter_int_t INIT_A;
		parameter_int_t INIT_B;
		parameter_int_t INIT_C;
		parameter_int_t INIT_D;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* DOA; // OUTPUT
		NetFlow* DOB; // OUTPUT
		NetFlow* DOC; // OUTPUT
		NetFlow* DOD; // OUTPUT
		NetFlow* ADDRA; // INPUT
		NetFlow* ADDRB; // INPUT
		NetFlow* ADDRC; // INPUT
		NetFlow* ADDRD; // INPUT
		NetFlow* DIA; // INPUT
		NetFlow* DIB; // INPUT
		NetFlow* DIC; // INPUT
		NetFlow* DID; // INPUT
		NetFlow* WCLK; // INPUT
		NetFlow* WE; // INPUT
		
	
		X_RAM64M(
			//Verilog Parameters:
			parameter_int_t INIT_A, // Default: 64'h0000000000000000
			parameter_int_t INIT_B, // Default: 64'h0000000000000000
			parameter_int_t INIT_C, // Default: 64'h0000000000000000
			parameter_int_t INIT_D, // Default: 64'h0000000000000000
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* DOA, // OUTPUT
			NetFlow* DOB, // OUTPUT
			NetFlow* DOC, // OUTPUT
			NetFlow* DOD, // OUTPUT
			NetFlow* ADDRA, // INPUT
			NetFlow* ADDRB, // INPUT
			NetFlow* ADDRC, // INPUT
			NetFlow* ADDRD, // INPUT
			NetFlow* DIA, // INPUT
			NetFlow* DIB, // INPUT
			NetFlow* DIC, // INPUT
			NetFlow* DID, // INPUT
			NetFlow* WCLK, // INPUT
			NetFlow* WE // INPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->INIT_A = INIT_A; // Default: 64'h0000000000000000
			this->INIT_B = INIT_B; // Default: 64'h0000000000000000
			this->INIT_C = INIT_C; // Default: 64'h0000000000000000
			this->INIT_D = INIT_D; // Default: 64'h0000000000000000
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->DOA = DOA; // OUTPUT
			this->DOB = DOB; // OUTPUT
			this->DOC = DOC; // OUTPUT
			this->DOD = DOD; // OUTPUT
			this->ADDRA = ADDRA; // INPUT
			this->ADDRB = ADDRB; // INPUT
			this->ADDRC = ADDRC; // INPUT
			this->ADDRD = ADDRD; // INPUT
			this->DIA = DIA; // INPUT
			this->DIB = DIB; // INPUT
			this->DIC = DIC; // INPUT
			this->DID = DID; // INPUT
			this->WCLK = WCLK; // INPUT
			this->WE = WE; // INPUT
		
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
