/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_OSERDESE2_H
#define X_OSERDESE2_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"
namespace CPrimitives {
	
	class X_OSERDESE2: public Primitive{

		//Verilog Parameters:
		parameter_string_t DATA_RATE_OQ;
		parameter_string_t DATA_RATE_TQ;
		parameter_int_t DATA_WIDTH;
		parameter_int_t INIT_OQ;
		parameter_int_t INIT_TQ;
		parameter_string_t LOC;
		parameter_string_t SERDES_MODE;
		parameter_int_t SRVAL_OQ;
		parameter_int_t SRVAL_TQ;
		parameter_enum_t TBYTE_CTL;
		parameter_enum_t TBYTE_SRC;
		parameter_int_t TRISTATE_WIDTH;
		//Verilog Ports in definition order:
		NetFlow* OFB_A0_B; // net ID: OFB lsb: 0  msb: 0 OUTPUT
		NetFlow* OQ_A0_B; // net ID: OQ lsb: 0  msb: 0 OUTPUT
		NetFlow* SHIFTOUT1_A0_B; // net ID: SHIFTOUT1 lsb: 0  msb: 0 OUTPUT
		NetFlow* SHIFTOUT2_A0_B; // net ID: SHIFTOUT2 lsb: 0  msb: 0 OUTPUT
		NetFlow* TBYTEOUT_A0_B; // net ID: TBYTEOUT lsb: 0  msb: 0 OUTPUT
		NetFlow* TFB_A0_B; // net ID: TFB lsb: 0  msb: 0 OUTPUT
		NetFlow* TQ_A0_B; // net ID: TQ lsb: 0  msb: 0 OUTPUT
		NetFlow* CLK_A0_B; // net ID: CLK lsb: 0  msb: 0 INPUT
		NetFlow* CLKDIV_A0_B; // net ID: CLKDIV lsb: 0  msb: 0 INPUT
		NetFlow* D1_A0_B; // net ID: D1 lsb: 0  msb: 0 INPUT
		NetFlow* D2_A0_B; // net ID: D2 lsb: 0  msb: 0 INPUT
		NetFlow* D3_A0_B; // net ID: D3 lsb: 0  msb: 0 INPUT
		NetFlow* D4_A0_B; // net ID: D4 lsb: 0  msb: 0 INPUT
		NetFlow* D5_A0_B; // net ID: D5 lsb: 0  msb: 0 INPUT
		NetFlow* D6_A0_B; // net ID: D6 lsb: 0  msb: 0 INPUT
		NetFlow* D7_A0_B; // net ID: D7 lsb: 0  msb: 0 INPUT
		NetFlow* D8_A0_B; // net ID: D8 lsb: 0  msb: 0 INPUT
		NetFlow* OCE_A0_B; // net ID: OCE lsb: 0  msb: 0 INPUT
		NetFlow* RST_A0_B; // net ID: RST lsb: 0  msb: 0 INPUT
		NetFlow* SHIFTIN1_A0_B; // net ID: SHIFTIN1 lsb: 0  msb: 0 INPUT
		NetFlow* SHIFTIN2_A0_B; // net ID: SHIFTIN2 lsb: 0  msb: 0 INPUT
		NetFlow* T1_A0_B; // net ID: T1 lsb: 0  msb: 0 INPUT
		NetFlow* T2_A0_B; // net ID: T2 lsb: 0  msb: 0 INPUT
		NetFlow* T3_A0_B; // net ID: T3 lsb: 0  msb: 0 INPUT
		NetFlow* T4_A0_B; // net ID: T4 lsb: 0  msb: 0 INPUT
		NetFlow* TBYTEIN_A0_B; // net ID: TBYTEIN lsb: 0  msb: 0 INPUT
		NetFlow* TCE_A0_B; // net ID: TCE lsb: 0  msb: 0 INPUT
		
