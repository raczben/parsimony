/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class x_dcm_adv_clock_divide_by_2{

		//Verilog Parameters:
		//Verilog Ports in definition order:
		NetFlow* clock; // INPUT
		NetFlow* clock_type; // INPUT
		NetFlow* clock_out; // OUTPUT
		NetFlow* rst; // INPUT
		
	
		x_dcm_adv_clock_divide_by_2(
			//Verilog Parameters:
			//Verilog Ports in definition order:
			NetFlow* clock, // INPUT
			NetFlow* clock_type, // INPUT
			NetFlow* clock_out, // OUTPUT
			NetFlow* rst // INPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			//Verilog Ports in definition order:
			this->clock = clock; // INPUT
			this->clock_type = clock_type; // INPUT
			this->clock_out = clock_out; // OUTPUT
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
