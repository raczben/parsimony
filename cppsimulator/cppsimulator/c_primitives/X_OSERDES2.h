/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_OSERDES2{

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
		NetFlow* OQ; // OUTPUT
		NetFlow* SHIFTOUT1; // OUTPUT
		NetFlow* SHIFTOUT2; // OUTPUT
		NetFlow* SHIFTOUT3; // OUTPUT
		NetFlow* SHIFTOUT4; // OUTPUT
		NetFlow* TQ; // OUTPUT
		NetFlow* CLK0; // INPUT
		NetFlow* CLK1; // INPUT
		NetFlow* CLKDIV; // INPUT
		NetFlow* D1; // INPUT
		NetFlow* D2; // INPUT
		NetFlow* D3; // INPUT
		NetFlow* D4; // INPUT
		NetFlow* IOCE; // INPUT
		NetFlow* OCE; // INPUT
		NetFlow* RST; // INPUT
		NetFlow* SHIFTIN1; // INPUT
		NetFlow* SHIFTIN2; // INPUT
		NetFlow* SHIFTIN3; // INPUT
		NetFlow* SHIFTIN4; // INPUT
		NetFlow* T1; // INPUT
		NetFlow* T2; // INPUT
		NetFlow* T3; // INPUT
		NetFlow* T4; // INPUT
		NetFlow* TCE; // INPUT
		NetFlow* TRAIN; // INPUT
		
	
		X_OSERDES2(
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
			NetFlow* OQ, // OUTPUT
			NetFlow* SHIFTOUT1, // OUTPUT
			NetFlow* SHIFTOUT2, // OUTPUT
			NetFlow* SHIFTOUT3, // OUTPUT
			NetFlow* SHIFTOUT4, // OUTPUT
			NetFlow* TQ, // OUTPUT
			NetFlow* CLK0, // INPUT
			NetFlow* CLK1, // INPUT
			NetFlow* CLKDIV, // INPUT
			NetFlow* D1, // INPUT
			NetFlow* D2, // INPUT
			NetFlow* D3, // INPUT
			NetFlow* D4, // INPUT
			NetFlow* IOCE, // INPUT
			NetFlow* OCE, // INPUT
			NetFlow* RST, // INPUT
			NetFlow* SHIFTIN1, // INPUT
			NetFlow* SHIFTIN2, // INPUT
			NetFlow* SHIFTIN3, // INPUT
			NetFlow* SHIFTIN4, // INPUT
			NetFlow* T1, // INPUT
			NetFlow* T2, // INPUT
			NetFlow* T3, // INPUT
			NetFlow* T4, // INPUT
			NetFlow* TCE, // INPUT
			NetFlow* TRAIN // INPUT
			){
		
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
			this->OQ = OQ; // OUTPUT
			this->SHIFTOUT1 = SHIFTOUT1; // OUTPUT
			this->SHIFTOUT2 = SHIFTOUT2; // OUTPUT
			this->SHIFTOUT3 = SHIFTOUT3; // OUTPUT
			this->SHIFTOUT4 = SHIFTOUT4; // OUTPUT
			this->TQ = TQ; // OUTPUT
			this->CLK0 = CLK0; // INPUT
			this->CLK1 = CLK1; // INPUT
			this->CLKDIV = CLKDIV; // INPUT
			this->D1 = D1; // INPUT
			this->D2 = D2; // INPUT
			this->D3 = D3; // INPUT
			this->D4 = D4; // INPUT
			this->IOCE = IOCE; // INPUT
			this->OCE = OCE; // INPUT
			this->RST = RST; // INPUT
			this->SHIFTIN1 = SHIFTIN1; // INPUT
			this->SHIFTIN2 = SHIFTIN2; // INPUT
			this->SHIFTIN3 = SHIFTIN3; // INPUT
			this->SHIFTIN4 = SHIFTIN4; // INPUT
			this->T1 = T1; // INPUT
			this->T2 = T2; // INPUT
			this->T3 = T3; // INPUT
			this->T4 = T4; // INPUT
			this->TCE = TCE; // INPUT
			this->TRAIN = TRAIN; // INPUT
		
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
