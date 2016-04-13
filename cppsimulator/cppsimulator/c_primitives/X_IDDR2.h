/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_IDDR2: public Primitive{

		//Verilog Parameters:
		parameter_string_t DDR_ALIGNMENT;
		parameter_string_t INIT_Q0;
		parameter_string_t INIT_Q1;
		parameter_string_t LOC;
		parameter_string_t SRTYPE;
		//Verilog Ports in definition order:
		NetFlow* Q0; // net ID: Q0 lsb: 0  msb: 0 OUTPUT
		NetFlow* Q1; // net ID: Q1 lsb: 0  msb: 0 OUTPUT
		NetFlow* C0; // net ID: C0 lsb: 0  msb: 0 INPUT
		NetFlow* C1; // net ID: C1 lsb: 0  msb: 0 INPUT
		NetFlow* CE; // net ID: CE lsb: 0  msb: 0 INPUT
		NetFlow* D; // net ID: D lsb: 0  msb: 0 INPUT
		NetFlow* R; // net ID: R lsb: 0  msb: 0 INPUT
		NetFlow* S; // net ID: S lsb: 0  msb: 0 INPUT
		
		X_IDDR2(
			const char * name,
			//Verilog Parameters:
			parameter_string_t DDR_ALIGNMENT, // Default: "NONE"
			parameter_string_t INIT_Q0, // Default: 1'b0
			parameter_string_t INIT_Q1, // Default: 1'b0
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_string_t SRTYPE, // Default: "SYNC"
			//Verilog Ports in definition order:
			NetFlow* Q0, // net ID: Q0 lsb: 0  msb: 0 OUTPUT
			NetFlow* Q1, // net ID: Q1 lsb: 0  msb: 0 OUTPUT
			NetFlow* C0, // net ID: C0 lsb: 0  msb: 0 INPUT
			NetFlow* C1, // net ID: C1 lsb: 0  msb: 0 INPUT
			NetFlow* CE, // net ID: CE lsb: 0  msb: 0 INPUT
			NetFlow* D, // net ID: D lsb: 0  msb: 0 INPUT
			NetFlow* R, // net ID: R lsb: 0  msb: 0 INPUT
			NetFlow* S // net ID: S lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->DDR_ALIGNMENT = DDR_ALIGNMENT; // Default: "NONE"
			this->INIT_Q0 = INIT_Q0; // Default: 1'b0
			this->INIT_Q1 = INIT_Q1; // Default: 1'b0
			this->LOC = LOC; // Default: "UNPLACED"
			this->SRTYPE = SRTYPE; // Default: "SYNC"
			//Verilog Ports in definition order:
			this->Q0 = Q0; // net ID: Q0 lsb: 0  msb: 0 OUTPUT
			this->Q1 = Q1; // net ID: Q1 lsb: 0  msb: 0 OUTPUT
			this->C0 = C0; // net ID: C0 lsb: 0  msb: 0 INPUT
			this->C1 = C1; // net ID: C1 lsb: 0  msb: 0 INPUT
			this->CE = CE; // net ID: CE lsb: 0  msb: 0 INPUT
			this->D = D; // net ID: D lsb: 0  msb: 0 INPUT
			this->R = R; // net ID: R lsb: 0  msb: 0 INPUT
			this->S = S; // net ID: S lsb: 0  msb: 0 INPUT
			
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
