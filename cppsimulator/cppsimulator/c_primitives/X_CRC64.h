/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_CRC64_H
#define X_CRC64_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"
namespace CPrimitives {
	
	class X_CRC64: public Primitive{

		//Verilog Parameters:
		parameter_int_t CRC_INIT;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* CRCOUT_A0_B; // net ID: CRCOUT lsb: 0  msb: 0 OUTPUT
		NetFlow* CRCCLK_A0_B; // net ID: CRCCLK lsb: 0  msb: 0 INPUT
		NetFlow* CRCDATAVALID_A0_B; // net ID: CRCDATAVALID lsb: 0  msb: 0 INPUT
		NetFlow* CRCDATAWIDTH_A0_B; // net ID: CRCDATAWIDTH lsb: 0  msb: 2 INPUT
		NetFlow* CRCDATAWIDTH_A1_B; // net ID: CRCDATAWIDTH lsb: 0  msb: 2 INPUT
		NetFlow* CRCDATAWIDTH_A2_B; // net ID: CRCDATAWIDTH lsb: 0  msb: 2 INPUT
		NetFlow* CRCIN_A0_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
		NetFlow* CRCIN_A1_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
		NetFlow* CRCIN_A2_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
		NetFlow* CRCIN_A3_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
		NetFlow* CRCIN_A4_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
		NetFlow* CRCIN_A5_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
		NetFlow* CRCIN_A6_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
		NetFlow* CRCIN_A7_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
		NetFlow* CRCIN_A8_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
		NetFlow* CRCIN_A9_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
		NetFlow* CRCIN_A10_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
		NetFlow* CRCIN_A11_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
		NetFlow* CRCIN_A12_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
		NetFlow* CRCIN_A13_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
		NetFlow* CRCIN_A14_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
		NetFlow* CRCIN_A15_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
		NetFlow* CRCIN_A16_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
		NetFlow* CRCIN_A17_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
		NetFlow* CRCIN_A18_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
		NetFlow* CRCIN_A19_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
		NetFlow* CRCIN_A20_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
		NetFlow* CRCIN_A21_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
		NetFlow* CRCIN_A22_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
		NetFlow* CRCIN_A23_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
		NetFlow* CRCIN_A24_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
		NetFlow* CRCIN_A25_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
		NetFlow* CRCIN_A26_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
		NetFlow* CRCIN_A27_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
		NetFlow* CRCIN_A28_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
		NetFlow* CRCIN_A29_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
		NetFlow* CRCIN_A30_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
		NetFlow* CRCIN_A31_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
		NetFlow* CRCIN_A32_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
		NetFlow* CRCIN_A33_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
		NetFlow* CRCIN_A34_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
		NetFlow* CRCIN_A35_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
		NetFlow* CRCIN_A36_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
		NetFlow* CRCIN_A37_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
		NetFlow* CRCIN_A38_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
		NetFlow* CRCIN_A39_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
		NetFlow* CRCIN_A40_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
		NetFlow* CRCIN_A41_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
		NetFlow* CRCIN_A42_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
		NetFlow* CRCIN_A43_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
		NetFlow* CRCIN_A44_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
		NetFlow* CRCIN_A45_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
		NetFlow* CRCIN_A46_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
		NetFlow* CRCIN_A47_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
		NetFlow* CRCIN_A48_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
		NetFlow* CRCIN_A49_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
		NetFlow* CRCIN_A50_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
		NetFlow* CRCIN_A51_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
		NetFlow* CRCIN_A52_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
		NetFlow* CRCIN_A53_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
		NetFlow* CRCIN_A54_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
		NetFlow* CRCIN_A55_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
		NetFlow* CRCIN_A56_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
		NetFlow* CRCIN_A57_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
		NetFlow* CRCIN_A58_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
		NetFlow* CRCIN_A59_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
		NetFlow* CRCIN_A60_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
		NetFlow* CRCIN_A61_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
		NetFlow* CRCIN_A62_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
		NetFlow* CRCIN_A63_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
		NetFlow* CRCRESET_A0_B; // net ID: CRCRESET lsb: 0  msb: 0 INPUT
		
