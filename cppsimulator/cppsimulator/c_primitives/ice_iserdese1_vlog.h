/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class ice_iserdese1_vlog: public Primitive{

		//Verilog Parameters:
		//Verilog Ports in definition order:
		NetFlow* ce1; // net ID: ce1 lsb: 0  msb: 0 INPUT
		NetFlow* ce2; // net ID: ce2 lsb: 0  msb: 0 INPUT
		NetFlow* NUM_CE; // net ID: NUM_CE lsb: 0  msb: 0 INPUT
		NetFlow* clkdiv; // net ID: clkdiv lsb: 0  msb: 0 INPUT
		NetFlow* r; // net ID: r lsb: 0  msb: 0 INPUT
		NetFlow* ice; // net ID: ice lsb: 0  msb: 0 OUTPUT
		
		ice_iserdese1_vlog(
			const char * name,
			//Verilog Parameters:
			//Verilog Ports in definition order:
			NetFlow* ce1, // net ID: ce1 lsb: 0  msb: 0 INPUT
			NetFlow* ce2, // net ID: ce2 lsb: 0  msb: 0 INPUT
			NetFlow* NUM_CE, // net ID: NUM_CE lsb: 0  msb: 0 INPUT
			NetFlow* clkdiv, // net ID: clkdiv lsb: 0  msb: 0 INPUT
			NetFlow* r, // net ID: r lsb: 0  msb: 0 INPUT
			NetFlow* ice // net ID: ice lsb: 0  msb: 0 OUTPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			//Verilog Ports in definition order:
			this->ce1 = ce1; // net ID: ce1 lsb: 0  msb: 0 INPUT
			this->ce2 = ce2; // net ID: ce2 lsb: 0  msb: 0 INPUT
			this->NUM_CE = NUM_CE; // net ID: NUM_CE lsb: 0  msb: 0 INPUT
			this->clkdiv = clkdiv; // net ID: clkdiv lsb: 0  msb: 0 INPUT
			this->r = r; // net ID: r lsb: 0  msb: 0 INPUT
			this->ice = ice; // net ID: ice lsb: 0  msb: 0 OUTPUT
			
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
