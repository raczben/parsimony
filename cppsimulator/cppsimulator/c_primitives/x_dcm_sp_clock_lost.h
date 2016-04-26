/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_DCM_SP_CLOCK_LOST_H
#define X_DCM_SP_CLOCK_LOST_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class x_dcm_sp_clock_lost: public Primitive{

		//Verilog Parameters:
		//Verilog Ports in definition order:
		NetFlow* CLOCK_A0_B; // net ID: clock lsb: 0  msb: 0 INPUT
		NetFlow* ENABLE_A0_B; // net ID: enable lsb: 0  msb: 0 INPUT
		NetFlow* LOST_A0_B; // net ID: lost lsb: 0  msb: 0 OUTPUT
		NetFlow* RST_A0_B; // net ID: rst lsb: 0  msb: 0 INPUT
		
		public: x_dcm_sp_clock_lost(
			const char * name,
			//Verilog Parameters:
			//Verilog Ports in definition order:
			NetFlow* CLOCK_A0_B, // net ID: clock lsb: 0  msb: 0 INPUT
			NetFlow* ENABLE_A0_B, // net ID: enable lsb: 0  msb: 0 INPUT
			NetFlow* LOST_A0_B, // net ID: lost lsb: 0  msb: 0 OUTPUT
			NetFlow* RST_A0_B // net ID: rst lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			//Verilog Ports in definition order:
			this->CLOCK_A0_B = CLOCK_A0_B; // net ID: clock lsb: 0  msb: 0 INPUT
			this->ENABLE_A0_B = ENABLE_A0_B; // net ID: enable lsb: 0  msb: 0 INPUT
			this->LOST_A0_B = LOST_A0_B; // net ID: lost lsb: 0  msb: 0 OUTPUT
			this->RST_A0_B = RST_A0_B; // net ID: rst lsb: 0  msb: 0 INPUT
			
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
#endif // X_DCM_SP_CLOCK_LOST_H
