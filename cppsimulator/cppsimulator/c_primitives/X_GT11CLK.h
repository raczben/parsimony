/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_GT11CLK: public Primitive{

		//Verilog Parameters:
		parameter_string_t LOC;
		parameter_string_t REFCLKSEL;
		parameter_string_t SYNCLK1OUTEN;
		parameter_string_t SYNCLK2OUTEN;
		//Verilog Ports in definition order:
		NetFlow* SYNCLK1OUT; // net ID: SYNCLK1OUT lsb: 0  msb: 0 OUTPUT
		NetFlow* SYNCLK2OUT; // net ID: SYNCLK2OUT lsb: 0  msb: 0 OUTPUT
		NetFlow* MGTCLKN; // net ID: MGTCLKN lsb: 0  msb: 0 INPUT
		NetFlow* MGTCLKP; // net ID: MGTCLKP lsb: 0  msb: 0 INPUT
		NetFlow* REFCLK; // net ID: REFCLK lsb: 0  msb: 0 INPUT
		NetFlow* RXBCLK; // net ID: RXBCLK lsb: 0  msb: 0 INPUT
		NetFlow* SYNCLK1IN; // net ID: SYNCLK1IN lsb: 0  msb: 0 INPUT
		NetFlow* SYNCLK2IN; // net ID: SYNCLK2IN lsb: 0  msb: 0 INPUT
		
		X_GT11CLK(
			const char * name,
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_string_t REFCLKSEL, // Default: "MGTCLK"
			parameter_string_t SYNCLK1OUTEN, // Default: "ENABLE"
			parameter_string_t SYNCLK2OUTEN, // Default: "DISABLE"
			//Verilog Ports in definition order:
			NetFlow* SYNCLK1OUT, // net ID: SYNCLK1OUT lsb: 0  msb: 0 OUTPUT
			NetFlow* SYNCLK2OUT, // net ID: SYNCLK2OUT lsb: 0  msb: 0 OUTPUT
			NetFlow* MGTCLKN, // net ID: MGTCLKN lsb: 0  msb: 0 INPUT
			NetFlow* MGTCLKP, // net ID: MGTCLKP lsb: 0  msb: 0 INPUT
			NetFlow* REFCLK, // net ID: REFCLK lsb: 0  msb: 0 INPUT
			NetFlow* RXBCLK, // net ID: RXBCLK lsb: 0  msb: 0 INPUT
			NetFlow* SYNCLK1IN, // net ID: SYNCLK1IN lsb: 0  msb: 0 INPUT
			NetFlow* SYNCLK2IN // net ID: SYNCLK2IN lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->LOC = LOC; // Default: "UNPLACED"
			this->REFCLKSEL = REFCLKSEL; // Default: "MGTCLK"
			this->SYNCLK1OUTEN = SYNCLK1OUTEN; // Default: "ENABLE"
			this->SYNCLK2OUTEN = SYNCLK2OUTEN; // Default: "DISABLE"
			//Verilog Ports in definition order:
			this->SYNCLK1OUT = SYNCLK1OUT; // net ID: SYNCLK1OUT lsb: 0  msb: 0 OUTPUT
			this->SYNCLK2OUT = SYNCLK2OUT; // net ID: SYNCLK2OUT lsb: 0  msb: 0 OUTPUT
			this->MGTCLKN = MGTCLKN; // net ID: MGTCLKN lsb: 0  msb: 0 INPUT
			this->MGTCLKP = MGTCLKP; // net ID: MGTCLKP lsb: 0  msb: 0 INPUT
			this->REFCLK = REFCLK; // net ID: REFCLK lsb: 0  msb: 0 INPUT
			this->RXBCLK = RXBCLK; // net ID: RXBCLK lsb: 0  msb: 0 INPUT
			this->SYNCLK1IN = SYNCLK1IN; // net ID: SYNCLK1IN lsb: 0  msb: 0 INPUT
			this->SYNCLK2IN = SYNCLK2IN; // net ID: SYNCLK2IN lsb: 0  msb: 0 INPUT
			
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
