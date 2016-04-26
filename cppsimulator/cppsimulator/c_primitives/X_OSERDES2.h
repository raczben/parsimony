/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_OSERDES2_H
#define X_OSERDES2_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_OSERDES2: public Primitive{

		//Verilog Parameters:
		parameter_enum_t BYPASS_GCLK_FF;
		parameter_string_t DATA_RATE_OQ;
		parameter_string_t DATA_RATE_OT;
		parameter_int_t DATA_WIDTH;
		parameter_string_t OUTPUT_MODE;
		parameter_string_t SERDES_MODE;
		parameter_int_t TRAIN_PATTERN;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* OQ_A0_B; // net ID: OQ lsb: 0  msb: 0 OUTPUT
		NetFlow* SHIFTOUT1_A0_B; // net ID: SHIFTOUT1 lsb: 0  msb: 0 OUTPUT
		NetFlow* SHIFTOUT2_A0_B; // net ID: SHIFTOUT2 lsb: 0  msb: 0 OUTPUT
		NetFlow* SHIFTOUT3_A0_B; // net ID: SHIFTOUT3 lsb: 0  msb: 0 OUTPUT
		NetFlow* SHIFTOUT4_A0_B; // net ID: SHIFTOUT4 lsb: 0  msb: 0 OUTPUT
		NetFlow* TQ_A0_B; // net ID: TQ lsb: 0  msb: 0 OUTPUT
		NetFlow* CLK0_A0_B; // net ID: CLK0 lsb: 0  msb: 0 INPUT
		NetFlow* CLK1_A0_B; // net ID: CLK1 lsb: 0  msb: 0 INPUT
		NetFlow* CLKDIV_A0_B; // net ID: CLKDIV lsb: 0  msb: 0 INPUT
		NetFlow* D1_A0_B; // net ID: D1 lsb: 0  msb: 0 INPUT
		NetFlow* D2_A0_B; // net ID: D2 lsb: 0  msb: 0 INPUT
		NetFlow* D3_A0_B; // net ID: D3 lsb: 0  msb: 0 INPUT
		NetFlow* D4_A0_B; // net ID: D4 lsb: 0  msb: 0 INPUT
		NetFlow* IOCE_A0_B; // net ID: IOCE lsb: 0  msb: 0 INPUT
		NetFlow* OCE_A0_B; // net ID: OCE lsb: 0  msb: 0 INPUT
		NetFlow* RST_A0_B; // net ID: RST lsb: 0  msb: 0 INPUT
		NetFlow* SHIFTIN1_A0_B; // net ID: SHIFTIN1 lsb: 0  msb: 0 INPUT
		NetFlow* SHIFTIN2_A0_B; // net ID: SHIFTIN2 lsb: 0  msb: 0 INPUT
		NetFlow* SHIFTIN3_A0_B; // net ID: SHIFTIN3 lsb: 0  msb: 0 INPUT
		NetFlow* SHIFTIN4_A0_B; // net ID: SHIFTIN4 lsb: 0  msb: 0 INPUT
		NetFlow* T1_A0_B; // net ID: T1 lsb: 0  msb: 0 INPUT
		NetFlow* T2_A0_B; // net ID: T2 lsb: 0  msb: 0 INPUT
		NetFlow* T3_A0_B; // net ID: T3 lsb: 0  msb: 0 INPUT
		NetFlow* T4_A0_B; // net ID: T4 lsb: 0  msb: 0 INPUT
		NetFlow* TCE_A0_B; // net ID: TCE lsb: 0  msb: 0 INPUT
		NetFlow* TRAIN_A0_B; // net ID: TRAIN lsb: 0  msb: 0 INPUT
		
		public: X_OSERDES2(
			const char * name,
			//Verilog Parameters:
			parameter_enum_t BYPASS_GCLK_FF, // Default: "FALSE"
			parameter_string_t DATA_RATE_OQ, // Default: "DDR"
			parameter_string_t DATA_RATE_OT, // Default: "DDR"
			parameter_int_t DATA_WIDTH, // Default: 2
			parameter_string_t OUTPUT_MODE, // Default: "SINGLE_ENDED"
			parameter_string_t SERDES_MODE, // Default: "NONE"
			parameter_int_t TRAIN_PATTERN, // Default: 0
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* OQ_A0_B, // net ID: OQ lsb: 0  msb: 0 OUTPUT
			NetFlow* SHIFTOUT1_A0_B, // net ID: SHIFTOUT1 lsb: 0  msb: 0 OUTPUT
			NetFlow* SHIFTOUT2_A0_B, // net ID: SHIFTOUT2 lsb: 0  msb: 0 OUTPUT
			NetFlow* SHIFTOUT3_A0_B, // net ID: SHIFTOUT3 lsb: 0  msb: 0 OUTPUT
			NetFlow* SHIFTOUT4_A0_B, // net ID: SHIFTOUT4 lsb: 0  msb: 0 OUTPUT
			NetFlow* TQ_A0_B, // net ID: TQ lsb: 0  msb: 0 OUTPUT
			NetFlow* CLK0_A0_B, // net ID: CLK0 lsb: 0  msb: 0 INPUT
			NetFlow* CLK1_A0_B, // net ID: CLK1 lsb: 0  msb: 0 INPUT
			NetFlow* CLKDIV_A0_B, // net ID: CLKDIV lsb: 0  msb: 0 INPUT
			NetFlow* D1_A0_B, // net ID: D1 lsb: 0  msb: 0 INPUT
			NetFlow* D2_A0_B, // net ID: D2 lsb: 0  msb: 0 INPUT
			NetFlow* D3_A0_B, // net ID: D3 lsb: 0  msb: 0 INPUT
			NetFlow* D4_A0_B, // net ID: D4 lsb: 0  msb: 0 INPUT
			NetFlow* IOCE_A0_B, // net ID: IOCE lsb: 0  msb: 0 INPUT
			NetFlow* OCE_A0_B, // net ID: OCE lsb: 0  msb: 0 INPUT
			NetFlow* RST_A0_B, // net ID: RST lsb: 0  msb: 0 INPUT
			NetFlow* SHIFTIN1_A0_B, // net ID: SHIFTIN1 lsb: 0  msb: 0 INPUT
			NetFlow* SHIFTIN2_A0_B, // net ID: SHIFTIN2 lsb: 0  msb: 0 INPUT
			NetFlow* SHIFTIN3_A0_B, // net ID: SHIFTIN3 lsb: 0  msb: 0 INPUT
			NetFlow* SHIFTIN4_A0_B, // net ID: SHIFTIN4 lsb: 0  msb: 0 INPUT
			NetFlow* T1_A0_B, // net ID: T1 lsb: 0  msb: 0 INPUT
			NetFlow* T2_A0_B, // net ID: T2 lsb: 0  msb: 0 INPUT
			NetFlow* T3_A0_B, // net ID: T3 lsb: 0  msb: 0 INPUT
			NetFlow* T4_A0_B, // net ID: T4 lsb: 0  msb: 0 INPUT
			NetFlow* TCE_A0_B, // net ID: TCE lsb: 0  msb: 0 INPUT
			NetFlow* TRAIN_A0_B // net ID: TRAIN lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->BYPASS_GCLK_FF = BYPASS_GCLK_FF; // Default: "FALSE"
			this->DATA_RATE_OQ = DATA_RATE_OQ; // Default: "DDR"
			this->DATA_RATE_OT = DATA_RATE_OT; // Default: "DDR"
			this->DATA_WIDTH = DATA_WIDTH; // Default: 2
			this->OUTPUT_MODE = OUTPUT_MODE; // Default: "SINGLE_ENDED"
			this->SERDES_MODE = SERDES_MODE; // Default: "NONE"
			this->TRAIN_PATTERN = TRAIN_PATTERN; // Default: 0
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->OQ_A0_B = OQ_A0_B; // net ID: OQ lsb: 0  msb: 0 OUTPUT
			this->SHIFTOUT1_A0_B = SHIFTOUT1_A0_B; // net ID: SHIFTOUT1 lsb: 0  msb: 0 OUTPUT
			this->SHIFTOUT2_A0_B = SHIFTOUT2_A0_B; // net ID: SHIFTOUT2 lsb: 0  msb: 0 OUTPUT
			this->SHIFTOUT3_A0_B = SHIFTOUT3_A0_B; // net ID: SHIFTOUT3 lsb: 0  msb: 0 OUTPUT
			this->SHIFTOUT4_A0_B = SHIFTOUT4_A0_B; // net ID: SHIFTOUT4 lsb: 0  msb: 0 OUTPUT
			this->TQ_A0_B = TQ_A0_B; // net ID: TQ lsb: 0  msb: 0 OUTPUT
			this->CLK0_A0_B = CLK0_A0_B; // net ID: CLK0 lsb: 0  msb: 0 INPUT
			this->CLK1_A0_B = CLK1_A0_B; // net ID: CLK1 lsb: 0  msb: 0 INPUT
			this->CLKDIV_A0_B = CLKDIV_A0_B; // net ID: CLKDIV lsb: 0  msb: 0 INPUT
			this->D1_A0_B = D1_A0_B; // net ID: D1 lsb: 0  msb: 0 INPUT
			this->D2_A0_B = D2_A0_B; // net ID: D2 lsb: 0  msb: 0 INPUT
			this->D3_A0_B = D3_A0_B; // net ID: D3 lsb: 0  msb: 0 INPUT
			this->D4_A0_B = D4_A0_B; // net ID: D4 lsb: 0  msb: 0 INPUT
			this->IOCE_A0_B = IOCE_A0_B; // net ID: IOCE lsb: 0  msb: 0 INPUT
			this->OCE_A0_B = OCE_A0_B; // net ID: OCE lsb: 0  msb: 0 INPUT
			this->RST_A0_B = RST_A0_B; // net ID: RST lsb: 0  msb: 0 INPUT
			this->SHIFTIN1_A0_B = SHIFTIN1_A0_B; // net ID: SHIFTIN1 lsb: 0  msb: 0 INPUT
			this->SHIFTIN2_A0_B = SHIFTIN2_A0_B; // net ID: SHIFTIN2 lsb: 0  msb: 0 INPUT
			this->SHIFTIN3_A0_B = SHIFTIN3_A0_B; // net ID: SHIFTIN3 lsb: 0  msb: 0 INPUT
			this->SHIFTIN4_A0_B = SHIFTIN4_A0_B; // net ID: SHIFTIN4 lsb: 0  msb: 0 INPUT
			this->T1_A0_B = T1_A0_B; // net ID: T1 lsb: 0  msb: 0 INPUT
			this->T2_A0_B = T2_A0_B; // net ID: T2 lsb: 0  msb: 0 INPUT
			this->T3_A0_B = T3_A0_B; // net ID: T3 lsb: 0  msb: 0 INPUT
			this->T4_A0_B = T4_A0_B; // net ID: T4 lsb: 0  msb: 0 INPUT
			this->TCE_A0_B = TCE_A0_B; // net ID: TCE lsb: 0  msb: 0 INPUT
			this->TRAIN_A0_B = TRAIN_A0_B; // net ID: TRAIN lsb: 0  msb: 0 INPUT
			
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
#endif // X_OSERDES2_H
