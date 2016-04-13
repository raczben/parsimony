/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_CAPTUREE2: public Primitive{

		//Verilog Parameters:
		parameter_string_t LOC;
		parameter_enum_t ONESHOT;
		//Verilog Ports in definition order:
		NetFlow* CAP; // net ID: CAP lsb: 0  msb: 0 INPUT
		NetFlow* CLK; // net ID: CLK lsb: 0  msb: 0 INPUT
		
		X_CAPTUREE2(
			const char * name,
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_enum_t ONESHOT, // Default: "TRUE"
			//Verilog Ports in definition order:
			NetFlow* CAP, // net ID: CAP lsb: 0  msb: 0 INPUT
			NetFlow* CLK // net ID: CLK lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->LOC = LOC; // Default: "UNPLACED"
			this->ONESHOT = ONESHOT; // Default: "TRUE"
			//Verilog Ports in definition order:
			this->CAP = CAP; // net ID: CAP lsb: 0  msb: 0 INPUT
			this->CLK = CLK; // net ID: CLK lsb: 0  msb: 0 INPUT
			
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
