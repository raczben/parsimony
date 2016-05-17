/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_ZERO_H
#define X_ZERO_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"
namespace CPrimitives {
	
	class X_ZERO: public Primitive{

		//Verilog Parameters:
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* O_A0_B; // net ID: O lsb: 0  msb: 0 OUTPUT
		
		public: X_ZERO(
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
		
		void register_wait_on_event_nets(){
			O_A0_B->register_event_reader(this);
		}
		bool calculate(simtime_t time){
			return O_A0_B->set_at(new_net_level(LOW), time);
		}
		};
		
}
#endif // X_ZERO_H
