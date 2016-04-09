/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_DSP48A{

		//Verilog Parameters:
		parameter_int_t A0REG;
		parameter_int_t A1REG;
		parameter_int_t B0REG;
		parameter_int_t B1REG;
		parameter_int_t CARRYINREG;
		parameter_string_t CARRYINSEL;
		parameter_int_t CREG;
		parameter_int_t DREG;
		parameter_int_t MREG;
		parameter_int_t OPMODEREG;
		parameter_int_t PREG;
		parameter_string_t RSTTYPE;
		parameter_string_t LOC;
		parameter_string_t B_INPUT;
		//Verilog Ports in definition order:
		NetFlow* BCOUT; // OUTPUT
		NetFlow* CARRYOUT; // OUTPUT
		NetFlow* P; // OUTPUT
		NetFlow* PCOUT; // OUTPUT
		NetFlow* A; // INPUT
		NetFlow* B; // INPUT
		NetFlow* BCIN; // INPUT
		NetFlow* C; // INPUT
		NetFlow* CARRYIN; // INPUT
		NetFlow* CEA; // INPUT
		NetFlow* CEB; // INPUT
		NetFlow* CEC; // INPUT
		NetFlow* CECARRYIN; // INPUT
		NetFlow* CED; // INPUT
		NetFlow* CEM; // INPUT
		NetFlow* CEOPMODE; // INPUT
		NetFlow* CEP; // INPUT
		NetFlow* CLK; // INPUT
		NetFlow* D; // INPUT
		NetFlow* OPMODE; // INPUT
		NetFlow* PCIN; // INPUT
		NetFlow* RSTA; // INPUT
		NetFlow* RSTB; // INPUT
		NetFlow* RSTC; // INPUT
		NetFlow* RSTCARRYIN; // INPUT
		NetFlow* RSTD; // INPUT
		NetFlow* RSTM; // INPUT
		NetFlow* RSTOPMODE; // INPUT
		NetFlow* RSTP; // INPUT
		
	
		X_DSP48A(
			//Verilog Parameters:
			parameter_int_t A0REG, // Default: 0
			parameter_int_t A1REG, // Default: 1
			parameter_int_t B0REG, // Default: 0
			parameter_int_t B1REG, // Default: 1
			parameter_int_t CARRYINREG, // Default: 1
			parameter_string_t CARRYINSEL, // Default: "CARRYIN"
			parameter_int_t CREG, // Default: 1
			parameter_int_t DREG, // Default: 1
			parameter_int_t MREG, // Default: 1
			parameter_int_t OPMODEREG, // Default: 1
			parameter_int_t PREG, // Default: 1
			parameter_string_t RSTTYPE, // Default: "SYNC"
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_string_t B_INPUT, // Default: "DIRECT"
			//Verilog Ports in definition order:
			NetFlow* BCOUT, // OUTPUT
			NetFlow* CARRYOUT, // OUTPUT
			NetFlow* P, // OUTPUT
			NetFlow* PCOUT, // OUTPUT
			NetFlow* A, // INPUT
			NetFlow* B, // INPUT
			NetFlow* BCIN, // INPUT
			NetFlow* C, // INPUT
			NetFlow* CARRYIN, // INPUT
			NetFlow* CEA, // INPUT
			NetFlow* CEB, // INPUT
			NetFlow* CEC, // INPUT
			NetFlow* CECARRYIN, // INPUT
			NetFlow* CED, // INPUT
			NetFlow* CEM, // INPUT
			NetFlow* CEOPMODE, // INPUT
			NetFlow* CEP, // INPUT
			NetFlow* CLK, // INPUT
			NetFlow* D, // INPUT
			NetFlow* OPMODE, // INPUT
			NetFlow* PCIN, // INPUT
			NetFlow* RSTA, // INPUT
			NetFlow* RSTB, // INPUT
			NetFlow* RSTC, // INPUT
			NetFlow* RSTCARRYIN, // INPUT
			NetFlow* RSTD, // INPUT
			NetFlow* RSTM, // INPUT
			NetFlow* RSTOPMODE, // INPUT
			NetFlow* RSTP // INPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->A0REG = A0REG; // Default: 0
			this->A1REG = A1REG; // Default: 1
			this->B0REG = B0REG; // Default: 0
			this->B1REG = B1REG; // Default: 1
			this->CARRYINREG = CARRYINREG; // Default: 1
			this->CARRYINSEL = CARRYINSEL; // Default: "CARRYIN"
			this->CREG = CREG; // Default: 1
			this->DREG = DREG; // Default: 1
			this->MREG = MREG; // Default: 1
			this->OPMODEREG = OPMODEREG; // Default: 1
			this->PREG = PREG; // Default: 1
			this->RSTTYPE = RSTTYPE; // Default: "SYNC"
			this->LOC = LOC; // Default: "UNPLACED"
			this->B_INPUT = B_INPUT; // Default: "DIRECT"
			//Verilog Ports in definition order:
			this->BCOUT = BCOUT; // OUTPUT
			this->CARRYOUT = CARRYOUT; // OUTPUT
			this->P = P; // OUTPUT
			this->PCOUT = PCOUT; // OUTPUT
			this->A = A; // INPUT
			this->B = B; // INPUT
			this->BCIN = BCIN; // INPUT
			this->C = C; // INPUT
			this->CARRYIN = CARRYIN; // INPUT
			this->CEA = CEA; // INPUT
			this->CEB = CEB; // INPUT
			this->CEC = CEC; // INPUT
			this->CECARRYIN = CECARRYIN; // INPUT
			this->CED = CED; // INPUT
			this->CEM = CEM; // INPUT
			this->CEOPMODE = CEOPMODE; // INPUT
			this->CEP = CEP; // INPUT
			this->CLK = CLK; // INPUT
			this->D = D; // INPUT
			this->OPMODE = OPMODE; // INPUT
			this->PCIN = PCIN; // INPUT
			this->RSTA = RSTA; // INPUT
			this->RSTB = RSTB; // INPUT
			this->RSTC = RSTC; // INPUT
			this->RSTCARRYIN = RSTCARRYIN; // INPUT
			this->RSTD = RSTD; // INPUT
			this->RSTM = RSTM; // INPUT
			this->RSTOPMODE = RSTOPMODE; // INPUT
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
