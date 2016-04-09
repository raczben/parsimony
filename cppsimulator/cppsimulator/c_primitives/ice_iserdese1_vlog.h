/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class ice_iserdese1_vlog{

		//Verilog Parameters:
		//Verilog Ports in definition order:
		NetFlow* ce1; // INPUT
		NetFlow* ce2; // INPUT
		NetFlow* NUM_CE; // INPUT
		NetFlow* clkdiv; // INPUT
		NetFlow* r; // INPUT
		NetFlow* ice; // OUTPUT
		
	
		ice_iserdese1_vlog(
			//Verilog Parameters:
			//Verilog Ports in definition order:
			NetFlow* ce1, // INPUT
			NetFlow* ce2, // INPUT
			NetFlow* NUM_CE, // INPUT
			NetFlow* clkdiv, // INPUT
			NetFlow* r, // INPUT
			NetFlow* ice // OUTPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			//Verilog Ports in definition order:
			this->ce1 = ce1; // INPUT
			this->ce2 = ce2; // INPUT
			this->NUM_CE = NUM_CE; // INPUT
			this->clkdiv = clkdiv; // INPUT
			this->r = r; // INPUT
			this->ice = ice; // OUTPUT
		
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
