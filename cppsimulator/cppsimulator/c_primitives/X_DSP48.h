/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_DSP48{

		//Verilog Parameters:
		parameter_int_t AREG;
		parameter_int_t BREG;
		parameter_string_t B_INPUT;
		parameter_int_t CARRYINREG;
		parameter_int_t CARRYINSELREG;
		parameter_int_t CREG;
		parameter_string_t LEGACY_MODE;
		parameter_string_t LOC;
		parameter_int_t MREG;
		parameter_int_t OPMODEREG;
		parameter_int_t PREG;
		parameter_int_t SUBTRACTREG;
		//Verilog Ports in definition order:
		NetFlow* BCOUT; // OUTPUT
		NetFlow* P; // OUTPUT
		NetFlow* PCOUT; // OUTPUT
		NetFlow* A; // INPUT
		NetFlow* B; // INPUT
		NetFlow* BCIN; // INPUT
		NetFlow* C; // INPUT
		NetFlow* CARRYIN; // INPUT
		NetFlow* CARRYINSEL; // INPUT
		NetFlow* CEA; // INPUT
		NetFlow* CEB; // INPUT
		NetFlow* CEC; // INPUT
		NetFlow* CECARRYIN; // INPUT
		NetFlow* CECINSUB; // INPUT
		NetFlow* CECTRL; // INPUT
		NetFlow* CEM; // INPUT
		NetFlow* CEP; // INPUT
		NetFlow* CLK; // INPUT
		NetFlow* OPMODE; // INPUT
		NetFlow* PCIN; // INPUT
		NetFlow* RSTA; // INPUT
		NetFlow* RSTB; // INPUT
		NetFlow* RSTC; // INPUT
		NetFlow* RSTCARRYIN; // INPUT
		NetFlow* RSTCTRL; // INPUT
		NetFlow* RSTM; // INPUT
		NetFlow* RSTP; // INPUT
		NetFlow* SUBTRACT; // INPUT
		
	
		X_DSP48(
			//Verilog Parameters:
			parameter_int_t AREG, // Default: 1
			parameter_int_t BREG, // Default: 1
			parameter_string_t B_INPUT, // Default: "DIRECT"
			parameter_int_t CARRYINREG, // Default: 1
			parameter_int_t CARRYINSELREG, // Default: 1
			parameter_int_t CREG, // Default: 1
			parameter_string_t LEGACY_MODE, // Default: "MULT18X18S"
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_int_t MREG, // Default: 1
			parameter_int_t OPMODEREG, // Default: 1
			parameter_int_t PREG, // Default: 1
			parameter_int_t SUBTRACTREG, // Default: 1
			//Verilog Ports in definition order:
			NetFlow* BCOUT, // OUTPUT
			NetFlow* P, // OUTPUT
			NetFlow* PCOUT, // OUTPUT
			NetFlow* A, // INPUT
			NetFlow* B, // INPUT
			NetFlow* BCIN, // INPUT
			NetFlow* C, // INPUT
			NetFlow* CARRYIN, // INPUT
			NetFlow* CARRYINSEL, // INPUT
			NetFlow* CEA, // INPUT
			NetFlow* CEB, // INPUT
			NetFlow* CEC, // INPUT
			NetFlow* CECARRYIN, // INPUT
			NetFlow* CECINSUB, // INPUT
			NetFlow* CECTRL, // INPUT
			NetFlow* CEM, // INPUT
			NetFlow* CEP, // INPUT
			NetFlow* CLK, // INPUT
			NetFlow* OPMODE, // INPUT
			NetFlow* PCIN, // INPUT
			NetFlow* RSTA, // INPUT
			NetFlow* RSTB, // INPUT
			NetFlow* RSTC, // INPUT
			NetFlow* RSTCARRYIN, // INPUT
			NetFlow* RSTCTRL, // INPUT
			NetFlow* RSTM, // INPUT
			NetFlow* RSTP, // INPUT
			NetFlow* SUBTRACT // INPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->AREG = AREG; // Default: 1
			this->BREG = BREG; // Default: 1
			this->B_INPUT = B_INPUT; // Default: "DIRECT"
			this->CARRYINREG = CARRYINREG; // Default: 1
			this->CARRYINSELREG = CARRYINSELREG; // Default: 1
			this->CREG = CREG; // Default: 1
			this->LEGACY_MODE = LEGACY_MODE; // Default: "MULT18X18S"
			this->LOC = LOC; // Default: "UNPLACED"
			this->MREG = MREG; // Default: 1
			this->OPMODEREG = OPMODEREG; // Default: 1
			this->PREG = PREG; // Default: 1
			this->SUBTRACTREG = SUBTRACTREG; // Default: 1
			//Verilog Ports in definition order:
			this->BCOUT = BCOUT; // OUTPUT
			this->P = P; // OUTPUT
			this->PCOUT = PCOUT; // OUTPUT
			this->A = A; // INPUT
			this->B = B; // INPUT
			this->BCIN = BCIN; // INPUT
			this->C = C; // INPUT
			this->CARRYIN = CARRYIN; // INPUT
			this->CARRYINSEL = CARRYINSEL; // INPUT
			this->CEA = CEA; // INPUT
			this->CEB = CEB; // INPUT
			this->CEC = CEC; // INPUT
			this->CECARRYIN = CECARRYIN; // INPUT
			this->CECINSUB = CECINSUB; // INPUT
			this->CECTRL = CECTRL; // INPUT
			this->CEM = CEM; // INPUT
			this->CEP = CEP; // INPUT
			this->CLK = CLK; // INPUT
			this->OPMODE = OPMODE; // INPUT
			this->PCIN = PCIN; // INPUT
			this->RSTA = RSTA; // INPUT
			this->RSTB = RSTB; // INPUT
			this->RSTC = RSTC; // INPUT
			this->RSTCARRYIN = RSTCARRYIN; // INPUT
			this->RSTCTRL = RSTCTRL; // INPUT
			this->RSTM = RSTM; // INPUT
			this->RSTP = RSTP; // INPUT
			this->SUBTRACT = SUBTRACT; // INPUT
		
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
