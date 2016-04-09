/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class x_clkdlle_maximum_period_check{

		//Verilog Parameters:
		parameter_string_t clock_name;
		parameter_int_t maximum_period;
		//Verilog Ports in definition order:
		NetFlow* clock; // INPUT
		NetFlow* rst; // INPUT
		
	
		x_clkdlle_maximum_period_check(
			//Verilog Parameters:
			parameter_string_t clock_name, // Default: ""
			parameter_int_t maximum_period, // Default: 0
			//Verilog Ports in definition order:
			NetFlow* clock, // INPUT
			NetFlow* rst // INPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->clock_name = clock_name; // Default: ""
			this->maximum_period = maximum_period; // Default: 0
			//Verilog Ports in definition order:
			this->clock = clock; // INPUT
			this->rst = rst; // INPUT
		
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
