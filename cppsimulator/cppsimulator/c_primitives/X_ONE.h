/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_ONE_H
#define X_ONE_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"
namespace CPrimitives {
	
	class X_ONE: public Primitive{

		//Verilog Parameters:
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* O_A0_B; // net ID: O lsb: 0  msb: 0 OUTPUT
		
		public: X_ONE(
			const char * name,
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* O_A0_B // net ID: O lsb: 0  msb: 0 OUTPUT
			):Primitive(name, true){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->O_A0_B = O_A0_B; // net ID: O lsb: 0  msb: 0 OUTPUT
			
			register_wait_on_event_nets();
			
		}

		void register_wait_on_event_nets() {
			O_A0_B->register_event_reader(this);
		}
				
		bool calculate(simtime_t time){
			return O_A0_B->set_at(new_net_level(HIGH), time);
		}
	};
		
}
#endif // X_ONE_H
