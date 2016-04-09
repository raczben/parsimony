/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_ISERDES{

		//Verilog Parameters:
		parameter_enum_t BITSLIP_ENABLE;
		parameter_string_t DATA_RATE;
		parameter_int_t DATA_WIDTH;
		parameter_int_t INIT_Q1;
		parameter_int_t INIT_Q2;
		parameter_int_t INIT_Q3;
		parameter_int_t INIT_Q4;
		parameter_string_t INTERFACE_TYPE;
		parameter_string_t IOBDELAY;
		parameter_string_t IOBDELAY_TYPE;
		parameter_int_t IOBDELAY_VALUE;
		parameter_int_t NUM_CE;
		parameter_string_t SERDES_MODE;
		parameter_int_t SIM_DELAY_D;
		parameter_int_t SIM_SETUP_D_CLK;
		parameter_int_t SIM_HOLD_D_CLK;
		parameter_int_t SRVAL_Q1;
		parameter_int_t SRVAL_Q2;
		parameter_int_t SRVAL_Q3;
		parameter_int_t SRVAL_Q4;
		parameter_string_t LOC;
		parameter_int_t SIM_TAPDELAY_VALUE;
		//Verilog Ports in definition order:
		NetFlow* O; // OUTPUT
		NetFlow* Q1; // OUTPUT
		NetFlow* Q2; // OUTPUT
		NetFlow* Q3; // OUTPUT
		NetFlow* Q4; // OUTPUT
		NetFlow* Q5; // OUTPUT
		NetFlow* Q6; // OUTPUT
		NetFlow* SHIFTOUT1; // OUTPUT
		NetFlow* SHIFTOUT2; // OUTPUT
		NetFlow* BITSLIP; // INPUT
		NetFlow* CE1; // INPUT
		NetFlow* CE2; // INPUT
		NetFlow* CLK; // INPUT
		NetFlow* CLKDIV; // INPUT
		NetFlow* D; // INPUT
		NetFlow* DLYCE; // INPUT
		NetFlow* DLYINC; // INPUT
		NetFlow* DLYRST; // INPUT
		NetFlow* OCLK; // INPUT
		NetFlow* REV; // INPUT
		NetFlow* SHIFTIN1; // INPUT
		NetFlow* SHIFTIN2; // INPUT
		NetFlow* SR; // INPUT
		
	
		X_ISERDES(
			//Verilog Parameters:
			parameter_enum_t BITSLIP_ENABLE, // Default: "FALSE"
			parameter_string_t DATA_RATE, // Default: "DDR"
			parameter_int_t DATA_WIDTH, // Default: 4
			parameter_int_t INIT_Q1, // Default: 1'b0
			parameter_int_t INIT_Q2, // Default: 1'b0
			parameter_int_t INIT_Q3, // Default: 1'b0
			parameter_int_t INIT_Q4, // Default: 1'b0
			parameter_string_t INTERFACE_TYPE, // Default: "MEMORY"
			parameter_string_t IOBDELAY, // Default: "NONE"
			parameter_string_t IOBDELAY_TYPE, // Default: "DEFAULT"
			parameter_int_t IOBDELAY_VALUE, // Default: 0
			parameter_int_t NUM_CE, // Default: 2
			parameter_string_t SERDES_MODE, // Default: "MASTER"
			parameter_int_t SIM_DELAY_D, // Default: 0
			parameter_int_t SIM_SETUP_D_CLK, // Default: 0
			parameter_int_t SIM_HOLD_D_CLK, // Default: 0
			parameter_int_t SRVAL_Q1, // Default: 1'b0
			parameter_int_t SRVAL_Q2, // Default: 1'b0
			parameter_int_t SRVAL_Q3, // Default: 1'b0
			parameter_int_t SRVAL_Q4, // Default: 1'b0
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_int_t SIM_TAPDELAY_VALUE, // Default: 75
			//Verilog Ports in definition order:
			NetFlow* O, // OUTPUT
			NetFlow* Q1, // OUTPUT
			NetFlow* Q2, // OUTPUT
			NetFlow* Q3, // OUTPUT
			NetFlow* Q4, // OUTPUT
			NetFlow* Q5, // OUTPUT
			NetFlow* Q6, // OUTPUT
			NetFlow* SHIFTOUT1, // OUTPUT
			NetFlow* SHIFTOUT2, // OUTPUT
			NetFlow* BITSLIP, // INPUT
			NetFlow* CE1, // INPUT
			NetFlow* CE2, // INPUT
			NetFlow* CLK, // INPUT
			NetFlow* CLKDIV, // INPUT
			NetFlow* D, // INPUT
			NetFlow* DLYCE, // INPUT
			NetFlow* DLYINC, // INPUT
			NetFlow* DLYRST, // INPUT
			NetFlow* OCLK, // INPUT
			NetFlow* REV, // INPUT
			NetFlow* SHIFTIN1, // INPUT
			NetFlow* SHIFTIN2, // INPUT
			NetFlow* SR // INPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->BITSLIP_ENABLE = BITSLIP_ENABLE; // Default: "FALSE"
			this->DATA_RATE = DATA_RATE; // Default: "DDR"
			this->DATA_WIDTH = DATA_WIDTH; // Default: 4
			this->INIT_Q1 = INIT_Q1; // Default: 1'b0
			this->INIT_Q2 = INIT_Q2; // Default: 1'b0
			this->INIT_Q3 = INIT_Q3; // Default: 1'b0
			this->INIT_Q4 = INIT_Q4; // Default: 1'b0
			this->INTERFACE_TYPE = INTERFACE_TYPE; // Default: "MEMORY"
			this->IOBDELAY = IOBDELAY; // Default: "NONE"
			this->IOBDELAY_TYPE = IOBDELAY_TYPE; // Default: "DEFAULT"
			this->IOBDELAY_VALUE = IOBDELAY_VALUE; // Default: 0
			this->NUM_CE = NUM_CE; // Default: 2
			this->SERDES_MODE = SERDES_MODE; // Default: "MASTER"
			this->SIM_DELAY_D = SIM_DELAY_D; // Default: 0
			this->SIM_SETUP_D_CLK = SIM_SETUP_D_CLK; // Default: 0
			this->SIM_HOLD_D_CLK = SIM_HOLD_D_CLK; // Default: 0
			this->SRVAL_Q1 = SRVAL_Q1; // Default: 1'b0
			this->SRVAL_Q2 = SRVAL_Q2; // Default: 1'b0
			this->SRVAL_Q3 = SRVAL_Q3; // Default: 1'b0
			this->SRVAL_Q4 = SRVAL_Q4; // Default: 1'b0
			this->LOC = LOC; // Default: "UNPLACED"
			this->SIM_TAPDELAY_VALUE = SIM_TAPDELAY_VALUE; // Default: 75
			//Verilog Ports in definition order:
			this->O = O; // OUTPUT
			this->Q1 = Q1; // OUTPUT
			this->Q2 = Q2; // OUTPUT
			this->Q3 = Q3; // OUTPUT
			this->Q4 = Q4; // OUTPUT
			this->Q5 = Q5; // OUTPUT
			this->Q6 = Q6; // OUTPUT
			this->SHIFTOUT1 = SHIFTOUT1; // OUTPUT
			this->SHIFTOUT2 = SHIFTOUT2; // OUTPUT
			this->BITSLIP = BITSLIP; // INPUT
			this->CE1 = CE1; // INPUT
			this->CE2 = CE2; // INPUT
			this->CLK = CLK; // INPUT
			this->CLKDIV = CLKDIV; // INPUT
			this->D = D; // INPUT
			this->DLYCE = DLYCE; // INPUT
			this->DLYINC = DLYINC; // INPUT
			this->DLYRST = DLYRST; // INPUT
			this->OCLK = OCLK; // INPUT
			this->REV = REV; // INPUT
			this->SHIFTIN1 = SHIFTIN1; // INPUT
			this->SHIFTIN2 = SHIFTIN2; // INPUT
			this->SR = SR; // INPUT
		
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
