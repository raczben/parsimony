/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_ODDR{

		//Verilog Parameters:
		parameter_string_t DDR_CLK_EDGE;
		parameter_int_t INIT;
		parameter_string_t SRTYPE;
		parameter_string_t LOC;
		parameter_enum_t MSGON;
		parameter_enum_t XON;
		//Verilog Ports in definition order:
		NetFlow* Q; // OUTPUT
		NetFlow* C; // INPUT
		NetFlow* CE; // INPUT
		NetFlow* D1; // INPUT
		NetFlow* D2; // INPUT
		NetFlow* R; // INPUT
		NetFlow* S; // INPUT
		
	
		X_ODDR(
			//Verilog Parameters:
			parameter_string_t DDR_CLK_EDGE, // Default: "OPPOSITE_EDGE"
			parameter_int_t INIT, // Default: 1'b0
			parameter_string_t SRTYPE, // Default: "SYNC"
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_enum_t MSGON, // Default: "TRUE"
			parameter_enum_t XON, // Default: "TRUE"
			//Verilog Ports in definition order:
			NetFlow* Q, // OUTPUT
			NetFlow* C, // INPUT
			NetFlow* CE, // INPUT
			NetFlow* D1, // INPUT
			NetFlow* D2, // INPUT
			NetFlow* R, // INPUT
			NetFlow* S // INPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->DDR_CLK_EDGE = DDR_CLK_EDGE; // Default: "OPPOSITE_EDGE"
			this->INIT = INIT; // Default: 1'b0
			this->SRTYPE = SRTYPE; // Default: "SYNC"
			this->LOC = LOC; // Default: "UNPLACED"
			this->MSGON = MSGON; // Default: "TRUE"
			this->XON = XON; // Default: "TRUE"
			//Verilog Ports in definition order:
			this->Q = Q; // OUTPUT
			this->C = C; // INPUT
			this->CE = CE; // INPUT
			this->D1 = D1; // INPUT
			this->D2 = D2; // INPUT
			this->R = R; // INPUT
			this->S = S; // INPUT
		
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