		public: X_CRC64(
			const char * name,
			//Verilog Parameters:
			parameter_int_t CRC_INIT, // Default: 32'hFFFFFFFF
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* CRCOUT_A0_B, // net ID: CRCOUT lsb: 0  msb: 0 OUTPUT
			NetFlow* CRCCLK_A0_B, // net ID: CRCCLK lsb: 0  msb: 0 INPUT
			NetFlow* CRCDATAVALID_A0_B, // net ID: CRCDATAVALID lsb: 0  msb: 0 INPUT
			NetFlow* CRCDATAWIDTH_A0_B, // net ID: CRCDATAWIDTH lsb: 0  msb: 2 INPUT
			NetFlow* CRCDATAWIDTH_A1_B, // net ID: CRCDATAWIDTH lsb: 0  msb: 2 INPUT
			NetFlow* CRCDATAWIDTH_A2_B, // net ID: CRCDATAWIDTH lsb: 0  msb: 2 INPUT
			NetFlow* CRCIN_A0_B, // net ID: CRCIN lsb: 0  msb: 63 INPUT
			NetFlow* CRCIN_A1_B, // net ID: CRCIN lsb: 0  msb: 63 INPUT
			NetFlow* CRCIN_A2_B, // net ID: CRCIN lsb: 0  msb: 63 INPUT
			NetFlow* CRCIN_A3_B, // net ID: CRCIN lsb: 0  msb: 63 INPUT
			NetFlow* CRCIN_A4_B, // net ID: CRCIN lsb: 0  msb: 63 INPUT
			NetFlow* CRCIN_A5_B, // net ID: CRCIN lsb: 0  msb: 63 INPUT
			NetFlow* CRCIN_A6_B, // net ID: CRCIN lsb: 0  msb: 63 INPUT
			NetFlow* CRCIN_A7_B, // net ID: CRCIN lsb: 0  msb: 63 INPUT
			NetFlow* CRCIN_A8_B, // net ID: CRCIN lsb: 0  msb: 63 INPUT
			NetFlow* CRCIN_A9_B, // net ID: CRCIN lsb: 0  msb: 63 INPUT
			NetFlow* CRCIN_A10_B, // net ID: CRCIN lsb: 0  msb: 63 INPUT
			NetFlow* CRCIN_A11_B, // net ID: CRCIN lsb: 0  msb: 63 INPUT
			NetFlow* CRCIN_A12_B, // net ID: CRCIN lsb: 0  msb: 63 INPUT
			NetFlow* CRCIN_A13_B, // net ID: CRCIN lsb: 0  msb: 63 INPUT
			NetFlow* CRCIN_A14_B, // net ID: CRCIN lsb: 0  msb: 63 INPUT
			NetFlow* CRCIN_A15_B, // net ID: CRCIN lsb: 0  msb: 63 INPUT
			NetFlow* CRCIN_A16_B, // net ID: CRCIN lsb: 0  msb: 63 INPUT
			NetFlow* CRCIN_A17_B, // net ID: CRCIN lsb: 0  msb: 63 INPUT
			NetFlow* CRCIN_A18_B, // net ID: CRCIN lsb: 0  msb: 63 INPUT
			NetFlow* CRCIN_A19_B, // net ID: CRCIN lsb: 0  msb: 63 INPUT
			NetFlow* CRCIN_A20_B, // net ID: CRCIN lsb: 0  msb: 63 INPUT
			NetFlow* CRCIN_A21_B, // net ID: CRCIN lsb: 0  msb: 63 INPUT
			NetFlow* CRCIN_A22_B, // net ID: CRCIN lsb: 0  msb: 63 INPUT
			NetFlow* CRCIN_A23_B, // net ID: CRCIN lsb: 0  msb: 63 INPUT
			NetFlow* CRCIN_A24_B, // net ID: CRCIN lsb: 0  msb: 63 INPUT
			NetFlow* CRCIN_A25_B, // net ID: CRCIN lsb: 0  msb: 63 INPUT
			NetFlow* CRCIN_A26_B, // net ID: CRCIN lsb: 0  msb: 63 INPUT
			NetFlow* CRCIN_A27_B, // net ID: CRCIN lsb: 0  msb: 63 INPUT
			NetFlow* CRCIN_A28_B, // net ID: CRCIN lsb: 0  msb: 63 INPUT
			NetFlow* CRCIN_A29_B, // net ID: CRCIN lsb: 0  msb: 63 INPUT
			NetFlow* CRCIN_A30_B, // net ID: CRCIN lsb: 0  msb: 63 INPUT
			NetFlow* CRCIN_A31_B, // net ID: CRCIN lsb: 0  msb: 63 INPUT
			NetFlow* CRCIN_A32_B, // net ID: CRCIN lsb: 0  msb: 63 INPUT
			NetFlow* CRCIN_A33_B, // net ID: CRCIN lsb: 0  msb: 63 INPUT
			NetFlow* CRCIN_A34_B, // net ID: CRCIN lsb: 0  msb: 63 INPUT
			NetFlow* CRCIN_A35_B, // net ID: CRCIN lsb: 0  msb: 63 INPUT
			NetFlow* CRCIN_A36_B, // net ID: CRCIN lsb: 0  msb: 63 INPUT
			NetFlow* CRCIN_A37_B, // net ID: CRCIN lsb: 0  msb: 63 INPUT
			NetFlow* CRCIN_A38_B, // net ID: CRCIN lsb: 0  msb: 63 INPUT
			NetFlow* CRCIN_A39_B, // net ID: CRCIN lsb: 0  msb: 63 INPUT
			NetFlow* CRCIN_A40_B, // net ID: CRCIN lsb: 0  msb: 63 INPUT
			NetFlow* CRCIN_A41_B, // net ID: CRCIN lsb: 0  msb: 63 INPUT
			NetFlow* CRCIN_A42_B, // net ID: CRCIN lsb: 0  msb: 63 INPUT
			NetFlow* CRCIN_A43_B, // net ID: CRCIN lsb: 0  msb: 63 INPUT
			NetFlow* CRCIN_A44_B, // net ID: CRCIN lsb: 0  msb: 63 INPUT
			NetFlow* CRCIN_A45_B, // net ID: CRCIN lsb: 0  msb: 63 INPUT
			NetFlow* CRCIN_A46_B, // net ID: CRCIN lsb: 0  msb: 63 INPUT
			NetFlow* CRCIN_A47_B, // net ID: CRCIN lsb: 0  msb: 63 INPUT
			NetFlow* CRCIN_A48_B, // net ID: CRCIN lsb: 0  msb: 63 INPUT
			NetFlow* CRCIN_A49_B, // net ID: CRCIN lsb: 0  msb: 63 INPUT
			NetFlow* CRCIN_A50_B, // net ID: CRCIN lsb: 0  msb: 63 INPUT
			NetFlow* CRCIN_A51_B, // net ID: CRCIN lsb: 0  msb: 63 INPUT
			NetFlow* CRCIN_A52_B, // net ID: CRCIN lsb: 0  msb: 63 INPUT
			NetFlow* CRCIN_A53_B, // net ID: CRCIN lsb: 0  msb: 63 INPUT
			NetFlow* CRCIN_A54_B, // net ID: CRCIN lsb: 0  msb: 63 INPUT
			NetFlow* CRCIN_A55_B, // net ID: CRCIN lsb: 0  msb: 63 INPUT
			NetFlow* CRCIN_A56_B, // net ID: CRCIN lsb: 0  msb: 63 INPUT
			NetFlow* CRCIN_A57_B, // net ID: CRCIN lsb: 0  msb: 63 INPUT
			NetFlow* CRCIN_A58_B, // net ID: CRCIN lsb: 0  msb: 63 INPUT
			NetFlow* CRCIN_A59_B, // net ID: CRCIN lsb: 0  msb: 63 INPUT
			NetFlow* CRCIN_A60_B, // net ID: CRCIN lsb: 0  msb: 63 INPUT
			NetFlow* CRCIN_A61_B, // net ID: CRCIN lsb: 0  msb: 63 INPUT
			NetFlow* CRCIN_A62_B, // net ID: CRCIN lsb: 0  msb: 63 INPUT
			NetFlow* CRCIN_A63_B, // net ID: CRCIN lsb: 0  msb: 63 INPUT
			NetFlow* CRCRESET_A0_B // net ID: CRCRESET lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->CRC_INIT = CRC_INIT; // Default: 32'hFFFFFFFF
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->CRCOUT_A0_B = CRCOUT_A0_B; // net ID: CRCOUT lsb: 0  msb: 0 OUTPUT
			this->CRCCLK_A0_B = CRCCLK_A0_B; // net ID: CRCCLK lsb: 0  msb: 0 INPUT
			this->CRCDATAVALID_A0_B = CRCDATAVALID_A0_B; // net ID: CRCDATAVALID lsb: 0  msb: 0 INPUT
			this->CRCDATAWIDTH_A0_B = CRCDATAWIDTH_A0_B; // net ID: CRCDATAWIDTH lsb: 0  msb: 2 INPUT
			this->CRCDATAWIDTH_A1_B = CRCDATAWIDTH_A1_B; // net ID: CRCDATAWIDTH lsb: 0  msb: 2 INPUT
			this->CRCDATAWIDTH_A2_B = CRCDATAWIDTH_A2_B; // net ID: CRCDATAWIDTH lsb: 0  msb: 2 INPUT
			this->CRCIN_A0_B = CRCIN_A0_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
			this->CRCIN_A1_B = CRCIN_A1_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
			this->CRCIN_A2_B = CRCIN_A2_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
			this->CRCIN_A3_B = CRCIN_A3_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
			this->CRCIN_A4_B = CRCIN_A4_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
			this->CRCIN_A5_B = CRCIN_A5_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
			this->CRCIN_A6_B = CRCIN_A6_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
			this->CRCIN_A7_B = CRCIN_A7_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
			this->CRCIN_A8_B = CRCIN_A8_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
			this->CRCIN_A9_B = CRCIN_A9_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
			this->CRCIN_A10_B = CRCIN_A10_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
			this->CRCIN_A11_B = CRCIN_A11_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
			this->CRCIN_A12_B = CRCIN_A12_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
			this->CRCIN_A13_B = CRCIN_A13_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
			this->CRCIN_A14_B = CRCIN_A14_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
			this->CRCIN_A15_B = CRCIN_A15_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
			this->CRCIN_A16_B = CRCIN_A16_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
			this->CRCIN_A17_B = CRCIN_A17_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
			this->CRCIN_A18_B = CRCIN_A18_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
			this->CRCIN_A19_B = CRCIN_A19_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
			this->CRCIN_A20_B = CRCIN_A20_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
			this->CRCIN_A21_B = CRCIN_A21_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
			this->CRCIN_A22_B = CRCIN_A22_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
			this->CRCIN_A23_B = CRCIN_A23_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
			this->CRCIN_A24_B = CRCIN_A24_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
			this->CRCIN_A25_B = CRCIN_A25_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
			this->CRCIN_A26_B = CRCIN_A26_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
			this->CRCIN_A27_B = CRCIN_A27_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
			this->CRCIN_A28_B = CRCIN_A28_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
			this->CRCIN_A29_B = CRCIN_A29_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
			this->CRCIN_A30_B = CRCIN_A30_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
			this->CRCIN_A31_B = CRCIN_A31_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
			this->CRCIN_A32_B = CRCIN_A32_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
			this->CRCIN_A33_B = CRCIN_A33_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
			this->CRCIN_A34_B = CRCIN_A34_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
			this->CRCIN_A35_B = CRCIN_A35_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
			this->CRCIN_A36_B = CRCIN_A36_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
			this->CRCIN_A37_B = CRCIN_A37_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
			this->CRCIN_A38_B = CRCIN_A38_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
			this->CRCIN_A39_B = CRCIN_A39_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
			this->CRCIN_A40_B = CRCIN_A40_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
			this->CRCIN_A41_B = CRCIN_A41_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
			this->CRCIN_A42_B = CRCIN_A42_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
			this->CRCIN_A43_B = CRCIN_A43_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
			this->CRCIN_A44_B = CRCIN_A44_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
			this->CRCIN_A45_B = CRCIN_A45_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
			this->CRCIN_A46_B = CRCIN_A46_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
			this->CRCIN_A47_B = CRCIN_A47_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
			this->CRCIN_A48_B = CRCIN_A48_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
			this->CRCIN_A49_B = CRCIN_A49_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
			this->CRCIN_A50_B = CRCIN_A50_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
			this->CRCIN_A51_B = CRCIN_A51_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
			this->CRCIN_A52_B = CRCIN_A52_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
			this->CRCIN_A53_B = CRCIN_A53_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
			this->CRCIN_A54_B = CRCIN_A54_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
			this->CRCIN_A55_B = CRCIN_A55_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
			this->CRCIN_A56_B = CRCIN_A56_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
			this->CRCIN_A57_B = CRCIN_A57_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
			this->CRCIN_A58_B = CRCIN_A58_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
			this->CRCIN_A59_B = CRCIN_A59_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
			this->CRCIN_A60_B = CRCIN_A60_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
			this->CRCIN_A61_B = CRCIN_A61_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
			this->CRCIN_A62_B = CRCIN_A62_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
			this->CRCIN_A63_B = CRCIN_A63_B; // net ID: CRCIN lsb: 0  msb: 63 INPUT
			this->CRCRESET_A0_B = CRCRESET_A0_B; // net ID: CRCRESET lsb: 0  msb: 0 INPUT
			
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
#endif // X_CRC64_H
