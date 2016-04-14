/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_USR_ACCESS_VIRTEX6_H
#define X_USR_ACCESS_VIRTEX6_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"
namespace CPrimitives {
	
	class X_USR_ACCESS_VIRTEX6: public Primitive{

		//Verilog Parameters:
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* CFGCLK_A0_B; // net ID: CFGCLK lsb: 0  msb: 0 OUTPUT
		NetFlow* DATA_A0_B; // net ID: DATA lsb: 0  msb: 0 OUTPUT
		NetFlow* DATAVALID_A0_B; // net ID: DATAVALID lsb: 0  msb: 0 OUTPUT
		
		public: X_USR_ACCESS_VIRTEX6(
			const char * name,
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* CFGCLK_A0_B, // net ID: CFGCLK lsb: 0  msb: 0 OUTPUT
			NetFlow* DATA_A0_B, // net ID: DATA lsb: 0  msb: 0 OUTPUT
			NetFlow* DATAVALID_A0_B // net ID: DATAVALID lsb: 0  msb: 0 OUTPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->CFGCLK_A0_B = CFGCLK_A0_B; // net ID: CFGCLK lsb: 0  msb: 0 OUTPUT
			this->DATA_A0_B = DATA_A0_B; // net ID: DATA lsb: 0  msb: 0 OUTPUT
			this->DATAVALID_A0_B = DATAVALID_A0_B; // net ID: DATAVALID lsb: 0  msb: 0 OUTPUT
			
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
#endif // X_USR_ACCESS_VIRTEX6_H
