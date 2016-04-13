/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

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
		NetFlow* CLKA1; // net ID: CLKA1 lsb: 0  msb: 0 OUTPUT
		NetFlow* CLKA1D2; // net ID: CLKA1D2 lsb: 0  msb: 0 OUTPUT
		NetFlow* CLKA1D4; // net ID: CLKA1D4 lsb: 0  msb: 0 OUTPUT
		NetFlow* CLKA1D8; // net ID: CLKA1D8 lsb: 0  msb: 0 OUTPUT
		NetFlow* CLKB1; // net ID: CLKB1 lsb: 0  msb: 0 OUTPUT
		NetFlow* CLKC1; // net ID: CLKC1 lsb: 0  msb: 0 OUTPUT
		NetFlow* CLKD1; // net ID: CLKD1 lsb: 0  msb: 0 OUTPUT
		NetFlow* CLKA; // net ID: CLKA lsb: 0  msb: 0 INPUT
		NetFlow* CLKB; // net ID: CLKB lsb: 0  msb: 0 INPUT
		NetFlow* CLKC; // net ID: CLKC lsb: 0  msb: 0 INPUT
		NetFlow* CLKD; // net ID: CLKD lsb: 0  msb: 0 INPUT
		NetFlow* REL; // net ID: REL lsb: 0  msb: 0 INPUT
		NetFlow* RST; // net ID: RST lsb: 0  msb: 0 INPUT
		
		X_PMCD(
			const char * name,
			//Verilog Parameters:
			parameter_enum_t EN_REL, // Default: "FALSE"
			parameter_string_t RST_DEASSERT_CLK, // Default: "CLKA"
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* CLKA1, // net ID: CLKA1 lsb: 0  msb: 0 OUTPUT
			NetFlow* CLKA1D2, // net ID: CLKA1D2 lsb: 0  msb: 0 OUTPUT
			NetFlow* CLKA1D4, // net ID: CLKA1D4 lsb: 0  msb: 0 OUTPUT
			NetFlow* CLKA1D8, // net ID: CLKA1D8 lsb: 0  msb: 0 OUTPUT
			NetFlow* CLKB1, // net ID: CLKB1 lsb: 0  msb: 0 OUTPUT
			NetFlow* CLKC1, // net ID: CLKC1 lsb: 0  msb: 0 OUTPUT
			NetFlow* CLKD1, // net ID: CLKD1 lsb: 0  msb: 0 OUTPUT
			NetFlow* CLKA, // net ID: CLKA lsb: 0  msb: 0 INPUT
			NetFlow* CLKB, // net ID: CLKB lsb: 0  msb: 0 INPUT
			NetFlow* CLKC, // net ID: CLKC lsb: 0  msb: 0 INPUT
			NetFlow* CLKD, // net ID: CLKD lsb: 0  msb: 0 INPUT
			NetFlow* REL, // net ID: REL lsb: 0  msb: 0 INPUT
			NetFlow* RST // net ID: RST lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->EN_REL = EN_REL; // Default: "FALSE"
			this->RST_DEASSERT_CLK = RST_DEASSERT_CLK; // Default: "CLKA"
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->CLKA1 = CLKA1; // net ID: CLKA1 lsb: 0  msb: 0 OUTPUT
			this->CLKA1D2 = CLKA1D2; // net ID: CLKA1D2 lsb: 0  msb: 0 OUTPUT
			this->CLKA1D4 = CLKA1D4; // net ID: CLKA1D4 lsb: 0  msb: 0 OUTPUT
			this->CLKA1D8 = CLKA1D8; // net ID: CLKA1D8 lsb: 0  msb: 0 OUTPUT
			this->CLKB1 = CLKB1; // net ID: CLKB1 lsb: 0  msb: 0 OUTPUT
			this->CLKC1 = CLKC1; // net ID: CLKC1 lsb: 0  msb: 0 OUTPUT
			this->CLKD1 = CLKD1; // net ID: CLKD1 lsb: 0  msb: 0 OUTPUT
			this->CLKA = CLKA; // net ID: CLKA lsb: 0  msb: 0 INPUT
			this->CLKB = CLKB; // net ID: CLKB lsb: 0  msb: 0 INPUT
			this->CLKC = CLKC; // net ID: CLKC lsb: 0  msb: 0 INPUT
			this->CLKD = CLKD; // net ID: CLKD lsb: 0  msb: 0 INPUT
			this->REL = REL; // net ID: REL lsb: 0  msb: 0 INPUT
			this->RST = RST; // net ID: RST lsb: 0  msb: 0 INPUT
			
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
