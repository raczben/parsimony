/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_ODDR: public Primitive{

		//Verilog Parameters:
		parameter_string_t DDR_CLK_EDGE;
		parameter_string_t INIT;
		parameter_string_t SRTYPE;
		parameter_string_t LOC;
		parameter_enum_t MSGON;
		parameter_enum_t XON;
		//Verilog Ports in definition order:
		NetFlow* Q; // net ID: Q lsb: 0  msb: 0 OUTPUT
		NetFlow* C; // net ID: C lsb: 0  msb: 0 INPUT
		NetFlow* CE; // net ID: CE lsb: 0  msb: 0 INPUT
		NetFlow* D1; // net ID: D1 lsb: 0  msb: 0 INPUT
		NetFlow* D2; // net ID: D2 lsb: 0  msb: 0 INPUT
		NetFlow* R; // net ID: R lsb: 0  msb: 0 INPUT
		NetFlow* S; // net ID: S lsb: 0  msb: 0 INPUT
		
		X_ODDR(
			const char * name,
			//Verilog Parameters:
			parameter_string_t DDR_CLK_EDGE, // Default: "OPPOSITE_EDGE"
			parameter_string_t INIT, // Default: 1'b0
			parameter_string_t SRTYPE, // Default: "SYNC"
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_enum_t MSGON, // Default: "TRUE"
			parameter_enum_t XON, // Default: "TRUE"
			//Verilog Ports in definition order:
			NetFlow* Q, // net ID: Q lsb: 0  msb: 0 OUTPUT
			NetFlow* C, // net ID: C lsb: 0  msb: 0 INPUT
			NetFlow* CE, // net ID: CE lsb: 0  msb: 0 INPUT
			NetFlow* D1, // net ID: D1 lsb: 0  msb: 0 INPUT
			NetFlow* D2, // net ID: D2 lsb: 0  msb: 0 INPUT
			NetFlow* R, // net ID: R lsb: 0  msb: 0 INPUT
			NetFlow* S // net ID: S lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->DDR_CLK_EDGE = DDR_CLK_EDGE; // Default: "OPPOSITE_EDGE"
			this->INIT = INIT; // Default: 1'b0
			this->SRTYPE = SRTYPE; // Default: "SYNC"
			this->LOC = LOC; // Default: "UNPLACED"
			this->MSGON = MSGON; // Default: "TRUE"
			this->XON = XON; // Default: "TRUE"
			//Verilog Ports in definition order:
			this->Q = Q; // net ID: Q lsb: 0  msb: 0 OUTPUT
			this->C = C; // net ID: C lsb: 0  msb: 0 INPUT
			this->CE = CE; // net ID: CE lsb: 0  msb: 0 INPUT
			this->D1 = D1; // net ID: D1 lsb: 0  msb: 0 INPUT
			this->D2 = D2; // net ID: D2 lsb: 0  msb: 0 INPUT
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
