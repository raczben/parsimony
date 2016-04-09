/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_OSERDESE2{

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
		NetFlow* OFB; // OUTPUT
		NetFlow* OQ; // OUTPUT
		NetFlow* SHIFTOUT1; // OUTPUT
		NetFlow* SHIFTOUT2; // OUTPUT
		NetFlow* TBYTEOUT; // OUTPUT
		NetFlow* TFB; // OUTPUT
		NetFlow* TQ; // OUTPUT
		NetFlow* CLK; // INPUT
		NetFlow* CLKDIV; // INPUT
		NetFlow* D1; // INPUT
		NetFlow* D2; // INPUT
		NetFlow* D3; // INPUT
		NetFlow* D4; // INPUT
		NetFlow* D5; // INPUT
		NetFlow* D6; // INPUT
		NetFlow* D7; // INPUT
		NetFlow* D8; // INPUT
		NetFlow* OCE; // INPUT
		NetFlow* RST; // INPUT
		NetFlow* SHIFTIN1; // INPUT
		NetFlow* SHIFTIN2; // INPUT
		NetFlow* T1; // INPUT
		NetFlow* T2; // INPUT
		NetFlow* T3; // INPUT
		NetFlow* T4; // INPUT
		NetFlow* TBYTEIN; // INPUT
		NetFlow* TCE; // INPUT
		
	
		X_OSERDESE2(
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
			NetFlow* OFB, // OUTPUT
			NetFlow* OQ, // OUTPUT
			NetFlow* SHIFTOUT1, // OUTPUT
			NetFlow* SHIFTOUT2, // OUTPUT
			NetFlow* TBYTEOUT, // OUTPUT
			NetFlow* TFB, // OUTPUT
			NetFlow* TQ, // OUTPUT
			NetFlow* CLK, // INPUT
			NetFlow* CLKDIV, // INPUT
			NetFlow* D1, // INPUT
			NetFlow* D2, // INPUT
			NetFlow* D3, // INPUT
			NetFlow* D4, // INPUT
			NetFlow* D5, // INPUT
			NetFlow* D6, // INPUT
			NetFlow* D7, // INPUT
			NetFlow* D8, // INPUT
			NetFlow* OCE, // INPUT
			NetFlow* RST, // INPUT
			NetFlow* SHIFTIN1, // INPUT
			NetFlow* SHIFTIN2, // INPUT
			NetFlow* T1, // INPUT
			NetFlow* T2, // INPUT
			NetFlow* T3, // INPUT
			NetFlow* T4, // INPUT
			NetFlow* TBYTEIN, // INPUT
			NetFlow* TCE // INPUT
			){
		
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
			this->OFB = OFB; // OUTPUT
			this->OQ = OQ; // OUTPUT
			this->SHIFTOUT1 = SHIFTOUT1; // OUTPUT
			this->SHIFTOUT2 = SHIFTOUT2; // OUTPUT
			this->TBYTEOUT = TBYTEOUT; // OUTPUT
			this->TFB = TFB; // OUTPUT
			this->TQ = TQ; // OUTPUT
			this->CLK = CLK; // INPUT
			this->CLKDIV = CLKDIV; // INPUT
			this->D1 = D1; // INPUT
			this->D2 = D2; // INPUT
			this->D3 = D3; // INPUT
			this->D4 = D4; // INPUT
			this->D5 = D5; // INPUT
			this->D6 = D6; // INPUT
			this->D7 = D7; // INPUT
			this->D8 = D8; // INPUT
			this->OCE = OCE; // INPUT
			this->RST = RST; // INPUT
			this->SHIFTIN1 = SHIFTIN1; // INPUT
			this->SHIFTIN2 = SHIFTIN2; // INPUT
			this->T1 = T1; // INPUT
			this->T2 = T2; // INPUT
			this->T3 = T3; // INPUT
			this->T4 = T4; // INPUT
			this->TBYTEIN = TBYTEIN; // INPUT
			this->TCE = TCE; // INPUT
		
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
