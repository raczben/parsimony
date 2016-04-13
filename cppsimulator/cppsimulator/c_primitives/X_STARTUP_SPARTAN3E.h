/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_STARTUP_SPARTAN3E: public Primitive{

		//Verilog Parameters:
		//Verilog Ports in definition order:
		NetFlow* CLK; // net ID: CLK lsb: 0  msb: 0 INPUT
		NetFlow* GSR; // net ID: GSR lsb: 0  msb: 0 INPUT
		NetFlow* GTS; // net ID: GTS lsb: 0  msb: 0 INPUT
		NetFlow* MBT; // net ID: MBT lsb: 0  msb: 0 INPUT
		
		X_STARTUP_SPARTAN3E(
			const char * name,
			//Verilog Parameters:
			//Verilog Ports in definition order:
			NetFlow* CLK, // net ID: CLK lsb: 0  msb: 0 INPUT
			NetFlow* GSR, // net ID: GSR lsb: 0  msb: 0 INPUT
			NetFlow* GTS, // net ID: GTS lsb: 0  msb: 0 INPUT
			NetFlow* MBT // net ID: MBT lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			//Verilog Ports in definition order:
			this->CLK = CLK; // net ID: CLK lsb: 0  msb: 0 INPUT
			this->GSR = GSR; // net ID: GSR lsb: 0  msb: 0 INPUT
			this->GTS = GTS; // net ID: GTS lsb: 0  msb: 0 INPUT
			this->MBT = MBT; // net ID: MBT lsb: 0  msb: 0 INPUT
			
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
