/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class x_dcm_clock_divide_by_2: public Primitive{

		//Verilog Parameters:
		//Verilog Ports in definition order:
		NetFlow* clock; // net ID: clock lsb: 0  msb: 0 INPUT
		NetFlow* clock_type; // net ID: clock_type lsb: 0  msb: 0 INPUT
		NetFlow* clock_out; // net ID: clock_out lsb: 0  msb: 0 OUTPUT
		NetFlow* rst; // net ID: rst lsb: 0  msb: 0 INPUT
		
		x_dcm_clock_divide_by_2(
			const char * name,
			//Verilog Parameters:
			//Verilog Ports in definition order:
			NetFlow* clock, // net ID: clock lsb: 0  msb: 0 INPUT
			NetFlow* clock_type, // net ID: clock_type lsb: 0  msb: 0 INPUT
			NetFlow* clock_out, // net ID: clock_out lsb: 0  msb: 0 OUTPUT
			NetFlow* rst // net ID: rst lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			//Verilog Ports in definition order:
			this->clock = clock; // net ID: clock lsb: 0  msb: 0 INPUT
			this->clock_type = clock_type; // net ID: clock_type lsb: 0  msb: 0 INPUT
			this->clock_out = clock_out; // net ID: clock_out lsb: 0  msb: 0 OUTPUT
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
