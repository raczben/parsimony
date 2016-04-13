/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_DSP48: public Primitive{

		//Verilog Parameters:
		parameter_string_t AREG;
		parameter_string_t BREG;
		parameter_string_t B_INPUT;
		parameter_string_t CARRYINREG;
		parameter_string_t CARRYINSELREG;
		parameter_string_t CREG;
		parameter_string_t LEGACY_MODE;
		parameter_string_t LOC;
		parameter_string_t MREG;
		parameter_string_t OPMODEREG;
		parameter_string_t PREG;
		parameter_string_t SUBTRACTREG;
		//Verilog Ports in definition order:
		NetFlow* BCOUT; // net ID: BCOUT lsb: 0  msb: 0 OUTPUT
		NetFlow* P; // net ID: P lsb: 0  msb: 0 OUTPUT
		NetFlow* PCOUT; // net ID: PCOUT lsb: 0  msb: 0 OUTPUT
		NetFlow* A; // net ID: A lsb: 0  msb: 17 INPUT
		NetFlow* B; // net ID: B lsb: 0  msb: 17 INPUT
		NetFlow* BCIN; // net ID: BCIN lsb: 0  msb: 17 INPUT
		NetFlow* C; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* CARRYIN; // net ID: CARRYIN lsb: 0  msb: 0 INPUT
		NetFlow* CARRYINSEL; // net ID: CARRYINSEL lsb: 0  msb: 1 INPUT
		NetFlow* CEA; // net ID: CEA lsb: 0  msb: 0 INPUT
		NetFlow* CEB; // net ID: CEB lsb: 0  msb: 0 INPUT
		NetFlow* CEC; // net ID: CEC lsb: 0  msb: 0 INPUT
		NetFlow* CECARRYIN; // net ID: CECARRYIN lsb: 0  msb: 0 INPUT
		NetFlow* CECINSUB; // net ID: CECINSUB lsb: 0  msb: 0 INPUT
		NetFlow* CECTRL; // net ID: CECTRL lsb: 0  msb: 0 INPUT
		NetFlow* CEM; // net ID: CEM lsb: 0  msb: 0 INPUT
		NetFlow* CEP; // net ID: CEP lsb: 0  msb: 0 INPUT
		NetFlow* CLK; // net ID: CLK lsb: 0  msb: 0 INPUT
		NetFlow* OPMODE; // net ID: OPMODE lsb: 0  msb: 6 INPUT
		NetFlow* PCIN; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* RSTA; // net ID: RSTA lsb: 0  msb: 0 INPUT
		NetFlow* RSTB; // net ID: RSTB lsb: 0  msb: 0 INPUT
		NetFlow* RSTC; // net ID: RSTC lsb: 0  msb: 0 INPUT
		NetFlow* RSTCARRYIN; // net ID: RSTCARRYIN lsb: 0  msb: 0 INPUT
		NetFlow* RSTCTRL; // net ID: RSTCTRL lsb: 0  msb: 0 INPUT
		NetFlow* RSTM; // net ID: RSTM lsb: 0  msb: 0 INPUT
		NetFlow* RSTP; // net ID: RSTP lsb: 0  msb: 0 INPUT
		NetFlow* SUBTRACT; // net ID: SUBTRACT lsb: 0  msb: 0 INPUT
		
		X_DSP48(
			const char * name,
			//Verilog Parameters:
			parameter_string_t AREG, // Default: 1
			parameter_string_t BREG, // Default: 1
			parameter_string_t B_INPUT, // Default: "DIRECT"
			parameter_string_t CARRYINREG, // Default: 1
			parameter_string_t CARRYINSELREG, // Default: 1
			parameter_string_t CREG, // Default: 1
			parameter_string_t LEGACY_MODE, // Default: "MULT18X18S"
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_string_t MREG, // Default: 1
			parameter_string_t OPMODEREG, // Default: 1
			parameter_string_t PREG, // Default: 1
			parameter_string_t SUBTRACTREG, // Default: 1
			//Verilog Ports in definition order:
			NetFlow* BCOUT, // net ID: BCOUT lsb: 0  msb: 0 OUTPUT
			NetFlow* P, // net ID: P lsb: 0  msb: 0 OUTPUT
			NetFlow* PCOUT, // net ID: PCOUT lsb: 0  msb: 0 OUTPUT
			NetFlow* A, // net ID: A lsb: 0  msb: 17 INPUT
			NetFlow* B, // net ID: B lsb: 0  msb: 17 INPUT
			NetFlow* BCIN, // net ID: BCIN lsb: 0  msb: 17 INPUT
			NetFlow* C, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* CARRYIN, // net ID: CARRYIN lsb: 0  msb: 0 INPUT
			NetFlow* CARRYINSEL, // net ID: CARRYINSEL lsb: 0  msb: 1 INPUT
			NetFlow* CEA, // net ID: CEA lsb: 0  msb: 0 INPUT
			NetFlow* CEB, // net ID: CEB lsb: 0  msb: 0 INPUT
			NetFlow* CEC, // net ID: CEC lsb: 0  msb: 0 INPUT
			NetFlow* CECARRYIN, // net ID: CECARRYIN lsb: 0  msb: 0 INPUT
			NetFlow* CECINSUB, // net ID: CECINSUB lsb: 0  msb: 0 INPUT
			NetFlow* CECTRL, // net ID: CECTRL lsb: 0  msb: 0 INPUT
			NetFlow* CEM, // net ID: CEM lsb: 0  msb: 0 INPUT
			NetFlow* CEP, // net ID: CEP lsb: 0  msb: 0 INPUT
			NetFlow* CLK, // net ID: CLK lsb: 0  msb: 0 INPUT
			NetFlow* OPMODE, // net ID: OPMODE lsb: 0  msb: 6 INPUT
			NetFlow* PCIN, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* RSTA, // net ID: RSTA lsb: 0  msb: 0 INPUT
			NetFlow* RSTB, // net ID: RSTB lsb: 0  msb: 0 INPUT
			NetFlow* RSTC, // net ID: RSTC lsb: 0  msb: 0 INPUT
			NetFlow* RSTCARRYIN, // net ID: RSTCARRYIN lsb: 0  msb: 0 INPUT
			NetFlow* RSTCTRL, // net ID: RSTCTRL lsb: 0  msb: 0 INPUT
			NetFlow* RSTM, // net ID: RSTM lsb: 0  msb: 0 INPUT
			NetFlow* RSTP, // net ID: RSTP lsb: 0  msb: 0 INPUT
			NetFlow* SUBTRACT // net ID: SUBTRACT lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
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
			this->BCOUT = BCOUT; // net ID: BCOUT lsb: 0  msb: 0 OUTPUT
			this->P = P; // net ID: P lsb: 0  msb: 0 OUTPUT
			this->PCOUT = PCOUT; // net ID: PCOUT lsb: 0  msb: 0 OUTPUT
			this->A = A; // net ID: A lsb: 0  msb: 17 INPUT
			this->B = B; // net ID: B lsb: 0  msb: 17 INPUT
			this->BCIN = BCIN; // net ID: BCIN lsb: 0  msb: 17 INPUT
			this->C = C; // net ID: C lsb: 0  msb: 47 INPUT
			this->CARRYIN = CARRYIN; // net ID: CARRYIN lsb: 0  msb: 0 INPUT
			this->CARRYINSEL = CARRYINSEL; // net ID: CARRYINSEL lsb: 0  msb: 1 INPUT
			this->CEA = CEA; // net ID: CEA lsb: 0  msb: 0 INPUT
			this->CEB = CEB; // net ID: CEB lsb: 0  msb: 0 INPUT
			this->CEC = CEC; // net ID: CEC lsb: 0  msb: 0 INPUT
			this->CECARRYIN = CECARRYIN; // net ID: CECARRYIN lsb: 0  msb: 0 INPUT
			this->CECINSUB = CECINSUB; // net ID: CECINSUB lsb: 0  msb: 0 INPUT
			this->CECTRL = CECTRL; // net ID: CECTRL lsb: 0  msb: 0 INPUT
			this->CEM = CEM; // net ID: CEM lsb: 0  msb: 0 INPUT
			this->CEP = CEP; // net ID: CEP lsb: 0  msb: 0 INPUT
			this->CLK = CLK; // net ID: CLK lsb: 0  msb: 0 INPUT
			this->OPMODE = OPMODE; // net ID: OPMODE lsb: 0  msb: 6 INPUT
			this->PCIN = PCIN; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->RSTA = RSTA; // net ID: RSTA lsb: 0  msb: 0 INPUT
			this->RSTB = RSTB; // net ID: RSTB lsb: 0  msb: 0 INPUT
			this->RSTC = RSTC; // net ID: RSTC lsb: 0  msb: 0 INPUT
			this->RSTCARRYIN = RSTCARRYIN; // net ID: RSTCARRYIN lsb: 0  msb: 0 INPUT
			this->RSTCTRL = RSTCTRL; // net ID: RSTCTRL lsb: 0  msb: 0 INPUT
			this->RSTM = RSTM; // net ID: RSTM lsb: 0  msb: 0 INPUT
			this->RSTP = RSTP; // net ID: RSTP lsb: 0  msb: 0 INPUT
			this->SUBTRACT = SUBTRACT; // net ID: SUBTRACT lsb: 0  msb: 0 INPUT
			
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
