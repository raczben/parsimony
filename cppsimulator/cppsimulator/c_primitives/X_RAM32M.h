/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_RAM32M: public Primitive{

		//Verilog Parameters:
		parameter_string_t INIT_A;
		parameter_string_t INIT_B;
		parameter_string_t INIT_C;
		parameter_string_t INIT_D;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* DOA; // net ID: DOA lsb: 0  msb: 0 OUTPUT
		NetFlow* DOB; // net ID: DOB lsb: 0  msb: 0 OUTPUT
		NetFlow* DOC; // net ID: DOC lsb: 0  msb: 0 OUTPUT
		NetFlow* DOD; // net ID: DOD lsb: 0  msb: 0 OUTPUT
		NetFlow* ADDRA; // net ID: ADDRA lsb: 0  msb: 4 INPUT
		NetFlow* ADDRB; // net ID: ADDRB lsb: 0  msb: 4 INPUT
		NetFlow* ADDRC; // net ID: ADDRC lsb: 0  msb: 4 INPUT
		NetFlow* ADDRD; // net ID: ADDRD lsb: 0  msb: 4 INPUT
		NetFlow* DIA; // net ID: DIA lsb: 0  msb: 1 INPUT
		NetFlow* DIB; // net ID: DIB lsb: 0  msb: 1 INPUT
		NetFlow* DIC; // net ID: DIC lsb: 0  msb: 1 INPUT
		NetFlow* DID; // net ID: DID lsb: 0  msb: 1 INPUT
		NetFlow* WCLK; // net ID: WCLK lsb: 0  msb: 0 INPUT
		NetFlow* WE; // net ID: WE lsb: 0  msb: 0 INPUT
		
		X_RAM32M(
			const char * name,
			//Verilog Parameters:
			parameter_string_t INIT_A, // Default: 64'h0000000000000000
			parameter_string_t INIT_B, // Default: 64'h0000000000000000
			parameter_string_t INIT_C, // Default: 64'h0000000000000000
			parameter_string_t INIT_D, // Default: 64'h0000000000000000
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* DOA, // net ID: DOA lsb: 0  msb: 0 OUTPUT
			NetFlow* DOB, // net ID: DOB lsb: 0  msb: 0 OUTPUT
			NetFlow* DOC, // net ID: DOC lsb: 0  msb: 0 OUTPUT
			NetFlow* DOD, // net ID: DOD lsb: 0  msb: 0 OUTPUT
			NetFlow* ADDRA, // net ID: ADDRA lsb: 0  msb: 4 INPUT
			NetFlow* ADDRB, // net ID: ADDRB lsb: 0  msb: 4 INPUT
			NetFlow* ADDRC, // net ID: ADDRC lsb: 0  msb: 4 INPUT
			NetFlow* ADDRD, // net ID: ADDRD lsb: 0  msb: 4 INPUT
			NetFlow* DIA, // net ID: DIA lsb: 0  msb: 1 INPUT
			NetFlow* DIB, // net ID: DIB lsb: 0  msb: 1 INPUT
			NetFlow* DIC, // net ID: DIC lsb: 0  msb: 1 INPUT
			NetFlow* DID, // net ID: DID lsb: 0  msb: 1 INPUT
			NetFlow* WCLK, // net ID: WCLK lsb: 0  msb: 0 INPUT
			NetFlow* WE // net ID: WE lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->INIT_A = INIT_A; // Default: 64'h0000000000000000
			this->INIT_B = INIT_B; // Default: 64'h0000000000000000
			this->INIT_C = INIT_C; // Default: 64'h0000000000000000
			this->INIT_D = INIT_D; // Default: 64'h0000000000000000
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->DOA = DOA; // net ID: DOA lsb: 0  msb: 0 OUTPUT
			this->DOB = DOB; // net ID: DOB lsb: 0  msb: 0 OUTPUT
			this->DOC = DOC; // net ID: DOC lsb: 0  msb: 0 OUTPUT
			this->DOD = DOD; // net ID: DOD lsb: 0  msb: 0 OUTPUT
			this->ADDRA = ADDRA; // net ID: ADDRA lsb: 0  msb: 4 INPUT
			this->ADDRB = ADDRB; // net ID: ADDRB lsb: 0  msb: 4 INPUT
			this->ADDRC = ADDRC; // net ID: ADDRC lsb: 0  msb: 4 INPUT
			this->ADDRD = ADDRD; // net ID: ADDRD lsb: 0  msb: 4 INPUT
			this->DIA = DIA; // net ID: DIA lsb: 0  msb: 1 INPUT
			this->DIB = DIB; // net ID: DIB lsb: 0  msb: 1 INPUT
			this->DIC = DIC; // net ID: DIC lsb: 0  msb: 1 INPUT
			this->DID = DID; // net ID: DID lsb: 0  msb: 1 INPUT
			this->WCLK = WCLK; // net ID: WCLK lsb: 0  msb: 0 INPUT
			this->WE = WE; // net ID: WE lsb: 0  msb: 0 INPUT
			
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
