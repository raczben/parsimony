/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_PMCD_H
#define X_PMCD_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_PMCD: public Primitive{

		//Verilog Parameters:
		parameter_enum_t EN_REL;
		parameter_string_t RST_DEASSERT_CLK;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* CLKA1_A0_B; // net ID: CLKA1 lsb: 0  msb: 0 OUTPUT
		NetFlow* CLKA1D2_A0_B; // net ID: CLKA1D2 lsb: 0  msb: 0 OUTPUT
		NetFlow* CLKA1D4_A0_B; // net ID: CLKA1D4 lsb: 0  msb: 0 OUTPUT
		NetFlow* CLKA1D8_A0_B; // net ID: CLKA1D8 lsb: 0  msb: 0 OUTPUT
		NetFlow* CLKB1_A0_B; // net ID: CLKB1 lsb: 0  msb: 0 OUTPUT
		NetFlow* CLKC1_A0_B; // net ID: CLKC1 lsb: 0  msb: 0 OUTPUT
		NetFlow* CLKD1_A0_B; // net ID: CLKD1 lsb: 0  msb: 0 OUTPUT
		NetFlow* CLKA_A0_B; // net ID: CLKA lsb: 0  msb: 0 INPUT
		NetFlow* CLKB_A0_B; // net ID: CLKB lsb: 0  msb: 0 INPUT
		NetFlow* CLKC_A0_B; // net ID: CLKC lsb: 0  msb: 0 INPUT
		NetFlow* CLKD_A0_B; // net ID: CLKD lsb: 0  msb: 0 INPUT
		NetFlow* REL_A0_B; // net ID: REL lsb: 0  msb: 0 INPUT
		NetFlow* RST_A0_B; // net ID: RST lsb: 0  msb: 0 INPUT
		
		public: X_PMCD(
			const char * name,
			//Verilog Parameters:
			parameter_enum_t EN_REL, // Default: "FALSE"
			parameter_string_t RST_DEASSERT_CLK, // Default: "CLKA"
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* CLKA1_A0_B, // net ID: CLKA1 lsb: 0  msb: 0 OUTPUT
			NetFlow* CLKA1D2_A0_B, // net ID: CLKA1D2 lsb: 0  msb: 0 OUTPUT
			NetFlow* CLKA1D4_A0_B, // net ID: CLKA1D4 lsb: 0  msb: 0 OUTPUT
			NetFlow* CLKA1D8_A0_B, // net ID: CLKA1D8 lsb: 0  msb: 0 OUTPUT
			NetFlow* CLKB1_A0_B, // net ID: CLKB1 lsb: 0  msb: 0 OUTPUT
			NetFlow* CLKC1_A0_B, // net ID: CLKC1 lsb: 0  msb: 0 OUTPUT
			NetFlow* CLKD1_A0_B, // net ID: CLKD1 lsb: 0  msb: 0 OUTPUT
			NetFlow* CLKA_A0_B, // net ID: CLKA lsb: 0  msb: 0 INPUT
			NetFlow* CLKB_A0_B, // net ID: CLKB lsb: 0  msb: 0 INPUT
			NetFlow* CLKC_A0_B, // net ID: CLKC lsb: 0  msb: 0 INPUT
			NetFlow* CLKD_A0_B, // net ID: CLKD lsb: 0  msb: 0 INPUT
			NetFlow* REL_A0_B, // net ID: REL lsb: 0  msb: 0 INPUT
			NetFlow* RST_A0_B // net ID: RST lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->EN_REL = EN_REL; // Default: "FALSE"
			this->RST_DEASSERT_CLK = RST_DEASSERT_CLK; // Default: "CLKA"
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->CLKA1_A0_B = CLKA1_A0_B; // net ID: CLKA1 lsb: 0  msb: 0 OUTPUT
			this->CLKA1D2_A0_B = CLKA1D2_A0_B; // net ID: CLKA1D2 lsb: 0  msb: 0 OUTPUT
			this->CLKA1D4_A0_B = CLKA1D4_A0_B; // net ID: CLKA1D4 lsb: 0  msb: 0 OUTPUT
			this->CLKA1D8_A0_B = CLKA1D8_A0_B; // net ID: CLKA1D8 lsb: 0  msb: 0 OUTPUT
			this->CLKB1_A0_B = CLKB1_A0_B; // net ID: CLKB1 lsb: 0  msb: 0 OUTPUT
			this->CLKC1_A0_B = CLKC1_A0_B; // net ID: CLKC1 lsb: 0  msb: 0 OUTPUT
			this->CLKD1_A0_B = CLKD1_A0_B; // net ID: CLKD1 lsb: 0  msb: 0 OUTPUT
			this->CLKA_A0_B = CLKA_A0_B; // net ID: CLKA lsb: 0  msb: 0 INPUT
			this->CLKB_A0_B = CLKB_A0_B; // net ID: CLKB lsb: 0  msb: 0 INPUT
			this->CLKC_A0_B = CLKC_A0_B; // net ID: CLKC lsb: 0  msb: 0 INPUT
			this->CLKD_A0_B = CLKD_A0_B; // net ID: CLKD lsb: 0  msb: 0 INPUT
			this->REL_A0_B = REL_A0_B; // net ID: REL lsb: 0  msb: 0 INPUT
			this->RST_A0_B = RST_A0_B; // net ID: RST lsb: 0  msb: 0 INPUT
			
			register_wait_on_event_nets();
			
		}
		
		void register_wait_on_event_nets(){
		// TODO
		}
		
		void calculate(simtime_t time){
		// TODO
		}
		};
		
}
#endif // X_PMCD_H
