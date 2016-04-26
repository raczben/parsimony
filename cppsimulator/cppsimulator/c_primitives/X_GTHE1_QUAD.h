/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_GTHE1_QUAD_H
#define X_GTHE1_QUAD_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_GTHE1_QUAD: public Primitive{

		//Verilog Parameters:
		parameter_string_t LOC;
		parameter_int_t BER_CONST_PTRN0;
		parameter_int_t BER_CONST_PTRN1;
		parameter_int_t BUFFER_CONFIG_LANE0;
		parameter_int_t BUFFER_CONFIG_LANE1;
		parameter_int_t BUFFER_CONFIG_LANE2;
		parameter_int_t BUFFER_CONFIG_LANE3;
		parameter_int_t DFE_TRAIN_CTRL_LANE0;
		parameter_int_t DFE_TRAIN_CTRL_LANE1;
		parameter_int_t DFE_TRAIN_CTRL_LANE2;
		parameter_int_t DFE_TRAIN_CTRL_LANE3;
		parameter_int_t DLL_CFG0;
		parameter_int_t DLL_CFG1;
		parameter_int_t E10GBASEKR_LD_COEFF_UPD_LANE0;
		parameter_int_t E10GBASEKR_LD_COEFF_UPD_LANE1;
		parameter_int_t E10GBASEKR_LD_COEFF_UPD_LANE2;
		parameter_int_t E10GBASEKR_LD_COEFF_UPD_LANE3;
		parameter_int_t E10GBASEKR_LP_COEFF_UPD_LANE0;
		parameter_int_t E10GBASEKR_LP_COEFF_UPD_LANE1;
		parameter_int_t E10GBASEKR_LP_COEFF_UPD_LANE2;
		parameter_int_t E10GBASEKR_LP_COEFF_UPD_LANE3;
		parameter_int_t E10GBASEKR_PMA_CTRL_LANE0;
		parameter_int_t E10GBASEKR_PMA_CTRL_LANE1;
		parameter_int_t E10GBASEKR_PMA_CTRL_LANE2;
		parameter_int_t E10GBASEKR_PMA_CTRL_LANE3;
		parameter_int_t E10GBASEKX_CTRL_LANE0;
		parameter_int_t E10GBASEKX_CTRL_LANE1;
		parameter_int_t E10GBASEKX_CTRL_LANE2;
		parameter_int_t E10GBASEKX_CTRL_LANE3;
		parameter_int_t E10GBASER_PCS_CFG_LANE0;
		parameter_int_t E10GBASER_PCS_CFG_LANE1;
		parameter_int_t E10GBASER_PCS_CFG_LANE2;
		parameter_int_t E10GBASER_PCS_CFG_LANE3;
		parameter_int_t E10GBASER_PCS_SEEDA0_LANE0;
		parameter_int_t E10GBASER_PCS_SEEDA0_LANE1;
		parameter_int_t E10GBASER_PCS_SEEDA0_LANE2;
		parameter_int_t E10GBASER_PCS_SEEDA0_LANE3;
		parameter_int_t E10GBASER_PCS_SEEDA1_LANE0;
		parameter_int_t E10GBASER_PCS_SEEDA1_LANE1;
		parameter_int_t E10GBASER_PCS_SEEDA1_LANE2;
		parameter_int_t E10GBASER_PCS_SEEDA1_LANE3;
		parameter_int_t E10GBASER_PCS_SEEDA2_LANE0;
		parameter_int_t E10GBASER_PCS_SEEDA2_LANE1;
		parameter_int_t E10GBASER_PCS_SEEDA2_LANE2;
		parameter_int_t E10GBASER_PCS_SEEDA2_LANE3;
		parameter_int_t E10GBASER_PCS_SEEDA3_LANE0;
		parameter_int_t E10GBASER_PCS_SEEDA3_LANE1;
		parameter_int_t E10GBASER_PCS_SEEDA3_LANE2;
		parameter_int_t E10GBASER_PCS_SEEDA3_LANE3;
		parameter_int_t E10GBASER_PCS_SEEDB0_LANE0;
		parameter_int_t E10GBASER_PCS_SEEDB0_LANE1;
		parameter_int_t E10GBASER_PCS_SEEDB0_LANE2;
		parameter_int_t E10GBASER_PCS_SEEDB0_LANE3;
		parameter_int_t E10GBASER_PCS_SEEDB1_LANE0;
		parameter_int_t E10GBASER_PCS_SEEDB1_LANE1;
		parameter_int_t E10GBASER_PCS_SEEDB1_LANE2;
		parameter_int_t E10GBASER_PCS_SEEDB1_LANE3;
		parameter_int_t E10GBASER_PCS_SEEDB2_LANE0;
		parameter_int_t E10GBASER_PCS_SEEDB2_LANE1;
		parameter_int_t E10GBASER_PCS_SEEDB2_LANE2;
		parameter_int_t E10GBASER_PCS_SEEDB2_LANE3;
		parameter_int_t E10GBASER_PCS_SEEDB3_LANE0;
		parameter_int_t E10GBASER_PCS_SEEDB3_LANE1;
		parameter_int_t E10GBASER_PCS_SEEDB3_LANE2;
		parameter_int_t E10GBASER_PCS_SEEDB3_LANE3;
		parameter_int_t E10GBASER_PCS_TEST_CTRL_LANE0;
		parameter_int_t E10GBASER_PCS_TEST_CTRL_LANE1;
		parameter_int_t E10GBASER_PCS_TEST_CTRL_LANE2;
		parameter_int_t E10GBASER_PCS_TEST_CTRL_LANE3;
		parameter_int_t E10GBASEX_PCS_TSTCTRL_LANE0;
		parameter_int_t E10GBASEX_PCS_TSTCTRL_LANE1;
		parameter_int_t E10GBASEX_PCS_TSTCTRL_LANE2;
		parameter_int_t E10GBASEX_PCS_TSTCTRL_LANE3;
		parameter_int_t GLBL0_NOISE_CTRL;
		parameter_int_t GLBL_AMON_SEL;
		parameter_int_t GLBL_DMON_SEL;
		parameter_int_t GLBL_PWR_CTRL;
		parameter_int_t GTH_CFG_PWRUP_LANE0;
		parameter_int_t GTH_CFG_PWRUP_LANE1;
		parameter_int_t GTH_CFG_PWRUP_LANE2;
		parameter_int_t GTH_CFG_PWRUP_LANE3;
		parameter_int_t LANE_AMON_SEL;
		parameter_int_t LANE_DMON_SEL;
		parameter_int_t LANE_LNK_CFGOVRD;
		parameter_int_t LANE_PWR_CTRL_LANE0;
		parameter_int_t LANE_PWR_CTRL_LANE1;
		parameter_int_t LANE_PWR_CTRL_LANE2;
		parameter_int_t LANE_PWR_CTRL_LANE3;
		parameter_int_t LNK_TRN_CFG_LANE0;
		parameter_int_t LNK_TRN_CFG_LANE1;
		parameter_int_t LNK_TRN_CFG_LANE2;
		parameter_int_t LNK_TRN_CFG_LANE3;
		parameter_int_t LNK_TRN_COEFF_REQ_LANE0;
		parameter_int_t LNK_TRN_COEFF_REQ_LANE1;
		parameter_int_t LNK_TRN_COEFF_REQ_LANE2;
		parameter_int_t LNK_TRN_COEFF_REQ_LANE3;
		parameter_int_t MISC_CFG;
		parameter_int_t MODE_CFG1;
		parameter_int_t MODE_CFG2;
		parameter_int_t MODE_CFG3;
		parameter_int_t MODE_CFG4;
		parameter_int_t MODE_CFG5;
		parameter_int_t MODE_CFG6;
		parameter_int_t MODE_CFG7;
		parameter_int_t PCS_ABILITY_LANE0;
		parameter_int_t PCS_ABILITY_LANE1;
		parameter_int_t PCS_ABILITY_LANE2;
		parameter_int_t PCS_ABILITY_LANE3;
		parameter_int_t PCS_CTRL1_LANE0;
		parameter_int_t PCS_CTRL1_LANE1;
		parameter_int_t PCS_CTRL1_LANE2;
		parameter_int_t PCS_CTRL1_LANE3;
		parameter_int_t PCS_CTRL2_LANE0;
		parameter_int_t PCS_CTRL2_LANE1;
		parameter_int_t PCS_CTRL2_LANE2;
		parameter_int_t PCS_CTRL2_LANE3;
		parameter_int_t PCS_MISC_CFG_0_LANE0;
		parameter_int_t PCS_MISC_CFG_0_LANE1;
		parameter_int_t PCS_MISC_CFG_0_LANE2;
		parameter_int_t PCS_MISC_CFG_0_LANE3;
		parameter_int_t PCS_MISC_CFG_1_LANE0;
		parameter_int_t PCS_MISC_CFG_1_LANE1;
		parameter_int_t PCS_MISC_CFG_1_LANE2;
		parameter_int_t PCS_MISC_CFG_1_LANE3;
		parameter_int_t PCS_MODE_LANE0;
		parameter_int_t PCS_MODE_LANE1;
		parameter_int_t PCS_MODE_LANE2;
		parameter_int_t PCS_MODE_LANE3;
		parameter_int_t PCS_RESET_1_LANE0;
		parameter_int_t PCS_RESET_1_LANE1;
		parameter_int_t PCS_RESET_1_LANE2;
		parameter_int_t PCS_RESET_1_LANE3;
		parameter_int_t PCS_RESET_LANE0;
		parameter_int_t PCS_RESET_LANE1;
		parameter_int_t PCS_RESET_LANE2;
		parameter_int_t PCS_RESET_LANE3;
		parameter_int_t PCS_TYPE_LANE0;
		parameter_int_t PCS_TYPE_LANE1;
		parameter_int_t PCS_TYPE_LANE2;
		parameter_int_t PCS_TYPE_LANE3;
		parameter_int_t PLL_CFG0;
		parameter_int_t PLL_CFG1;
		parameter_int_t PLL_CFG2;
		parameter_int_t PMA_CTRL1_LANE0;
		parameter_int_t PMA_CTRL1_LANE1;
		parameter_int_t PMA_CTRL1_LANE2;
		parameter_int_t PMA_CTRL1_LANE3;
		parameter_int_t PMA_CTRL2_LANE0;
		parameter_int_t PMA_CTRL2_LANE1;
		parameter_int_t PMA_CTRL2_LANE2;
		parameter_int_t PMA_CTRL2_LANE3;
		parameter_int_t PMA_LPBK_CTRL_LANE0;
		parameter_int_t PMA_LPBK_CTRL_LANE1;
		parameter_int_t PMA_LPBK_CTRL_LANE2;
		parameter_int_t PMA_LPBK_CTRL_LANE3;
		parameter_int_t PRBS_BER_CFG0_LANE0;
		parameter_int_t PRBS_BER_CFG0_LANE1;
		parameter_int_t PRBS_BER_CFG0_LANE2;
		parameter_int_t PRBS_BER_CFG0_LANE3;
		parameter_int_t PRBS_BER_CFG1_LANE0;
		parameter_int_t PRBS_BER_CFG1_LANE1;
		parameter_int_t PRBS_BER_CFG1_LANE2;
		parameter_int_t PRBS_BER_CFG1_LANE3;
		parameter_int_t PRBS_CFG_LANE0;
		parameter_int_t PRBS_CFG_LANE1;
		parameter_int_t PRBS_CFG_LANE2;
		parameter_int_t PRBS_CFG_LANE3;
		parameter_int_t PTRN_CFG0_LSB;
		parameter_int_t PTRN_CFG0_MSB;
		parameter_int_t PTRN_LEN_CFG;
		parameter_int_t PWRUP_DLY;
		parameter_int_t RX_AEQ_VAL0_LANE0;
		parameter_int_t RX_AEQ_VAL0_LANE1;
		parameter_int_t RX_AEQ_VAL0_LANE2;
		parameter_int_t RX_AEQ_VAL0_LANE3;
		parameter_int_t RX_AEQ_VAL1_LANE0;
		parameter_int_t RX_AEQ_VAL1_LANE1;
		parameter_int_t RX_AEQ_VAL1_LANE2;
		parameter_int_t RX_AEQ_VAL1_LANE3;
		parameter_int_t RX_AGC_CTRL_LANE0;
		parameter_int_t RX_AGC_CTRL_LANE1;
		parameter_int_t RX_AGC_CTRL_LANE2;
		parameter_int_t RX_AGC_CTRL_LANE3;
		parameter_int_t RX_CDR_CTRL0_LANE0;
		parameter_int_t RX_CDR_CTRL0_LANE1;
		parameter_int_t RX_CDR_CTRL0_LANE2;
		parameter_int_t RX_CDR_CTRL0_LANE3;
		parameter_int_t RX_CDR_CTRL1_LANE0;
		parameter_int_t RX_CDR_CTRL1_LANE1;
		parameter_int_t RX_CDR_CTRL1_LANE2;
		parameter_int_t RX_CDR_CTRL1_LANE3;
		parameter_int_t RX_CDR_CTRL2_LANE0;
		parameter_int_t RX_CDR_CTRL2_LANE1;
		parameter_int_t RX_CDR_CTRL2_LANE2;
		parameter_int_t RX_CDR_CTRL2_LANE3;
		parameter_int_t RX_CFG0_LANE0;
		parameter_int_t RX_CFG0_LANE1;
		parameter_int_t RX_CFG0_LANE2;
		parameter_int_t RX_CFG0_LANE3;
		parameter_int_t RX_CFG1_LANE0;
		parameter_int_t RX_CFG1_LANE1;
		parameter_int_t RX_CFG1_LANE2;
		parameter_int_t RX_CFG1_LANE3;
		parameter_int_t RX_CFG2_LANE0;
		parameter_int_t RX_CFG2_LANE1;
		parameter_int_t RX_CFG2_LANE2;
		parameter_int_t RX_CFG2_LANE3;
		parameter_int_t RX_CTLE_CTRL_LANE0;
		parameter_int_t RX_CTLE_CTRL_LANE1;
		parameter_int_t RX_CTLE_CTRL_LANE2;
		parameter_int_t RX_CTLE_CTRL_LANE3;
		parameter_int_t RX_CTRL_OVRD_LANE0;
		parameter_int_t RX_CTRL_OVRD_LANE1;
		parameter_int_t RX_CTRL_OVRD_LANE2;
		parameter_int_t RX_CTRL_OVRD_LANE3;
		parameter_int_t RX_FABRIC_WIDTH0;
		parameter_int_t RX_FABRIC_WIDTH1;
		parameter_int_t RX_FABRIC_WIDTH2;
		parameter_int_t RX_FABRIC_WIDTH3;
		parameter_int_t RX_LOOP_CTRL_LANE0;
		parameter_int_t RX_LOOP_CTRL_LANE1;
		parameter_int_t RX_LOOP_CTRL_LANE2;
		parameter_int_t RX_LOOP_CTRL_LANE3;
		parameter_int_t RX_MVAL0_LANE0;
		parameter_int_t RX_MVAL0_LANE1;
		parameter_int_t RX_MVAL0_LANE2;
		parameter_int_t RX_MVAL0_LANE3;
		parameter_int_t RX_MVAL1_LANE0;
		parameter_int_t RX_MVAL1_LANE1;
		parameter_int_t RX_MVAL1_LANE2;
		parameter_int_t RX_MVAL1_LANE3;
		parameter_int_t RX_P0S_CTRL;
		parameter_int_t RX_P0_CTRL;
		parameter_int_t RX_P1_CTRL;
		parameter_int_t RX_P2_CTRL;
		parameter_int_t RX_PI_CTRL0;
		parameter_int_t RX_PI_CTRL1;
		parameter_int_t SIM_GTHRESET_SPEEDUP;
		parameter_string_t SIM_VERSION;
		parameter_int_t SLICE_CFG;
		parameter_int_t SLICE_NOISE_CTRL_0_LANE01;
		parameter_int_t SLICE_NOISE_CTRL_0_LANE23;
		parameter_int_t SLICE_NOISE_CTRL_1_LANE01;
		parameter_int_t SLICE_NOISE_CTRL_1_LANE23;
		parameter_int_t SLICE_NOISE_CTRL_2_LANE01;
		parameter_int_t SLICE_NOISE_CTRL_2_LANE23;
		parameter_int_t SLICE_TX_RESET_LANE01;
		parameter_int_t SLICE_TX_RESET_LANE23;
		parameter_int_t TERM_CTRL_LANE0;
		parameter_int_t TERM_CTRL_LANE1;
		parameter_int_t TERM_CTRL_LANE2;
		parameter_int_t TERM_CTRL_LANE3;
		parameter_int_t TX_CFG0_LANE0;
		parameter_int_t TX_CFG0_LANE1;
		parameter_int_t TX_CFG0_LANE2;
		parameter_int_t TX_CFG0_LANE3;
		parameter_int_t TX_CFG1_LANE0;
		parameter_int_t TX_CFG1_LANE1;
		parameter_int_t TX_CFG1_LANE2;
		parameter_int_t TX_CFG1_LANE3;
		parameter_int_t TX_CFG2_LANE0;
		parameter_int_t TX_CFG2_LANE1;
		parameter_int_t TX_CFG2_LANE2;
		parameter_int_t TX_CFG2_LANE3;
		parameter_int_t TX_CLK_SEL0_LANE0;
		parameter_int_t TX_CLK_SEL0_LANE1;
		parameter_int_t TX_CLK_SEL0_LANE2;
		parameter_int_t TX_CLK_SEL0_LANE3;
		parameter_int_t TX_CLK_SEL1_LANE0;
		parameter_int_t TX_CLK_SEL1_LANE1;
		parameter_int_t TX_CLK_SEL1_LANE2;
		parameter_int_t TX_CLK_SEL1_LANE3;
		parameter_int_t TX_DISABLE_LANE0;
		parameter_int_t TX_DISABLE_LANE1;
		parameter_int_t TX_DISABLE_LANE2;
		parameter_int_t TX_DISABLE_LANE3;
		parameter_int_t TX_FABRIC_WIDTH0;
		parameter_int_t TX_FABRIC_WIDTH1;
		parameter_int_t TX_FABRIC_WIDTH2;
		parameter_int_t TX_FABRIC_WIDTH3;
		parameter_int_t TX_P0P0S_CTRL;
		parameter_int_t TX_P1P2_CTRL;
		parameter_int_t TX_PREEMPH_LANE0;
		parameter_int_t TX_PREEMPH_LANE1;
		parameter_int_t TX_PREEMPH_LANE2;
		parameter_int_t TX_PREEMPH_LANE3;
		parameter_int_t TX_PWR_RATE_OVRD_LANE0;
		parameter_int_t TX_PWR_RATE_OVRD_LANE1;
		parameter_int_t TX_PWR_RATE_OVRD_LANE2;
		parameter_int_t TX_PWR_RATE_OVRD_LANE3;
		//Verilog Ports in definition order:
		NetFlow* DRDY_A0_B; // net ID: DRDY lsb: 0  msb: 0 OUTPUT
		NetFlow* DRPDO_A0_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
		NetFlow* DRPDO_A1_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
		NetFlow* DRPDO_A2_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
		NetFlow* DRPDO_A3_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
		NetFlow* DRPDO_A4_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
		NetFlow* DRPDO_A5_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
		NetFlow* DRPDO_A6_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
		NetFlow* DRPDO_A7_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
		NetFlow* DRPDO_A8_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
		NetFlow* DRPDO_A9_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
		NetFlow* DRPDO_A10_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
		NetFlow* DRPDO_A11_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
		NetFlow* DRPDO_A12_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
		NetFlow* DRPDO_A13_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
		NetFlow* DRPDO_A14_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
		NetFlow* DRPDO_A15_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
		NetFlow* GTHINITDONE_A0_B; // net ID: GTHINITDONE lsb: 0  msb: 0 OUTPUT
		NetFlow* MGMTPCSRDACK_A0_B; // net ID: MGMTPCSRDACK lsb: 0  msb: 0 OUTPUT
		NetFlow* MGMTPCSRDDATA_A0_B; // net ID: MGMTPCSRDDATA lsb: 0  msb: 15 OUTPUT
		NetFlow* MGMTPCSRDDATA_A1_B; // net ID: MGMTPCSRDDATA lsb: 0  msb: 15 OUTPUT
		NetFlow* MGMTPCSRDDATA_A2_B; // net ID: MGMTPCSRDDATA lsb: 0  msb: 15 OUTPUT
		NetFlow* MGMTPCSRDDATA_A3_B; // net ID: MGMTPCSRDDATA lsb: 0  msb: 15 OUTPUT
		NetFlow* MGMTPCSRDDATA_A4_B; // net ID: MGMTPCSRDDATA lsb: 0  msb: 15 OUTPUT
		NetFlow* MGMTPCSRDDATA_A5_B; // net ID: MGMTPCSRDDATA lsb: 0  msb: 15 OUTPUT
		NetFlow* MGMTPCSRDDATA_A6_B; // net ID: MGMTPCSRDDATA lsb: 0  msb: 15 OUTPUT
		NetFlow* MGMTPCSRDDATA_A7_B; // net ID: MGMTPCSRDDATA lsb: 0  msb: 15 OUTPUT
		NetFlow* MGMTPCSRDDATA_A8_B; // net ID: MGMTPCSRDDATA lsb: 0  msb: 15 OUTPUT
		NetFlow* MGMTPCSRDDATA_A9_B; // net ID: MGMTPCSRDDATA lsb: 0  msb: 15 OUTPUT
		NetFlow* MGMTPCSRDDATA_A10_B; // net ID: MGMTPCSRDDATA lsb: 0  msb: 15 OUTPUT
		NetFlow* MGMTPCSRDDATA_A11_B; // net ID: MGMTPCSRDDATA lsb: 0  msb: 15 OUTPUT
		NetFlow* MGMTPCSRDDATA_A12_B; // net ID: MGMTPCSRDDATA lsb: 0  msb: 15 OUTPUT
		NetFlow* MGMTPCSRDDATA_A13_B; // net ID: MGMTPCSRDDATA lsb: 0  msb: 15 OUTPUT
		NetFlow* MGMTPCSRDDATA_A14_B; // net ID: MGMTPCSRDDATA lsb: 0  msb: 15 OUTPUT
		NetFlow* MGMTPCSRDDATA_A15_B; // net ID: MGMTPCSRDDATA lsb: 0  msb: 15 OUTPUT
		NetFlow* RXCODEERR0_A0_B; // net ID: RXCODEERR0 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXCODEERR0_A1_B; // net ID: RXCODEERR0 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXCODEERR0_A2_B; // net ID: RXCODEERR0 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXCODEERR0_A3_B; // net ID: RXCODEERR0 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXCODEERR0_A4_B; // net ID: RXCODEERR0 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXCODEERR0_A5_B; // net ID: RXCODEERR0 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXCODEERR0_A6_B; // net ID: RXCODEERR0 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXCODEERR0_A7_B; // net ID: RXCODEERR0 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXCODEERR1_A0_B; // net ID: RXCODEERR1 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXCODEERR1_A1_B; // net ID: RXCODEERR1 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXCODEERR1_A2_B; // net ID: RXCODEERR1 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXCODEERR1_A3_B; // net ID: RXCODEERR1 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXCODEERR1_A4_B; // net ID: RXCODEERR1 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXCODEERR1_A5_B; // net ID: RXCODEERR1 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXCODEERR1_A6_B; // net ID: RXCODEERR1 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXCODEERR1_A7_B; // net ID: RXCODEERR1 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXCODEERR2_A0_B; // net ID: RXCODEERR2 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXCODEERR2_A1_B; // net ID: RXCODEERR2 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXCODEERR2_A2_B; // net ID: RXCODEERR2 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXCODEERR2_A3_B; // net ID: RXCODEERR2 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXCODEERR2_A4_B; // net ID: RXCODEERR2 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXCODEERR2_A5_B; // net ID: RXCODEERR2 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXCODEERR2_A6_B; // net ID: RXCODEERR2 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXCODEERR2_A7_B; // net ID: RXCODEERR2 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXCODEERR3_A0_B; // net ID: RXCODEERR3 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXCODEERR3_A1_B; // net ID: RXCODEERR3 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXCODEERR3_A2_B; // net ID: RXCODEERR3 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXCODEERR3_A3_B; // net ID: RXCODEERR3 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXCODEERR3_A4_B; // net ID: RXCODEERR3 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXCODEERR3_A5_B; // net ID: RXCODEERR3 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXCODEERR3_A6_B; // net ID: RXCODEERR3 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXCODEERR3_A7_B; // net ID: RXCODEERR3 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXCTRL0_A0_B; // net ID: RXCTRL0 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXCTRL0_A1_B; // net ID: RXCTRL0 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXCTRL0_A2_B; // net ID: RXCTRL0 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXCTRL0_A3_B; // net ID: RXCTRL0 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXCTRL0_A4_B; // net ID: RXCTRL0 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXCTRL0_A5_B; // net ID: RXCTRL0 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXCTRL0_A6_B; // net ID: RXCTRL0 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXCTRL0_A7_B; // net ID: RXCTRL0 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXCTRL1_A0_B; // net ID: RXCTRL1 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXCTRL1_A1_B; // net ID: RXCTRL1 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXCTRL1_A2_B; // net ID: RXCTRL1 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXCTRL1_A3_B; // net ID: RXCTRL1 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXCTRL1_A4_B; // net ID: RXCTRL1 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXCTRL1_A5_B; // net ID: RXCTRL1 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXCTRL1_A6_B; // net ID: RXCTRL1 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXCTRL1_A7_B; // net ID: RXCTRL1 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXCTRL2_A0_B; // net ID: RXCTRL2 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXCTRL2_A1_B; // net ID: RXCTRL2 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXCTRL2_A2_B; // net ID: RXCTRL2 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXCTRL2_A3_B; // net ID: RXCTRL2 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXCTRL2_A4_B; // net ID: RXCTRL2 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXCTRL2_A5_B; // net ID: RXCTRL2 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXCTRL2_A6_B; // net ID: RXCTRL2 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXCTRL2_A7_B; // net ID: RXCTRL2 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXCTRL3_A0_B; // net ID: RXCTRL3 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXCTRL3_A1_B; // net ID: RXCTRL3 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXCTRL3_A2_B; // net ID: RXCTRL3 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXCTRL3_A3_B; // net ID: RXCTRL3 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXCTRL3_A4_B; // net ID: RXCTRL3 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXCTRL3_A5_B; // net ID: RXCTRL3 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXCTRL3_A6_B; // net ID: RXCTRL3 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXCTRL3_A7_B; // net ID: RXCTRL3 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXCTRLACK0_A0_B; // net ID: RXCTRLACK0 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXCTRLACK1_A0_B; // net ID: RXCTRLACK1 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXCTRLACK2_A0_B; // net ID: RXCTRLACK2 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXCTRLACK3_A0_B; // net ID: RXCTRLACK3 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXDATA0_A0_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA0_A1_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA0_A2_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA0_A3_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA0_A4_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA0_A5_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA0_A6_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA0_A7_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA0_A8_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA0_A9_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA0_A10_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA0_A11_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA0_A12_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA0_A13_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA0_A14_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA0_A15_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA0_A16_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA0_A17_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA0_A18_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA0_A19_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA0_A20_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA0_A21_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA0_A22_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA0_A23_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA0_A24_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA0_A25_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA0_A26_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA0_A27_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA0_A28_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA0_A29_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA0_A30_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA0_A31_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA0_A32_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA0_A33_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA0_A34_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA0_A35_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA0_A36_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA0_A37_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA0_A38_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA0_A39_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA0_A40_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA0_A41_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA0_A42_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA0_A43_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA0_A44_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA0_A45_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA0_A46_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA0_A47_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA0_A48_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA0_A49_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA0_A50_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA0_A51_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA0_A52_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA0_A53_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA0_A54_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA0_A55_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA0_A56_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA0_A57_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA0_A58_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA0_A59_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA0_A60_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA0_A61_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA0_A62_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA0_A63_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA1_A0_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA1_A1_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA1_A2_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA1_A3_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA1_A4_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA1_A5_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA1_A6_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA1_A7_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA1_A8_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA1_A9_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA1_A10_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA1_A11_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA1_A12_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA1_A13_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA1_A14_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA1_A15_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA1_A16_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA1_A17_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA1_A18_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA1_A19_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA1_A20_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA1_A21_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA1_A22_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA1_A23_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA1_A24_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA1_A25_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA1_A26_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA1_A27_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA1_A28_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA1_A29_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA1_A30_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA1_A31_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA1_A32_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA1_A33_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA1_A34_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA1_A35_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA1_A36_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA1_A37_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA1_A38_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA1_A39_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA1_A40_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA1_A41_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA1_A42_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA1_A43_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA1_A44_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA1_A45_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA1_A46_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA1_A47_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA1_A48_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA1_A49_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA1_A50_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA1_A51_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA1_A52_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA1_A53_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA1_A54_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA1_A55_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA1_A56_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA1_A57_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA1_A58_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA1_A59_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA1_A60_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA1_A61_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA1_A62_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA1_A63_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA2_A0_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA2_A1_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA2_A2_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA2_A3_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA2_A4_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA2_A5_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA2_A6_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA2_A7_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA2_A8_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA2_A9_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA2_A10_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA2_A11_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA2_A12_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA2_A13_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA2_A14_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA2_A15_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA2_A16_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA2_A17_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA2_A18_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA2_A19_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA2_A20_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA2_A21_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA2_A22_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA2_A23_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA2_A24_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA2_A25_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA2_A26_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA2_A27_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA2_A28_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA2_A29_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA2_A30_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA2_A31_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA2_A32_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA2_A33_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA2_A34_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA2_A35_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA2_A36_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA2_A37_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA2_A38_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA2_A39_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA2_A40_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA2_A41_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA2_A42_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA2_A43_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA2_A44_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA2_A45_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA2_A46_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA2_A47_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA2_A48_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA2_A49_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA2_A50_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA2_A51_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA2_A52_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA2_A53_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA2_A54_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA2_A55_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA2_A56_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA2_A57_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA2_A58_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA2_A59_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA2_A60_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA2_A61_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA2_A62_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA2_A63_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA3_A0_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA3_A1_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA3_A2_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA3_A3_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA3_A4_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA3_A5_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA3_A6_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA3_A7_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA3_A8_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA3_A9_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA3_A10_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA3_A11_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA3_A12_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA3_A13_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA3_A14_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA3_A15_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA3_A16_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA3_A17_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA3_A18_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA3_A19_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA3_A20_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA3_A21_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA3_A22_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA3_A23_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA3_A24_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA3_A25_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA3_A26_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA3_A27_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA3_A28_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA3_A29_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA3_A30_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA3_A31_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA3_A32_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA3_A33_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA3_A34_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA3_A35_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA3_A36_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA3_A37_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA3_A38_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA3_A39_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA3_A40_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA3_A41_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA3_A42_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA3_A43_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA3_A44_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA3_A45_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA3_A46_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA3_A47_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA3_A48_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA3_A49_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA3_A50_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA3_A51_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA3_A52_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA3_A53_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA3_A54_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA3_A55_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA3_A56_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA3_A57_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA3_A58_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA3_A59_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA3_A60_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA3_A61_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA3_A62_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA3_A63_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATATAP0_A0_B; // net ID: RXDATATAP0 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXDATATAP1_A0_B; // net ID: RXDATATAP1 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXDATATAP2_A0_B; // net ID: RXDATATAP2 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXDATATAP3_A0_B; // net ID: RXDATATAP3 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXDISPERR0_A0_B; // net ID: RXDISPERR0 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXDISPERR0_A1_B; // net ID: RXDISPERR0 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXDISPERR0_A2_B; // net ID: RXDISPERR0 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXDISPERR0_A3_B; // net ID: RXDISPERR0 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXDISPERR0_A4_B; // net ID: RXDISPERR0 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXDISPERR0_A5_B; // net ID: RXDISPERR0 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXDISPERR0_A6_B; // net ID: RXDISPERR0 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXDISPERR0_A7_B; // net ID: RXDISPERR0 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXDISPERR1_A0_B; // net ID: RXDISPERR1 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXDISPERR1_A1_B; // net ID: RXDISPERR1 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXDISPERR1_A2_B; // net ID: RXDISPERR1 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXDISPERR1_A3_B; // net ID: RXDISPERR1 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXDISPERR1_A4_B; // net ID: RXDISPERR1 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXDISPERR1_A5_B; // net ID: RXDISPERR1 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXDISPERR1_A6_B; // net ID: RXDISPERR1 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXDISPERR1_A7_B; // net ID: RXDISPERR1 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXDISPERR2_A0_B; // net ID: RXDISPERR2 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXDISPERR2_A1_B; // net ID: RXDISPERR2 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXDISPERR2_A2_B; // net ID: RXDISPERR2 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXDISPERR2_A3_B; // net ID: RXDISPERR2 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXDISPERR2_A4_B; // net ID: RXDISPERR2 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXDISPERR2_A5_B; // net ID: RXDISPERR2 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXDISPERR2_A6_B; // net ID: RXDISPERR2 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXDISPERR2_A7_B; // net ID: RXDISPERR2 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXDISPERR3_A0_B; // net ID: RXDISPERR3 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXDISPERR3_A1_B; // net ID: RXDISPERR3 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXDISPERR3_A2_B; // net ID: RXDISPERR3 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXDISPERR3_A3_B; // net ID: RXDISPERR3 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXDISPERR3_A4_B; // net ID: RXDISPERR3 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXDISPERR3_A5_B; // net ID: RXDISPERR3 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXDISPERR3_A6_B; // net ID: RXDISPERR3 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXDISPERR3_A7_B; // net ID: RXDISPERR3 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXPCSCLKSMPL0_A0_B; // net ID: RXPCSCLKSMPL0 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXPCSCLKSMPL1_A0_B; // net ID: RXPCSCLKSMPL1 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXPCSCLKSMPL2_A0_B; // net ID: RXPCSCLKSMPL2 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXPCSCLKSMPL3_A0_B; // net ID: RXPCSCLKSMPL3 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXUSERCLKOUT0_A0_B; // net ID: RXUSERCLKOUT0 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXUSERCLKOUT1_A0_B; // net ID: RXUSERCLKOUT1 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXUSERCLKOUT2_A0_B; // net ID: RXUSERCLKOUT2 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXUSERCLKOUT3_A0_B; // net ID: RXUSERCLKOUT3 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXVALID0_A0_B; // net ID: RXVALID0 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXVALID0_A1_B; // net ID: RXVALID0 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXVALID0_A2_B; // net ID: RXVALID0 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXVALID0_A3_B; // net ID: RXVALID0 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXVALID0_A4_B; // net ID: RXVALID0 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXVALID0_A5_B; // net ID: RXVALID0 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXVALID0_A6_B; // net ID: RXVALID0 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXVALID0_A7_B; // net ID: RXVALID0 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXVALID1_A0_B; // net ID: RXVALID1 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXVALID1_A1_B; // net ID: RXVALID1 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXVALID1_A2_B; // net ID: RXVALID1 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXVALID1_A3_B; // net ID: RXVALID1 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXVALID1_A4_B; // net ID: RXVALID1 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXVALID1_A5_B; // net ID: RXVALID1 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXVALID1_A6_B; // net ID: RXVALID1 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXVALID1_A7_B; // net ID: RXVALID1 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXVALID2_A0_B; // net ID: RXVALID2 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXVALID2_A1_B; // net ID: RXVALID2 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXVALID2_A2_B; // net ID: RXVALID2 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXVALID2_A3_B; // net ID: RXVALID2 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXVALID2_A4_B; // net ID: RXVALID2 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXVALID2_A5_B; // net ID: RXVALID2 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXVALID2_A6_B; // net ID: RXVALID2 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXVALID2_A7_B; // net ID: RXVALID2 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXVALID3_A0_B; // net ID: RXVALID3 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXVALID3_A1_B; // net ID: RXVALID3 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXVALID3_A2_B; // net ID: RXVALID3 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXVALID3_A3_B; // net ID: RXVALID3 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXVALID3_A4_B; // net ID: RXVALID3 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXVALID3_A5_B; // net ID: RXVALID3 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXVALID3_A6_B; // net ID: RXVALID3 lsb: 0  msb: 7 OUTPUT
		NetFlow* RXVALID3_A7_B; // net ID: RXVALID3 lsb: 0  msb: 7 OUTPUT
		NetFlow* TSTPATH_A0_B; // net ID: TSTPATH lsb: 0  msb: 0 OUTPUT
		NetFlow* TSTREFCLKFAB_A0_B; // net ID: TSTREFCLKFAB lsb: 0  msb: 0 OUTPUT
		NetFlow* TSTREFCLKOUT_A0_B; // net ID: TSTREFCLKOUT lsb: 0  msb: 0 OUTPUT
		NetFlow* TXCTRLACK0_A0_B; // net ID: TXCTRLACK0 lsb: 0  msb: 0 OUTPUT
		NetFlow* TXCTRLACK1_A0_B; // net ID: TXCTRLACK1 lsb: 0  msb: 0 OUTPUT
		NetFlow* TXCTRLACK2_A0_B; // net ID: TXCTRLACK2 lsb: 0  msb: 0 OUTPUT
		NetFlow* TXCTRLACK3_A0_B; // net ID: TXCTRLACK3 lsb: 0  msb: 0 OUTPUT
		NetFlow* TXDATATAP10_A0_B; // net ID: TXDATATAP10 lsb: 0  msb: 0 OUTPUT
		NetFlow* TXDATATAP11_A0_B; // net ID: TXDATATAP11 lsb: 0  msb: 0 OUTPUT
		NetFlow* TXDATATAP12_A0_B; // net ID: TXDATATAP12 lsb: 0  msb: 0 OUTPUT
		NetFlow* TXDATATAP13_A0_B; // net ID: TXDATATAP13 lsb: 0  msb: 0 OUTPUT
		NetFlow* TXDATATAP20_A0_B; // net ID: TXDATATAP20 lsb: 0  msb: 0 OUTPUT
		NetFlow* TXDATATAP21_A0_B; // net ID: TXDATATAP21 lsb: 0  msb: 0 OUTPUT
		NetFlow* TXDATATAP22_A0_B; // net ID: TXDATATAP22 lsb: 0  msb: 0 OUTPUT
		NetFlow* TXDATATAP23_A0_B; // net ID: TXDATATAP23 lsb: 0  msb: 0 OUTPUT
		NetFlow* TXN0_A0_B; // net ID: TXN0 lsb: 0  msb: 0 OUTPUT
		NetFlow* TXN1_A0_B; // net ID: TXN1 lsb: 0  msb: 0 OUTPUT
		NetFlow* TXN2_A0_B; // net ID: TXN2 lsb: 0  msb: 0 OUTPUT
		NetFlow* TXN3_A0_B; // net ID: TXN3 lsb: 0  msb: 0 OUTPUT
		NetFlow* TXP0_A0_B; // net ID: TXP0 lsb: 0  msb: 0 OUTPUT
		NetFlow* TXP1_A0_B; // net ID: TXP1 lsb: 0  msb: 0 OUTPUT
		NetFlow* TXP2_A0_B; // net ID: TXP2 lsb: 0  msb: 0 OUTPUT
		NetFlow* TXP3_A0_B; // net ID: TXP3 lsb: 0  msb: 0 OUTPUT
		NetFlow* TXPCSCLKSMPL0_A0_B; // net ID: TXPCSCLKSMPL0 lsb: 0  msb: 0 OUTPUT
		NetFlow* TXPCSCLKSMPL1_A0_B; // net ID: TXPCSCLKSMPL1 lsb: 0  msb: 0 OUTPUT
		NetFlow* TXPCSCLKSMPL2_A0_B; // net ID: TXPCSCLKSMPL2 lsb: 0  msb: 0 OUTPUT
		NetFlow* TXPCSCLKSMPL3_A0_B; // net ID: TXPCSCLKSMPL3 lsb: 0  msb: 0 OUTPUT
		NetFlow* TXUSERCLKOUT0_A0_B; // net ID: TXUSERCLKOUT0 lsb: 0  msb: 0 OUTPUT
		NetFlow* TXUSERCLKOUT1_A0_B; // net ID: TXUSERCLKOUT1 lsb: 0  msb: 0 OUTPUT
		NetFlow* TXUSERCLKOUT2_A0_B; // net ID: TXUSERCLKOUT2 lsb: 0  msb: 0 OUTPUT
		NetFlow* TXUSERCLKOUT3_A0_B; // net ID: TXUSERCLKOUT3 lsb: 0  msb: 0 OUTPUT
		NetFlow* DADDR_A0_B; // net ID: DADDR lsb: 0  msb: 15 INPUT
		NetFlow* DADDR_A1_B; // net ID: DADDR lsb: 0  msb: 15 INPUT
		NetFlow* DADDR_A2_B; // net ID: DADDR lsb: 0  msb: 15 INPUT
		NetFlow* DADDR_A3_B; // net ID: DADDR lsb: 0  msb: 15 INPUT
		NetFlow* DADDR_A4_B; // net ID: DADDR lsb: 0  msb: 15 INPUT
		NetFlow* DADDR_A5_B; // net ID: DADDR lsb: 0  msb: 15 INPUT
		NetFlow* DADDR_A6_B; // net ID: DADDR lsb: 0  msb: 15 INPUT
		NetFlow* DADDR_A7_B; // net ID: DADDR lsb: 0  msb: 15 INPUT
		NetFlow* DADDR_A8_B; // net ID: DADDR lsb: 0  msb: 15 INPUT
		NetFlow* DADDR_A9_B; // net ID: DADDR lsb: 0  msb: 15 INPUT
		NetFlow* DADDR_A10_B; // net ID: DADDR lsb: 0  msb: 15 INPUT
		NetFlow* DADDR_A11_B; // net ID: DADDR lsb: 0  msb: 15 INPUT
		NetFlow* DADDR_A12_B; // net ID: DADDR lsb: 0  msb: 15 INPUT
		NetFlow* DADDR_A13_B; // net ID: DADDR lsb: 0  msb: 15 INPUT
		NetFlow* DADDR_A14_B; // net ID: DADDR lsb: 0  msb: 15 INPUT
		NetFlow* DADDR_A15_B; // net ID: DADDR lsb: 0  msb: 15 INPUT
		NetFlow* DCLK_A0_B; // net ID: DCLK lsb: 0  msb: 0 INPUT
		NetFlow* DEN_A0_B; // net ID: DEN lsb: 0  msb: 0 INPUT
		NetFlow* DFETRAINCTRL0_A0_B; // net ID: DFETRAINCTRL0 lsb: 0  msb: 0 INPUT
		NetFlow* DFETRAINCTRL1_A0_B; // net ID: DFETRAINCTRL1 lsb: 0  msb: 0 INPUT
		NetFlow* DFETRAINCTRL2_A0_B; // net ID: DFETRAINCTRL2 lsb: 0  msb: 0 INPUT
		NetFlow* DFETRAINCTRL3_A0_B; // net ID: DFETRAINCTRL3 lsb: 0  msb: 0 INPUT
		NetFlow* DI_A0_B; // net ID: DI lsb: 0  msb: 15 INPUT
		NetFlow* DI_A1_B; // net ID: DI lsb: 0  msb: 15 INPUT
		NetFlow* DI_A2_B; // net ID: DI lsb: 0  msb: 15 INPUT
		NetFlow* DI_A3_B; // net ID: DI lsb: 0  msb: 15 INPUT
		NetFlow* DI_A4_B; // net ID: DI lsb: 0  msb: 15 INPUT
		NetFlow* DI_A5_B; // net ID: DI lsb: 0  msb: 15 INPUT
		NetFlow* DI_A6_B; // net ID: DI lsb: 0  msb: 15 INPUT
		NetFlow* DI_A7_B; // net ID: DI lsb: 0  msb: 15 INPUT
		NetFlow* DI_A8_B; // net ID: DI lsb: 0  msb: 15 INPUT
		NetFlow* DI_A9_B; // net ID: DI lsb: 0  msb: 15 INPUT
		NetFlow* DI_A10_B; // net ID: DI lsb: 0  msb: 15 INPUT
		NetFlow* DI_A11_B; // net ID: DI lsb: 0  msb: 15 INPUT
		NetFlow* DI_A12_B; // net ID: DI lsb: 0  msb: 15 INPUT
		NetFlow* DI_A13_B; // net ID: DI lsb: 0  msb: 15 INPUT
		NetFlow* DI_A14_B; // net ID: DI lsb: 0  msb: 15 INPUT
		NetFlow* DI_A15_B; // net ID: DI lsb: 0  msb: 15 INPUT
		NetFlow* DISABLEDRP_A0_B; // net ID: DISABLEDRP lsb: 0  msb: 0 INPUT
		NetFlow* DWE_A0_B; // net ID: DWE lsb: 0  msb: 0 INPUT
		NetFlow* GTHINIT_A0_B; // net ID: GTHINIT lsb: 0  msb: 0 INPUT
		NetFlow* GTHRESET_A0_B; // net ID: GTHRESET lsb: 0  msb: 0 INPUT
		NetFlow* GTHX2LANE01_A0_B; // net ID: GTHX2LANE01 lsb: 0  msb: 0 INPUT
		NetFlow* GTHX2LANE23_A0_B; // net ID: GTHX2LANE23 lsb: 0  msb: 0 INPUT
		NetFlow* GTHX4LANE_A0_B; // net ID: GTHX4LANE lsb: 0  msb: 0 INPUT
		NetFlow* MGMTPCSLANESEL_A0_B; // net ID: MGMTPCSLANESEL lsb: 0  msb: 3 INPUT
		NetFlow* MGMTPCSLANESEL_A1_B; // net ID: MGMTPCSLANESEL lsb: 0  msb: 3 INPUT
		NetFlow* MGMTPCSLANESEL_A2_B; // net ID: MGMTPCSLANESEL lsb: 0  msb: 3 INPUT
		NetFlow* MGMTPCSLANESEL_A3_B; // net ID: MGMTPCSLANESEL lsb: 0  msb: 3 INPUT
		NetFlow* MGMTPCSMMDADDR_A0_B; // net ID: MGMTPCSMMDADDR lsb: 0  msb: 4 INPUT
		NetFlow* MGMTPCSMMDADDR_A1_B; // net ID: MGMTPCSMMDADDR lsb: 0  msb: 4 INPUT
		NetFlow* MGMTPCSMMDADDR_A2_B; // net ID: MGMTPCSMMDADDR lsb: 0  msb: 4 INPUT
		NetFlow* MGMTPCSMMDADDR_A3_B; // net ID: MGMTPCSMMDADDR lsb: 0  msb: 4 INPUT
		NetFlow* MGMTPCSMMDADDR_A4_B; // net ID: MGMTPCSMMDADDR lsb: 0  msb: 4 INPUT
		NetFlow* MGMTPCSREGADDR_A0_B; // net ID: MGMTPCSREGADDR lsb: 0  msb: 15 INPUT
		NetFlow* MGMTPCSREGADDR_A1_B; // net ID: MGMTPCSREGADDR lsb: 0  msb: 15 INPUT
		NetFlow* MGMTPCSREGADDR_A2_B; // net ID: MGMTPCSREGADDR lsb: 0  msb: 15 INPUT
		NetFlow* MGMTPCSREGADDR_A3_B; // net ID: MGMTPCSREGADDR lsb: 0  msb: 15 INPUT
		NetFlow* MGMTPCSREGADDR_A4_B; // net ID: MGMTPCSREGADDR lsb: 0  msb: 15 INPUT
		NetFlow* MGMTPCSREGADDR_A5_B; // net ID: MGMTPCSREGADDR lsb: 0  msb: 15 INPUT
		NetFlow* MGMTPCSREGADDR_A6_B; // net ID: MGMTPCSREGADDR lsb: 0  msb: 15 INPUT
		NetFlow* MGMTPCSREGADDR_A7_B; // net ID: MGMTPCSREGADDR lsb: 0  msb: 15 INPUT
		NetFlow* MGMTPCSREGADDR_A8_B; // net ID: MGMTPCSREGADDR lsb: 0  msb: 15 INPUT
		NetFlow* MGMTPCSREGADDR_A9_B; // net ID: MGMTPCSREGADDR lsb: 0  msb: 15 INPUT
		NetFlow* MGMTPCSREGADDR_A10_B; // net ID: MGMTPCSREGADDR lsb: 0  msb: 15 INPUT
		NetFlow* MGMTPCSREGADDR_A11_B; // net ID: MGMTPCSREGADDR lsb: 0  msb: 15 INPUT
		NetFlow* MGMTPCSREGADDR_A12_B; // net ID: MGMTPCSREGADDR lsb: 0  msb: 15 INPUT
		NetFlow* MGMTPCSREGADDR_A13_B; // net ID: MGMTPCSREGADDR lsb: 0  msb: 15 INPUT
		NetFlow* MGMTPCSREGADDR_A14_B; // net ID: MGMTPCSREGADDR lsb: 0  msb: 15 INPUT
		NetFlow* MGMTPCSREGADDR_A15_B; // net ID: MGMTPCSREGADDR lsb: 0  msb: 15 INPUT
		NetFlow* MGMTPCSREGRD_A0_B; // net ID: MGMTPCSREGRD lsb: 0  msb: 0 INPUT
		NetFlow* MGMTPCSREGWR_A0_B; // net ID: MGMTPCSREGWR lsb: 0  msb: 0 INPUT
		NetFlow* MGMTPCSWRDATA_A0_B; // net ID: MGMTPCSWRDATA lsb: 0  msb: 15 INPUT
		NetFlow* MGMTPCSWRDATA_A1_B; // net ID: MGMTPCSWRDATA lsb: 0  msb: 15 INPUT
		NetFlow* MGMTPCSWRDATA_A2_B; // net ID: MGMTPCSWRDATA lsb: 0  msb: 15 INPUT
		NetFlow* MGMTPCSWRDATA_A3_B; // net ID: MGMTPCSWRDATA lsb: 0  msb: 15 INPUT
		NetFlow* MGMTPCSWRDATA_A4_B; // net ID: MGMTPCSWRDATA lsb: 0  msb: 15 INPUT
		NetFlow* MGMTPCSWRDATA_A5_B; // net ID: MGMTPCSWRDATA lsb: 0  msb: 15 INPUT
		NetFlow* MGMTPCSWRDATA_A6_B; // net ID: MGMTPCSWRDATA lsb: 0  msb: 15 INPUT
		NetFlow* MGMTPCSWRDATA_A7_B; // net ID: MGMTPCSWRDATA lsb: 0  msb: 15 INPUT
		NetFlow* MGMTPCSWRDATA_A8_B; // net ID: MGMTPCSWRDATA lsb: 0  msb: 15 INPUT
		NetFlow* MGMTPCSWRDATA_A9_B; // net ID: MGMTPCSWRDATA lsb: 0  msb: 15 INPUT
		NetFlow* MGMTPCSWRDATA_A10_B; // net ID: MGMTPCSWRDATA lsb: 0  msb: 15 INPUT
		NetFlow* MGMTPCSWRDATA_A11_B; // net ID: MGMTPCSWRDATA lsb: 0  msb: 15 INPUT
		NetFlow* MGMTPCSWRDATA_A12_B; // net ID: MGMTPCSWRDATA lsb: 0  msb: 15 INPUT
		NetFlow* MGMTPCSWRDATA_A13_B; // net ID: MGMTPCSWRDATA lsb: 0  msb: 15 INPUT
		NetFlow* MGMTPCSWRDATA_A14_B; // net ID: MGMTPCSWRDATA lsb: 0  msb: 15 INPUT
		NetFlow* MGMTPCSWRDATA_A15_B; // net ID: MGMTPCSWRDATA lsb: 0  msb: 15 INPUT
		NetFlow* PLLPCSCLKDIV_A0_B; // net ID: PLLPCSCLKDIV lsb: 0  msb: 5 INPUT
		NetFlow* PLLPCSCLKDIV_A1_B; // net ID: PLLPCSCLKDIV lsb: 0  msb: 5 INPUT
		NetFlow* PLLPCSCLKDIV_A2_B; // net ID: PLLPCSCLKDIV lsb: 0  msb: 5 INPUT
		NetFlow* PLLPCSCLKDIV_A3_B; // net ID: PLLPCSCLKDIV lsb: 0  msb: 5 INPUT
		NetFlow* PLLPCSCLKDIV_A4_B; // net ID: PLLPCSCLKDIV lsb: 0  msb: 5 INPUT
		NetFlow* PLLPCSCLKDIV_A5_B; // net ID: PLLPCSCLKDIV lsb: 0  msb: 5 INPUT
		NetFlow* PLLREFCLKSEL_A0_B; // net ID: PLLREFCLKSEL lsb: 0  msb: 2 INPUT
		NetFlow* PLLREFCLKSEL_A1_B; // net ID: PLLREFCLKSEL lsb: 0  msb: 2 INPUT
		NetFlow* PLLREFCLKSEL_A2_B; // net ID: PLLREFCLKSEL lsb: 0  msb: 2 INPUT
		NetFlow* POWERDOWN0_A0_B; // net ID: POWERDOWN0 lsb: 0  msb: 0 INPUT
		NetFlow* POWERDOWN1_A0_B; // net ID: POWERDOWN1 lsb: 0  msb: 0 INPUT
		NetFlow* POWERDOWN2_A0_B; // net ID: POWERDOWN2 lsb: 0  msb: 0 INPUT
		NetFlow* POWERDOWN3_A0_B; // net ID: POWERDOWN3 lsb: 0  msb: 0 INPUT
		NetFlow* REFCLK_A0_B; // net ID: REFCLK lsb: 0  msb: 0 INPUT
		NetFlow* RXBUFRESET0_A0_B; // net ID: RXBUFRESET0 lsb: 0  msb: 0 INPUT
		NetFlow* RXBUFRESET1_A0_B; // net ID: RXBUFRESET1 lsb: 0  msb: 0 INPUT
		NetFlow* RXBUFRESET2_A0_B; // net ID: RXBUFRESET2 lsb: 0  msb: 0 INPUT
		NetFlow* RXBUFRESET3_A0_B; // net ID: RXBUFRESET3 lsb: 0  msb: 0 INPUT
		NetFlow* RXENCOMMADET0_A0_B; // net ID: RXENCOMMADET0 lsb: 0  msb: 0 INPUT
		NetFlow* RXENCOMMADET1_A0_B; // net ID: RXENCOMMADET1 lsb: 0  msb: 0 INPUT
		NetFlow* RXENCOMMADET2_A0_B; // net ID: RXENCOMMADET2 lsb: 0  msb: 0 INPUT
		NetFlow* RXENCOMMADET3_A0_B; // net ID: RXENCOMMADET3 lsb: 0  msb: 0 INPUT
		NetFlow* RXN0_A0_B; // net ID: RXN0 lsb: 0  msb: 0 INPUT
		NetFlow* RXN1_A0_B; // net ID: RXN1 lsb: 0  msb: 0 INPUT
		NetFlow* RXN2_A0_B; // net ID: RXN2 lsb: 0  msb: 0 INPUT
		NetFlow* RXN3_A0_B; // net ID: RXN3 lsb: 0  msb: 0 INPUT
		NetFlow* RXP0_A0_B; // net ID: RXP0 lsb: 0  msb: 0 INPUT
		NetFlow* RXP1_A0_B; // net ID: RXP1 lsb: 0  msb: 0 INPUT
		NetFlow* RXP2_A0_B; // net ID: RXP2 lsb: 0  msb: 0 INPUT
		NetFlow* RXP3_A0_B; // net ID: RXP3 lsb: 0  msb: 0 INPUT
		NetFlow* RXPOLARITY0_A0_B; // net ID: RXPOLARITY0 lsb: 0  msb: 0 INPUT
		NetFlow* RXPOLARITY1_A0_B; // net ID: RXPOLARITY1 lsb: 0  msb: 0 INPUT
		NetFlow* RXPOLARITY2_A0_B; // net ID: RXPOLARITY2 lsb: 0  msb: 0 INPUT
		NetFlow* RXPOLARITY3_A0_B; // net ID: RXPOLARITY3 lsb: 0  msb: 0 INPUT
		NetFlow* RXPOWERDOWN0_A0_B; // net ID: RXPOWERDOWN0 lsb: 0  msb: 1 INPUT
		NetFlow* RXPOWERDOWN0_A1_B; // net ID: RXPOWERDOWN0 lsb: 0  msb: 1 INPUT
		NetFlow* RXPOWERDOWN1_A0_B; // net ID: RXPOWERDOWN1 lsb: 0  msb: 1 INPUT
		NetFlow* RXPOWERDOWN1_A1_B; // net ID: RXPOWERDOWN1 lsb: 0  msb: 1 INPUT
		NetFlow* RXPOWERDOWN2_A0_B; // net ID: RXPOWERDOWN2 lsb: 0  msb: 1 INPUT
		NetFlow* RXPOWERDOWN2_A1_B; // net ID: RXPOWERDOWN2 lsb: 0  msb: 1 INPUT
		NetFlow* RXPOWERDOWN3_A0_B; // net ID: RXPOWERDOWN3 lsb: 0  msb: 1 INPUT
		NetFlow* RXPOWERDOWN3_A1_B; // net ID: RXPOWERDOWN3 lsb: 0  msb: 1 INPUT
		NetFlow* RXRATE0_A0_B; // net ID: RXRATE0 lsb: 0  msb: 1 INPUT
		NetFlow* RXRATE0_A1_B; // net ID: RXRATE0 lsb: 0  msb: 1 INPUT
		NetFlow* RXRATE1_A0_B; // net ID: RXRATE1 lsb: 0  msb: 1 INPUT
		NetFlow* RXRATE1_A1_B; // net ID: RXRATE1 lsb: 0  msb: 1 INPUT
		NetFlow* RXRATE2_A0_B; // net ID: RXRATE2 lsb: 0  msb: 1 INPUT
		NetFlow* RXRATE2_A1_B; // net ID: RXRATE2 lsb: 0  msb: 1 INPUT
		NetFlow* RXRATE3_A0_B; // net ID: RXRATE3 lsb: 0  msb: 1 INPUT
		NetFlow* RXRATE3_A1_B; // net ID: RXRATE3 lsb: 0  msb: 1 INPUT
		NetFlow* RXSLIP0_A0_B; // net ID: RXSLIP0 lsb: 0  msb: 0 INPUT
		NetFlow* RXSLIP1_A0_B; // net ID: RXSLIP1 lsb: 0  msb: 0 INPUT
		NetFlow* RXSLIP2_A0_B; // net ID: RXSLIP2 lsb: 0  msb: 0 INPUT
		NetFlow* RXSLIP3_A0_B; // net ID: RXSLIP3 lsb: 0  msb: 0 INPUT
		NetFlow* RXUSERCLKIN0_A0_B; // net ID: RXUSERCLKIN0 lsb: 0  msb: 0 INPUT
		NetFlow* RXUSERCLKIN1_A0_B; // net ID: RXUSERCLKIN1 lsb: 0  msb: 0 INPUT
		NetFlow* RXUSERCLKIN2_A0_B; // net ID: RXUSERCLKIN2 lsb: 0  msb: 0 INPUT
		NetFlow* RXUSERCLKIN3_A0_B; // net ID: RXUSERCLKIN3 lsb: 0  msb: 0 INPUT
		NetFlow* SAMPLERATE0_A0_B; // net ID: SAMPLERATE0 lsb: 0  msb: 2 INPUT
		NetFlow* SAMPLERATE0_A1_B; // net ID: SAMPLERATE0 lsb: 0  msb: 2 INPUT
		NetFlow* SAMPLERATE0_A2_B; // net ID: SAMPLERATE0 lsb: 0  msb: 2 INPUT
		NetFlow* SAMPLERATE1_A0_B; // net ID: SAMPLERATE1 lsb: 0  msb: 2 INPUT
		NetFlow* SAMPLERATE1_A1_B; // net ID: SAMPLERATE1 lsb: 0  msb: 2 INPUT
		NetFlow* SAMPLERATE1_A2_B; // net ID: SAMPLERATE1 lsb: 0  msb: 2 INPUT
		NetFlow* SAMPLERATE2_A0_B; // net ID: SAMPLERATE2 lsb: 0  msb: 2 INPUT
		NetFlow* SAMPLERATE2_A1_B; // net ID: SAMPLERATE2 lsb: 0  msb: 2 INPUT
		NetFlow* SAMPLERATE2_A2_B; // net ID: SAMPLERATE2 lsb: 0  msb: 2 INPUT
		NetFlow* SAMPLERATE3_A0_B; // net ID: SAMPLERATE3 lsb: 0  msb: 2 INPUT
		NetFlow* SAMPLERATE3_A1_B; // net ID: SAMPLERATE3 lsb: 0  msb: 2 INPUT
		NetFlow* SAMPLERATE3_A2_B; // net ID: SAMPLERATE3 lsb: 0  msb: 2 INPUT
		NetFlow* TXBUFRESET0_A0_B; // net ID: TXBUFRESET0 lsb: 0  msb: 0 INPUT
		NetFlow* TXBUFRESET1_A0_B; // net ID: TXBUFRESET1 lsb: 0  msb: 0 INPUT
		NetFlow* TXBUFRESET2_A0_B; // net ID: TXBUFRESET2 lsb: 0  msb: 0 INPUT
		NetFlow* TXBUFRESET3_A0_B; // net ID: TXBUFRESET3 lsb: 0  msb: 0 INPUT
		NetFlow* TXCTRL0_A0_B; // net ID: TXCTRL0 lsb: 0  msb: 7 INPUT
		NetFlow* TXCTRL0_A1_B; // net ID: TXCTRL0 lsb: 0  msb: 7 INPUT
		NetFlow* TXCTRL0_A2_B; // net ID: TXCTRL0 lsb: 0  msb: 7 INPUT
		NetFlow* TXCTRL0_A3_B; // net ID: TXCTRL0 lsb: 0  msb: 7 INPUT
		NetFlow* TXCTRL0_A4_B; // net ID: TXCTRL0 lsb: 0  msb: 7 INPUT
		NetFlow* TXCTRL0_A5_B; // net ID: TXCTRL0 lsb: 0  msb: 7 INPUT
		NetFlow* TXCTRL0_A6_B; // net ID: TXCTRL0 lsb: 0  msb: 7 INPUT
		NetFlow* TXCTRL0_A7_B; // net ID: TXCTRL0 lsb: 0  msb: 7 INPUT
		NetFlow* TXCTRL1_A0_B; // net ID: TXCTRL1 lsb: 0  msb: 7 INPUT
		NetFlow* TXCTRL1_A1_B; // net ID: TXCTRL1 lsb: 0  msb: 7 INPUT
		NetFlow* TXCTRL1_A2_B; // net ID: TXCTRL1 lsb: 0  msb: 7 INPUT
		NetFlow* TXCTRL1_A3_B; // net ID: TXCTRL1 lsb: 0  msb: 7 INPUT
		NetFlow* TXCTRL1_A4_B; // net ID: TXCTRL1 lsb: 0  msb: 7 INPUT
		NetFlow* TXCTRL1_A5_B; // net ID: TXCTRL1 lsb: 0  msb: 7 INPUT
		NetFlow* TXCTRL1_A6_B; // net ID: TXCTRL1 lsb: 0  msb: 7 INPUT
		NetFlow* TXCTRL1_A7_B; // net ID: TXCTRL1 lsb: 0  msb: 7 INPUT
		NetFlow* TXCTRL2_A0_B; // net ID: TXCTRL2 lsb: 0  msb: 7 INPUT
		NetFlow* TXCTRL2_A1_B; // net ID: TXCTRL2 lsb: 0  msb: 7 INPUT
		NetFlow* TXCTRL2_A2_B; // net ID: TXCTRL2 lsb: 0  msb: 7 INPUT
		NetFlow* TXCTRL2_A3_B; // net ID: TXCTRL2 lsb: 0  msb: 7 INPUT
		NetFlow* TXCTRL2_A4_B; // net ID: TXCTRL2 lsb: 0  msb: 7 INPUT
		NetFlow* TXCTRL2_A5_B; // net ID: TXCTRL2 lsb: 0  msb: 7 INPUT
		NetFlow* TXCTRL2_A6_B; // net ID: TXCTRL2 lsb: 0  msb: 7 INPUT
		NetFlow* TXCTRL2_A7_B; // net ID: TXCTRL2 lsb: 0  msb: 7 INPUT
		NetFlow* TXCTRL3_A0_B; // net ID: TXCTRL3 lsb: 0  msb: 7 INPUT
		NetFlow* TXCTRL3_A1_B; // net ID: TXCTRL3 lsb: 0  msb: 7 INPUT
		NetFlow* TXCTRL3_A2_B; // net ID: TXCTRL3 lsb: 0  msb: 7 INPUT
		NetFlow* TXCTRL3_A3_B; // net ID: TXCTRL3 lsb: 0  msb: 7 INPUT
		NetFlow* TXCTRL3_A4_B; // net ID: TXCTRL3 lsb: 0  msb: 7 INPUT
		NetFlow* TXCTRL3_A5_B; // net ID: TXCTRL3 lsb: 0  msb: 7 INPUT
		NetFlow* TXCTRL3_A6_B; // net ID: TXCTRL3 lsb: 0  msb: 7 INPUT
		NetFlow* TXCTRL3_A7_B; // net ID: TXCTRL3 lsb: 0  msb: 7 INPUT
		NetFlow* TXDATA0_A0_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA0_A1_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA0_A2_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA0_A3_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA0_A4_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA0_A5_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA0_A6_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA0_A7_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA0_A8_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA0_A9_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA0_A10_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA0_A11_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA0_A12_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA0_A13_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA0_A14_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA0_A15_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA0_A16_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA0_A17_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA0_A18_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA0_A19_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA0_A20_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA0_A21_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA0_A22_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA0_A23_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA0_A24_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA0_A25_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA0_A26_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA0_A27_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA0_A28_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA0_A29_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA0_A30_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA0_A31_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA0_A32_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA0_A33_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA0_A34_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA0_A35_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA0_A36_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA0_A37_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA0_A38_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA0_A39_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA0_A40_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA0_A41_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA0_A42_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA0_A43_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA0_A44_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA0_A45_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA0_A46_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA0_A47_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA0_A48_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA0_A49_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA0_A50_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA0_A51_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA0_A52_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA0_A53_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA0_A54_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA0_A55_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA0_A56_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA0_A57_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA0_A58_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA0_A59_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA0_A60_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA0_A61_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA0_A62_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA0_A63_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA1_A0_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA1_A1_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA1_A2_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA1_A3_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA1_A4_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA1_A5_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA1_A6_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA1_A7_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA1_A8_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA1_A9_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA1_A10_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA1_A11_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA1_A12_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA1_A13_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA1_A14_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA1_A15_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA1_A16_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA1_A17_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA1_A18_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA1_A19_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA1_A20_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA1_A21_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA1_A22_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA1_A23_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA1_A24_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA1_A25_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA1_A26_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA1_A27_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA1_A28_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA1_A29_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA1_A30_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA1_A31_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA1_A32_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA1_A33_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA1_A34_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA1_A35_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA1_A36_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA1_A37_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA1_A38_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA1_A39_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA1_A40_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA1_A41_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA1_A42_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA1_A43_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA1_A44_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA1_A45_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA1_A46_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA1_A47_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA1_A48_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA1_A49_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA1_A50_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA1_A51_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA1_A52_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA1_A53_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA1_A54_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA1_A55_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA1_A56_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA1_A57_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA1_A58_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA1_A59_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA1_A60_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA1_A61_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA1_A62_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA1_A63_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA2_A0_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA2_A1_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA2_A2_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA2_A3_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA2_A4_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA2_A5_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA2_A6_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA2_A7_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA2_A8_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA2_A9_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA2_A10_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA2_A11_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA2_A12_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA2_A13_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA2_A14_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA2_A15_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA2_A16_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA2_A17_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA2_A18_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA2_A19_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA2_A20_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA2_A21_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA2_A22_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA2_A23_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA2_A24_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA2_A25_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA2_A26_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA2_A27_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA2_A28_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA2_A29_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA2_A30_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA2_A31_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA2_A32_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA2_A33_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA2_A34_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA2_A35_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA2_A36_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA2_A37_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA2_A38_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA2_A39_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA2_A40_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA2_A41_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA2_A42_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA2_A43_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA2_A44_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA2_A45_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA2_A46_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA2_A47_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA2_A48_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA2_A49_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA2_A50_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA2_A51_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA2_A52_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA2_A53_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA2_A54_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA2_A55_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA2_A56_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA2_A57_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA2_A58_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA2_A59_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA2_A60_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA2_A61_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA2_A62_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA2_A63_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA3_A0_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA3_A1_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA3_A2_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA3_A3_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA3_A4_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA3_A5_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA3_A6_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA3_A7_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA3_A8_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA3_A9_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA3_A10_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA3_A11_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA3_A12_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA3_A13_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA3_A14_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA3_A15_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA3_A16_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA3_A17_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA3_A18_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA3_A19_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA3_A20_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA3_A21_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA3_A22_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA3_A23_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA3_A24_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA3_A25_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA3_A26_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA3_A27_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA3_A28_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA3_A29_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA3_A30_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA3_A31_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA3_A32_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA3_A33_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA3_A34_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA3_A35_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA3_A36_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA3_A37_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA3_A38_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA3_A39_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA3_A40_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA3_A41_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA3_A42_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA3_A43_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA3_A44_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA3_A45_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA3_A46_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA3_A47_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA3_A48_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA3_A49_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA3_A50_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA3_A51_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA3_A52_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA3_A53_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA3_A54_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA3_A55_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA3_A56_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA3_A57_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA3_A58_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA3_A59_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA3_A60_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA3_A61_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA3_A62_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA3_A63_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATAMSB0_A0_B; // net ID: TXDATAMSB0 lsb: 0  msb: 7 INPUT
		NetFlow* TXDATAMSB0_A1_B; // net ID: TXDATAMSB0 lsb: 0  msb: 7 INPUT
		NetFlow* TXDATAMSB0_A2_B; // net ID: TXDATAMSB0 lsb: 0  msb: 7 INPUT
		NetFlow* TXDATAMSB0_A3_B; // net ID: TXDATAMSB0 lsb: 0  msb: 7 INPUT
		NetFlow* TXDATAMSB0_A4_B; // net ID: TXDATAMSB0 lsb: 0  msb: 7 INPUT
		NetFlow* TXDATAMSB0_A5_B; // net ID: TXDATAMSB0 lsb: 0  msb: 7 INPUT
		NetFlow* TXDATAMSB0_A6_B; // net ID: TXDATAMSB0 lsb: 0  msb: 7 INPUT
		NetFlow* TXDATAMSB0_A7_B; // net ID: TXDATAMSB0 lsb: 0  msb: 7 INPUT
		NetFlow* TXDATAMSB1_A0_B; // net ID: TXDATAMSB1 lsb: 0  msb: 7 INPUT
		NetFlow* TXDATAMSB1_A1_B; // net ID: TXDATAMSB1 lsb: 0  msb: 7 INPUT
		NetFlow* TXDATAMSB1_A2_B; // net ID: TXDATAMSB1 lsb: 0  msb: 7 INPUT
		NetFlow* TXDATAMSB1_A3_B; // net ID: TXDATAMSB1 lsb: 0  msb: 7 INPUT
		NetFlow* TXDATAMSB1_A4_B; // net ID: TXDATAMSB1 lsb: 0  msb: 7 INPUT
		NetFlow* TXDATAMSB1_A5_B; // net ID: TXDATAMSB1 lsb: 0  msb: 7 INPUT
		NetFlow* TXDATAMSB1_A6_B; // net ID: TXDATAMSB1 lsb: 0  msb: 7 INPUT
		NetFlow* TXDATAMSB1_A7_B; // net ID: TXDATAMSB1 lsb: 0  msb: 7 INPUT
		NetFlow* TXDATAMSB2_A0_B; // net ID: TXDATAMSB2 lsb: 0  msb: 7 INPUT
		NetFlow* TXDATAMSB2_A1_B; // net ID: TXDATAMSB2 lsb: 0  msb: 7 INPUT
		NetFlow* TXDATAMSB2_A2_B; // net ID: TXDATAMSB2 lsb: 0  msb: 7 INPUT
		NetFlow* TXDATAMSB2_A3_B; // net ID: TXDATAMSB2 lsb: 0  msb: 7 INPUT
		NetFlow* TXDATAMSB2_A4_B; // net ID: TXDATAMSB2 lsb: 0  msb: 7 INPUT
		NetFlow* TXDATAMSB2_A5_B; // net ID: TXDATAMSB2 lsb: 0  msb: 7 INPUT
		NetFlow* TXDATAMSB2_A6_B; // net ID: TXDATAMSB2 lsb: 0  msb: 7 INPUT
		NetFlow* TXDATAMSB2_A7_B; // net ID: TXDATAMSB2 lsb: 0  msb: 7 INPUT
		NetFlow* TXDATAMSB3_A0_B; // net ID: TXDATAMSB3 lsb: 0  msb: 7 INPUT
		NetFlow* TXDATAMSB3_A1_B; // net ID: TXDATAMSB3 lsb: 0  msb: 7 INPUT
		NetFlow* TXDATAMSB3_A2_B; // net ID: TXDATAMSB3 lsb: 0  msb: 7 INPUT
		NetFlow* TXDATAMSB3_A3_B; // net ID: TXDATAMSB3 lsb: 0  msb: 7 INPUT
		NetFlow* TXDATAMSB3_A4_B; // net ID: TXDATAMSB3 lsb: 0  msb: 7 INPUT
		NetFlow* TXDATAMSB3_A5_B; // net ID: TXDATAMSB3 lsb: 0  msb: 7 INPUT
		NetFlow* TXDATAMSB3_A6_B; // net ID: TXDATAMSB3 lsb: 0  msb: 7 INPUT
		NetFlow* TXDATAMSB3_A7_B; // net ID: TXDATAMSB3 lsb: 0  msb: 7 INPUT
		NetFlow* TXDEEMPH0_A0_B; // net ID: TXDEEMPH0 lsb: 0  msb: 0 INPUT
		NetFlow* TXDEEMPH1_A0_B; // net ID: TXDEEMPH1 lsb: 0  msb: 0 INPUT
		NetFlow* TXDEEMPH2_A0_B; // net ID: TXDEEMPH2 lsb: 0  msb: 0 INPUT
		NetFlow* TXDEEMPH3_A0_B; // net ID: TXDEEMPH3 lsb: 0  msb: 0 INPUT
		NetFlow* TXMARGIN0_A0_B; // net ID: TXMARGIN0 lsb: 0  msb: 2 INPUT
		NetFlow* TXMARGIN0_A1_B; // net ID: TXMARGIN0 lsb: 0  msb: 2 INPUT
		NetFlow* TXMARGIN0_A2_B; // net ID: TXMARGIN0 lsb: 0  msb: 2 INPUT
		NetFlow* TXMARGIN1_A0_B; // net ID: TXMARGIN1 lsb: 0  msb: 2 INPUT
		NetFlow* TXMARGIN1_A1_B; // net ID: TXMARGIN1 lsb: 0  msb: 2 INPUT
		NetFlow* TXMARGIN1_A2_B; // net ID: TXMARGIN1 lsb: 0  msb: 2 INPUT
		NetFlow* TXMARGIN2_A0_B; // net ID: TXMARGIN2 lsb: 0  msb: 2 INPUT
		NetFlow* TXMARGIN2_A1_B; // net ID: TXMARGIN2 lsb: 0  msb: 2 INPUT
		NetFlow* TXMARGIN2_A2_B; // net ID: TXMARGIN2 lsb: 0  msb: 2 INPUT
		NetFlow* TXMARGIN3_A0_B; // net ID: TXMARGIN3 lsb: 0  msb: 2 INPUT
		NetFlow* TXMARGIN3_A1_B; // net ID: TXMARGIN3 lsb: 0  msb: 2 INPUT
		NetFlow* TXMARGIN3_A2_B; // net ID: TXMARGIN3 lsb: 0  msb: 2 INPUT
		NetFlow* TXPOWERDOWN0_A0_B; // net ID: TXPOWERDOWN0 lsb: 0  msb: 1 INPUT
		NetFlow* TXPOWERDOWN0_A1_B; // net ID: TXPOWERDOWN0 lsb: 0  msb: 1 INPUT
		NetFlow* TXPOWERDOWN1_A0_B; // net ID: TXPOWERDOWN1 lsb: 0  msb: 1 INPUT
		NetFlow* TXPOWERDOWN1_A1_B; // net ID: TXPOWERDOWN1 lsb: 0  msb: 1 INPUT
		NetFlow* TXPOWERDOWN2_A0_B; // net ID: TXPOWERDOWN2 lsb: 0  msb: 1 INPUT
		NetFlow* TXPOWERDOWN2_A1_B; // net ID: TXPOWERDOWN2 lsb: 0  msb: 1 INPUT
		NetFlow* TXPOWERDOWN3_A0_B; // net ID: TXPOWERDOWN3 lsb: 0  msb: 1 INPUT
		NetFlow* TXPOWERDOWN3_A1_B; // net ID: TXPOWERDOWN3 lsb: 0  msb: 1 INPUT
		NetFlow* TXRATE0_A0_B; // net ID: TXRATE0 lsb: 0  msb: 1 INPUT
		NetFlow* TXRATE0_A1_B; // net ID: TXRATE0 lsb: 0  msb: 1 INPUT
		NetFlow* TXRATE1_A0_B; // net ID: TXRATE1 lsb: 0  msb: 1 INPUT
		NetFlow* TXRATE1_A1_B; // net ID: TXRATE1 lsb: 0  msb: 1 INPUT
		NetFlow* TXRATE2_A0_B; // net ID: TXRATE2 lsb: 0  msb: 1 INPUT
		NetFlow* TXRATE2_A1_B; // net ID: TXRATE2 lsb: 0  msb: 1 INPUT
		NetFlow* TXRATE3_A0_B; // net ID: TXRATE3 lsb: 0  msb: 1 INPUT
		NetFlow* TXRATE3_A1_B; // net ID: TXRATE3 lsb: 0  msb: 1 INPUT
		NetFlow* TXUSERCLKIN0_A0_B; // net ID: TXUSERCLKIN0 lsb: 0  msb: 0 INPUT
		NetFlow* TXUSERCLKIN1_A0_B; // net ID: TXUSERCLKIN1 lsb: 0  msb: 0 INPUT
		NetFlow* TXUSERCLKIN2_A0_B; // net ID: TXUSERCLKIN2 lsb: 0  msb: 0 INPUT
		NetFlow* TXUSERCLKIN3_A0_B; // net ID: TXUSERCLKIN3 lsb: 0  msb: 0 INPUT
		
		public: X_GTHE1_QUAD(
			const char * name,
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_int_t BER_CONST_PTRN0, // Default: 16'h0000
			parameter_int_t BER_CONST_PTRN1, // Default: 16'h0000
			parameter_int_t BUFFER_CONFIG_LANE0, // Default: 16'h4004
			parameter_int_t BUFFER_CONFIG_LANE1, // Default: 16'h4004
			parameter_int_t BUFFER_CONFIG_LANE2, // Default: 16'h4004
			parameter_int_t BUFFER_CONFIG_LANE3, // Default: 16'h4004
			parameter_int_t DFE_TRAIN_CTRL_LANE0, // Default: 16'h0000
			parameter_int_t DFE_TRAIN_CTRL_LANE1, // Default: 16'h0000
			parameter_int_t DFE_TRAIN_CTRL_LANE2, // Default: 16'h0000
			parameter_int_t DFE_TRAIN_CTRL_LANE3, // Default: 16'h0000
			parameter_int_t DLL_CFG0, // Default: 16'h8202
			parameter_int_t DLL_CFG1, // Default: 16'h0000
			parameter_int_t E10GBASEKR_LD_COEFF_UPD_LANE0, // Default: 16'h0000
			parameter_int_t E10GBASEKR_LD_COEFF_UPD_LANE1, // Default: 16'h0000
			parameter_int_t E10GBASEKR_LD_COEFF_UPD_LANE2, // Default: 16'h0000
			parameter_int_t E10GBASEKR_LD_COEFF_UPD_LANE3, // Default: 16'h0000
			parameter_int_t E10GBASEKR_LP_COEFF_UPD_LANE0, // Default: 16'h0000
			parameter_int_t E10GBASEKR_LP_COEFF_UPD_LANE1, // Default: 16'h0000
			parameter_int_t E10GBASEKR_LP_COEFF_UPD_LANE2, // Default: 16'h0000
			parameter_int_t E10GBASEKR_LP_COEFF_UPD_LANE3, // Default: 16'h0000
			parameter_int_t E10GBASEKR_PMA_CTRL_LANE0, // Default: 16'h0002
			parameter_int_t E10GBASEKR_PMA_CTRL_LANE1, // Default: 16'h0002
			parameter_int_t E10GBASEKR_PMA_CTRL_LANE2, // Default: 16'h0002
			parameter_int_t E10GBASEKR_PMA_CTRL_LANE3, // Default: 16'h0002
			parameter_int_t E10GBASEKX_CTRL_LANE0, // Default: 16'h0000
			parameter_int_t E10GBASEKX_CTRL_LANE1, // Default: 16'h0000
			parameter_int_t E10GBASEKX_CTRL_LANE2, // Default: 16'h0000
			parameter_int_t E10GBASEKX_CTRL_LANE3, // Default: 16'h0000
			parameter_int_t E10GBASER_PCS_CFG_LANE0, // Default: 16'h070C
			parameter_int_t E10GBASER_PCS_CFG_LANE1, // Default: 16'h070C
			parameter_int_t E10GBASER_PCS_CFG_LANE2, // Default: 16'h070C
			parameter_int_t E10GBASER_PCS_CFG_LANE3, // Default: 16'h070C
			parameter_int_t E10GBASER_PCS_SEEDA0_LANE0, // Default: 16'h0001
			parameter_int_t E10GBASER_PCS_SEEDA0_LANE1, // Default: 16'h0001
			parameter_int_t E10GBASER_PCS_SEEDA0_LANE2, // Default: 16'h0001
			parameter_int_t E10GBASER_PCS_SEEDA0_LANE3, // Default: 16'h0001
			parameter_int_t E10GBASER_PCS_SEEDA1_LANE0, // Default: 16'h0000
			parameter_int_t E10GBASER_PCS_SEEDA1_LANE1, // Default: 16'h0000
			parameter_int_t E10GBASER_PCS_SEEDA1_LANE2, // Default: 16'h0000
			parameter_int_t E10GBASER_PCS_SEEDA1_LANE3, // Default: 16'h0000
			parameter_int_t E10GBASER_PCS_SEEDA2_LANE0, // Default: 16'h0000
			parameter_int_t E10GBASER_PCS_SEEDA2_LANE1, // Default: 16'h0000
			parameter_int_t E10GBASER_PCS_SEEDA2_LANE2, // Default: 16'h0000
			parameter_int_t E10GBASER_PCS_SEEDA2_LANE3, // Default: 16'h0000
			parameter_int_t E10GBASER_PCS_SEEDA3_LANE0, // Default: 16'h0000
			parameter_int_t E10GBASER_PCS_SEEDA3_LANE1, // Default: 16'h0000
			parameter_int_t E10GBASER_PCS_SEEDA3_LANE2, // Default: 16'h0000
			parameter_int_t E10GBASER_PCS_SEEDA3_LANE3, // Default: 16'h0000
			parameter_int_t E10GBASER_PCS_SEEDB0_LANE0, // Default: 16'h0001
			parameter_int_t E10GBASER_PCS_SEEDB0_LANE1, // Default: 16'h0001
			parameter_int_t E10GBASER_PCS_SEEDB0_LANE2, // Default: 16'h0001
			parameter_int_t E10GBASER_PCS_SEEDB0_LANE3, // Default: 16'h0001
			parameter_int_t E10GBASER_PCS_SEEDB1_LANE0, // Default: 16'h0000
			parameter_int_t E10GBASER_PCS_SEEDB1_LANE1, // Default: 16'h0000
			parameter_int_t E10GBASER_PCS_SEEDB1_LANE2, // Default: 16'h0000
			parameter_int_t E10GBASER_PCS_SEEDB1_LANE3, // Default: 16'h0000
			parameter_int_t E10GBASER_PCS_SEEDB2_LANE0, // Default: 16'h0000
			parameter_int_t E10GBASER_PCS_SEEDB2_LANE1, // Default: 16'h0000
			parameter_int_t E10GBASER_PCS_SEEDB2_LANE2, // Default: 16'h0000
			parameter_int_t E10GBASER_PCS_SEEDB2_LANE3, // Default: 16'h0000
			parameter_int_t E10GBASER_PCS_SEEDB3_LANE0, // Default: 16'h0000
			parameter_int_t E10GBASER_PCS_SEEDB3_LANE1, // Default: 16'h0000
			parameter_int_t E10GBASER_PCS_SEEDB3_LANE2, // Default: 16'h0000
			parameter_int_t E10GBASER_PCS_SEEDB3_LANE3, // Default: 16'h0000
			parameter_int_t E10GBASER_PCS_TEST_CTRL_LANE0, // Default: 16'h0000
			parameter_int_t E10GBASER_PCS_TEST_CTRL_LANE1, // Default: 16'h0000
			parameter_int_t E10GBASER_PCS_TEST_CTRL_LANE2, // Default: 16'h0000
			parameter_int_t E10GBASER_PCS_TEST_CTRL_LANE3, // Default: 16'h0000
			parameter_int_t E10GBASEX_PCS_TSTCTRL_LANE0, // Default: 16'h0000
			parameter_int_t E10GBASEX_PCS_TSTCTRL_LANE1, // Default: 16'h0000
			parameter_int_t E10GBASEX_PCS_TSTCTRL_LANE2, // Default: 16'h0000
			parameter_int_t E10GBASEX_PCS_TSTCTRL_LANE3, // Default: 16'h0000
			parameter_int_t GLBL0_NOISE_CTRL, // Default: 16'hF0B8
			parameter_int_t GLBL_AMON_SEL, // Default: 16'h0000
			parameter_int_t GLBL_DMON_SEL, // Default: 16'h0200
			parameter_int_t GLBL_PWR_CTRL, // Default: 16'h0000
			parameter_int_t GTH_CFG_PWRUP_LANE0, // Default: 1'b1
			parameter_int_t GTH_CFG_PWRUP_LANE1, // Default: 1'b1
			parameter_int_t GTH_CFG_PWRUP_LANE2, // Default: 1'b1
			parameter_int_t GTH_CFG_PWRUP_LANE3, // Default: 1'b1
			parameter_int_t LANE_AMON_SEL, // Default: 16'h00F0
			parameter_int_t LANE_DMON_SEL, // Default: 16'h0000
			parameter_int_t LANE_LNK_CFGOVRD, // Default: 16'h0000
			parameter_int_t LANE_PWR_CTRL_LANE0, // Default: 16'h0400
			parameter_int_t LANE_PWR_CTRL_LANE1, // Default: 16'h0400
			parameter_int_t LANE_PWR_CTRL_LANE2, // Default: 16'h0400
			parameter_int_t LANE_PWR_CTRL_LANE3, // Default: 16'h0400
			parameter_int_t LNK_TRN_CFG_LANE0, // Default: 16'h0000
			parameter_int_t LNK_TRN_CFG_LANE1, // Default: 16'h0000
			parameter_int_t LNK_TRN_CFG_LANE2, // Default: 16'h0000
			parameter_int_t LNK_TRN_CFG_LANE3, // Default: 16'h0000
			parameter_int_t LNK_TRN_COEFF_REQ_LANE0, // Default: 16'h0000
			parameter_int_t LNK_TRN_COEFF_REQ_LANE1, // Default: 16'h0000
			parameter_int_t LNK_TRN_COEFF_REQ_LANE2, // Default: 16'h0000
			parameter_int_t LNK_TRN_COEFF_REQ_LANE3, // Default: 16'h0000
			parameter_int_t MISC_CFG, // Default: 16'h0008
			parameter_int_t MODE_CFG1, // Default: 16'h0000
			parameter_int_t MODE_CFG2, // Default: 16'h0000
			parameter_int_t MODE_CFG3, // Default: 16'h0000
			parameter_int_t MODE_CFG4, // Default: 16'h0000
			parameter_int_t MODE_CFG5, // Default: 16'h0000
			parameter_int_t MODE_CFG6, // Default: 16'h0000
			parameter_int_t MODE_CFG7, // Default: 16'h0000
			parameter_int_t PCS_ABILITY_LANE0, // Default: 16'h0010
			parameter_int_t PCS_ABILITY_LANE1, // Default: 16'h0010
			parameter_int_t PCS_ABILITY_LANE2, // Default: 16'h0010
			parameter_int_t PCS_ABILITY_LANE3, // Default: 16'h0010
			parameter_int_t PCS_CTRL1_LANE0, // Default: 16'h2040
			parameter_int_t PCS_CTRL1_LANE1, // Default: 16'h2040
			parameter_int_t PCS_CTRL1_LANE2, // Default: 16'h2040
			parameter_int_t PCS_CTRL1_LANE3, // Default: 16'h2040
			parameter_int_t PCS_CTRL2_LANE0, // Default: 16'h0000
			parameter_int_t PCS_CTRL2_LANE1, // Default: 16'h0000
			parameter_int_t PCS_CTRL2_LANE2, // Default: 16'h0000
			parameter_int_t PCS_CTRL2_LANE3, // Default: 16'h0000
			parameter_int_t PCS_MISC_CFG_0_LANE0, // Default: 16'h1116
			parameter_int_t PCS_MISC_CFG_0_LANE1, // Default: 16'h1116
			parameter_int_t PCS_MISC_CFG_0_LANE2, // Default: 16'h1116
			parameter_int_t PCS_MISC_CFG_0_LANE3, // Default: 16'h1116
			parameter_int_t PCS_MISC_CFG_1_LANE0, // Default: 16'h0000
			parameter_int_t PCS_MISC_CFG_1_LANE1, // Default: 16'h0000
			parameter_int_t PCS_MISC_CFG_1_LANE2, // Default: 16'h0000
			parameter_int_t PCS_MISC_CFG_1_LANE3, // Default: 16'h0000
			parameter_int_t PCS_MODE_LANE0, // Default: 16'h0000
			parameter_int_t PCS_MODE_LANE1, // Default: 16'h0000
			parameter_int_t PCS_MODE_LANE2, // Default: 16'h0000
			parameter_int_t PCS_MODE_LANE3, // Default: 16'h0000
			parameter_int_t PCS_RESET_1_LANE0, // Default: 16'h0002
			parameter_int_t PCS_RESET_1_LANE1, // Default: 16'h0002
			parameter_int_t PCS_RESET_1_LANE2, // Default: 16'h0002
			parameter_int_t PCS_RESET_1_LANE3, // Default: 16'h0002
			parameter_int_t PCS_RESET_LANE0, // Default: 16'h0000
			parameter_int_t PCS_RESET_LANE1, // Default: 16'h0000
			parameter_int_t PCS_RESET_LANE2, // Default: 16'h0000
			parameter_int_t PCS_RESET_LANE3, // Default: 16'h0000
			parameter_int_t PCS_TYPE_LANE0, // Default: 16'h002C
			parameter_int_t PCS_TYPE_LANE1, // Default: 16'h002C
			parameter_int_t PCS_TYPE_LANE2, // Default: 16'h002C
			parameter_int_t PCS_TYPE_LANE3, // Default: 16'h002C
			parameter_int_t PLL_CFG0, // Default: 16'h95DF
			parameter_int_t PLL_CFG1, // Default: 16'h81C0
			parameter_int_t PLL_CFG2, // Default: 16'h0424
			parameter_int_t PMA_CTRL1_LANE0, // Default: 16'h0000
			parameter_int_t PMA_CTRL1_LANE1, // Default: 16'h0000
			parameter_int_t PMA_CTRL1_LANE2, // Default: 16'h0000
			parameter_int_t PMA_CTRL1_LANE3, // Default: 16'h0000
			parameter_int_t PMA_CTRL2_LANE0, // Default: 16'h000B
			parameter_int_t PMA_CTRL2_LANE1, // Default: 16'h000B
			parameter_int_t PMA_CTRL2_LANE2, // Default: 16'h000B
			parameter_int_t PMA_CTRL2_LANE3, // Default: 16'h000B
			parameter_int_t PMA_LPBK_CTRL_LANE0, // Default: 16'h0004
			parameter_int_t PMA_LPBK_CTRL_LANE1, // Default: 16'h0004
			parameter_int_t PMA_LPBK_CTRL_LANE2, // Default: 16'h0004
			parameter_int_t PMA_LPBK_CTRL_LANE3, // Default: 16'h0004
			parameter_int_t PRBS_BER_CFG0_LANE0, // Default: 16'h0000
			parameter_int_t PRBS_BER_CFG0_LANE1, // Default: 16'h0000
			parameter_int_t PRBS_BER_CFG0_LANE2, // Default: 16'h0000
			parameter_int_t PRBS_BER_CFG0_LANE3, // Default: 16'h0000
			parameter_int_t PRBS_BER_CFG1_LANE0, // Default: 16'h0000
			parameter_int_t PRBS_BER_CFG1_LANE1, // Default: 16'h0000
			parameter_int_t PRBS_BER_CFG1_LANE2, // Default: 16'h0000
			parameter_int_t PRBS_BER_CFG1_LANE3, // Default: 16'h0000
			parameter_int_t PRBS_CFG_LANE0, // Default: 16'h000A
			parameter_int_t PRBS_CFG_LANE1, // Default: 16'h000A
			parameter_int_t PRBS_CFG_LANE2, // Default: 16'h000A
			parameter_int_t PRBS_CFG_LANE3, // Default: 16'h000A
			parameter_int_t PTRN_CFG0_LSB, // Default: 16'h5555
			parameter_int_t PTRN_CFG0_MSB, // Default: 16'h5555
			parameter_int_t PTRN_LEN_CFG, // Default: 16'h001F
			parameter_int_t PWRUP_DLY, // Default: 16'h0000
			parameter_int_t RX_AEQ_VAL0_LANE0, // Default: 16'h03C0
			parameter_int_t RX_AEQ_VAL0_LANE1, // Default: 16'h03C0
			parameter_int_t RX_AEQ_VAL0_LANE2, // Default: 16'h03C0
			parameter_int_t RX_AEQ_VAL0_LANE3, // Default: 16'h03C0
			parameter_int_t RX_AEQ_VAL1_LANE0, // Default: 16'h0000
			parameter_int_t RX_AEQ_VAL1_LANE1, // Default: 16'h0000
			parameter_int_t RX_AEQ_VAL1_LANE2, // Default: 16'h0000
			parameter_int_t RX_AEQ_VAL1_LANE3, // Default: 16'h0000
			parameter_int_t RX_AGC_CTRL_LANE0, // Default: 16'h0000
			parameter_int_t RX_AGC_CTRL_LANE1, // Default: 16'h0000
			parameter_int_t RX_AGC_CTRL_LANE2, // Default: 16'h0000
			parameter_int_t RX_AGC_CTRL_LANE3, // Default: 16'h0000
			parameter_int_t RX_CDR_CTRL0_LANE0, // Default: 16'h0005
			parameter_int_t RX_CDR_CTRL0_LANE1, // Default: 16'h0005
			parameter_int_t RX_CDR_CTRL0_LANE2, // Default: 16'h0005
			parameter_int_t RX_CDR_CTRL0_LANE3, // Default: 16'h0005
			parameter_int_t RX_CDR_CTRL1_LANE0, // Default: 16'h4200
			parameter_int_t RX_CDR_CTRL1_LANE1, // Default: 16'h4200
			parameter_int_t RX_CDR_CTRL1_LANE2, // Default: 16'h4200
			parameter_int_t RX_CDR_CTRL1_LANE3, // Default: 16'h4200
			parameter_int_t RX_CDR_CTRL2_LANE0, // Default: 16'h2000
			parameter_int_t RX_CDR_CTRL2_LANE1, // Default: 16'h2000
			parameter_int_t RX_CDR_CTRL2_LANE2, // Default: 16'h2000
			parameter_int_t RX_CDR_CTRL2_LANE3, // Default: 16'h2000
			parameter_int_t RX_CFG0_LANE0, // Default: 16'h0500
			parameter_int_t RX_CFG0_LANE1, // Default: 16'h0500
			parameter_int_t RX_CFG0_LANE2, // Default: 16'h0500
			parameter_int_t RX_CFG0_LANE3, // Default: 16'h0500
			parameter_int_t RX_CFG1_LANE0, // Default: 16'h821F
			parameter_int_t RX_CFG1_LANE1, // Default: 16'h821F
			parameter_int_t RX_CFG1_LANE2, // Default: 16'h821F
			parameter_int_t RX_CFG1_LANE3, // Default: 16'h821F
			parameter_int_t RX_CFG2_LANE0, // Default: 16'h1001
			parameter_int_t RX_CFG2_LANE1, // Default: 16'h1001
			parameter_int_t RX_CFG2_LANE2, // Default: 16'h1001
			parameter_int_t RX_CFG2_LANE3, // Default: 16'h1001
			parameter_int_t RX_CTLE_CTRL_LANE0, // Default: 16'h008F
			parameter_int_t RX_CTLE_CTRL_LANE1, // Default: 16'h008F
			parameter_int_t RX_CTLE_CTRL_LANE2, // Default: 16'h008F
			parameter_int_t RX_CTLE_CTRL_LANE3, // Default: 16'h008F
			parameter_int_t RX_CTRL_OVRD_LANE0, // Default: 16'h000C
			parameter_int_t RX_CTRL_OVRD_LANE1, // Default: 16'h000C
			parameter_int_t RX_CTRL_OVRD_LANE2, // Default: 16'h000C
			parameter_int_t RX_CTRL_OVRD_LANE3, // Default: 16'h000C
			parameter_int_t RX_FABRIC_WIDTH0, // Default: 6466
			parameter_int_t RX_FABRIC_WIDTH1, // Default: 6466
			parameter_int_t RX_FABRIC_WIDTH2, // Default: 6466
			parameter_int_t RX_FABRIC_WIDTH3, // Default: 6466
			parameter_int_t RX_LOOP_CTRL_LANE0, // Default: 16'h007F
			parameter_int_t RX_LOOP_CTRL_LANE1, // Default: 16'h007F
			parameter_int_t RX_LOOP_CTRL_LANE2, // Default: 16'h007F
			parameter_int_t RX_LOOP_CTRL_LANE3, // Default: 16'h007F
			parameter_int_t RX_MVAL0_LANE0, // Default: 16'h0000
			parameter_int_t RX_MVAL0_LANE1, // Default: 16'h0000
			parameter_int_t RX_MVAL0_LANE2, // Default: 16'h0000
			parameter_int_t RX_MVAL0_LANE3, // Default: 16'h0000
			parameter_int_t RX_MVAL1_LANE0, // Default: 16'h0000
			parameter_int_t RX_MVAL1_LANE1, // Default: 16'h0000
			parameter_int_t RX_MVAL1_LANE2, // Default: 16'h0000
			parameter_int_t RX_MVAL1_LANE3, // Default: 16'h0000
			parameter_int_t RX_P0S_CTRL, // Default: 16'h1206
			parameter_int_t RX_P0_CTRL, // Default: 16'h11F0
			parameter_int_t RX_P1_CTRL, // Default: 16'h120F
			parameter_int_t RX_P2_CTRL, // Default: 16'h0E0F
			parameter_int_t RX_PI_CTRL0, // Default: 16'hD2F0
			parameter_int_t RX_PI_CTRL1, // Default: 16'h0080
			parameter_int_t SIM_GTHRESET_SPEEDUP, // Default: 1
			parameter_string_t SIM_VERSION, // Default: "1.0"
			parameter_int_t SLICE_CFG, // Default: 16'h0000
			parameter_int_t SLICE_NOISE_CTRL_0_LANE01, // Default: 16'h0000
			parameter_int_t SLICE_NOISE_CTRL_0_LANE23, // Default: 16'h0000
			parameter_int_t SLICE_NOISE_CTRL_1_LANE01, // Default: 16'h0000
			parameter_int_t SLICE_NOISE_CTRL_1_LANE23, // Default: 16'h0000
			parameter_int_t SLICE_NOISE_CTRL_2_LANE01, // Default: 16'h7FFF
			parameter_int_t SLICE_NOISE_CTRL_2_LANE23, // Default: 16'h7FFF
			parameter_int_t SLICE_TX_RESET_LANE01, // Default: 16'h0000
			parameter_int_t SLICE_TX_RESET_LANE23, // Default: 16'h0000
			parameter_int_t TERM_CTRL_LANE0, // Default: 16'h5007
			parameter_int_t TERM_CTRL_LANE1, // Default: 16'h5007
			parameter_int_t TERM_CTRL_LANE2, // Default: 16'h5007
			parameter_int_t TERM_CTRL_LANE3, // Default: 16'h5007
			parameter_int_t TX_CFG0_LANE0, // Default: 16'h203D
			parameter_int_t TX_CFG0_LANE1, // Default: 16'h203D
			parameter_int_t TX_CFG0_LANE2, // Default: 16'h203D
			parameter_int_t TX_CFG0_LANE3, // Default: 16'h203D
			parameter_int_t TX_CFG1_LANE0, // Default: 16'h0F00
			parameter_int_t TX_CFG1_LANE1, // Default: 16'h0F00
			parameter_int_t TX_CFG1_LANE2, // Default: 16'h0F00
			parameter_int_t TX_CFG1_LANE3, // Default: 16'h0F00
			parameter_int_t TX_CFG2_LANE0, // Default: 16'h0081
			parameter_int_t TX_CFG2_LANE1, // Default: 16'h0081
			parameter_int_t TX_CFG2_LANE2, // Default: 16'h0081
			parameter_int_t TX_CFG2_LANE3, // Default: 16'h0081
			parameter_int_t TX_CLK_SEL0_LANE0, // Default: 16'h2121
			parameter_int_t TX_CLK_SEL0_LANE1, // Default: 16'h2121
			parameter_int_t TX_CLK_SEL0_LANE2, // Default: 16'h2121
			parameter_int_t TX_CLK_SEL0_LANE3, // Default: 16'h2121
			parameter_int_t TX_CLK_SEL1_LANE0, // Default: 16'h2121
			parameter_int_t TX_CLK_SEL1_LANE1, // Default: 16'h2121
			parameter_int_t TX_CLK_SEL1_LANE2, // Default: 16'h2121
			parameter_int_t TX_CLK_SEL1_LANE3, // Default: 16'h2121
			parameter_int_t TX_DISABLE_LANE0, // Default: 16'h0000
			parameter_int_t TX_DISABLE_LANE1, // Default: 16'h0000
			parameter_int_t TX_DISABLE_LANE2, // Default: 16'h0000
			parameter_int_t TX_DISABLE_LANE3, // Default: 16'h0000
			parameter_int_t TX_FABRIC_WIDTH0, // Default: 6466
			parameter_int_t TX_FABRIC_WIDTH1, // Default: 6466
			parameter_int_t TX_FABRIC_WIDTH2, // Default: 6466
			parameter_int_t TX_FABRIC_WIDTH3, // Default: 6466
			parameter_int_t TX_P0P0S_CTRL, // Default: 16'h060C
			parameter_int_t TX_P1P2_CTRL, // Default: 16'h0C39
			parameter_int_t TX_PREEMPH_LANE0, // Default: 16'h00A1
			parameter_int_t TX_PREEMPH_LANE1, // Default: 16'h00A1
			parameter_int_t TX_PREEMPH_LANE2, // Default: 16'h00A1
			parameter_int_t TX_PREEMPH_LANE3, // Default: 16'h00A1
			parameter_int_t TX_PWR_RATE_OVRD_LANE0, // Default: 16'h0060
			parameter_int_t TX_PWR_RATE_OVRD_LANE1, // Default: 16'h0060
			parameter_int_t TX_PWR_RATE_OVRD_LANE2, // Default: 16'h0060
			parameter_int_t TX_PWR_RATE_OVRD_LANE3, // Default: 16'h0060
			//Verilog Ports in definition order:
			NetFlow* DRDY_A0_B, // net ID: DRDY lsb: 0  msb: 0 OUTPUT
			NetFlow* DRPDO_A0_B, // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			NetFlow* DRPDO_A1_B, // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			NetFlow* DRPDO_A2_B, // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			NetFlow* DRPDO_A3_B, // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			NetFlow* DRPDO_A4_B, // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			NetFlow* DRPDO_A5_B, // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			NetFlow* DRPDO_A6_B, // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			NetFlow* DRPDO_A7_B, // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			NetFlow* DRPDO_A8_B, // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			NetFlow* DRPDO_A9_B, // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			NetFlow* DRPDO_A10_B, // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			NetFlow* DRPDO_A11_B, // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			NetFlow* DRPDO_A12_B, // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			NetFlow* DRPDO_A13_B, // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			NetFlow* DRPDO_A14_B, // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			NetFlow* DRPDO_A15_B, // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			NetFlow* GTHINITDONE_A0_B, // net ID: GTHINITDONE lsb: 0  msb: 0 OUTPUT
			NetFlow* MGMTPCSRDACK_A0_B, // net ID: MGMTPCSRDACK lsb: 0  msb: 0 OUTPUT
			NetFlow* MGMTPCSRDDATA_A0_B, // net ID: MGMTPCSRDDATA lsb: 0  msb: 15 OUTPUT
			NetFlow* MGMTPCSRDDATA_A1_B, // net ID: MGMTPCSRDDATA lsb: 0  msb: 15 OUTPUT
			NetFlow* MGMTPCSRDDATA_A2_B, // net ID: MGMTPCSRDDATA lsb: 0  msb: 15 OUTPUT
			NetFlow* MGMTPCSRDDATA_A3_B, // net ID: MGMTPCSRDDATA lsb: 0  msb: 15 OUTPUT
			NetFlow* MGMTPCSRDDATA_A4_B, // net ID: MGMTPCSRDDATA lsb: 0  msb: 15 OUTPUT
			NetFlow* MGMTPCSRDDATA_A5_B, // net ID: MGMTPCSRDDATA lsb: 0  msb: 15 OUTPUT
			NetFlow* MGMTPCSRDDATA_A6_B, // net ID: MGMTPCSRDDATA lsb: 0  msb: 15 OUTPUT
			NetFlow* MGMTPCSRDDATA_A7_B, // net ID: MGMTPCSRDDATA lsb: 0  msb: 15 OUTPUT
			NetFlow* MGMTPCSRDDATA_A8_B, // net ID: MGMTPCSRDDATA lsb: 0  msb: 15 OUTPUT
			NetFlow* MGMTPCSRDDATA_A9_B, // net ID: MGMTPCSRDDATA lsb: 0  msb: 15 OUTPUT
			NetFlow* MGMTPCSRDDATA_A10_B, // net ID: MGMTPCSRDDATA lsb: 0  msb: 15 OUTPUT
			NetFlow* MGMTPCSRDDATA_A11_B, // net ID: MGMTPCSRDDATA lsb: 0  msb: 15 OUTPUT
			NetFlow* MGMTPCSRDDATA_A12_B, // net ID: MGMTPCSRDDATA lsb: 0  msb: 15 OUTPUT
			NetFlow* MGMTPCSRDDATA_A13_B, // net ID: MGMTPCSRDDATA lsb: 0  msb: 15 OUTPUT
			NetFlow* MGMTPCSRDDATA_A14_B, // net ID: MGMTPCSRDDATA lsb: 0  msb: 15 OUTPUT
			NetFlow* MGMTPCSRDDATA_A15_B, // net ID: MGMTPCSRDDATA lsb: 0  msb: 15 OUTPUT
			NetFlow* RXCODEERR0_A0_B, // net ID: RXCODEERR0 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXCODEERR0_A1_B, // net ID: RXCODEERR0 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXCODEERR0_A2_B, // net ID: RXCODEERR0 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXCODEERR0_A3_B, // net ID: RXCODEERR0 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXCODEERR0_A4_B, // net ID: RXCODEERR0 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXCODEERR0_A5_B, // net ID: RXCODEERR0 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXCODEERR0_A6_B, // net ID: RXCODEERR0 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXCODEERR0_A7_B, // net ID: RXCODEERR0 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXCODEERR1_A0_B, // net ID: RXCODEERR1 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXCODEERR1_A1_B, // net ID: RXCODEERR1 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXCODEERR1_A2_B, // net ID: RXCODEERR1 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXCODEERR1_A3_B, // net ID: RXCODEERR1 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXCODEERR1_A4_B, // net ID: RXCODEERR1 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXCODEERR1_A5_B, // net ID: RXCODEERR1 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXCODEERR1_A6_B, // net ID: RXCODEERR1 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXCODEERR1_A7_B, // net ID: RXCODEERR1 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXCODEERR2_A0_B, // net ID: RXCODEERR2 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXCODEERR2_A1_B, // net ID: RXCODEERR2 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXCODEERR2_A2_B, // net ID: RXCODEERR2 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXCODEERR2_A3_B, // net ID: RXCODEERR2 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXCODEERR2_A4_B, // net ID: RXCODEERR2 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXCODEERR2_A5_B, // net ID: RXCODEERR2 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXCODEERR2_A6_B, // net ID: RXCODEERR2 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXCODEERR2_A7_B, // net ID: RXCODEERR2 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXCODEERR3_A0_B, // net ID: RXCODEERR3 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXCODEERR3_A1_B, // net ID: RXCODEERR3 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXCODEERR3_A2_B, // net ID: RXCODEERR3 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXCODEERR3_A3_B, // net ID: RXCODEERR3 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXCODEERR3_A4_B, // net ID: RXCODEERR3 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXCODEERR3_A5_B, // net ID: RXCODEERR3 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXCODEERR3_A6_B, // net ID: RXCODEERR3 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXCODEERR3_A7_B, // net ID: RXCODEERR3 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXCTRL0_A0_B, // net ID: RXCTRL0 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXCTRL0_A1_B, // net ID: RXCTRL0 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXCTRL0_A2_B, // net ID: RXCTRL0 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXCTRL0_A3_B, // net ID: RXCTRL0 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXCTRL0_A4_B, // net ID: RXCTRL0 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXCTRL0_A5_B, // net ID: RXCTRL0 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXCTRL0_A6_B, // net ID: RXCTRL0 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXCTRL0_A7_B, // net ID: RXCTRL0 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXCTRL1_A0_B, // net ID: RXCTRL1 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXCTRL1_A1_B, // net ID: RXCTRL1 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXCTRL1_A2_B, // net ID: RXCTRL1 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXCTRL1_A3_B, // net ID: RXCTRL1 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXCTRL1_A4_B, // net ID: RXCTRL1 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXCTRL1_A5_B, // net ID: RXCTRL1 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXCTRL1_A6_B, // net ID: RXCTRL1 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXCTRL1_A7_B, // net ID: RXCTRL1 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXCTRL2_A0_B, // net ID: RXCTRL2 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXCTRL2_A1_B, // net ID: RXCTRL2 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXCTRL2_A2_B, // net ID: RXCTRL2 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXCTRL2_A3_B, // net ID: RXCTRL2 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXCTRL2_A4_B, // net ID: RXCTRL2 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXCTRL2_A5_B, // net ID: RXCTRL2 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXCTRL2_A6_B, // net ID: RXCTRL2 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXCTRL2_A7_B, // net ID: RXCTRL2 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXCTRL3_A0_B, // net ID: RXCTRL3 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXCTRL3_A1_B, // net ID: RXCTRL3 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXCTRL3_A2_B, // net ID: RXCTRL3 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXCTRL3_A3_B, // net ID: RXCTRL3 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXCTRL3_A4_B, // net ID: RXCTRL3 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXCTRL3_A5_B, // net ID: RXCTRL3 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXCTRL3_A6_B, // net ID: RXCTRL3 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXCTRL3_A7_B, // net ID: RXCTRL3 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXCTRLACK0_A0_B, // net ID: RXCTRLACK0 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXCTRLACK1_A0_B, // net ID: RXCTRLACK1 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXCTRLACK2_A0_B, // net ID: RXCTRLACK2 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXCTRLACK3_A0_B, // net ID: RXCTRLACK3 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXDATA0_A0_B, // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA0_A1_B, // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA0_A2_B, // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA0_A3_B, // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA0_A4_B, // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA0_A5_B, // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA0_A6_B, // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA0_A7_B, // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA0_A8_B, // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA0_A9_B, // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA0_A10_B, // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA0_A11_B, // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA0_A12_B, // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA0_A13_B, // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA0_A14_B, // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA0_A15_B, // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA0_A16_B, // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA0_A17_B, // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA0_A18_B, // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA0_A19_B, // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA0_A20_B, // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA0_A21_B, // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA0_A22_B, // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA0_A23_B, // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA0_A24_B, // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA0_A25_B, // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA0_A26_B, // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA0_A27_B, // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA0_A28_B, // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA0_A29_B, // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA0_A30_B, // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA0_A31_B, // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA0_A32_B, // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA0_A33_B, // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA0_A34_B, // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA0_A35_B, // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA0_A36_B, // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA0_A37_B, // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA0_A38_B, // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA0_A39_B, // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA0_A40_B, // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA0_A41_B, // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA0_A42_B, // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA0_A43_B, // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA0_A44_B, // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA0_A45_B, // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA0_A46_B, // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA0_A47_B, // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA0_A48_B, // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA0_A49_B, // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA0_A50_B, // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA0_A51_B, // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA0_A52_B, // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA0_A53_B, // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA0_A54_B, // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA0_A55_B, // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA0_A56_B, // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA0_A57_B, // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA0_A58_B, // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA0_A59_B, // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA0_A60_B, // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA0_A61_B, // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA0_A62_B, // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA0_A63_B, // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA1_A0_B, // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA1_A1_B, // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA1_A2_B, // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA1_A3_B, // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA1_A4_B, // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA1_A5_B, // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA1_A6_B, // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA1_A7_B, // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA1_A8_B, // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA1_A9_B, // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA1_A10_B, // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA1_A11_B, // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA1_A12_B, // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA1_A13_B, // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA1_A14_B, // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA1_A15_B, // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA1_A16_B, // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA1_A17_B, // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA1_A18_B, // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA1_A19_B, // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA1_A20_B, // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA1_A21_B, // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA1_A22_B, // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA1_A23_B, // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA1_A24_B, // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA1_A25_B, // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA1_A26_B, // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA1_A27_B, // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA1_A28_B, // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA1_A29_B, // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA1_A30_B, // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA1_A31_B, // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA1_A32_B, // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA1_A33_B, // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA1_A34_B, // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA1_A35_B, // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA1_A36_B, // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA1_A37_B, // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA1_A38_B, // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA1_A39_B, // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA1_A40_B, // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA1_A41_B, // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA1_A42_B, // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA1_A43_B, // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA1_A44_B, // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA1_A45_B, // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA1_A46_B, // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA1_A47_B, // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA1_A48_B, // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA1_A49_B, // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA1_A50_B, // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA1_A51_B, // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA1_A52_B, // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA1_A53_B, // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA1_A54_B, // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA1_A55_B, // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA1_A56_B, // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA1_A57_B, // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA1_A58_B, // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA1_A59_B, // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA1_A60_B, // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA1_A61_B, // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA1_A62_B, // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA1_A63_B, // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA2_A0_B, // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA2_A1_B, // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA2_A2_B, // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA2_A3_B, // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA2_A4_B, // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA2_A5_B, // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA2_A6_B, // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA2_A7_B, // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA2_A8_B, // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA2_A9_B, // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA2_A10_B, // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA2_A11_B, // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA2_A12_B, // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA2_A13_B, // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA2_A14_B, // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA2_A15_B, // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA2_A16_B, // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA2_A17_B, // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA2_A18_B, // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA2_A19_B, // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA2_A20_B, // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA2_A21_B, // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA2_A22_B, // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA2_A23_B, // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA2_A24_B, // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA2_A25_B, // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA2_A26_B, // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA2_A27_B, // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA2_A28_B, // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA2_A29_B, // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA2_A30_B, // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA2_A31_B, // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA2_A32_B, // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA2_A33_B, // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA2_A34_B, // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA2_A35_B, // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA2_A36_B, // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA2_A37_B, // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA2_A38_B, // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA2_A39_B, // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA2_A40_B, // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA2_A41_B, // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA2_A42_B, // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA2_A43_B, // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA2_A44_B, // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA2_A45_B, // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA2_A46_B, // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA2_A47_B, // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA2_A48_B, // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA2_A49_B, // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA2_A50_B, // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA2_A51_B, // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA2_A52_B, // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA2_A53_B, // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA2_A54_B, // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA2_A55_B, // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA2_A56_B, // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA2_A57_B, // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA2_A58_B, // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA2_A59_B, // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA2_A60_B, // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA2_A61_B, // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA2_A62_B, // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA2_A63_B, // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA3_A0_B, // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA3_A1_B, // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA3_A2_B, // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA3_A3_B, // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA3_A4_B, // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA3_A5_B, // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA3_A6_B, // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA3_A7_B, // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA3_A8_B, // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA3_A9_B, // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA3_A10_B, // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA3_A11_B, // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA3_A12_B, // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA3_A13_B, // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA3_A14_B, // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA3_A15_B, // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA3_A16_B, // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA3_A17_B, // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA3_A18_B, // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA3_A19_B, // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA3_A20_B, // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA3_A21_B, // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA3_A22_B, // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA3_A23_B, // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA3_A24_B, // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA3_A25_B, // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA3_A26_B, // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA3_A27_B, // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA3_A28_B, // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA3_A29_B, // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA3_A30_B, // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA3_A31_B, // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA3_A32_B, // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA3_A33_B, // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA3_A34_B, // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA3_A35_B, // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA3_A36_B, // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA3_A37_B, // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA3_A38_B, // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA3_A39_B, // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA3_A40_B, // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA3_A41_B, // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA3_A42_B, // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA3_A43_B, // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA3_A44_B, // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA3_A45_B, // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA3_A46_B, // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA3_A47_B, // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA3_A48_B, // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA3_A49_B, // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA3_A50_B, // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA3_A51_B, // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA3_A52_B, // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA3_A53_B, // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA3_A54_B, // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA3_A55_B, // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA3_A56_B, // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA3_A57_B, // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA3_A58_B, // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA3_A59_B, // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA3_A60_B, // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA3_A61_B, // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA3_A62_B, // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA3_A63_B, // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATATAP0_A0_B, // net ID: RXDATATAP0 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXDATATAP1_A0_B, // net ID: RXDATATAP1 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXDATATAP2_A0_B, // net ID: RXDATATAP2 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXDATATAP3_A0_B, // net ID: RXDATATAP3 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXDISPERR0_A0_B, // net ID: RXDISPERR0 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXDISPERR0_A1_B, // net ID: RXDISPERR0 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXDISPERR0_A2_B, // net ID: RXDISPERR0 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXDISPERR0_A3_B, // net ID: RXDISPERR0 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXDISPERR0_A4_B, // net ID: RXDISPERR0 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXDISPERR0_A5_B, // net ID: RXDISPERR0 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXDISPERR0_A6_B, // net ID: RXDISPERR0 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXDISPERR0_A7_B, // net ID: RXDISPERR0 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXDISPERR1_A0_B, // net ID: RXDISPERR1 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXDISPERR1_A1_B, // net ID: RXDISPERR1 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXDISPERR1_A2_B, // net ID: RXDISPERR1 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXDISPERR1_A3_B, // net ID: RXDISPERR1 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXDISPERR1_A4_B, // net ID: RXDISPERR1 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXDISPERR1_A5_B, // net ID: RXDISPERR1 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXDISPERR1_A6_B, // net ID: RXDISPERR1 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXDISPERR1_A7_B, // net ID: RXDISPERR1 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXDISPERR2_A0_B, // net ID: RXDISPERR2 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXDISPERR2_A1_B, // net ID: RXDISPERR2 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXDISPERR2_A2_B, // net ID: RXDISPERR2 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXDISPERR2_A3_B, // net ID: RXDISPERR2 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXDISPERR2_A4_B, // net ID: RXDISPERR2 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXDISPERR2_A5_B, // net ID: RXDISPERR2 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXDISPERR2_A6_B, // net ID: RXDISPERR2 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXDISPERR2_A7_B, // net ID: RXDISPERR2 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXDISPERR3_A0_B, // net ID: RXDISPERR3 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXDISPERR3_A1_B, // net ID: RXDISPERR3 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXDISPERR3_A2_B, // net ID: RXDISPERR3 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXDISPERR3_A3_B, // net ID: RXDISPERR3 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXDISPERR3_A4_B, // net ID: RXDISPERR3 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXDISPERR3_A5_B, // net ID: RXDISPERR3 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXDISPERR3_A6_B, // net ID: RXDISPERR3 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXDISPERR3_A7_B, // net ID: RXDISPERR3 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXPCSCLKSMPL0_A0_B, // net ID: RXPCSCLKSMPL0 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXPCSCLKSMPL1_A0_B, // net ID: RXPCSCLKSMPL1 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXPCSCLKSMPL2_A0_B, // net ID: RXPCSCLKSMPL2 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXPCSCLKSMPL3_A0_B, // net ID: RXPCSCLKSMPL3 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXUSERCLKOUT0_A0_B, // net ID: RXUSERCLKOUT0 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXUSERCLKOUT1_A0_B, // net ID: RXUSERCLKOUT1 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXUSERCLKOUT2_A0_B, // net ID: RXUSERCLKOUT2 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXUSERCLKOUT3_A0_B, // net ID: RXUSERCLKOUT3 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXVALID0_A0_B, // net ID: RXVALID0 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXVALID0_A1_B, // net ID: RXVALID0 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXVALID0_A2_B, // net ID: RXVALID0 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXVALID0_A3_B, // net ID: RXVALID0 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXVALID0_A4_B, // net ID: RXVALID0 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXVALID0_A5_B, // net ID: RXVALID0 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXVALID0_A6_B, // net ID: RXVALID0 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXVALID0_A7_B, // net ID: RXVALID0 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXVALID1_A0_B, // net ID: RXVALID1 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXVALID1_A1_B, // net ID: RXVALID1 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXVALID1_A2_B, // net ID: RXVALID1 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXVALID1_A3_B, // net ID: RXVALID1 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXVALID1_A4_B, // net ID: RXVALID1 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXVALID1_A5_B, // net ID: RXVALID1 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXVALID1_A6_B, // net ID: RXVALID1 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXVALID1_A7_B, // net ID: RXVALID1 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXVALID2_A0_B, // net ID: RXVALID2 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXVALID2_A1_B, // net ID: RXVALID2 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXVALID2_A2_B, // net ID: RXVALID2 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXVALID2_A3_B, // net ID: RXVALID2 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXVALID2_A4_B, // net ID: RXVALID2 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXVALID2_A5_B, // net ID: RXVALID2 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXVALID2_A6_B, // net ID: RXVALID2 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXVALID2_A7_B, // net ID: RXVALID2 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXVALID3_A0_B, // net ID: RXVALID3 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXVALID3_A1_B, // net ID: RXVALID3 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXVALID3_A2_B, // net ID: RXVALID3 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXVALID3_A3_B, // net ID: RXVALID3 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXVALID3_A4_B, // net ID: RXVALID3 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXVALID3_A5_B, // net ID: RXVALID3 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXVALID3_A6_B, // net ID: RXVALID3 lsb: 0  msb: 7 OUTPUT
			NetFlow* RXVALID3_A7_B, // net ID: RXVALID3 lsb: 0  msb: 7 OUTPUT
			NetFlow* TSTPATH_A0_B, // net ID: TSTPATH lsb: 0  msb: 0 OUTPUT
			NetFlow* TSTREFCLKFAB_A0_B, // net ID: TSTREFCLKFAB lsb: 0  msb: 0 OUTPUT
			NetFlow* TSTREFCLKOUT_A0_B, // net ID: TSTREFCLKOUT lsb: 0  msb: 0 OUTPUT
			NetFlow* TXCTRLACK0_A0_B, // net ID: TXCTRLACK0 lsb: 0  msb: 0 OUTPUT
			NetFlow* TXCTRLACK1_A0_B, // net ID: TXCTRLACK1 lsb: 0  msb: 0 OUTPUT
			NetFlow* TXCTRLACK2_A0_B, // net ID: TXCTRLACK2 lsb: 0  msb: 0 OUTPUT
			NetFlow* TXCTRLACK3_A0_B, // net ID: TXCTRLACK3 lsb: 0  msb: 0 OUTPUT
			NetFlow* TXDATATAP10_A0_B, // net ID: TXDATATAP10 lsb: 0  msb: 0 OUTPUT
			NetFlow* TXDATATAP11_A0_B, // net ID: TXDATATAP11 lsb: 0  msb: 0 OUTPUT
			NetFlow* TXDATATAP12_A0_B, // net ID: TXDATATAP12 lsb: 0  msb: 0 OUTPUT
			NetFlow* TXDATATAP13_A0_B, // net ID: TXDATATAP13 lsb: 0  msb: 0 OUTPUT
			NetFlow* TXDATATAP20_A0_B, // net ID: TXDATATAP20 lsb: 0  msb: 0 OUTPUT
			NetFlow* TXDATATAP21_A0_B, // net ID: TXDATATAP21 lsb: 0  msb: 0 OUTPUT
			NetFlow* TXDATATAP22_A0_B, // net ID: TXDATATAP22 lsb: 0  msb: 0 OUTPUT
			NetFlow* TXDATATAP23_A0_B, // net ID: TXDATATAP23 lsb: 0  msb: 0 OUTPUT
			NetFlow* TXN0_A0_B, // net ID: TXN0 lsb: 0  msb: 0 OUTPUT
			NetFlow* TXN1_A0_B, // net ID: TXN1 lsb: 0  msb: 0 OUTPUT
			NetFlow* TXN2_A0_B, // net ID: TXN2 lsb: 0  msb: 0 OUTPUT
			NetFlow* TXN3_A0_B, // net ID: TXN3 lsb: 0  msb: 0 OUTPUT
			NetFlow* TXP0_A0_B, // net ID: TXP0 lsb: 0  msb: 0 OUTPUT
			NetFlow* TXP1_A0_B, // net ID: TXP1 lsb: 0  msb: 0 OUTPUT
			NetFlow* TXP2_A0_B, // net ID: TXP2 lsb: 0  msb: 0 OUTPUT
			NetFlow* TXP3_A0_B, // net ID: TXP3 lsb: 0  msb: 0 OUTPUT
			NetFlow* TXPCSCLKSMPL0_A0_B, // net ID: TXPCSCLKSMPL0 lsb: 0  msb: 0 OUTPUT
			NetFlow* TXPCSCLKSMPL1_A0_B, // net ID: TXPCSCLKSMPL1 lsb: 0  msb: 0 OUTPUT
			NetFlow* TXPCSCLKSMPL2_A0_B, // net ID: TXPCSCLKSMPL2 lsb: 0  msb: 0 OUTPUT
			NetFlow* TXPCSCLKSMPL3_A0_B, // net ID: TXPCSCLKSMPL3 lsb: 0  msb: 0 OUTPUT
			NetFlow* TXUSERCLKOUT0_A0_B, // net ID: TXUSERCLKOUT0 lsb: 0  msb: 0 OUTPUT
			NetFlow* TXUSERCLKOUT1_A0_B, // net ID: TXUSERCLKOUT1 lsb: 0  msb: 0 OUTPUT
			NetFlow* TXUSERCLKOUT2_A0_B, // net ID: TXUSERCLKOUT2 lsb: 0  msb: 0 OUTPUT
			NetFlow* TXUSERCLKOUT3_A0_B, // net ID: TXUSERCLKOUT3 lsb: 0  msb: 0 OUTPUT
			NetFlow* DADDR_A0_B, // net ID: DADDR lsb: 0  msb: 15 INPUT
			NetFlow* DADDR_A1_B, // net ID: DADDR lsb: 0  msb: 15 INPUT
			NetFlow* DADDR_A2_B, // net ID: DADDR lsb: 0  msb: 15 INPUT
			NetFlow* DADDR_A3_B, // net ID: DADDR lsb: 0  msb: 15 INPUT
			NetFlow* DADDR_A4_B, // net ID: DADDR lsb: 0  msb: 15 INPUT
			NetFlow* DADDR_A5_B, // net ID: DADDR lsb: 0  msb: 15 INPUT
			NetFlow* DADDR_A6_B, // net ID: DADDR lsb: 0  msb: 15 INPUT
			NetFlow* DADDR_A7_B, // net ID: DADDR lsb: 0  msb: 15 INPUT
			NetFlow* DADDR_A8_B, // net ID: DADDR lsb: 0  msb: 15 INPUT
			NetFlow* DADDR_A9_B, // net ID: DADDR lsb: 0  msb: 15 INPUT
			NetFlow* DADDR_A10_B, // net ID: DADDR lsb: 0  msb: 15 INPUT
			NetFlow* DADDR_A11_B, // net ID: DADDR lsb: 0  msb: 15 INPUT
			NetFlow* DADDR_A12_B, // net ID: DADDR lsb: 0  msb: 15 INPUT
			NetFlow* DADDR_A13_B, // net ID: DADDR lsb: 0  msb: 15 INPUT
			NetFlow* DADDR_A14_B, // net ID: DADDR lsb: 0  msb: 15 INPUT
			NetFlow* DADDR_A15_B, // net ID: DADDR lsb: 0  msb: 15 INPUT
			NetFlow* DCLK_A0_B, // net ID: DCLK lsb: 0  msb: 0 INPUT
			NetFlow* DEN_A0_B, // net ID: DEN lsb: 0  msb: 0 INPUT
			NetFlow* DFETRAINCTRL0_A0_B, // net ID: DFETRAINCTRL0 lsb: 0  msb: 0 INPUT
			NetFlow* DFETRAINCTRL1_A0_B, // net ID: DFETRAINCTRL1 lsb: 0  msb: 0 INPUT
			NetFlow* DFETRAINCTRL2_A0_B, // net ID: DFETRAINCTRL2 lsb: 0  msb: 0 INPUT
			NetFlow* DFETRAINCTRL3_A0_B, // net ID: DFETRAINCTRL3 lsb: 0  msb: 0 INPUT
			NetFlow* DI_A0_B, // net ID: DI lsb: 0  msb: 15 INPUT
			NetFlow* DI_A1_B, // net ID: DI lsb: 0  msb: 15 INPUT
			NetFlow* DI_A2_B, // net ID: DI lsb: 0  msb: 15 INPUT
			NetFlow* DI_A3_B, // net ID: DI lsb: 0  msb: 15 INPUT
			NetFlow* DI_A4_B, // net ID: DI lsb: 0  msb: 15 INPUT
			NetFlow* DI_A5_B, // net ID: DI lsb: 0  msb: 15 INPUT
			NetFlow* DI_A6_B, // net ID: DI lsb: 0  msb: 15 INPUT
			NetFlow* DI_A7_B, // net ID: DI lsb: 0  msb: 15 INPUT
			NetFlow* DI_A8_B, // net ID: DI lsb: 0  msb: 15 INPUT
			NetFlow* DI_A9_B, // net ID: DI lsb: 0  msb: 15 INPUT
			NetFlow* DI_A10_B, // net ID: DI lsb: 0  msb: 15 INPUT
			NetFlow* DI_A11_B, // net ID: DI lsb: 0  msb: 15 INPUT
			NetFlow* DI_A12_B, // net ID: DI lsb: 0  msb: 15 INPUT
			NetFlow* DI_A13_B, // net ID: DI lsb: 0  msb: 15 INPUT
			NetFlow* DI_A14_B, // net ID: DI lsb: 0  msb: 15 INPUT
			NetFlow* DI_A15_B, // net ID: DI lsb: 0  msb: 15 INPUT
			NetFlow* DISABLEDRP_A0_B, // net ID: DISABLEDRP lsb: 0  msb: 0 INPUT
			NetFlow* DWE_A0_B, // net ID: DWE lsb: 0  msb: 0 INPUT
			NetFlow* GTHINIT_A0_B, // net ID: GTHINIT lsb: 0  msb: 0 INPUT
			NetFlow* GTHRESET_A0_B, // net ID: GTHRESET lsb: 0  msb: 0 INPUT
			NetFlow* GTHX2LANE01_A0_B, // net ID: GTHX2LANE01 lsb: 0  msb: 0 INPUT
			NetFlow* GTHX2LANE23_A0_B, // net ID: GTHX2LANE23 lsb: 0  msb: 0 INPUT
			NetFlow* GTHX4LANE_A0_B, // net ID: GTHX4LANE lsb: 0  msb: 0 INPUT
			NetFlow* MGMTPCSLANESEL_A0_B, // net ID: MGMTPCSLANESEL lsb: 0  msb: 3 INPUT
			NetFlow* MGMTPCSLANESEL_A1_B, // net ID: MGMTPCSLANESEL lsb: 0  msb: 3 INPUT
			NetFlow* MGMTPCSLANESEL_A2_B, // net ID: MGMTPCSLANESEL lsb: 0  msb: 3 INPUT
			NetFlow* MGMTPCSLANESEL_A3_B, // net ID: MGMTPCSLANESEL lsb: 0  msb: 3 INPUT
			NetFlow* MGMTPCSMMDADDR_A0_B, // net ID: MGMTPCSMMDADDR lsb: 0  msb: 4 INPUT
			NetFlow* MGMTPCSMMDADDR_A1_B, // net ID: MGMTPCSMMDADDR lsb: 0  msb: 4 INPUT
			NetFlow* MGMTPCSMMDADDR_A2_B, // net ID: MGMTPCSMMDADDR lsb: 0  msb: 4 INPUT
			NetFlow* MGMTPCSMMDADDR_A3_B, // net ID: MGMTPCSMMDADDR lsb: 0  msb: 4 INPUT
			NetFlow* MGMTPCSMMDADDR_A4_B, // net ID: MGMTPCSMMDADDR lsb: 0  msb: 4 INPUT
			NetFlow* MGMTPCSREGADDR_A0_B, // net ID: MGMTPCSREGADDR lsb: 0  msb: 15 INPUT
			NetFlow* MGMTPCSREGADDR_A1_B, // net ID: MGMTPCSREGADDR lsb: 0  msb: 15 INPUT
			NetFlow* MGMTPCSREGADDR_A2_B, // net ID: MGMTPCSREGADDR lsb: 0  msb: 15 INPUT
			NetFlow* MGMTPCSREGADDR_A3_B, // net ID: MGMTPCSREGADDR lsb: 0  msb: 15 INPUT
			NetFlow* MGMTPCSREGADDR_A4_B, // net ID: MGMTPCSREGADDR lsb: 0  msb: 15 INPUT
			NetFlow* MGMTPCSREGADDR_A5_B, // net ID: MGMTPCSREGADDR lsb: 0  msb: 15 INPUT
			NetFlow* MGMTPCSREGADDR_A6_B, // net ID: MGMTPCSREGADDR lsb: 0  msb: 15 INPUT
			NetFlow* MGMTPCSREGADDR_A7_B, // net ID: MGMTPCSREGADDR lsb: 0  msb: 15 INPUT
			NetFlow* MGMTPCSREGADDR_A8_B, // net ID: MGMTPCSREGADDR lsb: 0  msb: 15 INPUT
			NetFlow* MGMTPCSREGADDR_A9_B, // net ID: MGMTPCSREGADDR lsb: 0  msb: 15 INPUT
			NetFlow* MGMTPCSREGADDR_A10_B, // net ID: MGMTPCSREGADDR lsb: 0  msb: 15 INPUT
			NetFlow* MGMTPCSREGADDR_A11_B, // net ID: MGMTPCSREGADDR lsb: 0  msb: 15 INPUT
			NetFlow* MGMTPCSREGADDR_A12_B, // net ID: MGMTPCSREGADDR lsb: 0  msb: 15 INPUT
			NetFlow* MGMTPCSREGADDR_A13_B, // net ID: MGMTPCSREGADDR lsb: 0  msb: 15 INPUT
			NetFlow* MGMTPCSREGADDR_A14_B, // net ID: MGMTPCSREGADDR lsb: 0  msb: 15 INPUT
			NetFlow* MGMTPCSREGADDR_A15_B, // net ID: MGMTPCSREGADDR lsb: 0  msb: 15 INPUT
			NetFlow* MGMTPCSREGRD_A0_B, // net ID: MGMTPCSREGRD lsb: 0  msb: 0 INPUT
			NetFlow* MGMTPCSREGWR_A0_B, // net ID: MGMTPCSREGWR lsb: 0  msb: 0 INPUT
			NetFlow* MGMTPCSWRDATA_A0_B, // net ID: MGMTPCSWRDATA lsb: 0  msb: 15 INPUT
			NetFlow* MGMTPCSWRDATA_A1_B, // net ID: MGMTPCSWRDATA lsb: 0  msb: 15 INPUT
			NetFlow* MGMTPCSWRDATA_A2_B, // net ID: MGMTPCSWRDATA lsb: 0  msb: 15 INPUT
			NetFlow* MGMTPCSWRDATA_A3_B, // net ID: MGMTPCSWRDATA lsb: 0  msb: 15 INPUT
			NetFlow* MGMTPCSWRDATA_A4_B, // net ID: MGMTPCSWRDATA lsb: 0  msb: 15 INPUT
			NetFlow* MGMTPCSWRDATA_A5_B, // net ID: MGMTPCSWRDATA lsb: 0  msb: 15 INPUT
			NetFlow* MGMTPCSWRDATA_A6_B, // net ID: MGMTPCSWRDATA lsb: 0  msb: 15 INPUT
			NetFlow* MGMTPCSWRDATA_A7_B, // net ID: MGMTPCSWRDATA lsb: 0  msb: 15 INPUT
			NetFlow* MGMTPCSWRDATA_A8_B, // net ID: MGMTPCSWRDATA lsb: 0  msb: 15 INPUT
			NetFlow* MGMTPCSWRDATA_A9_B, // net ID: MGMTPCSWRDATA lsb: 0  msb: 15 INPUT
			NetFlow* MGMTPCSWRDATA_A10_B, // net ID: MGMTPCSWRDATA lsb: 0  msb: 15 INPUT
			NetFlow* MGMTPCSWRDATA_A11_B, // net ID: MGMTPCSWRDATA lsb: 0  msb: 15 INPUT
			NetFlow* MGMTPCSWRDATA_A12_B, // net ID: MGMTPCSWRDATA lsb: 0  msb: 15 INPUT
			NetFlow* MGMTPCSWRDATA_A13_B, // net ID: MGMTPCSWRDATA lsb: 0  msb: 15 INPUT
			NetFlow* MGMTPCSWRDATA_A14_B, // net ID: MGMTPCSWRDATA lsb: 0  msb: 15 INPUT
			NetFlow* MGMTPCSWRDATA_A15_B, // net ID: MGMTPCSWRDATA lsb: 0  msb: 15 INPUT
			NetFlow* PLLPCSCLKDIV_A0_B, // net ID: PLLPCSCLKDIV lsb: 0  msb: 5 INPUT
			NetFlow* PLLPCSCLKDIV_A1_B, // net ID: PLLPCSCLKDIV lsb: 0  msb: 5 INPUT
			NetFlow* PLLPCSCLKDIV_A2_B, // net ID: PLLPCSCLKDIV lsb: 0  msb: 5 INPUT
			NetFlow* PLLPCSCLKDIV_A3_B, // net ID: PLLPCSCLKDIV lsb: 0  msb: 5 INPUT
			NetFlow* PLLPCSCLKDIV_A4_B, // net ID: PLLPCSCLKDIV lsb: 0  msb: 5 INPUT
			NetFlow* PLLPCSCLKDIV_A5_B, // net ID: PLLPCSCLKDIV lsb: 0  msb: 5 INPUT
			NetFlow* PLLREFCLKSEL_A0_B, // net ID: PLLREFCLKSEL lsb: 0  msb: 2 INPUT
			NetFlow* PLLREFCLKSEL_A1_B, // net ID: PLLREFCLKSEL lsb: 0  msb: 2 INPUT
			NetFlow* PLLREFCLKSEL_A2_B, // net ID: PLLREFCLKSEL lsb: 0  msb: 2 INPUT
			NetFlow* POWERDOWN0_A0_B, // net ID: POWERDOWN0 lsb: 0  msb: 0 INPUT
			NetFlow* POWERDOWN1_A0_B, // net ID: POWERDOWN1 lsb: 0  msb: 0 INPUT
			NetFlow* POWERDOWN2_A0_B, // net ID: POWERDOWN2 lsb: 0  msb: 0 INPUT
			NetFlow* POWERDOWN3_A0_B, // net ID: POWERDOWN3 lsb: 0  msb: 0 INPUT
			NetFlow* REFCLK_A0_B, // net ID: REFCLK lsb: 0  msb: 0 INPUT
			NetFlow* RXBUFRESET0_A0_B, // net ID: RXBUFRESET0 lsb: 0  msb: 0 INPUT
			NetFlow* RXBUFRESET1_A0_B, // net ID: RXBUFRESET1 lsb: 0  msb: 0 INPUT
			NetFlow* RXBUFRESET2_A0_B, // net ID: RXBUFRESET2 lsb: 0  msb: 0 INPUT
			NetFlow* RXBUFRESET3_A0_B, // net ID: RXBUFRESET3 lsb: 0  msb: 0 INPUT
			NetFlow* RXENCOMMADET0_A0_B, // net ID: RXENCOMMADET0 lsb: 0  msb: 0 INPUT
			NetFlow* RXENCOMMADET1_A0_B, // net ID: RXENCOMMADET1 lsb: 0  msb: 0 INPUT
			NetFlow* RXENCOMMADET2_A0_B, // net ID: RXENCOMMADET2 lsb: 0  msb: 0 INPUT
			NetFlow* RXENCOMMADET3_A0_B, // net ID: RXENCOMMADET3 lsb: 0  msb: 0 INPUT
			NetFlow* RXN0_A0_B, // net ID: RXN0 lsb: 0  msb: 0 INPUT
			NetFlow* RXN1_A0_B, // net ID: RXN1 lsb: 0  msb: 0 INPUT
			NetFlow* RXN2_A0_B, // net ID: RXN2 lsb: 0  msb: 0 INPUT
			NetFlow* RXN3_A0_B, // net ID: RXN3 lsb: 0  msb: 0 INPUT
			NetFlow* RXP0_A0_B, // net ID: RXP0 lsb: 0  msb: 0 INPUT
			NetFlow* RXP1_A0_B, // net ID: RXP1 lsb: 0  msb: 0 INPUT
			NetFlow* RXP2_A0_B, // net ID: RXP2 lsb: 0  msb: 0 INPUT
			NetFlow* RXP3_A0_B, // net ID: RXP3 lsb: 0  msb: 0 INPUT
			NetFlow* RXPOLARITY0_A0_B, // net ID: RXPOLARITY0 lsb: 0  msb: 0 INPUT
			NetFlow* RXPOLARITY1_A0_B, // net ID: RXPOLARITY1 lsb: 0  msb: 0 INPUT
			NetFlow* RXPOLARITY2_A0_B, // net ID: RXPOLARITY2 lsb: 0  msb: 0 INPUT
			NetFlow* RXPOLARITY3_A0_B, // net ID: RXPOLARITY3 lsb: 0  msb: 0 INPUT
			NetFlow* RXPOWERDOWN0_A0_B, // net ID: RXPOWERDOWN0 lsb: 0  msb: 1 INPUT
			NetFlow* RXPOWERDOWN0_A1_B, // net ID: RXPOWERDOWN0 lsb: 0  msb: 1 INPUT
			NetFlow* RXPOWERDOWN1_A0_B, // net ID: RXPOWERDOWN1 lsb: 0  msb: 1 INPUT
			NetFlow* RXPOWERDOWN1_A1_B, // net ID: RXPOWERDOWN1 lsb: 0  msb: 1 INPUT
			NetFlow* RXPOWERDOWN2_A0_B, // net ID: RXPOWERDOWN2 lsb: 0  msb: 1 INPUT
			NetFlow* RXPOWERDOWN2_A1_B, // net ID: RXPOWERDOWN2 lsb: 0  msb: 1 INPUT
			NetFlow* RXPOWERDOWN3_A0_B, // net ID: RXPOWERDOWN3 lsb: 0  msb: 1 INPUT
			NetFlow* RXPOWERDOWN3_A1_B, // net ID: RXPOWERDOWN3 lsb: 0  msb: 1 INPUT
			NetFlow* RXRATE0_A0_B, // net ID: RXRATE0 lsb: 0  msb: 1 INPUT
			NetFlow* RXRATE0_A1_B, // net ID: RXRATE0 lsb: 0  msb: 1 INPUT
			NetFlow* RXRATE1_A0_B, // net ID: RXRATE1 lsb: 0  msb: 1 INPUT
			NetFlow* RXRATE1_A1_B, // net ID: RXRATE1 lsb: 0  msb: 1 INPUT
			NetFlow* RXRATE2_A0_B, // net ID: RXRATE2 lsb: 0  msb: 1 INPUT
			NetFlow* RXRATE2_A1_B, // net ID: RXRATE2 lsb: 0  msb: 1 INPUT
			NetFlow* RXRATE3_A0_B, // net ID: RXRATE3 lsb: 0  msb: 1 INPUT
			NetFlow* RXRATE3_A1_B, // net ID: RXRATE3 lsb: 0  msb: 1 INPUT
			NetFlow* RXSLIP0_A0_B, // net ID: RXSLIP0 lsb: 0  msb: 0 INPUT
			NetFlow* RXSLIP1_A0_B, // net ID: RXSLIP1 lsb: 0  msb: 0 INPUT
			NetFlow* RXSLIP2_A0_B, // net ID: RXSLIP2 lsb: 0  msb: 0 INPUT
			NetFlow* RXSLIP3_A0_B, // net ID: RXSLIP3 lsb: 0  msb: 0 INPUT
			NetFlow* RXUSERCLKIN0_A0_B, // net ID: RXUSERCLKIN0 lsb: 0  msb: 0 INPUT
			NetFlow* RXUSERCLKIN1_A0_B, // net ID: RXUSERCLKIN1 lsb: 0  msb: 0 INPUT
			NetFlow* RXUSERCLKIN2_A0_B, // net ID: RXUSERCLKIN2 lsb: 0  msb: 0 INPUT
			NetFlow* RXUSERCLKIN3_A0_B, // net ID: RXUSERCLKIN3 lsb: 0  msb: 0 INPUT
			NetFlow* SAMPLERATE0_A0_B, // net ID: SAMPLERATE0 lsb: 0  msb: 2 INPUT
			NetFlow* SAMPLERATE0_A1_B, // net ID: SAMPLERATE0 lsb: 0  msb: 2 INPUT
			NetFlow* SAMPLERATE0_A2_B, // net ID: SAMPLERATE0 lsb: 0  msb: 2 INPUT
			NetFlow* SAMPLERATE1_A0_B, // net ID: SAMPLERATE1 lsb: 0  msb: 2 INPUT
			NetFlow* SAMPLERATE1_A1_B, // net ID: SAMPLERATE1 lsb: 0  msb: 2 INPUT
			NetFlow* SAMPLERATE1_A2_B, // net ID: SAMPLERATE1 lsb: 0  msb: 2 INPUT
			NetFlow* SAMPLERATE2_A0_B, // net ID: SAMPLERATE2 lsb: 0  msb: 2 INPUT
			NetFlow* SAMPLERATE2_A1_B, // net ID: SAMPLERATE2 lsb: 0  msb: 2 INPUT
			NetFlow* SAMPLERATE2_A2_B, // net ID: SAMPLERATE2 lsb: 0  msb: 2 INPUT
			NetFlow* SAMPLERATE3_A0_B, // net ID: SAMPLERATE3 lsb: 0  msb: 2 INPUT
			NetFlow* SAMPLERATE3_A1_B, // net ID: SAMPLERATE3 lsb: 0  msb: 2 INPUT
			NetFlow* SAMPLERATE3_A2_B, // net ID: SAMPLERATE3 lsb: 0  msb: 2 INPUT
			NetFlow* TXBUFRESET0_A0_B, // net ID: TXBUFRESET0 lsb: 0  msb: 0 INPUT
			NetFlow* TXBUFRESET1_A0_B, // net ID: TXBUFRESET1 lsb: 0  msb: 0 INPUT
			NetFlow* TXBUFRESET2_A0_B, // net ID: TXBUFRESET2 lsb: 0  msb: 0 INPUT
			NetFlow* TXBUFRESET3_A0_B, // net ID: TXBUFRESET3 lsb: 0  msb: 0 INPUT
			NetFlow* TXCTRL0_A0_B, // net ID: TXCTRL0 lsb: 0  msb: 7 INPUT
			NetFlow* TXCTRL0_A1_B, // net ID: TXCTRL0 lsb: 0  msb: 7 INPUT
			NetFlow* TXCTRL0_A2_B, // net ID: TXCTRL0 lsb: 0  msb: 7 INPUT
			NetFlow* TXCTRL0_A3_B, // net ID: TXCTRL0 lsb: 0  msb: 7 INPUT
			NetFlow* TXCTRL0_A4_B, // net ID: TXCTRL0 lsb: 0  msb: 7 INPUT
			NetFlow* TXCTRL0_A5_B, // net ID: TXCTRL0 lsb: 0  msb: 7 INPUT
			NetFlow* TXCTRL0_A6_B, // net ID: TXCTRL0 lsb: 0  msb: 7 INPUT
			NetFlow* TXCTRL0_A7_B, // net ID: TXCTRL0 lsb: 0  msb: 7 INPUT
			NetFlow* TXCTRL1_A0_B, // net ID: TXCTRL1 lsb: 0  msb: 7 INPUT
			NetFlow* TXCTRL1_A1_B, // net ID: TXCTRL1 lsb: 0  msb: 7 INPUT
			NetFlow* TXCTRL1_A2_B, // net ID: TXCTRL1 lsb: 0  msb: 7 INPUT
			NetFlow* TXCTRL1_A3_B, // net ID: TXCTRL1 lsb: 0  msb: 7 INPUT
			NetFlow* TXCTRL1_A4_B, // net ID: TXCTRL1 lsb: 0  msb: 7 INPUT
			NetFlow* TXCTRL1_A5_B, // net ID: TXCTRL1 lsb: 0  msb: 7 INPUT
			NetFlow* TXCTRL1_A6_B, // net ID: TXCTRL1 lsb: 0  msb: 7 INPUT
			NetFlow* TXCTRL1_A7_B, // net ID: TXCTRL1 lsb: 0  msb: 7 INPUT
			NetFlow* TXCTRL2_A0_B, // net ID: TXCTRL2 lsb: 0  msb: 7 INPUT
			NetFlow* TXCTRL2_A1_B, // net ID: TXCTRL2 lsb: 0  msb: 7 INPUT
			NetFlow* TXCTRL2_A2_B, // net ID: TXCTRL2 lsb: 0  msb: 7 INPUT
			NetFlow* TXCTRL2_A3_B, // net ID: TXCTRL2 lsb: 0  msb: 7 INPUT
			NetFlow* TXCTRL2_A4_B, // net ID: TXCTRL2 lsb: 0  msb: 7 INPUT
			NetFlow* TXCTRL2_A5_B, // net ID: TXCTRL2 lsb: 0  msb: 7 INPUT
			NetFlow* TXCTRL2_A6_B, // net ID: TXCTRL2 lsb: 0  msb: 7 INPUT
			NetFlow* TXCTRL2_A7_B, // net ID: TXCTRL2 lsb: 0  msb: 7 INPUT
			NetFlow* TXCTRL3_A0_B, // net ID: TXCTRL3 lsb: 0  msb: 7 INPUT
			NetFlow* TXCTRL3_A1_B, // net ID: TXCTRL3 lsb: 0  msb: 7 INPUT
			NetFlow* TXCTRL3_A2_B, // net ID: TXCTRL3 lsb: 0  msb: 7 INPUT
			NetFlow* TXCTRL3_A3_B, // net ID: TXCTRL3 lsb: 0  msb: 7 INPUT
			NetFlow* TXCTRL3_A4_B, // net ID: TXCTRL3 lsb: 0  msb: 7 INPUT
			NetFlow* TXCTRL3_A5_B, // net ID: TXCTRL3 lsb: 0  msb: 7 INPUT
			NetFlow* TXCTRL3_A6_B, // net ID: TXCTRL3 lsb: 0  msb: 7 INPUT
			NetFlow* TXCTRL3_A7_B, // net ID: TXCTRL3 lsb: 0  msb: 7 INPUT
			NetFlow* TXDATA0_A0_B, // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA0_A1_B, // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA0_A2_B, // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA0_A3_B, // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA0_A4_B, // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA0_A5_B, // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA0_A6_B, // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA0_A7_B, // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA0_A8_B, // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA0_A9_B, // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA0_A10_B, // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA0_A11_B, // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA0_A12_B, // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA0_A13_B, // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA0_A14_B, // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA0_A15_B, // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA0_A16_B, // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA0_A17_B, // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA0_A18_B, // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA0_A19_B, // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA0_A20_B, // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA0_A21_B, // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA0_A22_B, // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA0_A23_B, // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA0_A24_B, // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA0_A25_B, // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA0_A26_B, // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA0_A27_B, // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA0_A28_B, // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA0_A29_B, // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA0_A30_B, // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA0_A31_B, // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA0_A32_B, // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA0_A33_B, // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA0_A34_B, // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA0_A35_B, // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA0_A36_B, // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA0_A37_B, // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA0_A38_B, // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA0_A39_B, // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA0_A40_B, // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA0_A41_B, // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA0_A42_B, // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA0_A43_B, // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA0_A44_B, // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA0_A45_B, // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA0_A46_B, // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA0_A47_B, // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA0_A48_B, // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA0_A49_B, // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA0_A50_B, // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA0_A51_B, // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA0_A52_B, // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA0_A53_B, // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA0_A54_B, // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA0_A55_B, // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA0_A56_B, // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA0_A57_B, // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA0_A58_B, // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA0_A59_B, // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA0_A60_B, // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA0_A61_B, // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA0_A62_B, // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA0_A63_B, // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA1_A0_B, // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA1_A1_B, // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA1_A2_B, // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA1_A3_B, // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA1_A4_B, // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA1_A5_B, // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA1_A6_B, // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA1_A7_B, // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA1_A8_B, // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA1_A9_B, // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA1_A10_B, // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA1_A11_B, // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA1_A12_B, // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA1_A13_B, // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA1_A14_B, // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA1_A15_B, // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA1_A16_B, // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA1_A17_B, // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA1_A18_B, // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA1_A19_B, // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA1_A20_B, // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA1_A21_B, // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA1_A22_B, // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA1_A23_B, // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA1_A24_B, // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA1_A25_B, // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA1_A26_B, // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA1_A27_B, // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA1_A28_B, // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA1_A29_B, // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA1_A30_B, // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA1_A31_B, // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA1_A32_B, // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA1_A33_B, // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA1_A34_B, // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA1_A35_B, // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA1_A36_B, // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA1_A37_B, // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA1_A38_B, // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA1_A39_B, // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA1_A40_B, // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA1_A41_B, // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA1_A42_B, // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA1_A43_B, // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA1_A44_B, // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA1_A45_B, // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA1_A46_B, // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA1_A47_B, // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA1_A48_B, // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA1_A49_B, // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA1_A50_B, // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA1_A51_B, // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA1_A52_B, // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA1_A53_B, // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA1_A54_B, // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA1_A55_B, // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA1_A56_B, // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA1_A57_B, // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA1_A58_B, // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA1_A59_B, // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA1_A60_B, // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA1_A61_B, // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA1_A62_B, // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA1_A63_B, // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA2_A0_B, // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA2_A1_B, // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA2_A2_B, // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA2_A3_B, // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA2_A4_B, // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA2_A5_B, // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA2_A6_B, // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA2_A7_B, // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA2_A8_B, // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA2_A9_B, // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA2_A10_B, // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA2_A11_B, // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA2_A12_B, // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA2_A13_B, // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA2_A14_B, // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA2_A15_B, // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA2_A16_B, // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA2_A17_B, // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA2_A18_B, // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA2_A19_B, // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA2_A20_B, // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA2_A21_B, // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA2_A22_B, // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA2_A23_B, // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA2_A24_B, // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA2_A25_B, // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA2_A26_B, // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA2_A27_B, // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA2_A28_B, // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA2_A29_B, // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA2_A30_B, // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA2_A31_B, // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA2_A32_B, // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA2_A33_B, // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA2_A34_B, // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA2_A35_B, // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA2_A36_B, // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA2_A37_B, // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA2_A38_B, // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA2_A39_B, // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA2_A40_B, // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA2_A41_B, // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA2_A42_B, // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA2_A43_B, // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA2_A44_B, // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA2_A45_B, // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA2_A46_B, // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA2_A47_B, // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA2_A48_B, // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA2_A49_B, // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA2_A50_B, // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA2_A51_B, // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA2_A52_B, // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA2_A53_B, // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA2_A54_B, // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA2_A55_B, // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA2_A56_B, // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA2_A57_B, // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA2_A58_B, // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA2_A59_B, // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA2_A60_B, // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA2_A61_B, // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA2_A62_B, // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA2_A63_B, // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA3_A0_B, // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA3_A1_B, // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA3_A2_B, // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA3_A3_B, // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA3_A4_B, // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA3_A5_B, // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA3_A6_B, // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA3_A7_B, // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA3_A8_B, // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA3_A9_B, // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA3_A10_B, // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA3_A11_B, // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA3_A12_B, // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA3_A13_B, // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA3_A14_B, // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA3_A15_B, // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA3_A16_B, // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA3_A17_B, // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA3_A18_B, // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA3_A19_B, // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA3_A20_B, // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA3_A21_B, // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA3_A22_B, // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA3_A23_B, // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA3_A24_B, // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA3_A25_B, // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA3_A26_B, // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA3_A27_B, // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA3_A28_B, // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA3_A29_B, // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA3_A30_B, // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA3_A31_B, // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA3_A32_B, // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA3_A33_B, // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA3_A34_B, // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA3_A35_B, // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA3_A36_B, // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA3_A37_B, // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA3_A38_B, // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA3_A39_B, // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA3_A40_B, // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA3_A41_B, // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA3_A42_B, // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA3_A43_B, // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA3_A44_B, // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA3_A45_B, // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA3_A46_B, // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA3_A47_B, // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA3_A48_B, // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA3_A49_B, // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA3_A50_B, // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA3_A51_B, // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA3_A52_B, // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA3_A53_B, // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA3_A54_B, // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA3_A55_B, // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA3_A56_B, // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA3_A57_B, // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA3_A58_B, // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA3_A59_B, // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA3_A60_B, // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA3_A61_B, // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA3_A62_B, // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA3_A63_B, // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATAMSB0_A0_B, // net ID: TXDATAMSB0 lsb: 0  msb: 7 INPUT
			NetFlow* TXDATAMSB0_A1_B, // net ID: TXDATAMSB0 lsb: 0  msb: 7 INPUT
			NetFlow* TXDATAMSB0_A2_B, // net ID: TXDATAMSB0 lsb: 0  msb: 7 INPUT
			NetFlow* TXDATAMSB0_A3_B, // net ID: TXDATAMSB0 lsb: 0  msb: 7 INPUT
			NetFlow* TXDATAMSB0_A4_B, // net ID: TXDATAMSB0 lsb: 0  msb: 7 INPUT
			NetFlow* TXDATAMSB0_A5_B, // net ID: TXDATAMSB0 lsb: 0  msb: 7 INPUT
			NetFlow* TXDATAMSB0_A6_B, // net ID: TXDATAMSB0 lsb: 0  msb: 7 INPUT
			NetFlow* TXDATAMSB0_A7_B, // net ID: TXDATAMSB0 lsb: 0  msb: 7 INPUT
			NetFlow* TXDATAMSB1_A0_B, // net ID: TXDATAMSB1 lsb: 0  msb: 7 INPUT
			NetFlow* TXDATAMSB1_A1_B, // net ID: TXDATAMSB1 lsb: 0  msb: 7 INPUT
			NetFlow* TXDATAMSB1_A2_B, // net ID: TXDATAMSB1 lsb: 0  msb: 7 INPUT
			NetFlow* TXDATAMSB1_A3_B, // net ID: TXDATAMSB1 lsb: 0  msb: 7 INPUT
			NetFlow* TXDATAMSB1_A4_B, // net ID: TXDATAMSB1 lsb: 0  msb: 7 INPUT
			NetFlow* TXDATAMSB1_A5_B, // net ID: TXDATAMSB1 lsb: 0  msb: 7 INPUT
			NetFlow* TXDATAMSB1_A6_B, // net ID: TXDATAMSB1 lsb: 0  msb: 7 INPUT
			NetFlow* TXDATAMSB1_A7_B, // net ID: TXDATAMSB1 lsb: 0  msb: 7 INPUT
			NetFlow* TXDATAMSB2_A0_B, // net ID: TXDATAMSB2 lsb: 0  msb: 7 INPUT
			NetFlow* TXDATAMSB2_A1_B, // net ID: TXDATAMSB2 lsb: 0  msb: 7 INPUT
			NetFlow* TXDATAMSB2_A2_B, // net ID: TXDATAMSB2 lsb: 0  msb: 7 INPUT
			NetFlow* TXDATAMSB2_A3_B, // net ID: TXDATAMSB2 lsb: 0  msb: 7 INPUT
			NetFlow* TXDATAMSB2_A4_B, // net ID: TXDATAMSB2 lsb: 0  msb: 7 INPUT
			NetFlow* TXDATAMSB2_A5_B, // net ID: TXDATAMSB2 lsb: 0  msb: 7 INPUT
			NetFlow* TXDATAMSB2_A6_B, // net ID: TXDATAMSB2 lsb: 0  msb: 7 INPUT
			NetFlow* TXDATAMSB2_A7_B, // net ID: TXDATAMSB2 lsb: 0  msb: 7 INPUT
			NetFlow* TXDATAMSB3_A0_B, // net ID: TXDATAMSB3 lsb: 0  msb: 7 INPUT
			NetFlow* TXDATAMSB3_A1_B, // net ID: TXDATAMSB3 lsb: 0  msb: 7 INPUT
			NetFlow* TXDATAMSB3_A2_B, // net ID: TXDATAMSB3 lsb: 0  msb: 7 INPUT
			NetFlow* TXDATAMSB3_A3_B, // net ID: TXDATAMSB3 lsb: 0  msb: 7 INPUT
			NetFlow* TXDATAMSB3_A4_B, // net ID: TXDATAMSB3 lsb: 0  msb: 7 INPUT
			NetFlow* TXDATAMSB3_A5_B, // net ID: TXDATAMSB3 lsb: 0  msb: 7 INPUT
			NetFlow* TXDATAMSB3_A6_B, // net ID: TXDATAMSB3 lsb: 0  msb: 7 INPUT
			NetFlow* TXDATAMSB3_A7_B, // net ID: TXDATAMSB3 lsb: 0  msb: 7 INPUT
			NetFlow* TXDEEMPH0_A0_B, // net ID: TXDEEMPH0 lsb: 0  msb: 0 INPUT
			NetFlow* TXDEEMPH1_A0_B, // net ID: TXDEEMPH1 lsb: 0  msb: 0 INPUT
			NetFlow* TXDEEMPH2_A0_B, // net ID: TXDEEMPH2 lsb: 0  msb: 0 INPUT
			NetFlow* TXDEEMPH3_A0_B, // net ID: TXDEEMPH3 lsb: 0  msb: 0 INPUT
			NetFlow* TXMARGIN0_A0_B, // net ID: TXMARGIN0 lsb: 0  msb: 2 INPUT
			NetFlow* TXMARGIN0_A1_B, // net ID: TXMARGIN0 lsb: 0  msb: 2 INPUT
			NetFlow* TXMARGIN0_A2_B, // net ID: TXMARGIN0 lsb: 0  msb: 2 INPUT
			NetFlow* TXMARGIN1_A0_B, // net ID: TXMARGIN1 lsb: 0  msb: 2 INPUT
			NetFlow* TXMARGIN1_A1_B, // net ID: TXMARGIN1 lsb: 0  msb: 2 INPUT
			NetFlow* TXMARGIN1_A2_B, // net ID: TXMARGIN1 lsb: 0  msb: 2 INPUT
			NetFlow* TXMARGIN2_A0_B, // net ID: TXMARGIN2 lsb: 0  msb: 2 INPUT
			NetFlow* TXMARGIN2_A1_B, // net ID: TXMARGIN2 lsb: 0  msb: 2 INPUT
			NetFlow* TXMARGIN2_A2_B, // net ID: TXMARGIN2 lsb: 0  msb: 2 INPUT
			NetFlow* TXMARGIN3_A0_B, // net ID: TXMARGIN3 lsb: 0  msb: 2 INPUT
			NetFlow* TXMARGIN3_A1_B, // net ID: TXMARGIN3 lsb: 0  msb: 2 INPUT
			NetFlow* TXMARGIN3_A2_B, // net ID: TXMARGIN3 lsb: 0  msb: 2 INPUT
			NetFlow* TXPOWERDOWN0_A0_B, // net ID: TXPOWERDOWN0 lsb: 0  msb: 1 INPUT
			NetFlow* TXPOWERDOWN0_A1_B, // net ID: TXPOWERDOWN0 lsb: 0  msb: 1 INPUT
			NetFlow* TXPOWERDOWN1_A0_B, // net ID: TXPOWERDOWN1 lsb: 0  msb: 1 INPUT
			NetFlow* TXPOWERDOWN1_A1_B, // net ID: TXPOWERDOWN1 lsb: 0  msb: 1 INPUT
			NetFlow* TXPOWERDOWN2_A0_B, // net ID: TXPOWERDOWN2 lsb: 0  msb: 1 INPUT
			NetFlow* TXPOWERDOWN2_A1_B, // net ID: TXPOWERDOWN2 lsb: 0  msb: 1 INPUT
			NetFlow* TXPOWERDOWN3_A0_B, // net ID: TXPOWERDOWN3 lsb: 0  msb: 1 INPUT
			NetFlow* TXPOWERDOWN3_A1_B, // net ID: TXPOWERDOWN3 lsb: 0  msb: 1 INPUT
			NetFlow* TXRATE0_A0_B, // net ID: TXRATE0 lsb: 0  msb: 1 INPUT
			NetFlow* TXRATE0_A1_B, // net ID: TXRATE0 lsb: 0  msb: 1 INPUT
			NetFlow* TXRATE1_A0_B, // net ID: TXRATE1 lsb: 0  msb: 1 INPUT
			NetFlow* TXRATE1_A1_B, // net ID: TXRATE1 lsb: 0  msb: 1 INPUT
			NetFlow* TXRATE2_A0_B, // net ID: TXRATE2 lsb: 0  msb: 1 INPUT
			NetFlow* TXRATE2_A1_B, // net ID: TXRATE2 lsb: 0  msb: 1 INPUT
			NetFlow* TXRATE3_A0_B, // net ID: TXRATE3 lsb: 0  msb: 1 INPUT
			NetFlow* TXRATE3_A1_B, // net ID: TXRATE3 lsb: 0  msb: 1 INPUT
			NetFlow* TXUSERCLKIN0_A0_B, // net ID: TXUSERCLKIN0 lsb: 0  msb: 0 INPUT
			NetFlow* TXUSERCLKIN1_A0_B, // net ID: TXUSERCLKIN1 lsb: 0  msb: 0 INPUT
			NetFlow* TXUSERCLKIN2_A0_B, // net ID: TXUSERCLKIN2 lsb: 0  msb: 0 INPUT
			NetFlow* TXUSERCLKIN3_A0_B // net ID: TXUSERCLKIN3 lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->LOC = LOC; // Default: "UNPLACED"
			this->BER_CONST_PTRN0 = BER_CONST_PTRN0; // Default: 16'h0000
			this->BER_CONST_PTRN1 = BER_CONST_PTRN1; // Default: 16'h0000
			this->BUFFER_CONFIG_LANE0 = BUFFER_CONFIG_LANE0; // Default: 16'h4004
			this->BUFFER_CONFIG_LANE1 = BUFFER_CONFIG_LANE1; // Default: 16'h4004
			this->BUFFER_CONFIG_LANE2 = BUFFER_CONFIG_LANE2; // Default: 16'h4004
			this->BUFFER_CONFIG_LANE3 = BUFFER_CONFIG_LANE3; // Default: 16'h4004
			this->DFE_TRAIN_CTRL_LANE0 = DFE_TRAIN_CTRL_LANE0; // Default: 16'h0000
			this->DFE_TRAIN_CTRL_LANE1 = DFE_TRAIN_CTRL_LANE1; // Default: 16'h0000
			this->DFE_TRAIN_CTRL_LANE2 = DFE_TRAIN_CTRL_LANE2; // Default: 16'h0000
			this->DFE_TRAIN_CTRL_LANE3 = DFE_TRAIN_CTRL_LANE3; // Default: 16'h0000
			this->DLL_CFG0 = DLL_CFG0; // Default: 16'h8202
			this->DLL_CFG1 = DLL_CFG1; // Default: 16'h0000
			this->E10GBASEKR_LD_COEFF_UPD_LANE0 = E10GBASEKR_LD_COEFF_UPD_LANE0; // Default: 16'h0000
			this->E10GBASEKR_LD_COEFF_UPD_LANE1 = E10GBASEKR_LD_COEFF_UPD_LANE1; // Default: 16'h0000
			this->E10GBASEKR_LD_COEFF_UPD_LANE2 = E10GBASEKR_LD_COEFF_UPD_LANE2; // Default: 16'h0000
			this->E10GBASEKR_LD_COEFF_UPD_LANE3 = E10GBASEKR_LD_COEFF_UPD_LANE3; // Default: 16'h0000
			this->E10GBASEKR_LP_COEFF_UPD_LANE0 = E10GBASEKR_LP_COEFF_UPD_LANE0; // Default: 16'h0000
			this->E10GBASEKR_LP_COEFF_UPD_LANE1 = E10GBASEKR_LP_COEFF_UPD_LANE1; // Default: 16'h0000
			this->E10GBASEKR_LP_COEFF_UPD_LANE2 = E10GBASEKR_LP_COEFF_UPD_LANE2; // Default: 16'h0000
			this->E10GBASEKR_LP_COEFF_UPD_LANE3 = E10GBASEKR_LP_COEFF_UPD_LANE3; // Default: 16'h0000
			this->E10GBASEKR_PMA_CTRL_LANE0 = E10GBASEKR_PMA_CTRL_LANE0; // Default: 16'h0002
			this->E10GBASEKR_PMA_CTRL_LANE1 = E10GBASEKR_PMA_CTRL_LANE1; // Default: 16'h0002
			this->E10GBASEKR_PMA_CTRL_LANE2 = E10GBASEKR_PMA_CTRL_LANE2; // Default: 16'h0002
			this->E10GBASEKR_PMA_CTRL_LANE3 = E10GBASEKR_PMA_CTRL_LANE3; // Default: 16'h0002
			this->E10GBASEKX_CTRL_LANE0 = E10GBASEKX_CTRL_LANE0; // Default: 16'h0000
			this->E10GBASEKX_CTRL_LANE1 = E10GBASEKX_CTRL_LANE1; // Default: 16'h0000
			this->E10GBASEKX_CTRL_LANE2 = E10GBASEKX_CTRL_LANE2; // Default: 16'h0000
			this->E10GBASEKX_CTRL_LANE3 = E10GBASEKX_CTRL_LANE3; // Default: 16'h0000
			this->E10GBASER_PCS_CFG_LANE0 = E10GBASER_PCS_CFG_LANE0; // Default: 16'h070C
			this->E10GBASER_PCS_CFG_LANE1 = E10GBASER_PCS_CFG_LANE1; // Default: 16'h070C
			this->E10GBASER_PCS_CFG_LANE2 = E10GBASER_PCS_CFG_LANE2; // Default: 16'h070C
			this->E10GBASER_PCS_CFG_LANE3 = E10GBASER_PCS_CFG_LANE3; // Default: 16'h070C
			this->E10GBASER_PCS_SEEDA0_LANE0 = E10GBASER_PCS_SEEDA0_LANE0; // Default: 16'h0001
			this->E10GBASER_PCS_SEEDA0_LANE1 = E10GBASER_PCS_SEEDA0_LANE1; // Default: 16'h0001
			this->E10GBASER_PCS_SEEDA0_LANE2 = E10GBASER_PCS_SEEDA0_LANE2; // Default: 16'h0001
			this->E10GBASER_PCS_SEEDA0_LANE3 = E10GBASER_PCS_SEEDA0_LANE3; // Default: 16'h0001
			this->E10GBASER_PCS_SEEDA1_LANE0 = E10GBASER_PCS_SEEDA1_LANE0; // Default: 16'h0000
			this->E10GBASER_PCS_SEEDA1_LANE1 = E10GBASER_PCS_SEEDA1_LANE1; // Default: 16'h0000
			this->E10GBASER_PCS_SEEDA1_LANE2 = E10GBASER_PCS_SEEDA1_LANE2; // Default: 16'h0000
			this->E10GBASER_PCS_SEEDA1_LANE3 = E10GBASER_PCS_SEEDA1_LANE3; // Default: 16'h0000
			this->E10GBASER_PCS_SEEDA2_LANE0 = E10GBASER_PCS_SEEDA2_LANE0; // Default: 16'h0000
			this->E10GBASER_PCS_SEEDA2_LANE1 = E10GBASER_PCS_SEEDA2_LANE1; // Default: 16'h0000
			this->E10GBASER_PCS_SEEDA2_LANE2 = E10GBASER_PCS_SEEDA2_LANE2; // Default: 16'h0000
			this->E10GBASER_PCS_SEEDA2_LANE3 = E10GBASER_PCS_SEEDA2_LANE3; // Default: 16'h0000
			this->E10GBASER_PCS_SEEDA3_LANE0 = E10GBASER_PCS_SEEDA3_LANE0; // Default: 16'h0000
			this->E10GBASER_PCS_SEEDA3_LANE1 = E10GBASER_PCS_SEEDA3_LANE1; // Default: 16'h0000
			this->E10GBASER_PCS_SEEDA3_LANE2 = E10GBASER_PCS_SEEDA3_LANE2; // Default: 16'h0000
			this->E10GBASER_PCS_SEEDA3_LANE3 = E10GBASER_PCS_SEEDA3_LANE3; // Default: 16'h0000
			this->E10GBASER_PCS_SEEDB0_LANE0 = E10GBASER_PCS_SEEDB0_LANE0; // Default: 16'h0001
			this->E10GBASER_PCS_SEEDB0_LANE1 = E10GBASER_PCS_SEEDB0_LANE1; // Default: 16'h0001
			this->E10GBASER_PCS_SEEDB0_LANE2 = E10GBASER_PCS_SEEDB0_LANE2; // Default: 16'h0001
			this->E10GBASER_PCS_SEEDB0_LANE3 = E10GBASER_PCS_SEEDB0_LANE3; // Default: 16'h0001
			this->E10GBASER_PCS_SEEDB1_LANE0 = E10GBASER_PCS_SEEDB1_LANE0; // Default: 16'h0000
			this->E10GBASER_PCS_SEEDB1_LANE1 = E10GBASER_PCS_SEEDB1_LANE1; // Default: 16'h0000
			this->E10GBASER_PCS_SEEDB1_LANE2 = E10GBASER_PCS_SEEDB1_LANE2; // Default: 16'h0000
			this->E10GBASER_PCS_SEEDB1_LANE3 = E10GBASER_PCS_SEEDB1_LANE3; // Default: 16'h0000
			this->E10GBASER_PCS_SEEDB2_LANE0 = E10GBASER_PCS_SEEDB2_LANE0; // Default: 16'h0000
			this->E10GBASER_PCS_SEEDB2_LANE1 = E10GBASER_PCS_SEEDB2_LANE1; // Default: 16'h0000
			this->E10GBASER_PCS_SEEDB2_LANE2 = E10GBASER_PCS_SEEDB2_LANE2; // Default: 16'h0000
			this->E10GBASER_PCS_SEEDB2_LANE3 = E10GBASER_PCS_SEEDB2_LANE3; // Default: 16'h0000
			this->E10GBASER_PCS_SEEDB3_LANE0 = E10GBASER_PCS_SEEDB3_LANE0; // Default: 16'h0000
			this->E10GBASER_PCS_SEEDB3_LANE1 = E10GBASER_PCS_SEEDB3_LANE1; // Default: 16'h0000
			this->E10GBASER_PCS_SEEDB3_LANE2 = E10GBASER_PCS_SEEDB3_LANE2; // Default: 16'h0000
			this->E10GBASER_PCS_SEEDB3_LANE3 = E10GBASER_PCS_SEEDB3_LANE3; // Default: 16'h0000
			this->E10GBASER_PCS_TEST_CTRL_LANE0 = E10GBASER_PCS_TEST_CTRL_LANE0; // Default: 16'h0000
			this->E10GBASER_PCS_TEST_CTRL_LANE1 = E10GBASER_PCS_TEST_CTRL_LANE1; // Default: 16'h0000
			this->E10GBASER_PCS_TEST_CTRL_LANE2 = E10GBASER_PCS_TEST_CTRL_LANE2; // Default: 16'h0000
			this->E10GBASER_PCS_TEST_CTRL_LANE3 = E10GBASER_PCS_TEST_CTRL_LANE3; // Default: 16'h0000
			this->E10GBASEX_PCS_TSTCTRL_LANE0 = E10GBASEX_PCS_TSTCTRL_LANE0; // Default: 16'h0000
			this->E10GBASEX_PCS_TSTCTRL_LANE1 = E10GBASEX_PCS_TSTCTRL_LANE1; // Default: 16'h0000
			this->E10GBASEX_PCS_TSTCTRL_LANE2 = E10GBASEX_PCS_TSTCTRL_LANE2; // Default: 16'h0000
			this->E10GBASEX_PCS_TSTCTRL_LANE3 = E10GBASEX_PCS_TSTCTRL_LANE3; // Default: 16'h0000
			this->GLBL0_NOISE_CTRL = GLBL0_NOISE_CTRL; // Default: 16'hF0B8
			this->GLBL_AMON_SEL = GLBL_AMON_SEL; // Default: 16'h0000
			this->GLBL_DMON_SEL = GLBL_DMON_SEL; // Default: 16'h0200
			this->GLBL_PWR_CTRL = GLBL_PWR_CTRL; // Default: 16'h0000
			this->GTH_CFG_PWRUP_LANE0 = GTH_CFG_PWRUP_LANE0; // Default: 1'b1
			this->GTH_CFG_PWRUP_LANE1 = GTH_CFG_PWRUP_LANE1; // Default: 1'b1
			this->GTH_CFG_PWRUP_LANE2 = GTH_CFG_PWRUP_LANE2; // Default: 1'b1
			this->GTH_CFG_PWRUP_LANE3 = GTH_CFG_PWRUP_LANE3; // Default: 1'b1
			this->LANE_AMON_SEL = LANE_AMON_SEL; // Default: 16'h00F0
			this->LANE_DMON_SEL = LANE_DMON_SEL; // Default: 16'h0000
			this->LANE_LNK_CFGOVRD = LANE_LNK_CFGOVRD; // Default: 16'h0000
			this->LANE_PWR_CTRL_LANE0 = LANE_PWR_CTRL_LANE0; // Default: 16'h0400
			this->LANE_PWR_CTRL_LANE1 = LANE_PWR_CTRL_LANE1; // Default: 16'h0400
			this->LANE_PWR_CTRL_LANE2 = LANE_PWR_CTRL_LANE2; // Default: 16'h0400
			this->LANE_PWR_CTRL_LANE3 = LANE_PWR_CTRL_LANE3; // Default: 16'h0400
			this->LNK_TRN_CFG_LANE0 = LNK_TRN_CFG_LANE0; // Default: 16'h0000
			this->LNK_TRN_CFG_LANE1 = LNK_TRN_CFG_LANE1; // Default: 16'h0000
			this->LNK_TRN_CFG_LANE2 = LNK_TRN_CFG_LANE2; // Default: 16'h0000
			this->LNK_TRN_CFG_LANE3 = LNK_TRN_CFG_LANE3; // Default: 16'h0000
			this->LNK_TRN_COEFF_REQ_LANE0 = LNK_TRN_COEFF_REQ_LANE0; // Default: 16'h0000
			this->LNK_TRN_COEFF_REQ_LANE1 = LNK_TRN_COEFF_REQ_LANE1; // Default: 16'h0000
			this->LNK_TRN_COEFF_REQ_LANE2 = LNK_TRN_COEFF_REQ_LANE2; // Default: 16'h0000
			this->LNK_TRN_COEFF_REQ_LANE3 = LNK_TRN_COEFF_REQ_LANE3; // Default: 16'h0000
			this->MISC_CFG = MISC_CFG; // Default: 16'h0008
			this->MODE_CFG1 = MODE_CFG1; // Default: 16'h0000
			this->MODE_CFG2 = MODE_CFG2; // Default: 16'h0000
			this->MODE_CFG3 = MODE_CFG3; // Default: 16'h0000
			this->MODE_CFG4 = MODE_CFG4; // Default: 16'h0000
			this->MODE_CFG5 = MODE_CFG5; // Default: 16'h0000
			this->MODE_CFG6 = MODE_CFG6; // Default: 16'h0000
			this->MODE_CFG7 = MODE_CFG7; // Default: 16'h0000
			this->PCS_ABILITY_LANE0 = PCS_ABILITY_LANE0; // Default: 16'h0010
			this->PCS_ABILITY_LANE1 = PCS_ABILITY_LANE1; // Default: 16'h0010
			this->PCS_ABILITY_LANE2 = PCS_ABILITY_LANE2; // Default: 16'h0010
			this->PCS_ABILITY_LANE3 = PCS_ABILITY_LANE3; // Default: 16'h0010
			this->PCS_CTRL1_LANE0 = PCS_CTRL1_LANE0; // Default: 16'h2040
			this->PCS_CTRL1_LANE1 = PCS_CTRL1_LANE1; // Default: 16'h2040
			this->PCS_CTRL1_LANE2 = PCS_CTRL1_LANE2; // Default: 16'h2040
			this->PCS_CTRL1_LANE3 = PCS_CTRL1_LANE3; // Default: 16'h2040
			this->PCS_CTRL2_LANE0 = PCS_CTRL2_LANE0; // Default: 16'h0000
			this->PCS_CTRL2_LANE1 = PCS_CTRL2_LANE1; // Default: 16'h0000
			this->PCS_CTRL2_LANE2 = PCS_CTRL2_LANE2; // Default: 16'h0000
			this->PCS_CTRL2_LANE3 = PCS_CTRL2_LANE3; // Default: 16'h0000
			this->PCS_MISC_CFG_0_LANE0 = PCS_MISC_CFG_0_LANE0; // Default: 16'h1116
			this->PCS_MISC_CFG_0_LANE1 = PCS_MISC_CFG_0_LANE1; // Default: 16'h1116
			this->PCS_MISC_CFG_0_LANE2 = PCS_MISC_CFG_0_LANE2; // Default: 16'h1116
			this->PCS_MISC_CFG_0_LANE3 = PCS_MISC_CFG_0_LANE3; // Default: 16'h1116
			this->PCS_MISC_CFG_1_LANE0 = PCS_MISC_CFG_1_LANE0; // Default: 16'h0000
			this->PCS_MISC_CFG_1_LANE1 = PCS_MISC_CFG_1_LANE1; // Default: 16'h0000
			this->PCS_MISC_CFG_1_LANE2 = PCS_MISC_CFG_1_LANE2; // Default: 16'h0000
			this->PCS_MISC_CFG_1_LANE3 = PCS_MISC_CFG_1_LANE3; // Default: 16'h0000
			this->PCS_MODE_LANE0 = PCS_MODE_LANE0; // Default: 16'h0000
			this->PCS_MODE_LANE1 = PCS_MODE_LANE1; // Default: 16'h0000
			this->PCS_MODE_LANE2 = PCS_MODE_LANE2; // Default: 16'h0000
			this->PCS_MODE_LANE3 = PCS_MODE_LANE3; // Default: 16'h0000
			this->PCS_RESET_1_LANE0 = PCS_RESET_1_LANE0; // Default: 16'h0002
			this->PCS_RESET_1_LANE1 = PCS_RESET_1_LANE1; // Default: 16'h0002
			this->PCS_RESET_1_LANE2 = PCS_RESET_1_LANE2; // Default: 16'h0002
			this->PCS_RESET_1_LANE3 = PCS_RESET_1_LANE3; // Default: 16'h0002
			this->PCS_RESET_LANE0 = PCS_RESET_LANE0; // Default: 16'h0000
			this->PCS_RESET_LANE1 = PCS_RESET_LANE1; // Default: 16'h0000
			this->PCS_RESET_LANE2 = PCS_RESET_LANE2; // Default: 16'h0000
			this->PCS_RESET_LANE3 = PCS_RESET_LANE3; // Default: 16'h0000
			this->PCS_TYPE_LANE0 = PCS_TYPE_LANE0; // Default: 16'h002C
			this->PCS_TYPE_LANE1 = PCS_TYPE_LANE1; // Default: 16'h002C
			this->PCS_TYPE_LANE2 = PCS_TYPE_LANE2; // Default: 16'h002C
			this->PCS_TYPE_LANE3 = PCS_TYPE_LANE3; // Default: 16'h002C
			this->PLL_CFG0 = PLL_CFG0; // Default: 16'h95DF
			this->PLL_CFG1 = PLL_CFG1; // Default: 16'h81C0
			this->PLL_CFG2 = PLL_CFG2; // Default: 16'h0424
			this->PMA_CTRL1_LANE0 = PMA_CTRL1_LANE0; // Default: 16'h0000
			this->PMA_CTRL1_LANE1 = PMA_CTRL1_LANE1; // Default: 16'h0000
			this->PMA_CTRL1_LANE2 = PMA_CTRL1_LANE2; // Default: 16'h0000
			this->PMA_CTRL1_LANE3 = PMA_CTRL1_LANE3; // Default: 16'h0000
			this->PMA_CTRL2_LANE0 = PMA_CTRL2_LANE0; // Default: 16'h000B
			this->PMA_CTRL2_LANE1 = PMA_CTRL2_LANE1; // Default: 16'h000B
			this->PMA_CTRL2_LANE2 = PMA_CTRL2_LANE2; // Default: 16'h000B
			this->PMA_CTRL2_LANE3 = PMA_CTRL2_LANE3; // Default: 16'h000B
			this->PMA_LPBK_CTRL_LANE0 = PMA_LPBK_CTRL_LANE0; // Default: 16'h0004
			this->PMA_LPBK_CTRL_LANE1 = PMA_LPBK_CTRL_LANE1; // Default: 16'h0004
			this->PMA_LPBK_CTRL_LANE2 = PMA_LPBK_CTRL_LANE2; // Default: 16'h0004
			this->PMA_LPBK_CTRL_LANE3 = PMA_LPBK_CTRL_LANE3; // Default: 16'h0004
			this->PRBS_BER_CFG0_LANE0 = PRBS_BER_CFG0_LANE0; // Default: 16'h0000
			this->PRBS_BER_CFG0_LANE1 = PRBS_BER_CFG0_LANE1; // Default: 16'h0000
			this->PRBS_BER_CFG0_LANE2 = PRBS_BER_CFG0_LANE2; // Default: 16'h0000
			this->PRBS_BER_CFG0_LANE3 = PRBS_BER_CFG0_LANE3; // Default: 16'h0000
			this->PRBS_BER_CFG1_LANE0 = PRBS_BER_CFG1_LANE0; // Default: 16'h0000
			this->PRBS_BER_CFG1_LANE1 = PRBS_BER_CFG1_LANE1; // Default: 16'h0000
			this->PRBS_BER_CFG1_LANE2 = PRBS_BER_CFG1_LANE2; // Default: 16'h0000
			this->PRBS_BER_CFG1_LANE3 = PRBS_BER_CFG1_LANE3; // Default: 16'h0000
			this->PRBS_CFG_LANE0 = PRBS_CFG_LANE0; // Default: 16'h000A
			this->PRBS_CFG_LANE1 = PRBS_CFG_LANE1; // Default: 16'h000A
			this->PRBS_CFG_LANE2 = PRBS_CFG_LANE2; // Default: 16'h000A
			this->PRBS_CFG_LANE3 = PRBS_CFG_LANE3; // Default: 16'h000A
			this->PTRN_CFG0_LSB = PTRN_CFG0_LSB; // Default: 16'h5555
			this->PTRN_CFG0_MSB = PTRN_CFG0_MSB; // Default: 16'h5555
			this->PTRN_LEN_CFG = PTRN_LEN_CFG; // Default: 16'h001F
			this->PWRUP_DLY = PWRUP_DLY; // Default: 16'h0000
			this->RX_AEQ_VAL0_LANE0 = RX_AEQ_VAL0_LANE0; // Default: 16'h03C0
			this->RX_AEQ_VAL0_LANE1 = RX_AEQ_VAL0_LANE1; // Default: 16'h03C0
			this->RX_AEQ_VAL0_LANE2 = RX_AEQ_VAL0_LANE2; // Default: 16'h03C0
			this->RX_AEQ_VAL0_LANE3 = RX_AEQ_VAL0_LANE3; // Default: 16'h03C0
			this->RX_AEQ_VAL1_LANE0 = RX_AEQ_VAL1_LANE0; // Default: 16'h0000
			this->RX_AEQ_VAL1_LANE1 = RX_AEQ_VAL1_LANE1; // Default: 16'h0000
			this->RX_AEQ_VAL1_LANE2 = RX_AEQ_VAL1_LANE2; // Default: 16'h0000
			this->RX_AEQ_VAL1_LANE3 = RX_AEQ_VAL1_LANE3; // Default: 16'h0000
			this->RX_AGC_CTRL_LANE0 = RX_AGC_CTRL_LANE0; // Default: 16'h0000
			this->RX_AGC_CTRL_LANE1 = RX_AGC_CTRL_LANE1; // Default: 16'h0000
			this->RX_AGC_CTRL_LANE2 = RX_AGC_CTRL_LANE2; // Default: 16'h0000
			this->RX_AGC_CTRL_LANE3 = RX_AGC_CTRL_LANE3; // Default: 16'h0000
			this->RX_CDR_CTRL0_LANE0 = RX_CDR_CTRL0_LANE0; // Default: 16'h0005
			this->RX_CDR_CTRL0_LANE1 = RX_CDR_CTRL0_LANE1; // Default: 16'h0005
			this->RX_CDR_CTRL0_LANE2 = RX_CDR_CTRL0_LANE2; // Default: 16'h0005
			this->RX_CDR_CTRL0_LANE3 = RX_CDR_CTRL0_LANE3; // Default: 16'h0005
			this->RX_CDR_CTRL1_LANE0 = RX_CDR_CTRL1_LANE0; // Default: 16'h4200
			this->RX_CDR_CTRL1_LANE1 = RX_CDR_CTRL1_LANE1; // Default: 16'h4200
			this->RX_CDR_CTRL1_LANE2 = RX_CDR_CTRL1_LANE2; // Default: 16'h4200
			this->RX_CDR_CTRL1_LANE3 = RX_CDR_CTRL1_LANE3; // Default: 16'h4200
			this->RX_CDR_CTRL2_LANE0 = RX_CDR_CTRL2_LANE0; // Default: 16'h2000
			this->RX_CDR_CTRL2_LANE1 = RX_CDR_CTRL2_LANE1; // Default: 16'h2000
			this->RX_CDR_CTRL2_LANE2 = RX_CDR_CTRL2_LANE2; // Default: 16'h2000
			this->RX_CDR_CTRL2_LANE3 = RX_CDR_CTRL2_LANE3; // Default: 16'h2000
			this->RX_CFG0_LANE0 = RX_CFG0_LANE0; // Default: 16'h0500
			this->RX_CFG0_LANE1 = RX_CFG0_LANE1; // Default: 16'h0500
			this->RX_CFG0_LANE2 = RX_CFG0_LANE2; // Default: 16'h0500
			this->RX_CFG0_LANE3 = RX_CFG0_LANE3; // Default: 16'h0500
			this->RX_CFG1_LANE0 = RX_CFG1_LANE0; // Default: 16'h821F
			this->RX_CFG1_LANE1 = RX_CFG1_LANE1; // Default: 16'h821F
			this->RX_CFG1_LANE2 = RX_CFG1_LANE2; // Default: 16'h821F
			this->RX_CFG1_LANE3 = RX_CFG1_LANE3; // Default: 16'h821F
			this->RX_CFG2_LANE0 = RX_CFG2_LANE0; // Default: 16'h1001
			this->RX_CFG2_LANE1 = RX_CFG2_LANE1; // Default: 16'h1001
			this->RX_CFG2_LANE2 = RX_CFG2_LANE2; // Default: 16'h1001
			this->RX_CFG2_LANE3 = RX_CFG2_LANE3; // Default: 16'h1001
			this->RX_CTLE_CTRL_LANE0 = RX_CTLE_CTRL_LANE0; // Default: 16'h008F
			this->RX_CTLE_CTRL_LANE1 = RX_CTLE_CTRL_LANE1; // Default: 16'h008F
			this->RX_CTLE_CTRL_LANE2 = RX_CTLE_CTRL_LANE2; // Default: 16'h008F
			this->RX_CTLE_CTRL_LANE3 = RX_CTLE_CTRL_LANE3; // Default: 16'h008F
			this->RX_CTRL_OVRD_LANE0 = RX_CTRL_OVRD_LANE0; // Default: 16'h000C
			this->RX_CTRL_OVRD_LANE1 = RX_CTRL_OVRD_LANE1; // Default: 16'h000C
			this->RX_CTRL_OVRD_LANE2 = RX_CTRL_OVRD_LANE2; // Default: 16'h000C
			this->RX_CTRL_OVRD_LANE3 = RX_CTRL_OVRD_LANE3; // Default: 16'h000C
			this->RX_FABRIC_WIDTH0 = RX_FABRIC_WIDTH0; // Default: 6466
			this->RX_FABRIC_WIDTH1 = RX_FABRIC_WIDTH1; // Default: 6466
			this->RX_FABRIC_WIDTH2 = RX_FABRIC_WIDTH2; // Default: 6466
			this->RX_FABRIC_WIDTH3 = RX_FABRIC_WIDTH3; // Default: 6466
			this->RX_LOOP_CTRL_LANE0 = RX_LOOP_CTRL_LANE0; // Default: 16'h007F
			this->RX_LOOP_CTRL_LANE1 = RX_LOOP_CTRL_LANE1; // Default: 16'h007F
			this->RX_LOOP_CTRL_LANE2 = RX_LOOP_CTRL_LANE2; // Default: 16'h007F
			this->RX_LOOP_CTRL_LANE3 = RX_LOOP_CTRL_LANE3; // Default: 16'h007F
			this->RX_MVAL0_LANE0 = RX_MVAL0_LANE0; // Default: 16'h0000
			this->RX_MVAL0_LANE1 = RX_MVAL0_LANE1; // Default: 16'h0000
			this->RX_MVAL0_LANE2 = RX_MVAL0_LANE2; // Default: 16'h0000
			this->RX_MVAL0_LANE3 = RX_MVAL0_LANE3; // Default: 16'h0000
			this->RX_MVAL1_LANE0 = RX_MVAL1_LANE0; // Default: 16'h0000
			this->RX_MVAL1_LANE1 = RX_MVAL1_LANE1; // Default: 16'h0000
			this->RX_MVAL1_LANE2 = RX_MVAL1_LANE2; // Default: 16'h0000
			this->RX_MVAL1_LANE3 = RX_MVAL1_LANE3; // Default: 16'h0000
			this->RX_P0S_CTRL = RX_P0S_CTRL; // Default: 16'h1206
			this->RX_P0_CTRL = RX_P0_CTRL; // Default: 16'h11F0
			this->RX_P1_CTRL = RX_P1_CTRL; // Default: 16'h120F
			this->RX_P2_CTRL = RX_P2_CTRL; // Default: 16'h0E0F
			this->RX_PI_CTRL0 = RX_PI_CTRL0; // Default: 16'hD2F0
			this->RX_PI_CTRL1 = RX_PI_CTRL1; // Default: 16'h0080
			this->SIM_GTHRESET_SPEEDUP = SIM_GTHRESET_SPEEDUP; // Default: 1
			this->SIM_VERSION = SIM_VERSION; // Default: "1.0"
			this->SLICE_CFG = SLICE_CFG; // Default: 16'h0000
			this->SLICE_NOISE_CTRL_0_LANE01 = SLICE_NOISE_CTRL_0_LANE01; // Default: 16'h0000
			this->SLICE_NOISE_CTRL_0_LANE23 = SLICE_NOISE_CTRL_0_LANE23; // Default: 16'h0000
			this->SLICE_NOISE_CTRL_1_LANE01 = SLICE_NOISE_CTRL_1_LANE01; // Default: 16'h0000
			this->SLICE_NOISE_CTRL_1_LANE23 = SLICE_NOISE_CTRL_1_LANE23; // Default: 16'h0000
			this->SLICE_NOISE_CTRL_2_LANE01 = SLICE_NOISE_CTRL_2_LANE01; // Default: 16'h7FFF
			this->SLICE_NOISE_CTRL_2_LANE23 = SLICE_NOISE_CTRL_2_LANE23; // Default: 16'h7FFF
			this->SLICE_TX_RESET_LANE01 = SLICE_TX_RESET_LANE01; // Default: 16'h0000
			this->SLICE_TX_RESET_LANE23 = SLICE_TX_RESET_LANE23; // Default: 16'h0000
			this->TERM_CTRL_LANE0 = TERM_CTRL_LANE0; // Default: 16'h5007
			this->TERM_CTRL_LANE1 = TERM_CTRL_LANE1; // Default: 16'h5007
			this->TERM_CTRL_LANE2 = TERM_CTRL_LANE2; // Default: 16'h5007
			this->TERM_CTRL_LANE3 = TERM_CTRL_LANE3; // Default: 16'h5007
			this->TX_CFG0_LANE0 = TX_CFG0_LANE0; // Default: 16'h203D
			this->TX_CFG0_LANE1 = TX_CFG0_LANE1; // Default: 16'h203D
			this->TX_CFG0_LANE2 = TX_CFG0_LANE2; // Default: 16'h203D
			this->TX_CFG0_LANE3 = TX_CFG0_LANE3; // Default: 16'h203D
			this->TX_CFG1_LANE0 = TX_CFG1_LANE0; // Default: 16'h0F00
			this->TX_CFG1_LANE1 = TX_CFG1_LANE1; // Default: 16'h0F00
			this->TX_CFG1_LANE2 = TX_CFG1_LANE2; // Default: 16'h0F00
			this->TX_CFG1_LANE3 = TX_CFG1_LANE3; // Default: 16'h0F00
			this->TX_CFG2_LANE0 = TX_CFG2_LANE0; // Default: 16'h0081
			this->TX_CFG2_LANE1 = TX_CFG2_LANE1; // Default: 16'h0081
			this->TX_CFG2_LANE2 = TX_CFG2_LANE2; // Default: 16'h0081
			this->TX_CFG2_LANE3 = TX_CFG2_LANE3; // Default: 16'h0081
			this->TX_CLK_SEL0_LANE0 = TX_CLK_SEL0_LANE0; // Default: 16'h2121
			this->TX_CLK_SEL0_LANE1 = TX_CLK_SEL0_LANE1; // Default: 16'h2121
			this->TX_CLK_SEL0_LANE2 = TX_CLK_SEL0_LANE2; // Default: 16'h2121
			this->TX_CLK_SEL0_LANE3 = TX_CLK_SEL0_LANE3; // Default: 16'h2121
			this->TX_CLK_SEL1_LANE0 = TX_CLK_SEL1_LANE0; // Default: 16'h2121
			this->TX_CLK_SEL1_LANE1 = TX_CLK_SEL1_LANE1; // Default: 16'h2121
			this->TX_CLK_SEL1_LANE2 = TX_CLK_SEL1_LANE2; // Default: 16'h2121
			this->TX_CLK_SEL1_LANE3 = TX_CLK_SEL1_LANE3; // Default: 16'h2121
			this->TX_DISABLE_LANE0 = TX_DISABLE_LANE0; // Default: 16'h0000
			this->TX_DISABLE_LANE1 = TX_DISABLE_LANE1; // Default: 16'h0000
			this->TX_DISABLE_LANE2 = TX_DISABLE_LANE2; // Default: 16'h0000
			this->TX_DISABLE_LANE3 = TX_DISABLE_LANE3; // Default: 16'h0000
			this->TX_FABRIC_WIDTH0 = TX_FABRIC_WIDTH0; // Default: 6466
			this->TX_FABRIC_WIDTH1 = TX_FABRIC_WIDTH1; // Default: 6466
			this->TX_FABRIC_WIDTH2 = TX_FABRIC_WIDTH2; // Default: 6466
			this->TX_FABRIC_WIDTH3 = TX_FABRIC_WIDTH3; // Default: 6466
			this->TX_P0P0S_CTRL = TX_P0P0S_CTRL; // Default: 16'h060C
			this->TX_P1P2_CTRL = TX_P1P2_CTRL; // Default: 16'h0C39
			this->TX_PREEMPH_LANE0 = TX_PREEMPH_LANE0; // Default: 16'h00A1
			this->TX_PREEMPH_LANE1 = TX_PREEMPH_LANE1; // Default: 16'h00A1
			this->TX_PREEMPH_LANE2 = TX_PREEMPH_LANE2; // Default: 16'h00A1
			this->TX_PREEMPH_LANE3 = TX_PREEMPH_LANE3; // Default: 16'h00A1
			this->TX_PWR_RATE_OVRD_LANE0 = TX_PWR_RATE_OVRD_LANE0; // Default: 16'h0060
			this->TX_PWR_RATE_OVRD_LANE1 = TX_PWR_RATE_OVRD_LANE1; // Default: 16'h0060
			this->TX_PWR_RATE_OVRD_LANE2 = TX_PWR_RATE_OVRD_LANE2; // Default: 16'h0060
			this->TX_PWR_RATE_OVRD_LANE3 = TX_PWR_RATE_OVRD_LANE3; // Default: 16'h0060
			//Verilog Ports in definition order:
			this->DRDY_A0_B = DRDY_A0_B; // net ID: DRDY lsb: 0  msb: 0 OUTPUT
			this->DRPDO_A0_B = DRPDO_A0_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			this->DRPDO_A1_B = DRPDO_A1_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			this->DRPDO_A2_B = DRPDO_A2_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			this->DRPDO_A3_B = DRPDO_A3_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			this->DRPDO_A4_B = DRPDO_A4_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			this->DRPDO_A5_B = DRPDO_A5_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			this->DRPDO_A6_B = DRPDO_A6_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			this->DRPDO_A7_B = DRPDO_A7_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			this->DRPDO_A8_B = DRPDO_A8_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			this->DRPDO_A9_B = DRPDO_A9_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			this->DRPDO_A10_B = DRPDO_A10_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			this->DRPDO_A11_B = DRPDO_A11_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			this->DRPDO_A12_B = DRPDO_A12_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			this->DRPDO_A13_B = DRPDO_A13_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			this->DRPDO_A14_B = DRPDO_A14_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			this->DRPDO_A15_B = DRPDO_A15_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			this->GTHINITDONE_A0_B = GTHINITDONE_A0_B; // net ID: GTHINITDONE lsb: 0  msb: 0 OUTPUT
			this->MGMTPCSRDACK_A0_B = MGMTPCSRDACK_A0_B; // net ID: MGMTPCSRDACK lsb: 0  msb: 0 OUTPUT
			this->MGMTPCSRDDATA_A0_B = MGMTPCSRDDATA_A0_B; // net ID: MGMTPCSRDDATA lsb: 0  msb: 15 OUTPUT
			this->MGMTPCSRDDATA_A1_B = MGMTPCSRDDATA_A1_B; // net ID: MGMTPCSRDDATA lsb: 0  msb: 15 OUTPUT
			this->MGMTPCSRDDATA_A2_B = MGMTPCSRDDATA_A2_B; // net ID: MGMTPCSRDDATA lsb: 0  msb: 15 OUTPUT
			this->MGMTPCSRDDATA_A3_B = MGMTPCSRDDATA_A3_B; // net ID: MGMTPCSRDDATA lsb: 0  msb: 15 OUTPUT
			this->MGMTPCSRDDATA_A4_B = MGMTPCSRDDATA_A4_B; // net ID: MGMTPCSRDDATA lsb: 0  msb: 15 OUTPUT
			this->MGMTPCSRDDATA_A5_B = MGMTPCSRDDATA_A5_B; // net ID: MGMTPCSRDDATA lsb: 0  msb: 15 OUTPUT
			this->MGMTPCSRDDATA_A6_B = MGMTPCSRDDATA_A6_B; // net ID: MGMTPCSRDDATA lsb: 0  msb: 15 OUTPUT
			this->MGMTPCSRDDATA_A7_B = MGMTPCSRDDATA_A7_B; // net ID: MGMTPCSRDDATA lsb: 0  msb: 15 OUTPUT
			this->MGMTPCSRDDATA_A8_B = MGMTPCSRDDATA_A8_B; // net ID: MGMTPCSRDDATA lsb: 0  msb: 15 OUTPUT
			this->MGMTPCSRDDATA_A9_B = MGMTPCSRDDATA_A9_B; // net ID: MGMTPCSRDDATA lsb: 0  msb: 15 OUTPUT
			this->MGMTPCSRDDATA_A10_B = MGMTPCSRDDATA_A10_B; // net ID: MGMTPCSRDDATA lsb: 0  msb: 15 OUTPUT
			this->MGMTPCSRDDATA_A11_B = MGMTPCSRDDATA_A11_B; // net ID: MGMTPCSRDDATA lsb: 0  msb: 15 OUTPUT
			this->MGMTPCSRDDATA_A12_B = MGMTPCSRDDATA_A12_B; // net ID: MGMTPCSRDDATA lsb: 0  msb: 15 OUTPUT
			this->MGMTPCSRDDATA_A13_B = MGMTPCSRDDATA_A13_B; // net ID: MGMTPCSRDDATA lsb: 0  msb: 15 OUTPUT
			this->MGMTPCSRDDATA_A14_B = MGMTPCSRDDATA_A14_B; // net ID: MGMTPCSRDDATA lsb: 0  msb: 15 OUTPUT
			this->MGMTPCSRDDATA_A15_B = MGMTPCSRDDATA_A15_B; // net ID: MGMTPCSRDDATA lsb: 0  msb: 15 OUTPUT
			this->RXCODEERR0_A0_B = RXCODEERR0_A0_B; // net ID: RXCODEERR0 lsb: 0  msb: 7 OUTPUT
			this->RXCODEERR0_A1_B = RXCODEERR0_A1_B; // net ID: RXCODEERR0 lsb: 0  msb: 7 OUTPUT
			this->RXCODEERR0_A2_B = RXCODEERR0_A2_B; // net ID: RXCODEERR0 lsb: 0  msb: 7 OUTPUT
			this->RXCODEERR0_A3_B = RXCODEERR0_A3_B; // net ID: RXCODEERR0 lsb: 0  msb: 7 OUTPUT
			this->RXCODEERR0_A4_B = RXCODEERR0_A4_B; // net ID: RXCODEERR0 lsb: 0  msb: 7 OUTPUT
			this->RXCODEERR0_A5_B = RXCODEERR0_A5_B; // net ID: RXCODEERR0 lsb: 0  msb: 7 OUTPUT
			this->RXCODEERR0_A6_B = RXCODEERR0_A6_B; // net ID: RXCODEERR0 lsb: 0  msb: 7 OUTPUT
			this->RXCODEERR0_A7_B = RXCODEERR0_A7_B; // net ID: RXCODEERR0 lsb: 0  msb: 7 OUTPUT
			this->RXCODEERR1_A0_B = RXCODEERR1_A0_B; // net ID: RXCODEERR1 lsb: 0  msb: 7 OUTPUT
			this->RXCODEERR1_A1_B = RXCODEERR1_A1_B; // net ID: RXCODEERR1 lsb: 0  msb: 7 OUTPUT
			this->RXCODEERR1_A2_B = RXCODEERR1_A2_B; // net ID: RXCODEERR1 lsb: 0  msb: 7 OUTPUT
			this->RXCODEERR1_A3_B = RXCODEERR1_A3_B; // net ID: RXCODEERR1 lsb: 0  msb: 7 OUTPUT
			this->RXCODEERR1_A4_B = RXCODEERR1_A4_B; // net ID: RXCODEERR1 lsb: 0  msb: 7 OUTPUT
			this->RXCODEERR1_A5_B = RXCODEERR1_A5_B; // net ID: RXCODEERR1 lsb: 0  msb: 7 OUTPUT
			this->RXCODEERR1_A6_B = RXCODEERR1_A6_B; // net ID: RXCODEERR1 lsb: 0  msb: 7 OUTPUT
			this->RXCODEERR1_A7_B = RXCODEERR1_A7_B; // net ID: RXCODEERR1 lsb: 0  msb: 7 OUTPUT
			this->RXCODEERR2_A0_B = RXCODEERR2_A0_B; // net ID: RXCODEERR2 lsb: 0  msb: 7 OUTPUT
			this->RXCODEERR2_A1_B = RXCODEERR2_A1_B; // net ID: RXCODEERR2 lsb: 0  msb: 7 OUTPUT
			this->RXCODEERR2_A2_B = RXCODEERR2_A2_B; // net ID: RXCODEERR2 lsb: 0  msb: 7 OUTPUT
			this->RXCODEERR2_A3_B = RXCODEERR2_A3_B; // net ID: RXCODEERR2 lsb: 0  msb: 7 OUTPUT
			this->RXCODEERR2_A4_B = RXCODEERR2_A4_B; // net ID: RXCODEERR2 lsb: 0  msb: 7 OUTPUT
			this->RXCODEERR2_A5_B = RXCODEERR2_A5_B; // net ID: RXCODEERR2 lsb: 0  msb: 7 OUTPUT
			this->RXCODEERR2_A6_B = RXCODEERR2_A6_B; // net ID: RXCODEERR2 lsb: 0  msb: 7 OUTPUT
			this->RXCODEERR2_A7_B = RXCODEERR2_A7_B; // net ID: RXCODEERR2 lsb: 0  msb: 7 OUTPUT
			this->RXCODEERR3_A0_B = RXCODEERR3_A0_B; // net ID: RXCODEERR3 lsb: 0  msb: 7 OUTPUT
			this->RXCODEERR3_A1_B = RXCODEERR3_A1_B; // net ID: RXCODEERR3 lsb: 0  msb: 7 OUTPUT
			this->RXCODEERR3_A2_B = RXCODEERR3_A2_B; // net ID: RXCODEERR3 lsb: 0  msb: 7 OUTPUT
			this->RXCODEERR3_A3_B = RXCODEERR3_A3_B; // net ID: RXCODEERR3 lsb: 0  msb: 7 OUTPUT
			this->RXCODEERR3_A4_B = RXCODEERR3_A4_B; // net ID: RXCODEERR3 lsb: 0  msb: 7 OUTPUT
			this->RXCODEERR3_A5_B = RXCODEERR3_A5_B; // net ID: RXCODEERR3 lsb: 0  msb: 7 OUTPUT
			this->RXCODEERR3_A6_B = RXCODEERR3_A6_B; // net ID: RXCODEERR3 lsb: 0  msb: 7 OUTPUT
			this->RXCODEERR3_A7_B = RXCODEERR3_A7_B; // net ID: RXCODEERR3 lsb: 0  msb: 7 OUTPUT
			this->RXCTRL0_A0_B = RXCTRL0_A0_B; // net ID: RXCTRL0 lsb: 0  msb: 7 OUTPUT
			this->RXCTRL0_A1_B = RXCTRL0_A1_B; // net ID: RXCTRL0 lsb: 0  msb: 7 OUTPUT
			this->RXCTRL0_A2_B = RXCTRL0_A2_B; // net ID: RXCTRL0 lsb: 0  msb: 7 OUTPUT
			this->RXCTRL0_A3_B = RXCTRL0_A3_B; // net ID: RXCTRL0 lsb: 0  msb: 7 OUTPUT
			this->RXCTRL0_A4_B = RXCTRL0_A4_B; // net ID: RXCTRL0 lsb: 0  msb: 7 OUTPUT
			this->RXCTRL0_A5_B = RXCTRL0_A5_B; // net ID: RXCTRL0 lsb: 0  msb: 7 OUTPUT
			this->RXCTRL0_A6_B = RXCTRL0_A6_B; // net ID: RXCTRL0 lsb: 0  msb: 7 OUTPUT
			this->RXCTRL0_A7_B = RXCTRL0_A7_B; // net ID: RXCTRL0 lsb: 0  msb: 7 OUTPUT
			this->RXCTRL1_A0_B = RXCTRL1_A0_B; // net ID: RXCTRL1 lsb: 0  msb: 7 OUTPUT
			this->RXCTRL1_A1_B = RXCTRL1_A1_B; // net ID: RXCTRL1 lsb: 0  msb: 7 OUTPUT
			this->RXCTRL1_A2_B = RXCTRL1_A2_B; // net ID: RXCTRL1 lsb: 0  msb: 7 OUTPUT
			this->RXCTRL1_A3_B = RXCTRL1_A3_B; // net ID: RXCTRL1 lsb: 0  msb: 7 OUTPUT
			this->RXCTRL1_A4_B = RXCTRL1_A4_B; // net ID: RXCTRL1 lsb: 0  msb: 7 OUTPUT
			this->RXCTRL1_A5_B = RXCTRL1_A5_B; // net ID: RXCTRL1 lsb: 0  msb: 7 OUTPUT
			this->RXCTRL1_A6_B = RXCTRL1_A6_B; // net ID: RXCTRL1 lsb: 0  msb: 7 OUTPUT
			this->RXCTRL1_A7_B = RXCTRL1_A7_B; // net ID: RXCTRL1 lsb: 0  msb: 7 OUTPUT
			this->RXCTRL2_A0_B = RXCTRL2_A0_B; // net ID: RXCTRL2 lsb: 0  msb: 7 OUTPUT
			this->RXCTRL2_A1_B = RXCTRL2_A1_B; // net ID: RXCTRL2 lsb: 0  msb: 7 OUTPUT
			this->RXCTRL2_A2_B = RXCTRL2_A2_B; // net ID: RXCTRL2 lsb: 0  msb: 7 OUTPUT
			this->RXCTRL2_A3_B = RXCTRL2_A3_B; // net ID: RXCTRL2 lsb: 0  msb: 7 OUTPUT
			this->RXCTRL2_A4_B = RXCTRL2_A4_B; // net ID: RXCTRL2 lsb: 0  msb: 7 OUTPUT
			this->RXCTRL2_A5_B = RXCTRL2_A5_B; // net ID: RXCTRL2 lsb: 0  msb: 7 OUTPUT
			this->RXCTRL2_A6_B = RXCTRL2_A6_B; // net ID: RXCTRL2 lsb: 0  msb: 7 OUTPUT
			this->RXCTRL2_A7_B = RXCTRL2_A7_B; // net ID: RXCTRL2 lsb: 0  msb: 7 OUTPUT
			this->RXCTRL3_A0_B = RXCTRL3_A0_B; // net ID: RXCTRL3 lsb: 0  msb: 7 OUTPUT
			this->RXCTRL3_A1_B = RXCTRL3_A1_B; // net ID: RXCTRL3 lsb: 0  msb: 7 OUTPUT
			this->RXCTRL3_A2_B = RXCTRL3_A2_B; // net ID: RXCTRL3 lsb: 0  msb: 7 OUTPUT
			this->RXCTRL3_A3_B = RXCTRL3_A3_B; // net ID: RXCTRL3 lsb: 0  msb: 7 OUTPUT
			this->RXCTRL3_A4_B = RXCTRL3_A4_B; // net ID: RXCTRL3 lsb: 0  msb: 7 OUTPUT
			this->RXCTRL3_A5_B = RXCTRL3_A5_B; // net ID: RXCTRL3 lsb: 0  msb: 7 OUTPUT
			this->RXCTRL3_A6_B = RXCTRL3_A6_B; // net ID: RXCTRL3 lsb: 0  msb: 7 OUTPUT
			this->RXCTRL3_A7_B = RXCTRL3_A7_B; // net ID: RXCTRL3 lsb: 0  msb: 7 OUTPUT
			this->RXCTRLACK0_A0_B = RXCTRLACK0_A0_B; // net ID: RXCTRLACK0 lsb: 0  msb: 0 OUTPUT
			this->RXCTRLACK1_A0_B = RXCTRLACK1_A0_B; // net ID: RXCTRLACK1 lsb: 0  msb: 0 OUTPUT
			this->RXCTRLACK2_A0_B = RXCTRLACK2_A0_B; // net ID: RXCTRLACK2 lsb: 0  msb: 0 OUTPUT
			this->RXCTRLACK3_A0_B = RXCTRLACK3_A0_B; // net ID: RXCTRLACK3 lsb: 0  msb: 0 OUTPUT
			this->RXDATA0_A0_B = RXDATA0_A0_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			this->RXDATA0_A1_B = RXDATA0_A1_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			this->RXDATA0_A2_B = RXDATA0_A2_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			this->RXDATA0_A3_B = RXDATA0_A3_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			this->RXDATA0_A4_B = RXDATA0_A4_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			this->RXDATA0_A5_B = RXDATA0_A5_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			this->RXDATA0_A6_B = RXDATA0_A6_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			this->RXDATA0_A7_B = RXDATA0_A7_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			this->RXDATA0_A8_B = RXDATA0_A8_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			this->RXDATA0_A9_B = RXDATA0_A9_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			this->RXDATA0_A10_B = RXDATA0_A10_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			this->RXDATA0_A11_B = RXDATA0_A11_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			this->RXDATA0_A12_B = RXDATA0_A12_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			this->RXDATA0_A13_B = RXDATA0_A13_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			this->RXDATA0_A14_B = RXDATA0_A14_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			this->RXDATA0_A15_B = RXDATA0_A15_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			this->RXDATA0_A16_B = RXDATA0_A16_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			this->RXDATA0_A17_B = RXDATA0_A17_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			this->RXDATA0_A18_B = RXDATA0_A18_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			this->RXDATA0_A19_B = RXDATA0_A19_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			this->RXDATA0_A20_B = RXDATA0_A20_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			this->RXDATA0_A21_B = RXDATA0_A21_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			this->RXDATA0_A22_B = RXDATA0_A22_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			this->RXDATA0_A23_B = RXDATA0_A23_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			this->RXDATA0_A24_B = RXDATA0_A24_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			this->RXDATA0_A25_B = RXDATA0_A25_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			this->RXDATA0_A26_B = RXDATA0_A26_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			this->RXDATA0_A27_B = RXDATA0_A27_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			this->RXDATA0_A28_B = RXDATA0_A28_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			this->RXDATA0_A29_B = RXDATA0_A29_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			this->RXDATA0_A30_B = RXDATA0_A30_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			this->RXDATA0_A31_B = RXDATA0_A31_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			this->RXDATA0_A32_B = RXDATA0_A32_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			this->RXDATA0_A33_B = RXDATA0_A33_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			this->RXDATA0_A34_B = RXDATA0_A34_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			this->RXDATA0_A35_B = RXDATA0_A35_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			this->RXDATA0_A36_B = RXDATA0_A36_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			this->RXDATA0_A37_B = RXDATA0_A37_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			this->RXDATA0_A38_B = RXDATA0_A38_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			this->RXDATA0_A39_B = RXDATA0_A39_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			this->RXDATA0_A40_B = RXDATA0_A40_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			this->RXDATA0_A41_B = RXDATA0_A41_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			this->RXDATA0_A42_B = RXDATA0_A42_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			this->RXDATA0_A43_B = RXDATA0_A43_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			this->RXDATA0_A44_B = RXDATA0_A44_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			this->RXDATA0_A45_B = RXDATA0_A45_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			this->RXDATA0_A46_B = RXDATA0_A46_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			this->RXDATA0_A47_B = RXDATA0_A47_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			this->RXDATA0_A48_B = RXDATA0_A48_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			this->RXDATA0_A49_B = RXDATA0_A49_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			this->RXDATA0_A50_B = RXDATA0_A50_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			this->RXDATA0_A51_B = RXDATA0_A51_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			this->RXDATA0_A52_B = RXDATA0_A52_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			this->RXDATA0_A53_B = RXDATA0_A53_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			this->RXDATA0_A54_B = RXDATA0_A54_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			this->RXDATA0_A55_B = RXDATA0_A55_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			this->RXDATA0_A56_B = RXDATA0_A56_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			this->RXDATA0_A57_B = RXDATA0_A57_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			this->RXDATA0_A58_B = RXDATA0_A58_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			this->RXDATA0_A59_B = RXDATA0_A59_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			this->RXDATA0_A60_B = RXDATA0_A60_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			this->RXDATA0_A61_B = RXDATA0_A61_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			this->RXDATA0_A62_B = RXDATA0_A62_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			this->RXDATA0_A63_B = RXDATA0_A63_B; // net ID: RXDATA0 lsb: 0  msb: 63 OUTPUT
			this->RXDATA1_A0_B = RXDATA1_A0_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			this->RXDATA1_A1_B = RXDATA1_A1_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			this->RXDATA1_A2_B = RXDATA1_A2_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			this->RXDATA1_A3_B = RXDATA1_A3_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			this->RXDATA1_A4_B = RXDATA1_A4_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			this->RXDATA1_A5_B = RXDATA1_A5_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			this->RXDATA1_A6_B = RXDATA1_A6_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			this->RXDATA1_A7_B = RXDATA1_A7_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			this->RXDATA1_A8_B = RXDATA1_A8_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			this->RXDATA1_A9_B = RXDATA1_A9_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			this->RXDATA1_A10_B = RXDATA1_A10_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			this->RXDATA1_A11_B = RXDATA1_A11_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			this->RXDATA1_A12_B = RXDATA1_A12_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			this->RXDATA1_A13_B = RXDATA1_A13_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			this->RXDATA1_A14_B = RXDATA1_A14_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			this->RXDATA1_A15_B = RXDATA1_A15_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			this->RXDATA1_A16_B = RXDATA1_A16_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			this->RXDATA1_A17_B = RXDATA1_A17_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			this->RXDATA1_A18_B = RXDATA1_A18_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			this->RXDATA1_A19_B = RXDATA1_A19_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			this->RXDATA1_A20_B = RXDATA1_A20_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			this->RXDATA1_A21_B = RXDATA1_A21_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			this->RXDATA1_A22_B = RXDATA1_A22_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			this->RXDATA1_A23_B = RXDATA1_A23_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			this->RXDATA1_A24_B = RXDATA1_A24_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			this->RXDATA1_A25_B = RXDATA1_A25_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			this->RXDATA1_A26_B = RXDATA1_A26_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			this->RXDATA1_A27_B = RXDATA1_A27_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			this->RXDATA1_A28_B = RXDATA1_A28_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			this->RXDATA1_A29_B = RXDATA1_A29_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			this->RXDATA1_A30_B = RXDATA1_A30_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			this->RXDATA1_A31_B = RXDATA1_A31_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			this->RXDATA1_A32_B = RXDATA1_A32_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			this->RXDATA1_A33_B = RXDATA1_A33_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			this->RXDATA1_A34_B = RXDATA1_A34_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			this->RXDATA1_A35_B = RXDATA1_A35_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			this->RXDATA1_A36_B = RXDATA1_A36_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			this->RXDATA1_A37_B = RXDATA1_A37_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			this->RXDATA1_A38_B = RXDATA1_A38_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			this->RXDATA1_A39_B = RXDATA1_A39_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			this->RXDATA1_A40_B = RXDATA1_A40_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			this->RXDATA1_A41_B = RXDATA1_A41_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			this->RXDATA1_A42_B = RXDATA1_A42_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			this->RXDATA1_A43_B = RXDATA1_A43_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			this->RXDATA1_A44_B = RXDATA1_A44_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			this->RXDATA1_A45_B = RXDATA1_A45_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			this->RXDATA1_A46_B = RXDATA1_A46_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			this->RXDATA1_A47_B = RXDATA1_A47_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			this->RXDATA1_A48_B = RXDATA1_A48_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			this->RXDATA1_A49_B = RXDATA1_A49_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			this->RXDATA1_A50_B = RXDATA1_A50_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			this->RXDATA1_A51_B = RXDATA1_A51_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			this->RXDATA1_A52_B = RXDATA1_A52_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			this->RXDATA1_A53_B = RXDATA1_A53_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			this->RXDATA1_A54_B = RXDATA1_A54_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			this->RXDATA1_A55_B = RXDATA1_A55_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			this->RXDATA1_A56_B = RXDATA1_A56_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			this->RXDATA1_A57_B = RXDATA1_A57_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			this->RXDATA1_A58_B = RXDATA1_A58_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			this->RXDATA1_A59_B = RXDATA1_A59_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			this->RXDATA1_A60_B = RXDATA1_A60_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			this->RXDATA1_A61_B = RXDATA1_A61_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			this->RXDATA1_A62_B = RXDATA1_A62_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			this->RXDATA1_A63_B = RXDATA1_A63_B; // net ID: RXDATA1 lsb: 0  msb: 63 OUTPUT
			this->RXDATA2_A0_B = RXDATA2_A0_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			this->RXDATA2_A1_B = RXDATA2_A1_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			this->RXDATA2_A2_B = RXDATA2_A2_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			this->RXDATA2_A3_B = RXDATA2_A3_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			this->RXDATA2_A4_B = RXDATA2_A4_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			this->RXDATA2_A5_B = RXDATA2_A5_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			this->RXDATA2_A6_B = RXDATA2_A6_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			this->RXDATA2_A7_B = RXDATA2_A7_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			this->RXDATA2_A8_B = RXDATA2_A8_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			this->RXDATA2_A9_B = RXDATA2_A9_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			this->RXDATA2_A10_B = RXDATA2_A10_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			this->RXDATA2_A11_B = RXDATA2_A11_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			this->RXDATA2_A12_B = RXDATA2_A12_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			this->RXDATA2_A13_B = RXDATA2_A13_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			this->RXDATA2_A14_B = RXDATA2_A14_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			this->RXDATA2_A15_B = RXDATA2_A15_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			this->RXDATA2_A16_B = RXDATA2_A16_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			this->RXDATA2_A17_B = RXDATA2_A17_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			this->RXDATA2_A18_B = RXDATA2_A18_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			this->RXDATA2_A19_B = RXDATA2_A19_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			this->RXDATA2_A20_B = RXDATA2_A20_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			this->RXDATA2_A21_B = RXDATA2_A21_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			this->RXDATA2_A22_B = RXDATA2_A22_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			this->RXDATA2_A23_B = RXDATA2_A23_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			this->RXDATA2_A24_B = RXDATA2_A24_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			this->RXDATA2_A25_B = RXDATA2_A25_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			this->RXDATA2_A26_B = RXDATA2_A26_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			this->RXDATA2_A27_B = RXDATA2_A27_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			this->RXDATA2_A28_B = RXDATA2_A28_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			this->RXDATA2_A29_B = RXDATA2_A29_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			this->RXDATA2_A30_B = RXDATA2_A30_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			this->RXDATA2_A31_B = RXDATA2_A31_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			this->RXDATA2_A32_B = RXDATA2_A32_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			this->RXDATA2_A33_B = RXDATA2_A33_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			this->RXDATA2_A34_B = RXDATA2_A34_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			this->RXDATA2_A35_B = RXDATA2_A35_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			this->RXDATA2_A36_B = RXDATA2_A36_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			this->RXDATA2_A37_B = RXDATA2_A37_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			this->RXDATA2_A38_B = RXDATA2_A38_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			this->RXDATA2_A39_B = RXDATA2_A39_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			this->RXDATA2_A40_B = RXDATA2_A40_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			this->RXDATA2_A41_B = RXDATA2_A41_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			this->RXDATA2_A42_B = RXDATA2_A42_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			this->RXDATA2_A43_B = RXDATA2_A43_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			this->RXDATA2_A44_B = RXDATA2_A44_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			this->RXDATA2_A45_B = RXDATA2_A45_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			this->RXDATA2_A46_B = RXDATA2_A46_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			this->RXDATA2_A47_B = RXDATA2_A47_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			this->RXDATA2_A48_B = RXDATA2_A48_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			this->RXDATA2_A49_B = RXDATA2_A49_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			this->RXDATA2_A50_B = RXDATA2_A50_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			this->RXDATA2_A51_B = RXDATA2_A51_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			this->RXDATA2_A52_B = RXDATA2_A52_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			this->RXDATA2_A53_B = RXDATA2_A53_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			this->RXDATA2_A54_B = RXDATA2_A54_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			this->RXDATA2_A55_B = RXDATA2_A55_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			this->RXDATA2_A56_B = RXDATA2_A56_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			this->RXDATA2_A57_B = RXDATA2_A57_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			this->RXDATA2_A58_B = RXDATA2_A58_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			this->RXDATA2_A59_B = RXDATA2_A59_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			this->RXDATA2_A60_B = RXDATA2_A60_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			this->RXDATA2_A61_B = RXDATA2_A61_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			this->RXDATA2_A62_B = RXDATA2_A62_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			this->RXDATA2_A63_B = RXDATA2_A63_B; // net ID: RXDATA2 lsb: 0  msb: 63 OUTPUT
			this->RXDATA3_A0_B = RXDATA3_A0_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			this->RXDATA3_A1_B = RXDATA3_A1_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			this->RXDATA3_A2_B = RXDATA3_A2_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			this->RXDATA3_A3_B = RXDATA3_A3_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			this->RXDATA3_A4_B = RXDATA3_A4_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			this->RXDATA3_A5_B = RXDATA3_A5_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			this->RXDATA3_A6_B = RXDATA3_A6_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			this->RXDATA3_A7_B = RXDATA3_A7_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			this->RXDATA3_A8_B = RXDATA3_A8_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			this->RXDATA3_A9_B = RXDATA3_A9_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			this->RXDATA3_A10_B = RXDATA3_A10_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			this->RXDATA3_A11_B = RXDATA3_A11_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			this->RXDATA3_A12_B = RXDATA3_A12_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			this->RXDATA3_A13_B = RXDATA3_A13_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			this->RXDATA3_A14_B = RXDATA3_A14_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			this->RXDATA3_A15_B = RXDATA3_A15_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			this->RXDATA3_A16_B = RXDATA3_A16_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			this->RXDATA3_A17_B = RXDATA3_A17_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			this->RXDATA3_A18_B = RXDATA3_A18_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			this->RXDATA3_A19_B = RXDATA3_A19_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			this->RXDATA3_A20_B = RXDATA3_A20_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			this->RXDATA3_A21_B = RXDATA3_A21_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			this->RXDATA3_A22_B = RXDATA3_A22_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			this->RXDATA3_A23_B = RXDATA3_A23_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			this->RXDATA3_A24_B = RXDATA3_A24_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			this->RXDATA3_A25_B = RXDATA3_A25_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			this->RXDATA3_A26_B = RXDATA3_A26_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			this->RXDATA3_A27_B = RXDATA3_A27_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			this->RXDATA3_A28_B = RXDATA3_A28_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			this->RXDATA3_A29_B = RXDATA3_A29_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			this->RXDATA3_A30_B = RXDATA3_A30_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			this->RXDATA3_A31_B = RXDATA3_A31_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			this->RXDATA3_A32_B = RXDATA3_A32_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			this->RXDATA3_A33_B = RXDATA3_A33_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			this->RXDATA3_A34_B = RXDATA3_A34_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			this->RXDATA3_A35_B = RXDATA3_A35_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			this->RXDATA3_A36_B = RXDATA3_A36_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			this->RXDATA3_A37_B = RXDATA3_A37_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			this->RXDATA3_A38_B = RXDATA3_A38_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			this->RXDATA3_A39_B = RXDATA3_A39_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			this->RXDATA3_A40_B = RXDATA3_A40_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			this->RXDATA3_A41_B = RXDATA3_A41_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			this->RXDATA3_A42_B = RXDATA3_A42_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			this->RXDATA3_A43_B = RXDATA3_A43_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			this->RXDATA3_A44_B = RXDATA3_A44_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			this->RXDATA3_A45_B = RXDATA3_A45_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			this->RXDATA3_A46_B = RXDATA3_A46_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			this->RXDATA3_A47_B = RXDATA3_A47_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			this->RXDATA3_A48_B = RXDATA3_A48_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			this->RXDATA3_A49_B = RXDATA3_A49_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			this->RXDATA3_A50_B = RXDATA3_A50_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			this->RXDATA3_A51_B = RXDATA3_A51_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			this->RXDATA3_A52_B = RXDATA3_A52_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			this->RXDATA3_A53_B = RXDATA3_A53_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			this->RXDATA3_A54_B = RXDATA3_A54_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			this->RXDATA3_A55_B = RXDATA3_A55_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			this->RXDATA3_A56_B = RXDATA3_A56_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			this->RXDATA3_A57_B = RXDATA3_A57_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			this->RXDATA3_A58_B = RXDATA3_A58_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			this->RXDATA3_A59_B = RXDATA3_A59_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			this->RXDATA3_A60_B = RXDATA3_A60_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			this->RXDATA3_A61_B = RXDATA3_A61_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			this->RXDATA3_A62_B = RXDATA3_A62_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			this->RXDATA3_A63_B = RXDATA3_A63_B; // net ID: RXDATA3 lsb: 0  msb: 63 OUTPUT
			this->RXDATATAP0_A0_B = RXDATATAP0_A0_B; // net ID: RXDATATAP0 lsb: 0  msb: 0 OUTPUT
			this->RXDATATAP1_A0_B = RXDATATAP1_A0_B; // net ID: RXDATATAP1 lsb: 0  msb: 0 OUTPUT
			this->RXDATATAP2_A0_B = RXDATATAP2_A0_B; // net ID: RXDATATAP2 lsb: 0  msb: 0 OUTPUT
			this->RXDATATAP3_A0_B = RXDATATAP3_A0_B; // net ID: RXDATATAP3 lsb: 0  msb: 0 OUTPUT
			this->RXDISPERR0_A0_B = RXDISPERR0_A0_B; // net ID: RXDISPERR0 lsb: 0  msb: 7 OUTPUT
			this->RXDISPERR0_A1_B = RXDISPERR0_A1_B; // net ID: RXDISPERR0 lsb: 0  msb: 7 OUTPUT
			this->RXDISPERR0_A2_B = RXDISPERR0_A2_B; // net ID: RXDISPERR0 lsb: 0  msb: 7 OUTPUT
			this->RXDISPERR0_A3_B = RXDISPERR0_A3_B; // net ID: RXDISPERR0 lsb: 0  msb: 7 OUTPUT
			this->RXDISPERR0_A4_B = RXDISPERR0_A4_B; // net ID: RXDISPERR0 lsb: 0  msb: 7 OUTPUT
			this->RXDISPERR0_A5_B = RXDISPERR0_A5_B; // net ID: RXDISPERR0 lsb: 0  msb: 7 OUTPUT
			this->RXDISPERR0_A6_B = RXDISPERR0_A6_B; // net ID: RXDISPERR0 lsb: 0  msb: 7 OUTPUT
			this->RXDISPERR0_A7_B = RXDISPERR0_A7_B; // net ID: RXDISPERR0 lsb: 0  msb: 7 OUTPUT
			this->RXDISPERR1_A0_B = RXDISPERR1_A0_B; // net ID: RXDISPERR1 lsb: 0  msb: 7 OUTPUT
			this->RXDISPERR1_A1_B = RXDISPERR1_A1_B; // net ID: RXDISPERR1 lsb: 0  msb: 7 OUTPUT
			this->RXDISPERR1_A2_B = RXDISPERR1_A2_B; // net ID: RXDISPERR1 lsb: 0  msb: 7 OUTPUT
			this->RXDISPERR1_A3_B = RXDISPERR1_A3_B; // net ID: RXDISPERR1 lsb: 0  msb: 7 OUTPUT
			this->RXDISPERR1_A4_B = RXDISPERR1_A4_B; // net ID: RXDISPERR1 lsb: 0  msb: 7 OUTPUT
			this->RXDISPERR1_A5_B = RXDISPERR1_A5_B; // net ID: RXDISPERR1 lsb: 0  msb: 7 OUTPUT
			this->RXDISPERR1_A6_B = RXDISPERR1_A6_B; // net ID: RXDISPERR1 lsb: 0  msb: 7 OUTPUT
			this->RXDISPERR1_A7_B = RXDISPERR1_A7_B; // net ID: RXDISPERR1 lsb: 0  msb: 7 OUTPUT
			this->RXDISPERR2_A0_B = RXDISPERR2_A0_B; // net ID: RXDISPERR2 lsb: 0  msb: 7 OUTPUT
			this->RXDISPERR2_A1_B = RXDISPERR2_A1_B; // net ID: RXDISPERR2 lsb: 0  msb: 7 OUTPUT
			this->RXDISPERR2_A2_B = RXDISPERR2_A2_B; // net ID: RXDISPERR2 lsb: 0  msb: 7 OUTPUT
			this->RXDISPERR2_A3_B = RXDISPERR2_A3_B; // net ID: RXDISPERR2 lsb: 0  msb: 7 OUTPUT
			this->RXDISPERR2_A4_B = RXDISPERR2_A4_B; // net ID: RXDISPERR2 lsb: 0  msb: 7 OUTPUT
			this->RXDISPERR2_A5_B = RXDISPERR2_A5_B; // net ID: RXDISPERR2 lsb: 0  msb: 7 OUTPUT
			this->RXDISPERR2_A6_B = RXDISPERR2_A6_B; // net ID: RXDISPERR2 lsb: 0  msb: 7 OUTPUT
			this->RXDISPERR2_A7_B = RXDISPERR2_A7_B; // net ID: RXDISPERR2 lsb: 0  msb: 7 OUTPUT
			this->RXDISPERR3_A0_B = RXDISPERR3_A0_B; // net ID: RXDISPERR3 lsb: 0  msb: 7 OUTPUT
			this->RXDISPERR3_A1_B = RXDISPERR3_A1_B; // net ID: RXDISPERR3 lsb: 0  msb: 7 OUTPUT
			this->RXDISPERR3_A2_B = RXDISPERR3_A2_B; // net ID: RXDISPERR3 lsb: 0  msb: 7 OUTPUT
			this->RXDISPERR3_A3_B = RXDISPERR3_A3_B; // net ID: RXDISPERR3 lsb: 0  msb: 7 OUTPUT
			this->RXDISPERR3_A4_B = RXDISPERR3_A4_B; // net ID: RXDISPERR3 lsb: 0  msb: 7 OUTPUT
			this->RXDISPERR3_A5_B = RXDISPERR3_A5_B; // net ID: RXDISPERR3 lsb: 0  msb: 7 OUTPUT
			this->RXDISPERR3_A6_B = RXDISPERR3_A6_B; // net ID: RXDISPERR3 lsb: 0  msb: 7 OUTPUT
			this->RXDISPERR3_A7_B = RXDISPERR3_A7_B; // net ID: RXDISPERR3 lsb: 0  msb: 7 OUTPUT
			this->RXPCSCLKSMPL0_A0_B = RXPCSCLKSMPL0_A0_B; // net ID: RXPCSCLKSMPL0 lsb: 0  msb: 0 OUTPUT
			this->RXPCSCLKSMPL1_A0_B = RXPCSCLKSMPL1_A0_B; // net ID: RXPCSCLKSMPL1 lsb: 0  msb: 0 OUTPUT
			this->RXPCSCLKSMPL2_A0_B = RXPCSCLKSMPL2_A0_B; // net ID: RXPCSCLKSMPL2 lsb: 0  msb: 0 OUTPUT
			this->RXPCSCLKSMPL3_A0_B = RXPCSCLKSMPL3_A0_B; // net ID: RXPCSCLKSMPL3 lsb: 0  msb: 0 OUTPUT
			this->RXUSERCLKOUT0_A0_B = RXUSERCLKOUT0_A0_B; // net ID: RXUSERCLKOUT0 lsb: 0  msb: 0 OUTPUT
			this->RXUSERCLKOUT1_A0_B = RXUSERCLKOUT1_A0_B; // net ID: RXUSERCLKOUT1 lsb: 0  msb: 0 OUTPUT
			this->RXUSERCLKOUT2_A0_B = RXUSERCLKOUT2_A0_B; // net ID: RXUSERCLKOUT2 lsb: 0  msb: 0 OUTPUT
			this->RXUSERCLKOUT3_A0_B = RXUSERCLKOUT3_A0_B; // net ID: RXUSERCLKOUT3 lsb: 0  msb: 0 OUTPUT
			this->RXVALID0_A0_B = RXVALID0_A0_B; // net ID: RXVALID0 lsb: 0  msb: 7 OUTPUT
			this->RXVALID0_A1_B = RXVALID0_A1_B; // net ID: RXVALID0 lsb: 0  msb: 7 OUTPUT
			this->RXVALID0_A2_B = RXVALID0_A2_B; // net ID: RXVALID0 lsb: 0  msb: 7 OUTPUT
			this->RXVALID0_A3_B = RXVALID0_A3_B; // net ID: RXVALID0 lsb: 0  msb: 7 OUTPUT
			this->RXVALID0_A4_B = RXVALID0_A4_B; // net ID: RXVALID0 lsb: 0  msb: 7 OUTPUT
			this->RXVALID0_A5_B = RXVALID0_A5_B; // net ID: RXVALID0 lsb: 0  msb: 7 OUTPUT
			this->RXVALID0_A6_B = RXVALID0_A6_B; // net ID: RXVALID0 lsb: 0  msb: 7 OUTPUT
			this->RXVALID0_A7_B = RXVALID0_A7_B; // net ID: RXVALID0 lsb: 0  msb: 7 OUTPUT
			this->RXVALID1_A0_B = RXVALID1_A0_B; // net ID: RXVALID1 lsb: 0  msb: 7 OUTPUT
			this->RXVALID1_A1_B = RXVALID1_A1_B; // net ID: RXVALID1 lsb: 0  msb: 7 OUTPUT
			this->RXVALID1_A2_B = RXVALID1_A2_B; // net ID: RXVALID1 lsb: 0  msb: 7 OUTPUT
			this->RXVALID1_A3_B = RXVALID1_A3_B; // net ID: RXVALID1 lsb: 0  msb: 7 OUTPUT
			this->RXVALID1_A4_B = RXVALID1_A4_B; // net ID: RXVALID1 lsb: 0  msb: 7 OUTPUT
			this->RXVALID1_A5_B = RXVALID1_A5_B; // net ID: RXVALID1 lsb: 0  msb: 7 OUTPUT
			this->RXVALID1_A6_B = RXVALID1_A6_B; // net ID: RXVALID1 lsb: 0  msb: 7 OUTPUT
			this->RXVALID1_A7_B = RXVALID1_A7_B; // net ID: RXVALID1 lsb: 0  msb: 7 OUTPUT
			this->RXVALID2_A0_B = RXVALID2_A0_B; // net ID: RXVALID2 lsb: 0  msb: 7 OUTPUT
			this->RXVALID2_A1_B = RXVALID2_A1_B; // net ID: RXVALID2 lsb: 0  msb: 7 OUTPUT
			this->RXVALID2_A2_B = RXVALID2_A2_B; // net ID: RXVALID2 lsb: 0  msb: 7 OUTPUT
			this->RXVALID2_A3_B = RXVALID2_A3_B; // net ID: RXVALID2 lsb: 0  msb: 7 OUTPUT
			this->RXVALID2_A4_B = RXVALID2_A4_B; // net ID: RXVALID2 lsb: 0  msb: 7 OUTPUT
			this->RXVALID2_A5_B = RXVALID2_A5_B; // net ID: RXVALID2 lsb: 0  msb: 7 OUTPUT
			this->RXVALID2_A6_B = RXVALID2_A6_B; // net ID: RXVALID2 lsb: 0  msb: 7 OUTPUT
			this->RXVALID2_A7_B = RXVALID2_A7_B; // net ID: RXVALID2 lsb: 0  msb: 7 OUTPUT
			this->RXVALID3_A0_B = RXVALID3_A0_B; // net ID: RXVALID3 lsb: 0  msb: 7 OUTPUT
			this->RXVALID3_A1_B = RXVALID3_A1_B; // net ID: RXVALID3 lsb: 0  msb: 7 OUTPUT
			this->RXVALID3_A2_B = RXVALID3_A2_B; // net ID: RXVALID3 lsb: 0  msb: 7 OUTPUT
			this->RXVALID3_A3_B = RXVALID3_A3_B; // net ID: RXVALID3 lsb: 0  msb: 7 OUTPUT
			this->RXVALID3_A4_B = RXVALID3_A4_B; // net ID: RXVALID3 lsb: 0  msb: 7 OUTPUT
			this->RXVALID3_A5_B = RXVALID3_A5_B; // net ID: RXVALID3 lsb: 0  msb: 7 OUTPUT
			this->RXVALID3_A6_B = RXVALID3_A6_B; // net ID: RXVALID3 lsb: 0  msb: 7 OUTPUT
			this->RXVALID3_A7_B = RXVALID3_A7_B; // net ID: RXVALID3 lsb: 0  msb: 7 OUTPUT
			this->TSTPATH_A0_B = TSTPATH_A0_B; // net ID: TSTPATH lsb: 0  msb: 0 OUTPUT
			this->TSTREFCLKFAB_A0_B = TSTREFCLKFAB_A0_B; // net ID: TSTREFCLKFAB lsb: 0  msb: 0 OUTPUT
			this->TSTREFCLKOUT_A0_B = TSTREFCLKOUT_A0_B; // net ID: TSTREFCLKOUT lsb: 0  msb: 0 OUTPUT
			this->TXCTRLACK0_A0_B = TXCTRLACK0_A0_B; // net ID: TXCTRLACK0 lsb: 0  msb: 0 OUTPUT
			this->TXCTRLACK1_A0_B = TXCTRLACK1_A0_B; // net ID: TXCTRLACK1 lsb: 0  msb: 0 OUTPUT
			this->TXCTRLACK2_A0_B = TXCTRLACK2_A0_B; // net ID: TXCTRLACK2 lsb: 0  msb: 0 OUTPUT
			this->TXCTRLACK3_A0_B = TXCTRLACK3_A0_B; // net ID: TXCTRLACK3 lsb: 0  msb: 0 OUTPUT
			this->TXDATATAP10_A0_B = TXDATATAP10_A0_B; // net ID: TXDATATAP10 lsb: 0  msb: 0 OUTPUT
			this->TXDATATAP11_A0_B = TXDATATAP11_A0_B; // net ID: TXDATATAP11 lsb: 0  msb: 0 OUTPUT
			this->TXDATATAP12_A0_B = TXDATATAP12_A0_B; // net ID: TXDATATAP12 lsb: 0  msb: 0 OUTPUT
			this->TXDATATAP13_A0_B = TXDATATAP13_A0_B; // net ID: TXDATATAP13 lsb: 0  msb: 0 OUTPUT
			this->TXDATATAP20_A0_B = TXDATATAP20_A0_B; // net ID: TXDATATAP20 lsb: 0  msb: 0 OUTPUT
			this->TXDATATAP21_A0_B = TXDATATAP21_A0_B; // net ID: TXDATATAP21 lsb: 0  msb: 0 OUTPUT
			this->TXDATATAP22_A0_B = TXDATATAP22_A0_B; // net ID: TXDATATAP22 lsb: 0  msb: 0 OUTPUT
			this->TXDATATAP23_A0_B = TXDATATAP23_A0_B; // net ID: TXDATATAP23 lsb: 0  msb: 0 OUTPUT
			this->TXN0_A0_B = TXN0_A0_B; // net ID: TXN0 lsb: 0  msb: 0 OUTPUT
			this->TXN1_A0_B = TXN1_A0_B; // net ID: TXN1 lsb: 0  msb: 0 OUTPUT
			this->TXN2_A0_B = TXN2_A0_B; // net ID: TXN2 lsb: 0  msb: 0 OUTPUT
			this->TXN3_A0_B = TXN3_A0_B; // net ID: TXN3 lsb: 0  msb: 0 OUTPUT
			this->TXP0_A0_B = TXP0_A0_B; // net ID: TXP0 lsb: 0  msb: 0 OUTPUT
			this->TXP1_A0_B = TXP1_A0_B; // net ID: TXP1 lsb: 0  msb: 0 OUTPUT
			this->TXP2_A0_B = TXP2_A0_B; // net ID: TXP2 lsb: 0  msb: 0 OUTPUT
			this->TXP3_A0_B = TXP3_A0_B; // net ID: TXP3 lsb: 0  msb: 0 OUTPUT
			this->TXPCSCLKSMPL0_A0_B = TXPCSCLKSMPL0_A0_B; // net ID: TXPCSCLKSMPL0 lsb: 0  msb: 0 OUTPUT
			this->TXPCSCLKSMPL1_A0_B = TXPCSCLKSMPL1_A0_B; // net ID: TXPCSCLKSMPL1 lsb: 0  msb: 0 OUTPUT
			this->TXPCSCLKSMPL2_A0_B = TXPCSCLKSMPL2_A0_B; // net ID: TXPCSCLKSMPL2 lsb: 0  msb: 0 OUTPUT
			this->TXPCSCLKSMPL3_A0_B = TXPCSCLKSMPL3_A0_B; // net ID: TXPCSCLKSMPL3 lsb: 0  msb: 0 OUTPUT
			this->TXUSERCLKOUT0_A0_B = TXUSERCLKOUT0_A0_B; // net ID: TXUSERCLKOUT0 lsb: 0  msb: 0 OUTPUT
			this->TXUSERCLKOUT1_A0_B = TXUSERCLKOUT1_A0_B; // net ID: TXUSERCLKOUT1 lsb: 0  msb: 0 OUTPUT
			this->TXUSERCLKOUT2_A0_B = TXUSERCLKOUT2_A0_B; // net ID: TXUSERCLKOUT2 lsb: 0  msb: 0 OUTPUT
			this->TXUSERCLKOUT3_A0_B = TXUSERCLKOUT3_A0_B; // net ID: TXUSERCLKOUT3 lsb: 0  msb: 0 OUTPUT
			this->DADDR_A0_B = DADDR_A0_B; // net ID: DADDR lsb: 0  msb: 15 INPUT
			this->DADDR_A1_B = DADDR_A1_B; // net ID: DADDR lsb: 0  msb: 15 INPUT
			this->DADDR_A2_B = DADDR_A2_B; // net ID: DADDR lsb: 0  msb: 15 INPUT
			this->DADDR_A3_B = DADDR_A3_B; // net ID: DADDR lsb: 0  msb: 15 INPUT
			this->DADDR_A4_B = DADDR_A4_B; // net ID: DADDR lsb: 0  msb: 15 INPUT
			this->DADDR_A5_B = DADDR_A5_B; // net ID: DADDR lsb: 0  msb: 15 INPUT
			this->DADDR_A6_B = DADDR_A6_B; // net ID: DADDR lsb: 0  msb: 15 INPUT
			this->DADDR_A7_B = DADDR_A7_B; // net ID: DADDR lsb: 0  msb: 15 INPUT
			this->DADDR_A8_B = DADDR_A8_B; // net ID: DADDR lsb: 0  msb: 15 INPUT
			this->DADDR_A9_B = DADDR_A9_B; // net ID: DADDR lsb: 0  msb: 15 INPUT
			this->DADDR_A10_B = DADDR_A10_B; // net ID: DADDR lsb: 0  msb: 15 INPUT
			this->DADDR_A11_B = DADDR_A11_B; // net ID: DADDR lsb: 0  msb: 15 INPUT
			this->DADDR_A12_B = DADDR_A12_B; // net ID: DADDR lsb: 0  msb: 15 INPUT
			this->DADDR_A13_B = DADDR_A13_B; // net ID: DADDR lsb: 0  msb: 15 INPUT
			this->DADDR_A14_B = DADDR_A14_B; // net ID: DADDR lsb: 0  msb: 15 INPUT
			this->DADDR_A15_B = DADDR_A15_B; // net ID: DADDR lsb: 0  msb: 15 INPUT
			this->DCLK_A0_B = DCLK_A0_B; // net ID: DCLK lsb: 0  msb: 0 INPUT
			this->DEN_A0_B = DEN_A0_B; // net ID: DEN lsb: 0  msb: 0 INPUT
			this->DFETRAINCTRL0_A0_B = DFETRAINCTRL0_A0_B; // net ID: DFETRAINCTRL0 lsb: 0  msb: 0 INPUT
			this->DFETRAINCTRL1_A0_B = DFETRAINCTRL1_A0_B; // net ID: DFETRAINCTRL1 lsb: 0  msb: 0 INPUT
			this->DFETRAINCTRL2_A0_B = DFETRAINCTRL2_A0_B; // net ID: DFETRAINCTRL2 lsb: 0  msb: 0 INPUT
			this->DFETRAINCTRL3_A0_B = DFETRAINCTRL3_A0_B; // net ID: DFETRAINCTRL3 lsb: 0  msb: 0 INPUT
			this->DI_A0_B = DI_A0_B; // net ID: DI lsb: 0  msb: 15 INPUT
			this->DI_A1_B = DI_A1_B; // net ID: DI lsb: 0  msb: 15 INPUT
			this->DI_A2_B = DI_A2_B; // net ID: DI lsb: 0  msb: 15 INPUT
			this->DI_A3_B = DI_A3_B; // net ID: DI lsb: 0  msb: 15 INPUT
			this->DI_A4_B = DI_A4_B; // net ID: DI lsb: 0  msb: 15 INPUT
			this->DI_A5_B = DI_A5_B; // net ID: DI lsb: 0  msb: 15 INPUT
			this->DI_A6_B = DI_A6_B; // net ID: DI lsb: 0  msb: 15 INPUT
			this->DI_A7_B = DI_A7_B; // net ID: DI lsb: 0  msb: 15 INPUT
			this->DI_A8_B = DI_A8_B; // net ID: DI lsb: 0  msb: 15 INPUT
			this->DI_A9_B = DI_A9_B; // net ID: DI lsb: 0  msb: 15 INPUT
			this->DI_A10_B = DI_A10_B; // net ID: DI lsb: 0  msb: 15 INPUT
			this->DI_A11_B = DI_A11_B; // net ID: DI lsb: 0  msb: 15 INPUT
			this->DI_A12_B = DI_A12_B; // net ID: DI lsb: 0  msb: 15 INPUT
			this->DI_A13_B = DI_A13_B; // net ID: DI lsb: 0  msb: 15 INPUT
			this->DI_A14_B = DI_A14_B; // net ID: DI lsb: 0  msb: 15 INPUT
			this->DI_A15_B = DI_A15_B; // net ID: DI lsb: 0  msb: 15 INPUT
			this->DISABLEDRP_A0_B = DISABLEDRP_A0_B; // net ID: DISABLEDRP lsb: 0  msb: 0 INPUT
			this->DWE_A0_B = DWE_A0_B; // net ID: DWE lsb: 0  msb: 0 INPUT
			this->GTHINIT_A0_B = GTHINIT_A0_B; // net ID: GTHINIT lsb: 0  msb: 0 INPUT
			this->GTHRESET_A0_B = GTHRESET_A0_B; // net ID: GTHRESET lsb: 0  msb: 0 INPUT
			this->GTHX2LANE01_A0_B = GTHX2LANE01_A0_B; // net ID: GTHX2LANE01 lsb: 0  msb: 0 INPUT
			this->GTHX2LANE23_A0_B = GTHX2LANE23_A0_B; // net ID: GTHX2LANE23 lsb: 0  msb: 0 INPUT
			this->GTHX4LANE_A0_B = GTHX4LANE_A0_B; // net ID: GTHX4LANE lsb: 0  msb: 0 INPUT
			this->MGMTPCSLANESEL_A0_B = MGMTPCSLANESEL_A0_B; // net ID: MGMTPCSLANESEL lsb: 0  msb: 3 INPUT
			this->MGMTPCSLANESEL_A1_B = MGMTPCSLANESEL_A1_B; // net ID: MGMTPCSLANESEL lsb: 0  msb: 3 INPUT
			this->MGMTPCSLANESEL_A2_B = MGMTPCSLANESEL_A2_B; // net ID: MGMTPCSLANESEL lsb: 0  msb: 3 INPUT
			this->MGMTPCSLANESEL_A3_B = MGMTPCSLANESEL_A3_B; // net ID: MGMTPCSLANESEL lsb: 0  msb: 3 INPUT
			this->MGMTPCSMMDADDR_A0_B = MGMTPCSMMDADDR_A0_B; // net ID: MGMTPCSMMDADDR lsb: 0  msb: 4 INPUT
			this->MGMTPCSMMDADDR_A1_B = MGMTPCSMMDADDR_A1_B; // net ID: MGMTPCSMMDADDR lsb: 0  msb: 4 INPUT
			this->MGMTPCSMMDADDR_A2_B = MGMTPCSMMDADDR_A2_B; // net ID: MGMTPCSMMDADDR lsb: 0  msb: 4 INPUT
			this->MGMTPCSMMDADDR_A3_B = MGMTPCSMMDADDR_A3_B; // net ID: MGMTPCSMMDADDR lsb: 0  msb: 4 INPUT
			this->MGMTPCSMMDADDR_A4_B = MGMTPCSMMDADDR_A4_B; // net ID: MGMTPCSMMDADDR lsb: 0  msb: 4 INPUT
			this->MGMTPCSREGADDR_A0_B = MGMTPCSREGADDR_A0_B; // net ID: MGMTPCSREGADDR lsb: 0  msb: 15 INPUT
			this->MGMTPCSREGADDR_A1_B = MGMTPCSREGADDR_A1_B; // net ID: MGMTPCSREGADDR lsb: 0  msb: 15 INPUT
			this->MGMTPCSREGADDR_A2_B = MGMTPCSREGADDR_A2_B; // net ID: MGMTPCSREGADDR lsb: 0  msb: 15 INPUT
			this->MGMTPCSREGADDR_A3_B = MGMTPCSREGADDR_A3_B; // net ID: MGMTPCSREGADDR lsb: 0  msb: 15 INPUT
			this->MGMTPCSREGADDR_A4_B = MGMTPCSREGADDR_A4_B; // net ID: MGMTPCSREGADDR lsb: 0  msb: 15 INPUT
			this->MGMTPCSREGADDR_A5_B = MGMTPCSREGADDR_A5_B; // net ID: MGMTPCSREGADDR lsb: 0  msb: 15 INPUT
			this->MGMTPCSREGADDR_A6_B = MGMTPCSREGADDR_A6_B; // net ID: MGMTPCSREGADDR lsb: 0  msb: 15 INPUT
			this->MGMTPCSREGADDR_A7_B = MGMTPCSREGADDR_A7_B; // net ID: MGMTPCSREGADDR lsb: 0  msb: 15 INPUT
			this->MGMTPCSREGADDR_A8_B = MGMTPCSREGADDR_A8_B; // net ID: MGMTPCSREGADDR lsb: 0  msb: 15 INPUT
			this->MGMTPCSREGADDR_A9_B = MGMTPCSREGADDR_A9_B; // net ID: MGMTPCSREGADDR lsb: 0  msb: 15 INPUT
			this->MGMTPCSREGADDR_A10_B = MGMTPCSREGADDR_A10_B; // net ID: MGMTPCSREGADDR lsb: 0  msb: 15 INPUT
			this->MGMTPCSREGADDR_A11_B = MGMTPCSREGADDR_A11_B; // net ID: MGMTPCSREGADDR lsb: 0  msb: 15 INPUT
			this->MGMTPCSREGADDR_A12_B = MGMTPCSREGADDR_A12_B; // net ID: MGMTPCSREGADDR lsb: 0  msb: 15 INPUT
			this->MGMTPCSREGADDR_A13_B = MGMTPCSREGADDR_A13_B; // net ID: MGMTPCSREGADDR lsb: 0  msb: 15 INPUT
			this->MGMTPCSREGADDR_A14_B = MGMTPCSREGADDR_A14_B; // net ID: MGMTPCSREGADDR lsb: 0  msb: 15 INPUT
			this->MGMTPCSREGADDR_A15_B = MGMTPCSREGADDR_A15_B; // net ID: MGMTPCSREGADDR lsb: 0  msb: 15 INPUT
			this->MGMTPCSREGRD_A0_B = MGMTPCSREGRD_A0_B; // net ID: MGMTPCSREGRD lsb: 0  msb: 0 INPUT
			this->MGMTPCSREGWR_A0_B = MGMTPCSREGWR_A0_B; // net ID: MGMTPCSREGWR lsb: 0  msb: 0 INPUT
			this->MGMTPCSWRDATA_A0_B = MGMTPCSWRDATA_A0_B; // net ID: MGMTPCSWRDATA lsb: 0  msb: 15 INPUT
			this->MGMTPCSWRDATA_A1_B = MGMTPCSWRDATA_A1_B; // net ID: MGMTPCSWRDATA lsb: 0  msb: 15 INPUT
			this->MGMTPCSWRDATA_A2_B = MGMTPCSWRDATA_A2_B; // net ID: MGMTPCSWRDATA lsb: 0  msb: 15 INPUT
			this->MGMTPCSWRDATA_A3_B = MGMTPCSWRDATA_A3_B; // net ID: MGMTPCSWRDATA lsb: 0  msb: 15 INPUT
			this->MGMTPCSWRDATA_A4_B = MGMTPCSWRDATA_A4_B; // net ID: MGMTPCSWRDATA lsb: 0  msb: 15 INPUT
			this->MGMTPCSWRDATA_A5_B = MGMTPCSWRDATA_A5_B; // net ID: MGMTPCSWRDATA lsb: 0  msb: 15 INPUT
			this->MGMTPCSWRDATA_A6_B = MGMTPCSWRDATA_A6_B; // net ID: MGMTPCSWRDATA lsb: 0  msb: 15 INPUT
			this->MGMTPCSWRDATA_A7_B = MGMTPCSWRDATA_A7_B; // net ID: MGMTPCSWRDATA lsb: 0  msb: 15 INPUT
			this->MGMTPCSWRDATA_A8_B = MGMTPCSWRDATA_A8_B; // net ID: MGMTPCSWRDATA lsb: 0  msb: 15 INPUT
			this->MGMTPCSWRDATA_A9_B = MGMTPCSWRDATA_A9_B; // net ID: MGMTPCSWRDATA lsb: 0  msb: 15 INPUT
			this->MGMTPCSWRDATA_A10_B = MGMTPCSWRDATA_A10_B; // net ID: MGMTPCSWRDATA lsb: 0  msb: 15 INPUT
			this->MGMTPCSWRDATA_A11_B = MGMTPCSWRDATA_A11_B; // net ID: MGMTPCSWRDATA lsb: 0  msb: 15 INPUT
			this->MGMTPCSWRDATA_A12_B = MGMTPCSWRDATA_A12_B; // net ID: MGMTPCSWRDATA lsb: 0  msb: 15 INPUT
			this->MGMTPCSWRDATA_A13_B = MGMTPCSWRDATA_A13_B; // net ID: MGMTPCSWRDATA lsb: 0  msb: 15 INPUT
			this->MGMTPCSWRDATA_A14_B = MGMTPCSWRDATA_A14_B; // net ID: MGMTPCSWRDATA lsb: 0  msb: 15 INPUT
			this->MGMTPCSWRDATA_A15_B = MGMTPCSWRDATA_A15_B; // net ID: MGMTPCSWRDATA lsb: 0  msb: 15 INPUT
			this->PLLPCSCLKDIV_A0_B = PLLPCSCLKDIV_A0_B; // net ID: PLLPCSCLKDIV lsb: 0  msb: 5 INPUT
			this->PLLPCSCLKDIV_A1_B = PLLPCSCLKDIV_A1_B; // net ID: PLLPCSCLKDIV lsb: 0  msb: 5 INPUT
			this->PLLPCSCLKDIV_A2_B = PLLPCSCLKDIV_A2_B; // net ID: PLLPCSCLKDIV lsb: 0  msb: 5 INPUT
			this->PLLPCSCLKDIV_A3_B = PLLPCSCLKDIV_A3_B; // net ID: PLLPCSCLKDIV lsb: 0  msb: 5 INPUT
			this->PLLPCSCLKDIV_A4_B = PLLPCSCLKDIV_A4_B; // net ID: PLLPCSCLKDIV lsb: 0  msb: 5 INPUT
			this->PLLPCSCLKDIV_A5_B = PLLPCSCLKDIV_A5_B; // net ID: PLLPCSCLKDIV lsb: 0  msb: 5 INPUT
			this->PLLREFCLKSEL_A0_B = PLLREFCLKSEL_A0_B; // net ID: PLLREFCLKSEL lsb: 0  msb: 2 INPUT
			this->PLLREFCLKSEL_A1_B = PLLREFCLKSEL_A1_B; // net ID: PLLREFCLKSEL lsb: 0  msb: 2 INPUT
			this->PLLREFCLKSEL_A2_B = PLLREFCLKSEL_A2_B; // net ID: PLLREFCLKSEL lsb: 0  msb: 2 INPUT
			this->POWERDOWN0_A0_B = POWERDOWN0_A0_B; // net ID: POWERDOWN0 lsb: 0  msb: 0 INPUT
			this->POWERDOWN1_A0_B = POWERDOWN1_A0_B; // net ID: POWERDOWN1 lsb: 0  msb: 0 INPUT
			this->POWERDOWN2_A0_B = POWERDOWN2_A0_B; // net ID: POWERDOWN2 lsb: 0  msb: 0 INPUT
			this->POWERDOWN3_A0_B = POWERDOWN3_A0_B; // net ID: POWERDOWN3 lsb: 0  msb: 0 INPUT
			this->REFCLK_A0_B = REFCLK_A0_B; // net ID: REFCLK lsb: 0  msb: 0 INPUT
			this->RXBUFRESET0_A0_B = RXBUFRESET0_A0_B; // net ID: RXBUFRESET0 lsb: 0  msb: 0 INPUT
			this->RXBUFRESET1_A0_B = RXBUFRESET1_A0_B; // net ID: RXBUFRESET1 lsb: 0  msb: 0 INPUT
			this->RXBUFRESET2_A0_B = RXBUFRESET2_A0_B; // net ID: RXBUFRESET2 lsb: 0  msb: 0 INPUT
			this->RXBUFRESET3_A0_B = RXBUFRESET3_A0_B; // net ID: RXBUFRESET3 lsb: 0  msb: 0 INPUT
			this->RXENCOMMADET0_A0_B = RXENCOMMADET0_A0_B; // net ID: RXENCOMMADET0 lsb: 0  msb: 0 INPUT
			this->RXENCOMMADET1_A0_B = RXENCOMMADET1_A0_B; // net ID: RXENCOMMADET1 lsb: 0  msb: 0 INPUT
			this->RXENCOMMADET2_A0_B = RXENCOMMADET2_A0_B; // net ID: RXENCOMMADET2 lsb: 0  msb: 0 INPUT
			this->RXENCOMMADET3_A0_B = RXENCOMMADET3_A0_B; // net ID: RXENCOMMADET3 lsb: 0  msb: 0 INPUT
			this->RXN0_A0_B = RXN0_A0_B; // net ID: RXN0 lsb: 0  msb: 0 INPUT
			this->RXN1_A0_B = RXN1_A0_B; // net ID: RXN1 lsb: 0  msb: 0 INPUT
			this->RXN2_A0_B = RXN2_A0_B; // net ID: RXN2 lsb: 0  msb: 0 INPUT
			this->RXN3_A0_B = RXN3_A0_B; // net ID: RXN3 lsb: 0  msb: 0 INPUT
			this->RXP0_A0_B = RXP0_A0_B; // net ID: RXP0 lsb: 0  msb: 0 INPUT
			this->RXP1_A0_B = RXP1_A0_B; // net ID: RXP1 lsb: 0  msb: 0 INPUT
			this->RXP2_A0_B = RXP2_A0_B; // net ID: RXP2 lsb: 0  msb: 0 INPUT
			this->RXP3_A0_B = RXP3_A0_B; // net ID: RXP3 lsb: 0  msb: 0 INPUT
			this->RXPOLARITY0_A0_B = RXPOLARITY0_A0_B; // net ID: RXPOLARITY0 lsb: 0  msb: 0 INPUT
			this->RXPOLARITY1_A0_B = RXPOLARITY1_A0_B; // net ID: RXPOLARITY1 lsb: 0  msb: 0 INPUT
			this->RXPOLARITY2_A0_B = RXPOLARITY2_A0_B; // net ID: RXPOLARITY2 lsb: 0  msb: 0 INPUT
			this->RXPOLARITY3_A0_B = RXPOLARITY3_A0_B; // net ID: RXPOLARITY3 lsb: 0  msb: 0 INPUT
			this->RXPOWERDOWN0_A0_B = RXPOWERDOWN0_A0_B; // net ID: RXPOWERDOWN0 lsb: 0  msb: 1 INPUT
			this->RXPOWERDOWN0_A1_B = RXPOWERDOWN0_A1_B; // net ID: RXPOWERDOWN0 lsb: 0  msb: 1 INPUT
			this->RXPOWERDOWN1_A0_B = RXPOWERDOWN1_A0_B; // net ID: RXPOWERDOWN1 lsb: 0  msb: 1 INPUT
			this->RXPOWERDOWN1_A1_B = RXPOWERDOWN1_A1_B; // net ID: RXPOWERDOWN1 lsb: 0  msb: 1 INPUT
			this->RXPOWERDOWN2_A0_B = RXPOWERDOWN2_A0_B; // net ID: RXPOWERDOWN2 lsb: 0  msb: 1 INPUT
			this->RXPOWERDOWN2_A1_B = RXPOWERDOWN2_A1_B; // net ID: RXPOWERDOWN2 lsb: 0  msb: 1 INPUT
			this->RXPOWERDOWN3_A0_B = RXPOWERDOWN3_A0_B; // net ID: RXPOWERDOWN3 lsb: 0  msb: 1 INPUT
			this->RXPOWERDOWN3_A1_B = RXPOWERDOWN3_A1_B; // net ID: RXPOWERDOWN3 lsb: 0  msb: 1 INPUT
			this->RXRATE0_A0_B = RXRATE0_A0_B; // net ID: RXRATE0 lsb: 0  msb: 1 INPUT
			this->RXRATE0_A1_B = RXRATE0_A1_B; // net ID: RXRATE0 lsb: 0  msb: 1 INPUT
			this->RXRATE1_A0_B = RXRATE1_A0_B; // net ID: RXRATE1 lsb: 0  msb: 1 INPUT
			this->RXRATE1_A1_B = RXRATE1_A1_B; // net ID: RXRATE1 lsb: 0  msb: 1 INPUT
			this->RXRATE2_A0_B = RXRATE2_A0_B; // net ID: RXRATE2 lsb: 0  msb: 1 INPUT
			this->RXRATE2_A1_B = RXRATE2_A1_B; // net ID: RXRATE2 lsb: 0  msb: 1 INPUT
			this->RXRATE3_A0_B = RXRATE3_A0_B; // net ID: RXRATE3 lsb: 0  msb: 1 INPUT
			this->RXRATE3_A1_B = RXRATE3_A1_B; // net ID: RXRATE3 lsb: 0  msb: 1 INPUT
			this->RXSLIP0_A0_B = RXSLIP0_A0_B; // net ID: RXSLIP0 lsb: 0  msb: 0 INPUT
			this->RXSLIP1_A0_B = RXSLIP1_A0_B; // net ID: RXSLIP1 lsb: 0  msb: 0 INPUT
			this->RXSLIP2_A0_B = RXSLIP2_A0_B; // net ID: RXSLIP2 lsb: 0  msb: 0 INPUT
			this->RXSLIP3_A0_B = RXSLIP3_A0_B; // net ID: RXSLIP3 lsb: 0  msb: 0 INPUT
			this->RXUSERCLKIN0_A0_B = RXUSERCLKIN0_A0_B; // net ID: RXUSERCLKIN0 lsb: 0  msb: 0 INPUT
			this->RXUSERCLKIN1_A0_B = RXUSERCLKIN1_A0_B; // net ID: RXUSERCLKIN1 lsb: 0  msb: 0 INPUT
			this->RXUSERCLKIN2_A0_B = RXUSERCLKIN2_A0_B; // net ID: RXUSERCLKIN2 lsb: 0  msb: 0 INPUT
			this->RXUSERCLKIN3_A0_B = RXUSERCLKIN3_A0_B; // net ID: RXUSERCLKIN3 lsb: 0  msb: 0 INPUT
			this->SAMPLERATE0_A0_B = SAMPLERATE0_A0_B; // net ID: SAMPLERATE0 lsb: 0  msb: 2 INPUT
			this->SAMPLERATE0_A1_B = SAMPLERATE0_A1_B; // net ID: SAMPLERATE0 lsb: 0  msb: 2 INPUT
			this->SAMPLERATE0_A2_B = SAMPLERATE0_A2_B; // net ID: SAMPLERATE0 lsb: 0  msb: 2 INPUT
			this->SAMPLERATE1_A0_B = SAMPLERATE1_A0_B; // net ID: SAMPLERATE1 lsb: 0  msb: 2 INPUT
			this->SAMPLERATE1_A1_B = SAMPLERATE1_A1_B; // net ID: SAMPLERATE1 lsb: 0  msb: 2 INPUT
			this->SAMPLERATE1_A2_B = SAMPLERATE1_A2_B; // net ID: SAMPLERATE1 lsb: 0  msb: 2 INPUT
			this->SAMPLERATE2_A0_B = SAMPLERATE2_A0_B; // net ID: SAMPLERATE2 lsb: 0  msb: 2 INPUT
			this->SAMPLERATE2_A1_B = SAMPLERATE2_A1_B; // net ID: SAMPLERATE2 lsb: 0  msb: 2 INPUT
			this->SAMPLERATE2_A2_B = SAMPLERATE2_A2_B; // net ID: SAMPLERATE2 lsb: 0  msb: 2 INPUT
			this->SAMPLERATE3_A0_B = SAMPLERATE3_A0_B; // net ID: SAMPLERATE3 lsb: 0  msb: 2 INPUT
			this->SAMPLERATE3_A1_B = SAMPLERATE3_A1_B; // net ID: SAMPLERATE3 lsb: 0  msb: 2 INPUT
			this->SAMPLERATE3_A2_B = SAMPLERATE3_A2_B; // net ID: SAMPLERATE3 lsb: 0  msb: 2 INPUT
			this->TXBUFRESET0_A0_B = TXBUFRESET0_A0_B; // net ID: TXBUFRESET0 lsb: 0  msb: 0 INPUT
			this->TXBUFRESET1_A0_B = TXBUFRESET1_A0_B; // net ID: TXBUFRESET1 lsb: 0  msb: 0 INPUT
			this->TXBUFRESET2_A0_B = TXBUFRESET2_A0_B; // net ID: TXBUFRESET2 lsb: 0  msb: 0 INPUT
			this->TXBUFRESET3_A0_B = TXBUFRESET3_A0_B; // net ID: TXBUFRESET3 lsb: 0  msb: 0 INPUT
			this->TXCTRL0_A0_B = TXCTRL0_A0_B; // net ID: TXCTRL0 lsb: 0  msb: 7 INPUT
			this->TXCTRL0_A1_B = TXCTRL0_A1_B; // net ID: TXCTRL0 lsb: 0  msb: 7 INPUT
			this->TXCTRL0_A2_B = TXCTRL0_A2_B; // net ID: TXCTRL0 lsb: 0  msb: 7 INPUT
			this->TXCTRL0_A3_B = TXCTRL0_A3_B; // net ID: TXCTRL0 lsb: 0  msb: 7 INPUT
			this->TXCTRL0_A4_B = TXCTRL0_A4_B; // net ID: TXCTRL0 lsb: 0  msb: 7 INPUT
			this->TXCTRL0_A5_B = TXCTRL0_A5_B; // net ID: TXCTRL0 lsb: 0  msb: 7 INPUT
			this->TXCTRL0_A6_B = TXCTRL0_A6_B; // net ID: TXCTRL0 lsb: 0  msb: 7 INPUT
			this->TXCTRL0_A7_B = TXCTRL0_A7_B; // net ID: TXCTRL0 lsb: 0  msb: 7 INPUT
			this->TXCTRL1_A0_B = TXCTRL1_A0_B; // net ID: TXCTRL1 lsb: 0  msb: 7 INPUT
			this->TXCTRL1_A1_B = TXCTRL1_A1_B; // net ID: TXCTRL1 lsb: 0  msb: 7 INPUT
			this->TXCTRL1_A2_B = TXCTRL1_A2_B; // net ID: TXCTRL1 lsb: 0  msb: 7 INPUT
			this->TXCTRL1_A3_B = TXCTRL1_A3_B; // net ID: TXCTRL1 lsb: 0  msb: 7 INPUT
			this->TXCTRL1_A4_B = TXCTRL1_A4_B; // net ID: TXCTRL1 lsb: 0  msb: 7 INPUT
			this->TXCTRL1_A5_B = TXCTRL1_A5_B; // net ID: TXCTRL1 lsb: 0  msb: 7 INPUT
			this->TXCTRL1_A6_B = TXCTRL1_A6_B; // net ID: TXCTRL1 lsb: 0  msb: 7 INPUT
			this->TXCTRL1_A7_B = TXCTRL1_A7_B; // net ID: TXCTRL1 lsb: 0  msb: 7 INPUT
			this->TXCTRL2_A0_B = TXCTRL2_A0_B; // net ID: TXCTRL2 lsb: 0  msb: 7 INPUT
			this->TXCTRL2_A1_B = TXCTRL2_A1_B; // net ID: TXCTRL2 lsb: 0  msb: 7 INPUT
			this->TXCTRL2_A2_B = TXCTRL2_A2_B; // net ID: TXCTRL2 lsb: 0  msb: 7 INPUT
			this->TXCTRL2_A3_B = TXCTRL2_A3_B; // net ID: TXCTRL2 lsb: 0  msb: 7 INPUT
			this->TXCTRL2_A4_B = TXCTRL2_A4_B; // net ID: TXCTRL2 lsb: 0  msb: 7 INPUT
			this->TXCTRL2_A5_B = TXCTRL2_A5_B; // net ID: TXCTRL2 lsb: 0  msb: 7 INPUT
			this->TXCTRL2_A6_B = TXCTRL2_A6_B; // net ID: TXCTRL2 lsb: 0  msb: 7 INPUT
			this->TXCTRL2_A7_B = TXCTRL2_A7_B; // net ID: TXCTRL2 lsb: 0  msb: 7 INPUT
			this->TXCTRL3_A0_B = TXCTRL3_A0_B; // net ID: TXCTRL3 lsb: 0  msb: 7 INPUT
			this->TXCTRL3_A1_B = TXCTRL3_A1_B; // net ID: TXCTRL3 lsb: 0  msb: 7 INPUT
			this->TXCTRL3_A2_B = TXCTRL3_A2_B; // net ID: TXCTRL3 lsb: 0  msb: 7 INPUT
			this->TXCTRL3_A3_B = TXCTRL3_A3_B; // net ID: TXCTRL3 lsb: 0  msb: 7 INPUT
			this->TXCTRL3_A4_B = TXCTRL3_A4_B; // net ID: TXCTRL3 lsb: 0  msb: 7 INPUT
			this->TXCTRL3_A5_B = TXCTRL3_A5_B; // net ID: TXCTRL3 lsb: 0  msb: 7 INPUT
			this->TXCTRL3_A6_B = TXCTRL3_A6_B; // net ID: TXCTRL3 lsb: 0  msb: 7 INPUT
			this->TXCTRL3_A7_B = TXCTRL3_A7_B; // net ID: TXCTRL3 lsb: 0  msb: 7 INPUT
			this->TXDATA0_A0_B = TXDATA0_A0_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			this->TXDATA0_A1_B = TXDATA0_A1_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			this->TXDATA0_A2_B = TXDATA0_A2_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			this->TXDATA0_A3_B = TXDATA0_A3_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			this->TXDATA0_A4_B = TXDATA0_A4_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			this->TXDATA0_A5_B = TXDATA0_A5_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			this->TXDATA0_A6_B = TXDATA0_A6_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			this->TXDATA0_A7_B = TXDATA0_A7_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			this->TXDATA0_A8_B = TXDATA0_A8_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			this->TXDATA0_A9_B = TXDATA0_A9_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			this->TXDATA0_A10_B = TXDATA0_A10_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			this->TXDATA0_A11_B = TXDATA0_A11_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			this->TXDATA0_A12_B = TXDATA0_A12_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			this->TXDATA0_A13_B = TXDATA0_A13_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			this->TXDATA0_A14_B = TXDATA0_A14_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			this->TXDATA0_A15_B = TXDATA0_A15_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			this->TXDATA0_A16_B = TXDATA0_A16_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			this->TXDATA0_A17_B = TXDATA0_A17_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			this->TXDATA0_A18_B = TXDATA0_A18_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			this->TXDATA0_A19_B = TXDATA0_A19_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			this->TXDATA0_A20_B = TXDATA0_A20_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			this->TXDATA0_A21_B = TXDATA0_A21_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			this->TXDATA0_A22_B = TXDATA0_A22_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			this->TXDATA0_A23_B = TXDATA0_A23_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			this->TXDATA0_A24_B = TXDATA0_A24_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			this->TXDATA0_A25_B = TXDATA0_A25_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			this->TXDATA0_A26_B = TXDATA0_A26_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			this->TXDATA0_A27_B = TXDATA0_A27_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			this->TXDATA0_A28_B = TXDATA0_A28_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			this->TXDATA0_A29_B = TXDATA0_A29_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			this->TXDATA0_A30_B = TXDATA0_A30_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			this->TXDATA0_A31_B = TXDATA0_A31_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			this->TXDATA0_A32_B = TXDATA0_A32_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			this->TXDATA0_A33_B = TXDATA0_A33_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			this->TXDATA0_A34_B = TXDATA0_A34_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			this->TXDATA0_A35_B = TXDATA0_A35_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			this->TXDATA0_A36_B = TXDATA0_A36_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			this->TXDATA0_A37_B = TXDATA0_A37_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			this->TXDATA0_A38_B = TXDATA0_A38_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			this->TXDATA0_A39_B = TXDATA0_A39_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			this->TXDATA0_A40_B = TXDATA0_A40_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			this->TXDATA0_A41_B = TXDATA0_A41_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			this->TXDATA0_A42_B = TXDATA0_A42_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			this->TXDATA0_A43_B = TXDATA0_A43_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			this->TXDATA0_A44_B = TXDATA0_A44_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			this->TXDATA0_A45_B = TXDATA0_A45_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			this->TXDATA0_A46_B = TXDATA0_A46_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			this->TXDATA0_A47_B = TXDATA0_A47_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			this->TXDATA0_A48_B = TXDATA0_A48_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			this->TXDATA0_A49_B = TXDATA0_A49_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			this->TXDATA0_A50_B = TXDATA0_A50_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			this->TXDATA0_A51_B = TXDATA0_A51_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			this->TXDATA0_A52_B = TXDATA0_A52_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			this->TXDATA0_A53_B = TXDATA0_A53_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			this->TXDATA0_A54_B = TXDATA0_A54_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			this->TXDATA0_A55_B = TXDATA0_A55_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			this->TXDATA0_A56_B = TXDATA0_A56_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			this->TXDATA0_A57_B = TXDATA0_A57_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			this->TXDATA0_A58_B = TXDATA0_A58_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			this->TXDATA0_A59_B = TXDATA0_A59_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			this->TXDATA0_A60_B = TXDATA0_A60_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			this->TXDATA0_A61_B = TXDATA0_A61_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			this->TXDATA0_A62_B = TXDATA0_A62_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			this->TXDATA0_A63_B = TXDATA0_A63_B; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			this->TXDATA1_A0_B = TXDATA1_A0_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			this->TXDATA1_A1_B = TXDATA1_A1_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			this->TXDATA1_A2_B = TXDATA1_A2_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			this->TXDATA1_A3_B = TXDATA1_A3_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			this->TXDATA1_A4_B = TXDATA1_A4_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			this->TXDATA1_A5_B = TXDATA1_A5_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			this->TXDATA1_A6_B = TXDATA1_A6_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			this->TXDATA1_A7_B = TXDATA1_A7_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			this->TXDATA1_A8_B = TXDATA1_A8_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			this->TXDATA1_A9_B = TXDATA1_A9_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			this->TXDATA1_A10_B = TXDATA1_A10_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			this->TXDATA1_A11_B = TXDATA1_A11_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			this->TXDATA1_A12_B = TXDATA1_A12_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			this->TXDATA1_A13_B = TXDATA1_A13_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			this->TXDATA1_A14_B = TXDATA1_A14_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			this->TXDATA1_A15_B = TXDATA1_A15_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			this->TXDATA1_A16_B = TXDATA1_A16_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			this->TXDATA1_A17_B = TXDATA1_A17_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			this->TXDATA1_A18_B = TXDATA1_A18_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			this->TXDATA1_A19_B = TXDATA1_A19_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			this->TXDATA1_A20_B = TXDATA1_A20_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			this->TXDATA1_A21_B = TXDATA1_A21_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			this->TXDATA1_A22_B = TXDATA1_A22_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			this->TXDATA1_A23_B = TXDATA1_A23_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			this->TXDATA1_A24_B = TXDATA1_A24_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			this->TXDATA1_A25_B = TXDATA1_A25_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			this->TXDATA1_A26_B = TXDATA1_A26_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			this->TXDATA1_A27_B = TXDATA1_A27_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			this->TXDATA1_A28_B = TXDATA1_A28_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			this->TXDATA1_A29_B = TXDATA1_A29_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			this->TXDATA1_A30_B = TXDATA1_A30_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			this->TXDATA1_A31_B = TXDATA1_A31_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			this->TXDATA1_A32_B = TXDATA1_A32_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			this->TXDATA1_A33_B = TXDATA1_A33_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			this->TXDATA1_A34_B = TXDATA1_A34_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			this->TXDATA1_A35_B = TXDATA1_A35_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			this->TXDATA1_A36_B = TXDATA1_A36_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			this->TXDATA1_A37_B = TXDATA1_A37_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			this->TXDATA1_A38_B = TXDATA1_A38_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			this->TXDATA1_A39_B = TXDATA1_A39_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			this->TXDATA1_A40_B = TXDATA1_A40_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			this->TXDATA1_A41_B = TXDATA1_A41_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			this->TXDATA1_A42_B = TXDATA1_A42_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			this->TXDATA1_A43_B = TXDATA1_A43_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			this->TXDATA1_A44_B = TXDATA1_A44_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			this->TXDATA1_A45_B = TXDATA1_A45_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			this->TXDATA1_A46_B = TXDATA1_A46_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			this->TXDATA1_A47_B = TXDATA1_A47_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			this->TXDATA1_A48_B = TXDATA1_A48_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			this->TXDATA1_A49_B = TXDATA1_A49_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			this->TXDATA1_A50_B = TXDATA1_A50_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			this->TXDATA1_A51_B = TXDATA1_A51_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			this->TXDATA1_A52_B = TXDATA1_A52_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			this->TXDATA1_A53_B = TXDATA1_A53_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			this->TXDATA1_A54_B = TXDATA1_A54_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			this->TXDATA1_A55_B = TXDATA1_A55_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			this->TXDATA1_A56_B = TXDATA1_A56_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			this->TXDATA1_A57_B = TXDATA1_A57_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			this->TXDATA1_A58_B = TXDATA1_A58_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			this->TXDATA1_A59_B = TXDATA1_A59_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			this->TXDATA1_A60_B = TXDATA1_A60_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			this->TXDATA1_A61_B = TXDATA1_A61_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			this->TXDATA1_A62_B = TXDATA1_A62_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			this->TXDATA1_A63_B = TXDATA1_A63_B; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			this->TXDATA2_A0_B = TXDATA2_A0_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			this->TXDATA2_A1_B = TXDATA2_A1_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			this->TXDATA2_A2_B = TXDATA2_A2_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			this->TXDATA2_A3_B = TXDATA2_A3_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			this->TXDATA2_A4_B = TXDATA2_A4_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			this->TXDATA2_A5_B = TXDATA2_A5_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			this->TXDATA2_A6_B = TXDATA2_A6_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			this->TXDATA2_A7_B = TXDATA2_A7_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			this->TXDATA2_A8_B = TXDATA2_A8_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			this->TXDATA2_A9_B = TXDATA2_A9_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			this->TXDATA2_A10_B = TXDATA2_A10_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			this->TXDATA2_A11_B = TXDATA2_A11_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			this->TXDATA2_A12_B = TXDATA2_A12_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			this->TXDATA2_A13_B = TXDATA2_A13_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			this->TXDATA2_A14_B = TXDATA2_A14_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			this->TXDATA2_A15_B = TXDATA2_A15_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			this->TXDATA2_A16_B = TXDATA2_A16_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			this->TXDATA2_A17_B = TXDATA2_A17_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			this->TXDATA2_A18_B = TXDATA2_A18_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			this->TXDATA2_A19_B = TXDATA2_A19_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			this->TXDATA2_A20_B = TXDATA2_A20_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			this->TXDATA2_A21_B = TXDATA2_A21_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			this->TXDATA2_A22_B = TXDATA2_A22_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			this->TXDATA2_A23_B = TXDATA2_A23_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			this->TXDATA2_A24_B = TXDATA2_A24_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			this->TXDATA2_A25_B = TXDATA2_A25_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			this->TXDATA2_A26_B = TXDATA2_A26_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			this->TXDATA2_A27_B = TXDATA2_A27_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			this->TXDATA2_A28_B = TXDATA2_A28_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			this->TXDATA2_A29_B = TXDATA2_A29_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			this->TXDATA2_A30_B = TXDATA2_A30_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			this->TXDATA2_A31_B = TXDATA2_A31_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			this->TXDATA2_A32_B = TXDATA2_A32_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			this->TXDATA2_A33_B = TXDATA2_A33_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			this->TXDATA2_A34_B = TXDATA2_A34_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			this->TXDATA2_A35_B = TXDATA2_A35_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			this->TXDATA2_A36_B = TXDATA2_A36_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			this->TXDATA2_A37_B = TXDATA2_A37_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			this->TXDATA2_A38_B = TXDATA2_A38_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			this->TXDATA2_A39_B = TXDATA2_A39_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			this->TXDATA2_A40_B = TXDATA2_A40_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			this->TXDATA2_A41_B = TXDATA2_A41_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			this->TXDATA2_A42_B = TXDATA2_A42_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			this->TXDATA2_A43_B = TXDATA2_A43_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			this->TXDATA2_A44_B = TXDATA2_A44_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			this->TXDATA2_A45_B = TXDATA2_A45_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			this->TXDATA2_A46_B = TXDATA2_A46_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			this->TXDATA2_A47_B = TXDATA2_A47_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			this->TXDATA2_A48_B = TXDATA2_A48_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			this->TXDATA2_A49_B = TXDATA2_A49_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			this->TXDATA2_A50_B = TXDATA2_A50_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			this->TXDATA2_A51_B = TXDATA2_A51_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			this->TXDATA2_A52_B = TXDATA2_A52_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			this->TXDATA2_A53_B = TXDATA2_A53_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			this->TXDATA2_A54_B = TXDATA2_A54_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			this->TXDATA2_A55_B = TXDATA2_A55_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			this->TXDATA2_A56_B = TXDATA2_A56_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			this->TXDATA2_A57_B = TXDATA2_A57_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			this->TXDATA2_A58_B = TXDATA2_A58_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			this->TXDATA2_A59_B = TXDATA2_A59_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			this->TXDATA2_A60_B = TXDATA2_A60_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			this->TXDATA2_A61_B = TXDATA2_A61_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			this->TXDATA2_A62_B = TXDATA2_A62_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			this->TXDATA2_A63_B = TXDATA2_A63_B; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			this->TXDATA3_A0_B = TXDATA3_A0_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			this->TXDATA3_A1_B = TXDATA3_A1_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			this->TXDATA3_A2_B = TXDATA3_A2_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			this->TXDATA3_A3_B = TXDATA3_A3_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			this->TXDATA3_A4_B = TXDATA3_A4_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			this->TXDATA3_A5_B = TXDATA3_A5_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			this->TXDATA3_A6_B = TXDATA3_A6_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			this->TXDATA3_A7_B = TXDATA3_A7_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			this->TXDATA3_A8_B = TXDATA3_A8_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			this->TXDATA3_A9_B = TXDATA3_A9_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			this->TXDATA3_A10_B = TXDATA3_A10_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			this->TXDATA3_A11_B = TXDATA3_A11_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			this->TXDATA3_A12_B = TXDATA3_A12_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			this->TXDATA3_A13_B = TXDATA3_A13_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			this->TXDATA3_A14_B = TXDATA3_A14_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			this->TXDATA3_A15_B = TXDATA3_A15_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			this->TXDATA3_A16_B = TXDATA3_A16_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			this->TXDATA3_A17_B = TXDATA3_A17_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			this->TXDATA3_A18_B = TXDATA3_A18_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			this->TXDATA3_A19_B = TXDATA3_A19_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			this->TXDATA3_A20_B = TXDATA3_A20_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			this->TXDATA3_A21_B = TXDATA3_A21_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			this->TXDATA3_A22_B = TXDATA3_A22_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			this->TXDATA3_A23_B = TXDATA3_A23_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			this->TXDATA3_A24_B = TXDATA3_A24_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			this->TXDATA3_A25_B = TXDATA3_A25_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			this->TXDATA3_A26_B = TXDATA3_A26_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			this->TXDATA3_A27_B = TXDATA3_A27_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			this->TXDATA3_A28_B = TXDATA3_A28_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			this->TXDATA3_A29_B = TXDATA3_A29_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			this->TXDATA3_A30_B = TXDATA3_A30_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			this->TXDATA3_A31_B = TXDATA3_A31_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			this->TXDATA3_A32_B = TXDATA3_A32_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			this->TXDATA3_A33_B = TXDATA3_A33_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			this->TXDATA3_A34_B = TXDATA3_A34_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			this->TXDATA3_A35_B = TXDATA3_A35_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			this->TXDATA3_A36_B = TXDATA3_A36_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			this->TXDATA3_A37_B = TXDATA3_A37_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			this->TXDATA3_A38_B = TXDATA3_A38_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			this->TXDATA3_A39_B = TXDATA3_A39_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			this->TXDATA3_A40_B = TXDATA3_A40_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			this->TXDATA3_A41_B = TXDATA3_A41_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			this->TXDATA3_A42_B = TXDATA3_A42_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			this->TXDATA3_A43_B = TXDATA3_A43_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			this->TXDATA3_A44_B = TXDATA3_A44_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			this->TXDATA3_A45_B = TXDATA3_A45_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			this->TXDATA3_A46_B = TXDATA3_A46_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			this->TXDATA3_A47_B = TXDATA3_A47_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			this->TXDATA3_A48_B = TXDATA3_A48_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			this->TXDATA3_A49_B = TXDATA3_A49_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			this->TXDATA3_A50_B = TXDATA3_A50_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			this->TXDATA3_A51_B = TXDATA3_A51_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			this->TXDATA3_A52_B = TXDATA3_A52_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			this->TXDATA3_A53_B = TXDATA3_A53_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			this->TXDATA3_A54_B = TXDATA3_A54_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			this->TXDATA3_A55_B = TXDATA3_A55_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			this->TXDATA3_A56_B = TXDATA3_A56_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			this->TXDATA3_A57_B = TXDATA3_A57_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			this->TXDATA3_A58_B = TXDATA3_A58_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			this->TXDATA3_A59_B = TXDATA3_A59_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			this->TXDATA3_A60_B = TXDATA3_A60_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			this->TXDATA3_A61_B = TXDATA3_A61_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			this->TXDATA3_A62_B = TXDATA3_A62_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			this->TXDATA3_A63_B = TXDATA3_A63_B; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			this->TXDATAMSB0_A0_B = TXDATAMSB0_A0_B; // net ID: TXDATAMSB0 lsb: 0  msb: 7 INPUT
			this->TXDATAMSB0_A1_B = TXDATAMSB0_A1_B; // net ID: TXDATAMSB0 lsb: 0  msb: 7 INPUT
			this->TXDATAMSB0_A2_B = TXDATAMSB0_A2_B; // net ID: TXDATAMSB0 lsb: 0  msb: 7 INPUT
			this->TXDATAMSB0_A3_B = TXDATAMSB0_A3_B; // net ID: TXDATAMSB0 lsb: 0  msb: 7 INPUT
			this->TXDATAMSB0_A4_B = TXDATAMSB0_A4_B; // net ID: TXDATAMSB0 lsb: 0  msb: 7 INPUT
			this->TXDATAMSB0_A5_B = TXDATAMSB0_A5_B; // net ID: TXDATAMSB0 lsb: 0  msb: 7 INPUT
			this->TXDATAMSB0_A6_B = TXDATAMSB0_A6_B; // net ID: TXDATAMSB0 lsb: 0  msb: 7 INPUT
			this->TXDATAMSB0_A7_B = TXDATAMSB0_A7_B; // net ID: TXDATAMSB0 lsb: 0  msb: 7 INPUT
			this->TXDATAMSB1_A0_B = TXDATAMSB1_A0_B; // net ID: TXDATAMSB1 lsb: 0  msb: 7 INPUT
			this->TXDATAMSB1_A1_B = TXDATAMSB1_A1_B; // net ID: TXDATAMSB1 lsb: 0  msb: 7 INPUT
			this->TXDATAMSB1_A2_B = TXDATAMSB1_A2_B; // net ID: TXDATAMSB1 lsb: 0  msb: 7 INPUT
			this->TXDATAMSB1_A3_B = TXDATAMSB1_A3_B; // net ID: TXDATAMSB1 lsb: 0  msb: 7 INPUT
			this->TXDATAMSB1_A4_B = TXDATAMSB1_A4_B; // net ID: TXDATAMSB1 lsb: 0  msb: 7 INPUT
			this->TXDATAMSB1_A5_B = TXDATAMSB1_A5_B; // net ID: TXDATAMSB1 lsb: 0  msb: 7 INPUT
			this->TXDATAMSB1_A6_B = TXDATAMSB1_A6_B; // net ID: TXDATAMSB1 lsb: 0  msb: 7 INPUT
			this->TXDATAMSB1_A7_B = TXDATAMSB1_A7_B; // net ID: TXDATAMSB1 lsb: 0  msb: 7 INPUT
			this->TXDATAMSB2_A0_B = TXDATAMSB2_A0_B; // net ID: TXDATAMSB2 lsb: 0  msb: 7 INPUT
			this->TXDATAMSB2_A1_B = TXDATAMSB2_A1_B; // net ID: TXDATAMSB2 lsb: 0  msb: 7 INPUT
			this->TXDATAMSB2_A2_B = TXDATAMSB2_A2_B; // net ID: TXDATAMSB2 lsb: 0  msb: 7 INPUT
			this->TXDATAMSB2_A3_B = TXDATAMSB2_A3_B; // net ID: TXDATAMSB2 lsb: 0  msb: 7 INPUT
			this->TXDATAMSB2_A4_B = TXDATAMSB2_A4_B; // net ID: TXDATAMSB2 lsb: 0  msb: 7 INPUT
			this->TXDATAMSB2_A5_B = TXDATAMSB2_A5_B; // net ID: TXDATAMSB2 lsb: 0  msb: 7 INPUT
			this->TXDATAMSB2_A6_B = TXDATAMSB2_A6_B; // net ID: TXDATAMSB2 lsb: 0  msb: 7 INPUT
			this->TXDATAMSB2_A7_B = TXDATAMSB2_A7_B; // net ID: TXDATAMSB2 lsb: 0  msb: 7 INPUT
			this->TXDATAMSB3_A0_B = TXDATAMSB3_A0_B; // net ID: TXDATAMSB3 lsb: 0  msb: 7 INPUT
			this->TXDATAMSB3_A1_B = TXDATAMSB3_A1_B; // net ID: TXDATAMSB3 lsb: 0  msb: 7 INPUT
			this->TXDATAMSB3_A2_B = TXDATAMSB3_A2_B; // net ID: TXDATAMSB3 lsb: 0  msb: 7 INPUT
			this->TXDATAMSB3_A3_B = TXDATAMSB3_A3_B; // net ID: TXDATAMSB3 lsb: 0  msb: 7 INPUT
			this->TXDATAMSB3_A4_B = TXDATAMSB3_A4_B; // net ID: TXDATAMSB3 lsb: 0  msb: 7 INPUT
			this->TXDATAMSB3_A5_B = TXDATAMSB3_A5_B; // net ID: TXDATAMSB3 lsb: 0  msb: 7 INPUT
			this->TXDATAMSB3_A6_B = TXDATAMSB3_A6_B; // net ID: TXDATAMSB3 lsb: 0  msb: 7 INPUT
			this->TXDATAMSB3_A7_B = TXDATAMSB3_A7_B; // net ID: TXDATAMSB3 lsb: 0  msb: 7 INPUT
			this->TXDEEMPH0_A0_B = TXDEEMPH0_A0_B; // net ID: TXDEEMPH0 lsb: 0  msb: 0 INPUT
			this->TXDEEMPH1_A0_B = TXDEEMPH1_A0_B; // net ID: TXDEEMPH1 lsb: 0  msb: 0 INPUT
			this->TXDEEMPH2_A0_B = TXDEEMPH2_A0_B; // net ID: TXDEEMPH2 lsb: 0  msb: 0 INPUT
			this->TXDEEMPH3_A0_B = TXDEEMPH3_A0_B; // net ID: TXDEEMPH3 lsb: 0  msb: 0 INPUT
			this->TXMARGIN0_A0_B = TXMARGIN0_A0_B; // net ID: TXMARGIN0 lsb: 0  msb: 2 INPUT
			this->TXMARGIN0_A1_B = TXMARGIN0_A1_B; // net ID: TXMARGIN0 lsb: 0  msb: 2 INPUT
			this->TXMARGIN0_A2_B = TXMARGIN0_A2_B; // net ID: TXMARGIN0 lsb: 0  msb: 2 INPUT
			this->TXMARGIN1_A0_B = TXMARGIN1_A0_B; // net ID: TXMARGIN1 lsb: 0  msb: 2 INPUT
			this->TXMARGIN1_A1_B = TXMARGIN1_A1_B; // net ID: TXMARGIN1 lsb: 0  msb: 2 INPUT
			this->TXMARGIN1_A2_B = TXMARGIN1_A2_B; // net ID: TXMARGIN1 lsb: 0  msb: 2 INPUT
			this->TXMARGIN2_A0_B = TXMARGIN2_A0_B; // net ID: TXMARGIN2 lsb: 0  msb: 2 INPUT
			this->TXMARGIN2_A1_B = TXMARGIN2_A1_B; // net ID: TXMARGIN2 lsb: 0  msb: 2 INPUT
			this->TXMARGIN2_A2_B = TXMARGIN2_A2_B; // net ID: TXMARGIN2 lsb: 0  msb: 2 INPUT
			this->TXMARGIN3_A0_B = TXMARGIN3_A0_B; // net ID: TXMARGIN3 lsb: 0  msb: 2 INPUT
			this->TXMARGIN3_A1_B = TXMARGIN3_A1_B; // net ID: TXMARGIN3 lsb: 0  msb: 2 INPUT
			this->TXMARGIN3_A2_B = TXMARGIN3_A2_B; // net ID: TXMARGIN3 lsb: 0  msb: 2 INPUT
			this->TXPOWERDOWN0_A0_B = TXPOWERDOWN0_A0_B; // net ID: TXPOWERDOWN0 lsb: 0  msb: 1 INPUT
			this->TXPOWERDOWN0_A1_B = TXPOWERDOWN0_A1_B; // net ID: TXPOWERDOWN0 lsb: 0  msb: 1 INPUT
			this->TXPOWERDOWN1_A0_B = TXPOWERDOWN1_A0_B; // net ID: TXPOWERDOWN1 lsb: 0  msb: 1 INPUT
			this->TXPOWERDOWN1_A1_B = TXPOWERDOWN1_A1_B; // net ID: TXPOWERDOWN1 lsb: 0  msb: 1 INPUT
			this->TXPOWERDOWN2_A0_B = TXPOWERDOWN2_A0_B; // net ID: TXPOWERDOWN2 lsb: 0  msb: 1 INPUT
			this->TXPOWERDOWN2_A1_B = TXPOWERDOWN2_A1_B; // net ID: TXPOWERDOWN2 lsb: 0  msb: 1 INPUT
			this->TXPOWERDOWN3_A0_B = TXPOWERDOWN3_A0_B; // net ID: TXPOWERDOWN3 lsb: 0  msb: 1 INPUT
			this->TXPOWERDOWN3_A1_B = TXPOWERDOWN3_A1_B; // net ID: TXPOWERDOWN3 lsb: 0  msb: 1 INPUT
			this->TXRATE0_A0_B = TXRATE0_A0_B; // net ID: TXRATE0 lsb: 0  msb: 1 INPUT
			this->TXRATE0_A1_B = TXRATE0_A1_B; // net ID: TXRATE0 lsb: 0  msb: 1 INPUT
			this->TXRATE1_A0_B = TXRATE1_A0_B; // net ID: TXRATE1 lsb: 0  msb: 1 INPUT
			this->TXRATE1_A1_B = TXRATE1_A1_B; // net ID: TXRATE1 lsb: 0  msb: 1 INPUT
			this->TXRATE2_A0_B = TXRATE2_A0_B; // net ID: TXRATE2 lsb: 0  msb: 1 INPUT
			this->TXRATE2_A1_B = TXRATE2_A1_B; // net ID: TXRATE2 lsb: 0  msb: 1 INPUT
			this->TXRATE3_A0_B = TXRATE3_A0_B; // net ID: TXRATE3 lsb: 0  msb: 1 INPUT
			this->TXRATE3_A1_B = TXRATE3_A1_B; // net ID: TXRATE3 lsb: 0  msb: 1 INPUT
			this->TXUSERCLKIN0_A0_B = TXUSERCLKIN0_A0_B; // net ID: TXUSERCLKIN0 lsb: 0  msb: 0 INPUT
			this->TXUSERCLKIN1_A0_B = TXUSERCLKIN1_A0_B; // net ID: TXUSERCLKIN1 lsb: 0  msb: 0 INPUT
			this->TXUSERCLKIN2_A0_B = TXUSERCLKIN2_A0_B; // net ID: TXUSERCLKIN2 lsb: 0  msb: 0 INPUT
			this->TXUSERCLKIN3_A0_B = TXUSERCLKIN3_A0_B; // net ID: TXUSERCLKIN3 lsb: 0  msb: 0 INPUT
			
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
#endif // X_GTHE1_QUAD_H
