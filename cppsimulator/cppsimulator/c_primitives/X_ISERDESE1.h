/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_ISERDESE1: public Primitive{

		//Verilog Parameters:
		parameter_string_t DATA_RATE;
		parameter_string_t DATA_WIDTH;
		parameter_enum_t DYN_CLKDIV_INV_EN;
		parameter_enum_t DYN_CLK_INV_EN;
		parameter_string_t INIT_Q1;
		parameter_string_t INIT_Q2;
		parameter_string_t INIT_Q3;
		parameter_string_t INIT_Q4;
		parameter_string_t INTERFACE_TYPE;
		parameter_string_t NUM_CE;
		parameter_string_t IOBDELAY;
		parameter_enum_t OFB_USED;
		parameter_string_t SERDES_MODE;
		parameter_string_t SRVAL_Q1;
		parameter_string_t SRVAL_Q2;
		parameter_string_t SRVAL_Q3;
		parameter_string_t SRVAL_Q4;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* O; // net ID: O lsb: 0  msb: 0 OUTPUT
		NetFlow* Q1; // net ID: Q1 lsb: 0  msb: 0 OUTPUT
		NetFlow* Q2; // net ID: Q2 lsb: 0  msb: 0 OUTPUT
		NetFlow* Q3; // net ID: Q3 lsb: 0  msb: 0 OUTPUT
		NetFlow* Q4; // net ID: Q4 lsb: 0  msb: 0 OUTPUT
		NetFlow* Q5; // net ID: Q5 lsb: 0  msb: 0 OUTPUT
		NetFlow* Q6; // net ID: Q6 lsb: 0  msb: 0 OUTPUT
		NetFlow* SHIFTOUT1; // net ID: SHIFTOUT1 lsb: 0  msb: 0 OUTPUT
		NetFlow* SHIFTOUT2; // net ID: SHIFTOUT2 lsb: 0  msb: 0 OUTPUT
		NetFlow* BITSLIP; // net ID: BITSLIP lsb: 0  msb: 0 INPUT
		NetFlow* CE1; // net ID: CE1 lsb: 0  msb: 0 INPUT
		NetFlow* CE2; // net ID: CE2 lsb: 0  msb: 0 INPUT
		NetFlow* CLK; // net ID: CLK lsb: 0  msb: 0 INPUT
		NetFlow* CLKB; // net ID: CLKB lsb: 0  msb: 0 INPUT
		NetFlow* CLKDIV; // net ID: CLKDIV lsb: 0  msb: 0 INPUT
		NetFlow* D; // net ID: D lsb: 0  msb: 0 INPUT
		NetFlow* DDLY; // net ID: DDLY lsb: 0  msb: 0 INPUT
		NetFlow* DYNCLKDIVSEL; // net ID: DYNCLKDIVSEL lsb: 0  msb: 0 INPUT
		NetFlow* DYNCLKSEL; // net ID: DYNCLKSEL lsb: 0  msb: 0 INPUT
		NetFlow* OCLK; // net ID: OCLK lsb: 0  msb: 0 INPUT
		NetFlow* OFB; // net ID: OFB lsb: 0  msb: 0 INPUT
		NetFlow* RST; // net ID: RST lsb: 0  msb: 0 INPUT
		NetFlow* SHIFTIN1; // net ID: SHIFTIN1 lsb: 0  msb: 0 INPUT
		NetFlow* SHIFTIN2; // net ID: SHIFTIN2 lsb: 0  msb: 0 INPUT
		
		X_ISERDESE1(
			const char * name,
			//Verilog Parameters:
			parameter_string_t DATA_RATE, // Default: "DDR"
			parameter_string_t DATA_WIDTH, // Default: 4
			parameter_enum_t DYN_CLKDIV_INV_EN, // Default: "FALSE"
			parameter_enum_t DYN_CLK_INV_EN, // Default: "FALSE"
			parameter_string_t INIT_Q1, // Default: 1'b0
			parameter_string_t INIT_Q2, // Default: 1'b0
			parameter_string_t INIT_Q3, // Default: 1'b0
			parameter_string_t INIT_Q4, // Default: 1'b0
			parameter_string_t INTERFACE_TYPE, // Default: "MEMORY"
			parameter_string_t NUM_CE, // Default: 2
			parameter_string_t IOBDELAY, // Default: "NONE"
			parameter_enum_t OFB_USED, // Default: "FALSE"
			parameter_string_t SERDES_MODE, // Default: "MASTER"
			parameter_string_t SRVAL_Q1, // Default: 1'b0
			parameter_string_t SRVAL_Q2, // Default: 1'b0
			parameter_string_t SRVAL_Q3, // Default: 1'b0
			parameter_string_t SRVAL_Q4, // Default: 1'b0
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* O, // net ID: O lsb: 0  msb: 0 OUTPUT
			NetFlow* Q1, // net ID: Q1 lsb: 0  msb: 0 OUTPUT
			NetFlow* Q2, // net ID: Q2 lsb: 0  msb: 0 OUTPUT
			NetFlow* Q3, // net ID: Q3 lsb: 0  msb: 0 OUTPUT
			NetFlow* Q4, // net ID: Q4 lsb: 0  msb: 0 OUTPUT
			NetFlow* Q5, // net ID: Q5 lsb: 0  msb: 0 OUTPUT
			NetFlow* Q6, // net ID: Q6 lsb: 0  msb: 0 OUTPUT
			NetFlow* SHIFTOUT1, // net ID: SHIFTOUT1 lsb: 0  msb: 0 OUTPUT
			NetFlow* SHIFTOUT2, // net ID: SHIFTOUT2 lsb: 0  msb: 0 OUTPUT
			NetFlow* BITSLIP, // net ID: BITSLIP lsb: 0  msb: 0 INPUT
			NetFlow* CE1, // net ID: CE1 lsb: 0  msb: 0 INPUT
			NetFlow* CE2, // net ID: CE2 lsb: 0  msb: 0 INPUT
			NetFlow* CLK, // net ID: CLK lsb: 0  msb: 0 INPUT
			NetFlow* CLKB, // net ID: CLKB lsb: 0  msb: 0 INPUT
			NetFlow* CLKDIV, // net ID: CLKDIV lsb: 0  msb: 0 INPUT
			NetFlow* D, // net ID: D lsb: 0  msb: 0 INPUT
			NetFlow* DDLY, // net ID: DDLY lsb: 0  msb: 0 INPUT
			NetFlow* DYNCLKDIVSEL, // net ID: DYNCLKDIVSEL lsb: 0  msb: 0 INPUT
			NetFlow* DYNCLKSEL, // net ID: DYNCLKSEL lsb: 0  msb: 0 INPUT
			NetFlow* OCLK, // net ID: OCLK lsb: 0  msb: 0 INPUT
			NetFlow* OFB, // net ID: OFB lsb: 0  msb: 0 INPUT
			NetFlow* RST, // net ID: RST lsb: 0  msb: 0 INPUT
			NetFlow* SHIFTIN1, // net ID: SHIFTIN1 lsb: 0  msb: 0 INPUT
			NetFlow* SHIFTIN2 // net ID: SHIFTIN2 lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
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
			this->NUM_CE = NUM_CE; // Default: 2
			this->IOBDELAY = IOBDELAY; // Default: "NONE"
			this->OFB_USED = OFB_USED; // Default: "FALSE"
			this->SERDES_MODE = SERDES_MODE; // Default: "MASTER"
			this->SRVAL_Q1 = SRVAL_Q1; // Default: 1'b0
			this->SRVAL_Q2 = SRVAL_Q2; // Default: 1'b0
			this->SRVAL_Q3 = SRVAL_Q3; // Default: 1'b0
			this->SRVAL_Q4 = SRVAL_Q4; // Default: 1'b0
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->O = O; // net ID: O lsb: 0  msb: 0 OUTPUT
			this->Q1 = Q1; // net ID: Q1 lsb: 0  msb: 0 OUTPUT
			this->Q2 = Q2; // net ID: Q2 lsb: 0  msb: 0 OUTPUT
			this->Q3 = Q3; // net ID: Q3 lsb: 0  msb: 0 OUTPUT
			this->Q4 = Q4; // net ID: Q4 lsb: 0  msb: 0 OUTPUT
			this->Q5 = Q5; // net ID: Q5 lsb: 0  msb: 0 OUTPUT
			this->Q6 = Q6; // net ID: Q6 lsb: 0  msb: 0 OUTPUT
			this->SHIFTOUT1 = SHIFTOUT1; // net ID: SHIFTOUT1 lsb: 0  msb: 0 OUTPUT
			this->SHIFTOUT2 = SHIFTOUT2; // net ID: SHIFTOUT2 lsb: 0  msb: 0 OUTPUT
			this->BITSLIP = BITSLIP; // net ID: BITSLIP lsb: 0  msb: 0 INPUT
			this->CE1 = CE1; // net ID: CE1 lsb: 0  msb: 0 INPUT
			this->CE2 = CE2; // net ID: CE2 lsb: 0  msb: 0 INPUT
			this->CLK = CLK; // net ID: CLK lsb: 0  msb: 0 INPUT
			this->CLKB = CLKB; // net ID: CLKB lsb: 0  msb: 0 INPUT
			this->CLKDIV = CLKDIV; // net ID: CLKDIV lsb: 0  msb: 0 INPUT
			this->D = D; // net ID: D lsb: 0  msb: 0 INPUT
			this->DDLY = DDLY; // net ID: DDLY lsb: 0  msb: 0 INPUT
			this->DYNCLKDIVSEL = DYNCLKDIVSEL; // net ID: DYNCLKDIVSEL lsb: 0  msb: 0 INPUT
			this->DYNCLKSEL = DYNCLKSEL; // net ID: DYNCLKSEL lsb: 0  msb: 0 INPUT
			this->OCLK = OCLK; // net ID: OCLK lsb: 0  msb: 0 INPUT
			this->OFB = OFB; // net ID: OFB lsb: 0  msb: 0 INPUT
			this->RST = RST; // net ID: RST lsb: 0  msb: 0 INPUT
			this->SHIFTIN1 = SHIFTIN1; // net ID: SHIFTIN1 lsb: 0  msb: 0 INPUT
			this->SHIFTIN2 = SHIFTIN2; // net ID: SHIFTIN2 lsb: 0  msb: 0 INPUT
			
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
