/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_RAM32M_H
#define X_RAM32M_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_RAM32M: public Primitive{

		//Verilog Parameters:
		parameter_int_t INIT_A;
		parameter_int_t INIT_B;
		parameter_int_t INIT_C;
		parameter_int_t INIT_D;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* DOA_A1_B; // net ID: DOA lsb: 0  msb: 1 OUTPUT
		NetFlow* DOA_A0_B; // net ID: DOA lsb: 0  msb: 1 OUTPUT
		NetFlow* DOB_A1_B; // net ID: DOB lsb: 0  msb: 1 OUTPUT
		NetFlow* DOB_A0_B; // net ID: DOB lsb: 0  msb: 1 OUTPUT
		NetFlow* DOC_A1_B; // net ID: DOC lsb: 0  msb: 1 OUTPUT
		NetFlow* DOC_A0_B; // net ID: DOC lsb: 0  msb: 1 OUTPUT
		NetFlow* DOD_A1_B; // net ID: DOD lsb: 0  msb: 1 OUTPUT
		NetFlow* DOD_A0_B; // net ID: DOD lsb: 0  msb: 1 OUTPUT
		NetFlow* ADDRA_A4_B; // net ID: ADDRA lsb: 0  msb: 4 INPUT
		NetFlow* ADDRA_A3_B; // net ID: ADDRA lsb: 0  msb: 4 INPUT
		NetFlow* ADDRA_A2_B; // net ID: ADDRA lsb: 0  msb: 4 INPUT
		NetFlow* ADDRA_A1_B; // net ID: ADDRA lsb: 0  msb: 4 INPUT
		NetFlow* ADDRA_A0_B; // net ID: ADDRA lsb: 0  msb: 4 INPUT
		NetFlow* ADDRB_A4_B; // net ID: ADDRB lsb: 0  msb: 4 INPUT
		NetFlow* ADDRB_A3_B; // net ID: ADDRB lsb: 0  msb: 4 INPUT
		NetFlow* ADDRB_A2_B; // net ID: ADDRB lsb: 0  msb: 4 INPUT
		NetFlow* ADDRB_A1_B; // net ID: ADDRB lsb: 0  msb: 4 INPUT
		NetFlow* ADDRB_A0_B; // net ID: ADDRB lsb: 0  msb: 4 INPUT
		NetFlow* ADDRC_A4_B; // net ID: ADDRC lsb: 0  msb: 4 INPUT
		NetFlow* ADDRC_A3_B; // net ID: ADDRC lsb: 0  msb: 4 INPUT
		NetFlow* ADDRC_A2_B; // net ID: ADDRC lsb: 0  msb: 4 INPUT
		NetFlow* ADDRC_A1_B; // net ID: ADDRC lsb: 0  msb: 4 INPUT
		NetFlow* ADDRC_A0_B; // net ID: ADDRC lsb: 0  msb: 4 INPUT
		NetFlow* ADDRD_A4_B; // net ID: ADDRD lsb: 0  msb: 4 INPUT
		NetFlow* ADDRD_A3_B; // net ID: ADDRD lsb: 0  msb: 4 INPUT
		NetFlow* ADDRD_A2_B; // net ID: ADDRD lsb: 0  msb: 4 INPUT
		NetFlow* ADDRD_A1_B; // net ID: ADDRD lsb: 0  msb: 4 INPUT
		NetFlow* ADDRD_A0_B; // net ID: ADDRD lsb: 0  msb: 4 INPUT
		NetFlow* DIA_A1_B; // net ID: DIA lsb: 0  msb: 1 INPUT
		NetFlow* DIA_A0_B; // net ID: DIA lsb: 0  msb: 1 INPUT
		NetFlow* DIB_A1_B; // net ID: DIB lsb: 0  msb: 1 INPUT
		NetFlow* DIB_A0_B; // net ID: DIB lsb: 0  msb: 1 INPUT
		NetFlow* DIC_A1_B; // net ID: DIC lsb: 0  msb: 1 INPUT
		NetFlow* DIC_A0_B; // net ID: DIC lsb: 0  msb: 1 INPUT
		NetFlow* DID_A1_B; // net ID: DID lsb: 0  msb: 1 INPUT
		NetFlow* DID_A0_B; // net ID: DID lsb: 0  msb: 1 INPUT
		NetFlow* WCLK_A0_B; // net ID: WCLK lsb: 0  msb: 0 INPUT
		NetFlow* WE_A0_B; // net ID: WE lsb: 0  msb: 0 INPUT
		
		public: X_RAM32M(
			const char * name,
			//Verilog Parameters:
			parameter_int_t INIT_A, // Default: 64'h0000000000000000
			parameter_int_t INIT_B, // Default: 64'h0000000000000000
			parameter_int_t INIT_C, // Default: 64'h0000000000000000
			parameter_int_t INIT_D, // Default: 64'h0000000000000000
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* DOA_A1_B, // net ID: DOA lsb: 0  msb: 1 OUTPUT
			NetFlow* DOA_A0_B, // net ID: DOA lsb: 0  msb: 1 OUTPUT
			NetFlow* DOB_A1_B, // net ID: DOB lsb: 0  msb: 1 OUTPUT
			NetFlow* DOB_A0_B, // net ID: DOB lsb: 0  msb: 1 OUTPUT
			NetFlow* DOC_A1_B, // net ID: DOC lsb: 0  msb: 1 OUTPUT
			NetFlow* DOC_A0_B, // net ID: DOC lsb: 0  msb: 1 OUTPUT
			NetFlow* DOD_A1_B, // net ID: DOD lsb: 0  msb: 1 OUTPUT
			NetFlow* DOD_A0_B, // net ID: DOD lsb: 0  msb: 1 OUTPUT
			NetFlow* ADDRA_A4_B, // net ID: ADDRA lsb: 0  msb: 4 INPUT
			NetFlow* ADDRA_A3_B, // net ID: ADDRA lsb: 0  msb: 4 INPUT
			NetFlow* ADDRA_A2_B, // net ID: ADDRA lsb: 0  msb: 4 INPUT
			NetFlow* ADDRA_A1_B, // net ID: ADDRA lsb: 0  msb: 4 INPUT
			NetFlow* ADDRA_A0_B, // net ID: ADDRA lsb: 0  msb: 4 INPUT
			NetFlow* ADDRB_A4_B, // net ID: ADDRB lsb: 0  msb: 4 INPUT
			NetFlow* ADDRB_A3_B, // net ID: ADDRB lsb: 0  msb: 4 INPUT
			NetFlow* ADDRB_A2_B, // net ID: ADDRB lsb: 0  msb: 4 INPUT
			NetFlow* ADDRB_A1_B, // net ID: ADDRB lsb: 0  msb: 4 INPUT
			NetFlow* ADDRB_A0_B, // net ID: ADDRB lsb: 0  msb: 4 INPUT
			NetFlow* ADDRC_A4_B, // net ID: ADDRC lsb: 0  msb: 4 INPUT
			NetFlow* ADDRC_A3_B, // net ID: ADDRC lsb: 0  msb: 4 INPUT
			NetFlow* ADDRC_A2_B, // net ID: ADDRC lsb: 0  msb: 4 INPUT
			NetFlow* ADDRC_A1_B, // net ID: ADDRC lsb: 0  msb: 4 INPUT
			NetFlow* ADDRC_A0_B, // net ID: ADDRC lsb: 0  msb: 4 INPUT
			NetFlow* ADDRD_A4_B, // net ID: ADDRD lsb: 0  msb: 4 INPUT
			NetFlow* ADDRD_A3_B, // net ID: ADDRD lsb: 0  msb: 4 INPUT
			NetFlow* ADDRD_A2_B, // net ID: ADDRD lsb: 0  msb: 4 INPUT
			NetFlow* ADDRD_A1_B, // net ID: ADDRD lsb: 0  msb: 4 INPUT
			NetFlow* ADDRD_A0_B, // net ID: ADDRD lsb: 0  msb: 4 INPUT
			NetFlow* DIA_A1_B, // net ID: DIA lsb: 0  msb: 1 INPUT
			NetFlow* DIA_A0_B, // net ID: DIA lsb: 0  msb: 1 INPUT
			NetFlow* DIB_A1_B, // net ID: DIB lsb: 0  msb: 1 INPUT
			NetFlow* DIB_A0_B, // net ID: DIB lsb: 0  msb: 1 INPUT
			NetFlow* DIC_A1_B, // net ID: DIC lsb: 0  msb: 1 INPUT
			NetFlow* DIC_A0_B, // net ID: DIC lsb: 0  msb: 1 INPUT
			NetFlow* DID_A1_B, // net ID: DID lsb: 0  msb: 1 INPUT
			NetFlow* DID_A0_B, // net ID: DID lsb: 0  msb: 1 INPUT
			NetFlow* WCLK_A0_B, // net ID: WCLK lsb: 0  msb: 0 INPUT
			NetFlow* WE_A0_B // net ID: WE lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->INIT_A = INIT_A; // Default: 64'h0000000000000000
			this->INIT_B = INIT_B; // Default: 64'h0000000000000000
			this->INIT_C = INIT_C; // Default: 64'h0000000000000000
			this->INIT_D = INIT_D; // Default: 64'h0000000000000000
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->DOA_A1_B = DOA_A1_B; // net ID: DOA lsb: 0  msb: 1 OUTPUT
			this->DOA_A0_B = DOA_A0_B; // net ID: DOA lsb: 0  msb: 1 OUTPUT
			this->DOB_A1_B = DOB_A1_B; // net ID: DOB lsb: 0  msb: 1 OUTPUT
			this->DOB_A0_B = DOB_A0_B; // net ID: DOB lsb: 0  msb: 1 OUTPUT
			this->DOC_A1_B = DOC_A1_B; // net ID: DOC lsb: 0  msb: 1 OUTPUT
			this->DOC_A0_B = DOC_A0_B; // net ID: DOC lsb: 0  msb: 1 OUTPUT
			this->DOD_A1_B = DOD_A1_B; // net ID: DOD lsb: 0  msb: 1 OUTPUT
			this->DOD_A0_B = DOD_A0_B; // net ID: DOD lsb: 0  msb: 1 OUTPUT
			this->ADDRA_A4_B = ADDRA_A4_B; // net ID: ADDRA lsb: 0  msb: 4 INPUT
			this->ADDRA_A3_B = ADDRA_A3_B; // net ID: ADDRA lsb: 0  msb: 4 INPUT
			this->ADDRA_A2_B = ADDRA_A2_B; // net ID: ADDRA lsb: 0  msb: 4 INPUT
			this->ADDRA_A1_B = ADDRA_A1_B; // net ID: ADDRA lsb: 0  msb: 4 INPUT
			this->ADDRA_A0_B = ADDRA_A0_B; // net ID: ADDRA lsb: 0  msb: 4 INPUT
			this->ADDRB_A4_B = ADDRB_A4_B; // net ID: ADDRB lsb: 0  msb: 4 INPUT
			this->ADDRB_A3_B = ADDRB_A3_B; // net ID: ADDRB lsb: 0  msb: 4 INPUT
			this->ADDRB_A2_B = ADDRB_A2_B; // net ID: ADDRB lsb: 0  msb: 4 INPUT
			this->ADDRB_A1_B = ADDRB_A1_B; // net ID: ADDRB lsb: 0  msb: 4 INPUT
			this->ADDRB_A0_B = ADDRB_A0_B; // net ID: ADDRB lsb: 0  msb: 4 INPUT
			this->ADDRC_A4_B = ADDRC_A4_B; // net ID: ADDRC lsb: 0  msb: 4 INPUT
			this->ADDRC_A3_B = ADDRC_A3_B; // net ID: ADDRC lsb: 0  msb: 4 INPUT
			this->ADDRC_A2_B = ADDRC_A2_B; // net ID: ADDRC lsb: 0  msb: 4 INPUT
			this->ADDRC_A1_B = ADDRC_A1_B; // net ID: ADDRC lsb: 0  msb: 4 INPUT
			this->ADDRC_A0_B = ADDRC_A0_B; // net ID: ADDRC lsb: 0  msb: 4 INPUT
			this->ADDRD_A4_B = ADDRD_A4_B; // net ID: ADDRD lsb: 0  msb: 4 INPUT
			this->ADDRD_A3_B = ADDRD_A3_B; // net ID: ADDRD lsb: 0  msb: 4 INPUT
			this->ADDRD_A2_B = ADDRD_A2_B; // net ID: ADDRD lsb: 0  msb: 4 INPUT
			this->ADDRD_A1_B = ADDRD_A1_B; // net ID: ADDRD lsb: 0  msb: 4 INPUT
			this->ADDRD_A0_B = ADDRD_A0_B; // net ID: ADDRD lsb: 0  msb: 4 INPUT
			this->DIA_A1_B = DIA_A1_B; // net ID: DIA lsb: 0  msb: 1 INPUT
			this->DIA_A0_B = DIA_A0_B; // net ID: DIA lsb: 0  msb: 1 INPUT
			this->DIB_A1_B = DIB_A1_B; // net ID: DIB lsb: 0  msb: 1 INPUT
			this->DIB_A0_B = DIB_A0_B; // net ID: DIB lsb: 0  msb: 1 INPUT
			this->DIC_A1_B = DIC_A1_B; // net ID: DIC lsb: 0  msb: 1 INPUT
			this->DIC_A0_B = DIC_A0_B; // net ID: DIC lsb: 0  msb: 1 INPUT
			this->DID_A1_B = DID_A1_B; // net ID: DID lsb: 0  msb: 1 INPUT
			this->DID_A0_B = DID_A0_B; // net ID: DID lsb: 0  msb: 1 INPUT
			this->WCLK_A0_B = WCLK_A0_B; // net ID: WCLK lsb: 0  msb: 0 INPUT
			this->WE_A0_B = WE_A0_B; // net ID: WE lsb: 0  msb: 0 INPUT
			
			register_wait_on_event_nets();
			
		}
		
		void register_wait_on_event_nets(){
		// TODO
		}
		
		bool calculate(simtime_t time){
		// TODO
		}
		};
		
}
#endif // X_RAM32M_H
