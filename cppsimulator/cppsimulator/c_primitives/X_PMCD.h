/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_PMCD{

		//Verilog Parameters:
		parameter_enum_t EN_REL;
		parameter_string_t RST_DEASSERT_CLK;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* CLKA1; // OUTPUT
		NetFlow* CLKA1D2; // OUTPUT
		NetFlow* CLKA1D4; // OUTPUT
		NetFlow* CLKA1D8; // OUTPUT
		NetFlow* CLKB1; // OUTPUT
		NetFlow* CLKC1; // OUTPUT
		NetFlow* CLKD1; // OUTPUT
		NetFlow* CLKA; // INPUT
		NetFlow* CLKB; // INPUT
		NetFlow* CLKC; // INPUT
		NetFlow* CLKD; // INPUT
		NetFlow* REL; // INPUT
		NetFlow* RST; // INPUT
		
	
		X_PMCD(
			//Verilog Parameters:
			parameter_enum_t EN_REL, // Default: "FALSE"
			parameter_string_t RST_DEASSERT_CLK, // Default: "CLKA"
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* CLKA1, // OUTPUT
			NetFlow* CLKA1D2, // OUTPUT
			NetFlow* CLKA1D4, // OUTPUT
			NetFlow* CLKA1D8, // OUTPUT
			NetFlow* CLKB1, // OUTPUT
			NetFlow* CLKC1, // OUTPUT
			NetFlow* CLKD1, // OUTPUT
			NetFlow* CLKA, // INPUT
			NetFlow* CLKB, // INPUT
			NetFlow* CLKC, // INPUT
			NetFlow* CLKD, // INPUT
			NetFlow* REL, // INPUT
			NetFlow* RST // INPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->EN_REL = EN_REL; // Default: "FALSE"
			this->RST_DEASSERT_CLK = RST_DEASSERT_CLK; // Default: "CLKA"
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->CLKA1 = CLKA1; // OUTPUT
			this->CLKA1D2 = CLKA1D2; // OUTPUT
			this->CLKA1D4 = CLKA1D4; // OUTPUT
			this->CLKA1D8 = CLKA1D8; // OUTPUT
			this->CLKB1 = CLKB1; // OUTPUT
			this->CLKC1 = CLKC1; // OUTPUT
			this->CLKD1 = CLKD1; // OUTPUT
			this->CLKA = CLKA; // INPUT
			this->CLKB = CLKB; // INPUT
			this->CLKC = CLKC; // INPUT
			this->CLKD = CLKD; // INPUT
			this->REL = REL; // INPUT
			this->RST = RST; // INPUT
		
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
