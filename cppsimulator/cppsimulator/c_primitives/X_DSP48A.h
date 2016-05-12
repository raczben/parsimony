/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_DSP48A_H
#define X_DSP48A_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_DSP48A: public Primitive{

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
		NetFlow* BCOUT_A17_B; // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
		NetFlow* BCOUT_A16_B; // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
		NetFlow* BCOUT_A15_B; // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
		NetFlow* BCOUT_A14_B; // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
		NetFlow* BCOUT_A13_B; // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
		NetFlow* BCOUT_A12_B; // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
		NetFlow* BCOUT_A11_B; // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
		NetFlow* BCOUT_A10_B; // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
		NetFlow* BCOUT_A9_B; // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
		NetFlow* BCOUT_A8_B; // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
		NetFlow* BCOUT_A7_B; // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
		NetFlow* BCOUT_A6_B; // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
		NetFlow* BCOUT_A5_B; // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
		NetFlow* BCOUT_A4_B; // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
		NetFlow* BCOUT_A3_B; // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
		NetFlow* BCOUT_A2_B; // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
		NetFlow* BCOUT_A1_B; // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
		NetFlow* BCOUT_A0_B; // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
		NetFlow* CARRYOUT_A0_B; // net ID: CARRYOUT lsb: 0  msb: 0 OUTPUT
		NetFlow* P_A47_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A46_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A45_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A44_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A43_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A42_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A41_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A40_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A39_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A38_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A37_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A36_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A35_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A34_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A33_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A32_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A31_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A30_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A29_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A28_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A27_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A26_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A25_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A24_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A23_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A22_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A21_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A20_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A19_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A18_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A17_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A16_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A15_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A14_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A13_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A12_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A11_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A10_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A9_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A8_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A7_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A6_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A5_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A4_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A3_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A2_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A1_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* P_A0_B; // net ID: P lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A47_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A46_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A45_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A44_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A43_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A42_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A41_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A40_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A39_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A38_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A37_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A36_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A35_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A34_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A33_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A32_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A31_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A30_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A29_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A28_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A27_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A26_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A25_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A24_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A23_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A22_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A21_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A20_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A19_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A18_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A17_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A16_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A15_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A14_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A13_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A12_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A11_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A10_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A9_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A8_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A7_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A6_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A5_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A4_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A3_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A2_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A1_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* PCOUT_A0_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
		NetFlow* A_A17_B; // net ID: A lsb: 0  msb: 17 INPUT
		NetFlow* A_A16_B; // net ID: A lsb: 0  msb: 17 INPUT
		NetFlow* A_A15_B; // net ID: A lsb: 0  msb: 17 INPUT
		NetFlow* A_A14_B; // net ID: A lsb: 0  msb: 17 INPUT
		NetFlow* A_A13_B; // net ID: A lsb: 0  msb: 17 INPUT
		NetFlow* A_A12_B; // net ID: A lsb: 0  msb: 17 INPUT
		NetFlow* A_A11_B; // net ID: A lsb: 0  msb: 17 INPUT
		NetFlow* A_A10_B; // net ID: A lsb: 0  msb: 17 INPUT
		NetFlow* A_A9_B; // net ID: A lsb: 0  msb: 17 INPUT
		NetFlow* A_A8_B; // net ID: A lsb: 0  msb: 17 INPUT
		NetFlow* A_A7_B; // net ID: A lsb: 0  msb: 17 INPUT
		NetFlow* A_A6_B; // net ID: A lsb: 0  msb: 17 INPUT
		NetFlow* A_A5_B; // net ID: A lsb: 0  msb: 17 INPUT
		NetFlow* A_A4_B; // net ID: A lsb: 0  msb: 17 INPUT
		NetFlow* A_A3_B; // net ID: A lsb: 0  msb: 17 INPUT
		NetFlow* A_A2_B; // net ID: A lsb: 0  msb: 17 INPUT
		NetFlow* A_A1_B; // net ID: A lsb: 0  msb: 17 INPUT
		NetFlow* A_A0_B; // net ID: A lsb: 0  msb: 17 INPUT
		NetFlow* B_A17_B; // net ID: B lsb: 0  msb: 17 INPUT
		NetFlow* B_A16_B; // net ID: B lsb: 0  msb: 17 INPUT
		NetFlow* B_A15_B; // net ID: B lsb: 0  msb: 17 INPUT
		NetFlow* B_A14_B; // net ID: B lsb: 0  msb: 17 INPUT
		NetFlow* B_A13_B; // net ID: B lsb: 0  msb: 17 INPUT
		NetFlow* B_A12_B; // net ID: B lsb: 0  msb: 17 INPUT
		NetFlow* B_A11_B; // net ID: B lsb: 0  msb: 17 INPUT
		NetFlow* B_A10_B; // net ID: B lsb: 0  msb: 17 INPUT
		NetFlow* B_A9_B; // net ID: B lsb: 0  msb: 17 INPUT
		NetFlow* B_A8_B; // net ID: B lsb: 0  msb: 17 INPUT
		NetFlow* B_A7_B; // net ID: B lsb: 0  msb: 17 INPUT
		NetFlow* B_A6_B; // net ID: B lsb: 0  msb: 17 INPUT
		NetFlow* B_A5_B; // net ID: B lsb: 0  msb: 17 INPUT
		NetFlow* B_A4_B; // net ID: B lsb: 0  msb: 17 INPUT
		NetFlow* B_A3_B; // net ID: B lsb: 0  msb: 17 INPUT
		NetFlow* B_A2_B; // net ID: B lsb: 0  msb: 17 INPUT
		NetFlow* B_A1_B; // net ID: B lsb: 0  msb: 17 INPUT
		NetFlow* B_A0_B; // net ID: B lsb: 0  msb: 17 INPUT
		NetFlow* BCIN_A17_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
		NetFlow* BCIN_A16_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
		NetFlow* BCIN_A15_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
		NetFlow* BCIN_A14_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
		NetFlow* BCIN_A13_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
		NetFlow* BCIN_A12_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
		NetFlow* BCIN_A11_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
		NetFlow* BCIN_A10_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
		NetFlow* BCIN_A9_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
		NetFlow* BCIN_A8_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
		NetFlow* BCIN_A7_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
		NetFlow* BCIN_A6_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
		NetFlow* BCIN_A5_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
		NetFlow* BCIN_A4_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
		NetFlow* BCIN_A3_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
		NetFlow* BCIN_A2_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
		NetFlow* BCIN_A1_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
		NetFlow* BCIN_A0_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
		NetFlow* C_A47_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A46_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A45_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A44_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A43_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A42_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A41_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A40_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A39_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A38_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A37_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A36_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A35_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A34_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A33_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A32_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A31_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A30_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A29_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A28_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A27_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A26_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A25_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A24_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A23_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A22_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A21_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A20_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A19_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A18_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A17_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A16_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A15_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A14_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A13_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A12_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A11_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A10_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A9_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A8_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A7_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A6_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A5_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A4_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A3_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A2_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A1_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* C_A0_B; // net ID: C lsb: 0  msb: 47 INPUT
		NetFlow* CARRYIN_A0_B; // net ID: CARRYIN lsb: 0  msb: 0 INPUT
		NetFlow* CEA_A0_B; // net ID: CEA lsb: 0  msb: 0 INPUT
		NetFlow* CEB_A0_B; // net ID: CEB lsb: 0  msb: 0 INPUT
		NetFlow* CEC_A0_B; // net ID: CEC lsb: 0  msb: 0 INPUT
		NetFlow* CECARRYIN_A0_B; // net ID: CECARRYIN lsb: 0  msb: 0 INPUT
		NetFlow* CED_A0_B; // net ID: CED lsb: 0  msb: 0 INPUT
		NetFlow* CEM_A0_B; // net ID: CEM lsb: 0  msb: 0 INPUT
		NetFlow* CEOPMODE_A0_B; // net ID: CEOPMODE lsb: 0  msb: 0 INPUT
		NetFlow* CEP_A0_B; // net ID: CEP lsb: 0  msb: 0 INPUT
		NetFlow* CLK_A0_B; // net ID: CLK lsb: 0  msb: 0 INPUT
		NetFlow* D_A17_B; // net ID: D lsb: 0  msb: 17 INPUT
		NetFlow* D_A16_B; // net ID: D lsb: 0  msb: 17 INPUT
		NetFlow* D_A15_B; // net ID: D lsb: 0  msb: 17 INPUT
		NetFlow* D_A14_B; // net ID: D lsb: 0  msb: 17 INPUT
		NetFlow* D_A13_B; // net ID: D lsb: 0  msb: 17 INPUT
		NetFlow* D_A12_B; // net ID: D lsb: 0  msb: 17 INPUT
		NetFlow* D_A11_B; // net ID: D lsb: 0  msb: 17 INPUT
		NetFlow* D_A10_B; // net ID: D lsb: 0  msb: 17 INPUT
		NetFlow* D_A9_B; // net ID: D lsb: 0  msb: 17 INPUT
		NetFlow* D_A8_B; // net ID: D lsb: 0  msb: 17 INPUT
		NetFlow* D_A7_B; // net ID: D lsb: 0  msb: 17 INPUT
		NetFlow* D_A6_B; // net ID: D lsb: 0  msb: 17 INPUT
		NetFlow* D_A5_B; // net ID: D lsb: 0  msb: 17 INPUT
		NetFlow* D_A4_B; // net ID: D lsb: 0  msb: 17 INPUT
		NetFlow* D_A3_B; // net ID: D lsb: 0  msb: 17 INPUT
		NetFlow* D_A2_B; // net ID: D lsb: 0  msb: 17 INPUT
		NetFlow* D_A1_B; // net ID: D lsb: 0  msb: 17 INPUT
		NetFlow* D_A0_B; // net ID: D lsb: 0  msb: 17 INPUT
		NetFlow* OPMODE_A7_B; // net ID: OPMODE lsb: 0  msb: 7 INPUT
		NetFlow* OPMODE_A6_B; // net ID: OPMODE lsb: 0  msb: 7 INPUT
		NetFlow* OPMODE_A5_B; // net ID: OPMODE lsb: 0  msb: 7 INPUT
		NetFlow* OPMODE_A4_B; // net ID: OPMODE lsb: 0  msb: 7 INPUT
		NetFlow* OPMODE_A3_B; // net ID: OPMODE lsb: 0  msb: 7 INPUT
		NetFlow* OPMODE_A2_B; // net ID: OPMODE lsb: 0  msb: 7 INPUT
		NetFlow* OPMODE_A1_B; // net ID: OPMODE lsb: 0  msb: 7 INPUT
		NetFlow* OPMODE_A0_B; // net ID: OPMODE lsb: 0  msb: 7 INPUT
		NetFlow* PCIN_A47_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A46_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A45_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A44_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A43_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A42_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A41_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A40_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A39_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A38_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A37_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A36_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A35_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A34_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A33_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A32_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A31_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A30_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A29_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A28_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A27_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A26_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A25_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A24_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A23_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A22_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A21_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A20_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A19_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A18_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A17_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A16_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A15_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A14_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A13_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A12_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A11_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A10_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A9_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A8_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A7_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A6_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A5_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A4_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A3_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A2_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A1_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* PCIN_A0_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
		NetFlow* RSTA_A0_B; // net ID: RSTA lsb: 0  msb: 0 INPUT
		NetFlow* RSTB_A0_B; // net ID: RSTB lsb: 0  msb: 0 INPUT
		NetFlow* RSTC_A0_B; // net ID: RSTC lsb: 0  msb: 0 INPUT
		NetFlow* RSTCARRYIN_A0_B; // net ID: RSTCARRYIN lsb: 0  msb: 0 INPUT
		NetFlow* RSTD_A0_B; // net ID: RSTD lsb: 0  msb: 0 INPUT
		NetFlow* RSTM_A0_B; // net ID: RSTM lsb: 0  msb: 0 INPUT
		NetFlow* RSTOPMODE_A0_B; // net ID: RSTOPMODE lsb: 0  msb: 0 INPUT
		NetFlow* RSTP_A0_B; // net ID: RSTP lsb: 0  msb: 0 INPUT
		
		public: X_DSP48A(
			const char * name,
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
			NetFlow* BCOUT_A17_B, // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
			NetFlow* BCOUT_A16_B, // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
			NetFlow* BCOUT_A15_B, // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
			NetFlow* BCOUT_A14_B, // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
			NetFlow* BCOUT_A13_B, // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
			NetFlow* BCOUT_A12_B, // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
			NetFlow* BCOUT_A11_B, // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
			NetFlow* BCOUT_A10_B, // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
			NetFlow* BCOUT_A9_B, // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
			NetFlow* BCOUT_A8_B, // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
			NetFlow* BCOUT_A7_B, // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
			NetFlow* BCOUT_A6_B, // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
			NetFlow* BCOUT_A5_B, // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
			NetFlow* BCOUT_A4_B, // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
			NetFlow* BCOUT_A3_B, // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
			NetFlow* BCOUT_A2_B, // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
			NetFlow* BCOUT_A1_B, // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
			NetFlow* BCOUT_A0_B, // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
			NetFlow* CARRYOUT_A0_B, // net ID: CARRYOUT lsb: 0  msb: 0 OUTPUT
			NetFlow* P_A47_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A46_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A45_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A44_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A43_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A42_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A41_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A40_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A39_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A38_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A37_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A36_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A35_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A34_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A33_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A32_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A31_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A30_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A29_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A28_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A27_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A26_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A25_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A24_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A23_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A22_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A21_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A20_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A19_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A18_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A17_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A16_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A15_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A14_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A13_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A12_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A11_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A10_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A9_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A8_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A7_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A6_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A5_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A4_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A3_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A2_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A1_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* P_A0_B, // net ID: P lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A47_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A46_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A45_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A44_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A43_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A42_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A41_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A40_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A39_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A38_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A37_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A36_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A35_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A34_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A33_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A32_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A31_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A30_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A29_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A28_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A27_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A26_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A25_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A24_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A23_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A22_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A21_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A20_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A19_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A18_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A17_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A16_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A15_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A14_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A13_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A12_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A11_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A10_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A9_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A8_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A7_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A6_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A5_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A4_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A3_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A2_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A1_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* PCOUT_A0_B, // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			NetFlow* A_A17_B, // net ID: A lsb: 0  msb: 17 INPUT
			NetFlow* A_A16_B, // net ID: A lsb: 0  msb: 17 INPUT
			NetFlow* A_A15_B, // net ID: A lsb: 0  msb: 17 INPUT
			NetFlow* A_A14_B, // net ID: A lsb: 0  msb: 17 INPUT
			NetFlow* A_A13_B, // net ID: A lsb: 0  msb: 17 INPUT
			NetFlow* A_A12_B, // net ID: A lsb: 0  msb: 17 INPUT
			NetFlow* A_A11_B, // net ID: A lsb: 0  msb: 17 INPUT
			NetFlow* A_A10_B, // net ID: A lsb: 0  msb: 17 INPUT
			NetFlow* A_A9_B, // net ID: A lsb: 0  msb: 17 INPUT
			NetFlow* A_A8_B, // net ID: A lsb: 0  msb: 17 INPUT
			NetFlow* A_A7_B, // net ID: A lsb: 0  msb: 17 INPUT
			NetFlow* A_A6_B, // net ID: A lsb: 0  msb: 17 INPUT
			NetFlow* A_A5_B, // net ID: A lsb: 0  msb: 17 INPUT
			NetFlow* A_A4_B, // net ID: A lsb: 0  msb: 17 INPUT
			NetFlow* A_A3_B, // net ID: A lsb: 0  msb: 17 INPUT
			NetFlow* A_A2_B, // net ID: A lsb: 0  msb: 17 INPUT
			NetFlow* A_A1_B, // net ID: A lsb: 0  msb: 17 INPUT
			NetFlow* A_A0_B, // net ID: A lsb: 0  msb: 17 INPUT
			NetFlow* B_A17_B, // net ID: B lsb: 0  msb: 17 INPUT
			NetFlow* B_A16_B, // net ID: B lsb: 0  msb: 17 INPUT
			NetFlow* B_A15_B, // net ID: B lsb: 0  msb: 17 INPUT
			NetFlow* B_A14_B, // net ID: B lsb: 0  msb: 17 INPUT
			NetFlow* B_A13_B, // net ID: B lsb: 0  msb: 17 INPUT
			NetFlow* B_A12_B, // net ID: B lsb: 0  msb: 17 INPUT
			NetFlow* B_A11_B, // net ID: B lsb: 0  msb: 17 INPUT
			NetFlow* B_A10_B, // net ID: B lsb: 0  msb: 17 INPUT
			NetFlow* B_A9_B, // net ID: B lsb: 0  msb: 17 INPUT
			NetFlow* B_A8_B, // net ID: B lsb: 0  msb: 17 INPUT
			NetFlow* B_A7_B, // net ID: B lsb: 0  msb: 17 INPUT
			NetFlow* B_A6_B, // net ID: B lsb: 0  msb: 17 INPUT
			NetFlow* B_A5_B, // net ID: B lsb: 0  msb: 17 INPUT
			NetFlow* B_A4_B, // net ID: B lsb: 0  msb: 17 INPUT
			NetFlow* B_A3_B, // net ID: B lsb: 0  msb: 17 INPUT
			NetFlow* B_A2_B, // net ID: B lsb: 0  msb: 17 INPUT
			NetFlow* B_A1_B, // net ID: B lsb: 0  msb: 17 INPUT
			NetFlow* B_A0_B, // net ID: B lsb: 0  msb: 17 INPUT
			NetFlow* BCIN_A17_B, // net ID: BCIN lsb: 0  msb: 17 INPUT
			NetFlow* BCIN_A16_B, // net ID: BCIN lsb: 0  msb: 17 INPUT
			NetFlow* BCIN_A15_B, // net ID: BCIN lsb: 0  msb: 17 INPUT
			NetFlow* BCIN_A14_B, // net ID: BCIN lsb: 0  msb: 17 INPUT
			NetFlow* BCIN_A13_B, // net ID: BCIN lsb: 0  msb: 17 INPUT
			NetFlow* BCIN_A12_B, // net ID: BCIN lsb: 0  msb: 17 INPUT
			NetFlow* BCIN_A11_B, // net ID: BCIN lsb: 0  msb: 17 INPUT
			NetFlow* BCIN_A10_B, // net ID: BCIN lsb: 0  msb: 17 INPUT
			NetFlow* BCIN_A9_B, // net ID: BCIN lsb: 0  msb: 17 INPUT
			NetFlow* BCIN_A8_B, // net ID: BCIN lsb: 0  msb: 17 INPUT
			NetFlow* BCIN_A7_B, // net ID: BCIN lsb: 0  msb: 17 INPUT
			NetFlow* BCIN_A6_B, // net ID: BCIN lsb: 0  msb: 17 INPUT
			NetFlow* BCIN_A5_B, // net ID: BCIN lsb: 0  msb: 17 INPUT
			NetFlow* BCIN_A4_B, // net ID: BCIN lsb: 0  msb: 17 INPUT
			NetFlow* BCIN_A3_B, // net ID: BCIN lsb: 0  msb: 17 INPUT
			NetFlow* BCIN_A2_B, // net ID: BCIN lsb: 0  msb: 17 INPUT
			NetFlow* BCIN_A1_B, // net ID: BCIN lsb: 0  msb: 17 INPUT
			NetFlow* BCIN_A0_B, // net ID: BCIN lsb: 0  msb: 17 INPUT
			NetFlow* C_A47_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A46_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A45_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A44_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A43_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A42_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A41_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A40_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A39_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A38_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A37_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A36_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A35_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A34_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A33_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A32_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A31_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A30_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A29_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A28_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A27_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A26_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A25_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A24_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A23_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A22_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A21_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A20_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A19_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A18_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A17_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A16_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A15_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A14_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A13_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A12_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A11_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A10_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A9_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A8_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A7_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A6_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A5_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A4_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A3_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A2_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A1_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* C_A0_B, // net ID: C lsb: 0  msb: 47 INPUT
			NetFlow* CARRYIN_A0_B, // net ID: CARRYIN lsb: 0  msb: 0 INPUT
			NetFlow* CEA_A0_B, // net ID: CEA lsb: 0  msb: 0 INPUT
			NetFlow* CEB_A0_B, // net ID: CEB lsb: 0  msb: 0 INPUT
			NetFlow* CEC_A0_B, // net ID: CEC lsb: 0  msb: 0 INPUT
			NetFlow* CECARRYIN_A0_B, // net ID: CECARRYIN lsb: 0  msb: 0 INPUT
			NetFlow* CED_A0_B, // net ID: CED lsb: 0  msb: 0 INPUT
			NetFlow* CEM_A0_B, // net ID: CEM lsb: 0  msb: 0 INPUT
			NetFlow* CEOPMODE_A0_B, // net ID: CEOPMODE lsb: 0  msb: 0 INPUT
			NetFlow* CEP_A0_B, // net ID: CEP lsb: 0  msb: 0 INPUT
			NetFlow* CLK_A0_B, // net ID: CLK lsb: 0  msb: 0 INPUT
			NetFlow* D_A17_B, // net ID: D lsb: 0  msb: 17 INPUT
			NetFlow* D_A16_B, // net ID: D lsb: 0  msb: 17 INPUT
			NetFlow* D_A15_B, // net ID: D lsb: 0  msb: 17 INPUT
			NetFlow* D_A14_B, // net ID: D lsb: 0  msb: 17 INPUT
			NetFlow* D_A13_B, // net ID: D lsb: 0  msb: 17 INPUT
			NetFlow* D_A12_B, // net ID: D lsb: 0  msb: 17 INPUT
			NetFlow* D_A11_B, // net ID: D lsb: 0  msb: 17 INPUT
			NetFlow* D_A10_B, // net ID: D lsb: 0  msb: 17 INPUT
			NetFlow* D_A9_B, // net ID: D lsb: 0  msb: 17 INPUT
			NetFlow* D_A8_B, // net ID: D lsb: 0  msb: 17 INPUT
			NetFlow* D_A7_B, // net ID: D lsb: 0  msb: 17 INPUT
			NetFlow* D_A6_B, // net ID: D lsb: 0  msb: 17 INPUT
			NetFlow* D_A5_B, // net ID: D lsb: 0  msb: 17 INPUT
			NetFlow* D_A4_B, // net ID: D lsb: 0  msb: 17 INPUT
			NetFlow* D_A3_B, // net ID: D lsb: 0  msb: 17 INPUT
			NetFlow* D_A2_B, // net ID: D lsb: 0  msb: 17 INPUT
			NetFlow* D_A1_B, // net ID: D lsb: 0  msb: 17 INPUT
			NetFlow* D_A0_B, // net ID: D lsb: 0  msb: 17 INPUT
			NetFlow* OPMODE_A7_B, // net ID: OPMODE lsb: 0  msb: 7 INPUT
			NetFlow* OPMODE_A6_B, // net ID: OPMODE lsb: 0  msb: 7 INPUT
			NetFlow* OPMODE_A5_B, // net ID: OPMODE lsb: 0  msb: 7 INPUT
			NetFlow* OPMODE_A4_B, // net ID: OPMODE lsb: 0  msb: 7 INPUT
			NetFlow* OPMODE_A3_B, // net ID: OPMODE lsb: 0  msb: 7 INPUT
			NetFlow* OPMODE_A2_B, // net ID: OPMODE lsb: 0  msb: 7 INPUT
			NetFlow* OPMODE_A1_B, // net ID: OPMODE lsb: 0  msb: 7 INPUT
			NetFlow* OPMODE_A0_B, // net ID: OPMODE lsb: 0  msb: 7 INPUT
			NetFlow* PCIN_A47_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A46_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A45_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A44_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A43_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A42_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A41_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A40_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A39_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A38_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A37_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A36_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A35_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A34_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A33_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A32_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A31_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A30_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A29_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A28_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A27_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A26_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A25_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A24_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A23_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A22_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A21_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A20_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A19_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A18_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A17_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A16_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A15_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A14_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A13_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A12_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A11_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A10_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A9_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A8_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A7_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A6_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A5_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A4_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A3_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A2_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A1_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* PCIN_A0_B, // net ID: PCIN lsb: 0  msb: 47 INPUT
			NetFlow* RSTA_A0_B, // net ID: RSTA lsb: 0  msb: 0 INPUT
			NetFlow* RSTB_A0_B, // net ID: RSTB lsb: 0  msb: 0 INPUT
			NetFlow* RSTC_A0_B, // net ID: RSTC lsb: 0  msb: 0 INPUT
			NetFlow* RSTCARRYIN_A0_B, // net ID: RSTCARRYIN lsb: 0  msb: 0 INPUT
			NetFlow* RSTD_A0_B, // net ID: RSTD lsb: 0  msb: 0 INPUT
			NetFlow* RSTM_A0_B, // net ID: RSTM lsb: 0  msb: 0 INPUT
			NetFlow* RSTOPMODE_A0_B, // net ID: RSTOPMODE lsb: 0  msb: 0 INPUT
			NetFlow* RSTP_A0_B // net ID: RSTP lsb: 0  msb: 0 INPUT
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
			this->BCOUT_A17_B = BCOUT_A17_B; // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
			this->BCOUT_A16_B = BCOUT_A16_B; // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
			this->BCOUT_A15_B = BCOUT_A15_B; // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
			this->BCOUT_A14_B = BCOUT_A14_B; // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
			this->BCOUT_A13_B = BCOUT_A13_B; // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
			this->BCOUT_A12_B = BCOUT_A12_B; // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
			this->BCOUT_A11_B = BCOUT_A11_B; // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
			this->BCOUT_A10_B = BCOUT_A10_B; // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
			this->BCOUT_A9_B = BCOUT_A9_B; // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
			this->BCOUT_A8_B = BCOUT_A8_B; // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
			this->BCOUT_A7_B = BCOUT_A7_B; // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
			this->BCOUT_A6_B = BCOUT_A6_B; // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
			this->BCOUT_A5_B = BCOUT_A5_B; // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
			this->BCOUT_A4_B = BCOUT_A4_B; // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
			this->BCOUT_A3_B = BCOUT_A3_B; // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
			this->BCOUT_A2_B = BCOUT_A2_B; // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
			this->BCOUT_A1_B = BCOUT_A1_B; // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
			this->BCOUT_A0_B = BCOUT_A0_B; // net ID: BCOUT lsb: 0  msb: 17 OUTPUT
			this->CARRYOUT_A0_B = CARRYOUT_A0_B; // net ID: CARRYOUT lsb: 0  msb: 0 OUTPUT
			this->P_A47_B = P_A47_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A46_B = P_A46_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A45_B = P_A45_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A44_B = P_A44_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A43_B = P_A43_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A42_B = P_A42_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A41_B = P_A41_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A40_B = P_A40_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A39_B = P_A39_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A38_B = P_A38_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A37_B = P_A37_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A36_B = P_A36_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A35_B = P_A35_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A34_B = P_A34_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A33_B = P_A33_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A32_B = P_A32_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A31_B = P_A31_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A30_B = P_A30_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A29_B = P_A29_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A28_B = P_A28_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A27_B = P_A27_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A26_B = P_A26_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A25_B = P_A25_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A24_B = P_A24_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A23_B = P_A23_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A22_B = P_A22_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A21_B = P_A21_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A20_B = P_A20_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A19_B = P_A19_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A18_B = P_A18_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A17_B = P_A17_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A16_B = P_A16_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A15_B = P_A15_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A14_B = P_A14_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A13_B = P_A13_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A12_B = P_A12_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A11_B = P_A11_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A10_B = P_A10_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A9_B = P_A9_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A8_B = P_A8_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A7_B = P_A7_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A6_B = P_A6_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A5_B = P_A5_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A4_B = P_A4_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A3_B = P_A3_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A2_B = P_A2_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A1_B = P_A1_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->P_A0_B = P_A0_B; // net ID: P lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A47_B = PCOUT_A47_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A46_B = PCOUT_A46_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A45_B = PCOUT_A45_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A44_B = PCOUT_A44_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A43_B = PCOUT_A43_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A42_B = PCOUT_A42_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A41_B = PCOUT_A41_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A40_B = PCOUT_A40_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A39_B = PCOUT_A39_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A38_B = PCOUT_A38_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A37_B = PCOUT_A37_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A36_B = PCOUT_A36_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A35_B = PCOUT_A35_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A34_B = PCOUT_A34_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A33_B = PCOUT_A33_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A32_B = PCOUT_A32_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A31_B = PCOUT_A31_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A30_B = PCOUT_A30_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A29_B = PCOUT_A29_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A28_B = PCOUT_A28_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A27_B = PCOUT_A27_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A26_B = PCOUT_A26_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A25_B = PCOUT_A25_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A24_B = PCOUT_A24_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A23_B = PCOUT_A23_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A22_B = PCOUT_A22_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A21_B = PCOUT_A21_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A20_B = PCOUT_A20_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A19_B = PCOUT_A19_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A18_B = PCOUT_A18_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A17_B = PCOUT_A17_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A16_B = PCOUT_A16_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A15_B = PCOUT_A15_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A14_B = PCOUT_A14_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A13_B = PCOUT_A13_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A12_B = PCOUT_A12_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A11_B = PCOUT_A11_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A10_B = PCOUT_A10_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A9_B = PCOUT_A9_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A8_B = PCOUT_A8_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A7_B = PCOUT_A7_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A6_B = PCOUT_A6_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A5_B = PCOUT_A5_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A4_B = PCOUT_A4_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A3_B = PCOUT_A3_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A2_B = PCOUT_A2_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A1_B = PCOUT_A1_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->PCOUT_A0_B = PCOUT_A0_B; // net ID: PCOUT lsb: 0  msb: 47 OUTPUT
			this->A_A17_B = A_A17_B; // net ID: A lsb: 0  msb: 17 INPUT
			this->A_A16_B = A_A16_B; // net ID: A lsb: 0  msb: 17 INPUT
			this->A_A15_B = A_A15_B; // net ID: A lsb: 0  msb: 17 INPUT
			this->A_A14_B = A_A14_B; // net ID: A lsb: 0  msb: 17 INPUT
			this->A_A13_B = A_A13_B; // net ID: A lsb: 0  msb: 17 INPUT
			this->A_A12_B = A_A12_B; // net ID: A lsb: 0  msb: 17 INPUT
			this->A_A11_B = A_A11_B; // net ID: A lsb: 0  msb: 17 INPUT
			this->A_A10_B = A_A10_B; // net ID: A lsb: 0  msb: 17 INPUT
			this->A_A9_B = A_A9_B; // net ID: A lsb: 0  msb: 17 INPUT
			this->A_A8_B = A_A8_B; // net ID: A lsb: 0  msb: 17 INPUT
			this->A_A7_B = A_A7_B; // net ID: A lsb: 0  msb: 17 INPUT
			this->A_A6_B = A_A6_B; // net ID: A lsb: 0  msb: 17 INPUT
			this->A_A5_B = A_A5_B; // net ID: A lsb: 0  msb: 17 INPUT
			this->A_A4_B = A_A4_B; // net ID: A lsb: 0  msb: 17 INPUT
			this->A_A3_B = A_A3_B; // net ID: A lsb: 0  msb: 17 INPUT
			this->A_A2_B = A_A2_B; // net ID: A lsb: 0  msb: 17 INPUT
			this->A_A1_B = A_A1_B; // net ID: A lsb: 0  msb: 17 INPUT
			this->A_A0_B = A_A0_B; // net ID: A lsb: 0  msb: 17 INPUT
			this->B_A17_B = B_A17_B; // net ID: B lsb: 0  msb: 17 INPUT
			this->B_A16_B = B_A16_B; // net ID: B lsb: 0  msb: 17 INPUT
			this->B_A15_B = B_A15_B; // net ID: B lsb: 0  msb: 17 INPUT
			this->B_A14_B = B_A14_B; // net ID: B lsb: 0  msb: 17 INPUT
			this->B_A13_B = B_A13_B; // net ID: B lsb: 0  msb: 17 INPUT
			this->B_A12_B = B_A12_B; // net ID: B lsb: 0  msb: 17 INPUT
			this->B_A11_B = B_A11_B; // net ID: B lsb: 0  msb: 17 INPUT
			this->B_A10_B = B_A10_B; // net ID: B lsb: 0  msb: 17 INPUT
			this->B_A9_B = B_A9_B; // net ID: B lsb: 0  msb: 17 INPUT
			this->B_A8_B = B_A8_B; // net ID: B lsb: 0  msb: 17 INPUT
			this->B_A7_B = B_A7_B; // net ID: B lsb: 0  msb: 17 INPUT
			this->B_A6_B = B_A6_B; // net ID: B lsb: 0  msb: 17 INPUT
			this->B_A5_B = B_A5_B; // net ID: B lsb: 0  msb: 17 INPUT
			this->B_A4_B = B_A4_B; // net ID: B lsb: 0  msb: 17 INPUT
			this->B_A3_B = B_A3_B; // net ID: B lsb: 0  msb: 17 INPUT
			this->B_A2_B = B_A2_B; // net ID: B lsb: 0  msb: 17 INPUT
			this->B_A1_B = B_A1_B; // net ID: B lsb: 0  msb: 17 INPUT
			this->B_A0_B = B_A0_B; // net ID: B lsb: 0  msb: 17 INPUT
			this->BCIN_A17_B = BCIN_A17_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
			this->BCIN_A16_B = BCIN_A16_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
			this->BCIN_A15_B = BCIN_A15_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
			this->BCIN_A14_B = BCIN_A14_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
			this->BCIN_A13_B = BCIN_A13_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
			this->BCIN_A12_B = BCIN_A12_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
			this->BCIN_A11_B = BCIN_A11_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
			this->BCIN_A10_B = BCIN_A10_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
			this->BCIN_A9_B = BCIN_A9_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
			this->BCIN_A8_B = BCIN_A8_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
			this->BCIN_A7_B = BCIN_A7_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
			this->BCIN_A6_B = BCIN_A6_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
			this->BCIN_A5_B = BCIN_A5_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
			this->BCIN_A4_B = BCIN_A4_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
			this->BCIN_A3_B = BCIN_A3_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
			this->BCIN_A2_B = BCIN_A2_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
			this->BCIN_A1_B = BCIN_A1_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
			this->BCIN_A0_B = BCIN_A0_B; // net ID: BCIN lsb: 0  msb: 17 INPUT
			this->C_A47_B = C_A47_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A46_B = C_A46_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A45_B = C_A45_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A44_B = C_A44_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A43_B = C_A43_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A42_B = C_A42_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A41_B = C_A41_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A40_B = C_A40_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A39_B = C_A39_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A38_B = C_A38_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A37_B = C_A37_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A36_B = C_A36_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A35_B = C_A35_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A34_B = C_A34_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A33_B = C_A33_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A32_B = C_A32_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A31_B = C_A31_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A30_B = C_A30_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A29_B = C_A29_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A28_B = C_A28_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A27_B = C_A27_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A26_B = C_A26_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A25_B = C_A25_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A24_B = C_A24_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A23_B = C_A23_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A22_B = C_A22_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A21_B = C_A21_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A20_B = C_A20_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A19_B = C_A19_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A18_B = C_A18_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A17_B = C_A17_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A16_B = C_A16_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A15_B = C_A15_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A14_B = C_A14_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A13_B = C_A13_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A12_B = C_A12_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A11_B = C_A11_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A10_B = C_A10_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A9_B = C_A9_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A8_B = C_A8_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A7_B = C_A7_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A6_B = C_A6_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A5_B = C_A5_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A4_B = C_A4_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A3_B = C_A3_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A2_B = C_A2_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A1_B = C_A1_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->C_A0_B = C_A0_B; // net ID: C lsb: 0  msb: 47 INPUT
			this->CARRYIN_A0_B = CARRYIN_A0_B; // net ID: CARRYIN lsb: 0  msb: 0 INPUT
			this->CEA_A0_B = CEA_A0_B; // net ID: CEA lsb: 0  msb: 0 INPUT
			this->CEB_A0_B = CEB_A0_B; // net ID: CEB lsb: 0  msb: 0 INPUT
			this->CEC_A0_B = CEC_A0_B; // net ID: CEC lsb: 0  msb: 0 INPUT
			this->CECARRYIN_A0_B = CECARRYIN_A0_B; // net ID: CECARRYIN lsb: 0  msb: 0 INPUT
			this->CED_A0_B = CED_A0_B; // net ID: CED lsb: 0  msb: 0 INPUT
			this->CEM_A0_B = CEM_A0_B; // net ID: CEM lsb: 0  msb: 0 INPUT
			this->CEOPMODE_A0_B = CEOPMODE_A0_B; // net ID: CEOPMODE lsb: 0  msb: 0 INPUT
			this->CEP_A0_B = CEP_A0_B; // net ID: CEP lsb: 0  msb: 0 INPUT
			this->CLK_A0_B = CLK_A0_B; // net ID: CLK lsb: 0  msb: 0 INPUT
			this->D_A17_B = D_A17_B; // net ID: D lsb: 0  msb: 17 INPUT
			this->D_A16_B = D_A16_B; // net ID: D lsb: 0  msb: 17 INPUT
			this->D_A15_B = D_A15_B; // net ID: D lsb: 0  msb: 17 INPUT
			this->D_A14_B = D_A14_B; // net ID: D lsb: 0  msb: 17 INPUT
			this->D_A13_B = D_A13_B; // net ID: D lsb: 0  msb: 17 INPUT
			this->D_A12_B = D_A12_B; // net ID: D lsb: 0  msb: 17 INPUT
			this->D_A11_B = D_A11_B; // net ID: D lsb: 0  msb: 17 INPUT
			this->D_A10_B = D_A10_B; // net ID: D lsb: 0  msb: 17 INPUT
			this->D_A9_B = D_A9_B; // net ID: D lsb: 0  msb: 17 INPUT
			this->D_A8_B = D_A8_B; // net ID: D lsb: 0  msb: 17 INPUT
			this->D_A7_B = D_A7_B; // net ID: D lsb: 0  msb: 17 INPUT
			this->D_A6_B = D_A6_B; // net ID: D lsb: 0  msb: 17 INPUT
			this->D_A5_B = D_A5_B; // net ID: D lsb: 0  msb: 17 INPUT
			this->D_A4_B = D_A4_B; // net ID: D lsb: 0  msb: 17 INPUT
			this->D_A3_B = D_A3_B; // net ID: D lsb: 0  msb: 17 INPUT
			this->D_A2_B = D_A2_B; // net ID: D lsb: 0  msb: 17 INPUT
			this->D_A1_B = D_A1_B; // net ID: D lsb: 0  msb: 17 INPUT
			this->D_A0_B = D_A0_B; // net ID: D lsb: 0  msb: 17 INPUT
			this->OPMODE_A7_B = OPMODE_A7_B; // net ID: OPMODE lsb: 0  msb: 7 INPUT
			this->OPMODE_A6_B = OPMODE_A6_B; // net ID: OPMODE lsb: 0  msb: 7 INPUT
			this->OPMODE_A5_B = OPMODE_A5_B; // net ID: OPMODE lsb: 0  msb: 7 INPUT
			this->OPMODE_A4_B = OPMODE_A4_B; // net ID: OPMODE lsb: 0  msb: 7 INPUT
			this->OPMODE_A3_B = OPMODE_A3_B; // net ID: OPMODE lsb: 0  msb: 7 INPUT
			this->OPMODE_A2_B = OPMODE_A2_B; // net ID: OPMODE lsb: 0  msb: 7 INPUT
			this->OPMODE_A1_B = OPMODE_A1_B; // net ID: OPMODE lsb: 0  msb: 7 INPUT
			this->OPMODE_A0_B = OPMODE_A0_B; // net ID: OPMODE lsb: 0  msb: 7 INPUT
			this->PCIN_A47_B = PCIN_A47_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A46_B = PCIN_A46_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A45_B = PCIN_A45_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A44_B = PCIN_A44_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A43_B = PCIN_A43_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A42_B = PCIN_A42_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A41_B = PCIN_A41_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A40_B = PCIN_A40_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A39_B = PCIN_A39_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A38_B = PCIN_A38_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A37_B = PCIN_A37_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A36_B = PCIN_A36_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A35_B = PCIN_A35_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A34_B = PCIN_A34_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A33_B = PCIN_A33_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A32_B = PCIN_A32_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A31_B = PCIN_A31_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A30_B = PCIN_A30_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A29_B = PCIN_A29_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A28_B = PCIN_A28_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A27_B = PCIN_A27_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A26_B = PCIN_A26_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A25_B = PCIN_A25_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A24_B = PCIN_A24_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A23_B = PCIN_A23_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A22_B = PCIN_A22_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A21_B = PCIN_A21_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A20_B = PCIN_A20_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A19_B = PCIN_A19_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A18_B = PCIN_A18_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A17_B = PCIN_A17_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A16_B = PCIN_A16_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A15_B = PCIN_A15_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A14_B = PCIN_A14_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A13_B = PCIN_A13_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A12_B = PCIN_A12_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A11_B = PCIN_A11_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A10_B = PCIN_A10_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A9_B = PCIN_A9_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A8_B = PCIN_A8_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A7_B = PCIN_A7_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A6_B = PCIN_A6_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A5_B = PCIN_A5_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A4_B = PCIN_A4_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A3_B = PCIN_A3_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A2_B = PCIN_A2_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A1_B = PCIN_A1_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->PCIN_A0_B = PCIN_A0_B; // net ID: PCIN lsb: 0  msb: 47 INPUT
			this->RSTA_A0_B = RSTA_A0_B; // net ID: RSTA lsb: 0  msb: 0 INPUT
			this->RSTB_A0_B = RSTB_A0_B; // net ID: RSTB lsb: 0  msb: 0 INPUT
			this->RSTC_A0_B = RSTC_A0_B; // net ID: RSTC lsb: 0  msb: 0 INPUT
			this->RSTCARRYIN_A0_B = RSTCARRYIN_A0_B; // net ID: RSTCARRYIN lsb: 0  msb: 0 INPUT
			this->RSTD_A0_B = RSTD_A0_B; // net ID: RSTD lsb: 0  msb: 0 INPUT
			this->RSTM_A0_B = RSTM_A0_B; // net ID: RSTM lsb: 0  msb: 0 INPUT
			this->RSTOPMODE_A0_B = RSTOPMODE_A0_B; // net ID: RSTOPMODE lsb: 0  msb: 0 INPUT
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
#endif // X_DSP48A_H
