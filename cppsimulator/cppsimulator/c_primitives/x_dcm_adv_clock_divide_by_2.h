/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_DCM_ADV_CLOCK_DIVIDE_BY_2_H
#define X_DCM_ADV_CLOCK_DIVIDE_BY_2_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class x_dcm_adv_clock_divide_by_2: public Primitive{

		//Verilog Parameters:
		//Verilog Ports in definition order:
		NetFlow* CLOCK_A0_B; // net ID: clock lsb: 0  msb: 0 INPUT
		NetFlow* CLOCK__TYPE_A0_B; // net ID: clock_type lsb: 0  msb: 0 INPUT
		NetFlow* CLOCK__OUT_A0_B; // net ID: clock_out lsb: 0  msb: 0 OUTPUT
		NetFlow* RST_A0_B; // net ID: rst lsb: 0  msb: 0 INPUT
		
		public: x_dcm_adv_clock_divide_by_2(
			const char * name,
			//Verilog Parameters:
			//Verilog Ports in definition order:
			NetFlow* CLOCK_A0_B, // net ID: clock lsb: 0  msb: 0 INPUT
			NetFlow* CLOCK__TYPE_A0_B, // net ID: clock_type lsb: 0  msb: 0 INPUT
			NetFlow* CLOCK__OUT_A0_B, // net ID: clock_out lsb: 0  msb: 0 OUTPUT
			NetFlow* RST_A0_B // net ID: rst lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			//Verilog Ports in definition order:
			this->CLOCK_A0_B = CLOCK_A0_B; // net ID: clock lsb: 0  msb: 0 INPUT
			this->CLOCK__TYPE_A0_B = CLOCK__TYPE_A0_B; // net ID: clock_type lsb: 0  msb: 0 INPUT
			this->CLOCK__OUT_A0_B = CLOCK__OUT_A0_B; // net ID: clock_out lsb: 0  msb: 0 OUTPUT
			this->RST_A0_B = RST_A0_B; // net ID: rst lsb: 0  msb: 0 INPUT
			
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
#endif // X_DCM_ADV_CLOCK_DIVIDE_BY_2_H
