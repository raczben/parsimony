/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef RANK12D_OSERDESE1_VLOG_H
#define RANK12D_OSERDESE1_VLOG_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class rank12d_oserdese1_vlog: public Primitive{

		//Verilog Parameters:
		parameter_int_t FFD;
		parameter_int_t FFCD;
		parameter_int_t MXD;
		parameter_int_t MXR1;
		//Verilog Ports in definition order:
		NetFlow* D1_A0_B; // net ID: D1 lsb: 0  msb: 0 INPUT
		NetFlow* D2_A0_B; // net ID: D2 lsb: 0  msb: 0 INPUT
		NetFlow* D3_A0_B; // net ID: D3 lsb: 0  msb: 0 INPUT
		NetFlow* D4_A0_B; // net ID: D4 lsb: 0  msb: 0 INPUT
		NetFlow* D5_A0_B; // net ID: D5 lsb: 0  msb: 0 INPUT
		NetFlow* D6_A0_B; // net ID: D6 lsb: 0  msb: 0 INPUT
		NetFlow* D2RNK2_A0_B; // net ID: d2rnk2 lsb: 0  msb: 0 INPUT
		NetFlow* SHIFTIN1_A0_B; // net ID: SHIFTIN1 lsb: 0  msb: 0 INPUT
		NetFlow* SHIFTIN2_A0_B; // net ID: SHIFTIN2 lsb: 0  msb: 0 INPUT
		NetFlow* C_A0_B; // net ID: C lsb: 0  msb: 0 INPUT
		NetFlow* CLKDIV_A0_B; // net ID: CLKDIV lsb: 0  msb: 0 INPUT
		NetFlow* SR_A0_B; // net ID: SR lsb: 0  msb: 0 INPUT
		NetFlow* OCE_A0_B; // net ID: OCE lsb: 0  msb: 0 INPUT
		NetFlow* DATA1_A0_B; // net ID: data1 lsb: 0  msb: 0 OUTPUT
		NetFlow* DATA2_A0_B; // net ID: data2 lsb: 0  msb: 0 OUTPUT
		NetFlow* SHIFTOUT1_A0_B; // net ID: SHIFTOUT1 lsb: 0  msb: 0 OUTPUT
		NetFlow* SHIFTOUT2_A0_B; // net ID: SHIFTOUT2 lsb: 0  msb: 0 OUTPUT
		NetFlow* DATA__RATE__OQ_A0_B; // net ID: DATA_RATE_OQ lsb: 0  msb: 0 INPUT
		NetFlow* DATA__WIDTH_A3_B; // net ID: DATA_WIDTH lsb: 0  msb: 3 INPUT
		NetFlow* DATA__WIDTH_A2_B; // net ID: DATA_WIDTH lsb: 0  msb: 3 INPUT
		NetFlow* DATA__WIDTH_A1_B; // net ID: DATA_WIDTH lsb: 0  msb: 3 INPUT
		NetFlow* DATA__WIDTH_A0_B; // net ID: DATA_WIDTH lsb: 0  msb: 3 INPUT
		NetFlow* SERDES__MODE_A0_B; // net ID: SERDES_MODE lsb: 0  msb: 0 INPUT
		NetFlow* LOAD_A0_B; // net ID: load lsb: 0  msb: 0 OUTPUT
		NetFlow* IOCLK__GLITCH_A0_B; // net ID: IOCLK_GLITCH lsb: 0  msb: 0 OUTPUT
		NetFlow* INIT__OQ_A0_B; // net ID: INIT_OQ lsb: 0  msb: 0 INPUT
		NetFlow* SRVAL__OQ_A0_B; // net ID: SRVAL_OQ lsb: 0  msb: 0 INPUT
		
		public: rank12d_oserdese1_vlog(
			const char * name,
			//Verilog Parameters:
			parameter_int_t FFD, // Default: 1
			parameter_int_t FFCD, // Default: 1
			parameter_int_t MXD, // Default: 1
			parameter_int_t MXR1, // Default: 1
			//Verilog Ports in definition order:
			NetFlow* D1_A0_B, // net ID: D1 lsb: 0  msb: 0 INPUT
			NetFlow* D2_A0_B, // net ID: D2 lsb: 0  msb: 0 INPUT
			NetFlow* D3_A0_B, // net ID: D3 lsb: 0  msb: 0 INPUT
			NetFlow* D4_A0_B, // net ID: D4 lsb: 0  msb: 0 INPUT
			NetFlow* D5_A0_B, // net ID: D5 lsb: 0  msb: 0 INPUT
			NetFlow* D6_A0_B, // net ID: D6 lsb: 0  msb: 0 INPUT
			NetFlow* D2RNK2_A0_B, // net ID: d2rnk2 lsb: 0  msb: 0 INPUT
			NetFlow* SHIFTIN1_A0_B, // net ID: SHIFTIN1 lsb: 0  msb: 0 INPUT
			NetFlow* SHIFTIN2_A0_B, // net ID: SHIFTIN2 lsb: 0  msb: 0 INPUT
			NetFlow* C_A0_B, // net ID: C lsb: 0  msb: 0 INPUT
			NetFlow* CLKDIV_A0_B, // net ID: CLKDIV lsb: 0  msb: 0 INPUT
			NetFlow* SR_A0_B, // net ID: SR lsb: 0  msb: 0 INPUT
			NetFlow* OCE_A0_B, // net ID: OCE lsb: 0  msb: 0 INPUT
			NetFlow* DATA1_A0_B, // net ID: data1 lsb: 0  msb: 0 OUTPUT
			NetFlow* DATA2_A0_B, // net ID: data2 lsb: 0  msb: 0 OUTPUT
			NetFlow* SHIFTOUT1_A0_B, // net ID: SHIFTOUT1 lsb: 0  msb: 0 OUTPUT
			NetFlow* SHIFTOUT2_A0_B, // net ID: SHIFTOUT2 lsb: 0  msb: 0 OUTPUT
			NetFlow* DATA__RATE__OQ_A0_B, // net ID: DATA_RATE_OQ lsb: 0  msb: 0 INPUT
			NetFlow* DATA__WIDTH_A3_B, // net ID: DATA_WIDTH lsb: 0  msb: 3 INPUT
			NetFlow* DATA__WIDTH_A2_B, // net ID: DATA_WIDTH lsb: 0  msb: 3 INPUT
			NetFlow* DATA__WIDTH_A1_B, // net ID: DATA_WIDTH lsb: 0  msb: 3 INPUT
			NetFlow* DATA__WIDTH_A0_B, // net ID: DATA_WIDTH lsb: 0  msb: 3 INPUT
			NetFlow* SERDES__MODE_A0_B, // net ID: SERDES_MODE lsb: 0  msb: 0 INPUT
			NetFlow* LOAD_A0_B, // net ID: load lsb: 0  msb: 0 OUTPUT
			NetFlow* IOCLK__GLITCH_A0_B, // net ID: IOCLK_GLITCH lsb: 0  msb: 0 OUTPUT
			NetFlow* INIT__OQ_A0_B, // net ID: INIT_OQ lsb: 0  msb: 0 INPUT
			NetFlow* SRVAL__OQ_A0_B // net ID: SRVAL_OQ lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->FFD = FFD; // Default: 1
			this->FFCD = FFCD; // Default: 1
			this->MXD = MXD; // Default: 1
			this->MXR1 = MXR1; // Default: 1
			//Verilog Ports in definition order:
			this->D1_A0_B = D1_A0_B; // net ID: D1 lsb: 0  msb: 0 INPUT
			this->D2_A0_B = D2_A0_B; // net ID: D2 lsb: 0  msb: 0 INPUT
			this->D3_A0_B = D3_A0_B; // net ID: D3 lsb: 0  msb: 0 INPUT
			this->D4_A0_B = D4_A0_B; // net ID: D4 lsb: 0  msb: 0 INPUT
			this->D5_A0_B = D5_A0_B; // net ID: D5 lsb: 0  msb: 0 INPUT
			this->D6_A0_B = D6_A0_B; // net ID: D6 lsb: 0  msb: 0 INPUT
			this->D2RNK2_A0_B = D2RNK2_A0_B; // net ID: d2rnk2 lsb: 0  msb: 0 INPUT
			this->SHIFTIN1_A0_B = SHIFTIN1_A0_B; // net ID: SHIFTIN1 lsb: 0  msb: 0 INPUT
			this->SHIFTIN2_A0_B = SHIFTIN2_A0_B; // net ID: SHIFTIN2 lsb: 0  msb: 0 INPUT
			this->C_A0_B = C_A0_B; // net ID: C lsb: 0  msb: 0 INPUT
			this->CLKDIV_A0_B = CLKDIV_A0_B; // net ID: CLKDIV lsb: 0  msb: 0 INPUT
			this->SR_A0_B = SR_A0_B; // net ID: SR lsb: 0  msb: 0 INPUT
			this->OCE_A0_B = OCE_A0_B; // net ID: OCE lsb: 0  msb: 0 INPUT
			this->DATA1_A0_B = DATA1_A0_B; // net ID: data1 lsb: 0  msb: 0 OUTPUT
			this->DATA2_A0_B = DATA2_A0_B; // net ID: data2 lsb: 0  msb: 0 OUTPUT
			this->SHIFTOUT1_A0_B = SHIFTOUT1_A0_B; // net ID: SHIFTOUT1 lsb: 0  msb: 0 OUTPUT
			this->SHIFTOUT2_A0_B = SHIFTOUT2_A0_B; // net ID: SHIFTOUT2 lsb: 0  msb: 0 OUTPUT
			this->DATA__RATE__OQ_A0_B = DATA__RATE__OQ_A0_B; // net ID: DATA_RATE_OQ lsb: 0  msb: 0 INPUT
			this->DATA__WIDTH_A3_B = DATA__WIDTH_A3_B; // net ID: DATA_WIDTH lsb: 0  msb: 3 INPUT
			this->DATA__WIDTH_A2_B = DATA__WIDTH_A2_B; // net ID: DATA_WIDTH lsb: 0  msb: 3 INPUT
			this->DATA__WIDTH_A1_B = DATA__WIDTH_A1_B; // net ID: DATA_WIDTH lsb: 0  msb: 3 INPUT
			this->DATA__WIDTH_A0_B = DATA__WIDTH_A0_B; // net ID: DATA_WIDTH lsb: 0  msb: 3 INPUT
			this->SERDES__MODE_A0_B = SERDES__MODE_A0_B; // net ID: SERDES_MODE lsb: 0  msb: 0 INPUT
			this->LOAD_A0_B = LOAD_A0_B; // net ID: load lsb: 0  msb: 0 OUTPUT
			this->IOCLK__GLITCH_A0_B = IOCLK__GLITCH_A0_B; // net ID: IOCLK_GLITCH lsb: 0  msb: 0 OUTPUT
			this->INIT__OQ_A0_B = INIT__OQ_A0_B; // net ID: INIT_OQ lsb: 0  msb: 0 INPUT
			this->SRVAL__OQ_A0_B = SRVAL__OQ_A0_B; // net ID: SRVAL_OQ lsb: 0  msb: 0 INPUT
			
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
#endif // RANK12D_OSERDESE1_VLOG_H
