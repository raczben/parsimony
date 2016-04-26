/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_STARTUP_SPARTAN6_H
#define X_STARTUP_SPARTAN6_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_STARTUP_SPARTAN6: public Primitive{

		//Verilog Parameters:
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* CFGCLK_A0_B; // net ID: CFGCLK lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGMCLK_A0_B; // net ID: CFGMCLK lsb: 0  msb: 0 OUTPUT
		NetFlow* EOS_A0_B; // net ID: EOS lsb: 0  msb: 0 OUTPUT
		NetFlow* CLK_A0_B; // net ID: CLK lsb: 0  msb: 0 INPUT
		NetFlow* GSR_A0_B; // net ID: GSR lsb: 0  msb: 0 INPUT
		NetFlow* GTS_A0_B; // net ID: GTS lsb: 0  msb: 0 INPUT
		NetFlow* KEYCLEARB_A0_B; // net ID: KEYCLEARB lsb: 0  msb: 0 INPUT
		
		public: X_STARTUP_SPARTAN6(
			const char * name,
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* CFGCLK_A0_B, // net ID: CFGCLK lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGMCLK_A0_B, // net ID: CFGMCLK lsb: 0  msb: 0 OUTPUT
			NetFlow* EOS_A0_B, // net ID: EOS lsb: 0  msb: 0 OUTPUT
			NetFlow* CLK_A0_B, // net ID: CLK lsb: 0  msb: 0 INPUT
			NetFlow* GSR_A0_B, // net ID: GSR lsb: 0  msb: 0 INPUT
			NetFlow* GTS_A0_B, // net ID: GTS lsb: 0  msb: 0 INPUT
			NetFlow* KEYCLEARB_A0_B // net ID: KEYCLEARB lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->CFGCLK_A0_B = CFGCLK_A0_B; // net ID: CFGCLK lsb: 0  msb: 0 OUTPUT
			this->CFGMCLK_A0_B = CFGMCLK_A0_B; // net ID: CFGMCLK lsb: 0  msb: 0 OUTPUT
			this->EOS_A0_B = EOS_A0_B; // net ID: EOS lsb: 0  msb: 0 OUTPUT
			this->CLK_A0_B = CLK_A0_B; // net ID: CLK lsb: 0  msb: 0 INPUT
			this->GSR_A0_B = GSR_A0_B; // net ID: GSR lsb: 0  msb: 0 INPUT
			this->GTS_A0_B = GTS_A0_B; // net ID: GTS lsb: 0  msb: 0 INPUT
			this->KEYCLEARB_A0_B = KEYCLEARB_A0_B; // net ID: KEYCLEARB lsb: 0  msb: 0 INPUT
			
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
#endif // X_STARTUP_SPARTAN6_H
