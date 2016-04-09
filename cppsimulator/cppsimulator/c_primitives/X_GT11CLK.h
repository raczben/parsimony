/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_GT11CLK{

		//Verilog Parameters:
		parameter_string_t LOC;
		parameter_string_t REFCLKSEL;
		parameter_string_t SYNCLK1OUTEN;
		parameter_string_t SYNCLK2OUTEN;
		//Verilog Ports in definition order:
		NetFlow* SYNCLK1OUT; // OUTPUT
		NetFlow* SYNCLK2OUT; // OUTPUT
		NetFlow* MGTCLKN; // INPUT
		NetFlow* MGTCLKP; // INPUT
		NetFlow* REFCLK; // INPUT
		NetFlow* RXBCLK; // INPUT
		NetFlow* SYNCLK1IN; // INPUT
		NetFlow* SYNCLK2IN; // INPUT
		
	
		X_GT11CLK(
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_string_t REFCLKSEL, // Default: "MGTCLK"
			parameter_string_t SYNCLK1OUTEN, // Default: "ENABLE"
			parameter_string_t SYNCLK2OUTEN, // Default: "DISABLE"
			//Verilog Ports in definition order:
			NetFlow* SYNCLK1OUT, // OUTPUT
			NetFlow* SYNCLK2OUT, // OUTPUT
			NetFlow* MGTCLKN, // INPUT
			NetFlow* MGTCLKP, // INPUT
			NetFlow* REFCLK, // INPUT
			NetFlow* RXBCLK, // INPUT
			NetFlow* SYNCLK1IN, // INPUT
			NetFlow* SYNCLK2IN // INPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->LOC = LOC; // Default: "UNPLACED"
			this->REFCLKSEL = REFCLKSEL; // Default: "MGTCLK"
			this->SYNCLK1OUTEN = SYNCLK1OUTEN; // Default: "ENABLE"
			this->SYNCLK2OUTEN = SYNCLK2OUTEN; // Default: "DISABLE"
			//Verilog Ports in definition order:
			this->SYNCLK1OUT = SYNCLK1OUT; // OUTPUT
			this->SYNCLK2OUT = SYNCLK2OUT; // OUTPUT
			this->MGTCLKN = MGTCLKN; // INPUT
			this->MGTCLKP = MGTCLKP; // INPUT
			this->REFCLK = REFCLK; // INPUT
			this->RXBCLK = RXBCLK; // INPUT
			this->SYNCLK1IN = SYNCLK1IN; // INPUT
			this->SYNCLK2IN = SYNCLK2IN; // INPUT
		
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
