/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_IDELAYCTRL_H
#define X_IDELAYCTRL_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_IDELAYCTRL: public Primitive{

		//Verilog Parameters:
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* RDY_A0_B; // net ID: RDY lsb: 0  msb: 0 OUTPUT
		NetFlow* REFCLK_A0_B; // net ID: REFCLK lsb: 0  msb: 0 INPUT
		NetFlow* RST_A0_B; // net ID: RST lsb: 0  msb: 0 INPUT
		
		public: X_IDELAYCTRL(
			const char * name,
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* RDY_A0_B, // net ID: RDY lsb: 0  msb: 0 OUTPUT
			NetFlow* REFCLK_A0_B, // net ID: REFCLK lsb: 0  msb: 0 INPUT
			NetFlow* RST_A0_B // net ID: RST lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->RDY_A0_B = RDY_A0_B; // net ID: RDY lsb: 0  msb: 0 OUTPUT
			this->REFCLK_A0_B = REFCLK_A0_B; // net ID: REFCLK lsb: 0  msb: 0 INPUT
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
#endif // X_IDELAYCTRL_H
