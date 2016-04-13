/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_PHASER_REF: public Primitive{

		//Verilog Parameters:
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* LOCKED; // net ID: LOCKED lsb: 0  msb: 0 OUTPUT
		NetFlow* CLKIN; // net ID: CLKIN lsb: 0  msb: 0 INPUT
		NetFlow* PWRDWN; // net ID: PWRDWN lsb: 0  msb: 0 INPUT
		NetFlow* RST; // net ID: RST lsb: 0  msb: 0 INPUT
		
		X_PHASER_REF(
			const char * name,
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* LOCKED, // net ID: LOCKED lsb: 0  msb: 0 OUTPUT
			NetFlow* CLKIN, // net ID: CLKIN lsb: 0  msb: 0 INPUT
			NetFlow* PWRDWN, // net ID: PWRDWN lsb: 0  msb: 0 INPUT
			NetFlow* RST // net ID: RST lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->LOCKED = LOCKED; // net ID: LOCKED lsb: 0  msb: 0 OUTPUT
			this->CLKIN = CLKIN; // net ID: CLKIN lsb: 0  msb: 0 INPUT
			this->PWRDWN = PWRDWN; // net ID: PWRDWN lsb: 0  msb: 0 INPUT
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
