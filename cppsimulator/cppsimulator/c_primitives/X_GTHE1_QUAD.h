/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_GTHE1_QUAD{

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
		NetFlow* DRDY; // OUTPUT
		NetFlow* DRPDO; // OUTPUT
		NetFlow* GTHINITDONE; // OUTPUT
		NetFlow* MGMTPCSRDACK; // OUTPUT
		NetFlow* MGMTPCSRDDATA; // OUTPUT
		NetFlow* RXCODEERR0; // OUTPUT
		NetFlow* RXCODEERR1; // OUTPUT
		NetFlow* RXCODEERR2; // OUTPUT
		NetFlow* RXCODEERR3; // OUTPUT
		NetFlow* RXCTRL0; // OUTPUT
		NetFlow* RXCTRL1; // OUTPUT
		NetFlow* RXCTRL2; // OUTPUT
		NetFlow* RXCTRL3; // OUTPUT
		NetFlow* RXCTRLACK0; // OUTPUT
		NetFlow* RXCTRLACK1; // OUTPUT
		NetFlow* RXCTRLACK2; // OUTPUT
		NetFlow* RXCTRLACK3; // OUTPUT
		NetFlow* RXDATA0; // OUTPUT
		NetFlow* RXDATA1; // OUTPUT
		NetFlow* RXDATA2; // OUTPUT
		NetFlow* RXDATA3; // OUTPUT
		NetFlow* RXDATATAP0; // OUTPUT
		NetFlow* RXDATATAP1; // OUTPUT
		NetFlow* RXDATATAP2; // OUTPUT
		NetFlow* RXDATATAP3; // OUTPUT
		NetFlow* RXDISPERR0; // OUTPUT
		NetFlow* RXDISPERR1; // OUTPUT
		NetFlow* RXDISPERR2; // OUTPUT
		NetFlow* RXDISPERR3; // OUTPUT
		NetFlow* RXPCSCLKSMPL0; // OUTPUT
		NetFlow* RXPCSCLKSMPL1; // OUTPUT
		NetFlow* RXPCSCLKSMPL2; // OUTPUT
		NetFlow* RXPCSCLKSMPL3; // OUTPUT
		NetFlow* RXUSERCLKOUT0; // OUTPUT
		NetFlow* RXUSERCLKOUT1; // OUTPUT
		NetFlow* RXUSERCLKOUT2; // OUTPUT
		NetFlow* RXUSERCLKOUT3; // OUTPUT
		NetFlow* RXVALID0; // OUTPUT
		NetFlow* RXVALID1; // OUTPUT
		NetFlow* RXVALID2; // OUTPUT
		NetFlow* RXVALID3; // OUTPUT
		NetFlow* TSTPATH; // OUTPUT
		NetFlow* TSTREFCLKFAB; // OUTPUT
		NetFlow* TSTREFCLKOUT; // OUTPUT
		NetFlow* TXCTRLACK0; // OUTPUT
		NetFlow* TXCTRLACK1; // OUTPUT
		NetFlow* TXCTRLACK2; // OUTPUT
		NetFlow* TXCTRLACK3; // OUTPUT
		NetFlow* TXDATATAP10; // OUTPUT
		NetFlow* TXDATATAP11; // OUTPUT
		NetFlow* TXDATATAP12; // OUTPUT
		NetFlow* TXDATATAP13; // OUTPUT
		NetFlow* TXDATATAP20; // OUTPUT
		NetFlow* TXDATATAP21; // OUTPUT
		NetFlow* TXDATATAP22; // OUTPUT
		NetFlow* TXDATATAP23; // OUTPUT
		NetFlow* TXN0; // OUTPUT
		NetFlow* TXN1; // OUTPUT
		NetFlow* TXN2; // OUTPUT
		NetFlow* TXN3; // OUTPUT
		NetFlow* TXP0; // OUTPUT
		NetFlow* TXP1; // OUTPUT
		NetFlow* TXP2; // OUTPUT
		NetFlow* TXP3; // OUTPUT
		NetFlow* TXPCSCLKSMPL0; // OUTPUT
		NetFlow* TXPCSCLKSMPL1; // OUTPUT
		NetFlow* TXPCSCLKSMPL2; // OUTPUT
		NetFlow* TXPCSCLKSMPL3; // OUTPUT
		NetFlow* TXUSERCLKOUT0; // OUTPUT
		NetFlow* TXUSERCLKOUT1; // OUTPUT
		NetFlow* TXUSERCLKOUT2; // OUTPUT
		NetFlow* TXUSERCLKOUT3; // OUTPUT
		NetFlow* DADDR; // INPUT
		NetFlow* DCLK; // INPUT
		NetFlow* DEN; // INPUT
		NetFlow* DFETRAINCTRL0; // INPUT
		NetFlow* DFETRAINCTRL1; // INPUT
		NetFlow* DFETRAINCTRL2; // INPUT
		NetFlow* DFETRAINCTRL3; // INPUT
		NetFlow* DI; // INPUT
		NetFlow* DISABLEDRP; // INPUT
		NetFlow* DWE; // INPUT
		NetFlow* GTHINIT; // INPUT
		NetFlow* GTHRESET; // INPUT
		NetFlow* GTHX2LANE01; // INPUT
		NetFlow* GTHX2LANE23; // INPUT
		NetFlow* GTHX4LANE; // INPUT
		NetFlow* MGMTPCSLANESEL; // INPUT
		NetFlow* MGMTPCSMMDADDR; // INPUT
		NetFlow* MGMTPCSREGADDR; // INPUT
		NetFlow* MGMTPCSREGRD; // INPUT
		NetFlow* MGMTPCSREGWR; // INPUT
		NetFlow* MGMTPCSWRDATA; // INPUT
		NetFlow* PLLPCSCLKDIV; // INPUT
		NetFlow* PLLREFCLKSEL; // INPUT
		NetFlow* POWERDOWN0; // INPUT
		NetFlow* POWERDOWN1; // INPUT
		NetFlow* POWERDOWN2; // INPUT
		NetFlow* POWERDOWN3; // INPUT
		NetFlow* REFCLK; // INPUT
		NetFlow* RXBUFRESET0; // INPUT
		NetFlow* RXBUFRESET1; // INPUT
		NetFlow* RXBUFRESET2; // INPUT
		NetFlow* RXBUFRESET3; // INPUT
		NetFlow* RXENCOMMADET0; // INPUT
		NetFlow* RXENCOMMADET1; // INPUT
		NetFlow* RXENCOMMADET2; // INPUT
		NetFlow* RXENCOMMADET3; // INPUT
		NetFlow* RXN0; // INPUT
		NetFlow* RXN1; // INPUT
		NetFlow* RXN2; // INPUT
		NetFlow* RXN3; // INPUT
		NetFlow* RXP0; // INPUT
		NetFlow* RXP1; // INPUT
		NetFlow* RXP2; // INPUT
		NetFlow* RXP3; // INPUT
		NetFlow* RXPOLARITY0; // INPUT
		NetFlow* RXPOLARITY1; // INPUT
		NetFlow* RXPOLARITY2; // INPUT
		NetFlow* RXPOLARITY3; // INPUT
		NetFlow* RXPOWERDOWN0; // INPUT
		NetFlow* RXPOWERDOWN1; // INPUT
		NetFlow* RXPOWERDOWN2; // INPUT
		NetFlow* RXPOWERDOWN3; // INPUT
		NetFlow* RXRATE0; // INPUT
		NetFlow* RXRATE1; // INPUT
		NetFlow* RXRATE2; // INPUT
		NetFlow* RXRATE3; // INPUT
		NetFlow* RXSLIP0; // INPUT
		NetFlow* RXSLIP1; // INPUT
		NetFlow* RXSLIP2; // INPUT
		NetFlow* RXSLIP3; // INPUT
		NetFlow* RXUSERCLKIN0; // INPUT
		NetFlow* RXUSERCLKIN1; // INPUT
		NetFlow* RXUSERCLKIN2; // INPUT
		NetFlow* RXUSERCLKIN3; // INPUT
		NetFlow* SAMPLERATE0; // INPUT
		NetFlow* SAMPLERATE1; // INPUT
		NetFlow* SAMPLERATE2; // INPUT
		NetFlow* SAMPLERATE3; // INPUT
		NetFlow* TXBUFRESET0; // INPUT
		NetFlow* TXBUFRESET1; // INPUT
		NetFlow* TXBUFRESET2; // INPUT
		NetFlow* TXBUFRESET3; // INPUT
		NetFlow* TXCTRL0; // INPUT
		NetFlow* TXCTRL1; // INPUT
		NetFlow* TXCTRL2; // INPUT
		NetFlow* TXCTRL3; // INPUT
		NetFlow* TXDATA0; // INPUT
		NetFlow* TXDATA1; // INPUT
		NetFlow* TXDATA2; // INPUT
		NetFlow* TXDATA3; // INPUT
		NetFlow* TXDATAMSB0; // INPUT
		NetFlow* TXDATAMSB1; // INPUT
		NetFlow* TXDATAMSB2; // INPUT
		NetFlow* TXDATAMSB3; // INPUT
		NetFlow* TXDEEMPH0; // INPUT
		NetFlow* TXDEEMPH1; // INPUT
		NetFlow* TXDEEMPH2; // INPUT
		NetFlow* TXDEEMPH3; // INPUT
		NetFlow* TXMARGIN0; // INPUT
		NetFlow* TXMARGIN1; // INPUT
		NetFlow* TXMARGIN2; // INPUT
		NetFlow* TXMARGIN3; // INPUT
		NetFlow* TXPOWERDOWN0; // INPUT
		NetFlow* TXPOWERDOWN1; // INPUT
		NetFlow* TXPOWERDOWN2; // INPUT
		NetFlow* TXPOWERDOWN3; // INPUT
		NetFlow* TXRATE0; // INPUT
		NetFlow* TXRATE1; // INPUT
		NetFlow* TXRATE2; // INPUT
		NetFlow* TXRATE3; // INPUT
		NetFlow* TXUSERCLKIN0; // INPUT
		NetFlow* TXUSERCLKIN1; // INPUT
		NetFlow* TXUSERCLKIN2; // INPUT
		NetFlow* TXUSERCLKIN3; // INPUT
		
	
		X_GTHE1_QUAD(
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
			NetFlow* DRDY, // OUTPUT
			NetFlow* DRPDO, // OUTPUT
			NetFlow* GTHINITDONE, // OUTPUT
			NetFlow* MGMTPCSRDACK, // OUTPUT
			NetFlow* MGMTPCSRDDATA, // OUTPUT
			NetFlow* RXCODEERR0, // OUTPUT
			NetFlow* RXCODEERR1, // OUTPUT
			NetFlow* RXCODEERR2, // OUTPUT
			NetFlow* RXCODEERR3, // OUTPUT
			NetFlow* RXCTRL0, // OUTPUT
			NetFlow* RXCTRL1, // OUTPUT
			NetFlow* RXCTRL2, // OUTPUT
			NetFlow* RXCTRL3, // OUTPUT
			NetFlow* RXCTRLACK0, // OUTPUT
			NetFlow* RXCTRLACK1, // OUTPUT
			NetFlow* RXCTRLACK2, // OUTPUT
			NetFlow* RXCTRLACK3, // OUTPUT
			NetFlow* RXDATA0, // OUTPUT
			NetFlow* RXDATA1, // OUTPUT
			NetFlow* RXDATA2, // OUTPUT
			NetFlow* RXDATA3, // OUTPUT
			NetFlow* RXDATATAP0, // OUTPUT
			NetFlow* RXDATATAP1, // OUTPUT
			NetFlow* RXDATATAP2, // OUTPUT
			NetFlow* RXDATATAP3, // OUTPUT
			NetFlow* RXDISPERR0, // OUTPUT
			NetFlow* RXDISPERR1, // OUTPUT
			NetFlow* RXDISPERR2, // OUTPUT
			NetFlow* RXDISPERR3, // OUTPUT
			NetFlow* RXPCSCLKSMPL0, // OUTPUT
			NetFlow* RXPCSCLKSMPL1, // OUTPUT
			NetFlow* RXPCSCLKSMPL2, // OUTPUT
			NetFlow* RXPCSCLKSMPL3, // OUTPUT
			NetFlow* RXUSERCLKOUT0, // OUTPUT
			NetFlow* RXUSERCLKOUT1, // OUTPUT
			NetFlow* RXUSERCLKOUT2, // OUTPUT
			NetFlow* RXUSERCLKOUT3, // OUTPUT
			NetFlow* RXVALID0, // OUTPUT
			NetFlow* RXVALID1, // OUTPUT
			NetFlow* RXVALID2, // OUTPUT
			NetFlow* RXVALID3, // OUTPUT
			NetFlow* TSTPATH, // OUTPUT
			NetFlow* TSTREFCLKFAB, // OUTPUT
			NetFlow* TSTREFCLKOUT, // OUTPUT
			NetFlow* TXCTRLACK0, // OUTPUT
			NetFlow* TXCTRLACK1, // OUTPUT
			NetFlow* TXCTRLACK2, // OUTPUT
			NetFlow* TXCTRLACK3, // OUTPUT
			NetFlow* TXDATATAP10, // OUTPUT
			NetFlow* TXDATATAP11, // OUTPUT
			NetFlow* TXDATATAP12, // OUTPUT
			NetFlow* TXDATATAP13, // OUTPUT
			NetFlow* TXDATATAP20, // OUTPUT
			NetFlow* TXDATATAP21, // OUTPUT
			NetFlow* TXDATATAP22, // OUTPUT
			NetFlow* TXDATATAP23, // OUTPUT
			NetFlow* TXN0, // OUTPUT
			NetFlow* TXN1, // OUTPUT
			NetFlow* TXN2, // OUTPUT
			NetFlow* TXN3, // OUTPUT
			NetFlow* TXP0, // OUTPUT
			NetFlow* TXP1, // OUTPUT
			NetFlow* TXP2, // OUTPUT
			NetFlow* TXP3, // OUTPUT
			NetFlow* TXPCSCLKSMPL0, // OUTPUT
			NetFlow* TXPCSCLKSMPL1, // OUTPUT
			NetFlow* TXPCSCLKSMPL2, // OUTPUT
			NetFlow* TXPCSCLKSMPL3, // OUTPUT
			NetFlow* TXUSERCLKOUT0, // OUTPUT
			NetFlow* TXUSERCLKOUT1, // OUTPUT
			NetFlow* TXUSERCLKOUT2, // OUTPUT
			NetFlow* TXUSERCLKOUT3, // OUTPUT
			NetFlow* DADDR, // INPUT
			NetFlow* DCLK, // INPUT
			NetFlow* DEN, // INPUT
			NetFlow* DFETRAINCTRL0, // INPUT
			NetFlow* DFETRAINCTRL1, // INPUT
			NetFlow* DFETRAINCTRL2, // INPUT
			NetFlow* DFETRAINCTRL3, // INPUT
			NetFlow* DI, // INPUT
			NetFlow* DISABLEDRP, // INPUT
			NetFlow* DWE, // INPUT
			NetFlow* GTHINIT, // INPUT
			NetFlow* GTHRESET, // INPUT
			NetFlow* GTHX2LANE01, // INPUT
			NetFlow* GTHX2LANE23, // INPUT
			NetFlow* GTHX4LANE, // INPUT
			NetFlow* MGMTPCSLANESEL, // INPUT
			NetFlow* MGMTPCSMMDADDR, // INPUT
			NetFlow* MGMTPCSREGADDR, // INPUT
			NetFlow* MGMTPCSREGRD, // INPUT
			NetFlow* MGMTPCSREGWR, // INPUT
			NetFlow* MGMTPCSWRDATA, // INPUT
			NetFlow* PLLPCSCLKDIV, // INPUT
			NetFlow* PLLREFCLKSEL, // INPUT
			NetFlow* POWERDOWN0, // INPUT
			NetFlow* POWERDOWN1, // INPUT
			NetFlow* POWERDOWN2, // INPUT
			NetFlow* POWERDOWN3, // INPUT
			NetFlow* REFCLK, // INPUT
			NetFlow* RXBUFRESET0, // INPUT
			NetFlow* RXBUFRESET1, // INPUT
			NetFlow* RXBUFRESET2, // INPUT
			NetFlow* RXBUFRESET3, // INPUT
			NetFlow* RXENCOMMADET0, // INPUT
			NetFlow* RXENCOMMADET1, // INPUT
			NetFlow* RXENCOMMADET2, // INPUT
			NetFlow* RXENCOMMADET3, // INPUT
			NetFlow* RXN0, // INPUT
			NetFlow* RXN1, // INPUT
			NetFlow* RXN2, // INPUT
			NetFlow* RXN3, // INPUT
			NetFlow* RXP0, // INPUT
			NetFlow* RXP1, // INPUT
			NetFlow* RXP2, // INPUT
			NetFlow* RXP3, // INPUT
			NetFlow* RXPOLARITY0, // INPUT
			NetFlow* RXPOLARITY1, // INPUT
			NetFlow* RXPOLARITY2, // INPUT
			NetFlow* RXPOLARITY3, // INPUT
			NetFlow* RXPOWERDOWN0, // INPUT
			NetFlow* RXPOWERDOWN1, // INPUT
			NetFlow* RXPOWERDOWN2, // INPUT
			NetFlow* RXPOWERDOWN3, // INPUT
			NetFlow* RXRATE0, // INPUT
			NetFlow* RXRATE1, // INPUT
			NetFlow* RXRATE2, // INPUT
			NetFlow* RXRATE3, // INPUT
			NetFlow* RXSLIP0, // INPUT
			NetFlow* RXSLIP1, // INPUT
			NetFlow* RXSLIP2, // INPUT
			NetFlow* RXSLIP3, // INPUT
			NetFlow* RXUSERCLKIN0, // INPUT
			NetFlow* RXUSERCLKIN1, // INPUT
			NetFlow* RXUSERCLKIN2, // INPUT
			NetFlow* RXUSERCLKIN3, // INPUT
			NetFlow* SAMPLERATE0, // INPUT
			NetFlow* SAMPLERATE1, // INPUT
			NetFlow* SAMPLERATE2, // INPUT
			NetFlow* SAMPLERATE3, // INPUT
			NetFlow* TXBUFRESET0, // INPUT
			NetFlow* TXBUFRESET1, // INPUT
			NetFlow* TXBUFRESET2, // INPUT
			NetFlow* TXBUFRESET3, // INPUT
			NetFlow* TXCTRL0, // INPUT
			NetFlow* TXCTRL1, // INPUT
			NetFlow* TXCTRL2, // INPUT
			NetFlow* TXCTRL3, // INPUT
			NetFlow* TXDATA0, // INPUT
			NetFlow* TXDATA1, // INPUT
			NetFlow* TXDATA2, // INPUT
			NetFlow* TXDATA3, // INPUT
			NetFlow* TXDATAMSB0, // INPUT
			NetFlow* TXDATAMSB1, // INPUT
			NetFlow* TXDATAMSB2, // INPUT
			NetFlow* TXDATAMSB3, // INPUT
			NetFlow* TXDEEMPH0, // INPUT
			NetFlow* TXDEEMPH1, // INPUT
			NetFlow* TXDEEMPH2, // INPUT
			NetFlow* TXDEEMPH3, // INPUT
			NetFlow* TXMARGIN0, // INPUT
			NetFlow* TXMARGIN1, // INPUT
			NetFlow* TXMARGIN2, // INPUT
			NetFlow* TXMARGIN3, // INPUT
			NetFlow* TXPOWERDOWN0, // INPUT
			NetFlow* TXPOWERDOWN1, // INPUT
			NetFlow* TXPOWERDOWN2, // INPUT
			NetFlow* TXPOWERDOWN3, // INPUT
			NetFlow* TXRATE0, // INPUT
			NetFlow* TXRATE1, // INPUT
			NetFlow* TXRATE2, // INPUT
			NetFlow* TXRATE3, // INPUT
			NetFlow* TXUSERCLKIN0, // INPUT
			NetFlow* TXUSERCLKIN1, // INPUT
			NetFlow* TXUSERCLKIN2, // INPUT
			NetFlow* TXUSERCLKIN3 // INPUT
			){
		
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
			this->DRDY = DRDY; // OUTPUT
			this->DRPDO = DRPDO; // OUTPUT
			this->GTHINITDONE = GTHINITDONE; // OUTPUT
			this->MGMTPCSRDACK = MGMTPCSRDACK; // OUTPUT
			this->MGMTPCSRDDATA = MGMTPCSRDDATA; // OUTPUT
			this->RXCODEERR0 = RXCODEERR0; // OUTPUT
			this->RXCODEERR1 = RXCODEERR1; // OUTPUT
			this->RXCODEERR2 = RXCODEERR2; // OUTPUT
			this->RXCODEERR3 = RXCODEERR3; // OUTPUT
			this->RXCTRL0 = RXCTRL0; // OUTPUT
			this->RXCTRL1 = RXCTRL1; // OUTPUT
			this->RXCTRL2 = RXCTRL2; // OUTPUT
			this->RXCTRL3 = RXCTRL3; // OUTPUT
			this->RXCTRLACK0 = RXCTRLACK0; // OUTPUT
			this->RXCTRLACK1 = RXCTRLACK1; // OUTPUT
			this->RXCTRLACK2 = RXCTRLACK2; // OUTPUT
			this->RXCTRLACK3 = RXCTRLACK3; // OUTPUT
			this->RXDATA0 = RXDATA0; // OUTPUT
			this->RXDATA1 = RXDATA1; // OUTPUT
			this->RXDATA2 = RXDATA2; // OUTPUT
			this->RXDATA3 = RXDATA3; // OUTPUT
			this->RXDATATAP0 = RXDATATAP0; // OUTPUT
			this->RXDATATAP1 = RXDATATAP1; // OUTPUT
			this->RXDATATAP2 = RXDATATAP2; // OUTPUT
			this->RXDATATAP3 = RXDATATAP3; // OUTPUT
			this->RXDISPERR0 = RXDISPERR0; // OUTPUT
			this->RXDISPERR1 = RXDISPERR1; // OUTPUT
			this->RXDISPERR2 = RXDISPERR2; // OUTPUT
			this->RXDISPERR3 = RXDISPERR3; // OUTPUT
			this->RXPCSCLKSMPL0 = RXPCSCLKSMPL0; // OUTPUT
			this->RXPCSCLKSMPL1 = RXPCSCLKSMPL1; // OUTPUT
			this->RXPCSCLKSMPL2 = RXPCSCLKSMPL2; // OUTPUT
			this->RXPCSCLKSMPL3 = RXPCSCLKSMPL3; // OUTPUT
			this->RXUSERCLKOUT0 = RXUSERCLKOUT0; // OUTPUT
			this->RXUSERCLKOUT1 = RXUSERCLKOUT1; // OUTPUT
			this->RXUSERCLKOUT2 = RXUSERCLKOUT2; // OUTPUT
			this->RXUSERCLKOUT3 = RXUSERCLKOUT3; // OUTPUT
			this->RXVALID0 = RXVALID0; // OUTPUT
			this->RXVALID1 = RXVALID1; // OUTPUT
			this->RXVALID2 = RXVALID2; // OUTPUT
			this->RXVALID3 = RXVALID3; // OUTPUT
			this->TSTPATH = TSTPATH; // OUTPUT
			this->TSTREFCLKFAB = TSTREFCLKFAB; // OUTPUT
			this->TSTREFCLKOUT = TSTREFCLKOUT; // OUTPUT
			this->TXCTRLACK0 = TXCTRLACK0; // OUTPUT
			this->TXCTRLACK1 = TXCTRLACK1; // OUTPUT
			this->TXCTRLACK2 = TXCTRLACK2; // OUTPUT
			this->TXCTRLACK3 = TXCTRLACK3; // OUTPUT
			this->TXDATATAP10 = TXDATATAP10; // OUTPUT
			this->TXDATATAP11 = TXDATATAP11; // OUTPUT
			this->TXDATATAP12 = TXDATATAP12; // OUTPUT
			this->TXDATATAP13 = TXDATATAP13; // OUTPUT
			this->TXDATATAP20 = TXDATATAP20; // OUTPUT
			this->TXDATATAP21 = TXDATATAP21; // OUTPUT
			this->TXDATATAP22 = TXDATATAP22; // OUTPUT
			this->TXDATATAP23 = TXDATATAP23; // OUTPUT
			this->TXN0 = TXN0; // OUTPUT
			this->TXN1 = TXN1; // OUTPUT
			this->TXN2 = TXN2; // OUTPUT
			this->TXN3 = TXN3; // OUTPUT
			this->TXP0 = TXP0; // OUTPUT
			this->TXP1 = TXP1; // OUTPUT
			this->TXP2 = TXP2; // OUTPUT
			this->TXP3 = TXP3; // OUTPUT
			this->TXPCSCLKSMPL0 = TXPCSCLKSMPL0; // OUTPUT
			this->TXPCSCLKSMPL1 = TXPCSCLKSMPL1; // OUTPUT
			this->TXPCSCLKSMPL2 = TXPCSCLKSMPL2; // OUTPUT
			this->TXPCSCLKSMPL3 = TXPCSCLKSMPL3; // OUTPUT
			this->TXUSERCLKOUT0 = TXUSERCLKOUT0; // OUTPUT
			this->TXUSERCLKOUT1 = TXUSERCLKOUT1; // OUTPUT
			this->TXUSERCLKOUT2 = TXUSERCLKOUT2; // OUTPUT
			this->TXUSERCLKOUT3 = TXUSERCLKOUT3; // OUTPUT
			this->DADDR = DADDR; // INPUT
			this->DCLK = DCLK; // INPUT
			this->DEN = DEN; // INPUT
			this->DFETRAINCTRL0 = DFETRAINCTRL0; // INPUT
			this->DFETRAINCTRL1 = DFETRAINCTRL1; // INPUT
			this->DFETRAINCTRL2 = DFETRAINCTRL2; // INPUT
			this->DFETRAINCTRL3 = DFETRAINCTRL3; // INPUT
			this->DI = DI; // INPUT
			this->DISABLEDRP = DISABLEDRP; // INPUT
			this->DWE = DWE; // INPUT
			this->GTHINIT = GTHINIT; // INPUT
			this->GTHRESET = GTHRESET; // INPUT
			this->GTHX2LANE01 = GTHX2LANE01; // INPUT
			this->GTHX2LANE23 = GTHX2LANE23; // INPUT
			this->GTHX4LANE = GTHX4LANE; // INPUT
			this->MGMTPCSLANESEL = MGMTPCSLANESEL; // INPUT
			this->MGMTPCSMMDADDR = MGMTPCSMMDADDR; // INPUT
			this->MGMTPCSREGADDR = MGMTPCSREGADDR; // INPUT
			this->MGMTPCSREGRD = MGMTPCSREGRD; // INPUT
			this->MGMTPCSREGWR = MGMTPCSREGWR; // INPUT
			this->MGMTPCSWRDATA = MGMTPCSWRDATA; // INPUT
			this->PLLPCSCLKDIV = PLLPCSCLKDIV; // INPUT
			this->PLLREFCLKSEL = PLLREFCLKSEL; // INPUT
			this->POWERDOWN0 = POWERDOWN0; // INPUT
			this->POWERDOWN1 = POWERDOWN1; // INPUT
			this->POWERDOWN2 = POWERDOWN2; // INPUT
			this->POWERDOWN3 = POWERDOWN3; // INPUT
			this->REFCLK = REFCLK; // INPUT
			this->RXBUFRESET0 = RXBUFRESET0; // INPUT
			this->RXBUFRESET1 = RXBUFRESET1; // INPUT
			this->RXBUFRESET2 = RXBUFRESET2; // INPUT
			this->RXBUFRESET3 = RXBUFRESET3; // INPUT
			this->RXENCOMMADET0 = RXENCOMMADET0; // INPUT
			this->RXENCOMMADET1 = RXENCOMMADET1; // INPUT
			this->RXENCOMMADET2 = RXENCOMMADET2; // INPUT
			this->RXENCOMMADET3 = RXENCOMMADET3; // INPUT
			this->RXN0 = RXN0; // INPUT
			this->RXN1 = RXN1; // INPUT
			this->RXN2 = RXN2; // INPUT
			this->RXN3 = RXN3; // INPUT
			this->RXP0 = RXP0; // INPUT
			this->RXP1 = RXP1; // INPUT
			this->RXP2 = RXP2; // INPUT
			this->RXP3 = RXP3; // INPUT
			this->RXPOLARITY0 = RXPOLARITY0; // INPUT
			this->RXPOLARITY1 = RXPOLARITY1; // INPUT
			this->RXPOLARITY2 = RXPOLARITY2; // INPUT
			this->RXPOLARITY3 = RXPOLARITY3; // INPUT
			this->RXPOWERDOWN0 = RXPOWERDOWN0; // INPUT
			this->RXPOWERDOWN1 = RXPOWERDOWN1; // INPUT
			this->RXPOWERDOWN2 = RXPOWERDOWN2; // INPUT
			this->RXPOWERDOWN3 = RXPOWERDOWN3; // INPUT
			this->RXRATE0 = RXRATE0; // INPUT
			this->RXRATE1 = RXRATE1; // INPUT
			this->RXRATE2 = RXRATE2; // INPUT
			this->RXRATE3 = RXRATE3; // INPUT
			this->RXSLIP0 = RXSLIP0; // INPUT
			this->RXSLIP1 = RXSLIP1; // INPUT
			this->RXSLIP2 = RXSLIP2; // INPUT
			this->RXSLIP3 = RXSLIP3; // INPUT
			this->RXUSERCLKIN0 = RXUSERCLKIN0; // INPUT
			this->RXUSERCLKIN1 = RXUSERCLKIN1; // INPUT
			this->RXUSERCLKIN2 = RXUSERCLKIN2; // INPUT
			this->RXUSERCLKIN3 = RXUSERCLKIN3; // INPUT
			this->SAMPLERATE0 = SAMPLERATE0; // INPUT
			this->SAMPLERATE1 = SAMPLERATE1; // INPUT
			this->SAMPLERATE2 = SAMPLERATE2; // INPUT
			this->SAMPLERATE3 = SAMPLERATE3; // INPUT
			this->TXBUFRESET0 = TXBUFRESET0; // INPUT
			this->TXBUFRESET1 = TXBUFRESET1; // INPUT
			this->TXBUFRESET2 = TXBUFRESET2; // INPUT
			this->TXBUFRESET3 = TXBUFRESET3; // INPUT
			this->TXCTRL0 = TXCTRL0; // INPUT
			this->TXCTRL1 = TXCTRL1; // INPUT
			this->TXCTRL2 = TXCTRL2; // INPUT
			this->TXCTRL3 = TXCTRL3; // INPUT
			this->TXDATA0 = TXDATA0; // INPUT
			this->TXDATA1 = TXDATA1; // INPUT
			this->TXDATA2 = TXDATA2; // INPUT
			this->TXDATA3 = TXDATA3; // INPUT
			this->TXDATAMSB0 = TXDATAMSB0; // INPUT
			this->TXDATAMSB1 = TXDATAMSB1; // INPUT
			this->TXDATAMSB2 = TXDATAMSB2; // INPUT
			this->TXDATAMSB3 = TXDATAMSB3; // INPUT
			this->TXDEEMPH0 = TXDEEMPH0; // INPUT
			this->TXDEEMPH1 = TXDEEMPH1; // INPUT
			this->TXDEEMPH2 = TXDEEMPH2; // INPUT
			this->TXDEEMPH3 = TXDEEMPH3; // INPUT
			this->TXMARGIN0 = TXMARGIN0; // INPUT
			this->TXMARGIN1 = TXMARGIN1; // INPUT
			this->TXMARGIN2 = TXMARGIN2; // INPUT
			this->TXMARGIN3 = TXMARGIN3; // INPUT
			this->TXPOWERDOWN0 = TXPOWERDOWN0; // INPUT
			this->TXPOWERDOWN1 = TXPOWERDOWN1; // INPUT
			this->TXPOWERDOWN2 = TXPOWERDOWN2; // INPUT
			this->TXPOWERDOWN3 = TXPOWERDOWN3; // INPUT
			this->TXRATE0 = TXRATE0; // INPUT
			this->TXRATE1 = TXRATE1; // INPUT
			this->TXRATE2 = TXRATE2; // INPUT
			this->TXRATE3 = TXRATE3; // INPUT
			this->TXUSERCLKIN0 = TXUSERCLKIN0; // INPUT
			this->TXUSERCLKIN1 = TXUSERCLKIN1; // INPUT
			this->TXUSERCLKIN2 = TXUSERCLKIN2; // INPUT
			this->TXUSERCLKIN3 = TXUSERCLKIN3; // INPUT
		
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
