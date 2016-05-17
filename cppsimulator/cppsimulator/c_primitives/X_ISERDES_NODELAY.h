/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_ISERDES_NODELAY_H
#define X_ISERDES_NODELAY_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_ISERDES_NODELAY: public Primitive{

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
		NetFlow* O_A0_B; // net ID: O lsb: 0  msb: 0 OUTPUT
		NetFlow* Q1_A0_B; // net ID: Q1 lsb: 0  msb: 0 OUTPUT
		NetFlow* Q2_A0_B; // net ID: Q2 lsb: 0  msb: 0 OUTPUT
		NetFlow* Q3_A0_B; // net ID: Q3 lsb: 0  msb: 0 OUTPUT
		NetFlow* Q4_A0_B; // net ID: Q4 lsb: 0  msb: 0 OUTPUT
		NetFlow* Q5_A0_B; // net ID: Q5 lsb: 0  msb: 0 OUTPUT
		NetFlow* Q6_A0_B; // net ID: Q6 lsb: 0  msb: 0 OUTPUT
		NetFlow* SHIFTOUT1_A0_B; // net ID: SHIFTOUT1 lsb: 0  msb: 0 OUTPUT
		NetFlow* SHIFTOUT2_A0_B; // net ID: SHIFTOUT2 lsb: 0  msb: 0 OUTPUT
		NetFlow* BITSLIP_A0_B; // net ID: BITSLIP lsb: 0  msb: 0 INPUT
		NetFlow* CE1_A0_B; // net ID: CE1 lsb: 0  msb: 0 INPUT
		NetFlow* CE2_A0_B; // net ID: CE2 lsb: 0  msb: 0 INPUT
		NetFlow* CLK_A0_B; // net ID: CLK lsb: 0  msb: 0 INPUT
		NetFlow* CLKB_A0_B; // net ID: CLKB lsb: 0  msb: 0 INPUT
		NetFlow* CLKDIV_A0_B; // net ID: CLKDIV lsb: 0  msb: 0 INPUT
		NetFlow* D_A0_B; // net ID: D lsb: 0  msb: 0 INPUT
		NetFlow* DDLY_A0_B; // net ID: DDLY lsb: 0  msb: 0 INPUT
		NetFlow* OCLK_A0_B; // net ID: OCLK lsb: 0  msb: 0 INPUT
		NetFlow* OFB_A0_B; // net ID: OFB lsb: 0  msb: 0 INPUT
		NetFlow* RST_A0_B; // net ID: RST lsb: 0  msb: 0 INPUT
		NetFlow* SHIFTIN1_A0_B; // net ID: SHIFTIN1 lsb: 0  msb: 0 INPUT
		NetFlow* SHIFTIN2_A0_B; // net ID: SHIFTIN2 lsb: 0  msb: 0 INPUT
		
		public: X_ISERDES_NODELAY(
			const char * name,
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
			NetFlow* O_A0_B, // net ID: O lsb: 0  msb: 0 OUTPUT
			NetFlow* Q1_A0_B, // net ID: Q1 lsb: 0  msb: 0 OUTPUT
			NetFlow* Q2_A0_B, // net ID: Q2 lsb: 0  msb: 0 OUTPUT
			NetFlow* Q3_A0_B, // net ID: Q3 lsb: 0  msb: 0 OUTPUT
			NetFlow* Q4_A0_B, // net ID: Q4 lsb: 0  msb: 0 OUTPUT
			NetFlow* Q5_A0_B, // net ID: Q5 lsb: 0  msb: 0 OUTPUT
			NetFlow* Q6_A0_B, // net ID: Q6 lsb: 0  msb: 0 OUTPUT
			NetFlow* SHIFTOUT1_A0_B, // net ID: SHIFTOUT1 lsb: 0  msb: 0 OUTPUT
			NetFlow* SHIFTOUT2_A0_B, // net ID: SHIFTOUT2 lsb: 0  msb: 0 OUTPUT
			NetFlow* BITSLIP_A0_B, // net ID: BITSLIP lsb: 0  msb: 0 INPUT
			NetFlow* CE1_A0_B, // net ID: CE1 lsb: 0  msb: 0 INPUT
			NetFlow* CE2_A0_B, // net ID: CE2 lsb: 0  msb: 0 INPUT
			NetFlow* CLK_A0_B, // net ID: CLK lsb: 0  msb: 0 INPUT
			NetFlow* CLKB_A0_B, // net ID: CLKB lsb: 0  msb: 0 INPUT
			NetFlow* CLKDIV_A0_B, // net ID: CLKDIV lsb: 0  msb: 0 INPUT
			NetFlow* D_A0_B, // net ID: D lsb: 0  msb: 0 INPUT
			NetFlow* DDLY_A0_B, // net ID: DDLY lsb: 0  msb: 0 INPUT
			NetFlow* OCLK_A0_B, // net ID: OCLK lsb: 0  msb: 0 INPUT
			NetFlow* OFB_A0_B, // net ID: OFB lsb: 0  msb: 0 INPUT
			NetFlow* RST_A0_B, // net ID: RST lsb: 0  msb: 0 INPUT
			NetFlow* SHIFTIN1_A0_B, // net ID: SHIFTIN1 lsb: 0  msb: 0 INPUT
			NetFlow* SHIFTIN2_A0_B // net ID: SHIFTIN2 lsb: 0  msb: 0 INPUT
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
			this->O_A0_B = O_A0_B; // net ID: O lsb: 0  msb: 0 OUTPUT
			this->Q1_A0_B = Q1_A0_B; // net ID: Q1 lsb: 0  msb: 0 OUTPUT
			this->Q2_A0_B = Q2_A0_B; // net ID: Q2 lsb: 0  msb: 0 OUTPUT
			this->Q3_A0_B = Q3_A0_B; // net ID: Q3 lsb: 0  msb: 0 OUTPUT
			this->Q4_A0_B = Q4_A0_B; // net ID: Q4 lsb: 0  msb: 0 OUTPUT
			this->Q5_A0_B = Q5_A0_B; // net ID: Q5 lsb: 0  msb: 0 OUTPUT
			this->Q6_A0_B = Q6_A0_B; // net ID: Q6 lsb: 0  msb: 0 OUTPUT
			this->SHIFTOUT1_A0_B = SHIFTOUT1_A0_B; // net ID: SHIFTOUT1 lsb: 0  msb: 0 OUTPUT
			this->SHIFTOUT2_A0_B = SHIFTOUT2_A0_B; // net ID: SHIFTOUT2 lsb: 0  msb: 0 OUTPUT
			this->BITSLIP_A0_B = BITSLIP_A0_B; // net ID: BITSLIP lsb: 0  msb: 0 INPUT
			this->CE1_A0_B = CE1_A0_B; // net ID: CE1 lsb: 0  msb: 0 INPUT
			this->CE2_A0_B = CE2_A0_B; // net ID: CE2 lsb: 0  msb: 0 INPUT
			this->CLK_A0_B = CLK_A0_B; // net ID: CLK lsb: 0  msb: 0 INPUT
			this->CLKB_A0_B = CLKB_A0_B; // net ID: CLKB lsb: 0  msb: 0 INPUT
			this->CLKDIV_A0_B = CLKDIV_A0_B; // net ID: CLKDIV lsb: 0  msb: 0 INPUT
			this->D_A0_B = D_A0_B; // net ID: D lsb: 0  msb: 0 INPUT
			this->DDLY_A0_B = DDLY_A0_B; // net ID: DDLY lsb: 0  msb: 0 INPUT
			this->OCLK_A0_B = OCLK_A0_B; // net ID: OCLK lsb: 0  msb: 0 INPUT
			this->OFB_A0_B = OFB_A0_B; // net ID: OFB lsb: 0  msb: 0 INPUT
			this->RST_A0_B = RST_A0_B; // net ID: RST lsb: 0  msb: 0 INPUT
			this->SHIFTIN1_A0_B = SHIFTIN1_A0_B; // net ID: SHIFTIN1 lsb: 0  msb: 0 INPUT
			this->SHIFTIN2_A0_B = SHIFTIN2_A0_B; // net ID: SHIFTIN2 lsb: 0  msb: 0 INPUT
			
			register_wait_on_event_nets();
			
		}
		
		void register_wait_on_event_nets(){
		// TODO
		}
		
		bool calculate(simtime_t time){
		// TODO
		}
		};
		
}
#endif // X_ISERDES_NODELAY_H
