/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_CRC32_H
#define X_CRC32_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_CRC32: public Primitive{

		//Verilog Parameters:
		parameter_int_t CRC_INIT;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* CRCOUT_A31_B; // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* CRCOUT_A30_B; // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* CRCOUT_A29_B; // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* CRCOUT_A28_B; // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* CRCOUT_A27_B; // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* CRCOUT_A26_B; // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* CRCOUT_A25_B; // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* CRCOUT_A24_B; // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* CRCOUT_A23_B; // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* CRCOUT_A22_B; // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* CRCOUT_A21_B; // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* CRCOUT_A20_B; // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* CRCOUT_A19_B; // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* CRCOUT_A18_B; // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* CRCOUT_A17_B; // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* CRCOUT_A16_B; // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* CRCOUT_A15_B; // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* CRCOUT_A14_B; // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* CRCOUT_A13_B; // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* CRCOUT_A12_B; // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* CRCOUT_A11_B; // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* CRCOUT_A10_B; // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* CRCOUT_A9_B; // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* CRCOUT_A8_B; // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* CRCOUT_A7_B; // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* CRCOUT_A6_B; // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* CRCOUT_A5_B; // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* CRCOUT_A4_B; // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* CRCOUT_A3_B; // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* CRCOUT_A2_B; // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* CRCOUT_A1_B; // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* CRCOUT_A0_B; // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* CRCCLK_A0_B; // net ID: CRCCLK lsb: 0  msb: 0 INPUT
		NetFlow* CRCDATAVALID_A0_B; // net ID: CRCDATAVALID lsb: 0  msb: 0 INPUT
		NetFlow* CRCDATAWIDTH_A2_B; // net ID: CRCDATAWIDTH lsb: 0  msb: 2 INPUT
		NetFlow* CRCDATAWIDTH_A1_B; // net ID: CRCDATAWIDTH lsb: 0  msb: 2 INPUT
		NetFlow* CRCDATAWIDTH_A0_B; // net ID: CRCDATAWIDTH lsb: 0  msb: 2 INPUT
		NetFlow* CRCIN_A31_B; // net ID: CRCIN lsb: 0  msb: 31 INPUT
		NetFlow* CRCIN_A30_B; // net ID: CRCIN lsb: 0  msb: 31 INPUT
		NetFlow* CRCIN_A29_B; // net ID: CRCIN lsb: 0  msb: 31 INPUT
		NetFlow* CRCIN_A28_B; // net ID: CRCIN lsb: 0  msb: 31 INPUT
		NetFlow* CRCIN_A27_B; // net ID: CRCIN lsb: 0  msb: 31 INPUT
		NetFlow* CRCIN_A26_B; // net ID: CRCIN lsb: 0  msb: 31 INPUT
		NetFlow* CRCIN_A25_B; // net ID: CRCIN lsb: 0  msb: 31 INPUT
		NetFlow* CRCIN_A24_B; // net ID: CRCIN lsb: 0  msb: 31 INPUT
		NetFlow* CRCIN_A23_B; // net ID: CRCIN lsb: 0  msb: 31 INPUT
		NetFlow* CRCIN_A22_B; // net ID: CRCIN lsb: 0  msb: 31 INPUT
		NetFlow* CRCIN_A21_B; // net ID: CRCIN lsb: 0  msb: 31 INPUT
		NetFlow* CRCIN_A20_B; // net ID: CRCIN lsb: 0  msb: 31 INPUT
		NetFlow* CRCIN_A19_B; // net ID: CRCIN lsb: 0  msb: 31 INPUT
		NetFlow* CRCIN_A18_B; // net ID: CRCIN lsb: 0  msb: 31 INPUT
		NetFlow* CRCIN_A17_B; // net ID: CRCIN lsb: 0  msb: 31 INPUT
		NetFlow* CRCIN_A16_B; // net ID: CRCIN lsb: 0  msb: 31 INPUT
		NetFlow* CRCIN_A15_B; // net ID: CRCIN lsb: 0  msb: 31 INPUT
		NetFlow* CRCIN_A14_B; // net ID: CRCIN lsb: 0  msb: 31 INPUT
		NetFlow* CRCIN_A13_B; // net ID: CRCIN lsb: 0  msb: 31 INPUT
		NetFlow* CRCIN_A12_B; // net ID: CRCIN lsb: 0  msb: 31 INPUT
		NetFlow* CRCIN_A11_B; // net ID: CRCIN lsb: 0  msb: 31 INPUT
		NetFlow* CRCIN_A10_B; // net ID: CRCIN lsb: 0  msb: 31 INPUT
		NetFlow* CRCIN_A9_B; // net ID: CRCIN lsb: 0  msb: 31 INPUT
		NetFlow* CRCIN_A8_B; // net ID: CRCIN lsb: 0  msb: 31 INPUT
		NetFlow* CRCIN_A7_B; // net ID: CRCIN lsb: 0  msb: 31 INPUT
		NetFlow* CRCIN_A6_B; // net ID: CRCIN lsb: 0  msb: 31 INPUT
		NetFlow* CRCIN_A5_B; // net ID: CRCIN lsb: 0  msb: 31 INPUT
		NetFlow* CRCIN_A4_B; // net ID: CRCIN lsb: 0  msb: 31 INPUT
		NetFlow* CRCIN_A3_B; // net ID: CRCIN lsb: 0  msb: 31 INPUT
		NetFlow* CRCIN_A2_B; // net ID: CRCIN lsb: 0  msb: 31 INPUT
		NetFlow* CRCIN_A1_B; // net ID: CRCIN lsb: 0  msb: 31 INPUT
		NetFlow* CRCIN_A0_B; // net ID: CRCIN lsb: 0  msb: 31 INPUT
		NetFlow* CRCRESET_A0_B; // net ID: CRCRESET lsb: 0  msb: 0 INPUT
		
		public: X_CRC32(
			const char * name,
			//Verilog Parameters:
			parameter_int_t CRC_INIT, // Default: 32'hFFFFFFFF
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* CRCOUT_A31_B, // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* CRCOUT_A30_B, // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* CRCOUT_A29_B, // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* CRCOUT_A28_B, // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* CRCOUT_A27_B, // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* CRCOUT_A26_B, // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* CRCOUT_A25_B, // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* CRCOUT_A24_B, // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* CRCOUT_A23_B, // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* CRCOUT_A22_B, // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* CRCOUT_A21_B, // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* CRCOUT_A20_B, // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* CRCOUT_A19_B, // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* CRCOUT_A18_B, // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* CRCOUT_A17_B, // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* CRCOUT_A16_B, // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* CRCOUT_A15_B, // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* CRCOUT_A14_B, // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* CRCOUT_A13_B, // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* CRCOUT_A12_B, // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* CRCOUT_A11_B, // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* CRCOUT_A10_B, // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* CRCOUT_A9_B, // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* CRCOUT_A8_B, // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* CRCOUT_A7_B, // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* CRCOUT_A6_B, // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* CRCOUT_A5_B, // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* CRCOUT_A4_B, // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* CRCOUT_A3_B, // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* CRCOUT_A2_B, // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* CRCOUT_A1_B, // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* CRCOUT_A0_B, // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* CRCCLK_A0_B, // net ID: CRCCLK lsb: 0  msb: 0 INPUT
			NetFlow* CRCDATAVALID_A0_B, // net ID: CRCDATAVALID lsb: 0  msb: 0 INPUT
			NetFlow* CRCDATAWIDTH_A2_B, // net ID: CRCDATAWIDTH lsb: 0  msb: 2 INPUT
			NetFlow* CRCDATAWIDTH_A1_B, // net ID: CRCDATAWIDTH lsb: 0  msb: 2 INPUT
			NetFlow* CRCDATAWIDTH_A0_B, // net ID: CRCDATAWIDTH lsb: 0  msb: 2 INPUT
			NetFlow* CRCIN_A31_B, // net ID: CRCIN lsb: 0  msb: 31 INPUT
			NetFlow* CRCIN_A30_B, // net ID: CRCIN lsb: 0  msb: 31 INPUT
			NetFlow* CRCIN_A29_B, // net ID: CRCIN lsb: 0  msb: 31 INPUT
			NetFlow* CRCIN_A28_B, // net ID: CRCIN lsb: 0  msb: 31 INPUT
			NetFlow* CRCIN_A27_B, // net ID: CRCIN lsb: 0  msb: 31 INPUT
			NetFlow* CRCIN_A26_B, // net ID: CRCIN lsb: 0  msb: 31 INPUT
			NetFlow* CRCIN_A25_B, // net ID: CRCIN lsb: 0  msb: 31 INPUT
			NetFlow* CRCIN_A24_B, // net ID: CRCIN lsb: 0  msb: 31 INPUT
			NetFlow* CRCIN_A23_B, // net ID: CRCIN lsb: 0  msb: 31 INPUT
			NetFlow* CRCIN_A22_B, // net ID: CRCIN lsb: 0  msb: 31 INPUT
			NetFlow* CRCIN_A21_B, // net ID: CRCIN lsb: 0  msb: 31 INPUT
			NetFlow* CRCIN_A20_B, // net ID: CRCIN lsb: 0  msb: 31 INPUT
			NetFlow* CRCIN_A19_B, // net ID: CRCIN lsb: 0  msb: 31 INPUT
			NetFlow* CRCIN_A18_B, // net ID: CRCIN lsb: 0  msb: 31 INPUT
			NetFlow* CRCIN_A17_B, // net ID: CRCIN lsb: 0  msb: 31 INPUT
			NetFlow* CRCIN_A16_B, // net ID: CRCIN lsb: 0  msb: 31 INPUT
			NetFlow* CRCIN_A15_B, // net ID: CRCIN lsb: 0  msb: 31 INPUT
			NetFlow* CRCIN_A14_B, // net ID: CRCIN lsb: 0  msb: 31 INPUT
			NetFlow* CRCIN_A13_B, // net ID: CRCIN lsb: 0  msb: 31 INPUT
			NetFlow* CRCIN_A12_B, // net ID: CRCIN lsb: 0  msb: 31 INPUT
			NetFlow* CRCIN_A11_B, // net ID: CRCIN lsb: 0  msb: 31 INPUT
			NetFlow* CRCIN_A10_B, // net ID: CRCIN lsb: 0  msb: 31 INPUT
			NetFlow* CRCIN_A9_B, // net ID: CRCIN lsb: 0  msb: 31 INPUT
			NetFlow* CRCIN_A8_B, // net ID: CRCIN lsb: 0  msb: 31 INPUT
			NetFlow* CRCIN_A7_B, // net ID: CRCIN lsb: 0  msb: 31 INPUT
			NetFlow* CRCIN_A6_B, // net ID: CRCIN lsb: 0  msb: 31 INPUT
			NetFlow* CRCIN_A5_B, // net ID: CRCIN lsb: 0  msb: 31 INPUT
			NetFlow* CRCIN_A4_B, // net ID: CRCIN lsb: 0  msb: 31 INPUT
			NetFlow* CRCIN_A3_B, // net ID: CRCIN lsb: 0  msb: 31 INPUT
			NetFlow* CRCIN_A2_B, // net ID: CRCIN lsb: 0  msb: 31 INPUT
			NetFlow* CRCIN_A1_B, // net ID: CRCIN lsb: 0  msb: 31 INPUT
			NetFlow* CRCIN_A0_B, // net ID: CRCIN lsb: 0  msb: 31 INPUT
			NetFlow* CRCRESET_A0_B // net ID: CRCRESET lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->CRC_INIT = CRC_INIT; // Default: 32'hFFFFFFFF
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->CRCOUT_A31_B = CRCOUT_A31_B; // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
			this->CRCOUT_A30_B = CRCOUT_A30_B; // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
			this->CRCOUT_A29_B = CRCOUT_A29_B; // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
			this->CRCOUT_A28_B = CRCOUT_A28_B; // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
			this->CRCOUT_A27_B = CRCOUT_A27_B; // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
			this->CRCOUT_A26_B = CRCOUT_A26_B; // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
			this->CRCOUT_A25_B = CRCOUT_A25_B; // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
			this->CRCOUT_A24_B = CRCOUT_A24_B; // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
			this->CRCOUT_A23_B = CRCOUT_A23_B; // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
			this->CRCOUT_A22_B = CRCOUT_A22_B; // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
			this->CRCOUT_A21_B = CRCOUT_A21_B; // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
			this->CRCOUT_A20_B = CRCOUT_A20_B; // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
			this->CRCOUT_A19_B = CRCOUT_A19_B; // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
			this->CRCOUT_A18_B = CRCOUT_A18_B; // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
			this->CRCOUT_A17_B = CRCOUT_A17_B; // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
			this->CRCOUT_A16_B = CRCOUT_A16_B; // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
			this->CRCOUT_A15_B = CRCOUT_A15_B; // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
			this->CRCOUT_A14_B = CRCOUT_A14_B; // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
			this->CRCOUT_A13_B = CRCOUT_A13_B; // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
			this->CRCOUT_A12_B = CRCOUT_A12_B; // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
			this->CRCOUT_A11_B = CRCOUT_A11_B; // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
			this->CRCOUT_A10_B = CRCOUT_A10_B; // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
			this->CRCOUT_A9_B = CRCOUT_A9_B; // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
			this->CRCOUT_A8_B = CRCOUT_A8_B; // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
			this->CRCOUT_A7_B = CRCOUT_A7_B; // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
			this->CRCOUT_A6_B = CRCOUT_A6_B; // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
			this->CRCOUT_A5_B = CRCOUT_A5_B; // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
			this->CRCOUT_A4_B = CRCOUT_A4_B; // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
			this->CRCOUT_A3_B = CRCOUT_A3_B; // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
			this->CRCOUT_A2_B = CRCOUT_A2_B; // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
			this->CRCOUT_A1_B = CRCOUT_A1_B; // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
			this->CRCOUT_A0_B = CRCOUT_A0_B; // net ID: CRCOUT lsb: 0  msb: 31 OUTPUT
			this->CRCCLK_A0_B = CRCCLK_A0_B; // net ID: CRCCLK lsb: 0  msb: 0 INPUT
			this->CRCDATAVALID_A0_B = CRCDATAVALID_A0_B; // net ID: CRCDATAVALID lsb: 0  msb: 0 INPUT
			this->CRCDATAWIDTH_A2_B = CRCDATAWIDTH_A2_B; // net ID: CRCDATAWIDTH lsb: 0  msb: 2 INPUT
			this->CRCDATAWIDTH_A1_B = CRCDATAWIDTH_A1_B; // net ID: CRCDATAWIDTH lsb: 0  msb: 2 INPUT
			this->CRCDATAWIDTH_A0_B = CRCDATAWIDTH_A0_B; // net ID: CRCDATAWIDTH lsb: 0  msb: 2 INPUT
			this->CRCIN_A31_B = CRCIN_A31_B; // net ID: CRCIN lsb: 0  msb: 31 INPUT
			this->CRCIN_A30_B = CRCIN_A30_B; // net ID: CRCIN lsb: 0  msb: 31 INPUT
			this->CRCIN_A29_B = CRCIN_A29_B; // net ID: CRCIN lsb: 0  msb: 31 INPUT
			this->CRCIN_A28_B = CRCIN_A28_B; // net ID: CRCIN lsb: 0  msb: 31 INPUT
			this->CRCIN_A27_B = CRCIN_A27_B; // net ID: CRCIN lsb: 0  msb: 31 INPUT
			this->CRCIN_A26_B = CRCIN_A26_B; // net ID: CRCIN lsb: 0  msb: 31 INPUT
			this->CRCIN_A25_B = CRCIN_A25_B; // net ID: CRCIN lsb: 0  msb: 31 INPUT
			this->CRCIN_A24_B = CRCIN_A24_B; // net ID: CRCIN lsb: 0  msb: 31 INPUT
			this->CRCIN_A23_B = CRCIN_A23_B; // net ID: CRCIN lsb: 0  msb: 31 INPUT
			this->CRCIN_A22_B = CRCIN_A22_B; // net ID: CRCIN lsb: 0  msb: 31 INPUT
			this->CRCIN_A21_B = CRCIN_A21_B; // net ID: CRCIN lsb: 0  msb: 31 INPUT
			this->CRCIN_A20_B = CRCIN_A20_B; // net ID: CRCIN lsb: 0  msb: 31 INPUT
			this->CRCIN_A19_B = CRCIN_A19_B; // net ID: CRCIN lsb: 0  msb: 31 INPUT
			this->CRCIN_A18_B = CRCIN_A18_B; // net ID: CRCIN lsb: 0  msb: 31 INPUT
			this->CRCIN_A17_B = CRCIN_A17_B; // net ID: CRCIN lsb: 0  msb: 31 INPUT
			this->CRCIN_A16_B = CRCIN_A16_B; // net ID: CRCIN lsb: 0  msb: 31 INPUT
			this->CRCIN_A15_B = CRCIN_A15_B; // net ID: CRCIN lsb: 0  msb: 31 INPUT
			this->CRCIN_A14_B = CRCIN_A14_B; // net ID: CRCIN lsb: 0  msb: 31 INPUT
			this->CRCIN_A13_B = CRCIN_A13_B; // net ID: CRCIN lsb: 0  msb: 31 INPUT
			this->CRCIN_A12_B = CRCIN_A12_B; // net ID: CRCIN lsb: 0  msb: 31 INPUT
			this->CRCIN_A11_B = CRCIN_A11_B; // net ID: CRCIN lsb: 0  msb: 31 INPUT
			this->CRCIN_A10_B = CRCIN_A10_B; // net ID: CRCIN lsb: 0  msb: 31 INPUT
			this->CRCIN_A9_B = CRCIN_A9_B; // net ID: CRCIN lsb: 0  msb: 31 INPUT
			this->CRCIN_A8_B = CRCIN_A8_B; // net ID: CRCIN lsb: 0  msb: 31 INPUT
			this->CRCIN_A7_B = CRCIN_A7_B; // net ID: CRCIN lsb: 0  msb: 31 INPUT
			this->CRCIN_A6_B = CRCIN_A6_B; // net ID: CRCIN lsb: 0  msb: 31 INPUT
			this->CRCIN_A5_B = CRCIN_A5_B; // net ID: CRCIN lsb: 0  msb: 31 INPUT
			this->CRCIN_A4_B = CRCIN_A4_B; // net ID: CRCIN lsb: 0  msb: 31 INPUT
			this->CRCIN_A3_B = CRCIN_A3_B; // net ID: CRCIN lsb: 0  msb: 31 INPUT
			this->CRCIN_A2_B = CRCIN_A2_B; // net ID: CRCIN lsb: 0  msb: 31 INPUT
			this->CRCIN_A1_B = CRCIN_A1_B; // net ID: CRCIN lsb: 0  msb: 31 INPUT
			this->CRCIN_A0_B = CRCIN_A0_B; // net ID: CRCIN lsb: 0  msb: 31 INPUT
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
#endif // X_CRC32_H
