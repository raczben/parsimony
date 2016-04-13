/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_OSERDES2: public Primitive{

		//Verilog Parameters:
		parameter_enum_t BYPASS_GCLK_FF;
		parameter_string_t DATA_RATE_OQ;
		parameter_string_t DATA_RATE_OT;
		parameter_string_t DATA_WIDTH;
		parameter_string_t OUTPUT_MODE;
		parameter_string_t SERDES_MODE;
		parameter_string_t TRAIN_PATTERN;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* OQ; // net ID: OQ lsb: 0  msb: 0 OUTPUT
		NetFlow* SHIFTOUT1; // net ID: SHIFTOUT1 lsb: 0  msb: 0 OUTPUT
		NetFlow* SHIFTOUT2; // net ID: SHIFTOUT2 lsb: 0  msb: 0 OUTPUT
		NetFlow* SHIFTOUT3; // net ID: SHIFTOUT3 lsb: 0  msb: 0 OUTPUT
		NetFlow* SHIFTOUT4; // net ID: SHIFTOUT4 lsb: 0  msb: 0 OUTPUT
		NetFlow* TQ; // net ID: TQ lsb: 0  msb: 0 OUTPUT
		NetFlow* CLK0; // net ID: CLK0 lsb: 0  msb: 0 INPUT
		NetFlow* CLK1; // net ID: CLK1 lsb: 0  msb: 0 INPUT
		NetFlow* CLKDIV; // net ID: CLKDIV lsb: 0  msb: 0 INPUT
		NetFlow* D1; // net ID: D1 lsb: 0  msb: 0 INPUT
		NetFlow* D2; // net ID: D2 lsb: 0  msb: 0 INPUT
		NetFlow* D3; // net ID: D3 lsb: 0  msb: 0 INPUT
		NetFlow* D4; // net ID: D4 lsb: 0  msb: 0 INPUT
		NetFlow* IOCE; // net ID: IOCE lsb: 0  msb: 0 INPUT
		NetFlow* OCE; // net ID: OCE lsb: 0  msb: 0 INPUT
		NetFlow* RST; // net ID: RST lsb: 0  msb: 0 INPUT
		NetFlow* SHIFTIN1; // net ID: SHIFTIN1 lsb: 0  msb: 0 INPUT
		NetFlow* SHIFTIN2; // net ID: SHIFTIN2 lsb: 0  msb: 0 INPUT
		NetFlow* SHIFTIN3; // net ID: SHIFTIN3 lsb: 0  msb: 0 INPUT
		NetFlow* SHIFTIN4; // net ID: SHIFTIN4 lsb: 0  msb: 0 INPUT
		NetFlow* T1; // net ID: T1 lsb: 0  msb: 0 INPUT
		NetFlow* T2; // net ID: T2 lsb: 0  msb: 0 INPUT
		NetFlow* T3; // net ID: T3 lsb: 0  msb: 0 INPUT
		NetFlow* T4; // net ID: T4 lsb: 0  msb: 0 INPUT
		NetFlow* TCE; // net ID: TCE lsb: 0  msb: 0 INPUT
		NetFlow* TRAIN; // net ID: TRAIN lsb: 0  msb: 0 INPUT
		
		X_OSERDES2(
			const char * name,
			//Verilog Parameters:
			parameter_enum_t BYPASS_GCLK_FF, // Default: "FALSE"
			parameter_string_t DATA_RATE_OQ, // Default: "DDR"
			parameter_string_t DATA_RATE_OT, // Default: "DDR"
			parameter_string_t DATA_WIDTH, // Default: 2
			parameter_string_t OUTPUT_MODE, // Default: "SINGLE_ENDED"
			parameter_string_t SERDES_MODE, // Default: "NONE"
			parameter_string_t TRAIN_PATTERN, // Default: 0
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* OQ, // net ID: OQ lsb: 0  msb: 0 OUTPUT
			NetFlow* SHIFTOUT1, // net ID: SHIFTOUT1 lsb: 0  msb: 0 OUTPUT
			NetFlow* SHIFTOUT2, // net ID: SHIFTOUT2 lsb: 0  msb: 0 OUTPUT
			NetFlow* SHIFTOUT3, // net ID: SHIFTOUT3 lsb: 0  msb: 0 OUTPUT
			NetFlow* SHIFTOUT4, // net ID: SHIFTOUT4 lsb: 0  msb: 0 OUTPUT
			NetFlow* TQ, // net ID: TQ lsb: 0  msb: 0 OUTPUT
			NetFlow* CLK0, // net ID: CLK0 lsb: 0  msb: 0 INPUT
			NetFlow* CLK1, // net ID: CLK1 lsb: 0  msb: 0 INPUT
			NetFlow* CLKDIV, // net ID: CLKDIV lsb: 0  msb: 0 INPUT
			NetFlow* D1, // net ID: D1 lsb: 0  msb: 0 INPUT
			NetFlow* D2, // net ID: D2 lsb: 0  msb: 0 INPUT
			NetFlow* D3, // net ID: D3 lsb: 0  msb: 0 INPUT
			NetFlow* D4, // net ID: D4 lsb: 0  msb: 0 INPUT
			NetFlow* IOCE, // net ID: IOCE lsb: 0  msb: 0 INPUT
			NetFlow* OCE, // net ID: OCE lsb: 0  msb: 0 INPUT
			NetFlow* RST, // net ID: RST lsb: 0  msb: 0 INPUT
			NetFlow* SHIFTIN1, // net ID: SHIFTIN1 lsb: 0  msb: 0 INPUT
			NetFlow* SHIFTIN2, // net ID: SHIFTIN2 lsb: 0  msb: 0 INPUT
			NetFlow* SHIFTIN3, // net ID: SHIFTIN3 lsb: 0  msb: 0 INPUT
			NetFlow* SHIFTIN4, // net ID: SHIFTIN4 lsb: 0  msb: 0 INPUT
			NetFlow* T1, // net ID: T1 lsb: 0  msb: 0 INPUT
			NetFlow* T2, // net ID: T2 lsb: 0  msb: 0 INPUT
			NetFlow* T3, // net ID: T3 lsb: 0  msb: 0 INPUT
			NetFlow* T4, // net ID: T4 lsb: 0  msb: 0 INPUT
			NetFlow* TCE, // net ID: TCE lsb: 0  msb: 0 INPUT
			NetFlow* TRAIN // net ID: TRAIN lsb: 0  msb: 0 INPUT
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
			this->OQ = OQ; // net ID: OQ lsb: 0  msb: 0 OUTPUT
			this->SHIFTOUT1 = SHIFTOUT1; // net ID: SHIFTOUT1 lsb: 0  msb: 0 OUTPUT
			this->SHIFTOUT2 = SHIFTOUT2; // net ID: SHIFTOUT2 lsb: 0  msb: 0 OUTPUT
			this->SHIFTOUT3 = SHIFTOUT3; // net ID: SHIFTOUT3 lsb: 0  msb: 0 OUTPUT
			this->SHIFTOUT4 = SHIFTOUT4; // net ID: SHIFTOUT4 lsb: 0  msb: 0 OUTPUT
			this->TQ = TQ; // net ID: TQ lsb: 0  msb: 0 OUTPUT
			this->CLK0 = CLK0; // net ID: CLK0 lsb: 0  msb: 0 INPUT
			this->CLK1 = CLK1; // net ID: CLK1 lsb: 0  msb: 0 INPUT
			this->CLKDIV = CLKDIV; // net ID: CLKDIV lsb: 0  msb: 0 INPUT
			this->D1 = D1; // net ID: D1 lsb: 0  msb: 0 INPUT
			this->D2 = D2; // net ID: D2 lsb: 0  msb: 0 INPUT
			this->D3 = D3; // net ID: D3 lsb: 0  msb: 0 INPUT
			this->D4 = D4; // net ID: D4 lsb: 0  msb: 0 INPUT
			this->IOCE = IOCE; // net ID: IOCE lsb: 0  msb: 0 INPUT
			this->OCE = OCE; // net ID: OCE lsb: 0  msb: 0 INPUT
			this->RST = RST; // net ID: RST lsb: 0  msb: 0 INPUT
			this->SHIFTIN1 = SHIFTIN1; // net ID: SHIFTIN1 lsb: 0  msb: 0 INPUT
			this->SHIFTIN2 = SHIFTIN2; // net ID: SHIFTIN2 lsb: 0  msb: 0 INPUT
			this->SHIFTIN3 = SHIFTIN3; // net ID: SHIFTIN3 lsb: 0  msb: 0 INPUT
			this->SHIFTIN4 = SHIFTIN4; // net ID: SHIFTIN4 lsb: 0  msb: 0 INPUT
			this->T1 = T1; // net ID: T1 lsb: 0  msb: 0 INPUT
			this->T2 = T2; // net ID: T2 lsb: 0  msb: 0 INPUT
			this->T3 = T3; // net ID: T3 lsb: 0  msb: 0 INPUT
			this->T4 = T4; // net ID: T4 lsb: 0  msb: 0 INPUT
			this->TCE = TCE; // net ID: TCE lsb: 0  msb: 0 INPUT
			this->TRAIN = TRAIN; // net ID: TRAIN lsb: 0  msb: 0 INPUT
			
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
