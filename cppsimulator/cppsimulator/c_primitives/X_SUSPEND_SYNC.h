/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_SUSPEND_SYNC_H
#define X_SUSPEND_SYNC_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_SUSPEND_SYNC: public Primitive{

		//Verilog Parameters:
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* SREQ_A0_B; // net ID: SREQ lsb: 0  msb: 0 OUTPUT
		NetFlow* CLK_A0_B; // net ID: CLK lsb: 0  msb: 0 INPUT
		NetFlow* SACK_A0_B; // net ID: SACK lsb: 0  msb: 0 INPUT
		
		public: X_SUSPEND_SYNC(
			const char * name,
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* SREQ_A0_B, // net ID: SREQ lsb: 0  msb: 0 OUTPUT
			NetFlow* CLK_A0_B, // net ID: CLK lsb: 0  msb: 0 INPUT
			NetFlow* SACK_A0_B // net ID: SACK lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->SREQ_A0_B = SREQ_A0_B; // net ID: SREQ lsb: 0  msb: 0 OUTPUT
			this->CLK_A0_B = CLK_A0_B; // net ID: CLK lsb: 0  msb: 0 INPUT
			this->SACK_A0_B = SACK_A0_B; // net ID: SACK lsb: 0  msb: 0 INPUT
			
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
#endif // X_SUSPEND_SYNC_H
