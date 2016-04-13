/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_DSP48A: public Primitive{

		//Verilog Parameters:
		parameter_string_t A0REG;
		parameter_string_t A1REG;
		parameter_string_t B0REG;
		parameter_string_t B1REG;
		parameter_string_t CARRYINREG;
		parameter_string_t CARRYINSEL;
		parameter_string_t CREG;
		parameter_string_t DREG;
		parameter_string_t MREG;
		parameter_string_t OPMODEREG;
		parameter_string_t PREG;
		parameter_string_t RSTTYPE;
		parameter_string_t LOC;
		parameter_string_t B_INPUT;
		//Verilog Ports in definition order:
		NetFlow* BCOUT; // net ID: BCOUT lsb: 0  msb: 0 OUTPUT
		NetFlow* CARRYOUT; // net ID: CARRYOUT lsb: 0  msb: 0 OUTPUT
		NetFlow* P; // net ID: P lsb: 0  msb: 0 OUTPUT
		NetFlow* PCOUT; // net ID: PCOUT lsb: 0  msb: 0 OUTPUT
		NetFlow* A; // net ID: A lsb: 0  msb: 17 INPUT
		NetFlow* B; // net ID: B lsb: 0  msb: 17 INPUT
		NetFlow* BCIN; // net ID: BCIN lsb: 0  msb: 17 INPUT
		NetFlow* C; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* CARRYIN; // net ID: CARRYIN lsb: 0  msb: 0 INPUT
		NetFlow* CEA; // net ID: CEA lsb: 0  msb: 0 INPUT
		NetFlow* CEB; // net ID: CEB lsb: 0  msb: 0 INPUT
		NetFlow* CEC; // net ID: CEC lsb: 0  msb: 0 INPUT
		NetFlow* CECARRYIN; // net ID: CECARRYIN lsb: 0  msb: 0 INPUT
		NetFlow* CED; // net ID: CED lsb: 0  msb: 0 INPUT
		NetFlow* CEM; // net ID: CEM lsb: 0  msb: 0 INPUT
		NetFlow* CEOPMODE; // net ID: CEOPMODE lsb: 0  msb: 0 INPUT
		NetFlow* CEP; // net ID: CEP lsb: 0  msb: 0 INPUT
		NetFlow* CLK; // net ID: CLK lsb: 0  msb: 0 INPUT
		NetFlow* D; // net ID: D lsb: 0  msb: 17 INPUT
		NetFlow* OPMODE; // net ID: OPMODE lsb: 0  msb: 7 INPUT
		NetFlow* PCIN; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* RSTA; // net ID: RSTA lsb: 0  msb: 0 INPUT
		NetFlow* RSTB; // net ID: RSTB lsb: 0  msb: 0 INPUT
		NetFlow* RSTC; // net ID: RSTC lsb: 0  msb: 0 INPUT
		NetFlow* RSTCARRYIN; // net ID: RSTCARRYIN lsb: 0  msb: 0 INPUT
		NetFlow* RSTD; // net ID: RSTD lsb: 0  msb: 0 INPUT
		NetFlow* RSTM; // net ID: RSTM lsb: 0  msb: 0 INPUT
		NetFlow* RSTOPMODE; // net ID: RSTOPMODE lsb: 0  msb: 0 INPUT
		NetFlow* RSTP; // net ID: RSTP lsb: 0  msb: 0 INPUT
		
		X_DSP48A(
			const char * name,
			//Verilog Parameters:
			parameter_string_t A0REG, // Default: 0
			parameter_string_t A1REG, // Default: 1
			parameter_string_t B0REG, // Default: 0
			parameter_string_t B1REG, // Default: 1
			parameter_string_t CARRYINREG, // Default: 1
			parameter_string_t CARRYINSEL, // Default: "CARRYIN"
			parameter_string_t CREG, // Default: 1
			parameter_string_t DREG, // Default: 1
			parameter_string_t MREG, // Default: 1
			parameter_string_t OPMODEREG, // Default: 1
			parameter_string_t PREG, // Default: 1
			parameter_string_t RSTTYPE, // Default: "SYNC"
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_string_t B_INPUT, // Default: "DIRECT"
			//Verilog Ports in definition order:
			NetFlow* BCOUT, // net ID: BCOUT lsb: 0  msb: 0 OUTPUT
			NetFlow* CARRYOUT, // net ID: CARRYOUT lsb: 0  msb: 0 OUTPUT
			NetFlow* P, // net ID: P lsb: 0  msb: 0 OUTPUT
			NetFlow* PCOUT, // net ID: PCOUT lsb: 0  msb: 0 OUTPUT
			NetFlow* A, // net ID: A lsb: 0  msb: 17 INPUT
			NetFlow* B, // net ID: B lsb: 0  msb: 17 INPUT
			NetFlow* BCIN, // net ID: BCIN lsb: 0  msb: 17 INPUT
			NetFlow* C, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* CARRYIN, // net ID: CARRYIN lsb: 0  msb: 0 INPUT
			NetFlow* CEA, // net ID: CEA lsb: 0  msb: 0 INPUT
			NetFlow* CEB, // net ID: CEB lsb: 0  msb: 0 INPUT
			NetFlow* CEC, // net ID: CEC lsb: 0  msb: 0 INPUT
			NetFlow* CECARRYIN, // net ID: CECARRYIN lsb: 0  msb: 0 INPUT
			NetFlow* CED, // net ID: CED lsb: 0  msb: 0 INPUT
			NetFlow* CEM, // net ID: CEM lsb: 0  msb: 0 INPUT
			NetFlow* CEOPMODE, // net ID: CEOPMODE lsb: 0  msb: 0 INPUT
			NetFlow* CEP, // net ID: CEP lsb: 0  msb: 0 INPUT
			NetFlow* CLK, // net ID: CLK lsb: 0  msb: 0 INPUT
			NetFlow* D, // net ID: D lsb: 0  msb: 17 INPUT
			NetFlow* OPMODE, // net ID: OPMODE lsb: 0  msb: 7 INPUT
			NetFlow* PCIN, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* RSTA, // net ID: RSTA lsb: 0  msb: 0 INPUT
			NetFlow* RSTB, // net ID: RSTB lsb: 0  msb: 0 INPUT
			NetFlow* RSTC, // net ID: RSTC lsb: 0  msb: 0 INPUT
			NetFlow* RSTCARRYIN, // net ID: RSTCARRYIN lsb: 0  msb: 0 INPUT
			NetFlow* RSTD, // net ID: RSTD lsb: 0  msb: 0 INPUT
			NetFlow* RSTM, // net ID: RSTM lsb: 0  msb: 0 INPUT
			NetFlow* RSTOPMODE, // net ID: RSTOPMODE lsb: 0  msb: 0 INPUT
			NetFlow* RSTP // net ID: RSTP lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
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
			this->BCOUT = BCOUT; // net ID: BCOUT lsb: 0  msb: 0 OUTPUT
			this->CARRYOUT = CARRYOUT; // net ID: CARRYOUT lsb: 0  msb: 0 OUTPUT
			this->P = P; // net ID: P lsb: 0  msb: 0 OUTPUT
			this->PCOUT = PCOUT; // net ID: PCOUT lsb: 0  msb: 0 OUTPUT
			this->A = A; // net ID: A lsb: 0  msb: 17 INPUT
			this->B = B; // net ID: B lsb: 0  msb: 17 INPUT
			this->BCIN = BCIN; // net ID: BCIN lsb: 0  msb: 17 INPUT
			this->C = C; // net ID: C lsb: 0  msb: 47 INPUT
			this->CARRYIN = CARRYIN; // net ID: CARRYIN lsb: 0  msb: 0 INPUT
			this->CEA = CEA; // net ID: CEA lsb: 0  msb: 0 INPUT
			this->CEB = CEB; // net ID: CEB lsb: 0  msb: 0 INPUT
			this->CEC = CEC; // net ID: CEC lsb: 0  msb: 0 INPUT
			this->CECARRYIN = CECARRYIN; // net ID: CECARRYIN lsb: 0  msb: 0 INPUT
			this->CED = CED; // net ID: CED lsb: 0  msb: 0 INPUT
			this->CEM = CEM; // net ID: CEM lsb: 0  msb: 0 INPUT
			this->CEOPMODE = CEOPMODE; // net ID: CEOPMODE lsb: 0  msb: 0 INPUT
			this->CEP = CEP; // net ID: CEP lsb: 0  msb: 0 INPUT
			this->CLK = CLK; // net ID: CLK lsb: 0  msb: 0 INPUT
			this->D = D; // net ID: D lsb: 0  msb: 17 INPUT
			this->OPMODE = OPMODE; // net ID: OPMODE lsb: 0  msb: 7 INPUT
			this->PCIN = PCIN; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->RSTA = RSTA; // net ID: RSTA lsb: 0  msb: 0 INPUT
			this->RSTB = RSTB; // net ID: RSTB lsb: 0  msb: 0 INPUT
			this->RSTC = RSTC; // net ID: RSTC lsb: 0  msb: 0 INPUT
			this->RSTCARRYIN = RSTCARRYIN; // net ID: RSTCARRYIN lsb: 0  msb: 0 INPUT
			this->RSTD = RSTD; // net ID: RSTD lsb: 0  msb: 0 INPUT
			this->RSTM = RSTM; // net ID: RSTM lsb: 0  msb: 0 INPUT
			this->RSTOPMODE = RSTOPMODE; // net ID: RSTOPMODE lsb: 0  msb: 0 INPUT
			this->RSTP = RSTP; // net ID: RSTP lsb: 0  msb: 0 INPUT
			
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
