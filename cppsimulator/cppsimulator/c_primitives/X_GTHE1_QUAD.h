/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_GTHE1_QUAD: public Primitive{

		//Verilog Parameters:
		parameter_string_t LOC;
		parameter_string_t BER_CONST_PTRN0;
		parameter_string_t BER_CONST_PTRN1;
		parameter_string_t BUFFER_CONFIG_LANE0;
		parameter_string_t BUFFER_CONFIG_LANE1;
		parameter_string_t BUFFER_CONFIG_LANE2;
		parameter_string_t BUFFER_CONFIG_LANE3;
		parameter_string_t DFE_TRAIN_CTRL_LANE0;
		parameter_string_t DFE_TRAIN_CTRL_LANE1;
		parameter_string_t DFE_TRAIN_CTRL_LANE2;
		parameter_string_t DFE_TRAIN_CTRL_LANE3;
		parameter_string_t DLL_CFG0;
		parameter_string_t DLL_CFG1;
		parameter_string_t E10GBASEKR_LD_COEFF_UPD_LANE0;
		parameter_string_t E10GBASEKR_LD_COEFF_UPD_LANE1;
		parameter_string_t E10GBASEKR_LD_COEFF_UPD_LANE2;
		parameter_string_t E10GBASEKR_LD_COEFF_UPD_LANE3;
		parameter_string_t E10GBASEKR_LP_COEFF_UPD_LANE0;
		parameter_string_t E10GBASEKR_LP_COEFF_UPD_LANE1;
		parameter_string_t E10GBASEKR_LP_COEFF_UPD_LANE2;
		parameter_string_t E10GBASEKR_LP_COEFF_UPD_LANE3;
		parameter_string_t E10GBASEKR_PMA_CTRL_LANE0;
		parameter_string_t E10GBASEKR_PMA_CTRL_LANE1;
		parameter_string_t E10GBASEKR_PMA_CTRL_LANE2;
		parameter_string_t E10GBASEKR_PMA_CTRL_LANE3;
		parameter_string_t E10GBASEKX_CTRL_LANE0;
		parameter_string_t E10GBASEKX_CTRL_LANE1;
		parameter_string_t E10GBASEKX_CTRL_LANE2;
		parameter_string_t E10GBASEKX_CTRL_LANE3;
		parameter_string_t E10GBASER_PCS_CFG_LANE0;
		parameter_string_t E10GBASER_PCS_CFG_LANE1;
		parameter_string_t E10GBASER_PCS_CFG_LANE2;
		parameter_string_t E10GBASER_PCS_CFG_LANE3;
		parameter_string_t E10GBASER_PCS_SEEDA0_LANE0;
		parameter_string_t E10GBASER_PCS_SEEDA0_LANE1;
		parameter_string_t E10GBASER_PCS_SEEDA0_LANE2;
		parameter_string_t E10GBASER_PCS_SEEDA0_LANE3;
		parameter_string_t E10GBASER_PCS_SEEDA1_LANE0;
		parameter_string_t E10GBASER_PCS_SEEDA1_LANE1;
		parameter_string_t E10GBASER_PCS_SEEDA1_LANE2;
		parameter_string_t E10GBASER_PCS_SEEDA1_LANE3;
		parameter_string_t E10GBASER_PCS_SEEDA2_LANE0;
		parameter_string_t E10GBASER_PCS_SEEDA2_LANE1;
		parameter_string_t E10GBASER_PCS_SEEDA2_LANE2;
		parameter_string_t E10GBASER_PCS_SEEDA2_LANE3;
		parameter_string_t E10GBASER_PCS_SEEDA3_LANE0;
		parameter_string_t E10GBASER_PCS_SEEDA3_LANE1;
		parameter_string_t E10GBASER_PCS_SEEDA3_LANE2;
		parameter_string_t E10GBASER_PCS_SEEDA3_LANE3;
		parameter_string_t E10GBASER_PCS_SEEDB0_LANE0;
		parameter_string_t E10GBASER_PCS_SEEDB0_LANE1;
		parameter_string_t E10GBASER_PCS_SEEDB0_LANE2;
		parameter_string_t E10GBASER_PCS_SEEDB0_LANE3;
		parameter_string_t E10GBASER_PCS_SEEDB1_LANE0;
		parameter_string_t E10GBASER_PCS_SEEDB1_LANE1;
		parameter_string_t E10GBASER_PCS_SEEDB1_LANE2;
		parameter_string_t E10GBASER_PCS_SEEDB1_LANE3;
		parameter_string_t E10GBASER_PCS_SEEDB2_LANE0;
		parameter_string_t E10GBASER_PCS_SEEDB2_LANE1;
		parameter_string_t E10GBASER_PCS_SEEDB2_LANE2;
		parameter_string_t E10GBASER_PCS_SEEDB2_LANE3;
		parameter_string_t E10GBASER_PCS_SEEDB3_LANE0;
		parameter_string_t E10GBASER_PCS_SEEDB3_LANE1;
		parameter_string_t E10GBASER_PCS_SEEDB3_LANE2;
		parameter_string_t E10GBASER_PCS_SEEDB3_LANE3;
		parameter_string_t E10GBASER_PCS_TEST_CTRL_LANE0;
		parameter_string_t E10GBASER_PCS_TEST_CTRL_LANE1;
		parameter_string_t E10GBASER_PCS_TEST_CTRL_LANE2;
		parameter_string_t E10GBASER_PCS_TEST_CTRL_LANE3;
		parameter_string_t E10GBASEX_PCS_TSTCTRL_LANE0;
		parameter_string_t E10GBASEX_PCS_TSTCTRL_LANE1;
		parameter_string_t E10GBASEX_PCS_TSTCTRL_LANE2;
		parameter_string_t E10GBASEX_PCS_TSTCTRL_LANE3;
		parameter_string_t GLBL0_NOISE_CTRL;
		parameter_string_t GLBL_AMON_SEL;
		parameter_string_t GLBL_DMON_SEL;
		parameter_string_t GLBL_PWR_CTRL;
		parameter_string_t GTH_CFG_PWRUP_LANE0;
		parameter_string_t GTH_CFG_PWRUP_LANE1;
		parameter_string_t GTH_CFG_PWRUP_LANE2;
		parameter_string_t GTH_CFG_PWRUP_LANE3;
		parameter_string_t LANE_AMON_SEL;
		parameter_string_t LANE_DMON_SEL;
		parameter_string_t LANE_LNK_CFGOVRD;
		parameter_string_t LANE_PWR_CTRL_LANE0;
		parameter_string_t LANE_PWR_CTRL_LANE1;
		parameter_string_t LANE_PWR_CTRL_LANE2;
		parameter_string_t LANE_PWR_CTRL_LANE3;
		parameter_string_t LNK_TRN_CFG_LANE0;
		parameter_string_t LNK_TRN_CFG_LANE1;
		parameter_string_t LNK_TRN_CFG_LANE2;
		parameter_string_t LNK_TRN_CFG_LANE3;
		parameter_string_t LNK_TRN_COEFF_REQ_LANE0;
		parameter_string_t LNK_TRN_COEFF_REQ_LANE1;
		parameter_string_t LNK_TRN_COEFF_REQ_LANE2;
		parameter_string_t LNK_TRN_COEFF_REQ_LANE3;
		parameter_string_t MISC_CFG;
		parameter_string_t MODE_CFG1;
		parameter_string_t MODE_CFG2;
		parameter_string_t MODE_CFG3;
		parameter_string_t MODE_CFG4;
		parameter_string_t MODE_CFG5;
		parameter_string_t MODE_CFG6;
		parameter_string_t MODE_CFG7;
		parameter_string_t PCS_ABILITY_LANE0;
		parameter_string_t PCS_ABILITY_LANE1;
		parameter_string_t PCS_ABILITY_LANE2;
		parameter_string_t PCS_ABILITY_LANE3;
		parameter_string_t PCS_CTRL1_LANE0;
		parameter_string_t PCS_CTRL1_LANE1;
		parameter_string_t PCS_CTRL1_LANE2;
		parameter_string_t PCS_CTRL1_LANE3;
		parameter_string_t PCS_CTRL2_LANE0;
		parameter_string_t PCS_CTRL2_LANE1;
		parameter_string_t PCS_CTRL2_LANE2;
		parameter_string_t PCS_CTRL2_LANE3;
		parameter_string_t PCS_MISC_CFG_0_LANE0;
		parameter_string_t PCS_MISC_CFG_0_LANE1;
		parameter_string_t PCS_MISC_CFG_0_LANE2;
		parameter_string_t PCS_MISC_CFG_0_LANE3;
		parameter_string_t PCS_MISC_CFG_1_LANE0;
		parameter_string_t PCS_MISC_CFG_1_LANE1;
		parameter_string_t PCS_MISC_CFG_1_LANE2;
		parameter_string_t PCS_MISC_CFG_1_LANE3;
		parameter_string_t PCS_MODE_LANE0;
		parameter_string_t PCS_MODE_LANE1;
		parameter_string_t PCS_MODE_LANE2;
		parameter_string_t PCS_MODE_LANE3;
		parameter_string_t PCS_RESET_1_LANE0;
		parameter_string_t PCS_RESET_1_LANE1;
		parameter_string_t PCS_RESET_1_LANE2;
		parameter_string_t PCS_RESET_1_LANE3;
		parameter_string_t PCS_RESET_LANE0;
		parameter_string_t PCS_RESET_LANE1;
		parameter_string_t PCS_RESET_LANE2;
		parameter_string_t PCS_RESET_LANE3;
		parameter_string_t PCS_TYPE_LANE0;
		parameter_string_t PCS_TYPE_LANE1;
		parameter_string_t PCS_TYPE_LANE2;
		parameter_string_t PCS_TYPE_LANE3;
		parameter_string_t PLL_CFG0;
		parameter_string_t PLL_CFG1;
		parameter_string_t PLL_CFG2;
		parameter_string_t PMA_CTRL1_LANE0;
		parameter_string_t PMA_CTRL1_LANE1;
		parameter_string_t PMA_CTRL1_LANE2;
		parameter_string_t PMA_CTRL1_LANE3;
		parameter_string_t PMA_CTRL2_LANE0;
		parameter_string_t PMA_CTRL2_LANE1;
		parameter_string_t PMA_CTRL2_LANE2;
		parameter_string_t PMA_CTRL2_LANE3;
		parameter_string_t PMA_LPBK_CTRL_LANE0;
		parameter_string_t PMA_LPBK_CTRL_LANE1;
		parameter_string_t PMA_LPBK_CTRL_LANE2;
		parameter_string_t PMA_LPBK_CTRL_LANE3;
		parameter_string_t PRBS_BER_CFG0_LANE0;
		parameter_string_t PRBS_BER_CFG0_LANE1;
		parameter_string_t PRBS_BER_CFG0_LANE2;
		parameter_string_t PRBS_BER_CFG0_LANE3;
		parameter_string_t PRBS_BER_CFG1_LANE0;
		parameter_string_t PRBS_BER_CFG1_LANE1;
		parameter_string_t PRBS_BER_CFG1_LANE2;
		parameter_string_t PRBS_BER_CFG1_LANE3;
		parameter_string_t PRBS_CFG_LANE0;
		parameter_string_t PRBS_CFG_LANE1;
		parameter_string_t PRBS_CFG_LANE2;
		parameter_string_t PRBS_CFG_LANE3;
		parameter_string_t PTRN_CFG0_LSB;
		parameter_string_t PTRN_CFG0_MSB;
		parameter_string_t PTRN_LEN_CFG;
		parameter_string_t PWRUP_DLY;
		parameter_string_t RX_AEQ_VAL0_LANE0;
		parameter_string_t RX_AEQ_VAL0_LANE1;
		parameter_string_t RX_AEQ_VAL0_LANE2;
		parameter_string_t RX_AEQ_VAL0_LANE3;
		parameter_string_t RX_AEQ_VAL1_LANE0;
		parameter_string_t RX_AEQ_VAL1_LANE1;
		parameter_string_t RX_AEQ_VAL1_LANE2;
		parameter_string_t RX_AEQ_VAL1_LANE3;
		parameter_string_t RX_AGC_CTRL_LANE0;
		parameter_string_t RX_AGC_CTRL_LANE1;
		parameter_string_t RX_AGC_CTRL_LANE2;
		parameter_string_t RX_AGC_CTRL_LANE3;
		parameter_string_t RX_CDR_CTRL0_LANE0;
		parameter_string_t RX_CDR_CTRL0_LANE1;
		parameter_string_t RX_CDR_CTRL0_LANE2;
		parameter_string_t RX_CDR_CTRL0_LANE3;
		parameter_string_t RX_CDR_CTRL1_LANE0;
		parameter_string_t RX_CDR_CTRL1_LANE1;
		parameter_string_t RX_CDR_CTRL1_LANE2;
		parameter_string_t RX_CDR_CTRL1_LANE3;
		parameter_string_t RX_CDR_CTRL2_LANE0;
		parameter_string_t RX_CDR_CTRL2_LANE1;
		parameter_string_t RX_CDR_CTRL2_LANE2;
		parameter_string_t RX_CDR_CTRL2_LANE3;
		parameter_string_t RX_CFG0_LANE0;
		parameter_string_t RX_CFG0_LANE1;
		parameter_string_t RX_CFG0_LANE2;
		parameter_string_t RX_CFG0_LANE3;
		parameter_string_t RX_CFG1_LANE0;
		parameter_string_t RX_CFG1_LANE1;
		parameter_string_t RX_CFG1_LANE2;
		parameter_string_t RX_CFG1_LANE3;
		parameter_string_t RX_CFG2_LANE0;
		parameter_string_t RX_CFG2_LANE1;
		parameter_string_t RX_CFG2_LANE2;
		parameter_string_t RX_CFG2_LANE3;
		parameter_string_t RX_CTLE_CTRL_LANE0;
		parameter_string_t RX_CTLE_CTRL_LANE1;
		parameter_string_t RX_CTLE_CTRL_LANE2;
		parameter_string_t RX_CTLE_CTRL_LANE3;
		parameter_string_t RX_CTRL_OVRD_LANE0;
		parameter_string_t RX_CTRL_OVRD_LANE1;
		parameter_string_t RX_CTRL_OVRD_LANE2;
		parameter_string_t RX_CTRL_OVRD_LANE3;
		parameter_string_t RX_FABRIC_WIDTH0;
		parameter_string_t RX_FABRIC_WIDTH1;
		parameter_string_t RX_FABRIC_WIDTH2;
		parameter_string_t RX_FABRIC_WIDTH3;
		parameter_string_t RX_LOOP_CTRL_LANE0;
		parameter_string_t RX_LOOP_CTRL_LANE1;
		parameter_string_t RX_LOOP_CTRL_LANE2;
		parameter_string_t RX_LOOP_CTRL_LANE3;
		parameter_string_t RX_MVAL0_LANE0;
		parameter_string_t RX_MVAL0_LANE1;
		parameter_string_t RX_MVAL0_LANE2;
		parameter_string_t RX_MVAL0_LANE3;
		parameter_string_t RX_MVAL1_LANE0;
		parameter_string_t RX_MVAL1_LANE1;
		parameter_string_t RX_MVAL1_LANE2;
		parameter_string_t RX_MVAL1_LANE3;
		parameter_string_t RX_P0S_CTRL;
		parameter_string_t RX_P0_CTRL;
		parameter_string_t RX_P1_CTRL;
		parameter_string_t RX_P2_CTRL;
		parameter_string_t RX_PI_CTRL0;
		parameter_string_t RX_PI_CTRL1;
		parameter_string_t SIM_GTHRESET_SPEEDUP;
		parameter_string_t SIM_VERSION;
		parameter_string_t SLICE_CFG;
		parameter_string_t SLICE_NOISE_CTRL_0_LANE01;
		parameter_string_t SLICE_NOISE_CTRL_0_LANE23;
		parameter_string_t SLICE_NOISE_CTRL_1_LANE01;
		parameter_string_t SLICE_NOISE_CTRL_1_LANE23;
		parameter_string_t SLICE_NOISE_CTRL_2_LANE01;
		parameter_string_t SLICE_NOISE_CTRL_2_LANE23;
		parameter_string_t SLICE_TX_RESET_LANE01;
		parameter_string_t SLICE_TX_RESET_LANE23;
		parameter_string_t TERM_CTRL_LANE0;
		parameter_string_t TERM_CTRL_LANE1;
		parameter_string_t TERM_CTRL_LANE2;
		parameter_string_t TERM_CTRL_LANE3;
		parameter_string_t TX_CFG0_LANE0;
		parameter_string_t TX_CFG0_LANE1;
		parameter_string_t TX_CFG0_LANE2;
		parameter_string_t TX_CFG0_LANE3;
		parameter_string_t TX_CFG1_LANE0;
		parameter_string_t TX_CFG1_LANE1;
		parameter_string_t TX_CFG1_LANE2;
		parameter_string_t TX_CFG1_LANE3;
		parameter_string_t TX_CFG2_LANE0;
		parameter_string_t TX_CFG2_LANE1;
		parameter_string_t TX_CFG2_LANE2;
		parameter_string_t TX_CFG2_LANE3;
		parameter_string_t TX_CLK_SEL0_LANE0;
		parameter_string_t TX_CLK_SEL0_LANE1;
		parameter_string_t TX_CLK_SEL0_LANE2;
		parameter_string_t TX_CLK_SEL0_LANE3;
		parameter_string_t TX_CLK_SEL1_LANE0;
		parameter_string_t TX_CLK_SEL1_LANE1;
		parameter_string_t TX_CLK_SEL1_LANE2;
		parameter_string_t TX_CLK_SEL1_LANE3;
		parameter_string_t TX_DISABLE_LANE0;
		parameter_string_t TX_DISABLE_LANE1;
		parameter_string_t TX_DISABLE_LANE2;
		parameter_string_t TX_DISABLE_LANE3;
		parameter_string_t TX_FABRIC_WIDTH0;
		parameter_string_t TX_FABRIC_WIDTH1;
		parameter_string_t TX_FABRIC_WIDTH2;
		parameter_string_t TX_FABRIC_WIDTH3;
		parameter_string_t TX_P0P0S_CTRL;
		parameter_string_t TX_P1P2_CTRL;
		parameter_string_t TX_PREEMPH_LANE0;
		parameter_string_t TX_PREEMPH_LANE1;
		parameter_string_t TX_PREEMPH_LANE2;
		parameter_string_t TX_PREEMPH_LANE3;
		parameter_string_t TX_PWR_RATE_OVRD_LANE0;
		parameter_string_t TX_PWR_RATE_OVRD_LANE1;
		parameter_string_t TX_PWR_RATE_OVRD_LANE2;
		parameter_string_t TX_PWR_RATE_OVRD_LANE3;
		//Verilog Ports in definition order:
		NetFlow* DRDY; // net ID: DRDY lsb: 0  msb: 0 OUTPUT
		NetFlow* DRPDO; // net ID: DRPDO lsb: 0  msb: 0 OUTPUT
		NetFlow* GTHINITDONE; // net ID: GTHINITDONE lsb: 0  msb: 0 OUTPUT
		NetFlow* MGMTPCSRDACK; // net ID: MGMTPCSRDACK lsb: 0  msb: 0 OUTPUT
		NetFlow* MGMTPCSRDDATA; // net ID: MGMTPCSRDDATA lsb: 0  msb: 0 OUTPUT
		NetFlow* RXCODEERR0; // net ID: RXCODEERR0 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXCODEERR1; // net ID: RXCODEERR1 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXCODEERR2; // net ID: RXCODEERR2 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXCODEERR3; // net ID: RXCODEERR3 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXCTRL0; // net ID: RXCTRL0 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXCTRL1; // net ID: RXCTRL1 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXCTRL2; // net ID: RXCTRL2 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXCTRL3; // net ID: RXCTRL3 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXCTRLACK0; // net ID: RXCTRLACK0 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXCTRLACK1; // net ID: RXCTRLACK1 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXCTRLACK2; // net ID: RXCTRLACK2 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXCTRLACK3; // net ID: RXCTRLACK3 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXDATA0; // net ID: RXDATA0 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXDATA1; // net ID: RXDATA1 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXDATA2; // net ID: RXDATA2 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXDATA3; // net ID: RXDATA3 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXDATATAP0; // net ID: RXDATATAP0 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXDATATAP1; // net ID: RXDATATAP1 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXDATATAP2; // net ID: RXDATATAP2 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXDATATAP3; // net ID: RXDATATAP3 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXDISPERR0; // net ID: RXDISPERR0 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXDISPERR1; // net ID: RXDISPERR1 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXDISPERR2; // net ID: RXDISPERR2 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXDISPERR3; // net ID: RXDISPERR3 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXPCSCLKSMPL0; // net ID: RXPCSCLKSMPL0 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXPCSCLKSMPL1; // net ID: RXPCSCLKSMPL1 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXPCSCLKSMPL2; // net ID: RXPCSCLKSMPL2 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXPCSCLKSMPL3; // net ID: RXPCSCLKSMPL3 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXUSERCLKOUT0; // net ID: RXUSERCLKOUT0 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXUSERCLKOUT1; // net ID: RXUSERCLKOUT1 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXUSERCLKOUT2; // net ID: RXUSERCLKOUT2 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXUSERCLKOUT3; // net ID: RXUSERCLKOUT3 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXVALID0; // net ID: RXVALID0 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXVALID1; // net ID: RXVALID1 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXVALID2; // net ID: RXVALID2 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXVALID3; // net ID: RXVALID3 lsb: 0  msb: 0 OUTPUT
		NetFlow* TSTPATH; // net ID: TSTPATH lsb: 0  msb: 0 OUTPUT
		NetFlow* TSTREFCLKFAB; // net ID: TSTREFCLKFAB lsb: 0  msb: 0 OUTPUT
		NetFlow* TSTREFCLKOUT; // net ID: TSTREFCLKOUT lsb: 0  msb: 0 OUTPUT
		NetFlow* TXCTRLACK0; // net ID: TXCTRLACK0 lsb: 0  msb: 0 OUTPUT
		NetFlow* TXCTRLACK1; // net ID: TXCTRLACK1 lsb: 0  msb: 0 OUTPUT
		NetFlow* TXCTRLACK2; // net ID: TXCTRLACK2 lsb: 0  msb: 0 OUTPUT
		NetFlow* TXCTRLACK3; // net ID: TXCTRLACK3 lsb: 0  msb: 0 OUTPUT
		NetFlow* TXDATATAP10; // net ID: TXDATATAP10 lsb: 0  msb: 0 OUTPUT
		NetFlow* TXDATATAP11; // net ID: TXDATATAP11 lsb: 0  msb: 0 OUTPUT
		NetFlow* TXDATATAP12; // net ID: TXDATATAP12 lsb: 0  msb: 0 OUTPUT
		NetFlow* TXDATATAP13; // net ID: TXDATATAP13 lsb: 0  msb: 0 OUTPUT
		NetFlow* TXDATATAP20; // net ID: TXDATATAP20 lsb: 0  msb: 0 OUTPUT
		NetFlow* TXDATATAP21; // net ID: TXDATATAP21 lsb: 0  msb: 0 OUTPUT
		NetFlow* TXDATATAP22; // net ID: TXDATATAP22 lsb: 0  msb: 0 OUTPUT
		NetFlow* TXDATATAP23; // net ID: TXDATATAP23 lsb: 0  msb: 0 OUTPUT
		NetFlow* TXN0; // net ID: TXN0 lsb: 0  msb: 0 OUTPUT
		NetFlow* TXN1; // net ID: TXN1 lsb: 0  msb: 0 OUTPUT
		NetFlow* TXN2; // net ID: TXN2 lsb: 0  msb: 0 OUTPUT
		NetFlow* TXN3; // net ID: TXN3 lsb: 0  msb: 0 OUTPUT
		NetFlow* TXP0; // net ID: TXP0 lsb: 0  msb: 0 OUTPUT
		NetFlow* TXP1; // net ID: TXP1 lsb: 0  msb: 0 OUTPUT
		NetFlow* TXP2; // net ID: TXP2 lsb: 0  msb: 0 OUTPUT
		NetFlow* TXP3; // net ID: TXP3 lsb: 0  msb: 0 OUTPUT
		NetFlow* TXPCSCLKSMPL0; // net ID: TXPCSCLKSMPL0 lsb: 0  msb: 0 OUTPUT
		NetFlow* TXPCSCLKSMPL1; // net ID: TXPCSCLKSMPL1 lsb: 0  msb: 0 OUTPUT
		NetFlow* TXPCSCLKSMPL2; // net ID: TXPCSCLKSMPL2 lsb: 0  msb: 0 OUTPUT
		NetFlow* TXPCSCLKSMPL3; // net ID: TXPCSCLKSMPL3 lsb: 0  msb: 0 OUTPUT
		NetFlow* TXUSERCLKOUT0; // net ID: TXUSERCLKOUT0 lsb: 0  msb: 0 OUTPUT
		NetFlow* TXUSERCLKOUT1; // net ID: TXUSERCLKOUT1 lsb: 0  msb: 0 OUTPUT
		NetFlow* TXUSERCLKOUT2; // net ID: TXUSERCLKOUT2 lsb: 0  msb: 0 OUTPUT
		NetFlow* TXUSERCLKOUT3; // net ID: TXUSERCLKOUT3 lsb: 0  msb: 0 OUTPUT
		NetFlow* DADDR; // net ID: DADDR lsb: 0  msb: 15 INPUT
		NetFlow* DCLK; // net ID: DCLK lsb: 0  msb: 0 INPUT
		NetFlow* DEN; // net ID: DEN lsb: 0  msb: 0 INPUT
		NetFlow* DFETRAINCTRL0; // net ID: DFETRAINCTRL0 lsb: 0  msb: 0 INPUT
		NetFlow* DFETRAINCTRL1; // net ID: DFETRAINCTRL1 lsb: 0  msb: 0 INPUT
		NetFlow* DFETRAINCTRL2; // net ID: DFETRAINCTRL2 lsb: 0  msb: 0 INPUT
		NetFlow* DFETRAINCTRL3; // net ID: DFETRAINCTRL3 lsb: 0  msb: 0 INPUT
		NetFlow* DI; // net ID: DI lsb: 0  msb: 15 INPUT
		NetFlow* DISABLEDRP; // net ID: DISABLEDRP lsb: 0  msb: 0 INPUT
		NetFlow* DWE; // net ID: DWE lsb: 0  msb: 0 INPUT
		NetFlow* GTHINIT; // net ID: GTHINIT lsb: 0  msb: 0 INPUT
		NetFlow* GTHRESET; // net ID: GTHRESET lsb: 0  msb: 0 INPUT
		NetFlow* GTHX2LANE01; // net ID: GTHX2LANE01 lsb: 0  msb: 0 INPUT
		NetFlow* GTHX2LANE23; // net ID: GTHX2LANE23 lsb: 0  msb: 0 INPUT
		NetFlow* GTHX4LANE; // net ID: GTHX4LANE lsb: 0  msb: 0 INPUT
		NetFlow* MGMTPCSLANESEL; // net ID: MGMTPCSLANESEL lsb: 0  msb: 3 INPUT
		NetFlow* MGMTPCSMMDADDR; // net ID: MGMTPCSMMDADDR lsb: 0  msb: 4 INPUT
		NetFlow* MGMTPCSREGADDR; // net ID: MGMTPCSREGADDR lsb: 0  msb: 15 INPUT
		NetFlow* MGMTPCSREGRD; // net ID: MGMTPCSREGRD lsb: 0  msb: 0 INPUT
		NetFlow* MGMTPCSREGWR; // net ID: MGMTPCSREGWR lsb: 0  msb: 0 INPUT
		NetFlow* MGMTPCSWRDATA; // net ID: MGMTPCSWRDATA lsb: 0  msb: 15 INPUT
		NetFlow* PLLPCSCLKDIV; // net ID: PLLPCSCLKDIV lsb: 0  msb: 5 INPUT
		NetFlow* PLLREFCLKSEL; // net ID: PLLREFCLKSEL lsb: 0  msb: 2 INPUT
		NetFlow* POWERDOWN0; // net ID: POWERDOWN0 lsb: 0  msb: 0 INPUT
		NetFlow* POWERDOWN1; // net ID: POWERDOWN1 lsb: 0  msb: 0 INPUT
		NetFlow* POWERDOWN2; // net ID: POWERDOWN2 lsb: 0  msb: 0 INPUT
		NetFlow* POWERDOWN3; // net ID: POWERDOWN3 lsb: 0  msb: 0 INPUT
		NetFlow* REFCLK; // net ID: REFCLK lsb: 0  msb: 0 INPUT
		NetFlow* RXBUFRESET0; // net ID: RXBUFRESET0 lsb: 0  msb: 0 INPUT
		NetFlow* RXBUFRESET1; // net ID: RXBUFRESET1 lsb: 0  msb: 0 INPUT
		NetFlow* RXBUFRESET2; // net ID: RXBUFRESET2 lsb: 0  msb: 0 INPUT
		NetFlow* RXBUFRESET3; // net ID: RXBUFRESET3 lsb: 0  msb: 0 INPUT
		NetFlow* RXENCOMMADET0; // net ID: RXENCOMMADET0 lsb: 0  msb: 0 INPUT
		NetFlow* RXENCOMMADET1; // net ID: RXENCOMMADET1 lsb: 0  msb: 0 INPUT
		NetFlow* RXENCOMMADET2; // net ID: RXENCOMMADET2 lsb: 0  msb: 0 INPUT
		NetFlow* RXENCOMMADET3; // net ID: RXENCOMMADET3 lsb: 0  msb: 0 INPUT
		NetFlow* RXN0; // net ID: RXN0 lsb: 0  msb: 0 INPUT
		NetFlow* RXN1; // net ID: RXN1 lsb: 0  msb: 0 INPUT
		NetFlow* RXN2; // net ID: RXN2 lsb: 0  msb: 0 INPUT
		NetFlow* RXN3; // net ID: RXN3 lsb: 0  msb: 0 INPUT
		NetFlow* RXP0; // net ID: RXP0 lsb: 0  msb: 0 INPUT
		NetFlow* RXP1; // net ID: RXP1 lsb: 0  msb: 0 INPUT
		NetFlow* RXP2; // net ID: RXP2 lsb: 0  msb: 0 INPUT
		NetFlow* RXP3; // net ID: RXP3 lsb: 0  msb: 0 INPUT
		NetFlow* RXPOLARITY0; // net ID: RXPOLARITY0 lsb: 0  msb: 0 INPUT
		NetFlow* RXPOLARITY1; // net ID: RXPOLARITY1 lsb: 0  msb: 0 INPUT
		NetFlow* RXPOLARITY2; // net ID: RXPOLARITY2 lsb: 0  msb: 0 INPUT
		NetFlow* RXPOLARITY3; // net ID: RXPOLARITY3 lsb: 0  msb: 0 INPUT
		NetFlow* RXPOWERDOWN0; // net ID: RXPOWERDOWN0 lsb: 0  msb: 1 INPUT
		NetFlow* RXPOWERDOWN1; // net ID: RXPOWERDOWN1 lsb: 0  msb: 1 INPUT
		NetFlow* RXPOWERDOWN2; // net ID: RXPOWERDOWN2 lsb: 0  msb: 1 INPUT
		NetFlow* RXPOWERDOWN3; // net ID: RXPOWERDOWN3 lsb: 0  msb: 1 INPUT
		NetFlow* RXRATE0; // net ID: RXRATE0 lsb: 0  msb: 1 INPUT
		NetFlow* RXRATE1; // net ID: RXRATE1 lsb: 0  msb: 1 INPUT
		NetFlow* RXRATE2; // net ID: RXRATE2 lsb: 0  msb: 1 INPUT
		NetFlow* RXRATE3; // net ID: RXRATE3 lsb: 0  msb: 1 INPUT
		NetFlow* RXSLIP0; // net ID: RXSLIP0 lsb: 0  msb: 0 INPUT
		NetFlow* RXSLIP1; // net ID: RXSLIP1 lsb: 0  msb: 0 INPUT
		NetFlow* RXSLIP2; // net ID: RXSLIP2 lsb: 0  msb: 0 INPUT
		NetFlow* RXSLIP3; // net ID: RXSLIP3 lsb: 0  msb: 0 INPUT
		NetFlow* RXUSERCLKIN0; // net ID: RXUSERCLKIN0 lsb: 0  msb: 0 INPUT
		NetFlow* RXUSERCLKIN1; // net ID: RXUSERCLKIN1 lsb: 0  msb: 0 INPUT
		NetFlow* RXUSERCLKIN2; // net ID: RXUSERCLKIN2 lsb: 0  msb: 0 INPUT
		NetFlow* RXUSERCLKIN3; // net ID: RXUSERCLKIN3 lsb: 0  msb: 0 INPUT
		NetFlow* SAMPLERATE0; // net ID: SAMPLERATE0 lsb: 0  msb: 2 INPUT
		NetFlow* SAMPLERATE1; // net ID: SAMPLERATE1 lsb: 0  msb: 2 INPUT
		NetFlow* SAMPLERATE2; // net ID: SAMPLERATE2 lsb: 0  msb: 2 INPUT
		NetFlow* SAMPLERATE3; // net ID: SAMPLERATE3 lsb: 0  msb: 2 INPUT
		NetFlow* TXBUFRESET0; // net ID: TXBUFRESET0 lsb: 0  msb: 0 INPUT
		NetFlow* TXBUFRESET1; // net ID: TXBUFRESET1 lsb: 0  msb: 0 INPUT
		NetFlow* TXBUFRESET2; // net ID: TXBUFRESET2 lsb: 0  msb: 0 INPUT
		NetFlow* TXBUFRESET3; // net ID: TXBUFRESET3 lsb: 0  msb: 0 INPUT
		NetFlow* TXCTRL0; // net ID: TXCTRL0 lsb: 0  msb: 7 INPUT
		NetFlow* TXCTRL1; // net ID: TXCTRL1 lsb: 0  msb: 7 INPUT
		NetFlow* TXCTRL2; // net ID: TXCTRL2 lsb: 0  msb: 7 INPUT
		NetFlow* TXCTRL3; // net ID: TXCTRL3 lsb: 0  msb: 7 INPUT
		NetFlow* TXDATA0; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA1; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA2; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA3; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
		NetFlow* TXDATAMSB0; // net ID: TXDATAMSB0 lsb: 0  msb: 7 INPUT
		NetFlow* TXDATAMSB1; // net ID: TXDATAMSB1 lsb: 0  msb: 7 INPUT
		NetFlow* TXDATAMSB2; // net ID: TXDATAMSB2 lsb: 0  msb: 7 INPUT
		NetFlow* TXDATAMSB3; // net ID: TXDATAMSB3 lsb: 0  msb: 7 INPUT
		NetFlow* TXDEEMPH0; // net ID: TXDEEMPH0 lsb: 0  msb: 0 INPUT
		NetFlow* TXDEEMPH1; // net ID: TXDEEMPH1 lsb: 0  msb: 0 INPUT
		NetFlow* TXDEEMPH2; // net ID: TXDEEMPH2 lsb: 0  msb: 0 INPUT
		NetFlow* TXDEEMPH3; // net ID: TXDEEMPH3 lsb: 0  msb: 0 INPUT
		NetFlow* TXMARGIN0; // net ID: TXMARGIN0 lsb: 0  msb: 2 INPUT
		NetFlow* TXMARGIN1; // net ID: TXMARGIN1 lsb: 0  msb: 2 INPUT
		NetFlow* TXMARGIN2; // net ID: TXMARGIN2 lsb: 0  msb: 2 INPUT
		NetFlow* TXMARGIN3; // net ID: TXMARGIN3 lsb: 0  msb: 2 INPUT
		NetFlow* TXPOWERDOWN0; // net ID: TXPOWERDOWN0 lsb: 0  msb: 1 INPUT
		NetFlow* TXPOWERDOWN1; // net ID: TXPOWERDOWN1 lsb: 0  msb: 1 INPUT
		NetFlow* TXPOWERDOWN2; // net ID: TXPOWERDOWN2 lsb: 0  msb: 1 INPUT
		NetFlow* TXPOWERDOWN3; // net ID: TXPOWERDOWN3 lsb: 0  msb: 1 INPUT
		NetFlow* TXRATE0; // net ID: TXRATE0 lsb: 0  msb: 1 INPUT
		NetFlow* TXRATE1; // net ID: TXRATE1 lsb: 0  msb: 1 INPUT
		NetFlow* TXRATE2; // net ID: TXRATE2 lsb: 0  msb: 1 INPUT
		NetFlow* TXRATE3; // net ID: TXRATE3 lsb: 0  msb: 1 INPUT
		NetFlow* TXUSERCLKIN0; // net ID: TXUSERCLKIN0 lsb: 0  msb: 0 INPUT
		NetFlow* TXUSERCLKIN1; // net ID: TXUSERCLKIN1 lsb: 0  msb: 0 INPUT
		NetFlow* TXUSERCLKIN2; // net ID: TXUSERCLKIN2 lsb: 0  msb: 0 INPUT
		NetFlow* TXUSERCLKIN3; // net ID: TXUSERCLKIN3 lsb: 0  msb: 0 INPUT
		
		X_GTHE1_QUAD(
			const char * name,
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_string_t BER_CONST_PTRN0, // Default: 16'h0000
			parameter_string_t BER_CONST_PTRN1, // Default: 16'h0000
			parameter_string_t BUFFER_CONFIG_LANE0, // Default: 16'h4004
			parameter_string_t BUFFER_CONFIG_LANE1, // Default: 16'h4004
			parameter_string_t BUFFER_CONFIG_LANE2, // Default: 16'h4004
			parameter_string_t BUFFER_CONFIG_LANE3, // Default: 16'h4004
			parameter_string_t DFE_TRAIN_CTRL_LANE0, // Default: 16'h0000
			parameter_string_t DFE_TRAIN_CTRL_LANE1, // Default: 16'h0000
			parameter_string_t DFE_TRAIN_CTRL_LANE2, // Default: 16'h0000
			parameter_string_t DFE_TRAIN_CTRL_LANE3, // Default: 16'h0000
			parameter_string_t DLL_CFG0, // Default: 16'h8202
			parameter_string_t DLL_CFG1, // Default: 16'h0000
			parameter_string_t E10GBASEKR_LD_COEFF_UPD_LANE0, // Default: 16'h0000
			parameter_string_t E10GBASEKR_LD_COEFF_UPD_LANE1, // Default: 16'h0000
			parameter_string_t E10GBASEKR_LD_COEFF_UPD_LANE2, // Default: 16'h0000
			parameter_string_t E10GBASEKR_LD_COEFF_UPD_LANE3, // Default: 16'h0000
			parameter_string_t E10GBASEKR_LP_COEFF_UPD_LANE0, // Default: 16'h0000
			parameter_string_t E10GBASEKR_LP_COEFF_UPD_LANE1, // Default: 16'h0000
			parameter_string_t E10GBASEKR_LP_COEFF_UPD_LANE2, // Default: 16'h0000
			parameter_string_t E10GBASEKR_LP_COEFF_UPD_LANE3, // Default: 16'h0000
			parameter_string_t E10GBASEKR_PMA_CTRL_LANE0, // Default: 16'h0002
			parameter_string_t E10GBASEKR_PMA_CTRL_LANE1, // Default: 16'h0002
			parameter_string_t E10GBASEKR_PMA_CTRL_LANE2, // Default: 16'h0002
			parameter_string_t E10GBASEKR_PMA_CTRL_LANE3, // Default: 16'h0002
			parameter_string_t E10GBASEKX_CTRL_LANE0, // Default: 16'h0000
			parameter_string_t E10GBASEKX_CTRL_LANE1, // Default: 16'h0000
			parameter_string_t E10GBASEKX_CTRL_LANE2, // Default: 16'h0000
			parameter_string_t E10GBASEKX_CTRL_LANE3, // Default: 16'h0000
			parameter_string_t E10GBASER_PCS_CFG_LANE0, // Default: 16'h070C
			parameter_string_t E10GBASER_PCS_CFG_LANE1, // Default: 16'h070C
			parameter_string_t E10GBASER_PCS_CFG_LANE2, // Default: 16'h070C
			parameter_string_t E10GBASER_PCS_CFG_LANE3, // Default: 16'h070C
			parameter_string_t E10GBASER_PCS_SEEDA0_LANE0, // Default: 16'h0001
			parameter_string_t E10GBASER_PCS_SEEDA0_LANE1, // Default: 16'h0001
			parameter_string_t E10GBASER_PCS_SEEDA0_LANE2, // Default: 16'h0001
			parameter_string_t E10GBASER_PCS_SEEDA0_LANE3, // Default: 16'h0001
			parameter_string_t E10GBASER_PCS_SEEDA1_LANE0, // Default: 16'h0000
			parameter_string_t E10GBASER_PCS_SEEDA1_LANE1, // Default: 16'h0000
			parameter_string_t E10GBASER_PCS_SEEDA1_LANE2, // Default: 16'h0000
			parameter_string_t E10GBASER_PCS_SEEDA1_LANE3, // Default: 16'h0000
			parameter_string_t E10GBASER_PCS_SEEDA2_LANE0, // Default: 16'h0000
			parameter_string_t E10GBASER_PCS_SEEDA2_LANE1, // Default: 16'h0000
			parameter_string_t E10GBASER_PCS_SEEDA2_LANE2, // Default: 16'h0000
			parameter_string_t E10GBASER_PCS_SEEDA2_LANE3, // Default: 16'h0000
			parameter_string_t E10GBASER_PCS_SEEDA3_LANE0, // Default: 16'h0000
			parameter_string_t E10GBASER_PCS_SEEDA3_LANE1, // Default: 16'h0000
			parameter_string_t E10GBASER_PCS_SEEDA3_LANE2, // Default: 16'h0000
			parameter_string_t E10GBASER_PCS_SEEDA3_LANE3, // Default: 16'h0000
			parameter_string_t E10GBASER_PCS_SEEDB0_LANE0, // Default: 16'h0001
			parameter_string_t E10GBASER_PCS_SEEDB0_LANE1, // Default: 16'h0001
			parameter_string_t E10GBASER_PCS_SEEDB0_LANE2, // Default: 16'h0001
			parameter_string_t E10GBASER_PCS_SEEDB0_LANE3, // Default: 16'h0001
			parameter_string_t E10GBASER_PCS_SEEDB1_LANE0, // Default: 16'h0000
			parameter_string_t E10GBASER_PCS_SEEDB1_LANE1, // Default: 16'h0000
			parameter_string_t E10GBASER_PCS_SEEDB1_LANE2, // Default: 16'h0000
			parameter_string_t E10GBASER_PCS_SEEDB1_LANE3, // Default: 16'h0000
			parameter_string_t E10GBASER_PCS_SEEDB2_LANE0, // Default: 16'h0000
			parameter_string_t E10GBASER_PCS_SEEDB2_LANE1, // Default: 16'h0000
			parameter_string_t E10GBASER_PCS_SEEDB2_LANE2, // Default: 16'h0000
			parameter_string_t E10GBASER_PCS_SEEDB2_LANE3, // Default: 16'h0000
			parameter_string_t E10GBASER_PCS_SEEDB3_LANE0, // Default: 16'h0000
			parameter_string_t E10GBASER_PCS_SEEDB3_LANE1, // Default: 16'h0000
			parameter_string_t E10GBASER_PCS_SEEDB3_LANE2, // Default: 16'h0000
			parameter_string_t E10GBASER_PCS_SEEDB3_LANE3, // Default: 16'h0000
			parameter_string_t E10GBASER_PCS_TEST_CTRL_LANE0, // Default: 16'h0000
			parameter_string_t E10GBASER_PCS_TEST_CTRL_LANE1, // Default: 16'h0000
			parameter_string_t E10GBASER_PCS_TEST_CTRL_LANE2, // Default: 16'h0000
			parameter_string_t E10GBASER_PCS_TEST_CTRL_LANE3, // Default: 16'h0000
			parameter_string_t E10GBASEX_PCS_TSTCTRL_LANE0, // Default: 16'h0000
			parameter_string_t E10GBASEX_PCS_TSTCTRL_LANE1, // Default: 16'h0000
			parameter_string_t E10GBASEX_PCS_TSTCTRL_LANE2, // Default: 16'h0000
			parameter_string_t E10GBASEX_PCS_TSTCTRL_LANE3, // Default: 16'h0000
			parameter_string_t GLBL0_NOISE_CTRL, // Default: 16'hF0B8
			parameter_string_t GLBL_AMON_SEL, // Default: 16'h0000
			parameter_string_t GLBL_DMON_SEL, // Default: 16'h0200
			parameter_string_t GLBL_PWR_CTRL, // Default: 16'h0000
			parameter_string_t GTH_CFG_PWRUP_LANE0, // Default: 1'b1
			parameter_string_t GTH_CFG_PWRUP_LANE1, // Default: 1'b1
			parameter_string_t GTH_CFG_PWRUP_LANE2, // Default: 1'b1
			parameter_string_t GTH_CFG_PWRUP_LANE3, // Default: 1'b1
			parameter_string_t LANE_AMON_SEL, // Default: 16'h00F0
			parameter_string_t LANE_DMON_SEL, // Default: 16'h0000
			parameter_string_t LANE_LNK_CFGOVRD, // Default: 16'h0000
			parameter_string_t LANE_PWR_CTRL_LANE0, // Default: 16'h0400
			parameter_string_t LANE_PWR_CTRL_LANE1, // Default: 16'h0400
			parameter_string_t LANE_PWR_CTRL_LANE2, // Default: 16'h0400
			parameter_string_t LANE_PWR_CTRL_LANE3, // Default: 16'h0400
			parameter_string_t LNK_TRN_CFG_LANE0, // Default: 16'h0000
			parameter_string_t LNK_TRN_CFG_LANE1, // Default: 16'h0000
			parameter_string_t LNK_TRN_CFG_LANE2, // Default: 16'h0000
			parameter_string_t LNK_TRN_CFG_LANE3, // Default: 16'h0000
			parameter_string_t LNK_TRN_COEFF_REQ_LANE0, // Default: 16'h0000
			parameter_string_t LNK_TRN_COEFF_REQ_LANE1, // Default: 16'h0000
			parameter_string_t LNK_TRN_COEFF_REQ_LANE2, // Default: 16'h0000
			parameter_string_t LNK_TRN_COEFF_REQ_LANE3, // Default: 16'h0000
			parameter_string_t MISC_CFG, // Default: 16'h0008
			parameter_string_t MODE_CFG1, // Default: 16'h0000
			parameter_string_t MODE_CFG2, // Default: 16'h0000
			parameter_string_t MODE_CFG3, // Default: 16'h0000
			parameter_string_t MODE_CFG4, // Default: 16'h0000
			parameter_string_t MODE_CFG5, // Default: 16'h0000
			parameter_string_t MODE_CFG6, // Default: 16'h0000
			parameter_string_t MODE_CFG7, // Default: 16'h0000
			parameter_string_t PCS_ABILITY_LANE0, // Default: 16'h0010
			parameter_string_t PCS_ABILITY_LANE1, // Default: 16'h0010
			parameter_string_t PCS_ABILITY_LANE2, // Default: 16'h0010
			parameter_string_t PCS_ABILITY_LANE3, // Default: 16'h0010
			parameter_string_t PCS_CTRL1_LANE0, // Default: 16'h2040
			parameter_string_t PCS_CTRL1_LANE1, // Default: 16'h2040
			parameter_string_t PCS_CTRL1_LANE2, // Default: 16'h2040
			parameter_string_t PCS_CTRL1_LANE3, // Default: 16'h2040
			parameter_string_t PCS_CTRL2_LANE0, // Default: 16'h0000
			parameter_string_t PCS_CTRL2_LANE1, // Default: 16'h0000
			parameter_string_t PCS_CTRL2_LANE2, // Default: 16'h0000
			parameter_string_t PCS_CTRL2_LANE3, // Default: 16'h0000
			parameter_string_t PCS_MISC_CFG_0_LANE0, // Default: 16'h1116
			parameter_string_t PCS_MISC_CFG_0_LANE1, // Default: 16'h1116
			parameter_string_t PCS_MISC_CFG_0_LANE2, // Default: 16'h1116
			parameter_string_t PCS_MISC_CFG_0_LANE3, // Default: 16'h1116
			parameter_string_t PCS_MISC_CFG_1_LANE0, // Default: 16'h0000
			parameter_string_t PCS_MISC_CFG_1_LANE1, // Default: 16'h0000
			parameter_string_t PCS_MISC_CFG_1_LANE2, // Default: 16'h0000
			parameter_string_t PCS_MISC_CFG_1_LANE3, // Default: 16'h0000
			parameter_string_t PCS_MODE_LANE0, // Default: 16'h0000
			parameter_string_t PCS_MODE_LANE1, // Default: 16'h0000
			parameter_string_t PCS_MODE_LANE2, // Default: 16'h0000
			parameter_string_t PCS_MODE_LANE3, // Default: 16'h0000
			parameter_string_t PCS_RESET_1_LANE0, // Default: 16'h0002
			parameter_string_t PCS_RESET_1_LANE1, // Default: 16'h0002
			parameter_string_t PCS_RESET_1_LANE2, // Default: 16'h0002
			parameter_string_t PCS_RESET_1_LANE3, // Default: 16'h0002
			parameter_string_t PCS_RESET_LANE0, // Default: 16'h0000
			parameter_string_t PCS_RESET_LANE1, // Default: 16'h0000
			parameter_string_t PCS_RESET_LANE2, // Default: 16'h0000
			parameter_string_t PCS_RESET_LANE3, // Default: 16'h0000
			parameter_string_t PCS_TYPE_LANE0, // Default: 16'h002C
			parameter_string_t PCS_TYPE_LANE1, // Default: 16'h002C
			parameter_string_t PCS_TYPE_LANE2, // Default: 16'h002C
			parameter_string_t PCS_TYPE_LANE3, // Default: 16'h002C
			parameter_string_t PLL_CFG0, // Default: 16'h95DF
			parameter_string_t PLL_CFG1, // Default: 16'h81C0
			parameter_string_t PLL_CFG2, // Default: 16'h0424
			parameter_string_t PMA_CTRL1_LANE0, // Default: 16'h0000
			parameter_string_t PMA_CTRL1_LANE1, // Default: 16'h0000
			parameter_string_t PMA_CTRL1_LANE2, // Default: 16'h0000
			parameter_string_t PMA_CTRL1_LANE3, // Default: 16'h0000
			parameter_string_t PMA_CTRL2_LANE0, // Default: 16'h000B
			parameter_string_t PMA_CTRL2_LANE1, // Default: 16'h000B
			parameter_string_t PMA_CTRL2_LANE2, // Default: 16'h000B
			parameter_string_t PMA_CTRL2_LANE3, // Default: 16'h000B
			parameter_string_t PMA_LPBK_CTRL_LANE0, // Default: 16'h0004
			parameter_string_t PMA_LPBK_CTRL_LANE1, // Default: 16'h0004
			parameter_string_t PMA_LPBK_CTRL_LANE2, // Default: 16'h0004
			parameter_string_t PMA_LPBK_CTRL_LANE3, // Default: 16'h0004
			parameter_string_t PRBS_BER_CFG0_LANE0, // Default: 16'h0000
			parameter_string_t PRBS_BER_CFG0_LANE1, // Default: 16'h0000
			parameter_string_t PRBS_BER_CFG0_LANE2, // Default: 16'h0000
			parameter_string_t PRBS_BER_CFG0_LANE3, // Default: 16'h0000
			parameter_string_t PRBS_BER_CFG1_LANE0, // Default: 16'h0000
			parameter_string_t PRBS_BER_CFG1_LANE1, // Default: 16'h0000
			parameter_string_t PRBS_BER_CFG1_LANE2, // Default: 16'h0000
			parameter_string_t PRBS_BER_CFG1_LANE3, // Default: 16'h0000
			parameter_string_t PRBS_CFG_LANE0, // Default: 16'h000A
			parameter_string_t PRBS_CFG_LANE1, // Default: 16'h000A
			parameter_string_t PRBS_CFG_LANE2, // Default: 16'h000A
			parameter_string_t PRBS_CFG_LANE3, // Default: 16'h000A
			parameter_string_t PTRN_CFG0_LSB, // Default: 16'h5555
			parameter_string_t PTRN_CFG0_MSB, // Default: 16'h5555
			parameter_string_t PTRN_LEN_CFG, // Default: 16'h001F
			parameter_string_t PWRUP_DLY, // Default: 16'h0000
			parameter_string_t RX_AEQ_VAL0_LANE0, // Default: 16'h03C0
			parameter_string_t RX_AEQ_VAL0_LANE1, // Default: 16'h03C0
			parameter_string_t RX_AEQ_VAL0_LANE2, // Default: 16'h03C0
			parameter_string_t RX_AEQ_VAL0_LANE3, // Default: 16'h03C0
			parameter_string_t RX_AEQ_VAL1_LANE0, // Default: 16'h0000
			parameter_string_t RX_AEQ_VAL1_LANE1, // Default: 16'h0000
			parameter_string_t RX_AEQ_VAL1_LANE2, // Default: 16'h0000
			parameter_string_t RX_AEQ_VAL1_LANE3, // Default: 16'h0000
			parameter_string_t RX_AGC_CTRL_LANE0, // Default: 16'h0000
			parameter_string_t RX_AGC_CTRL_LANE1, // Default: 16'h0000
			parameter_string_t RX_AGC_CTRL_LANE2, // Default: 16'h0000
			parameter_string_t RX_AGC_CTRL_LANE3, // Default: 16'h0000
			parameter_string_t RX_CDR_CTRL0_LANE0, // Default: 16'h0005
			parameter_string_t RX_CDR_CTRL0_LANE1, // Default: 16'h0005
			parameter_string_t RX_CDR_CTRL0_LANE2, // Default: 16'h0005
			parameter_string_t RX_CDR_CTRL0_LANE3, // Default: 16'h0005
			parameter_string_t RX_CDR_CTRL1_LANE0, // Default: 16'h4200
			parameter_string_t RX_CDR_CTRL1_LANE1, // Default: 16'h4200
			parameter_string_t RX_CDR_CTRL1_LANE2, // Default: 16'h4200
			parameter_string_t RX_CDR_CTRL1_LANE3, // Default: 16'h4200
			parameter_string_t RX_CDR_CTRL2_LANE0, // Default: 16'h2000
			parameter_string_t RX_CDR_CTRL2_LANE1, // Default: 16'h2000
			parameter_string_t RX_CDR_CTRL2_LANE2, // Default: 16'h2000
			parameter_string_t RX_CDR_CTRL2_LANE3, // Default: 16'h2000
			parameter_string_t RX_CFG0_LANE0, // Default: 16'h0500
			parameter_string_t RX_CFG0_LANE1, // Default: 16'h0500
			parameter_string_t RX_CFG0_LANE2, // Default: 16'h0500
			parameter_string_t RX_CFG0_LANE3, // Default: 16'h0500
			parameter_string_t RX_CFG1_LANE0, // Default: 16'h821F
			parameter_string_t RX_CFG1_LANE1, // Default: 16'h821F
			parameter_string_t RX_CFG1_LANE2, // Default: 16'h821F
			parameter_string_t RX_CFG1_LANE3, // Default: 16'h821F
			parameter_string_t RX_CFG2_LANE0, // Default: 16'h1001
			parameter_string_t RX_CFG2_LANE1, // Default: 16'h1001
			parameter_string_t RX_CFG2_LANE2, // Default: 16'h1001
			parameter_string_t RX_CFG2_LANE3, // Default: 16'h1001
			parameter_string_t RX_CTLE_CTRL_LANE0, // Default: 16'h008F
			parameter_string_t RX_CTLE_CTRL_LANE1, // Default: 16'h008F
			parameter_string_t RX_CTLE_CTRL_LANE2, // Default: 16'h008F
			parameter_string_t RX_CTLE_CTRL_LANE3, // Default: 16'h008F
			parameter_string_t RX_CTRL_OVRD_LANE0, // Default: 16'h000C
			parameter_string_t RX_CTRL_OVRD_LANE1, // Default: 16'h000C
			parameter_string_t RX_CTRL_OVRD_LANE2, // Default: 16'h000C
			parameter_string_t RX_CTRL_OVRD_LANE3, // Default: 16'h000C
			parameter_string_t RX_FABRIC_WIDTH0, // Default: 6466
			parameter_string_t RX_FABRIC_WIDTH1, // Default: 6466
			parameter_string_t RX_FABRIC_WIDTH2, // Default: 6466
			parameter_string_t RX_FABRIC_WIDTH3, // Default: 6466
			parameter_string_t RX_LOOP_CTRL_LANE0, // Default: 16'h007F
			parameter_string_t RX_LOOP_CTRL_LANE1, // Default: 16'h007F
			parameter_string_t RX_LOOP_CTRL_LANE2, // Default: 16'h007F
			parameter_string_t RX_LOOP_CTRL_LANE3, // Default: 16'h007F
			parameter_string_t RX_MVAL0_LANE0, // Default: 16'h0000
			parameter_string_t RX_MVAL0_LANE1, // Default: 16'h0000
			parameter_string_t RX_MVAL0_LANE2, // Default: 16'h0000
			parameter_string_t RX_MVAL0_LANE3, // Default: 16'h0000
			parameter_string_t RX_MVAL1_LANE0, // Default: 16'h0000
			parameter_string_t RX_MVAL1_LANE1, // Default: 16'h0000
			parameter_string_t RX_MVAL1_LANE2, // Default: 16'h0000
			parameter_string_t RX_MVAL1_LANE3, // Default: 16'h0000
			parameter_string_t RX_P0S_CTRL, // Default: 16'h1206
			parameter_string_t RX_P0_CTRL, // Default: 16'h11F0
			parameter_string_t RX_P1_CTRL, // Default: 16'h120F
			parameter_string_t RX_P2_CTRL, // Default: 16'h0E0F
			parameter_string_t RX_PI_CTRL0, // Default: 16'hD2F0
			parameter_string_t RX_PI_CTRL1, // Default: 16'h0080
			parameter_string_t SIM_GTHRESET_SPEEDUP, // Default: 1
			parameter_string_t SIM_VERSION, // Default: "1.0"
			parameter_string_t SLICE_CFG, // Default: 16'h0000
			parameter_string_t SLICE_NOISE_CTRL_0_LANE01, // Default: 16'h0000
			parameter_string_t SLICE_NOISE_CTRL_0_LANE23, // Default: 16'h0000
			parameter_string_t SLICE_NOISE_CTRL_1_LANE01, // Default: 16'h0000
			parameter_string_t SLICE_NOISE_CTRL_1_LANE23, // Default: 16'h0000
			parameter_string_t SLICE_NOISE_CTRL_2_LANE01, // Default: 16'h7FFF
			parameter_string_t SLICE_NOISE_CTRL_2_LANE23, // Default: 16'h7FFF
			parameter_string_t SLICE_TX_RESET_LANE01, // Default: 16'h0000
			parameter_string_t SLICE_TX_RESET_LANE23, // Default: 16'h0000
			parameter_string_t TERM_CTRL_LANE0, // Default: 16'h5007
			parameter_string_t TERM_CTRL_LANE1, // Default: 16'h5007
			parameter_string_t TERM_CTRL_LANE2, // Default: 16'h5007
			parameter_string_t TERM_CTRL_LANE3, // Default: 16'h5007
			parameter_string_t TX_CFG0_LANE0, // Default: 16'h203D
			parameter_string_t TX_CFG0_LANE1, // Default: 16'h203D
			parameter_string_t TX_CFG0_LANE2, // Default: 16'h203D
			parameter_string_t TX_CFG0_LANE3, // Default: 16'h203D
			parameter_string_t TX_CFG1_LANE0, // Default: 16'h0F00
			parameter_string_t TX_CFG1_LANE1, // Default: 16'h0F00
			parameter_string_t TX_CFG1_LANE2, // Default: 16'h0F00
			parameter_string_t TX_CFG1_LANE3, // Default: 16'h0F00
			parameter_string_t TX_CFG2_LANE0, // Default: 16'h0081
			parameter_string_t TX_CFG2_LANE1, // Default: 16'h0081
			parameter_string_t TX_CFG2_LANE2, // Default: 16'h0081
			parameter_string_t TX_CFG2_LANE3, // Default: 16'h0081
			parameter_string_t TX_CLK_SEL0_LANE0, // Default: 16'h2121
			parameter_string_t TX_CLK_SEL0_LANE1, // Default: 16'h2121
			parameter_string_t TX_CLK_SEL0_LANE2, // Default: 16'h2121
			parameter_string_t TX_CLK_SEL0_LANE3, // Default: 16'h2121
			parameter_string_t TX_CLK_SEL1_LANE0, // Default: 16'h2121
			parameter_string_t TX_CLK_SEL1_LANE1, // Default: 16'h2121
			parameter_string_t TX_CLK_SEL1_LANE2, // Default: 16'h2121
			parameter_string_t TX_CLK_SEL1_LANE3, // Default: 16'h2121
			parameter_string_t TX_DISABLE_LANE0, // Default: 16'h0000
			parameter_string_t TX_DISABLE_LANE1, // Default: 16'h0000
			parameter_string_t TX_DISABLE_LANE2, // Default: 16'h0000
			parameter_string_t TX_DISABLE_LANE3, // Default: 16'h0000
			parameter_string_t TX_FABRIC_WIDTH0, // Default: 6466
			parameter_string_t TX_FABRIC_WIDTH1, // Default: 6466
			parameter_string_t TX_FABRIC_WIDTH2, // Default: 6466
			parameter_string_t TX_FABRIC_WIDTH3, // Default: 6466
			parameter_string_t TX_P0P0S_CTRL, // Default: 16'h060C
			parameter_string_t TX_P1P2_CTRL, // Default: 16'h0C39
			parameter_string_t TX_PREEMPH_LANE0, // Default: 16'h00A1
			parameter_string_t TX_PREEMPH_LANE1, // Default: 16'h00A1
			parameter_string_t TX_PREEMPH_LANE2, // Default: 16'h00A1
			parameter_string_t TX_PREEMPH_LANE3, // Default: 16'h00A1
			parameter_string_t TX_PWR_RATE_OVRD_LANE0, // Default: 16'h0060
			parameter_string_t TX_PWR_RATE_OVRD_LANE1, // Default: 16'h0060
			parameter_string_t TX_PWR_RATE_OVRD_LANE2, // Default: 16'h0060
			parameter_string_t TX_PWR_RATE_OVRD_LANE3, // Default: 16'h0060
			//Verilog Ports in definition order:
			NetFlow* DRDY, // net ID: DRDY lsb: 0  msb: 0 OUTPUT
			NetFlow* DRPDO, // net ID: DRPDO lsb: 0  msb: 0 OUTPUT
			NetFlow* GTHINITDONE, // net ID: GTHINITDONE lsb: 0  msb: 0 OUTPUT
			NetFlow* MGMTPCSRDACK, // net ID: MGMTPCSRDACK lsb: 0  msb: 0 OUTPUT
			NetFlow* MGMTPCSRDDATA, // net ID: MGMTPCSRDDATA lsb: 0  msb: 0 OUTPUT
			NetFlow* RXCODEERR0, // net ID: RXCODEERR0 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXCODEERR1, // net ID: RXCODEERR1 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXCODEERR2, // net ID: RXCODEERR2 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXCODEERR3, // net ID: RXCODEERR3 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXCTRL0, // net ID: RXCTRL0 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXCTRL1, // net ID: RXCTRL1 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXCTRL2, // net ID: RXCTRL2 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXCTRL3, // net ID: RXCTRL3 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXCTRLACK0, // net ID: RXCTRLACK0 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXCTRLACK1, // net ID: RXCTRLACK1 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXCTRLACK2, // net ID: RXCTRLACK2 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXCTRLACK3, // net ID: RXCTRLACK3 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXDATA0, // net ID: RXDATA0 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXDATA1, // net ID: RXDATA1 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXDATA2, // net ID: RXDATA2 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXDATA3, // net ID: RXDATA3 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXDATATAP0, // net ID: RXDATATAP0 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXDATATAP1, // net ID: RXDATATAP1 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXDATATAP2, // net ID: RXDATATAP2 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXDATATAP3, // net ID: RXDATATAP3 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXDISPERR0, // net ID: RXDISPERR0 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXDISPERR1, // net ID: RXDISPERR1 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXDISPERR2, // net ID: RXDISPERR2 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXDISPERR3, // net ID: RXDISPERR3 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXPCSCLKSMPL0, // net ID: RXPCSCLKSMPL0 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXPCSCLKSMPL1, // net ID: RXPCSCLKSMPL1 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXPCSCLKSMPL2, // net ID: RXPCSCLKSMPL2 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXPCSCLKSMPL3, // net ID: RXPCSCLKSMPL3 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXUSERCLKOUT0, // net ID: RXUSERCLKOUT0 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXUSERCLKOUT1, // net ID: RXUSERCLKOUT1 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXUSERCLKOUT2, // net ID: RXUSERCLKOUT2 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXUSERCLKOUT3, // net ID: RXUSERCLKOUT3 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXVALID0, // net ID: RXVALID0 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXVALID1, // net ID: RXVALID1 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXVALID2, // net ID: RXVALID2 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXVALID3, // net ID: RXVALID3 lsb: 0  msb: 0 OUTPUT
			NetFlow* TSTPATH, // net ID: TSTPATH lsb: 0  msb: 0 OUTPUT
			NetFlow* TSTREFCLKFAB, // net ID: TSTREFCLKFAB lsb: 0  msb: 0 OUTPUT
			NetFlow* TSTREFCLKOUT, // net ID: TSTREFCLKOUT lsb: 0  msb: 0 OUTPUT
			NetFlow* TXCTRLACK0, // net ID: TXCTRLACK0 lsb: 0  msb: 0 OUTPUT
			NetFlow* TXCTRLACK1, // net ID: TXCTRLACK1 lsb: 0  msb: 0 OUTPUT
			NetFlow* TXCTRLACK2, // net ID: TXCTRLACK2 lsb: 0  msb: 0 OUTPUT
			NetFlow* TXCTRLACK3, // net ID: TXCTRLACK3 lsb: 0  msb: 0 OUTPUT
			NetFlow* TXDATATAP10, // net ID: TXDATATAP10 lsb: 0  msb: 0 OUTPUT
			NetFlow* TXDATATAP11, // net ID: TXDATATAP11 lsb: 0  msb: 0 OUTPUT
			NetFlow* TXDATATAP12, // net ID: TXDATATAP12 lsb: 0  msb: 0 OUTPUT
			NetFlow* TXDATATAP13, // net ID: TXDATATAP13 lsb: 0  msb: 0 OUTPUT
			NetFlow* TXDATATAP20, // net ID: TXDATATAP20 lsb: 0  msb: 0 OUTPUT
			NetFlow* TXDATATAP21, // net ID: TXDATATAP21 lsb: 0  msb: 0 OUTPUT
			NetFlow* TXDATATAP22, // net ID: TXDATATAP22 lsb: 0  msb: 0 OUTPUT
			NetFlow* TXDATATAP23, // net ID: TXDATATAP23 lsb: 0  msb: 0 OUTPUT
			NetFlow* TXN0, // net ID: TXN0 lsb: 0  msb: 0 OUTPUT
			NetFlow* TXN1, // net ID: TXN1 lsb: 0  msb: 0 OUTPUT
			NetFlow* TXN2, // net ID: TXN2 lsb: 0  msb: 0 OUTPUT
			NetFlow* TXN3, // net ID: TXN3 lsb: 0  msb: 0 OUTPUT
			NetFlow* TXP0, // net ID: TXP0 lsb: 0  msb: 0 OUTPUT
			NetFlow* TXP1, // net ID: TXP1 lsb: 0  msb: 0 OUTPUT
			NetFlow* TXP2, // net ID: TXP2 lsb: 0  msb: 0 OUTPUT
			NetFlow* TXP3, // net ID: TXP3 lsb: 0  msb: 0 OUTPUT
			NetFlow* TXPCSCLKSMPL0, // net ID: TXPCSCLKSMPL0 lsb: 0  msb: 0 OUTPUT
			NetFlow* TXPCSCLKSMPL1, // net ID: TXPCSCLKSMPL1 lsb: 0  msb: 0 OUTPUT
			NetFlow* TXPCSCLKSMPL2, // net ID: TXPCSCLKSMPL2 lsb: 0  msb: 0 OUTPUT
			NetFlow* TXPCSCLKSMPL3, // net ID: TXPCSCLKSMPL3 lsb: 0  msb: 0 OUTPUT
			NetFlow* TXUSERCLKOUT0, // net ID: TXUSERCLKOUT0 lsb: 0  msb: 0 OUTPUT
			NetFlow* TXUSERCLKOUT1, // net ID: TXUSERCLKOUT1 lsb: 0  msb: 0 OUTPUT
			NetFlow* TXUSERCLKOUT2, // net ID: TXUSERCLKOUT2 lsb: 0  msb: 0 OUTPUT
			NetFlow* TXUSERCLKOUT3, // net ID: TXUSERCLKOUT3 lsb: 0  msb: 0 OUTPUT
			NetFlow* DADDR, // net ID: DADDR lsb: 0  msb: 15 INPUT
			NetFlow* DCLK, // net ID: DCLK lsb: 0  msb: 0 INPUT
			NetFlow* DEN, // net ID: DEN lsb: 0  msb: 0 INPUT
			NetFlow* DFETRAINCTRL0, // net ID: DFETRAINCTRL0 lsb: 0  msb: 0 INPUT
			NetFlow* DFETRAINCTRL1, // net ID: DFETRAINCTRL1 lsb: 0  msb: 0 INPUT
			NetFlow* DFETRAINCTRL2, // net ID: DFETRAINCTRL2 lsb: 0  msb: 0 INPUT
			NetFlow* DFETRAINCTRL3, // net ID: DFETRAINCTRL3 lsb: 0  msb: 0 INPUT
			NetFlow* DI, // net ID: DI lsb: 0  msb: 15 INPUT
			NetFlow* DISABLEDRP, // net ID: DISABLEDRP lsb: 0  msb: 0 INPUT
			NetFlow* DWE, // net ID: DWE lsb: 0  msb: 0 INPUT
			NetFlow* GTHINIT, // net ID: GTHINIT lsb: 0  msb: 0 INPUT
			NetFlow* GTHRESET, // net ID: GTHRESET lsb: 0  msb: 0 INPUT
			NetFlow* GTHX2LANE01, // net ID: GTHX2LANE01 lsb: 0  msb: 0 INPUT
			NetFlow* GTHX2LANE23, // net ID: GTHX2LANE23 lsb: 0  msb: 0 INPUT
			NetFlow* GTHX4LANE, // net ID: GTHX4LANE lsb: 0  msb: 0 INPUT
			NetFlow* MGMTPCSLANESEL, // net ID: MGMTPCSLANESEL lsb: 0  msb: 3 INPUT
			NetFlow* MGMTPCSMMDADDR, // net ID: MGMTPCSMMDADDR lsb: 0  msb: 4 INPUT
			NetFlow* MGMTPCSREGADDR, // net ID: MGMTPCSREGADDR lsb: 0  msb: 15 INPUT
			NetFlow* MGMTPCSREGRD, // net ID: MGMTPCSREGRD lsb: 0  msb: 0 INPUT
			NetFlow* MGMTPCSREGWR, // net ID: MGMTPCSREGWR lsb: 0  msb: 0 INPUT
			NetFlow* MGMTPCSWRDATA, // net ID: MGMTPCSWRDATA lsb: 0  msb: 15 INPUT
			NetFlow* PLLPCSCLKDIV, // net ID: PLLPCSCLKDIV lsb: 0  msb: 5 INPUT
			NetFlow* PLLREFCLKSEL, // net ID: PLLREFCLKSEL lsb: 0  msb: 2 INPUT
			NetFlow* POWERDOWN0, // net ID: POWERDOWN0 lsb: 0  msb: 0 INPUT
			NetFlow* POWERDOWN1, // net ID: POWERDOWN1 lsb: 0  msb: 0 INPUT
			NetFlow* POWERDOWN2, // net ID: POWERDOWN2 lsb: 0  msb: 0 INPUT
			NetFlow* POWERDOWN3, // net ID: POWERDOWN3 lsb: 0  msb: 0 INPUT
			NetFlow* REFCLK, // net ID: REFCLK lsb: 0  msb: 0 INPUT
			NetFlow* RXBUFRESET0, // net ID: RXBUFRESET0 lsb: 0  msb: 0 INPUT
			NetFlow* RXBUFRESET1, // net ID: RXBUFRESET1 lsb: 0  msb: 0 INPUT
			NetFlow* RXBUFRESET2, // net ID: RXBUFRESET2 lsb: 0  msb: 0 INPUT
			NetFlow* RXBUFRESET3, // net ID: RXBUFRESET3 lsb: 0  msb: 0 INPUT
			NetFlow* RXENCOMMADET0, // net ID: RXENCOMMADET0 lsb: 0  msb: 0 INPUT
			NetFlow* RXENCOMMADET1, // net ID: RXENCOMMADET1 lsb: 0  msb: 0 INPUT
			NetFlow* RXENCOMMADET2, // net ID: RXENCOMMADET2 lsb: 0  msb: 0 INPUT
			NetFlow* RXENCOMMADET3, // net ID: RXENCOMMADET3 lsb: 0  msb: 0 INPUT
			NetFlow* RXN0, // net ID: RXN0 lsb: 0  msb: 0 INPUT
			NetFlow* RXN1, // net ID: RXN1 lsb: 0  msb: 0 INPUT
			NetFlow* RXN2, // net ID: RXN2 lsb: 0  msb: 0 INPUT
			NetFlow* RXN3, // net ID: RXN3 lsb: 0  msb: 0 INPUT
			NetFlow* RXP0, // net ID: RXP0 lsb: 0  msb: 0 INPUT
			NetFlow* RXP1, // net ID: RXP1 lsb: 0  msb: 0 INPUT
			NetFlow* RXP2, // net ID: RXP2 lsb: 0  msb: 0 INPUT
			NetFlow* RXP3, // net ID: RXP3 lsb: 0  msb: 0 INPUT
			NetFlow* RXPOLARITY0, // net ID: RXPOLARITY0 lsb: 0  msb: 0 INPUT
			NetFlow* RXPOLARITY1, // net ID: RXPOLARITY1 lsb: 0  msb: 0 INPUT
			NetFlow* RXPOLARITY2, // net ID: RXPOLARITY2 lsb: 0  msb: 0 INPUT
			NetFlow* RXPOLARITY3, // net ID: RXPOLARITY3 lsb: 0  msb: 0 INPUT
			NetFlow* RXPOWERDOWN0, // net ID: RXPOWERDOWN0 lsb: 0  msb: 1 INPUT
			NetFlow* RXPOWERDOWN1, // net ID: RXPOWERDOWN1 lsb: 0  msb: 1 INPUT
			NetFlow* RXPOWERDOWN2, // net ID: RXPOWERDOWN2 lsb: 0  msb: 1 INPUT
			NetFlow* RXPOWERDOWN3, // net ID: RXPOWERDOWN3 lsb: 0  msb: 1 INPUT
			NetFlow* RXRATE0, // net ID: RXRATE0 lsb: 0  msb: 1 INPUT
			NetFlow* RXRATE1, // net ID: RXRATE1 lsb: 0  msb: 1 INPUT
			NetFlow* RXRATE2, // net ID: RXRATE2 lsb: 0  msb: 1 INPUT
			NetFlow* RXRATE3, // net ID: RXRATE3 lsb: 0  msb: 1 INPUT
			NetFlow* RXSLIP0, // net ID: RXSLIP0 lsb: 0  msb: 0 INPUT
			NetFlow* RXSLIP1, // net ID: RXSLIP1 lsb: 0  msb: 0 INPUT
			NetFlow* RXSLIP2, // net ID: RXSLIP2 lsb: 0  msb: 0 INPUT
			NetFlow* RXSLIP3, // net ID: RXSLIP3 lsb: 0  msb: 0 INPUT
			NetFlow* RXUSERCLKIN0, // net ID: RXUSERCLKIN0 lsb: 0  msb: 0 INPUT
			NetFlow* RXUSERCLKIN1, // net ID: RXUSERCLKIN1 lsb: 0  msb: 0 INPUT
			NetFlow* RXUSERCLKIN2, // net ID: RXUSERCLKIN2 lsb: 0  msb: 0 INPUT
			NetFlow* RXUSERCLKIN3, // net ID: RXUSERCLKIN3 lsb: 0  msb: 0 INPUT
			NetFlow* SAMPLERATE0, // net ID: SAMPLERATE0 lsb: 0  msb: 2 INPUT
			NetFlow* SAMPLERATE1, // net ID: SAMPLERATE1 lsb: 0  msb: 2 INPUT
			NetFlow* SAMPLERATE2, // net ID: SAMPLERATE2 lsb: 0  msb: 2 INPUT
			NetFlow* SAMPLERATE3, // net ID: SAMPLERATE3 lsb: 0  msb: 2 INPUT
			NetFlow* TXBUFRESET0, // net ID: TXBUFRESET0 lsb: 0  msb: 0 INPUT
			NetFlow* TXBUFRESET1, // net ID: TXBUFRESET1 lsb: 0  msb: 0 INPUT
			NetFlow* TXBUFRESET2, // net ID: TXBUFRESET2 lsb: 0  msb: 0 INPUT
			NetFlow* TXBUFRESET3, // net ID: TXBUFRESET3 lsb: 0  msb: 0 INPUT
			NetFlow* TXCTRL0, // net ID: TXCTRL0 lsb: 0  msb: 7 INPUT
			NetFlow* TXCTRL1, // net ID: TXCTRL1 lsb: 0  msb: 7 INPUT
			NetFlow* TXCTRL2, // net ID: TXCTRL2 lsb: 0  msb: 7 INPUT
			NetFlow* TXCTRL3, // net ID: TXCTRL3 lsb: 0  msb: 7 INPUT
			NetFlow* TXDATA0, // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA1, // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA2, // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA3, // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			NetFlow* TXDATAMSB0, // net ID: TXDATAMSB0 lsb: 0  msb: 7 INPUT
			NetFlow* TXDATAMSB1, // net ID: TXDATAMSB1 lsb: 0  msb: 7 INPUT
			NetFlow* TXDATAMSB2, // net ID: TXDATAMSB2 lsb: 0  msb: 7 INPUT
			NetFlow* TXDATAMSB3, // net ID: TXDATAMSB3 lsb: 0  msb: 7 INPUT
			NetFlow* TXDEEMPH0, // net ID: TXDEEMPH0 lsb: 0  msb: 0 INPUT
			NetFlow* TXDEEMPH1, // net ID: TXDEEMPH1 lsb: 0  msb: 0 INPUT
			NetFlow* TXDEEMPH2, // net ID: TXDEEMPH2 lsb: 0  msb: 0 INPUT
			NetFlow* TXDEEMPH3, // net ID: TXDEEMPH3 lsb: 0  msb: 0 INPUT
			NetFlow* TXMARGIN0, // net ID: TXMARGIN0 lsb: 0  msb: 2 INPUT
			NetFlow* TXMARGIN1, // net ID: TXMARGIN1 lsb: 0  msb: 2 INPUT
			NetFlow* TXMARGIN2, // net ID: TXMARGIN2 lsb: 0  msb: 2 INPUT
			NetFlow* TXMARGIN3, // net ID: TXMARGIN3 lsb: 0  msb: 2 INPUT
			NetFlow* TXPOWERDOWN0, // net ID: TXPOWERDOWN0 lsb: 0  msb: 1 INPUT
			NetFlow* TXPOWERDOWN1, // net ID: TXPOWERDOWN1 lsb: 0  msb: 1 INPUT
			NetFlow* TXPOWERDOWN2, // net ID: TXPOWERDOWN2 lsb: 0  msb: 1 INPUT
			NetFlow* TXPOWERDOWN3, // net ID: TXPOWERDOWN3 lsb: 0  msb: 1 INPUT
			NetFlow* TXRATE0, // net ID: TXRATE0 lsb: 0  msb: 1 INPUT
			NetFlow* TXRATE1, // net ID: TXRATE1 lsb: 0  msb: 1 INPUT
			NetFlow* TXRATE2, // net ID: TXRATE2 lsb: 0  msb: 1 INPUT
			NetFlow* TXRATE3, // net ID: TXRATE3 lsb: 0  msb: 1 INPUT
			NetFlow* TXUSERCLKIN0, // net ID: TXUSERCLKIN0 lsb: 0  msb: 0 INPUT
			NetFlow* TXUSERCLKIN1, // net ID: TXUSERCLKIN1 lsb: 0  msb: 0 INPUT
			NetFlow* TXUSERCLKIN2, // net ID: TXUSERCLKIN2 lsb: 0  msb: 0 INPUT
			NetFlow* TXUSERCLKIN3 // net ID: TXUSERCLKIN3 lsb: 0  msb: 0 INPUT
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
			this->DRDY = DRDY; // net ID: DRDY lsb: 0  msb: 0 OUTPUT
			this->DRPDO = DRPDO; // net ID: DRPDO lsb: 0  msb: 0 OUTPUT
			this->GTHINITDONE = GTHINITDONE; // net ID: GTHINITDONE lsb: 0  msb: 0 OUTPUT
			this->MGMTPCSRDACK = MGMTPCSRDACK; // net ID: MGMTPCSRDACK lsb: 0  msb: 0 OUTPUT
			this->MGMTPCSRDDATA = MGMTPCSRDDATA; // net ID: MGMTPCSRDDATA lsb: 0  msb: 0 OUTPUT
			this->RXCODEERR0 = RXCODEERR0; // net ID: RXCODEERR0 lsb: 0  msb: 0 OUTPUT
			this->RXCODEERR1 = RXCODEERR1; // net ID: RXCODEERR1 lsb: 0  msb: 0 OUTPUT
			this->RXCODEERR2 = RXCODEERR2; // net ID: RXCODEERR2 lsb: 0  msb: 0 OUTPUT
			this->RXCODEERR3 = RXCODEERR3; // net ID: RXCODEERR3 lsb: 0  msb: 0 OUTPUT
			this->RXCTRL0 = RXCTRL0; // net ID: RXCTRL0 lsb: 0  msb: 0 OUTPUT
			this->RXCTRL1 = RXCTRL1; // net ID: RXCTRL1 lsb: 0  msb: 0 OUTPUT
			this->RXCTRL2 = RXCTRL2; // net ID: RXCTRL2 lsb: 0  msb: 0 OUTPUT
			this->RXCTRL3 = RXCTRL3; // net ID: RXCTRL3 lsb: 0  msb: 0 OUTPUT
			this->RXCTRLACK0 = RXCTRLACK0; // net ID: RXCTRLACK0 lsb: 0  msb: 0 OUTPUT
			this->RXCTRLACK1 = RXCTRLACK1; // net ID: RXCTRLACK1 lsb: 0  msb: 0 OUTPUT
			this->RXCTRLACK2 = RXCTRLACK2; // net ID: RXCTRLACK2 lsb: 0  msb: 0 OUTPUT
			this->RXCTRLACK3 = RXCTRLACK3; // net ID: RXCTRLACK3 lsb: 0  msb: 0 OUTPUT
			this->RXDATA0 = RXDATA0; // net ID: RXDATA0 lsb: 0  msb: 0 OUTPUT
			this->RXDATA1 = RXDATA1; // net ID: RXDATA1 lsb: 0  msb: 0 OUTPUT
			this->RXDATA2 = RXDATA2; // net ID: RXDATA2 lsb: 0  msb: 0 OUTPUT
			this->RXDATA3 = RXDATA3; // net ID: RXDATA3 lsb: 0  msb: 0 OUTPUT
			this->RXDATATAP0 = RXDATATAP0; // net ID: RXDATATAP0 lsb: 0  msb: 0 OUTPUT
			this->RXDATATAP1 = RXDATATAP1; // net ID: RXDATATAP1 lsb: 0  msb: 0 OUTPUT
			this->RXDATATAP2 = RXDATATAP2; // net ID: RXDATATAP2 lsb: 0  msb: 0 OUTPUT
			this->RXDATATAP3 = RXDATATAP3; // net ID: RXDATATAP3 lsb: 0  msb: 0 OUTPUT
			this->RXDISPERR0 = RXDISPERR0; // net ID: RXDISPERR0 lsb: 0  msb: 0 OUTPUT
			this->RXDISPERR1 = RXDISPERR1; // net ID: RXDISPERR1 lsb: 0  msb: 0 OUTPUT
			this->RXDISPERR2 = RXDISPERR2; // net ID: RXDISPERR2 lsb: 0  msb: 0 OUTPUT
			this->RXDISPERR3 = RXDISPERR3; // net ID: RXDISPERR3 lsb: 0  msb: 0 OUTPUT
			this->RXPCSCLKSMPL0 = RXPCSCLKSMPL0; // net ID: RXPCSCLKSMPL0 lsb: 0  msb: 0 OUTPUT
			this->RXPCSCLKSMPL1 = RXPCSCLKSMPL1; // net ID: RXPCSCLKSMPL1 lsb: 0  msb: 0 OUTPUT
			this->RXPCSCLKSMPL2 = RXPCSCLKSMPL2; // net ID: RXPCSCLKSMPL2 lsb: 0  msb: 0 OUTPUT
			this->RXPCSCLKSMPL3 = RXPCSCLKSMPL3; // net ID: RXPCSCLKSMPL3 lsb: 0  msb: 0 OUTPUT
			this->RXUSERCLKOUT0 = RXUSERCLKOUT0; // net ID: RXUSERCLKOUT0 lsb: 0  msb: 0 OUTPUT
			this->RXUSERCLKOUT1 = RXUSERCLKOUT1; // net ID: RXUSERCLKOUT1 lsb: 0  msb: 0 OUTPUT
			this->RXUSERCLKOUT2 = RXUSERCLKOUT2; // net ID: RXUSERCLKOUT2 lsb: 0  msb: 0 OUTPUT
			this->RXUSERCLKOUT3 = RXUSERCLKOUT3; // net ID: RXUSERCLKOUT3 lsb: 0  msb: 0 OUTPUT
			this->RXVALID0 = RXVALID0; // net ID: RXVALID0 lsb: 0  msb: 0 OUTPUT
			this->RXVALID1 = RXVALID1; // net ID: RXVALID1 lsb: 0  msb: 0 OUTPUT
			this->RXVALID2 = RXVALID2; // net ID: RXVALID2 lsb: 0  msb: 0 OUTPUT
			this->RXVALID3 = RXVALID3; // net ID: RXVALID3 lsb: 0  msb: 0 OUTPUT
			this->TSTPATH = TSTPATH; // net ID: TSTPATH lsb: 0  msb: 0 OUTPUT
			this->TSTREFCLKFAB = TSTREFCLKFAB; // net ID: TSTREFCLKFAB lsb: 0  msb: 0 OUTPUT
			this->TSTREFCLKOUT = TSTREFCLKOUT; // net ID: TSTREFCLKOUT lsb: 0  msb: 0 OUTPUT
			this->TXCTRLACK0 = TXCTRLACK0; // net ID: TXCTRLACK0 lsb: 0  msb: 0 OUTPUT
			this->TXCTRLACK1 = TXCTRLACK1; // net ID: TXCTRLACK1 lsb: 0  msb: 0 OUTPUT
			this->TXCTRLACK2 = TXCTRLACK2; // net ID: TXCTRLACK2 lsb: 0  msb: 0 OUTPUT
			this->TXCTRLACK3 = TXCTRLACK3; // net ID: TXCTRLACK3 lsb: 0  msb: 0 OUTPUT
			this->TXDATATAP10 = TXDATATAP10; // net ID: TXDATATAP10 lsb: 0  msb: 0 OUTPUT
			this->TXDATATAP11 = TXDATATAP11; // net ID: TXDATATAP11 lsb: 0  msb: 0 OUTPUT
			this->TXDATATAP12 = TXDATATAP12; // net ID: TXDATATAP12 lsb: 0  msb: 0 OUTPUT
			this->TXDATATAP13 = TXDATATAP13; // net ID: TXDATATAP13 lsb: 0  msb: 0 OUTPUT
			this->TXDATATAP20 = TXDATATAP20; // net ID: TXDATATAP20 lsb: 0  msb: 0 OUTPUT
			this->TXDATATAP21 = TXDATATAP21; // net ID: TXDATATAP21 lsb: 0  msb: 0 OUTPUT
			this->TXDATATAP22 = TXDATATAP22; // net ID: TXDATATAP22 lsb: 0  msb: 0 OUTPUT
			this->TXDATATAP23 = TXDATATAP23; // net ID: TXDATATAP23 lsb: 0  msb: 0 OUTPUT
			this->TXN0 = TXN0; // net ID: TXN0 lsb: 0  msb: 0 OUTPUT
			this->TXN1 = TXN1; // net ID: TXN1 lsb: 0  msb: 0 OUTPUT
			this->TXN2 = TXN2; // net ID: TXN2 lsb: 0  msb: 0 OUTPUT
			this->TXN3 = TXN3; // net ID: TXN3 lsb: 0  msb: 0 OUTPUT
			this->TXP0 = TXP0; // net ID: TXP0 lsb: 0  msb: 0 OUTPUT
			this->TXP1 = TXP1; // net ID: TXP1 lsb: 0  msb: 0 OUTPUT
			this->TXP2 = TXP2; // net ID: TXP2 lsb: 0  msb: 0 OUTPUT
			this->TXP3 = TXP3; // net ID: TXP3 lsb: 0  msb: 0 OUTPUT
			this->TXPCSCLKSMPL0 = TXPCSCLKSMPL0; // net ID: TXPCSCLKSMPL0 lsb: 0  msb: 0 OUTPUT
			this->TXPCSCLKSMPL1 = TXPCSCLKSMPL1; // net ID: TXPCSCLKSMPL1 lsb: 0  msb: 0 OUTPUT
			this->TXPCSCLKSMPL2 = TXPCSCLKSMPL2; // net ID: TXPCSCLKSMPL2 lsb: 0  msb: 0 OUTPUT
			this->TXPCSCLKSMPL3 = TXPCSCLKSMPL3; // net ID: TXPCSCLKSMPL3 lsb: 0  msb: 0 OUTPUT
			this->TXUSERCLKOUT0 = TXUSERCLKOUT0; // net ID: TXUSERCLKOUT0 lsb: 0  msb: 0 OUTPUT
			this->TXUSERCLKOUT1 = TXUSERCLKOUT1; // net ID: TXUSERCLKOUT1 lsb: 0  msb: 0 OUTPUT
			this->TXUSERCLKOUT2 = TXUSERCLKOUT2; // net ID: TXUSERCLKOUT2 lsb: 0  msb: 0 OUTPUT
			this->TXUSERCLKOUT3 = TXUSERCLKOUT3; // net ID: TXUSERCLKOUT3 lsb: 0  msb: 0 OUTPUT
			this->DADDR = DADDR; // net ID: DADDR lsb: 0  msb: 15 INPUT
			this->DCLK = DCLK; // net ID: DCLK lsb: 0  msb: 0 INPUT
			this->DEN = DEN; // net ID: DEN lsb: 0  msb: 0 INPUT
			this->DFETRAINCTRL0 = DFETRAINCTRL0; // net ID: DFETRAINCTRL0 lsb: 0  msb: 0 INPUT
			this->DFETRAINCTRL1 = DFETRAINCTRL1; // net ID: DFETRAINCTRL1 lsb: 0  msb: 0 INPUT
			this->DFETRAINCTRL2 = DFETRAINCTRL2; // net ID: DFETRAINCTRL2 lsb: 0  msb: 0 INPUT
			this->DFETRAINCTRL3 = DFETRAINCTRL3; // net ID: DFETRAINCTRL3 lsb: 0  msb: 0 INPUT
			this->DI = DI; // net ID: DI lsb: 0  msb: 15 INPUT
			this->DISABLEDRP = DISABLEDRP; // net ID: DISABLEDRP lsb: 0  msb: 0 INPUT
			this->DWE = DWE; // net ID: DWE lsb: 0  msb: 0 INPUT
			this->GTHINIT = GTHINIT; // net ID: GTHINIT lsb: 0  msb: 0 INPUT
			this->GTHRESET = GTHRESET; // net ID: GTHRESET lsb: 0  msb: 0 INPUT
			this->GTHX2LANE01 = GTHX2LANE01; // net ID: GTHX2LANE01 lsb: 0  msb: 0 INPUT
			this->GTHX2LANE23 = GTHX2LANE23; // net ID: GTHX2LANE23 lsb: 0  msb: 0 INPUT
			this->GTHX4LANE = GTHX4LANE; // net ID: GTHX4LANE lsb: 0  msb: 0 INPUT
			this->MGMTPCSLANESEL = MGMTPCSLANESEL; // net ID: MGMTPCSLANESEL lsb: 0  msb: 3 INPUT
			this->MGMTPCSMMDADDR = MGMTPCSMMDADDR; // net ID: MGMTPCSMMDADDR lsb: 0  msb: 4 INPUT
			this->MGMTPCSREGADDR = MGMTPCSREGADDR; // net ID: MGMTPCSREGADDR lsb: 0  msb: 15 INPUT
			this->MGMTPCSREGRD = MGMTPCSREGRD; // net ID: MGMTPCSREGRD lsb: 0  msb: 0 INPUT
			this->MGMTPCSREGWR = MGMTPCSREGWR; // net ID: MGMTPCSREGWR lsb: 0  msb: 0 INPUT
			this->MGMTPCSWRDATA = MGMTPCSWRDATA; // net ID: MGMTPCSWRDATA lsb: 0  msb: 15 INPUT
			this->PLLPCSCLKDIV = PLLPCSCLKDIV; // net ID: PLLPCSCLKDIV lsb: 0  msb: 5 INPUT
			this->PLLREFCLKSEL = PLLREFCLKSEL; // net ID: PLLREFCLKSEL lsb: 0  msb: 2 INPUT
			this->POWERDOWN0 = POWERDOWN0; // net ID: POWERDOWN0 lsb: 0  msb: 0 INPUT
			this->POWERDOWN1 = POWERDOWN1; // net ID: POWERDOWN1 lsb: 0  msb: 0 INPUT
			this->POWERDOWN2 = POWERDOWN2; // net ID: POWERDOWN2 lsb: 0  msb: 0 INPUT
			this->POWERDOWN3 = POWERDOWN3; // net ID: POWERDOWN3 lsb: 0  msb: 0 INPUT
			this->REFCLK = REFCLK; // net ID: REFCLK lsb: 0  msb: 0 INPUT
			this->RXBUFRESET0 = RXBUFRESET0; // net ID: RXBUFRESET0 lsb: 0  msb: 0 INPUT
			this->RXBUFRESET1 = RXBUFRESET1; // net ID: RXBUFRESET1 lsb: 0  msb: 0 INPUT
			this->RXBUFRESET2 = RXBUFRESET2; // net ID: RXBUFRESET2 lsb: 0  msb: 0 INPUT
			this->RXBUFRESET3 = RXBUFRESET3; // net ID: RXBUFRESET3 lsb: 0  msb: 0 INPUT
			this->RXENCOMMADET0 = RXENCOMMADET0; // net ID: RXENCOMMADET0 lsb: 0  msb: 0 INPUT
			this->RXENCOMMADET1 = RXENCOMMADET1; // net ID: RXENCOMMADET1 lsb: 0  msb: 0 INPUT
			this->RXENCOMMADET2 = RXENCOMMADET2; // net ID: RXENCOMMADET2 lsb: 0  msb: 0 INPUT
			this->RXENCOMMADET3 = RXENCOMMADET3; // net ID: RXENCOMMADET3 lsb: 0  msb: 0 INPUT
			this->RXN0 = RXN0; // net ID: RXN0 lsb: 0  msb: 0 INPUT
			this->RXN1 = RXN1; // net ID: RXN1 lsb: 0  msb: 0 INPUT
			this->RXN2 = RXN2; // net ID: RXN2 lsb: 0  msb: 0 INPUT
			this->RXN3 = RXN3; // net ID: RXN3 lsb: 0  msb: 0 INPUT
			this->RXP0 = RXP0; // net ID: RXP0 lsb: 0  msb: 0 INPUT
			this->RXP1 = RXP1; // net ID: RXP1 lsb: 0  msb: 0 INPUT
			this->RXP2 = RXP2; // net ID: RXP2 lsb: 0  msb: 0 INPUT
			this->RXP3 = RXP3; // net ID: RXP3 lsb: 0  msb: 0 INPUT
			this->RXPOLARITY0 = RXPOLARITY0; // net ID: RXPOLARITY0 lsb: 0  msb: 0 INPUT
			this->RXPOLARITY1 = RXPOLARITY1; // net ID: RXPOLARITY1 lsb: 0  msb: 0 INPUT
			this->RXPOLARITY2 = RXPOLARITY2; // net ID: RXPOLARITY2 lsb: 0  msb: 0 INPUT
			this->RXPOLARITY3 = RXPOLARITY3; // net ID: RXPOLARITY3 lsb: 0  msb: 0 INPUT
			this->RXPOWERDOWN0 = RXPOWERDOWN0; // net ID: RXPOWERDOWN0 lsb: 0  msb: 1 INPUT
			this->RXPOWERDOWN1 = RXPOWERDOWN1; // net ID: RXPOWERDOWN1 lsb: 0  msb: 1 INPUT
			this->RXPOWERDOWN2 = RXPOWERDOWN2; // net ID: RXPOWERDOWN2 lsb: 0  msb: 1 INPUT
			this->RXPOWERDOWN3 = RXPOWERDOWN3; // net ID: RXPOWERDOWN3 lsb: 0  msb: 1 INPUT
			this->RXRATE0 = RXRATE0; // net ID: RXRATE0 lsb: 0  msb: 1 INPUT
			this->RXRATE1 = RXRATE1; // net ID: RXRATE1 lsb: 0  msb: 1 INPUT
			this->RXRATE2 = RXRATE2; // net ID: RXRATE2 lsb: 0  msb: 1 INPUT
			this->RXRATE3 = RXRATE3; // net ID: RXRATE3 lsb: 0  msb: 1 INPUT
			this->RXSLIP0 = RXSLIP0; // net ID: RXSLIP0 lsb: 0  msb: 0 INPUT
			this->RXSLIP1 = RXSLIP1; // net ID: RXSLIP1 lsb: 0  msb: 0 INPUT
			this->RXSLIP2 = RXSLIP2; // net ID: RXSLIP2 lsb: 0  msb: 0 INPUT
			this->RXSLIP3 = RXSLIP3; // net ID: RXSLIP3 lsb: 0  msb: 0 INPUT
			this->RXUSERCLKIN0 = RXUSERCLKIN0; // net ID: RXUSERCLKIN0 lsb: 0  msb: 0 INPUT
			this->RXUSERCLKIN1 = RXUSERCLKIN1; // net ID: RXUSERCLKIN1 lsb: 0  msb: 0 INPUT
			this->RXUSERCLKIN2 = RXUSERCLKIN2; // net ID: RXUSERCLKIN2 lsb: 0  msb: 0 INPUT
			this->RXUSERCLKIN3 = RXUSERCLKIN3; // net ID: RXUSERCLKIN3 lsb: 0  msb: 0 INPUT
			this->SAMPLERATE0 = SAMPLERATE0; // net ID: SAMPLERATE0 lsb: 0  msb: 2 INPUT
			this->SAMPLERATE1 = SAMPLERATE1; // net ID: SAMPLERATE1 lsb: 0  msb: 2 INPUT
			this->SAMPLERATE2 = SAMPLERATE2; // net ID: SAMPLERATE2 lsb: 0  msb: 2 INPUT
			this->SAMPLERATE3 = SAMPLERATE3; // net ID: SAMPLERATE3 lsb: 0  msb: 2 INPUT
			this->TXBUFRESET0 = TXBUFRESET0; // net ID: TXBUFRESET0 lsb: 0  msb: 0 INPUT
			this->TXBUFRESET1 = TXBUFRESET1; // net ID: TXBUFRESET1 lsb: 0  msb: 0 INPUT
			this->TXBUFRESET2 = TXBUFRESET2; // net ID: TXBUFRESET2 lsb: 0  msb: 0 INPUT
			this->TXBUFRESET3 = TXBUFRESET3; // net ID: TXBUFRESET3 lsb: 0  msb: 0 INPUT
			this->TXCTRL0 = TXCTRL0; // net ID: TXCTRL0 lsb: 0  msb: 7 INPUT
			this->TXCTRL1 = TXCTRL1; // net ID: TXCTRL1 lsb: 0  msb: 7 INPUT
			this->TXCTRL2 = TXCTRL2; // net ID: TXCTRL2 lsb: 0  msb: 7 INPUT
			this->TXCTRL3 = TXCTRL3; // net ID: TXCTRL3 lsb: 0  msb: 7 INPUT
			this->TXDATA0 = TXDATA0; // net ID: TXDATA0 lsb: 0  msb: 63 INPUT
			this->TXDATA1 = TXDATA1; // net ID: TXDATA1 lsb: 0  msb: 63 INPUT
			this->TXDATA2 = TXDATA2; // net ID: TXDATA2 lsb: 0  msb: 63 INPUT
			this->TXDATA3 = TXDATA3; // net ID: TXDATA3 lsb: 0  msb: 63 INPUT
			this->TXDATAMSB0 = TXDATAMSB0; // net ID: TXDATAMSB0 lsb: 0  msb: 7 INPUT
			this->TXDATAMSB1 = TXDATAMSB1; // net ID: TXDATAMSB1 lsb: 0  msb: 7 INPUT
			this->TXDATAMSB2 = TXDATAMSB2; // net ID: TXDATAMSB2 lsb: 0  msb: 7 INPUT
			this->TXDATAMSB3 = TXDATAMSB3; // net ID: TXDATAMSB3 lsb: 0  msb: 7 INPUT
			this->TXDEEMPH0 = TXDEEMPH0; // net ID: TXDEEMPH0 lsb: 0  msb: 0 INPUT
			this->TXDEEMPH1 = TXDEEMPH1; // net ID: TXDEEMPH1 lsb: 0  msb: 0 INPUT
			this->TXDEEMPH2 = TXDEEMPH2; // net ID: TXDEEMPH2 lsb: 0  msb: 0 INPUT
			this->TXDEEMPH3 = TXDEEMPH3; // net ID: TXDEEMPH3 lsb: 0  msb: 0 INPUT
			this->TXMARGIN0 = TXMARGIN0; // net ID: TXMARGIN0 lsb: 0  msb: 2 INPUT
			this->TXMARGIN1 = TXMARGIN1; // net ID: TXMARGIN1 lsb: 0  msb: 2 INPUT
			this->TXMARGIN2 = TXMARGIN2; // net ID: TXMARGIN2 lsb: 0  msb: 2 INPUT
			this->TXMARGIN3 = TXMARGIN3; // net ID: TXMARGIN3 lsb: 0  msb: 2 INPUT
			this->TXPOWERDOWN0 = TXPOWERDOWN0; // net ID: TXPOWERDOWN0 lsb: 0  msb: 1 INPUT
			this->TXPOWERDOWN1 = TXPOWERDOWN1; // net ID: TXPOWERDOWN1 lsb: 0  msb: 1 INPUT
			this->TXPOWERDOWN2 = TXPOWERDOWN2; // net ID: TXPOWERDOWN2 lsb: 0  msb: 1 INPUT
			this->TXPOWERDOWN3 = TXPOWERDOWN3; // net ID: TXPOWERDOWN3 lsb: 0  msb: 1 INPUT
			this->TXRATE0 = TXRATE0; // net ID: TXRATE0 lsb: 0  msb: 1 INPUT
			this->TXRATE1 = TXRATE1; // net ID: TXRATE1 lsb: 0  msb: 1 INPUT
			this->TXRATE2 = TXRATE2; // net ID: TXRATE2 lsb: 0  msb: 1 INPUT
			this->TXRATE3 = TXRATE3; // net ID: TXRATE3 lsb: 0  msb: 1 INPUT
			this->TXUSERCLKIN0 = TXUSERCLKIN0; // net ID: TXUSERCLKIN0 lsb: 0  msb: 0 INPUT
			this->TXUSERCLKIN1 = TXUSERCLKIN1; // net ID: TXUSERCLKIN1 lsb: 0  msb: 0 INPUT
			this->TXUSERCLKIN2 = TXUSERCLKIN2; // net ID: TXUSERCLKIN2 lsb: 0  msb: 0 INPUT
			this->TXUSERCLKIN3 = TXUSERCLKIN3; // net ID: TXUSERCLKIN3 lsb: 0  msb: 0 INPUT
			
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
