/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_IDDR{

		//Verilog Parameters:
		parameter_string_t DDR_CLK_EDGE;
		parameter_int_t INIT_Q1;
		parameter_int_t INIT_Q2;
		parameter_string_t SRTYPE;
		parameter_string_t LOC;
		parameter_enum_t MSGON;
		parameter_enum_t XON;
		//Verilog Ports in definition order:
		NetFlow* Q1; // OUTPUT
		NetFlow* Q2; // OUTPUT
		NetFlow* C; // INPUT
		NetFlow* CE; // INPUT
		NetFlow* D; // INPUT
		NetFlow* R; // INPUT
		NetFlow* S; // INPUT
		
	
		X_IDDR(
			//Verilog Parameters:
			parameter_string_t DDR_CLK_EDGE, // Default: "OPPOSITE_EDGE"
			parameter_int_t INIT_Q1, // Default: 1'b0
			parameter_int_t INIT_Q2, // Default: 1'b0
			parameter_string_t SRTYPE, // Default: "SYNC"
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_enum_t MSGON, // Default: "TRUE"
			parameter_enum_t XON, // Default: "TRUE"
			//Verilog Ports in definition order:
			NetFlow* Q1, // OUTPUT
			NetFlow* Q2, // OUTPUT
			NetFlow* C, // INPUT
			NetFlow* CE, // INPUT
			NetFlow* D, // INPUT
			NetFlow* R, // INPUT
			NetFlow* S // INPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->DDR_CLK_EDGE = DDR_CLK_EDGE; // Default: "OPPOSITE_EDGE"
			this->INIT_Q1 = INIT_Q1; // Default: 1'b0
			this->INIT_Q2 = INIT_Q2; // Default: 1'b0
			this->SRTYPE = SRTYPE; // Default: "SYNC"
			this->LOC = LOC; // Default: "UNPLACED"
			this->MSGON = MSGON; // Default: "TRUE"
			this->XON = XON; // Default: "TRUE"
			//Verilog Ports in definition order:
			this->Q1 = Q1; // OUTPUT
			this->Q2 = Q2; // OUTPUT
			this->C = C; // INPUT
			this->CE = CE; // INPUT
			this->D = D; // INPUT
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
