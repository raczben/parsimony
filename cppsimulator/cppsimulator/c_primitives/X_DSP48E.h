/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_DSP48E_H
#define X_DSP48E_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_DSP48E: public Primitive{

		//Verilog Parameters:
		parameter_int_t ACASCREG;
		parameter_int_t ALUMODEREG;
		parameter_int_t AREG;
		parameter_enum_t AUTORESET_PATTERN_DETECT;
		parameter_string_t AUTORESET_PATTERN_DETECT_OPTINV;
		parameter_string_t A_INPUT;
		parameter_int_t BCASCREG;
		parameter_int_t BREG;
		parameter_string_t B_INPUT;
		parameter_int_t CARRYINREG;
		parameter_int_t CARRYINSELREG;
		parameter_int_t CREG;
		parameter_int_t MASK;
		parameter_int_t MREG;
		parameter_int_t MULTCARRYINREG;
		parameter_int_t OPMODEREG;
		parameter_int_t PATTERN;
		parameter_int_t PREG;
		parameter_string_t SEL_MASK;
		parameter_string_t SEL_PATTERN;
		parameter_string_t SEL_ROUNDING_MASK;
		parameter_string_t USE_MULT;
		parameter_string_t USE_PATTERN_DETECT;
		parameter_string_t USE_SIMD;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* ACOUT_A0_B; // net ID: ACOUT lsb: 0  msb: 29 OUTPUT
		NetFlow* ACOUT_A1_B; // net ID: ACOUT lsb: 0  msb: 29 OUTPUT
		NetFlow* ACOUT_A2_B; // net ID: ACOUT lsb: 0  msb: 29 OUTPUT
		NetFlow* ACOUT_A3_B; // net ID: ACOUT lsb: 0  msb: 29 OUTPUT
		NetFlow* ACOUT_A4_B; // net ID: ACOUT lsb: 0  msb: 29 OUTPUT
		NetFlow* ACOUT_A5_B; // net ID: ACOUT lsb: 0  msb: 29 OUTPUT
		NetFlow* ACOUT_A6_B; // net ID: ACOUT lsb: 0  msb: 29 OUTPUT
		NetFlow* ACOUT_A7_B; // net ID: ACOUT lsb: 0  msb: 29 OUTPUT
		NetFlow* ACOUT_A8_B; // net ID: ACOUT lsb: 0  msb: 29 OUTPUT
		NetFlow* ACOUT_A9_B; // net ID: ACOUT lsb: 0  msb: 29 OUTPUT
		NetFlow* ACOUT_A10_B; // net ID: ACOUT lsb: 0  msb: 29 OUTPUT
		NetFlow* ACOUT_A11_B; // net ID: ACOUT lsb: 0  msb: 29 OUTPUT
		NetFlow* ACOUT_A12_B; // net ID: ACOUT lsb: 0  msb: 29 OUTPUT
		NetFlow* ACOUT_A13_B; // net ID: ACOUT lsb: 0  msb: 29 OUTPUT
		NetFlow* ACOUT_A14_B; // net ID: ACOUT lsb: 0  msb: 29 OUTPUT
		NetFlow* ACOUT_A15_B; // net ID: ACOUT lsb: 0  msb: 29 OUTPUT
		NetFlow* ACOUT_A16_B; // net ID: ACOUT lsb: 0  msb: 29 OUTPUT
		NetFlow* ACOUT_A17_B; // net ID: ACOUT lsb: 0  msb: 29 OUTPUT
		NetFlow* ACOUT_A18_B; // net ID: ACOUT lsb: 0  msb: 29 OUTPUT
		NetFlow* ACOUT_A19_B; // net ID: ACOUT lsb: 0  msb: 29 OUTPUT
		NetFlow* ACOUT_A20_B; // net ID: ACOUT lsb: 0  msb: 29 OUTPUT
		NetFlow* ACOUT_A21_B; // net ID: ACOUT lsb: 0  msb: 29 OUTPUT
		NetFlow* ACOUT_A22_B; // net ID: ACOUT lsb: 0  msb: 29 OUTPUT
		NetFlow* ACOUT_A23_B; // net ID: ACOUT lsb: 0  msb: 29 OUTPUT
		NetFlow* ACOUT_A24_B; // net ID: ACOUT lsb: 0  msb: 29 OUTPUT
		NetFlow* ACOUT_A25_B; // net ID: ACOUT lsb: 0  msb: 29 OUTPUT
		NetFlow* ACOUT_A26_B; // net ID: ACOUT lsb: 0  msb: 29 OUTPUT
		NetFlow* ACOUT_A27_B; // net ID: ACOUT lsb: 0  msb: 29 OUTPUT
		NetFlow* ACOUT_A28_B; // net ID: ACOUT lsb: 0  msb: 29 OUTPUT
		NetFlow* ACOUT_A29_B; // net ID: ACOUT lsb: 0  msb: 29 OUTPUT
		NetFlow* BCOUT_A0_B; // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
		NetFlow* BCOUT_A1_B; // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
		NetFlow* BCOUT_A2_B; // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
		NetFlow* BCOUT_A3_B; // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
		NetFlow* BCOUT_A4_B; // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
		NetFlow* BCOUT_A5_B; // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
		NetFlow* BCOUT_A6_B; // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
		NetFlow* BCOUT_A7_B; // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
		NetFlow* BCOUT_A8_B; // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
		NetFlow* BCOUT_A9_B; // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
		NetFlow* BCOUT_A10_B; // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
		NetFlow* BCOUT_A11_B; // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
		NetFlow* BCOUT_A12_B; // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
		NetFlow* BCOUT_A13_B; // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
		NetFlow* BCOUT_A14_B; // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
		NetFlow* BCOUT_A15_B; // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
		NetFlow* BCOUT_A16_B; // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
		NetFlow* BCOUT_A17_B; // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
		NetFlow* CARRYCASCOUT_A0_B; // net ID: CARRYCASCOUT lsb: 0  msb: 0 OUTPUT
		NetFlow* CARRYOUT_A0_B; // net ID: CARRYOUT lsb: 0  msb: 3 OUTPUT
		NetFlow* CARRYOUT_A1_B; // net ID: CARRYOUT lsb: 0  msb: 3 OUTPUT
		NetFlow* CARRYOUT_A2_B; // net ID: CARRYOUT lsb: 0  msb: 3 OUTPUT
		NetFlow* CARRYOUT_A3_B; // net ID: CARRYOUT lsb: 0  msb: 3 OUTPUT
		NetFlow* MULTSIGNOUT_A0_B; // net ID: MULTSIGNOUT lsb: 0  msb: 0 OUTPUT
		NetFlow* OVERFLOW_A0_B; // net ID: OVERFLOW lsb: 0  msb: 0 OUTPUT
		NetFlow* P_A0_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A1_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A2_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A3_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A4_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A5_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A6_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A7_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A8_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A9_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A10_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A11_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A12_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A13_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A14_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A15_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A16_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A17_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A18_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A19_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A20_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A21_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A22_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A23_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A24_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A25_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A26_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A27_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A28_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A29_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A30_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A31_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A32_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A33_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A34_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A35_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A36_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A37_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A38_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A39_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A40_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A41_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A42_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A43_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A44_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A45_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A46_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A47_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* PATTERNBDETECT_A0_B; // net ID: PATTERNBDETECT lsb: 0  msb: 0 OUTPUT
		NetFlow* PATTERNDETECT_A0_B; // net ID: PATTERNDETECT lsb: 0  msb: 0 OUTPUT
		NetFlow* PCOUT_A0_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A1_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A2_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A3_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A4_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A5_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A6_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A7_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A8_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A9_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A10_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A11_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A12_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A13_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A14_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A15_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A16_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A17_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A18_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A19_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A20_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A21_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A22_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A23_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A24_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A25_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A26_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A27_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A28_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A29_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A30_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A31_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A32_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A33_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A34_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A35_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A36_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A37_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A38_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A39_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A40_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A41_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A42_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A43_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A44_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A45_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A46_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A47_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* UNDERFLOW_A0_B; // net ID: UNDERFLOW lsb: 0  msb: 0 OUTPUT
		NetFlow* A_A0_B; // net ID: A lsb: 0  msb: 29 INPUT
		NetFlow* A_A1_B; // net ID: A lsb: 0  msb: 29 INPUT
		NetFlow* A_A2_B; // net ID: A lsb: 0  msb: 29 INPUT
		NetFlow* A_A3_B; // net ID: A lsb: 0  msb: 29 INPUT
		NetFlow* A_A4_B; // net ID: A lsb: 0  msb: 29 INPUT
		NetFlow* A_A5_B; // net ID: A lsb: 0  msb: 29 INPUT
		NetFlow* A_A6_B; // net ID: A lsb: 0  msb: 29 INPUT
		NetFlow* A_A7_B; // net ID: A lsb: 0  msb: 29 INPUT
		NetFlow* A_A8_B; // net ID: A lsb: 0  msb: 29 INPUT
		NetFlow* A_A9_B; // net ID: A lsb: 0  msb: 29 INPUT
		NetFlow* A_A10_B; // net ID: A lsb: 0  msb: 29 INPUT
		NetFlow* A_A11_B; // net ID: A lsb: 0  msb: 29 INPUT
		NetFlow* A_A12_B; // net ID: A lsb: 0  msb: 29 INPUT
		NetFlow* A_A13_B; // net ID: A lsb: 0  msb: 29 INPUT
		NetFlow* A_A14_B; // net ID: A lsb: 0  msb: 29 INPUT
		NetFlow* A_A15_B; // net ID: A lsb: 0  msb: 29 INPUT
		NetFlow* A_A16_B; // net ID: A lsb: 0  msb: 29 INPUT
		NetFlow* A_A17_B; // net ID: A lsb: 0  msb: 29 INPUT
		NetFlow* A_A18_B; // net ID: A lsb: 0  msb: 29 INPUT
		NetFlow* A_A19_B; // net ID: A lsb: 0  msb: 29 INPUT
		NetFlow* A_A20_B; // net ID: A lsb: 0  msb: 29 INPUT
		NetFlow* A_A21_B; // net ID: A lsb: 0  msb: 29 INPUT
		NetFlow* A_A22_B; // net ID: A lsb: 0  msb: 29 INPUT
		NetFlow* A_A23_B; // net ID: A lsb: 0  msb: 29 INPUT
		NetFlow* A_A24_B; // net ID: A lsb: 0  msb: 29 INPUT
		NetFlow* A_A25_B; // net ID: A lsb: 0  msb: 29 INPUT
		NetFlow* A_A26_B; // net ID: A lsb: 0  msb: 29 INPUT
		NetFlow* A_A27_B; // net ID: A lsb: 0  msb: 29 INPUT
		NetFlow* A_A28_B; // net ID: A lsb: 0  msb: 29 INPUT
		NetFlow* A_A29_B; // net ID: A lsb: 0  msb: 29 INPUT
		NetFlow* ACIN_A0_B; // net ID: ACIN lsb: 0  msb: 29 INPUT
		NetFlow* ACIN_A1_B; // net ID: ACIN lsb: 0  msb: 29 INPUT
		NetFlow* ACIN_A2_B; // net ID: ACIN lsb: 0  msb: 29 INPUT
		NetFlow* ACIN_A3_B; // net ID: ACIN lsb: 0  msb: 29 INPUT
		NetFlow* ACIN_A4_B; // net ID: ACIN lsb: 0  msb: 29 INPUT
		NetFlow* ACIN_A5_B; // net ID: ACIN lsb: 0  msb: 29 INPUT
		NetFlow* ACIN_A6_B; // net ID: ACIN lsb: 0  msb: 29 INPUT
		NetFlow* ACIN_A7_B; // net ID: ACIN lsb: 0  msb: 29 INPUT
		NetFlow* ACIN_A8_B; // net ID: ACIN lsb: 0  msb: 29 INPUT
		NetFlow* ACIN_A9_B; // net ID: ACIN lsb: 0  msb: 29 INPUT
		NetFlow* ACIN_A10_B; // net ID: ACIN lsb: 0  msb: 29 INPUT
		NetFlow* ACIN_A11_B; // net ID: ACIN lsb: 0  msb: 29 INPUT
		NetFlow* ACIN_A12_B; // net ID: ACIN lsb: 0  msb: 29 INPUT
		NetFlow* ACIN_A13_B; // net ID: ACIN lsb: 0  msb: 29 INPUT
		NetFlow* ACIN_A14_B; // net ID: ACIN lsb: 0  msb: 29 INPUT
		NetFlow* ACIN_A15_B; // net ID: ACIN lsb: 0  msb: 29 INPUT
		NetFlow* ACIN_A16_B; // net ID: ACIN lsb: 0  msb: 29 INPUT
		NetFlow* ACIN_A17_B; // net ID: ACIN lsb: 0  msb: 29 INPUT
		NetFlow* ACIN_A18_B; // net ID: ACIN lsb: 0  msb: 29 INPUT
		NetFlow* ACIN_A19_B; // net ID: ACIN lsb: 0  msb: 29 INPUT
		NetFlow* ACIN_A20_B; // net ID: ACIN lsb: 0  msb: 29 INPUT
		NetFlow* ACIN_A21_B; // net ID: ACIN lsb: 0  msb: 29 INPUT
		NetFlow* ACIN_A22_B; // net ID: ACIN lsb: 0  msb: 29 INPUT
		NetFlow* ACIN_A23_B; // net ID: ACIN lsb: 0  msb: 29 INPUT
		NetFlow* ACIN_A24_B; // net ID: ACIN lsb: 0  msb: 29 INPUT
		NetFlow* ACIN_A25_B; // net ID: ACIN lsb: 0  msb: 29 INPUT
		NetFlow* ACIN_A26_B; // net ID: ACIN lsb: 0  msb: 29 INPUT
		NetFlow* ACIN_A27_B; // net ID: ACIN lsb: 0  msb: 29 INPUT
		NetFlow* ACIN_A28_B; // net ID: ACIN lsb: 0  msb: 29 INPUT
		NetFlow* ACIN_A29_B; // net ID: ACIN lsb: 0  msb: 29 INPUT
		NetFlow* ALUMODE_A0_B; // net ID: ALUMODE lsb: 0  msb: 3 INPUT
		NetFlow* ALUMODE_A1_B; // net ID: ALUMODE lsb: 0  msb: 3 INPUT
		NetFlow* ALUMODE_A2_B; // net ID: ALUMODE lsb: 0  msb: 3 INPUT
		NetFlow* ALUMODE_A3_B; // net ID: ALUMODE lsb: 0  msb: 3 INPUT
		NetFlow* B_A0_B; // net ID: B lsb: 0  msb: 17 INPUT
		NetFlow* B_A1_B; // net ID: B lsb: 0  msb: 17 INPUT
		NetFlow* B_A2_B; // net ID: B lsb: 0  msb: 17 INPUT
		NetFlow* B_A3_B; // net ID: B lsb: 0  msb: 17 INPUT
		NetFlow* B_A4_B; // net ID: B lsb: 0  msb: 17 INPUT
		NetFlow* B_A5_B; // net ID: B lsb: 0  msb: 17 INPUT
		NetFlow* B_A6_B; // net ID: B lsb: 0  msb: 17 INPUT
		NetFlow* B_A7_B; // net ID: B lsb: 0  msb: 17 INPUT
		NetFlow* B_A8_B; // net ID: B lsb: 0  msb: 17 INPUT
		NetFlow* B_A9_B; // net ID: B lsb: 0  msb: 17 INPUT
		NetFlow* B_A10_B; // net ID: B lsb: 0  msb: 17 INPUT
		NetFlow* B_A11_B; // net ID: B lsb: 0  msb: 17 INPUT
		NetFlow* B_A12_B; // net ID: B lsb: 0  msb: 17 INPUT
		NetFlow* B_A13_B; // net ID: B lsb: 0  msb: 17 INPUT
		NetFlow* B_A14_B; // net ID: B lsb: 0  msb: 17 INPUT
		NetFlow* B_A15_B; // net ID: B lsb: 0  msb: 17 INPUT
		NetFlow* B_A16_B; // net ID: B lsb: 0  msb: 17 INPUT
		NetFlow* B_A17_B; // net ID: B lsb: 0  msb: 17 INPUT
		NetFlow* BCIN_A0_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
		NetFlow* BCIN_A1_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
		NetFlow* BCIN_A2_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
		NetFlow* BCIN_A3_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
		NetFlow* BCIN_A4_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
		NetFlow* BCIN_A5_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
		NetFlow* BCIN_A6_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
		NetFlow* BCIN_A7_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
		NetFlow* BCIN_A8_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
		NetFlow* BCIN_A9_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
		NetFlow* BCIN_A10_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
		NetFlow* BCIN_A11_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
		NetFlow* BCIN_A12_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
		NetFlow* BCIN_A13_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
		NetFlow* BCIN_A14_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
		NetFlow* BCIN_A15_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
		NetFlow* BCIN_A16_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
		NetFlow* BCIN_A17_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
		NetFlow* C_A0_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A1_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A2_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A3_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A4_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A5_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A6_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A7_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A8_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A9_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A10_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A11_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A12_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A13_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A14_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A15_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A16_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A17_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A18_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A19_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A20_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A21_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A22_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A23_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A24_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A25_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A26_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A27_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A28_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A29_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A30_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A31_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A32_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A33_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A34_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A35_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A36_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A37_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A38_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A39_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A40_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A41_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A42_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A43_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A44_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A45_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A46_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A47_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* CARRYCASCIN_A0_B; // net ID: CARRYCASCIN lsb: 0  msb: 0 INPUT
		NetFlow* CARRYIN_A0_B; // net ID: CARRYIN lsb: 0  msb: 0 INPUT
		NetFlow* CARRYINSEL_A0_B; // net ID: CARRYINSEL lsb: 0  msb: 2 INPUT
		NetFlow* CARRYINSEL_A1_B; // net ID: CARRYINSEL lsb: 0  msb: 2 INPUT
		NetFlow* CARRYINSEL_A2_B; // net ID: CARRYINSEL lsb: 0  msb: 2 INPUT
		NetFlow* CEA1_A0_B; // net ID: CEA1 lsb: 0  msb: 0 INPUT
		NetFlow* CEA2_A0_B; // net ID: CEA2 lsb: 0  msb: 0 INPUT
		NetFlow* CEALUMODE_A0_B; // net ID: CEALUMODE lsb: 0  msb: 0 INPUT
		NetFlow* CEB1_A0_B; // net ID: CEB1 lsb: 0  msb: 0 INPUT
		NetFlow* CEB2_A0_B; // net ID: CEB2 lsb: 0  msb: 0 INPUT
		NetFlow* CEC_A0_B; // net ID: CEC lsb: 0  msb: 0 INPUT
		NetFlow* CECARRYIN_A0_B; // net ID: CECARRYIN lsb: 0  msb: 0 INPUT
		NetFlow* CECTRL_A0_B; // net ID: CECTRL lsb: 0  msb: 0 INPUT
		NetFlow* CEM_A0_B; // net ID: CEM lsb: 0  msb: 0 INPUT
		NetFlow* CEMULTCARRYIN_A0_B; // net ID: CEMULTCARRYIN lsb: 0  msb: 0 INPUT
		NetFlow* CEP_A0_B; // net ID: CEP lsb: 0  msb: 0 INPUT
		NetFlow* CLK_A0_B; // net ID: CLK lsb: 0  msb: 0 INPUT
		NetFlow* MULTSIGNIN_A0_B; // net ID: MULTSIGNIN lsb: 0  msb: 0 INPUT
		NetFlow* OPMODE_A0_B; // net ID: OPMODE lsb: 0  msb: 6 INPUT
		NetFlow* OPMODE_A1_B; // net ID: OPMODE lsb: 0  msb: 6 INPUT
		NetFlow* OPMODE_A2_B; // net ID: OPMODE lsb: 0  msb: 6 INPUT
		NetFlow* OPMODE_A3_B; // net ID: OPMODE lsb: 0  msb: 6 INPUT
		NetFlow* OPMODE_A4_B; // net ID: OPMODE lsb: 0  msb: 6 INPUT
		NetFlow* OPMODE_A5_B; // net ID: OPMODE lsb: 0  msb: 6 INPUT
		NetFlow* OPMODE_A6_B; // net ID: OPMODE lsb: 0  msb: 6 INPUT
		NetFlow* PCIN_A0_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A1_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A2_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A3_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A4_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A5_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A6_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A7_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A8_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A9_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A10_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A11_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A12_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A13_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A14_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A15_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A16_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A17_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A18_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A19_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A20_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A21_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A22_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A23_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A24_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A25_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A26_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A27_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A28_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A29_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A30_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A31_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A32_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A33_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A34_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A35_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A36_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A37_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A38_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A39_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A40_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A41_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A42_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A43_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A44_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A45_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A46_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A47_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* RSTA_A0_B; // net ID: RSTA lsb: 0  msb: 0 INPUT
		NetFlow* RSTALLCARRYIN_A0_B; // net ID: RSTALLCARRYIN lsb: 0  msb: 0 INPUT
		NetFlow* RSTALUMODE_A0_B; // net ID: RSTALUMODE lsb: 0  msb: 0 INPUT
		NetFlow* RSTB_A0_B; // net ID: RSTB lsb: 0  msb: 0 INPUT
		NetFlow* RSTC_A0_B; // net ID: RSTC lsb: 0  msb: 0 INPUT
		NetFlow* RSTCTRL_A0_B; // net ID: RSTCTRL lsb: 0  msb: 0 INPUT
		NetFlow* RSTM_A0_B; // net ID: RSTM lsb: 0  msb: 0 INPUT
		NetFlow* RSTP_A0_B; // net ID: RSTP lsb: 0  msb: 0 INPUT
		
		public: X_DSP48E(
			const char * name,
			//Verilog Parameters:
			parameter_int_t ACASCREG, // Default: 1
			parameter_int_t ALUMODEREG, // Default: 1
			parameter_int_t AREG, // Default: 1
			parameter_enum_t AUTORESET_PATTERN_DETECT, // Default: "FALSE"
			parameter_string_t AUTORESET_PATTERN_DETECT_OPTINV, // Default: "MATCH"
			parameter_string_t A_INPUT, // Default: "DIRECT"
			parameter_int_t BCASCREG, // Default: 1
			parameter_int_t BREG, // Default: 1
			parameter_string_t B_INPUT, // Default: "DIRECT"
			parameter_int_t CARRYINREG, // Default: 1
			parameter_int_t CARRYINSELREG, // Default: 1
			parameter_int_t CREG, // Default: 1
			parameter_int_t MASK, // Default: 48'h3FFFFFFFFFFF
			parameter_int_t MREG, // Default: 1
			parameter_int_t MULTCARRYINREG, // Default: 1
			parameter_int_t OPMODEREG, // Default: 1
			parameter_int_t PATTERN, // Default: 48'h000000000000
			parameter_int_t PREG, // Default: 1
			parameter_string_t SEL_MASK, // Default: "MASK"
			parameter_string_t SEL_PATTERN, // Default: "PATTERN"
			parameter_string_t SEL_ROUNDING_MASK, // Default: "SEL_MASK"
			parameter_string_t USE_MULT, // Default: "MULT_S"
			parameter_string_t USE_PATTERN_DETECT, // Default: "NO_PATDET"
			parameter_string_t USE_SIMD, // Default: "ONE48"
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* ACOUT_A0_B, // net ID: ACOUT lsb: 0  msb: 29 OUTPUT
			NetFlow* ACOUT_A1_B, // net ID: ACOUT lsb: 0  msb: 29 OUTPUT
			NetFlow* ACOUT_A2_B, // net ID: ACOUT lsb: 0  msb: 29 OUTPUT
			NetFlow* ACOUT_A3_B, // net ID: ACOUT lsb: 0  msb: 29 OUTPUT
			NetFlow* ACOUT_A4_B, // net ID: ACOUT lsb: 0  msb: 29 OUTPUT
			NetFlow* ACOUT_A5_B, // net ID: ACOUT lsb: 0  msb: 29 OUTPUT
			NetFlow* ACOUT_A6_B, // net ID: ACOUT lsb: 0  msb: 29 OUTPUT
			NetFlow* ACOUT_A7_B, // net ID: ACOUT lsb: 0  msb: 29 OUTPUT
			NetFlow* ACOUT_A8_B, // net ID: ACOUT lsb: 0  msb: 29 OUTPUT
			NetFlow* ACOUT_A9_B, // net ID: ACOUT lsb: 0  msb: 29 OUTPUT
			NetFlow* ACOUT_A10_B, // net ID: ACOUT lsb: 0  msb: 29 OUTPUT
			NetFlow* ACOUT_A11_B, // net ID: ACOUT lsb: 0  msb: 29 OUTPUT
			NetFlow* ACOUT_A12_B, // net ID: ACOUT lsb: 0  msb: 29 OUTPUT
			NetFlow* ACOUT_A13_B, // net ID: ACOUT lsb: 0  msb: 29 OUTPUT
			NetFlow* ACOUT_A14_B, // net ID: ACOUT lsb: 0  msb: 29 OUTPUT
			NetFlow* ACOUT_A15_B, // net ID: ACOUT lsb: 0  msb: 29 OUTPUT
			NetFlow* ACOUT_A16_B, // net ID: ACOUT lsb: 0  msb: 29 OUTPUT
			NetFlow* ACOUT_A17_B, // net ID: ACOUT lsb: 0  msb: 29 OUTPUT
			NetFlow* ACOUT_A18_B, // net ID: ACOUT lsb: 0  msb: 29 OUTPUT
			NetFlow* ACOUT_A19_B, // net ID: ACOUT lsb: 0  msb: 29 OUTPUT
			NetFlow* ACOUT_A20_B, // net ID: ACOUT lsb: 0  msb: 29 OUTPUT
			NetFlow* ACOUT_A21_B, // net ID: ACOUT lsb: 0  msb: 29 OUTPUT
			NetFlow* ACOUT_A22_B, // net ID: ACOUT lsb: 0  msb: 29 OUTPUT
			NetFlow* ACOUT_A23_B, // net ID: ACOUT lsb: 0  msb: 29 OUTPUT
			NetFlow* ACOUT_A24_B, // net ID: ACOUT lsb: 0  msb: 29 OUTPUT
			NetFlow* ACOUT_A25_B, // net ID: ACOUT lsb: 0  msb: 29 OUTPUT
			NetFlow* ACOUT_A26_B, // net ID: ACOUT lsb: 0  msb: 29 OUTPUT
			NetFlow* ACOUT_A27_B, // net ID: ACOUT lsb: 0  msb: 29 OUTPUT
			NetFlow* ACOUT_A28_B, // net ID: ACOUT lsb: 0  msb: 29 OUTPUT
			NetFlow* ACOUT_A29_B, // net ID: ACOUT lsb: 0  msb: 29 OUTPUT
			NetFlow* BCOUT_A0_B, // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
			NetFlow* BCOUT_A1_B, // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
			NetFlow* BCOUT_A2_B, // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
			NetFlow* BCOUT_A3_B, // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
			NetFlow* BCOUT_A4_B, // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
			NetFlow* BCOUT_A5_B, // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
			NetFlow* BCOUT_A6_B, // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
			NetFlow* BCOUT_A7_B, // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
			NetFlow* BCOUT_A8_B, // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
			NetFlow* BCOUT_A9_B, // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
			NetFlow* BCOUT_A10_B, // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
			NetFlow* BCOUT_A11_B, // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
			NetFlow* BCOUT_A12_B, // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
			NetFlow* BCOUT_A13_B, // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
			NetFlow* BCOUT_A14_B, // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
			NetFlow* BCOUT_A15_B, // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
			NetFlow* BCOUT_A16_B, // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
			NetFlow* BCOUT_A17_B, // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
			NetFlow* CARRYCASCOUT_A0_B, // net ID: CARRYCASCOUT lsb: 0  msb: 0 OUTPUT
			NetFlow* CARRYOUT_A0_B, // net ID: CARRYOUT lsb: 0  msb: 3 OUTPUT
			NetFlow* CARRYOUT_A1_B, // net ID: CARRYOUT lsb: 0  msb: 3 OUTPUT
			NetFlow* CARRYOUT_A2_B, // net ID: CARRYOUT lsb: 0  msb: 3 OUTPUT
			NetFlow* CARRYOUT_A3_B, // net ID: CARRYOUT lsb: 0  msb: 3 OUTPUT
			NetFlow* MULTSIGNOUT_A0_B, // net ID: MULTSIGNOUT lsb: 0  msb: 0 OUTPUT
			NetFlow* OVERFLOW_A0_B, // net ID: OVERFLOW lsb: 0  msb: 0 OUTPUT
			NetFlow* P_A0_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A1_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A2_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A3_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A4_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A5_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A6_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A7_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A8_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A9_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A10_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A11_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A12_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A13_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A14_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A15_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A16_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A17_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A18_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A19_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A20_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A21_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A22_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A23_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A24_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A25_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A26_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A27_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A28_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A29_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A30_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A31_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A32_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A33_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A34_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A35_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A36_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A37_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A38_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A39_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A40_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A41_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A42_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A43_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A44_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A45_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A46_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A47_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* PATTERNBDETECT_A0_B, // net ID: PATTERNBDETECT lsb: 0  msb: 0 OUTPUT
			NetFlow* PATTERNDETECT_A0_B, // net ID: PATTERNDETECT lsb: 0  msb: 0 OUTPUT
			NetFlow* PCOUT_A0_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A1_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A2_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A3_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A4_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A5_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A6_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A7_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A8_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A9_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A10_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A11_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A12_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A13_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A14_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A15_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A16_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A17_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A18_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A19_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A20_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A21_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A22_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A23_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A24_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A25_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A26_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A27_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A28_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A29_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A30_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A31_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A32_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A33_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A34_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A35_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A36_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A37_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A38_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A39_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A40_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A41_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A42_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A43_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A44_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A45_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A46_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A47_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* UNDERFLOW_A0_B, // net ID: UNDERFLOW lsb: 0  msb: 0 OUTPUT
			NetFlow* A_A0_B, // net ID: A lsb: 0  msb: 29 INPUT
			NetFlow* A_A1_B, // net ID: A lsb: 0  msb: 29 INPUT
			NetFlow* A_A2_B, // net ID: A lsb: 0  msb: 29 INPUT
			NetFlow* A_A3_B, // net ID: A lsb: 0  msb: 29 INPUT
			NetFlow* A_A4_B, // net ID: A lsb: 0  msb: 29 INPUT
			NetFlow* A_A5_B, // net ID: A lsb: 0  msb: 29 INPUT
			NetFlow* A_A6_B, // net ID: A lsb: 0  msb: 29 INPUT
			NetFlow* A_A7_B, // net ID: A lsb: 0  msb: 29 INPUT
			NetFlow* A_A8_B, // net ID: A lsb: 0  msb: 29 INPUT
			NetFlow* A_A9_B, // net ID: A lsb: 0  msb: 29 INPUT
			NetFlow* A_A10_B, // net ID: A lsb: 0  msb: 29 INPUT
			NetFlow* A_A11_B, // net ID: A lsb: 0  msb: 29 INPUT
			NetFlow* A_A12_B, // net ID: A lsb: 0  msb: 29 INPUT
			NetFlow* A_A13_B, // net ID: A lsb: 0  msb: 29 INPUT
			NetFlow* A_A14_B, // net ID: A lsb: 0  msb: 29 INPUT
			NetFlow* A_A15_B, // net ID: A lsb: 0  msb: 29 INPUT
			NetFlow* A_A16_B, // net ID: A lsb: 0  msb: 29 INPUT
			NetFlow* A_A17_B, // net ID: A lsb: 0  msb: 29 INPUT
			NetFlow* A_A18_B, // net ID: A lsb: 0  msb: 29 INPUT
			NetFlow* A_A19_B, // net ID: A lsb: 0  msb: 29 INPUT
			NetFlow* A_A20_B, // net ID: A lsb: 0  msb: 29 INPUT
			NetFlow* A_A21_B, // net ID: A lsb: 0  msb: 29 INPUT
			NetFlow* A_A22_B, // net ID: A lsb: 0  msb: 29 INPUT
			NetFlow* A_A23_B, // net ID: A lsb: 0  msb: 29 INPUT
			NetFlow* A_A24_B, // net ID: A lsb: 0  msb: 29 INPUT
			NetFlow* A_A25_B, // net ID: A lsb: 0  msb: 29 INPUT
			NetFlow* A_A26_B, // net ID: A lsb: 0  msb: 29 INPUT
			NetFlow* A_A27_B, // net ID: A lsb: 0  msb: 29 INPUT
			NetFlow* A_A28_B, // net ID: A lsb: 0  msb: 29 INPUT
			NetFlow* A_A29_B, // net ID: A lsb: 0  msb: 29 INPUT
			NetFlow* ACIN_A0_B, // net ID: ACIN lsb: 0  msb: 29 INPUT
			NetFlow* ACIN_A1_B, // net ID: ACIN lsb: 0  msb: 29 INPUT
			NetFlow* ACIN_A2_B, // net ID: ACIN lsb: 0  msb: 29 INPUT
			NetFlow* ACIN_A3_B, // net ID: ACIN lsb: 0  msb: 29 INPUT
			NetFlow* ACIN_A4_B, // net ID: ACIN lsb: 0  msb: 29 INPUT
			NetFlow* ACIN_A5_B, // net ID: ACIN lsb: 0  msb: 29 INPUT
			NetFlow* ACIN_A6_B, // net ID: ACIN lsb: 0  msb: 29 INPUT
			NetFlow* ACIN_A7_B, // net ID: ACIN lsb: 0  msb: 29 INPUT
			NetFlow* ACIN_A8_B, // net ID: ACIN lsb: 0  msb: 29 INPUT
			NetFlow* ACIN_A9_B, // net ID: ACIN lsb: 0  msb: 29 INPUT
			NetFlow* ACIN_A10_B, // net ID: ACIN lsb: 0  msb: 29 INPUT
			NetFlow* ACIN_A11_B, // net ID: ACIN lsb: 0  msb: 29 INPUT
			NetFlow* ACIN_A12_B, // net ID: ACIN lsb: 0  msb: 29 INPUT
			NetFlow* ACIN_A13_B, // net ID: ACIN lsb: 0  msb: 29 INPUT
			NetFlow* ACIN_A14_B, // net ID: ACIN lsb: 0  msb: 29 INPUT
			NetFlow* ACIN_A15_B, // net ID: ACIN lsb: 0  msb: 29 INPUT
			NetFlow* ACIN_A16_B, // net ID: ACIN lsb: 0  msb: 29 INPUT
			NetFlow* ACIN_A17_B, // net ID: ACIN lsb: 0  msb: 29 INPUT
			NetFlow* ACIN_A18_B, // net ID: ACIN lsb: 0  msb: 29 INPUT
			NetFlow* ACIN_A19_B, // net ID: ACIN lsb: 0  msb: 29 INPUT
			NetFlow* ACIN_A20_B, // net ID: ACIN lsb: 0  msb: 29 INPUT
			NetFlow* ACIN_A21_B, // net ID: ACIN lsb: 0  msb: 29 INPUT
			NetFlow* ACIN_A22_B, // net ID: ACIN lsb: 0  msb: 29 INPUT
			NetFlow* ACIN_A23_B, // net ID: ACIN lsb: 0  msb: 29 INPUT
			NetFlow* ACIN_A24_B, // net ID: ACIN lsb: 0  msb: 29 INPUT
			NetFlow* ACIN_A25_B, // net ID: ACIN lsb: 0  msb: 29 INPUT
			NetFlow* ACIN_A26_B, // net ID: ACIN lsb: 0  msb: 29 INPUT
			NetFlow* ACIN_A27_B, // net ID: ACIN lsb: 0  msb: 29 INPUT
			NetFlow* ACIN_A28_B, // net ID: ACIN lsb: 0  msb: 29 INPUT
			NetFlow* ACIN_A29_B, // net ID: ACIN lsb: 0  msb: 29 INPUT
			NetFlow* ALUMODE_A0_B, // net ID: ALUMODE lsb: 0  msb: 3 INPUT
			NetFlow* ALUMODE_A1_B, // net ID: ALUMODE lsb: 0  msb: 3 INPUT
			NetFlow* ALUMODE_A2_B, // net ID: ALUMODE lsb: 0  msb: 3 INPUT
			NetFlow* ALUMODE_A3_B, // net ID: ALUMODE lsb: 0  msb: 3 INPUT
			NetFlow* B_A0_B, // net ID: B lsb: 0  msb: 17 INPUT
			NetFlow* B_A1_B, // net ID: B lsb: 0  msb: 17 INPUT
			NetFlow* B_A2_B, // net ID: B lsb: 0  msb: 17 INPUT
			NetFlow* B_A3_B, // net ID: B lsb: 0  msb: 17 INPUT
			NetFlow* B_A4_B, // net ID: B lsb: 0  msb: 17 INPUT
			NetFlow* B_A5_B, // net ID: B lsb: 0  msb: 17 INPUT
			NetFlow* B_A6_B, // net ID: B lsb: 0  msb: 17 INPUT
			NetFlow* B_A7_B, // net ID: B lsb: 0  msb: 17 INPUT
			NetFlow* B_A8_B, // net ID: B lsb: 0  msb: 17 INPUT
			NetFlow* B_A9_B, // net ID: B lsb: 0  msb: 17 INPUT
			NetFlow* B_A10_B, // net ID: B lsb: 0  msb: 17 INPUT
			NetFlow* B_A11_B, // net ID: B lsb: 0  msb: 17 INPUT
			NetFlow* B_A12_B, // net ID: B lsb: 0  msb: 17 INPUT
			NetFlow* B_A13_B, // net ID: B lsb: 0  msb: 17 INPUT
			NetFlow* B_A14_B, // net ID: B lsb: 0  msb: 17 INPUT
			NetFlow* B_A15_B, // net ID: B lsb: 0  msb: 17 INPUT
			NetFlow* B_A16_B, // net ID: B lsb: 0  msb: 17 INPUT
			NetFlow* B_A17_B, // net ID: B lsb: 0  msb: 17 INPUT
			NetFlow* BCIN_A0_B, // net ID: BCIN lsb: 0  msb: 17 INPUT
			NetFlow* BCIN_A1_B, // net ID: BCIN lsb: 0  msb: 17 INPUT
			NetFlow* BCIN_A2_B, // net ID: BCIN lsb: 0  msb: 17 INPUT
			NetFlow* BCIN_A3_B, // net ID: BCIN lsb: 0  msb: 17 INPUT
			NetFlow* BCIN_A4_B, // net ID: BCIN lsb: 0  msb: 17 INPUT
			NetFlow* BCIN_A5_B, // net ID: BCIN lsb: 0  msb: 17 INPUT
			NetFlow* BCIN_A6_B, // net ID: BCIN lsb: 0  msb: 17 INPUT
			NetFlow* BCIN_A7_B, // net ID: BCIN lsb: 0  msb: 17 INPUT
			NetFlow* BCIN_A8_B, // net ID: BCIN lsb: 0  msb: 17 INPUT
			NetFlow* BCIN_A9_B, // net ID: BCIN lsb: 0  msb: 17 INPUT
			NetFlow* BCIN_A10_B, // net ID: BCIN lsb: 0  msb: 17 INPUT
			NetFlow* BCIN_A11_B, // net ID: BCIN lsb: 0  msb: 17 INPUT
			NetFlow* BCIN_A12_B, // net ID: BCIN lsb: 0  msb: 17 INPUT
			NetFlow* BCIN_A13_B, // net ID: BCIN lsb: 0  msb: 17 INPUT
			NetFlow* BCIN_A14_B, // net ID: BCIN lsb: 0  msb: 17 INPUT
			NetFlow* BCIN_A15_B, // net ID: BCIN lsb: 0  msb: 17 INPUT
			NetFlow* BCIN_A16_B, // net ID: BCIN lsb: 0  msb: 17 INPUT
			NetFlow* BCIN_A17_B, // net ID: BCIN lsb: 0  msb: 17 INPUT
			NetFlow* C_A0_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A1_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A2_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A3_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A4_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A5_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A6_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A7_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A8_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A9_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A10_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A11_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A12_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A13_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A14_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A15_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A16_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A17_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A18_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A19_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A20_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A21_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A22_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A23_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A24_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A25_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A26_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A27_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A28_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A29_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A30_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A31_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A32_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A33_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A34_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A35_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A36_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A37_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A38_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A39_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A40_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A41_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A42_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A43_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A44_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A45_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A46_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A47_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* CARRYCASCIN_A0_B, // net ID: CARRYCASCIN lsb: 0  msb: 0 INPUT
			NetFlow* CARRYIN_A0_B, // net ID: CARRYIN lsb: 0  msb: 0 INPUT
			NetFlow* CARRYINSEL_A0_B, // net ID: CARRYINSEL lsb: 0  msb: 2 INPUT
			NetFlow* CARRYINSEL_A1_B, // net ID: CARRYINSEL lsb: 0  msb: 2 INPUT
			NetFlow* CARRYINSEL_A2_B, // net ID: CARRYINSEL lsb: 0  msb: 2 INPUT
			NetFlow* CEA1_A0_B, // net ID: CEA1 lsb: 0  msb: 0 INPUT
			NetFlow* CEA2_A0_B, // net ID: CEA2 lsb: 0  msb: 0 INPUT
			NetFlow* CEALUMODE_A0_B, // net ID: CEALUMODE lsb: 0  msb: 0 INPUT
			NetFlow* CEB1_A0_B, // net ID: CEB1 lsb: 0  msb: 0 INPUT
			NetFlow* CEB2_A0_B, // net ID: CEB2 lsb: 0  msb: 0 INPUT
			NetFlow* CEC_A0_B, // net ID: CEC lsb: 0  msb: 0 INPUT
			NetFlow* CECARRYIN_A0_B, // net ID: CECARRYIN lsb: 0  msb: 0 INPUT
			NetFlow* CECTRL_A0_B, // net ID: CECTRL lsb: 0  msb: 0 INPUT
			NetFlow* CEM_A0_B, // net ID: CEM lsb: 0  msb: 0 INPUT
			NetFlow* CEMULTCARRYIN_A0_B, // net ID: CEMULTCARRYIN lsb: 0  msb: 0 INPUT
			NetFlow* CEP_A0_B, // net ID: CEP lsb: 0  msb: 0 INPUT
			NetFlow* CLK_A0_B, // net ID: CLK lsb: 0  msb: 0 INPUT
			NetFlow* MULTSIGNIN_A0_B, // net ID: MULTSIGNIN lsb: 0  msb: 0 INPUT
			NetFlow* OPMODE_A0_B, // net ID: OPMODE lsb: 0  msb: 6 INPUT
			NetFlow* OPMODE_A1_B, // net ID: OPMODE lsb: 0  msb: 6 INPUT
			NetFlow* OPMODE_A2_B, // net ID: OPMODE lsb: 0  msb: 6 INPUT
			NetFlow* OPMODE_A3_B, // net ID: OPMODE lsb: 0  msb: 6 INPUT
			NetFlow* OPMODE_A4_B, // net ID: OPMODE lsb: 0  msb: 6 INPUT
			NetFlow* OPMODE_A5_B, // net ID: OPMODE lsb: 0  msb: 6 INPUT
			NetFlow* OPMODE_A6_B, // net ID: OPMODE lsb: 0  msb: 6 INPUT
			NetFlow* PCIN_A0_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A1_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A2_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A3_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A4_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A5_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A6_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A7_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A8_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A9_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A10_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A11_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A12_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A13_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A14_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A15_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A16_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A17_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A18_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A19_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A20_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A21_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A22_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A23_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A24_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A25_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A26_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A27_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A28_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A29_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A30_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A31_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A32_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A33_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A34_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A35_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A36_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A37_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A38_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A39_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A40_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A41_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A42_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A43_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A44_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A45_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A46_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A47_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* RSTA_A0_B, // net ID: RSTA lsb: 0  msb: 0 INPUT
			NetFlow* RSTALLCARRYIN_A0_B, // net ID: RSTALLCARRYIN lsb: 0  msb: 0 INPUT
			NetFlow* RSTALUMODE_A0_B, // net ID: RSTALUMODE lsb: 0  msb: 0 INPUT
			NetFlow* RSTB_A0_B, // net ID: RSTB lsb: 0  msb: 0 INPUT
			NetFlow* RSTC_A0_B, // net ID: RSTC lsb: 0  msb: 0 INPUT
			NetFlow* RSTCTRL_A0_B, // net ID: RSTCTRL lsb: 0  msb: 0 INPUT
			NetFlow* RSTM_A0_B, // net ID: RSTM lsb: 0  msb: 0 INPUT
			NetFlow* RSTP_A0_B // net ID: RSTP lsb: 0  msb: 0 INPUT
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
			this->ACOUT_A0_B = ACOUT_A0_B; // net ID: ACOUT lsb: 0  msb: 29 OUTPUT
			this->ACOUT_A1_B = ACOUT_A1_B; // net ID: ACOUT lsb: 0  msb: 29 OUTPUT
			this->ACOUT_A2_B = ACOUT_A2_B; // net ID: ACOUT lsb: 0  msb: 29 OUTPUT
			this->ACOUT_A3_B = ACOUT_A3_B; // net ID: ACOUT lsb: 0  msb: 29 OUTPUT
			this->ACOUT_A4_B = ACOUT_A4_B; // net ID: ACOUT lsb: 0  msb: 29 OUTPUT
			this->ACOUT_A5_B = ACOUT_A5_B; // net ID: ACOUT lsb: 0  msb: 29 OUTPUT
			this->ACOUT_A6_B = ACOUT_A6_B; // net ID: ACOUT lsb: 0  msb: 29 OUTPUT
			this->ACOUT_A7_B = ACOUT_A7_B; // net ID: ACOUT lsb: 0  msb: 29 OUTPUT
			this->ACOUT_A8_B = ACOUT_A8_B; // net ID: ACOUT lsb: 0  msb: 29 OUTPUT
			this->ACOUT_A9_B = ACOUT_A9_B; // net ID: ACOUT lsb: 0  msb: 29 OUTPUT
			this->ACOUT_A10_B = ACOUT_A10_B; // net ID: ACOUT lsb: 0  msb: 29 OUTPUT
			this->ACOUT_A11_B = ACOUT_A11_B; // net ID: ACOUT lsb: 0  msb: 29 OUTPUT
			this->ACOUT_A12_B = ACOUT_A12_B; // net ID: ACOUT lsb: 0  msb: 29 OUTPUT
			this->ACOUT_A13_B = ACOUT_A13_B; // net ID: ACOUT lsb: 0  msb: 29 OUTPUT
			this->ACOUT_A14_B = ACOUT_A14_B; // net ID: ACOUT lsb: 0  msb: 29 OUTPUT
			this->ACOUT_A15_B = ACOUT_A15_B; // net ID: ACOUT lsb: 0  msb: 29 OUTPUT
			this->ACOUT_A16_B = ACOUT_A16_B; // net ID: ACOUT lsb: 0  msb: 29 OUTPUT
			this->ACOUT_A17_B = ACOUT_A17_B; // net ID: ACOUT lsb: 0  msb: 29 OUTPUT
			this->ACOUT_A18_B = ACOUT_A18_B; // net ID: ACOUT lsb: 0  msb: 29 OUTPUT
			this->ACOUT_A19_B = ACOUT_A19_B; // net ID: ACOUT lsb: 0  msb: 29 OUTPUT
			this->ACOUT_A20_B = ACOUT_A20_B; // net ID: ACOUT lsb: 0  msb: 29 OUTPUT
			this->ACOUT_A21_B = ACOUT_A21_B; // net ID: ACOUT lsb: 0  msb: 29 OUTPUT
			this->ACOUT_A22_B = ACOUT_A22_B; // net ID: ACOUT lsb: 0  msb: 29 OUTPUT
			this->ACOUT_A23_B = ACOUT_A23_B; // net ID: ACOUT lsb: 0  msb: 29 OUTPUT
			this->ACOUT_A24_B = ACOUT_A24_B; // net ID: ACOUT lsb: 0  msb: 29 OUTPUT
			this->ACOUT_A25_B = ACOUT_A25_B; // net ID: ACOUT lsb: 0  msb: 29 OUTPUT
			this->ACOUT_A26_B = ACOUT_A26_B; // net ID: ACOUT lsb: 0  msb: 29 OUTPUT
			this->ACOUT_A27_B = ACOUT_A27_B; // net ID: ACOUT lsb: 0  msb: 29 OUTPUT
			this->ACOUT_A28_B = ACOUT_A28_B; // net ID: ACOUT lsb: 0  msb: 29 OUTPUT
			this->ACOUT_A29_B = ACOUT_A29_B; // net ID: ACOUT lsb: 0  msb: 29 OUTPUT
			this->BCOUT_A0_B = BCOUT_A0_B; // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
			this->BCOUT_A1_B = BCOUT_A1_B; // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
			this->BCOUT_A2_B = BCOUT_A2_B; // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
			this->BCOUT_A3_B = BCOUT_A3_B; // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
			this->BCOUT_A4_B = BCOUT_A4_B; // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
			this->BCOUT_A5_B = BCOUT_A5_B; // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
			this->BCOUT_A6_B = BCOUT_A6_B; // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
			this->BCOUT_A7_B = BCOUT_A7_B; // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
			this->BCOUT_A8_B = BCOUT_A8_B; // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
			this->BCOUT_A9_B = BCOUT_A9_B; // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
			this->BCOUT_A10_B = BCOUT_A10_B; // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
			this->BCOUT_A11_B = BCOUT_A11_B; // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
			this->BCOUT_A12_B = BCOUT_A12_B; // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
			this->BCOUT_A13_B = BCOUT_A13_B; // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
			this->BCOUT_A14_B = BCOUT_A14_B; // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
			this->BCOUT_A15_B = BCOUT_A15_B; // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
			this->BCOUT_A16_B = BCOUT_A16_B; // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
			this->BCOUT_A17_B = BCOUT_A17_B; // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
			this->CARRYCASCOUT_A0_B = CARRYCASCOUT_A0_B; // net ID: CARRYCASCOUT lsb: 0  msb: 0 OUTPUT
			this->CARRYOUT_A0_B = CARRYOUT_A0_B; // net ID: CARRYOUT lsb: 0  msb: 3 OUTPUT
			this->CARRYOUT_A1_B = CARRYOUT_A1_B; // net ID: CARRYOUT lsb: 0  msb: 3 OUTPUT
			this->CARRYOUT_A2_B = CARRYOUT_A2_B; // net ID: CARRYOUT lsb: 0  msb: 3 OUTPUT
			this->CARRYOUT_A3_B = CARRYOUT_A3_B; // net ID: CARRYOUT lsb: 0  msb: 3 OUTPUT
			this->MULTSIGNOUT_A0_B = MULTSIGNOUT_A0_B; // net ID: MULTSIGNOUT lsb: 0  msb: 0 OUTPUT
			this->OVERFLOW_A0_B = OVERFLOW_A0_B; // net ID: OVERFLOW lsb: 0  msb: 0 OUTPUT
			this->P_A0_B = P_A0_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A1_B = P_A1_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A2_B = P_A2_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A3_B = P_A3_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A4_B = P_A4_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A5_B = P_A5_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A6_B = P_A6_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A7_B = P_A7_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A8_B = P_A8_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A9_B = P_A9_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A10_B = P_A10_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A11_B = P_A11_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A12_B = P_A12_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A13_B = P_A13_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A14_B = P_A14_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A15_B = P_A15_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A16_B = P_A16_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A17_B = P_A17_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A18_B = P_A18_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A19_B = P_A19_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A20_B = P_A20_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A21_B = P_A21_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A22_B = P_A22_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A23_B = P_A23_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A24_B = P_A24_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A25_B = P_A25_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A26_B = P_A26_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A27_B = P_A27_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A28_B = P_A28_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A29_B = P_A29_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A30_B = P_A30_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A31_B = P_A31_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A32_B = P_A32_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A33_B = P_A33_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A34_B = P_A34_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A35_B = P_A35_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A36_B = P_A36_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A37_B = P_A37_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A38_B = P_A38_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A39_B = P_A39_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A40_B = P_A40_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A41_B = P_A41_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A42_B = P_A42_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A43_B = P_A43_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A44_B = P_A44_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A45_B = P_A45_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A46_B = P_A46_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A47_B = P_A47_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->PATTERNBDETECT_A0_B = PATTERNBDETECT_A0_B; // net ID: PATTERNBDETECT lsb: 0  msb: 0 OUTPUT
			this->PATTERNDETECT_A0_B = PATTERNDETECT_A0_B; // net ID: PATTERNDETECT lsb: 0  msb: 0 OUTPUT
			this->PCOUT_A0_B = PCOUT_A0_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A1_B = PCOUT_A1_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A2_B = PCOUT_A2_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A3_B = PCOUT_A3_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A4_B = PCOUT_A4_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A5_B = PCOUT_A5_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A6_B = PCOUT_A6_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A7_B = PCOUT_A7_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A8_B = PCOUT_A8_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A9_B = PCOUT_A9_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A10_B = PCOUT_A10_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A11_B = PCOUT_A11_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A12_B = PCOUT_A12_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A13_B = PCOUT_A13_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A14_B = PCOUT_A14_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A15_B = PCOUT_A15_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A16_B = PCOUT_A16_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A17_B = PCOUT_A17_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A18_B = PCOUT_A18_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A19_B = PCOUT_A19_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A20_B = PCOUT_A20_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A21_B = PCOUT_A21_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A22_B = PCOUT_A22_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A23_B = PCOUT_A23_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A24_B = PCOUT_A24_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A25_B = PCOUT_A25_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A26_B = PCOUT_A26_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A27_B = PCOUT_A27_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A28_B = PCOUT_A28_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A29_B = PCOUT_A29_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A30_B = PCOUT_A30_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A31_B = PCOUT_A31_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A32_B = PCOUT_A32_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A33_B = PCOUT_A33_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A34_B = PCOUT_A34_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A35_B = PCOUT_A35_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A36_B = PCOUT_A36_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A37_B = PCOUT_A37_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A38_B = PCOUT_A38_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A39_B = PCOUT_A39_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A40_B = PCOUT_A40_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A41_B = PCOUT_A41_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A42_B = PCOUT_A42_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A43_B = PCOUT_A43_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A44_B = PCOUT_A44_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A45_B = PCOUT_A45_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A46_B = PCOUT_A46_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A47_B = PCOUT_A47_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->UNDERFLOW_A0_B = UNDERFLOW_A0_B; // net ID: UNDERFLOW lsb: 0  msb: 0 OUTPUT
			this->A_A0_B = A_A0_B; // net ID: A lsb: 0  msb: 29 INPUT
			this->A_A1_B = A_A1_B; // net ID: A lsb: 0  msb: 29 INPUT
			this->A_A2_B = A_A2_B; // net ID: A lsb: 0  msb: 29 INPUT
			this->A_A3_B = A_A3_B; // net ID: A lsb: 0  msb: 29 INPUT
			this->A_A4_B = A_A4_B; // net ID: A lsb: 0  msb: 29 INPUT
			this->A_A5_B = A_A5_B; // net ID: A lsb: 0  msb: 29 INPUT
			this->A_A6_B = A_A6_B; // net ID: A lsb: 0  msb: 29 INPUT
			this->A_A7_B = A_A7_B; // net ID: A lsb: 0  msb: 29 INPUT
			this->A_A8_B = A_A8_B; // net ID: A lsb: 0  msb: 29 INPUT
			this->A_A9_B = A_A9_B; // net ID: A lsb: 0  msb: 29 INPUT
			this->A_A10_B = A_A10_B; // net ID: A lsb: 0  msb: 29 INPUT
			this->A_A11_B = A_A11_B; // net ID: A lsb: 0  msb: 29 INPUT
			this->A_A12_B = A_A12_B; // net ID: A lsb: 0  msb: 29 INPUT
			this->A_A13_B = A_A13_B; // net ID: A lsb: 0  msb: 29 INPUT
			this->A_A14_B = A_A14_B; // net ID: A lsb: 0  msb: 29 INPUT
			this->A_A15_B = A_A15_B; // net ID: A lsb: 0  msb: 29 INPUT
			this->A_A16_B = A_A16_B; // net ID: A lsb: 0  msb: 29 INPUT
			this->A_A17_B = A_A17_B; // net ID: A lsb: 0  msb: 29 INPUT
			this->A_A18_B = A_A18_B; // net ID: A lsb: 0  msb: 29 INPUT
			this->A_A19_B = A_A19_B; // net ID: A lsb: 0  msb: 29 INPUT
			this->A_A20_B = A_A20_B; // net ID: A lsb: 0  msb: 29 INPUT
			this->A_A21_B = A_A21_B; // net ID: A lsb: 0  msb: 29 INPUT
			this->A_A22_B = A_A22_B; // net ID: A lsb: 0  msb: 29 INPUT
			this->A_A23_B = A_A23_B; // net ID: A lsb: 0  msb: 29 INPUT
			this->A_A24_B = A_A24_B; // net ID: A lsb: 0  msb: 29 INPUT
			this->A_A25_B = A_A25_B; // net ID: A lsb: 0  msb: 29 INPUT
			this->A_A26_B = A_A26_B; // net ID: A lsb: 0  msb: 29 INPUT
			this->A_A27_B = A_A27_B; // net ID: A lsb: 0  msb: 29 INPUT
			this->A_A28_B = A_A28_B; // net ID: A lsb: 0  msb: 29 INPUT
			this->A_A29_B = A_A29_B; // net ID: A lsb: 0  msb: 29 INPUT
			this->ACIN_A0_B = ACIN_A0_B; // net ID: ACIN lsb: 0  msb: 29 INPUT
			this->ACIN_A1_B = ACIN_A1_B; // net ID: ACIN lsb: 0  msb: 29 INPUT
			this->ACIN_A2_B = ACIN_A2_B; // net ID: ACIN lsb: 0  msb: 29 INPUT
			this->ACIN_A3_B = ACIN_A3_B; // net ID: ACIN lsb: 0  msb: 29 INPUT
			this->ACIN_A4_B = ACIN_A4_B; // net ID: ACIN lsb: 0  msb: 29 INPUT
			this->ACIN_A5_B = ACIN_A5_B; // net ID: ACIN lsb: 0  msb: 29 INPUT
			this->ACIN_A6_B = ACIN_A6_B; // net ID: ACIN lsb: 0  msb: 29 INPUT
			this->ACIN_A7_B = ACIN_A7_B; // net ID: ACIN lsb: 0  msb: 29 INPUT
			this->ACIN_A8_B = ACIN_A8_B; // net ID: ACIN lsb: 0  msb: 29 INPUT
			this->ACIN_A9_B = ACIN_A9_B; // net ID: ACIN lsb: 0  msb: 29 INPUT
			this->ACIN_A10_B = ACIN_A10_B; // net ID: ACIN lsb: 0  msb: 29 INPUT
			this->ACIN_A11_B = ACIN_A11_B; // net ID: ACIN lsb: 0  msb: 29 INPUT
			this->ACIN_A12_B = ACIN_A12_B; // net ID: ACIN lsb: 0  msb: 29 INPUT
			this->ACIN_A13_B = ACIN_A13_B; // net ID: ACIN lsb: 0  msb: 29 INPUT
			this->ACIN_A14_B = ACIN_A14_B; // net ID: ACIN lsb: 0  msb: 29 INPUT
			this->ACIN_A15_B = ACIN_A15_B; // net ID: ACIN lsb: 0  msb: 29 INPUT
			this->ACIN_A16_B = ACIN_A16_B; // net ID: ACIN lsb: 0  msb: 29 INPUT
			this->ACIN_A17_B = ACIN_A17_B; // net ID: ACIN lsb: 0  msb: 29 INPUT
			this->ACIN_A18_B = ACIN_A18_B; // net ID: ACIN lsb: 0  msb: 29 INPUT
			this->ACIN_A19_B = ACIN_A19_B; // net ID: ACIN lsb: 0  msb: 29 INPUT
			this->ACIN_A20_B = ACIN_A20_B; // net ID: ACIN lsb: 0  msb: 29 INPUT
			this->ACIN_A21_B = ACIN_A21_B; // net ID: ACIN lsb: 0  msb: 29 INPUT
			this->ACIN_A22_B = ACIN_A22_B; // net ID: ACIN lsb: 0  msb: 29 INPUT
			this->ACIN_A23_B = ACIN_A23_B; // net ID: ACIN lsb: 0  msb: 29 INPUT
			this->ACIN_A24_B = ACIN_A24_B; // net ID: ACIN lsb: 0  msb: 29 INPUT
			this->ACIN_A25_B = ACIN_A25_B; // net ID: ACIN lsb: 0  msb: 29 INPUT
			this->ACIN_A26_B = ACIN_A26_B; // net ID: ACIN lsb: 0  msb: 29 INPUT
			this->ACIN_A27_B = ACIN_A27_B; // net ID: ACIN lsb: 0  msb: 29 INPUT
			this->ACIN_A28_B = ACIN_A28_B; // net ID: ACIN lsb: 0  msb: 29 INPUT
			this->ACIN_A29_B = ACIN_A29_B; // net ID: ACIN lsb: 0  msb: 29 INPUT
			this->ALUMODE_A0_B = ALUMODE_A0_B; // net ID: ALUMODE lsb: 0  msb: 3 INPUT
			this->ALUMODE_A1_B = ALUMODE_A1_B; // net ID: ALUMODE lsb: 0  msb: 3 INPUT
			this->ALUMODE_A2_B = ALUMODE_A2_B; // net ID: ALUMODE lsb: 0  msb: 3 INPUT
			this->ALUMODE_A3_B = ALUMODE_A3_B; // net ID: ALUMODE lsb: 0  msb: 3 INPUT
			this->B_A0_B = B_A0_B; // net ID: B lsb: 0  msb: 17 INPUT
			this->B_A1_B = B_A1_B; // net ID: B lsb: 0  msb: 17 INPUT
			this->B_A2_B = B_A2_B; // net ID: B lsb: 0  msb: 17 INPUT
			this->B_A3_B = B_A3_B; // net ID: B lsb: 0  msb: 17 INPUT
			this->B_A4_B = B_A4_B; // net ID: B lsb: 0  msb: 17 INPUT
			this->B_A5_B = B_A5_B; // net ID: B lsb: 0  msb: 17 INPUT
			this->B_A6_B = B_A6_B; // net ID: B lsb: 0  msb: 17 INPUT
			this->B_A7_B = B_A7_B; // net ID: B lsb: 0  msb: 17 INPUT
			this->B_A8_B = B_A8_B; // net ID: B lsb: 0  msb: 17 INPUT
			this->B_A9_B = B_A9_B; // net ID: B lsb: 0  msb: 17 INPUT
			this->B_A10_B = B_A10_B; // net ID: B lsb: 0  msb: 17 INPUT
			this->B_A11_B = B_A11_B; // net ID: B lsb: 0  msb: 17 INPUT
			this->B_A12_B = B_A12_B; // net ID: B lsb: 0  msb: 17 INPUT
			this->B_A13_B = B_A13_B; // net ID: B lsb: 0  msb: 17 INPUT
			this->B_A14_B = B_A14_B; // net ID: B lsb: 0  msb: 17 INPUT
			this->B_A15_B = B_A15_B; // net ID: B lsb: 0  msb: 17 INPUT
			this->B_A16_B = B_A16_B; // net ID: B lsb: 0  msb: 17 INPUT
			this->B_A17_B = B_A17_B; // net ID: B lsb: 0  msb: 17 INPUT
			this->BCIN_A0_B = BCIN_A0_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
			this->BCIN_A1_B = BCIN_A1_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
			this->BCIN_A2_B = BCIN_A2_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
			this->BCIN_A3_B = BCIN_A3_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
			this->BCIN_A4_B = BCIN_A4_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
			this->BCIN_A5_B = BCIN_A5_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
			this->BCIN_A6_B = BCIN_A6_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
			this->BCIN_A7_B = BCIN_A7_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
			this->BCIN_A8_B = BCIN_A8_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
			this->BCIN_A9_B = BCIN_A9_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
			this->BCIN_A10_B = BCIN_A10_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
			this->BCIN_A11_B = BCIN_A11_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
			this->BCIN_A12_B = BCIN_A12_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
			this->BCIN_A13_B = BCIN_A13_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
			this->BCIN_A14_B = BCIN_A14_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
			this->BCIN_A15_B = BCIN_A15_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
			this->BCIN_A16_B = BCIN_A16_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
			this->BCIN_A17_B = BCIN_A17_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
			this->C_A0_B = C_A0_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A1_B = C_A1_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A2_B = C_A2_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A3_B = C_A3_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A4_B = C_A4_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A5_B = C_A5_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A6_B = C_A6_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A7_B = C_A7_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A8_B = C_A8_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A9_B = C_A9_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A10_B = C_A10_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A11_B = C_A11_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A12_B = C_A12_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A13_B = C_A13_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A14_B = C_A14_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A15_B = C_A15_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A16_B = C_A16_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A17_B = C_A17_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A18_B = C_A18_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A19_B = C_A19_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A20_B = C_A20_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A21_B = C_A21_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A22_B = C_A22_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A23_B = C_A23_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A24_B = C_A24_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A25_B = C_A25_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A26_B = C_A26_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A27_B = C_A27_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A28_B = C_A28_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A29_B = C_A29_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A30_B = C_A30_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A31_B = C_A31_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A32_B = C_A32_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A33_B = C_A33_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A34_B = C_A34_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A35_B = C_A35_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A36_B = C_A36_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A37_B = C_A37_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A38_B = C_A38_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A39_B = C_A39_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A40_B = C_A40_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A41_B = C_A41_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A42_B = C_A42_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A43_B = C_A43_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A44_B = C_A44_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A45_B = C_A45_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A46_B = C_A46_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A47_B = C_A47_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->CARRYCASCIN_A0_B = CARRYCASCIN_A0_B; // net ID: CARRYCASCIN lsb: 0  msb: 0 INPUT
			this->CARRYIN_A0_B = CARRYIN_A0_B; // net ID: CARRYIN lsb: 0  msb: 0 INPUT
			this->CARRYINSEL_A0_B = CARRYINSEL_A0_B; // net ID: CARRYINSEL lsb: 0  msb: 2 INPUT
			this->CARRYINSEL_A1_B = CARRYINSEL_A1_B; // net ID: CARRYINSEL lsb: 0  msb: 2 INPUT
			this->CARRYINSEL_A2_B = CARRYINSEL_A2_B; // net ID: CARRYINSEL lsb: 0  msb: 2 INPUT
			this->CEA1_A0_B = CEA1_A0_B; // net ID: CEA1 lsb: 0  msb: 0 INPUT
			this->CEA2_A0_B = CEA2_A0_B; // net ID: CEA2 lsb: 0  msb: 0 INPUT
			this->CEALUMODE_A0_B = CEALUMODE_A0_B; // net ID: CEALUMODE lsb: 0  msb: 0 INPUT
			this->CEB1_A0_B = CEB1_A0_B; // net ID: CEB1 lsb: 0  msb: 0 INPUT
			this->CEB2_A0_B = CEB2_A0_B; // net ID: CEB2 lsb: 0  msb: 0 INPUT
			this->CEC_A0_B = CEC_A0_B; // net ID: CEC lsb: 0  msb: 0 INPUT
			this->CECARRYIN_A0_B = CECARRYIN_A0_B; // net ID: CECARRYIN lsb: 0  msb: 0 INPUT
			this->CECTRL_A0_B = CECTRL_A0_B; // net ID: CECTRL lsb: 0  msb: 0 INPUT
			this->CEM_A0_B = CEM_A0_B; // net ID: CEM lsb: 0  msb: 0 INPUT
			this->CEMULTCARRYIN_A0_B = CEMULTCARRYIN_A0_B; // net ID: CEMULTCARRYIN lsb: 0  msb: 0 INPUT
			this->CEP_A0_B = CEP_A0_B; // net ID: CEP lsb: 0  msb: 0 INPUT
			this->CLK_A0_B = CLK_A0_B; // net ID: CLK lsb: 0  msb: 0 INPUT
			this->MULTSIGNIN_A0_B = MULTSIGNIN_A0_B; // net ID: MULTSIGNIN lsb: 0  msb: 0 INPUT
			this->OPMODE_A0_B = OPMODE_A0_B; // net ID: OPMODE lsb: 0  msb: 6 INPUT
			this->OPMODE_A1_B = OPMODE_A1_B; // net ID: OPMODE lsb: 0  msb: 6 INPUT
			this->OPMODE_A2_B = OPMODE_A2_B; // net ID: OPMODE lsb: 0  msb: 6 INPUT
			this->OPMODE_A3_B = OPMODE_A3_B; // net ID: OPMODE lsb: 0  msb: 6 INPUT
			this->OPMODE_A4_B = OPMODE_A4_B; // net ID: OPMODE lsb: 0  msb: 6 INPUT
			this->OPMODE_A5_B = OPMODE_A5_B; // net ID: OPMODE lsb: 0  msb: 6 INPUT
			this->OPMODE_A6_B = OPMODE_A6_B; // net ID: OPMODE lsb: 0  msb: 6 INPUT
			this->PCIN_A0_B = PCIN_A0_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A1_B = PCIN_A1_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A2_B = PCIN_A2_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A3_B = PCIN_A3_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A4_B = PCIN_A4_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A5_B = PCIN_A5_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A6_B = PCIN_A6_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A7_B = PCIN_A7_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A8_B = PCIN_A8_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A9_B = PCIN_A9_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A10_B = PCIN_A10_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A11_B = PCIN_A11_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A12_B = PCIN_A12_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A13_B = PCIN_A13_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A14_B = PCIN_A14_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A15_B = PCIN_A15_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A16_B = PCIN_A16_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A17_B = PCIN_A17_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A18_B = PCIN_A18_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A19_B = PCIN_A19_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A20_B = PCIN_A20_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A21_B = PCIN_A21_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A22_B = PCIN_A22_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A23_B = PCIN_A23_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A24_B = PCIN_A24_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A25_B = PCIN_A25_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A26_B = PCIN_A26_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A27_B = PCIN_A27_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A28_B = PCIN_A28_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A29_B = PCIN_A29_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A30_B = PCIN_A30_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A31_B = PCIN_A31_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A32_B = PCIN_A32_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A33_B = PCIN_A33_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A34_B = PCIN_A34_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A35_B = PCIN_A35_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A36_B = PCIN_A36_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A37_B = PCIN_A37_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A38_B = PCIN_A38_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A39_B = PCIN_A39_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A40_B = PCIN_A40_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A41_B = PCIN_A41_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A42_B = PCIN_A42_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A43_B = PCIN_A43_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A44_B = PCIN_A44_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A45_B = PCIN_A45_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A46_B = PCIN_A46_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A47_B = PCIN_A47_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->RSTA_A0_B = RSTA_A0_B; // net ID: RSTA lsb: 0  msb: 0 INPUT
			this->RSTALLCARRYIN_A0_B = RSTALLCARRYIN_A0_B; // net ID: RSTALLCARRYIN lsb: 0  msb: 0 INPUT
			this->RSTALUMODE_A0_B = RSTALUMODE_A0_B; // net ID: RSTALUMODE lsb: 0  msb: 0 INPUT
			this->RSTB_A0_B = RSTB_A0_B; // net ID: RSTB lsb: 0  msb: 0 INPUT
			this->RSTC_A0_B = RSTC_A0_B; // net ID: RSTC lsb: 0  msb: 0 INPUT
			this->RSTCTRL_A0_B = RSTCTRL_A0_B; // net ID: RSTCTRL lsb: 0  msb: 0 INPUT
			this->RSTM_A0_B = RSTM_A0_B; // net ID: RSTM lsb: 0  msb: 0 INPUT
			this->RSTP_A0_B = RSTP_A0_B; // net ID: RSTP lsb: 0  msb: 0 INPUT
			
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
#endif // X_DSP48E_H
