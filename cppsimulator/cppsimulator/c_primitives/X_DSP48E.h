/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_DSP48E: public Primitive{

		//Verilog Parameters:
		parameter_string_t ACASCREG;
		parameter_string_t ALUMODEREG;
		parameter_string_t AREG;
		parameter_enum_t AUTORESET_PATTERN_DETECT;
		parameter_string_t AUTORESET_PATTERN_DETECT_OPTINV;
		parameter_string_t A_INPUT;
		parameter_string_t BCASCREG;
		parameter_string_t BREG;
		parameter_string_t B_INPUT;
		parameter_string_t CARRYINREG;
		parameter_string_t CARRYINSELREG;
		parameter_string_t CREG;
		parameter_string_t MASK;
		parameter_string_t MREG;
		parameter_string_t MULTCARRYINREG;
		parameter_string_t OPMODEREG;
		parameter_string_t PATTERN;
		parameter_string_t PREG;
		parameter_string_t SEL_MASK;
		parameter_string_t SEL_PATTERN;
		parameter_string_t SEL_ROUNDING_MASK;
		parameter_string_t USE_MULT;
		parameter_string_t USE_PATTERN_DETECT;
		parameter_string_t USE_SIMD;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* ACOUT; // net ID: ACOUT lsb: 0  msb: 0 OUTPUT
		NetFlow* BCOUT; // net ID: BCOUT lsb: 0  msb: 0 OUTPUT
		NetFlow* CARRYCASCOUT; // net ID: CARRYCASCOUT lsb: 0  msb: 0 OUTPUT
		NetFlow* CARRYOUT; // net ID: CARRYOUT lsb: 0  msb: 0 OUTPUT
		NetFlow* MULTSIGNOUT; // net ID: MULTSIGNOUT lsb: 0  msb: 0 OUTPUT
		NetFlow* OVERFLOW; // net ID: OVERFLOW lsb: 0  msb: 0 OUTPUT
		NetFlow* P; // net ID: P lsb: 0  msb: 0 OUTPUT
		NetFlow* PATTERNBDETECT; // net ID: PATTERNBDETECT lsb: 0  msb: 0 OUTPUT
		NetFlow* PATTERNDETECT; // net ID: PATTERNDETECT lsb: 0  msb: 0 OUTPUT
		NetFlow* PCOUT; // net ID: PCOUT lsb: 0  msb: 0 OUTPUT
		NetFlow* UNDERFLOW; // net ID: UNDERFLOW lsb: 0  msb: 0 OUTPUT
		NetFlow* A; // net ID: A lsb: 0  msb: 29 INPUT
		NetFlow* ACIN; // net ID: ACIN lsb: 0  msb: 29 INPUT
		NetFlow* ALUMODE; // net ID: ALUMODE lsb: 0  msb: 3 INPUT
		NetFlow* B; // net ID: B lsb: 0  msb: 17 INPUT
		NetFlow* BCIN; // net ID: BCIN lsb: 0  msb: 17 INPUT
		NetFlow* C; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* CARRYCASCIN; // net ID: CARRYCASCIN lsb: 0  msb: 0 INPUT
		NetFlow* CARRYIN; // net ID: CARRYIN lsb: 0  msb: 0 INPUT
		NetFlow* CARRYINSEL; // net ID: CARRYINSEL lsb: 0  msb: 2 INPUT
		NetFlow* CEA1; // net ID: CEA1 lsb: 0  msb: 0 INPUT
		NetFlow* CEA2; // net ID: CEA2 lsb: 0  msb: 0 INPUT
		NetFlow* CEALUMODE; // net ID: CEALUMODE lsb: 0  msb: 0 INPUT
		NetFlow* CEB1; // net ID: CEB1 lsb: 0  msb: 0 INPUT
		NetFlow* CEB2; // net ID: CEB2 lsb: 0  msb: 0 INPUT
		NetFlow* CEC; // net ID: CEC lsb: 0  msb: 0 INPUT
		NetFlow* CECARRYIN; // net ID: CECARRYIN lsb: 0  msb: 0 INPUT
		NetFlow* CECTRL; // net ID: CECTRL lsb: 0  msb: 0 INPUT
		NetFlow* CEM; // net ID: CEM lsb: 0  msb: 0 INPUT
		NetFlow* CEMULTCARRYIN; // net ID: CEMULTCARRYIN lsb: 0  msb: 0 INPUT
		NetFlow* CEP; // net ID: CEP lsb: 0  msb: 0 INPUT
		NetFlow* CLK; // net ID: CLK lsb: 0  msb: 0 INPUT
		NetFlow* MULTSIGNIN; // net ID: MULTSIGNIN lsb: 0  msb: 0 INPUT
		NetFlow* OPMODE; // net ID: OPMODE lsb: 0  msb: 6 INPUT
		NetFlow* PCIN; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* RSTA; // net ID: RSTA lsb: 0  msb: 0 INPUT
		NetFlow* RSTALLCARRYIN; // net ID: RSTALLCARRYIN lsb: 0  msb: 0 INPUT
		NetFlow* RSTALUMODE; // net ID: RSTALUMODE lsb: 0  msb: 0 INPUT
		NetFlow* RSTB; // net ID: RSTB lsb: 0  msb: 0 INPUT
		NetFlow* RSTC; // net ID: RSTC lsb: 0  msb: 0 INPUT
		NetFlow* RSTCTRL; // net ID: RSTCTRL lsb: 0  msb: 0 INPUT
		NetFlow* RSTM; // net ID: RSTM lsb: 0  msb: 0 INPUT
		NetFlow* RSTP; // net ID: RSTP lsb: 0  msb: 0 INPUT
		
		X_DSP48E(
			const char * name,
			//Verilog Parameters:
			parameter_string_t ACASCREG, // Default: 1
			parameter_string_t ALUMODEREG, // Default: 1
			parameter_string_t AREG, // Default: 1
			parameter_enum_t AUTORESET_PATTERN_DETECT, // Default: "FALSE"
			parameter_string_t AUTORESET_PATTERN_DETECT_OPTINV, // Default: "MATCH"
			parameter_string_t A_INPUT, // Default: "DIRECT"
			parameter_string_t BCASCREG, // Default: 1
			parameter_string_t BREG, // Default: 1
			parameter_string_t B_INPUT, // Default: "DIRECT"
			parameter_string_t CARRYINREG, // Default: 1
			parameter_string_t CARRYINSELREG, // Default: 1
			parameter_string_t CREG, // Default: 1
			parameter_string_t MASK, // Default: 48'h3FFFFFFFFFFF
			parameter_string_t MREG, // Default: 1
			parameter_string_t MULTCARRYINREG, // Default: 1
			parameter_string_t OPMODEREG, // Default: 1
			parameter_string_t PATTERN, // Default: 48'h000000000000
			parameter_string_t PREG, // Default: 1
			parameter_string_t SEL_MASK, // Default: "MASK"
			parameter_string_t SEL_PATTERN, // Default: "PATTERN"
			parameter_string_t SEL_ROUNDING_MASK, // Default: "SEL_MASK"
			parameter_string_t USE_MULT, // Default: "MULT_S"
			parameter_string_t USE_PATTERN_DETECT, // Default: "NO_PATDET"
			parameter_string_t USE_SIMD, // Default: "ONE48"
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* ACOUT, // net ID: ACOUT lsb: 0  msb: 0 OUTPUT
			NetFlow* BCOUT, // net ID: BCOUT lsb: 0  msb: 0 OUTPUT
			NetFlow* CARRYCASCOUT, // net ID: CARRYCASCOUT lsb: 0  msb: 0 OUTPUT
			NetFlow* CARRYOUT, // net ID: CARRYOUT lsb: 0  msb: 0 OUTPUT
			NetFlow* MULTSIGNOUT, // net ID: MULTSIGNOUT lsb: 0  msb: 0 OUTPUT
			NetFlow* OVERFLOW, // net ID: OVERFLOW lsb: 0  msb: 0 OUTPUT
			NetFlow* P, // net ID: P lsb: 0  msb: 0 OUTPUT
			NetFlow* PATTERNBDETECT, // net ID: PATTERNBDETECT lsb: 0  msb: 0 OUTPUT
			NetFlow* PATTERNDETECT, // net ID: PATTERNDETECT lsb: 0  msb: 0 OUTPUT
			NetFlow* PCOUT, // net ID: PCOUT lsb: 0  msb: 0 OUTPUT
			NetFlow* UNDERFLOW, // net ID: UNDERFLOW lsb: 0  msb: 0 OUTPUT
			NetFlow* A, // net ID: A lsb: 0  msb: 29 INPUT
			NetFlow* ACIN, // net ID: ACIN lsb: 0  msb: 29 INPUT
			NetFlow* ALUMODE, // net ID: ALUMODE lsb: 0  msb: 3 INPUT
			NetFlow* B, // net ID: B lsb: 0  msb: 17 INPUT
			NetFlow* BCIN, // net ID: BCIN lsb: 0  msb: 17 INPUT
			NetFlow* C, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* CARRYCASCIN, // net ID: CARRYCASCIN lsb: 0  msb: 0 INPUT
			NetFlow* CARRYIN, // net ID: CARRYIN lsb: 0  msb: 0 INPUT
			NetFlow* CARRYINSEL, // net ID: CARRYINSEL lsb: 0  msb: 2 INPUT
			NetFlow* CEA1, // net ID: CEA1 lsb: 0  msb: 0 INPUT
			NetFlow* CEA2, // net ID: CEA2 lsb: 0  msb: 0 INPUT
			NetFlow* CEALUMODE, // net ID: CEALUMODE lsb: 0  msb: 0 INPUT
			NetFlow* CEB1, // net ID: CEB1 lsb: 0  msb: 0 INPUT
			NetFlow* CEB2, // net ID: CEB2 lsb: 0  msb: 0 INPUT
			NetFlow* CEC, // net ID: CEC lsb: 0  msb: 0 INPUT
			NetFlow* CECARRYIN, // net ID: CECARRYIN lsb: 0  msb: 0 INPUT
			NetFlow* CECTRL, // net ID: CECTRL lsb: 0  msb: 0 INPUT
			NetFlow* CEM, // net ID: CEM lsb: 0  msb: 0 INPUT
			NetFlow* CEMULTCARRYIN, // net ID: CEMULTCARRYIN lsb: 0  msb: 0 INPUT
			NetFlow* CEP, // net ID: CEP lsb: 0  msb: 0 INPUT
			NetFlow* CLK, // net ID: CLK lsb: 0  msb: 0 INPUT
			NetFlow* MULTSIGNIN, // net ID: MULTSIGNIN lsb: 0  msb: 0 INPUT
			NetFlow* OPMODE, // net ID: OPMODE lsb: 0  msb: 6 INPUT
			NetFlow* PCIN, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* RSTA, // net ID: RSTA lsb: 0  msb: 0 INPUT
			NetFlow* RSTALLCARRYIN, // net ID: RSTALLCARRYIN lsb: 0  msb: 0 INPUT
			NetFlow* RSTALUMODE, // net ID: RSTALUMODE lsb: 0  msb: 0 INPUT
			NetFlow* RSTB, // net ID: RSTB lsb: 0  msb: 0 INPUT
			NetFlow* RSTC, // net ID: RSTC lsb: 0  msb: 0 INPUT
			NetFlow* RSTCTRL, // net ID: RSTCTRL lsb: 0  msb: 0 INPUT
			NetFlow* RSTM, // net ID: RSTM lsb: 0  msb: 0 INPUT
			NetFlow* RSTP // net ID: RSTP lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->ACASCREG = ACASCREG; // Default: 1
			this->ALUMODEREG = ALUMODEREG; // Default: 1
			this->AREG = AREG; // Default: 1
			this->AUTORESET_PATTERN_DETECT = AUTORESET_PATTERN_DETECT; // Default: "FALSE"
			this->AUTORESET_PATTERN_DETECT_OPTINV = AUTORESET_PATTERN_DETECT_OPTINV; // Default: "MATCH"
			this->A_INPUT = A_INPUT; // Default: "DIRECT"
			this->BCASCREG = BCASCREG; // Default: 1
			this->BREG = BREG; // Default: 1
			this->B_INPUT = B_INPUT; // Default: "DIRECT"
			this->CARRYINREG = CARRYINREG; // Default: 1
			this->CARRYINSELREG = CARRYINSELREG; // Default: 1
			this->CREG = CREG; // Default: 1
			this->MASK = MASK; // Default: 48'h3FFFFFFFFFFF
			this->MREG = MREG; // Default: 1
			this->MULTCARRYINREG = MULTCARRYINREG; // Default: 1
			this->OPMODEREG = OPMODEREG; // Default: 1
			this->PATTERN = PATTERN; // Default: 48'h000000000000
			this->PREG = PREG; // Default: 1
			this->SEL_MASK = SEL_MASK; // Default: "MASK"
			this->SEL_PATTERN = SEL_PATTERN; // Default: "PATTERN"
			this->SEL_ROUNDING_MASK = SEL_ROUNDING_MASK; // Default: "SEL_MASK"
			this->USE_MULT = USE_MULT; // Default: "MULT_S"
			this->USE_PATTERN_DETECT = USE_PATTERN_DETECT; // Default: "NO_PATDET"
			this->USE_SIMD = USE_SIMD; // Default: "ONE48"
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->ACOUT = ACOUT; // net ID: ACOUT lsb: 0  msb: 0 OUTPUT
			this->BCOUT = BCOUT; // net ID: BCOUT lsb: 0  msb: 0 OUTPUT
			this->CARRYCASCOUT = CARRYCASCOUT; // net ID: CARRYCASCOUT lsb: 0  msb: 0 OUTPUT
			this->CARRYOUT = CARRYOUT; // net ID: CARRYOUT lsb: 0  msb: 0 OUTPUT
			this->MULTSIGNOUT = MULTSIGNOUT; // net ID: MULTSIGNOUT lsb: 0  msb: 0 OUTPUT
			this->OVERFLOW = OVERFLOW; // net ID: OVERFLOW lsb: 0  msb: 0 OUTPUT
			this->P = P; // net ID: P lsb: 0  msb: 0 OUTPUT
			this->PATTERNBDETECT = PATTERNBDETECT; // net ID: PATTERNBDETECT lsb: 0  msb: 0 OUTPUT
			this->PATTERNDETECT = PATTERNDETECT; // net ID: PATTERNDETECT lsb: 0  msb: 0 OUTPUT
			this->PCOUT = PCOUT; // net ID: PCOUT lsb: 0  msb: 0 OUTPUT
			this->UNDERFLOW = UNDERFLOW; // net ID: UNDERFLOW lsb: 0  msb: 0 OUTPUT
			this->A = A; // net ID: A lsb: 0  msb: 29 INPUT
			this->ACIN = ACIN; // net ID: ACIN lsb: 0  msb: 29 INPUT
			this->ALUMODE = ALUMODE; // net ID: ALUMODE lsb: 0  msb: 3 INPUT
			this->B = B; // net ID: B lsb: 0  msb: 17 INPUT
			this->BCIN = BCIN; // net ID: BCIN lsb: 0  msb: 17 INPUT
			this->C = C; // net ID: C lsb: 0  msb: 47 INPUT
			this->CARRYCASCIN = CARRYCASCIN; // net ID: CARRYCASCIN lsb: 0  msb: 0 INPUT
			this->CARRYIN = CARRYIN; // net ID: CARRYIN lsb: 0  msb: 0 INPUT
			this->CARRYINSEL = CARRYINSEL; // net ID: CARRYINSEL lsb: 0  msb: 2 INPUT
			this->CEA1 = CEA1; // net ID: CEA1 lsb: 0  msb: 0 INPUT
			this->CEA2 = CEA2; // net ID: CEA2 lsb: 0  msb: 0 INPUT
			this->CEALUMODE = CEALUMODE; // net ID: CEALUMODE lsb: 0  msb: 0 INPUT
			this->CEB1 = CEB1; // net ID: CEB1 lsb: 0  msb: 0 INPUT
			this->CEB2 = CEB2; // net ID: CEB2 lsb: 0  msb: 0 INPUT
			this->CEC = CEC; // net ID: CEC lsb: 0  msb: 0 INPUT
			this->CECARRYIN = CECARRYIN; // net ID: CECARRYIN lsb: 0  msb: 0 INPUT
			this->CECTRL = CECTRL; // net ID: CECTRL lsb: 0  msb: 0 INPUT
			this->CEM = CEM; // net ID: CEM lsb: 0  msb: 0 INPUT
			this->CEMULTCARRYIN = CEMULTCARRYIN; // net ID: CEMULTCARRYIN lsb: 0  msb: 0 INPUT
			this->CEP = CEP; // net ID: CEP lsb: 0  msb: 0 INPUT
			this->CLK = CLK; // net ID: CLK lsb: 0  msb: 0 INPUT
			this->MULTSIGNIN = MULTSIGNIN; // net ID: MULTSIGNIN lsb: 0  msb: 0 INPUT
			this->OPMODE = OPMODE; // net ID: OPMODE lsb: 0  msb: 6 INPUT
			this->PCIN = PCIN; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->RSTA = RSTA; // net ID: RSTA lsb: 0  msb: 0 INPUT
			this->RSTALLCARRYIN = RSTALLCARRYIN; // net ID: RSTALLCARRYIN lsb: 0  msb: 0 INPUT
			this->RSTALUMODE = RSTALUMODE; // net ID: RSTALUMODE lsb: 0  msb: 0 INPUT
			this->RSTB = RSTB; // net ID: RSTB lsb: 0  msb: 0 INPUT
			this->RSTC = RSTC; // net ID: RSTC lsb: 0  msb: 0 INPUT
			this->RSTCTRL = RSTCTRL; // net ID: RSTCTRL lsb: 0  msb: 0 INPUT
			this->RSTM = RSTM; // net ID: RSTM lsb: 0  msb: 0 INPUT
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
