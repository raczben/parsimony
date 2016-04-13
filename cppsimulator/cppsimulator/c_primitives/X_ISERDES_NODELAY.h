/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_ISERDES_NODELAY: public Primitive{

		//Verilog Parameters:
		parameter_enum_t BITSLIP_ENABLE;
		parameter_string_t DATA_RATE;
		parameter_string_t DATA_WIDTH;
		parameter_string_t INIT_Q1;
		parameter_string_t INIT_Q2;
		parameter_string_t INIT_Q3;
		parameter_string_t INIT_Q4;
		parameter_string_t INTERFACE_TYPE;
		parameter_string_t IOBDELAY;
		parameter_string_t LOC;
		parameter_string_t NUM_CE;
		parameter_enum_t OFB_USED;
		parameter_string_t SERDES_MODE;
		parameter_string_t ffinp;
		parameter_string_t mxinp1;
		parameter_string_t mxinp2;
		parameter_string_t ffice;
		parameter_string_t mxice;
		parameter_string_t ffbsc;
		parameter_string_t mxbsc;
		parameter_string_t mxinp1_my;
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
		NetFlow* OCLK; // net ID: OCLK lsb: 0  msb: 0 INPUT
		NetFlow* OFB; // net ID: OFB lsb: 0  msb: 0 INPUT
		NetFlow* RST; // net ID: RST lsb: 0  msb: 0 INPUT
		NetFlow* SHIFTIN1; // net ID: SHIFTIN1 lsb: 0  msb: 0 INPUT
		NetFlow* SHIFTIN2; // net ID: SHIFTIN2 lsb: 0  msb: 0 INPUT
		
		X_ISERDES_NODELAY(
			const char * name,
			//Verilog Parameters:
			parameter_enum_t BITSLIP_ENABLE, // Default: "FALSE"
			parameter_string_t DATA_RATE, // Default: "DDR"
			parameter_string_t DATA_WIDTH, // Default: 4
			parameter_string_t INIT_Q1, // Default: 1'b0
			parameter_string_t INIT_Q2, // Default: 1'b0
			parameter_string_t INIT_Q3, // Default: 1'b0
			parameter_string_t INIT_Q4, // Default: 1'b0
			parameter_string_t INTERFACE_TYPE, // Default: "MEMORY"
			parameter_string_t IOBDELAY, // Default: "NONE"
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_string_t NUM_CE, // Default: 2
			parameter_enum_t OFB_USED, // Default: "FALSE"
			parameter_string_t SERDES_MODE, // Default: "MASTER"
			parameter_string_t ffinp, // Default: 300
			parameter_string_t mxinp1, // Default: 60
			parameter_string_t mxinp2, // Default: 120
			parameter_string_t ffice, // Default: 300
			parameter_string_t mxice, // Default: 60
			parameter_string_t ffbsc, // Default: 300
			parameter_string_t mxbsc, // Default: 60
			parameter_string_t mxinp1_my, // Default: 0
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
			NetFlow* OCLK, // net ID: OCLK lsb: 0  msb: 0 INPUT
			NetFlow* OFB, // net ID: OFB lsb: 0  msb: 0 INPUT
			NetFlow* RST, // net ID: RST lsb: 0  msb: 0 INPUT
			NetFlow* SHIFTIN1, // net ID: SHIFTIN1 lsb: 0  msb: 0 INPUT
			NetFlow* SHIFTIN2 // net ID: SHIFTIN2 lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
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
