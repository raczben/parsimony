/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_CAPTUREE2_H
#define X_CAPTUREE2_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_CAPTUREE2: public Primitive{

		//Verilog Parameters:
		parameter_string_t LOC;
		parameter_enum_t ONESHOT;
		//Verilog Ports in definition order:
		NetFlow* CAP_A0_B; // net ID: CAP lsb: 0  msb: 0 INPUT
		NetFlow* CLK_A0_B; // net ID: CLK lsb: 0  msb: 0 INPUT
		
		public: X_CAPTUREE2(
			const char * name,
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_enum_t ONESHOT, // Default: "TRUE"
			//Verilog Ports in definition order:
			NetFlow* CAP_A0_B, // net ID: CAP lsb: 0  msb: 0 INPUT
			NetFlow* CLK_A0_B // net ID: CLK lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->LOC = LOC; // Default: "UNPLACED"
			this->ONESHOT = ONESHOT; // Default: "TRUE"
			//Verilog Ports in definition order:
			this->CAP_A0_B = CAP_A0_B; // net ID: CAP lsb: 0  msb: 0 INPUT
			this->CLK_A0_B = CLK_A0_B; // net ID: CLK lsb: 0  msb: 0 INPUT
			
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
#endif // X_CAPTUREE2_H
