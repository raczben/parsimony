/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_MULT18X18SIO{

		//Verilog Parameters:
		parameter_int_t AREG;
		parameter_int_t BREG;
		parameter_string_t B_INPUT;
		parameter_string_t LOC;
		parameter_int_t PREG;
		//Verilog Ports in definition order:
		NetFlow* BCOUT; // OUTPUT
		NetFlow* P; // OUTPUT
		NetFlow* A; // INPUT
		NetFlow* B; // INPUT
		NetFlow* BCIN; // INPUT
		NetFlow* CEA; // INPUT
		NetFlow* CEB; // INPUT
		NetFlow* CEP; // INPUT
		NetFlow* CLK; // INPUT
		NetFlow* RSTA; // INPUT
		NetFlow* RSTB; // INPUT
		NetFlow* RSTP; // INPUT
		
	
		X_MULT18X18SIO(
			//Verilog Parameters:
			parameter_int_t AREG, // Default: 1
			parameter_int_t BREG, // Default: 1
			parameter_string_t B_INPUT, // Default: "DIRECT"
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_int_t PREG, // Default: 1
			//Verilog Ports in definition order:
			NetFlow* BCOUT, // OUTPUT
			NetFlow* P, // OUTPUT
			NetFlow* A, // INPUT
			NetFlow* B, // INPUT
			NetFlow* BCIN, // INPUT
			NetFlow* CEA, // INPUT
			NetFlow* CEB, // INPUT
			NetFlow* CEP, // INPUT
			NetFlow* CLK, // INPUT
			NetFlow* RSTA, // INPUT
			NetFlow* RSTB, // INPUT
			NetFlow* RSTP // INPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->AREG = AREG; // Default: 1
			this->BREG = BREG; // Default: 1
			this->B_INPUT = B_INPUT; // Default: "DIRECT"
			this->LOC = LOC; // Default: "UNPLACED"
			this->PREG = PREG; // Default: 1
			//Verilog Ports in definition order:
			this->BCOUT = BCOUT; // OUTPUT
			this->P = P; // OUTPUT
			this->A = A; // INPUT
			this->B = B; // INPUT
			this->BCIN = BCIN; // INPUT
			this->CEA = CEA; // INPUT
			this->CEB = CEB; // INPUT
			this->CEP = CEP; // INPUT
			this->CLK = CLK; // INPUT
			this->RSTA = RSTA; // INPUT
			this->RSTB = RSTB; // INPUT
			this->RSTP = RSTP; // INPUT
		
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
