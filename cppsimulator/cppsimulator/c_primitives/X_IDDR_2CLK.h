/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_IDDR_2CLK: public Primitive{

		//Verilog Parameters:
		parameter_string_t DDR_CLK_EDGE;
		parameter_string_t INIT_Q1;
		parameter_string_t INIT_Q2;
		parameter_string_t SRTYPE;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* Q1; // net ID: Q1 lsb: 0  msb: 0 OUTPUT
		NetFlow* Q2; // net ID: Q2 lsb: 0  msb: 0 OUTPUT
		NetFlow* C; // net ID: C lsb: 0  msb: 0 INPUT
		NetFlow* CB; // net ID: CB lsb: 0  msb: 0 INPUT
		NetFlow* CE; // net ID: CE lsb: 0  msb: 0 INPUT
		NetFlow* D; // net ID: D lsb: 0  msb: 0 INPUT
		NetFlow* R; // net ID: R lsb: 0  msb: 0 INPUT
		NetFlow* S; // net ID: S lsb: 0  msb: 0 INPUT
		
		X_IDDR_2CLK(
			const char * name,
			//Verilog Parameters:
			parameter_string_t DDR_CLK_EDGE, // Default: "OPPOSITE_EDGE"
			parameter_string_t INIT_Q1, // Default: 1'b0
			parameter_string_t INIT_Q2, // Default: 1'b0
			parameter_string_t SRTYPE, // Default: "SYNC"
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* Q1, // net ID: Q1 lsb: 0  msb: 0 OUTPUT
			NetFlow* Q2, // net ID: Q2 lsb: 0  msb: 0 OUTPUT
			NetFlow* C, // net ID: C lsb: 0  msb: 0 INPUT
			NetFlow* CB, // net ID: CB lsb: 0  msb: 0 INPUT
			NetFlow* CE, // net ID: CE lsb: 0  msb: 0 INPUT
			NetFlow* D, // net ID: D lsb: 0  msb: 0 INPUT
			NetFlow* R, // net ID: R lsb: 0  msb: 0 INPUT
			NetFlow* S // net ID: S lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->DDR_CLK_EDGE = DDR_CLK_EDGE; // Default: "OPPOSITE_EDGE"
			this->INIT_Q1 = INIT_Q1; // Default: 1'b0
			this->INIT_Q2 = INIT_Q2; // Default: 1'b0
			this->SRTYPE = SRTYPE; // Default: "SYNC"
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->Q1 = Q1; // net ID: Q1 lsb: 0  msb: 0 OUTPUT
			this->Q2 = Q2; // net ID: Q2 lsb: 0  msb: 0 OUTPUT
			this->C = C; // net ID: C lsb: 0  msb: 0 INPUT
			this->CB = CB; // net ID: CB lsb: 0  msb: 0 INPUT
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
