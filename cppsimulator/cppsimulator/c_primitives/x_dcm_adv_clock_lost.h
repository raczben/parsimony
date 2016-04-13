/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class x_dcm_adv_clock_lost: public Primitive{

		//Verilog Parameters:
		//Verilog Ports in definition order:
		NetFlow* clock; // net ID: clock lsb: 0  msb: 0 INPUT
		NetFlow* enable; // net ID: enable lsb: 0  msb: 0 INPUT
		NetFlow* lost; // net ID: lost lsb: 0  msb: 0 OUTPUT
		NetFlow* rst; // net ID: rst lsb: 0  msb: 0 INPUT
		
		x_dcm_adv_clock_lost(
			const char * name,
			//Verilog Parameters:
			//Verilog Ports in definition order:
			NetFlow* clock, // net ID: clock lsb: 0  msb: 0 INPUT
			NetFlow* enable, // net ID: enable lsb: 0  msb: 0 INPUT
			NetFlow* lost, // net ID: lost lsb: 0  msb: 0 OUTPUT
			NetFlow* rst // net ID: rst lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			//Verilog Ports in definition order:
			this->clock = clock; // net ID: clock lsb: 0  msb: 0 INPUT
			this->enable = enable; // net ID: enable lsb: 0  msb: 0 INPUT
			this->lost = lost; // net ID: lost lsb: 0  msb: 0 OUTPUT
			this->rst = rst; // net ID: rst lsb: 0  msb: 0 INPUT
			
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