		public: X_OSERDESE2(
			const char * name,
			//Verilog Parameters:
			parameter_string_t DATA_RATE_OQ, // Default: "DDR"
			parameter_string_t DATA_RATE_TQ, // Default: "DDR"
			parameter_int_t DATA_WIDTH, // Default: 4
			parameter_int_t INIT_OQ, // Default: 1'b0
			parameter_int_t INIT_TQ, // Default: 1'b0
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_string_t SERDES_MODE, // Default: "MASTER"
			parameter_int_t SRVAL_OQ, // Default: 1'b0
			parameter_int_t SRVAL_TQ, // Default: 1'b0
			parameter_enum_t TBYTE_CTL, // Default: "FALSE"
			parameter_enum_t TBYTE_SRC, // Default: "FALSE"
			parameter_int_t TRISTATE_WIDTH, // Default: 4
			//Verilog Ports in definition order:
			NetFlow* OFB_A0_B, // net ID: OFB lsb: 0  msb: 0 OUTPUT
			NetFlow* OQ_A0_B, // net ID: OQ lsb: 0  msb: 0 OUTPUT
			NetFlow* SHIFTOUT1_A0_B, // net ID: SHIFTOUT1 lsb: 0  msb: 0 OUTPUT
			NetFlow* SHIFTOUT2_A0_B, // net ID: SHIFTOUT2 lsb: 0  msb: 0 OUTPUT
			NetFlow* TBYTEOUT_A0_B, // net ID: TBYTEOUT lsb: 0  msb: 0 OUTPUT
			NetFlow* TFB_A0_B, // net ID: TFB lsb: 0  msb: 0 OUTPUT
			NetFlow* TQ_A0_B, // net ID: TQ lsb: 0  msb: 0 OUTPUT
			NetFlow* CLK_A0_B, // net ID: CLK lsb: 0  msb: 0 INPUT
			NetFlow* CLKDIV_A0_B, // net ID: CLKDIV lsb: 0  msb: 0 INPUT
			NetFlow* D1_A0_B, // net ID: D1 lsb: 0  msb: 0 INPUT
			NetFlow* D2_A0_B, // net ID: D2 lsb: 0  msb: 0 INPUT
			NetFlow* D3_A0_B, // net ID: D3 lsb: 0  msb: 0 INPUT
			NetFlow* D4_A0_B, // net ID: D4 lsb: 0  msb: 0 INPUT
			NetFlow* D5_A0_B, // net ID: D5 lsb: 0  msb: 0 INPUT
			NetFlow* D6_A0_B, // net ID: D6 lsb: 0  msb: 0 INPUT
			NetFlow* D7_A0_B, // net ID: D7 lsb: 0  msb: 0 INPUT
			NetFlow* D8_A0_B, // net ID: D8 lsb: 0  msb: 0 INPUT
			NetFlow* OCE_A0_B, // net ID: OCE lsb: 0  msb: 0 INPUT
			NetFlow* RST_A0_B, // net ID: RST lsb: 0  msb: 0 INPUT
			NetFlow* SHIFTIN1_A0_B, // net ID: SHIFTIN1 lsb: 0  msb: 0 INPUT
			NetFlow* SHIFTIN2_A0_B, // net ID: SHIFTIN2 lsb: 0  msb: 0 INPUT
			NetFlow* T1_A0_B, // net ID: T1 lsb: 0  msb: 0 INPUT
			NetFlow* T2_A0_B, // net ID: T2 lsb: 0  msb: 0 INPUT
			NetFlow* T3_A0_B, // net ID: T3 lsb: 0  msb: 0 INPUT
			NetFlow* T4_A0_B, // net ID: T4 lsb: 0  msb: 0 INPUT
			NetFlow* TBYTEIN_A0_B, // net ID: TBYTEIN lsb: 0  msb: 0 INPUT
			NetFlow* TCE_A0_B // net ID: TCE lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->DATA_RATE_OQ = DATA_RATE_OQ; // Default: "DDR"
			this->DATA_RATE_TQ = DATA_RATE_TQ; // Default: "DDR"
			this->DATA_WIDTH = DATA_WIDTH; // Default: 4
			this->INIT_OQ = INIT_OQ; // Default: 1'b0
			this->INIT_TQ = INIT_TQ; // Default: 1'b0
			this->LOC = LOC; // Default: "UNPLACED"
			this->SERDES_MODE = SERDES_MODE; // Default: "MASTER"
			this->SRVAL_OQ = SRVAL_OQ; // Default: 1'b0
			this->SRVAL_TQ = SRVAL_TQ; // Default: 1'b0
			this->TBYTE_CTL = TBYTE_CTL; // Default: "FALSE"
			this->TBYTE_SRC = TBYTE_SRC; // Default: "FALSE"
			this->TRISTATE_WIDTH = TRISTATE_WIDTH; // Default: 4
			//Verilog Ports in definition order:
			this->OFB_A0_B = OFB_A0_B; // net ID: OFB lsb: 0  msb: 0 OUTPUT
			this->OQ_A0_B = OQ_A0_B; // net ID: OQ lsb: 0  msb: 0 OUTPUT
			this->SHIFTOUT1_A0_B = SHIFTOUT1_A0_B; // net ID: SHIFTOUT1 lsb: 0  msb: 0 OUTPUT
			this->SHIFTOUT2_A0_B = SHIFTOUT2_A0_B; // net ID: SHIFTOUT2 lsb: 0  msb: 0 OUTPUT
			this->TBYTEOUT_A0_B = TBYTEOUT_A0_B; // net ID: TBYTEOUT lsb: 0  msb: 0 OUTPUT
			this->TFB_A0_B = TFB_A0_B; // net ID: TFB lsb: 0  msb: 0 OUTPUT
			this->TQ_A0_B = TQ_A0_B; // net ID: TQ lsb: 0  msb: 0 OUTPUT
			this->CLK_A0_B = CLK_A0_B; // net ID: CLK lsb: 0  msb: 0 INPUT
			this->CLKDIV_A0_B = CLKDIV_A0_B; // net ID: CLKDIV lsb: 0  msb: 0 INPUT
			this->D1_A0_B = D1_A0_B; // net ID: D1 lsb: 0  msb: 0 INPUT
			this->D2_A0_B = D2_A0_B; // net ID: D2 lsb: 0  msb: 0 INPUT
			this->D3_A0_B = D3_A0_B; // net ID: D3 lsb: 0  msb: 0 INPUT
			this->D4_A0_B = D4_A0_B; // net ID: D4 lsb: 0  msb: 0 INPUT
			this->D5_A0_B = D5_A0_B; // net ID: D5 lsb: 0  msb: 0 INPUT
			this->D6_A0_B = D6_A0_B; // net ID: D6 lsb: 0  msb: 0 INPUT
			this->D7_A0_B = D7_A0_B; // net ID: D7 lsb: 0  msb: 0 INPUT
			this->D8_A0_B = D8_A0_B; // net ID: D8 lsb: 0  msb: 0 INPUT
			this->OCE_A0_B = OCE_A0_B; // net ID: OCE lsb: 0  msb: 0 INPUT
			this->RST_A0_B = RST_A0_B; // net ID: RST lsb: 0  msb: 0 INPUT
			this->SHIFTIN1_A0_B = SHIFTIN1_A0_B; // net ID: SHIFTIN1 lsb: 0  msb: 0 INPUT
			this->SHIFTIN2_A0_B = SHIFTIN2_A0_B; // net ID: SHIFTIN2 lsb: 0  msb: 0 INPUT
			this->T1_A0_B = T1_A0_B; // net ID: T1 lsb: 0  msb: 0 INPUT
			this->T2_A0_B = T2_A0_B; // net ID: T2 lsb: 0  msb: 0 INPUT
			this->T3_A0_B = T3_A0_B; // net ID: T3 lsb: 0  msb: 0 INPUT
			this->T4_A0_B = T4_A0_B; // net ID: T4 lsb: 0  msb: 0 INPUT
			this->TBYTEIN_A0_B = TBYTEIN_A0_B; // net ID: TBYTEIN lsb: 0  msb: 0 INPUT
			this->TCE_A0_B = TCE_A0_B; // net ID: TCE lsb: 0  msb: 0 INPUT
			
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
#endif // X_OSERDESE2_H
