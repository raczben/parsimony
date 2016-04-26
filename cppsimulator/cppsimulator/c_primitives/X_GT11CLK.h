/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_GT11CLK_H
#define X_GT11CLK_H

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
		NetFlow* SYNCLK1OUT_A0_B; // net ID: SYNCLK1OUT lsb: 0  msb: 0 OUTPUT
		NetFlow* SYNCLK2OUT_A0_B; // net ID: SYNCLK2OUT lsb: 0  msb: 0 OUTPUT
		NetFlow* MGTCLKN_A0_B; // net ID: MGTCLKN lsb: 0  msb: 0 INPUT
		NetFlow* MGTCLKP_A0_B; // net ID: MGTCLKP lsb: 0  msb: 0 INPUT
		NetFlow* REFCLK_A0_B; // net ID: REFCLK lsb: 0  msb: 0 INPUT
		NetFlow* RXBCLK_A0_B; // net ID: RXBCLK lsb: 0  msb: 0 INPUT
		NetFlow* SYNCLK1IN_A0_B; // net ID: SYNCLK1IN lsb: 0  msb: 0 INPUT
		NetFlow* SYNCLK2IN_A0_B; // net ID: SYNCLK2IN lsb: 0  msb: 0 INPUT
		
		public: X_GT11CLK(
			const char * name,
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_string_t REFCLKSEL, // Default: "MGTCLK"
			parameter_string_t SYNCLK1OUTEN, // Default: "ENABLE"
			parameter_string_t SYNCLK2OUTEN, // Default: "DISABLE"
			//Verilog Ports in definition order:
			NetFlow* SYNCLK1OUT_A0_B, // net ID: SYNCLK1OUT lsb: 0  msb: 0 OUTPUT
			NetFlow* SYNCLK2OUT_A0_B, // net ID: SYNCLK2OUT lsb: 0  msb: 0 OUTPUT
			NetFlow* MGTCLKN_A0_B, // net ID: MGTCLKN lsb: 0  msb: 0 INPUT
			NetFlow* MGTCLKP_A0_B, // net ID: MGTCLKP lsb: 0  msb: 0 INPUT
			NetFlow* REFCLK_A0_B, // net ID: REFCLK lsb: 0  msb: 0 INPUT
			NetFlow* RXBCLK_A0_B, // net ID: RXBCLK lsb: 0  msb: 0 INPUT
			NetFlow* SYNCLK1IN_A0_B, // net ID: SYNCLK1IN lsb: 0  msb: 0 INPUT
			NetFlow* SYNCLK2IN_A0_B // net ID: SYNCLK2IN lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->LOC = LOC; // Default: "UNPLACED"
			this->REFCLKSEL = REFCLKSEL; // Default: "MGTCLK"
			this->SYNCLK1OUTEN = SYNCLK1OUTEN; // Default: "ENABLE"
			this->SYNCLK2OUTEN = SYNCLK2OUTEN; // Default: "DISABLE"
			//Verilog Ports in definition order:
			this->SYNCLK1OUT_A0_B = SYNCLK1OUT_A0_B; // net ID: SYNCLK1OUT lsb: 0  msb: 0 OUTPUT
			this->SYNCLK2OUT_A0_B = SYNCLK2OUT_A0_B; // net ID: SYNCLK2OUT lsb: 0  msb: 0 OUTPUT
			this->MGTCLKN_A0_B = MGTCLKN_A0_B; // net ID: MGTCLKN lsb: 0  msb: 0 INPUT
			this->MGTCLKP_A0_B = MGTCLKP_A0_B; // net ID: MGTCLKP lsb: 0  msb: 0 INPUT
			this->REFCLK_A0_B = REFCLK_A0_B; // net ID: REFCLK lsb: 0  msb: 0 INPUT
			this->RXBCLK_A0_B = RXBCLK_A0_B; // net ID: RXBCLK lsb: 0  msb: 0 INPUT
			this->SYNCLK1IN_A0_B = SYNCLK1IN_A0_B; // net ID: SYNCLK1IN lsb: 0  msb: 0 INPUT
			this->SYNCLK2IN_A0_B = SYNCLK2IN_A0_B; // net ID: SYNCLK2IN lsb: 0  msb: 0 INPUT
			
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
#endif // X_GT11CLK_H
