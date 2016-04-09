/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_ISERDES_NODELAY{

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
		parameter_string_t LOC;
		parameter_int_t NUM_CE;
		parameter_enum_t OFB_USED;
		parameter_string_t SERDES_MODE;
		parameter_int_t ffinp;
		parameter_int_t mxinp1;
		parameter_int_t mxinp2;
		parameter_int_t ffice;
		parameter_int_t mxice;
		parameter_int_t ffbsc;
		parameter_int_t mxbsc;
		parameter_int_t mxinp1_my;
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
		NetFlow* CLKB; // INPUT
		NetFlow* CLKDIV; // INPUT
		NetFlow* D; // INPUT
		NetFlow* DDLY; // INPUT
		NetFlow* OCLK; // INPUT
		NetFlow* OFB; // INPUT
		NetFlow* RST; // INPUT
		NetFlow* SHIFTIN1; // INPUT
		NetFlow* SHIFTIN2; // INPUT
		
	
		X_ISERDES_NODELAY(
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
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_int_t NUM_CE, // Default: 2
			parameter_enum_t OFB_USED, // Default: "FALSE"
			parameter_string_t SERDES_MODE, // Default: "MASTER"
			parameter_int_t ffinp, // Default: 300
			parameter_int_t mxinp1, // Default: 60
			parameter_int_t mxinp2, // Default: 120
			parameter_int_t ffice, // Default: 300
			parameter_int_t mxice, // Default: 60
			parameter_int_t ffbsc, // Default: 300
			parameter_int_t mxbsc, // Default: 60
			parameter_int_t mxinp1_my, // Default: 0
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
			NetFlow* CLKB, // INPUT
			NetFlow* CLKDIV, // INPUT
			NetFlow* D, // INPUT
			NetFlow* DDLY, // INPUT
			NetFlow* OCLK, // INPUT
			NetFlow* OFB, // INPUT
			NetFlow* RST, // INPUT
			NetFlow* SHIFTIN1, // INPUT
			NetFlow* SHIFTIN2 // INPUT
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
			this->LOC = LOC; // Default: "UNPLACED"
			this->NUM_CE = NUM_CE; // Default: 2
			this->OFB_USED = OFB_USED; // Default: "FALSE"
			this->SERDES_MODE = SERDES_MODE; // Default: "MASTER"
			this->ffinp = ffinp; // Default: 300
			this->mxinp1 = mxinp1; // Default: 60
			this->mxinp2 = mxinp2; // Default: 120
			this->ffice = ffice; // Default: 300
			this->mxice = mxice; // Default: 60
			this->ffbsc = ffbsc; // Default: 300
			this->mxbsc = mxbsc; // Default: 60
			this->mxinp1_my = mxinp1_my; // Default: 0
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
			this->CLKB = CLKB; // INPUT
			this->CLKDIV = CLKDIV; // INPUT
			this->D = D; // INPUT
			this->DDLY = DDLY; // INPUT
			this->OCLK = OCLK; // INPUT
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
