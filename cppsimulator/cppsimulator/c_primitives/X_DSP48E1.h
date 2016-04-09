/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_DSP48E1{

		//Verilog Parameters:
		parameter_int_t ACASCREG;
		parameter_int_t ADREG;
		parameter_int_t ALUMODEREG;
		parameter_int_t AREG;
		parameter_string_t AUTORESET_PATDET;
		parameter_string_t A_INPUT;
		parameter_int_t BCASCREG;
		parameter_int_t BREG;
		parameter_string_t B_INPUT;
		parameter_int_t CARRYINREG;
		parameter_int_t CARRYINSELREG;
		parameter_int_t CREG;
		parameter_int_t DREG;
		parameter_int_t INMODEREG;
		parameter_int_t MASK;
		parameter_int_t MREG;
		parameter_int_t OPMODEREG;
		parameter_int_t PATTERN;
		parameter_int_t PREG;
		parameter_string_t SEL_MASK;
		parameter_string_t SEL_PATTERN;
		parameter_enum_t USE_DPORT;
		parameter_string_t USE_MULT;
		parameter_string_t USE_PATTERN_DETECT;
		parameter_string_t USE_SIMD;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* ACOUT; // OUTPUT
		NetFlow* BCOUT; // OUTPUT
		NetFlow* CARRYCASCOUT; // OUTPUT
		NetFlow* CARRYOUT; // OUTPUT
		NetFlow* MULTSIGNOUT; // OUTPUT
		NetFlow* OVERFLOW; // OUTPUT
		NetFlow* P; // OUTPUT
		NetFlow* PATTERNBDETECT; // OUTPUT
		NetFlow* PATTERNDETECT; // OUTPUT
		NetFlow* PCOUT; // OUTPUT
		NetFlow* UNDERFLOW; // OUTPUT
		NetFlow* A; // INPUT
		NetFlow* ACIN; // INPUT
		NetFlow* ALUMODE; // INPUT
		NetFlow* B; // INPUT
		NetFlow* BCIN; // INPUT
		NetFlow* C; // INPUT
		NetFlow* CARRYCASCIN; // INPUT
		NetFlow* CARRYIN; // INPUT
		NetFlow* CARRYINSEL; // INPUT
		NetFlow* CEA1; // INPUT
		NetFlow* CEA2; // INPUT
		NetFlow* CEAD; // INPUT
		NetFlow* CEALUMODE; // INPUT
		NetFlow* CEB1; // INPUT
		NetFlow* CEB2; // INPUT
		NetFlow* CEC; // INPUT
		NetFlow* CECARRYIN; // INPUT
		NetFlow* CECTRL; // INPUT
		NetFlow* CED; // INPUT
		NetFlow* CEINMODE; // INPUT
		NetFlow* CEM; // INPUT
		NetFlow* CEP; // INPUT
		NetFlow* CLK; // INPUT
		NetFlow* D; // INPUT
		NetFlow* INMODE; // INPUT
		NetFlow* MULTSIGNIN; // INPUT
		NetFlow* OPMODE; // INPUT
		NetFlow* PCIN; // INPUT
		NetFlow* RSTA; // INPUT
		NetFlow* RSTALLCARRYIN; // INPUT
		NetFlow* RSTALUMODE; // INPUT
		NetFlow* RSTB; // INPUT
		NetFlow* RSTC; // INPUT
		NetFlow* RSTCTRL; // INPUT
		NetFlow* RSTD; // INPUT
		NetFlow* RSTINMODE; // INPUT
		NetFlow* RSTM; // INPUT
		NetFlow* RSTP; // INPUT
		
	
		X_DSP48E1(
			//Verilog Parameters:
			parameter_int_t ACASCREG, // Default: 1
			parameter_int_t ADREG, // Default: 1
			parameter_int_t ALUMODEREG, // Default: 1
			parameter_int_t AREG, // Default: 1
			parameter_string_t AUTORESET_PATDET, // Default: "NO_RESET"
			parameter_string_t A_INPUT, // Default: "DIRECT"
			parameter_int_t BCASCREG, // Default: 1
			parameter_int_t BREG, // Default: 1
			parameter_string_t B_INPUT, // Default: "DIRECT"
			parameter_int_t CARRYINREG, // Default: 1
			parameter_int_t CARRYINSELREG, // Default: 1
			parameter_int_t CREG, // Default: 1
			parameter_int_t DREG, // Default: 1
			parameter_int_t INMODEREG, // Default: 1
			parameter_int_t MASK, // Default: 48'h3FFFFFFFFFFF
			parameter_int_t MREG, // Default: 1
			parameter_int_t OPMODEREG, // Default: 1
			parameter_int_t PATTERN, // Default: 48'h000000000000
			parameter_int_t PREG, // Default: 1
			parameter_string_t SEL_MASK, // Default: "MASK"
			parameter_string_t SEL_PATTERN, // Default: "PATTERN"
			parameter_enum_t USE_DPORT, // Default: "FALSE"
			parameter_string_t USE_MULT, // Default: "MULTIPLY"
			parameter_string_t USE_PATTERN_DETECT, // Default: "NO_PATDET"
			parameter_string_t USE_SIMD, // Default: "ONE48"
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* ACOUT, // OUTPUT
			NetFlow* BCOUT, // OUTPUT
			NetFlow* CARRYCASCOUT, // OUTPUT
			NetFlow* CARRYOUT, // OUTPUT
			NetFlow* MULTSIGNOUT, // OUTPUT
			NetFlow* OVERFLOW, // OUTPUT
			NetFlow* P, // OUTPUT
			NetFlow* PATTERNBDETECT, // OUTPUT
			NetFlow* PATTERNDETECT, // OUTPUT
			NetFlow* PCOUT, // OUTPUT
			NetFlow* UNDERFLOW, // OUTPUT
			NetFlow* A, // INPUT
			NetFlow* ACIN, // INPUT
			NetFlow* ALUMODE, // INPUT
			NetFlow* B, // INPUT
			NetFlow* BCIN, // INPUT
			NetFlow* C, // INPUT
			NetFlow* CARRYCASCIN, // INPUT
			NetFlow* CARRYIN, // INPUT
			NetFlow* CARRYINSEL, // INPUT
			NetFlow* CEA1, // INPUT
			NetFlow* CEA2, // INPUT
			NetFlow* CEAD, // INPUT
			NetFlow* CEALUMODE, // INPUT
			NetFlow* CEB1, // INPUT
			NetFlow* CEB2, // INPUT
			NetFlow* CEC, // INPUT
			NetFlow* CECARRYIN, // INPUT
			NetFlow* CECTRL, // INPUT
			NetFlow* CED, // INPUT
			NetFlow* CEINMODE, // INPUT
			NetFlow* CEM, // INPUT
			NetFlow* CEP, // INPUT
			NetFlow* CLK, // INPUT
			NetFlow* D, // INPUT
			NetFlow* INMODE, // INPUT
			NetFlow* MULTSIGNIN, // INPUT
			NetFlow* OPMODE, // INPUT
			NetFlow* PCIN, // INPUT
			NetFlow* RSTA, // INPUT
			NetFlow* RSTALLCARRYIN, // INPUT
			NetFlow* RSTALUMODE, // INPUT
			NetFlow* RSTB, // INPUT
			NetFlow* RSTC, // INPUT
			NetFlow* RSTCTRL, // INPUT
			NetFlow* RSTD, // INPUT
			NetFlow* RSTINMODE, // INPUT
			NetFlow* RSTM, // INPUT
			NetFlow* RSTP // INPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->ACASCREG = ACASCREG; // Default: 1
			this->ADREG = ADREG; // Default: 1
			this->ALUMODEREG = ALUMODEREG; // Default: 1
			this->AREG = AREG; // Default: 1
			this->AUTORESET_PATDET = AUTORESET_PATDET; // Default: "NO_RESET"
			this->A_INPUT = A_INPUT; // Default: "DIRECT"
			this->BCASCREG = BCASCREG; // Default: 1
			this->BREG = BREG; // Default: 1
			this->B_INPUT = B_INPUT; // Default: "DIRECT"
			this->CARRYINREG = CARRYINREG; // Default: 1
			this->CARRYINSELREG = CARRYINSELREG; // Default: 1
			this->CREG = CREG; // Default: 1
			this->DREG = DREG; // Default: 1
			this->INMODEREG = INMODEREG; // Default: 1
			this->MASK = MASK; // Default: 48'h3FFFFFFFFFFF
			this->MREG = MREG; // Default: 1
			this->OPMODEREG = OPMODEREG; // Default: 1
			this->PATTERN = PATTERN; // Default: 48'h000000000000
			this->PREG = PREG; // Default: 1
			this->SEL_MASK = SEL_MASK; // Default: "MASK"
			this->SEL_PATTERN = SEL_PATTERN; // Default: "PATTERN"
			this->USE_DPORT = USE_DPORT; // Default: "FALSE"
			this->USE_MULT = USE_MULT; // Default: "MULTIPLY"
			this->USE_PATTERN_DETECT = USE_PATTERN_DETECT; // Default: "NO_PATDET"
			this->USE_SIMD = USE_SIMD; // Default: "ONE48"
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->ACOUT = ACOUT; // OUTPUT
			this->BCOUT = BCOUT; // OUTPUT
			this->CARRYCASCOUT = CARRYCASCOUT; // OUTPUT
			this->CARRYOUT = CARRYOUT; // OUTPUT
			this->MULTSIGNOUT = MULTSIGNOUT; // OUTPUT
			this->OVERFLOW = OVERFLOW; // OUTPUT
			this->P = P; // OUTPUT
			this->PATTERNBDETECT = PATTERNBDETECT; // OUTPUT
			this->PATTERNDETECT = PATTERNDETECT; // OUTPUT
			this->PCOUT = PCOUT; // OUTPUT
			this->UNDERFLOW = UNDERFLOW; // OUTPUT
			this->A = A; // INPUT
			this->ACIN = ACIN; // INPUT
			this->ALUMODE = ALUMODE; // INPUT
			this->B = B; // INPUT
			this->BCIN = BCIN; // INPUT
			this->C = C; // INPUT
			this->CARRYCASCIN = CARRYCASCIN; // INPUT
			this->CARRYIN = CARRYIN; // INPUT
			this->CARRYINSEL = CARRYINSEL; // INPUT
			this->CEA1 = CEA1; // INPUT
			this->CEA2 = CEA2; // INPUT
			this->CEAD = CEAD; // INPUT
			this->CEALUMODE = CEALUMODE; // INPUT
			this->CEB1 = CEB1; // INPUT
			this->CEB2 = CEB2; // INPUT
			this->CEC = CEC; // INPUT
			this->CECARRYIN = CECARRYIN; // INPUT
			this->CECTRL = CECTRL; // INPUT
			this->CED = CED; // INPUT
			this->CEINMODE = CEINMODE; // INPUT
			this->CEM = CEM; // INPUT
			this->CEP = CEP; // INPUT
			this->CLK = CLK; // INPUT
			this->D = D; // INPUT
			this->INMODE = INMODE; // INPUT
			this->MULTSIGNIN = MULTSIGNIN; // INPUT
			this->OPMODE = OPMODE; // INPUT
			this->PCIN = PCIN; // INPUT
			this->RSTA = RSTA; // INPUT
			this->RSTALLCARRYIN = RSTALLCARRYIN; // INPUT
			this->RSTALUMODE = RSTALUMODE; // INPUT
			this->RSTB = RSTB; // INPUT
			this->RSTC = RSTC; // INPUT
			this->RSTCTRL = RSTCTRL; // INPUT
			this->RSTD = RSTD; // INPUT
			this->RSTINMODE = RSTINMODE; // INPUT
			this->RSTM = RSTM; // INPUT
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
