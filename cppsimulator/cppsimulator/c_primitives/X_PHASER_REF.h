/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_PHASER_REF_H
#define X_PHASER_REF_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_PHASER_REF: public Primitive{

		//Verilog Parameters:
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* LOCKED_A0_B; // net ID: LOCKED lsb: 0  msb: 0 OUTPUT
		NetFlow* CLKIN_A0_B; // net ID: CLKIN lsb: 0  msb: 0 INPUT
		NetFlow* PWRDWN_A0_B; // net ID: PWRDWN lsb: 0  msb: 0 INPUT
		NetFlow* RST_A0_B; // net ID: RST lsb: 0  msb: 0 INPUT
		
		public: X_PHASER_REF(
			const char * name,
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* LOCKED_A0_B, // net ID: LOCKED lsb: 0  msb: 0 OUTPUT
			NetFlow* CLKIN_A0_B, // net ID: CLKIN lsb: 0  msb: 0 INPUT
			NetFlow* PWRDWN_A0_B, // net ID: PWRDWN lsb: 0  msb: 0 INPUT
			NetFlow* RST_A0_B // net ID: RST lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->LOCKED_A0_B = LOCKED_A0_B; // net ID: LOCKED lsb: 0  msb: 0 OUTPUT
			this->CLKIN_A0_B = CLKIN_A0_B; // net ID: CLKIN lsb: 0  msb: 0 INPUT
			this->PWRDWN_A0_B = PWRDWN_A0_B; // net ID: PWRDWN lsb: 0  msb: 0 INPUT
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
#endif // X_PHASER_REF_H
