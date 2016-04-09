/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_ISERDESE2{

		//Verilog Parameters:
		parameter_string_t DATA_RATE;
		parameter_int_t DATA_WIDTH;
		parameter_enum_t DYN_CLKDIV_INV_EN;
		parameter_enum_t DYN_CLK_INV_EN;
		parameter_int_t INIT_Q1;
		parameter_int_t INIT_Q2;
		parameter_int_t INIT_Q3;
		parameter_int_t INIT_Q4;
		parameter_string_t INTERFACE_TYPE;
		parameter_string_t IOBDELAY;
		parameter_string_t LOC;
		parameter_int_t NUM_CE;
		parameter_enum_t OFB_USED;
		parameter_string_t SERDES_MODE;
		parameter_int_t SRVAL_Q1;
		parameter_int_t SRVAL_Q2;
		parameter_int_t SRVAL_Q3;
		parameter_int_t SRVAL_Q4;
		//Verilog Ports in definition order:
		NetFlow* O; // OUTPUT
		NetFlow* Q1; // OUTPUT
		NetFlow* Q2; // OUTPUT
		NetFlow* Q3; // OUTPUT
		NetFlow* Q4; // OUTPUT
		NetFlow* Q5; // OUTPUT
		NetFlow* Q6; // OUTPUT
		NetFlow* Q7; // OUTPUT
		NetFlow* Q8; // OUTPUT
		NetFlow* SHIFTOUT1; // OUTPUT
		NetFlow* SHIFTOUT2; // OUTPUT
		NetFlow* BITSLIP; // INPUT
		NetFlow* CE1; // INPUT
		NetFlow* CE2; // INPUT
		NetFlow* CLK; // INPUT
		NetFlow* CLKB; // INPUT
		NetFlow* CLKDIV; // INPUT
		NetFlow* CLKDIVP; // INPUT
		NetFlow* D; // INPUT
		NetFlow* DDLY; // INPUT
		NetFlow* DYNCLKDIVSEL; // INPUT
		NetFlow* DYNCLKSEL; // INPUT
		NetFlow* OCLK; // INPUT
		NetFlow* OCLKB; // INPUT
		NetFlow* OFB; // INPUT
		NetFlow* RST; // INPUT
		NetFlow* SHIFTIN1; // INPUT
		NetFlow* SHIFTIN2; // INPUT
		
	
		X_ISERDESE2(
			//Verilog Parameters:
			parameter_string_t DATA_RATE, // Default: "DDR"
			parameter_int_t DATA_WIDTH, // Default: 4
			parameter_enum_t DYN_CLKDIV_INV_EN, // Default: "FALSE"
			parameter_enum_t DYN_CLK_INV_EN, // Default: "FALSE"
			parameter_int_t INIT_Q1, // Default: 1'b0
			parameter_int_t INIT_Q2, // Default: 1'b0
			parameter_int_t INIT_Q3, // Default: 1'b0
			parameter_int_t INIT_Q4, // Default: 1'b0
			parameter_string_t INTERFACE_TYPE, // Default: "MEMORY"
			parameter_string_t IOBDELAY, // Default: "NONE"
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_int_t NUM_CE, // Default: 2
			parameter_enum_t OFB_USED, // Default: "FALSE"
			parameter_string_t SERDES_MODE, // Default: "MASTER"
			parameter_int_t SRVAL_Q1, // Default: 1'b0
			parameter_int_t SRVAL_Q2, // Default: 1'b0
			parameter_int_t SRVAL_Q3, // Default: 1'b0
			parameter_int_t SRVAL_Q4, // Default: 1'b0
			//Verilog Ports in definition order:
			NetFlow* O, // OUTPUT
			NetFlow* Q1, // OUTPUT
			NetFlow* Q2, // OUTPUT
			NetFlow* Q3, // OUTPUT
			NetFlow* Q4, // OUTPUT
			NetFlow* Q5, // OUTPUT
			NetFlow* Q6, // OUTPUT
			NetFlow* Q7, // OUTPUT
			NetFlow* Q8, // OUTPUT
			NetFlow* SHIFTOUT1, // OUTPUT
			NetFlow* SHIFTOUT2, // OUTPUT
			NetFlow* BITSLIP, // INPUT
			NetFlow* CE1, // INPUT
			NetFlow* CE2, // INPUT
			NetFlow* CLK, // INPUT
			NetFlow* CLKB, // INPUT
			NetFlow* CLKDIV, // INPUT
			NetFlow* CLKDIVP, // INPUT
			NetFlow* D, // INPUT
			NetFlow* DDLY, // INPUT
			NetFlow* DYNCLKDIVSEL, // INPUT
			NetFlow* DYNCLKSEL, // INPUT
			NetFlow* OCLK, // INPUT
			NetFlow* OCLKB, // INPUT
			NetFlow* OFB, // INPUT
			NetFlow* RST, // INPUT
			NetFlow* SHIFTIN1, // INPUT
			NetFlow* SHIFTIN2 // INPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->DATA_RATE = DATA_RATE; // Default: "DDR"
			this->DATA_WIDTH = DATA_WIDTH; // Default: 4
			this->DYN_CLKDIV_INV_EN = DYN_CLKDIV_INV_EN; // Default: "FALSE"
			this->DYN_CLK_INV_EN = DYN_CLK_INV_EN; // Default: "FALSE"
			this->INIT_Q1 = INIT_Q1; // Default: 1'b0
			this->INIT_Q2 = INIT_Q2; // Default: 1'b0
			this->INIT_Q3 = INIT_Q3; // Default: 1'b0
			this->INIT_Q4 = INIT_Q4; // Default: 1'b0
			this->INTERFACE_TYPE = INTERFACE_TYPE; // Default: "MEMORY"
			this->IOBDELAY = IOBDELAY; // Default: "NONE"
			this->LOC = LOC; // Default: "UNPLACED"
			this->NUM_CE = NUM_CE; // Default: 2
			this->OFB_USED = OFB_USED; // Default: "FALSE"
			this->SERDES_MODE = SERDES_MODE; // Default: "MASTER"
			this->SRVAL_Q1 = SRVAL_Q1; // Default: 1'b0
			this->SRVAL_Q2 = SRVAL_Q2; // Default: 1'b0
			this->SRVAL_Q3 = SRVAL_Q3; // Default: 1'b0
			this->SRVAL_Q4 = SRVAL_Q4; // Default: 1'b0
			//Verilog Ports in definition order:
			this->O = O; // OUTPUT
			this->Q1 = Q1; // OUTPUT
			this->Q2 = Q2; // OUTPUT
			this->Q3 = Q3; // OUTPUT
			this->Q4 = Q4; // OUTPUT
			this->Q5 = Q5; // OUTPUT
			this->Q6 = Q6; // OUTPUT
			this->Q7 = Q7; // OUTPUT
			this->Q8 = Q8; // OUTPUT
			this->SHIFTOUT1 = SHIFTOUT1; // OUTPUT
			this->SHIFTOUT2 = SHIFTOUT2; // OUTPUT
			this->BITSLIP = BITSLIP; // INPUT
			this->CE1 = CE1; // INPUT
			this->CE2 = CE2; // INPUT
			this->CLK = CLK; // INPUT
			this->CLKB = CLKB; // INPUT
			this->CLKDIV = CLKDIV; // INPUT
			this->CLKDIVP = CLKDIVP; // INPUT
			this->D = D; // INPUT
			this->DDLY = DDLY; // INPUT
			this->DYNCLKDIVSEL = DYNCLKDIVSEL; // INPUT
			this->DYNCLKSEL = DYNCLKSEL; // INPUT
			this->OCLK = OCLK; // INPUT
			this->OCLKB = OCLKB; // INPUT
			this->OFB = OFB; // INPUT
			this->RST = RST; // INPUT
			this->SHIFTIN1 = SHIFTIN1; // INPUT
			this->SHIFTIN2 = SHIFTIN2; // INPUT
		
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
