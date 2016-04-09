/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_OSERDES{

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
		parameter_int_t TRISTATE_WIDTH;
		//Verilog Ports in definition order:
		NetFlow* OQ; // OUTPUT
		NetFlow* SHIFTOUT1; // OUTPUT
		NetFlow* SHIFTOUT2; // OUTPUT
		NetFlow* TQ; // OUTPUT
		NetFlow* CLK; // INPUT
		NetFlow* CLKDIV; // INPUT
		NetFlow* D1; // INPUT
		NetFlow* D2; // INPUT
		NetFlow* D3; // INPUT
		NetFlow* D4; // INPUT
		NetFlow* D5; // INPUT
		NetFlow* D6; // INPUT
		NetFlow* OCE; // INPUT
		NetFlow* REV; // INPUT
		NetFlow* SHIFTIN1; // INPUT
		NetFlow* SHIFTIN2; // INPUT
		NetFlow* SR; // INPUT
		NetFlow* T1; // INPUT
		NetFlow* T2; // INPUT
		NetFlow* T3; // INPUT
		NetFlow* T4; // INPUT
		NetFlow* TCE; // INPUT
		
	
		X_OSERDES(
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
			parameter_int_t TRISTATE_WIDTH, // Default: 4
			//Verilog Ports in definition order:
			NetFlow* OQ, // OUTPUT
			NetFlow* SHIFTOUT1, // OUTPUT
			NetFlow* SHIFTOUT2, // OUTPUT
			NetFlow* TQ, // OUTPUT
			NetFlow* CLK, // INPUT
			NetFlow* CLKDIV, // INPUT
			NetFlow* D1, // INPUT
			NetFlow* D2, // INPUT
			NetFlow* D3, // INPUT
			NetFlow* D4, // INPUT
			NetFlow* D5, // INPUT
			NetFlow* D6, // INPUT
			NetFlow* OCE, // INPUT
			NetFlow* REV, // INPUT
			NetFlow* SHIFTIN1, // INPUT
			NetFlow* SHIFTIN2, // INPUT
			NetFlow* SR, // INPUT
			NetFlow* T1, // INPUT
			NetFlow* T2, // INPUT
			NetFlow* T3, // INPUT
			NetFlow* T4, // INPUT
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
			this->TRISTATE_WIDTH = TRISTATE_WIDTH; // Default: 4
			//Verilog Ports in definition order:
			this->OQ = OQ; // OUTPUT
			this->SHIFTOUT1 = SHIFTOUT1; // OUTPUT
			this->SHIFTOUT2 = SHIFTOUT2; // OUTPUT
			this->TQ = TQ; // OUTPUT
			this->CLK = CLK; // INPUT
			this->CLKDIV = CLKDIV; // INPUT
			this->D1 = D1; // INPUT
			this->D2 = D2; // INPUT
			this->D3 = D3; // INPUT
			this->D4 = D4; // INPUT
			this->D5 = D5; // INPUT
			this->D6 = D6; // INPUT
			this->OCE = OCE; // INPUT
			this->REV = REV; // INPUT
			this->SHIFTIN1 = SHIFTIN1; // INPUT
			this->SHIFTIN2 = SHIFTIN2; // INPUT
			this->SR = SR; // INPUT
			this->T1 = T1; // INPUT
			this->T2 = T2; // INPUT
			this->T3 = T3; // INPUT
			this->T4 = T4; // INPUT
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
