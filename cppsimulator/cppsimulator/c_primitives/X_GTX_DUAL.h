/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_GTX_DUAL_H
#define X_GTX_DUAL_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_GTX_DUAL: public Primitive{

		//Verilog Parameters:
		parameter_string_t LOC;
		parameter_enum_t AC_CAP_DIS_0;
		parameter_enum_t AC_CAP_DIS_1;
		parameter_enum_t CHAN_BOND_KEEP_ALIGN_0;
		parameter_enum_t CHAN_BOND_KEEP_ALIGN_1;
		parameter_string_t CHAN_BOND_MODE_0;
		parameter_string_t CHAN_BOND_MODE_1;
		parameter_enum_t CHAN_BOND_SEQ_2_USE_0;
		parameter_enum_t CHAN_BOND_SEQ_2_USE_1;
		parameter_enum_t CLKINDC_B;
		parameter_enum_t CLKRCV_TRST;
		parameter_enum_t CLK_CORRECT_USE_0;
		parameter_enum_t CLK_CORRECT_USE_1;
		parameter_enum_t CLK_COR_INSERT_IDLE_FLAG_0;
		parameter_enum_t CLK_COR_INSERT_IDLE_FLAG_1;
		parameter_enum_t CLK_COR_KEEP_IDLE_0;
		parameter_enum_t CLK_COR_KEEP_IDLE_1;
		parameter_enum_t CLK_COR_PRECEDENCE_0;
		parameter_enum_t CLK_COR_PRECEDENCE_1;
		parameter_enum_t CLK_COR_SEQ_2_USE_0;
		parameter_enum_t CLK_COR_SEQ_2_USE_1;
		parameter_enum_t COMMA_DOUBLE_0;
		parameter_enum_t COMMA_DOUBLE_1;
		parameter_enum_t DEC_MCOMMA_DETECT_0;
		parameter_enum_t DEC_MCOMMA_DETECT_1;
		parameter_enum_t DEC_PCOMMA_DETECT_0;
		parameter_enum_t DEC_PCOMMA_DETECT_1;
		parameter_enum_t DEC_VALID_COMMA_ONLY_0;
		parameter_enum_t DEC_VALID_COMMA_ONLY_1;
		parameter_enum_t MCOMMA_DETECT_0;
		parameter_enum_t MCOMMA_DETECT_1;
		parameter_enum_t OVERSAMPLE_MODE;
		parameter_enum_t PCI_EXPRESS_MODE_0;
		parameter_enum_t PCI_EXPRESS_MODE_1;
		parameter_enum_t PCOMMA_DETECT_0;
		parameter_enum_t PCOMMA_DETECT_1;
		parameter_enum_t PLL_FB_DCCEN;
		parameter_enum_t PLL_SATA_0;
		parameter_enum_t PLL_SATA_1;
		parameter_enum_t RCV_TERM_GND_0;
		parameter_enum_t RCV_TERM_GND_1;
		parameter_enum_t RCV_TERM_VTTRX_0;
		parameter_enum_t RCV_TERM_VTTRX_1;
		parameter_enum_t RXGEARBOX_USE_0;
		parameter_enum_t RXGEARBOX_USE_1;
		parameter_enum_t RX_BUFFER_USE_0;
		parameter_enum_t RX_BUFFER_USE_1;
		parameter_enum_t RX_DECODE_SEQ_MATCH_0;
		parameter_enum_t RX_DECODE_SEQ_MATCH_1;
		parameter_enum_t RX_EN_IDLE_HOLD_CDR;
		parameter_enum_t RX_EN_IDLE_HOLD_DFE_0;
		parameter_enum_t RX_EN_IDLE_HOLD_DFE_1;
		parameter_enum_t RX_EN_IDLE_RESET_BUF_0;
		parameter_enum_t RX_EN_IDLE_RESET_BUF_1;
		parameter_enum_t RX_EN_IDLE_RESET_FR;
		parameter_enum_t RX_EN_IDLE_RESET_PH;
		parameter_enum_t RX_LOSS_OF_SYNC_FSM_0;
		parameter_enum_t RX_LOSS_OF_SYNC_FSM_1;
		parameter_string_t RX_SLIDE_MODE_0;
		parameter_string_t RX_SLIDE_MODE_1;
		parameter_string_t RX_STATUS_FMT_0;
		parameter_string_t RX_STATUS_FMT_1;
		parameter_string_t RX_XCLK_SEL_0;
		parameter_string_t RX_XCLK_SEL_1;
		parameter_string_t SIM_MODE;
		parameter_int_t SIM_PLL_PERDIV2;
		parameter_enum_t SIM_RECEIVER_DETECT_PASS_0;
		parameter_enum_t SIM_RECEIVER_DETECT_PASS_1;
		parameter_enum_t TERMINATION_OVRD;
		parameter_enum_t TXGEARBOX_USE_0;
		parameter_enum_t TXGEARBOX_USE_1;
		parameter_enum_t TX_BUFFER_USE_0;
		parameter_enum_t TX_BUFFER_USE_1;
		parameter_string_t TX_XCLK_SEL_0;
		parameter_string_t TX_XCLK_SEL_1;
		parameter_int_t TRANS_TIME_FROM_P2_0;
		parameter_int_t TRANS_TIME_FROM_P2_1;
		parameter_int_t TX_DETECT_RX_CFG_0;
		parameter_int_t TX_DETECT_RX_CFG_1;
		parameter_int_t PMA_TX_CFG_0;
		parameter_int_t PMA_TX_CFG_1;
		parameter_int_t CM_TRIM_0;
		parameter_int_t CM_TRIM_1;
		parameter_int_t PLL_COM_CFG;
		parameter_int_t PMA_RX_CFG_0;
		parameter_int_t PMA_RX_CFG_1;
		parameter_int_t PMA_CDR_SCAN_0;
		parameter_int_t PMA_CDR_SCAN_1;
		parameter_int_t GEARBOX_ENDEC_0;
		parameter_int_t GEARBOX_ENDEC_1;
		parameter_int_t OOBDETECT_THRESHOLD_0;
		parameter_int_t OOBDETECT_THRESHOLD_1;
		parameter_int_t PLL_LKDET_CFG;
		parameter_int_t PLL_TDCC_CFG;
		parameter_int_t SATA_BURST_VAL_0;
		parameter_int_t SATA_BURST_VAL_1;
		parameter_int_t SATA_IDLE_VAL_0;
		parameter_int_t SATA_IDLE_VAL_1;
		parameter_int_t TXRX_INVERT_0;
		parameter_int_t TXRX_INVERT_1;
		parameter_int_t TX_IDLE_DELAY_0;
		parameter_int_t TX_IDLE_DELAY_1;
		parameter_int_t PRBS_ERR_THRESHOLD_0;
		parameter_int_t PRBS_ERR_THRESHOLD_1;
		parameter_int_t CHAN_BOND_SEQ_1_ENABLE_0;
		parameter_int_t CHAN_BOND_SEQ_1_ENABLE_1;
		parameter_int_t CHAN_BOND_SEQ_2_ENABLE_0;
		parameter_int_t CHAN_BOND_SEQ_2_ENABLE_1;
		parameter_int_t CLK_COR_SEQ_1_ENABLE_0;
		parameter_int_t CLK_COR_SEQ_1_ENABLE_1;
		parameter_int_t CLK_COR_SEQ_2_ENABLE_0;
		parameter_int_t CLK_COR_SEQ_2_ENABLE_1;
		parameter_int_t COM_BURST_VAL_0;
		parameter_int_t COM_BURST_VAL_1;
		parameter_int_t RX_IDLE_HI_CNT_0;
		parameter_int_t RX_IDLE_HI_CNT_1;
		parameter_int_t RX_IDLE_LO_CNT_0;
		parameter_int_t RX_IDLE_LO_CNT_1;
		parameter_int_t CDR_PH_ADJ_TIME;
		parameter_int_t DFE_CAL_TIME;
		parameter_int_t TERMINATION_CTRL;
		parameter_int_t PMA_COM_CFG;
		parameter_int_t PMA_RXSYNC_CFG_0;
		parameter_int_t PMA_RXSYNC_CFG_1;
		parameter_int_t PLL_CP_CFG;
		parameter_int_t TRANS_TIME_NON_P2_0;
		parameter_int_t TRANS_TIME_NON_P2_1;
		parameter_int_t CHAN_BOND_SEQ_1_1_0;
		parameter_int_t CHAN_BOND_SEQ_1_1_1;
		parameter_int_t CHAN_BOND_SEQ_1_2_0;
		parameter_int_t CHAN_BOND_SEQ_1_2_1;
		parameter_int_t CHAN_BOND_SEQ_1_3_0;
		parameter_int_t CHAN_BOND_SEQ_1_3_1;
		parameter_int_t CHAN_BOND_SEQ_1_4_0;
		parameter_int_t CHAN_BOND_SEQ_1_4_1;
		parameter_int_t CHAN_BOND_SEQ_2_1_0;
		parameter_int_t CHAN_BOND_SEQ_2_1_1;
		parameter_int_t CHAN_BOND_SEQ_2_2_0;
		parameter_int_t CHAN_BOND_SEQ_2_2_1;
		parameter_int_t CHAN_BOND_SEQ_2_3_0;
		parameter_int_t CHAN_BOND_SEQ_2_3_1;
		parameter_int_t CHAN_BOND_SEQ_2_4_0;
		parameter_int_t CHAN_BOND_SEQ_2_4_1;
		parameter_int_t CLK_COR_SEQ_1_1_0;
		parameter_int_t CLK_COR_SEQ_1_1_1;
		parameter_int_t CLK_COR_SEQ_1_2_0;
		parameter_int_t CLK_COR_SEQ_1_2_1;
		parameter_int_t CLK_COR_SEQ_1_3_0;
		parameter_int_t CLK_COR_SEQ_1_3_1;
		parameter_int_t CLK_COR_SEQ_1_4_0;
		parameter_int_t CLK_COR_SEQ_1_4_1;
		parameter_int_t CLK_COR_SEQ_2_1_0;
		parameter_int_t CLK_COR_SEQ_2_1_1;
		parameter_int_t CLK_COR_SEQ_2_2_0;
		parameter_int_t CLK_COR_SEQ_2_2_1;
		parameter_int_t CLK_COR_SEQ_2_3_0;
		parameter_int_t CLK_COR_SEQ_2_3_1;
		parameter_int_t CLK_COR_SEQ_2_4_0;
		parameter_int_t CLK_COR_SEQ_2_4_1;
		parameter_int_t COMMA_10B_ENABLE_0;
		parameter_int_t COMMA_10B_ENABLE_1;
		parameter_int_t DFE_CFG_0;
		parameter_int_t DFE_CFG_1;
		parameter_int_t MCOMMA_10B_VALUE_0;
		parameter_int_t MCOMMA_10B_VALUE_1;
		parameter_int_t PCOMMA_10B_VALUE_0;
		parameter_int_t PCOMMA_10B_VALUE_1;
		parameter_int_t TRANS_TIME_TO_P2_0;
		parameter_int_t TRANS_TIME_TO_P2_1;
		parameter_int_t ALIGN_COMMA_WORD_0;
		parameter_int_t ALIGN_COMMA_WORD_1;
		parameter_int_t CB2_INH_CC_PERIOD_0;
		parameter_int_t CB2_INH_CC_PERIOD_1;
		parameter_int_t CHAN_BOND_1_MAX_SKEW_0;
		parameter_int_t CHAN_BOND_1_MAX_SKEW_1;
		parameter_int_t CHAN_BOND_2_MAX_SKEW_0;
		parameter_int_t CHAN_BOND_2_MAX_SKEW_1;
		parameter_int_t CHAN_BOND_LEVEL_0;
		parameter_int_t CHAN_BOND_LEVEL_1;
		parameter_int_t CHAN_BOND_SEQ_LEN_0;
		parameter_int_t CHAN_BOND_SEQ_LEN_1;
		parameter_int_t CLK25_DIVIDER;
		parameter_int_t CLK_COR_ADJ_LEN_0;
		parameter_int_t CLK_COR_ADJ_LEN_1;
		parameter_int_t CLK_COR_DET_LEN_0;
		parameter_int_t CLK_COR_DET_LEN_1;
		parameter_int_t CLK_COR_MAX_LAT_0;
		parameter_int_t CLK_COR_MAX_LAT_1;
		parameter_int_t CLK_COR_MIN_LAT_0;
		parameter_int_t CLK_COR_MIN_LAT_1;
		parameter_int_t CLK_COR_REPEAT_WAIT_0;
		parameter_int_t CLK_COR_REPEAT_WAIT_1;
		parameter_int_t OOB_CLK_DIVIDER;
		parameter_int_t PLL_DIVSEL_FB;
		parameter_int_t PLL_DIVSEL_REF;
		parameter_int_t PLL_RXDIVSEL_OUT_0;
		parameter_int_t PLL_RXDIVSEL_OUT_1;
		parameter_int_t PLL_TXDIVSEL_OUT_0;
		parameter_int_t PLL_TXDIVSEL_OUT_1;
		parameter_int_t RX_LOS_INVALID_INCR_0;
		parameter_int_t RX_LOS_INVALID_INCR_1;
		parameter_int_t RX_LOS_THRESHOLD_0;
		parameter_int_t RX_LOS_THRESHOLD_1;
		parameter_int_t SATA_MAX_BURST_0;
		parameter_int_t SATA_MAX_BURST_1;
		parameter_int_t SATA_MAX_INIT_0;
		parameter_int_t SATA_MAX_INIT_1;
		parameter_int_t SATA_MAX_WAKE_0;
		parameter_int_t SATA_MAX_WAKE_1;
		parameter_int_t SATA_MIN_BURST_0;
		parameter_int_t SATA_MIN_BURST_1;
		parameter_int_t SATA_MIN_INIT_0;
		parameter_int_t SATA_MIN_INIT_1;
		parameter_int_t SATA_MIN_WAKE_0;
		parameter_int_t SATA_MIN_WAKE_1;
		parameter_int_t SIM_GTXRESET_SPEEDUP;
		parameter_int_t TERMINATION_IMP_0;
		parameter_int_t TERMINATION_IMP_1;
		//Verilog Ports in definition order:
		NetFlow* DFECLKDLYADJMONITOR0_A5_B; // net ID: DFECLKDLYADJMONITOR0 lsb: 0  msb: 5 OUTPUT
		NetFlow* DFECLKDLYADJMONITOR0_A4_B; // net ID: DFECLKDLYADJMONITOR0 lsb: 0  msb: 5 OUTPUT
		NetFlow* DFECLKDLYADJMONITOR0_A3_B; // net ID: DFECLKDLYADJMONITOR0 lsb: 0  msb: 5 OUTPUT
		NetFlow* DFECLKDLYADJMONITOR0_A2_B; // net ID: DFECLKDLYADJMONITOR0 lsb: 0  msb: 5 OUTPUT
		NetFlow* DFECLKDLYADJMONITOR0_A1_B; // net ID: DFECLKDLYADJMONITOR0 lsb: 0  msb: 5 OUTPUT
		NetFlow* DFECLKDLYADJMONITOR0_A0_B; // net ID: DFECLKDLYADJMONITOR0 lsb: 0  msb: 5 OUTPUT
		NetFlow* DFECLKDLYADJMONITOR1_A5_B; // net ID: DFECLKDLYADJMONITOR1 lsb: 0  msb: 5 OUTPUT
		NetFlow* DFECLKDLYADJMONITOR1_A4_B; // net ID: DFECLKDLYADJMONITOR1 lsb: 0  msb: 5 OUTPUT
		NetFlow* DFECLKDLYADJMONITOR1_A3_B; // net ID: DFECLKDLYADJMONITOR1 lsb: 0  msb: 5 OUTPUT
		NetFlow* DFECLKDLYADJMONITOR1_A2_B; // net ID: DFECLKDLYADJMONITOR1 lsb: 0  msb: 5 OUTPUT
		NetFlow* DFECLKDLYADJMONITOR1_A1_B; // net ID: DFECLKDLYADJMONITOR1 lsb: 0  msb: 5 OUTPUT
		NetFlow* DFECLKDLYADJMONITOR1_A0_B; // net ID: DFECLKDLYADJMONITOR1 lsb: 0  msb: 5 OUTPUT
		NetFlow* DFEEYEDACMONITOR0_A4_B; // net ID: DFEEYEDACMONITOR0 lsb: 0  msb: 4 OUTPUT
		NetFlow* DFEEYEDACMONITOR0_A3_B; // net ID: DFEEYEDACMONITOR0 lsb: 0  msb: 4 OUTPUT
		NetFlow* DFEEYEDACMONITOR0_A2_B; // net ID: DFEEYEDACMONITOR0 lsb: 0  msb: 4 OUTPUT
		NetFlow* DFEEYEDACMONITOR0_A1_B; // net ID: DFEEYEDACMONITOR0 lsb: 0  msb: 4 OUTPUT
		NetFlow* DFEEYEDACMONITOR0_A0_B; // net ID: DFEEYEDACMONITOR0 lsb: 0  msb: 4 OUTPUT
		NetFlow* DFEEYEDACMONITOR1_A4_B; // net ID: DFEEYEDACMONITOR1 lsb: 0  msb: 4 OUTPUT
		NetFlow* DFEEYEDACMONITOR1_A3_B; // net ID: DFEEYEDACMONITOR1 lsb: 0  msb: 4 OUTPUT
		NetFlow* DFEEYEDACMONITOR1_A2_B; // net ID: DFEEYEDACMONITOR1 lsb: 0  msb: 4 OUTPUT
		NetFlow* DFEEYEDACMONITOR1_A1_B; // net ID: DFEEYEDACMONITOR1 lsb: 0  msb: 4 OUTPUT
		NetFlow* DFEEYEDACMONITOR1_A0_B; // net ID: DFEEYEDACMONITOR1 lsb: 0  msb: 4 OUTPUT
		NetFlow* DFESENSCAL0_A2_B; // net ID: DFESENSCAL0 lsb: 0  msb: 2 OUTPUT
		NetFlow* DFESENSCAL0_A1_B; // net ID: DFESENSCAL0 lsb: 0  msb: 2 OUTPUT
		NetFlow* DFESENSCAL0_A0_B; // net ID: DFESENSCAL0 lsb: 0  msb: 2 OUTPUT
		NetFlow* DFESENSCAL1_A2_B; // net ID: DFESENSCAL1 lsb: 0  msb: 2 OUTPUT
		NetFlow* DFESENSCAL1_A1_B; // net ID: DFESENSCAL1 lsb: 0  msb: 2 OUTPUT
		NetFlow* DFESENSCAL1_A0_B; // net ID: DFESENSCAL1 lsb: 0  msb: 2 OUTPUT
		NetFlow* DFETAP1MONITOR0_A4_B; // net ID: DFETAP1MONITOR0 lsb: 0  msb: 4 OUTPUT
		NetFlow* DFETAP1MONITOR0_A3_B; // net ID: DFETAP1MONITOR0 lsb: 0  msb: 4 OUTPUT
		NetFlow* DFETAP1MONITOR0_A2_B; // net ID: DFETAP1MONITOR0 lsb: 0  msb: 4 OUTPUT
		NetFlow* DFETAP1MONITOR0_A1_B; // net ID: DFETAP1MONITOR0 lsb: 0  msb: 4 OUTPUT
		NetFlow* DFETAP1MONITOR0_A0_B; // net ID: DFETAP1MONITOR0 lsb: 0  msb: 4 OUTPUT
		NetFlow* DFETAP1MONITOR1_A4_B; // net ID: DFETAP1MONITOR1 lsb: 0  msb: 4 OUTPUT
		NetFlow* DFETAP1MONITOR1_A3_B; // net ID: DFETAP1MONITOR1 lsb: 0  msb: 4 OUTPUT
		NetFlow* DFETAP1MONITOR1_A2_B; // net ID: DFETAP1MONITOR1 lsb: 0  msb: 4 OUTPUT
		NetFlow* DFETAP1MONITOR1_A1_B; // net ID: DFETAP1MONITOR1 lsb: 0  msb: 4 OUTPUT
		NetFlow* DFETAP1MONITOR1_A0_B; // net ID: DFETAP1MONITOR1 lsb: 0  msb: 4 OUTPUT
		NetFlow* DFETAP2MONITOR0_A4_B; // net ID: DFETAP2MONITOR0 lsb: 0  msb: 4 OUTPUT
		NetFlow* DFETAP2MONITOR0_A3_B; // net ID: DFETAP2MONITOR0 lsb: 0  msb: 4 OUTPUT
		NetFlow* DFETAP2MONITOR0_A2_B; // net ID: DFETAP2MONITOR0 lsb: 0  msb: 4 OUTPUT
		NetFlow* DFETAP2MONITOR0_A1_B; // net ID: DFETAP2MONITOR0 lsb: 0  msb: 4 OUTPUT
		NetFlow* DFETAP2MONITOR0_A0_B; // net ID: DFETAP2MONITOR0 lsb: 0  msb: 4 OUTPUT
		NetFlow* DFETAP2MONITOR1_A4_B; // net ID: DFETAP2MONITOR1 lsb: 0  msb: 4 OUTPUT
		NetFlow* DFETAP2MONITOR1_A3_B; // net ID: DFETAP2MONITOR1 lsb: 0  msb: 4 OUTPUT
		NetFlow* DFETAP2MONITOR1_A2_B; // net ID: DFETAP2MONITOR1 lsb: 0  msb: 4 OUTPUT
		NetFlow* DFETAP2MONITOR1_A1_B; // net ID: DFETAP2MONITOR1 lsb: 0  msb: 4 OUTPUT
		NetFlow* DFETAP2MONITOR1_A0_B; // net ID: DFETAP2MONITOR1 lsb: 0  msb: 4 OUTPUT
		NetFlow* DFETAP3MONITOR0_A3_B; // net ID: DFETAP3MONITOR0 lsb: 0  msb: 3 OUTPUT
		NetFlow* DFETAP3MONITOR0_A2_B; // net ID: DFETAP3MONITOR0 lsb: 0  msb: 3 OUTPUT
		NetFlow* DFETAP3MONITOR0_A1_B; // net ID: DFETAP3MONITOR0 lsb: 0  msb: 3 OUTPUT
		NetFlow* DFETAP3MONITOR0_A0_B; // net ID: DFETAP3MONITOR0 lsb: 0  msb: 3 OUTPUT
		NetFlow* DFETAP3MONITOR1_A3_B; // net ID: DFETAP3MONITOR1 lsb: 0  msb: 3 OUTPUT
		NetFlow* DFETAP3MONITOR1_A2_B; // net ID: DFETAP3MONITOR1 lsb: 0  msb: 3 OUTPUT
		NetFlow* DFETAP3MONITOR1_A1_B; // net ID: DFETAP3MONITOR1 lsb: 0  msb: 3 OUTPUT
		NetFlow* DFETAP3MONITOR1_A0_B; // net ID: DFETAP3MONITOR1 lsb: 0  msb: 3 OUTPUT
		NetFlow* DFETAP4MONITOR0_A3_B; // net ID: DFETAP4MONITOR0 lsb: 0  msb: 3 OUTPUT
		NetFlow* DFETAP4MONITOR0_A2_B; // net ID: DFETAP4MONITOR0 lsb: 0  msb: 3 OUTPUT
		NetFlow* DFETAP4MONITOR0_A1_B; // net ID: DFETAP4MONITOR0 lsb: 0  msb: 3 OUTPUT
		NetFlow* DFETAP4MONITOR0_A0_B; // net ID: DFETAP4MONITOR0 lsb: 0  msb: 3 OUTPUT
		NetFlow* DFETAP4MONITOR1_A3_B; // net ID: DFETAP4MONITOR1 lsb: 0  msb: 3 OUTPUT
		NetFlow* DFETAP4MONITOR1_A2_B; // net ID: DFETAP4MONITOR1 lsb: 0  msb: 3 OUTPUT
		NetFlow* DFETAP4MONITOR1_A1_B; // net ID: DFETAP4MONITOR1 lsb: 0  msb: 3 OUTPUT
		NetFlow* DFETAP4MONITOR1_A0_B; // net ID: DFETAP4MONITOR1 lsb: 0  msb: 3 OUTPUT
		NetFlow* DO_A15_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
		NetFlow* DO_A14_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
		NetFlow* DO_A13_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
		NetFlow* DO_A12_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
		NetFlow* DO_A11_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
		NetFlow* DO_A10_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
		NetFlow* DO_A9_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
		NetFlow* DO_A8_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
		NetFlow* DO_A7_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
		NetFlow* DO_A6_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
		NetFlow* DO_A5_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
		NetFlow* DO_A4_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
		NetFlow* DO_A3_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
		NetFlow* DO_A2_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
		NetFlow* DO_A1_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
		NetFlow* DO_A0_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
		NetFlow* DRDY_A0_B; // net ID: DRDY lsb: 0  msb: 0 OUTPUT
		NetFlow* PHYSTATUS0_A0_B; // net ID: PHYSTATUS0 lsb: 0  msb: 0 OUTPUT
		NetFlow* PHYSTATUS1_A0_B; // net ID: PHYSTATUS1 lsb: 0  msb: 0 OUTPUT
		NetFlow* PLLLKDET_A0_B; // net ID: PLLLKDET lsb: 0  msb: 0 OUTPUT
		NetFlow* REFCLKOUT_A0_B; // net ID: REFCLKOUT lsb: 0  msb: 0 OUTPUT
		NetFlow* RESETDONE0_A0_B; // net ID: RESETDONE0 lsb: 0  msb: 0 OUTPUT
		NetFlow* RESETDONE1_A0_B; // net ID: RESETDONE1 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXBUFSTATUS0_A2_B; // net ID: RXBUFSTATUS0 lsb: 0  msb: 2 OUTPUT
		NetFlow* RXBUFSTATUS0_A1_B; // net ID: RXBUFSTATUS0 lsb: 0  msb: 2 OUTPUT
		NetFlow* RXBUFSTATUS0_A0_B; // net ID: RXBUFSTATUS0 lsb: 0  msb: 2 OUTPUT
		NetFlow* RXBUFSTATUS1_A2_B; // net ID: RXBUFSTATUS1 lsb: 0  msb: 2 OUTPUT
		NetFlow* RXBUFSTATUS1_A1_B; // net ID: RXBUFSTATUS1 lsb: 0  msb: 2 OUTPUT
		NetFlow* RXBUFSTATUS1_A0_B; // net ID: RXBUFSTATUS1 lsb: 0  msb: 2 OUTPUT
		NetFlow* RXBYTEISALIGNED0_A0_B; // net ID: RXBYTEISALIGNED0 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXBYTEISALIGNED1_A0_B; // net ID: RXBYTEISALIGNED1 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXBYTEREALIGN0_A0_B; // net ID: RXBYTEREALIGN0 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXBYTEREALIGN1_A0_B; // net ID: RXBYTEREALIGN1 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXCHANBONDSEQ0_A0_B; // net ID: RXCHANBONDSEQ0 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXCHANBONDSEQ1_A0_B; // net ID: RXCHANBONDSEQ1 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXCHANISALIGNED0_A0_B; // net ID: RXCHANISALIGNED0 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXCHANISALIGNED1_A0_B; // net ID: RXCHANISALIGNED1 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXCHANREALIGN0_A0_B; // net ID: RXCHANREALIGN0 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXCHANREALIGN1_A0_B; // net ID: RXCHANREALIGN1 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXCHARISCOMMA0_A3_B; // net ID: RXCHARISCOMMA0 lsb: 0  msb: 3 OUTPUT
		NetFlow* RXCHARISCOMMA0_A2_B; // net ID: RXCHARISCOMMA0 lsb: 0  msb: 3 OUTPUT
		NetFlow* RXCHARISCOMMA0_A1_B; // net ID: RXCHARISCOMMA0 lsb: 0  msb: 3 OUTPUT
		NetFlow* RXCHARISCOMMA0_A0_B; // net ID: RXCHARISCOMMA0 lsb: 0  msb: 3 OUTPUT
		NetFlow* RXCHARISCOMMA1_A3_B; // net ID: RXCHARISCOMMA1 lsb: 0  msb: 3 OUTPUT
		NetFlow* RXCHARISCOMMA1_A2_B; // net ID: RXCHARISCOMMA1 lsb: 0  msb: 3 OUTPUT
		NetFlow* RXCHARISCOMMA1_A1_B; // net ID: RXCHARISCOMMA1 lsb: 0  msb: 3 OUTPUT
		NetFlow* RXCHARISCOMMA1_A0_B; // net ID: RXCHARISCOMMA1 lsb: 0  msb: 3 OUTPUT
		NetFlow* RXCHARISK0_A3_B; // net ID: RXCHARISK0 lsb: 0  msb: 3 OUTPUT
		NetFlow* RXCHARISK0_A2_B; // net ID: RXCHARISK0 lsb: 0  msb: 3 OUTPUT
		NetFlow* RXCHARISK0_A1_B; // net ID: RXCHARISK0 lsb: 0  msb: 3 OUTPUT
		NetFlow* RXCHARISK0_A0_B; // net ID: RXCHARISK0 lsb: 0  msb: 3 OUTPUT
		NetFlow* RXCHARISK1_A3_B; // net ID: RXCHARISK1 lsb: 0  msb: 3 OUTPUT
		NetFlow* RXCHARISK1_A2_B; // net ID: RXCHARISK1 lsb: 0  msb: 3 OUTPUT
		NetFlow* RXCHARISK1_A1_B; // net ID: RXCHARISK1 lsb: 0  msb: 3 OUTPUT
		NetFlow* RXCHARISK1_A0_B; // net ID: RXCHARISK1 lsb: 0  msb: 3 OUTPUT
		NetFlow* RXCHBONDO0_A3_B; // net ID: RXCHBONDO0 lsb: 0  msb: 3 OUTPUT
		NetFlow* RXCHBONDO0_A2_B; // net ID: RXCHBONDO0 lsb: 0  msb: 3 OUTPUT
		NetFlow* RXCHBONDO0_A1_B; // net ID: RXCHBONDO0 lsb: 0  msb: 3 OUTPUT
		NetFlow* RXCHBONDO0_A0_B; // net ID: RXCHBONDO0 lsb: 0  msb: 3 OUTPUT
		NetFlow* RXCHBONDO1_A3_B; // net ID: RXCHBONDO1 lsb: 0  msb: 3 OUTPUT
		NetFlow* RXCHBONDO1_A2_B; // net ID: RXCHBONDO1 lsb: 0  msb: 3 OUTPUT
		NetFlow* RXCHBONDO1_A1_B; // net ID: RXCHBONDO1 lsb: 0  msb: 3 OUTPUT
		NetFlow* RXCHBONDO1_A0_B; // net ID: RXCHBONDO1 lsb: 0  msb: 3 OUTPUT
		NetFlow* RXCLKCORCNT0_A2_B; // net ID: RXCLKCORCNT0 lsb: 0  msb: 2 OUTPUT
		NetFlow* RXCLKCORCNT0_A1_B; // net ID: RXCLKCORCNT0 lsb: 0  msb: 2 OUTPUT
		NetFlow* RXCLKCORCNT0_A0_B; // net ID: RXCLKCORCNT0 lsb: 0  msb: 2 OUTPUT
		NetFlow* RXCLKCORCNT1_A2_B; // net ID: RXCLKCORCNT1 lsb: 0  msb: 2 OUTPUT
		NetFlow* RXCLKCORCNT1_A1_B; // net ID: RXCLKCORCNT1 lsb: 0  msb: 2 OUTPUT
		NetFlow* RXCLKCORCNT1_A0_B; // net ID: RXCLKCORCNT1 lsb: 0  msb: 2 OUTPUT
		NetFlow* RXCOMMADET0_A0_B; // net ID: RXCOMMADET0 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXCOMMADET1_A0_B; // net ID: RXCOMMADET1 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXDATA0_A31_B; // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA0_A30_B; // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA0_A29_B; // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA0_A28_B; // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA0_A27_B; // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA0_A26_B; // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA0_A25_B; // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA0_A24_B; // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA0_A23_B; // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA0_A22_B; // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA0_A21_B; // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA0_A20_B; // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA0_A19_B; // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA0_A18_B; // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA0_A17_B; // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA0_A16_B; // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA0_A15_B; // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA0_A14_B; // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA0_A13_B; // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA0_A12_B; // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA0_A11_B; // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA0_A10_B; // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA0_A9_B; // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA0_A8_B; // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA0_A7_B; // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA0_A6_B; // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA0_A5_B; // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA0_A4_B; // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA0_A3_B; // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA0_A2_B; // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA0_A1_B; // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA0_A0_B; // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA1_A31_B; // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA1_A30_B; // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA1_A29_B; // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA1_A28_B; // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA1_A27_B; // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA1_A26_B; // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA1_A25_B; // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA1_A24_B; // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA1_A23_B; // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA1_A22_B; // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA1_A21_B; // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA1_A20_B; // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA1_A19_B; // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA1_A18_B; // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA1_A17_B; // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA1_A16_B; // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA1_A15_B; // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA1_A14_B; // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA1_A13_B; // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA1_A12_B; // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA1_A11_B; // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA1_A10_B; // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA1_A9_B; // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA1_A8_B; // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA1_A7_B; // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA1_A6_B; // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA1_A5_B; // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA1_A4_B; // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA1_A3_B; // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA1_A2_B; // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA1_A1_B; // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA1_A0_B; // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATAVALID0_A0_B; // net ID: RXDATAVALID0 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXDATAVALID1_A0_B; // net ID: RXDATAVALID1 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXDISPERR0_A3_B; // net ID: RXDISPERR0 lsb: 0  msb: 3 OUTPUT
		NetFlow* RXDISPERR0_A2_B; // net ID: RXDISPERR0 lsb: 0  msb: 3 OUTPUT
		NetFlow* RXDISPERR0_A1_B; // net ID: RXDISPERR0 lsb: 0  msb: 3 OUTPUT
		NetFlow* RXDISPERR0_A0_B; // net ID: RXDISPERR0 lsb: 0  msb: 3 OUTPUT
		NetFlow* RXDISPERR1_A3_B; // net ID: RXDISPERR1 lsb: 0  msb: 3 OUTPUT
		NetFlow* RXDISPERR1_A2_B; // net ID: RXDISPERR1 lsb: 0  msb: 3 OUTPUT
		NetFlow* RXDISPERR1_A1_B; // net ID: RXDISPERR1 lsb: 0  msb: 3 OUTPUT
		NetFlow* RXDISPERR1_A0_B; // net ID: RXDISPERR1 lsb: 0  msb: 3 OUTPUT
		NetFlow* RXELECIDLE0_A0_B; // net ID: RXELECIDLE0 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXELECIDLE1_A0_B; // net ID: RXELECIDLE1 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXHEADER0_A2_B; // net ID: RXHEADER0 lsb: 0  msb: 2 OUTPUT
		NetFlow* RXHEADER0_A1_B; // net ID: RXHEADER0 lsb: 0  msb: 2 OUTPUT
		NetFlow* RXHEADER0_A0_B; // net ID: RXHEADER0 lsb: 0  msb: 2 OUTPUT
		NetFlow* RXHEADER1_A2_B; // net ID: RXHEADER1 lsb: 0  msb: 2 OUTPUT
		NetFlow* RXHEADER1_A1_B; // net ID: RXHEADER1 lsb: 0  msb: 2 OUTPUT
		NetFlow* RXHEADER1_A0_B; // net ID: RXHEADER1 lsb: 0  msb: 2 OUTPUT
		NetFlow* RXHEADERVALID0_A0_B; // net ID: RXHEADERVALID0 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXHEADERVALID1_A0_B; // net ID: RXHEADERVALID1 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXLOSSOFSYNC0_A1_B; // net ID: RXLOSSOFSYNC0 lsb: 0  msb: 1 OUTPUT
		NetFlow* RXLOSSOFSYNC0_A0_B; // net ID: RXLOSSOFSYNC0 lsb: 0  msb: 1 OUTPUT
		NetFlow* RXLOSSOFSYNC1_A1_B; // net ID: RXLOSSOFSYNC1 lsb: 0  msb: 1 OUTPUT
		NetFlow* RXLOSSOFSYNC1_A0_B; // net ID: RXLOSSOFSYNC1 lsb: 0  msb: 1 OUTPUT
		NetFlow* RXNOTINTABLE0_A3_B; // net ID: RXNOTINTABLE0 lsb: 0  msb: 3 OUTPUT
		NetFlow* RXNOTINTABLE0_A2_B; // net ID: RXNOTINTABLE0 lsb: 0  msb: 3 OUTPUT
		NetFlow* RXNOTINTABLE0_A1_B; // net ID: RXNOTINTABLE0 lsb: 0  msb: 3 OUTPUT
		NetFlow* RXNOTINTABLE0_A0_B; // net ID: RXNOTINTABLE0 lsb: 0  msb: 3 OUTPUT
		NetFlow* RXNOTINTABLE1_A3_B; // net ID: RXNOTINTABLE1 lsb: 0  msb: 3 OUTPUT
		NetFlow* RXNOTINTABLE1_A2_B; // net ID: RXNOTINTABLE1 lsb: 0  msb: 3 OUTPUT
		NetFlow* RXNOTINTABLE1_A1_B; // net ID: RXNOTINTABLE1 lsb: 0  msb: 3 OUTPUT
		NetFlow* RXNOTINTABLE1_A0_B; // net ID: RXNOTINTABLE1 lsb: 0  msb: 3 OUTPUT
		NetFlow* RXOVERSAMPLEERR0_A0_B; // net ID: RXOVERSAMPLEERR0 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXOVERSAMPLEERR1_A0_B; // net ID: RXOVERSAMPLEERR1 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXPRBSERR0_A0_B; // net ID: RXPRBSERR0 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXPRBSERR1_A0_B; // net ID: RXPRBSERR1 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXRECCLK0_A0_B; // net ID: RXRECCLK0 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXRECCLK1_A0_B; // net ID: RXRECCLK1 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXRUNDISP0_A3_B; // net ID: RXRUNDISP0 lsb: 0  msb: 3 OUTPUT
		NetFlow* RXRUNDISP0_A2_B; // net ID: RXRUNDISP0 lsb: 0  msb: 3 OUTPUT
		NetFlow* RXRUNDISP0_A1_B; // net ID: RXRUNDISP0 lsb: 0  msb: 3 OUTPUT
		NetFlow* RXRUNDISP0_A0_B; // net ID: RXRUNDISP0 lsb: 0  msb: 3 OUTPUT
		NetFlow* RXRUNDISP1_A3_B; // net ID: RXRUNDISP1 lsb: 0  msb: 3 OUTPUT
		NetFlow* RXRUNDISP1_A2_B; // net ID: RXRUNDISP1 lsb: 0  msb: 3 OUTPUT
		NetFlow* RXRUNDISP1_A1_B; // net ID: RXRUNDISP1 lsb: 0  msb: 3 OUTPUT
		NetFlow* RXRUNDISP1_A0_B; // net ID: RXRUNDISP1 lsb: 0  msb: 3 OUTPUT
		NetFlow* RXSTARTOFSEQ0_A0_B; // net ID: RXSTARTOFSEQ0 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXSTARTOFSEQ1_A0_B; // net ID: RXSTARTOFSEQ1 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXSTATUS0_A2_B; // net ID: RXSTATUS0 lsb: 0  msb: 2 OUTPUT
		NetFlow* RXSTATUS0_A1_B; // net ID: RXSTATUS0 lsb: 0  msb: 2 OUTPUT
		NetFlow* RXSTATUS0_A0_B; // net ID: RXSTATUS0 lsb: 0  msb: 2 OUTPUT
		NetFlow* RXSTATUS1_A2_B; // net ID: RXSTATUS1 lsb: 0  msb: 2 OUTPUT
		NetFlow* RXSTATUS1_A1_B; // net ID: RXSTATUS1 lsb: 0  msb: 2 OUTPUT
		NetFlow* RXSTATUS1_A0_B; // net ID: RXSTATUS1 lsb: 0  msb: 2 OUTPUT
		NetFlow* RXVALID0_A0_B; // net ID: RXVALID0 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXVALID1_A0_B; // net ID: RXVALID1 lsb: 0  msb: 0 OUTPUT
		NetFlow* TXBUFSTATUS0_A1_B; // net ID: TXBUFSTATUS0 lsb: 0  msb: 1 OUTPUT
		NetFlow* TXBUFSTATUS0_A0_B; // net ID: TXBUFSTATUS0 lsb: 0  msb: 1 OUTPUT
		NetFlow* TXBUFSTATUS1_A1_B; // net ID: TXBUFSTATUS1 lsb: 0  msb: 1 OUTPUT
		NetFlow* TXBUFSTATUS1_A0_B; // net ID: TXBUFSTATUS1 lsb: 0  msb: 1 OUTPUT
		NetFlow* TXGEARBOXREADY0_A0_B; // net ID: TXGEARBOXREADY0 lsb: 0  msb: 0 OUTPUT
		NetFlow* TXGEARBOXREADY1_A0_B; // net ID: TXGEARBOXREADY1 lsb: 0  msb: 0 OUTPUT
		NetFlow* TXKERR0_A3_B; // net ID: TXKERR0 lsb: 0  msb: 3 OUTPUT
		NetFlow* TXKERR0_A2_B; // net ID: TXKERR0 lsb: 0  msb: 3 OUTPUT
		NetFlow* TXKERR0_A1_B; // net ID: TXKERR0 lsb: 0  msb: 3 OUTPUT
		NetFlow* TXKERR0_A0_B; // net ID: TXKERR0 lsb: 0  msb: 3 OUTPUT
		NetFlow* TXKERR1_A3_B; // net ID: TXKERR1 lsb: 0  msb: 3 OUTPUT
		NetFlow* TXKERR1_A2_B; // net ID: TXKERR1 lsb: 0  msb: 3 OUTPUT
		NetFlow* TXKERR1_A1_B; // net ID: TXKERR1 lsb: 0  msb: 3 OUTPUT
		NetFlow* TXKERR1_A0_B; // net ID: TXKERR1 lsb: 0  msb: 3 OUTPUT
		NetFlow* TXN0_A0_B; // net ID: TXN0 lsb: 0  msb: 0 OUTPUT
		NetFlow* TXN1_A0_B; // net ID: TXN1 lsb: 0  msb: 0 OUTPUT
		NetFlow* TXOUTCLK0_A0_B; // net ID: TXOUTCLK0 lsb: 0  msb: 0 OUTPUT
		NetFlow* TXOUTCLK1_A0_B; // net ID: TXOUTCLK1 lsb: 0  msb: 0 OUTPUT
		NetFlow* TXP0_A0_B; // net ID: TXP0 lsb: 0  msb: 0 OUTPUT
		NetFlow* TXP1_A0_B; // net ID: TXP1 lsb: 0  msb: 0 OUTPUT
		NetFlow* TXRUNDISP0_A3_B; // net ID: TXRUNDISP0 lsb: 0  msb: 3 OUTPUT
		NetFlow* TXRUNDISP0_A2_B; // net ID: TXRUNDISP0 lsb: 0  msb: 3 OUTPUT
		NetFlow* TXRUNDISP0_A1_B; // net ID: TXRUNDISP0 lsb: 0  msb: 3 OUTPUT
		NetFlow* TXRUNDISP0_A0_B; // net ID: TXRUNDISP0 lsb: 0  msb: 3 OUTPUT
		NetFlow* TXRUNDISP1_A3_B; // net ID: TXRUNDISP1 lsb: 0  msb: 3 OUTPUT
		NetFlow* TXRUNDISP1_A2_B; // net ID: TXRUNDISP1 lsb: 0  msb: 3 OUTPUT
		NetFlow* TXRUNDISP1_A1_B; // net ID: TXRUNDISP1 lsb: 0  msb: 3 OUTPUT
		NetFlow* TXRUNDISP1_A0_B; // net ID: TXRUNDISP1 lsb: 0  msb: 3 OUTPUT
		NetFlow* CLKIN_A0_B; // net ID: CLKIN lsb: 0  msb: 0 INPUT
		NetFlow* DADDR_A6_B; // net ID: DADDR lsb: 0  msb: 6 INPUT
		NetFlow* DADDR_A5_B; // net ID: DADDR lsb: 0  msb: 6 INPUT
		NetFlow* DADDR_A4_B; // net ID: DADDR lsb: 0  msb: 6 INPUT
		NetFlow* DADDR_A3_B; // net ID: DADDR lsb: 0  msb: 6 INPUT
		NetFlow* DADDR_A2_B; // net ID: DADDR lsb: 0  msb: 6 INPUT
		NetFlow* DADDR_A1_B; // net ID: DADDR lsb: 0  msb: 6 INPUT
		NetFlow* DADDR_A0_B; // net ID: DADDR lsb: 0  msb: 6 INPUT
		NetFlow* DCLK_A0_B; // net ID: DCLK lsb: 0  msb: 0 INPUT
		NetFlow* DEN_A0_B; // net ID: DEN lsb: 0  msb: 0 INPUT
		NetFlow* DFECLKDLYADJ0_A5_B; // net ID: DFECLKDLYADJ0 lsb: 0  msb: 5 INPUT
		NetFlow* DFECLKDLYADJ0_A4_B; // net ID: DFECLKDLYADJ0 lsb: 0  msb: 5 INPUT
		NetFlow* DFECLKDLYADJ0_A3_B; // net ID: DFECLKDLYADJ0 lsb: 0  msb: 5 INPUT
		NetFlow* DFECLKDLYADJ0_A2_B; // net ID: DFECLKDLYADJ0 lsb: 0  msb: 5 INPUT
		NetFlow* DFECLKDLYADJ0_A1_B; // net ID: DFECLKDLYADJ0 lsb: 0  msb: 5 INPUT
		NetFlow* DFECLKDLYADJ0_A0_B; // net ID: DFECLKDLYADJ0 lsb: 0  msb: 5 INPUT
		NetFlow* DFECLKDLYADJ1_A5_B; // net ID: DFECLKDLYADJ1 lsb: 0  msb: 5 INPUT
		NetFlow* DFECLKDLYADJ1_A4_B; // net ID: DFECLKDLYADJ1 lsb: 0  msb: 5 INPUT
		NetFlow* DFECLKDLYADJ1_A3_B; // net ID: DFECLKDLYADJ1 lsb: 0  msb: 5 INPUT
		NetFlow* DFECLKDLYADJ1_A2_B; // net ID: DFECLKDLYADJ1 lsb: 0  msb: 5 INPUT
		NetFlow* DFECLKDLYADJ1_A1_B; // net ID: DFECLKDLYADJ1 lsb: 0  msb: 5 INPUT
		NetFlow* DFECLKDLYADJ1_A0_B; // net ID: DFECLKDLYADJ1 lsb: 0  msb: 5 INPUT
		NetFlow* DFETAP10_A4_B; // net ID: DFETAP10 lsb: 0  msb: 4 INPUT
		NetFlow* DFETAP10_A3_B; // net ID: DFETAP10 lsb: 0  msb: 4 INPUT
		NetFlow* DFETAP10_A2_B; // net ID: DFETAP10 lsb: 0  msb: 4 INPUT
		NetFlow* DFETAP10_A1_B; // net ID: DFETAP10 lsb: 0  msb: 4 INPUT
		NetFlow* DFETAP10_A0_B; // net ID: DFETAP10 lsb: 0  msb: 4 INPUT
		NetFlow* DFETAP11_A4_B; // net ID: DFETAP11 lsb: 0  msb: 4 INPUT
		NetFlow* DFETAP11_A3_B; // net ID: DFETAP11 lsb: 0  msb: 4 INPUT
		NetFlow* DFETAP11_A2_B; // net ID: DFETAP11 lsb: 0  msb: 4 INPUT
		NetFlow* DFETAP11_A1_B; // net ID: DFETAP11 lsb: 0  msb: 4 INPUT
		NetFlow* DFETAP11_A0_B; // net ID: DFETAP11 lsb: 0  msb: 4 INPUT
		NetFlow* DFETAP20_A4_B; // net ID: DFETAP20 lsb: 0  msb: 4 INPUT
		NetFlow* DFETAP20_A3_B; // net ID: DFETAP20 lsb: 0  msb: 4 INPUT
		NetFlow* DFETAP20_A2_B; // net ID: DFETAP20 lsb: 0  msb: 4 INPUT
		NetFlow* DFETAP20_A1_B; // net ID: DFETAP20 lsb: 0  msb: 4 INPUT
		NetFlow* DFETAP20_A0_B; // net ID: DFETAP20 lsb: 0  msb: 4 INPUT
		NetFlow* DFETAP21_A4_B; // net ID: DFETAP21 lsb: 0  msb: 4 INPUT
		NetFlow* DFETAP21_A3_B; // net ID: DFETAP21 lsb: 0  msb: 4 INPUT
		NetFlow* DFETAP21_A2_B; // net ID: DFETAP21 lsb: 0  msb: 4 INPUT
		NetFlow* DFETAP21_A1_B; // net ID: DFETAP21 lsb: 0  msb: 4 INPUT
		NetFlow* DFETAP21_A0_B; // net ID: DFETAP21 lsb: 0  msb: 4 INPUT
		NetFlow* DFETAP30_A3_B; // net ID: DFETAP30 lsb: 0  msb: 3 INPUT
		NetFlow* DFETAP30_A2_B; // net ID: DFETAP30 lsb: 0  msb: 3 INPUT
		NetFlow* DFETAP30_A1_B; // net ID: DFETAP30 lsb: 0  msb: 3 INPUT
		NetFlow* DFETAP30_A0_B; // net ID: DFETAP30 lsb: 0  msb: 3 INPUT
		NetFlow* DFETAP31_A3_B; // net ID: DFETAP31 lsb: 0  msb: 3 INPUT
		NetFlow* DFETAP31_A2_B; // net ID: DFETAP31 lsb: 0  msb: 3 INPUT
		NetFlow* DFETAP31_A1_B; // net ID: DFETAP31 lsb: 0  msb: 3 INPUT
		NetFlow* DFETAP31_A0_B; // net ID: DFETAP31 lsb: 0  msb: 3 INPUT
		NetFlow* DFETAP40_A3_B; // net ID: DFETAP40 lsb: 0  msb: 3 INPUT
		NetFlow* DFETAP40_A2_B; // net ID: DFETAP40 lsb: 0  msb: 3 INPUT
		NetFlow* DFETAP40_A1_B; // net ID: DFETAP40 lsb: 0  msb: 3 INPUT
		NetFlow* DFETAP40_A0_B; // net ID: DFETAP40 lsb: 0  msb: 3 INPUT
		NetFlow* DFETAP41_A3_B; // net ID: DFETAP41 lsb: 0  msb: 3 INPUT
		NetFlow* DFETAP41_A2_B; // net ID: DFETAP41 lsb: 0  msb: 3 INPUT
		NetFlow* DFETAP41_A1_B; // net ID: DFETAP41 lsb: 0  msb: 3 INPUT
		NetFlow* DFETAP41_A0_B; // net ID: DFETAP41 lsb: 0  msb: 3 INPUT
		NetFlow* DI_A15_B; // net ID: DI lsb: 0  msb: 15 INPUT
		NetFlow* DI_A14_B; // net ID: DI lsb: 0  msb: 15 INPUT
		NetFlow* DI_A13_B; // net ID: DI lsb: 0  msb: 15 INPUT
		NetFlow* DI_A12_B; // net ID: DI lsb: 0  msb: 15 INPUT
		NetFlow* DI_A11_B; // net ID: DI lsb: 0  msb: 15 INPUT
		NetFlow* DI_A10_B; // net ID: DI lsb: 0  msb: 15 INPUT
		NetFlow* DI_A9_B; // net ID: DI lsb: 0  msb: 15 INPUT
		NetFlow* DI_A8_B; // net ID: DI lsb: 0  msb: 15 INPUT
		NetFlow* DI_A7_B; // net ID: DI lsb: 0  msb: 15 INPUT
		NetFlow* DI_A6_B; // net ID: DI lsb: 0  msb: 15 INPUT
		NetFlow* DI_A5_B; // net ID: DI lsb: 0  msb: 15 INPUT
		NetFlow* DI_A4_B; // net ID: DI lsb: 0  msb: 15 INPUT
		NetFlow* DI_A3_B; // net ID: DI lsb: 0  msb: 15 INPUT
		NetFlow* DI_A2_B; // net ID: DI lsb: 0  msb: 15 INPUT
		NetFlow* DI_A1_B; // net ID: DI lsb: 0  msb: 15 INPUT
		NetFlow* DI_A0_B; // net ID: DI lsb: 0  msb: 15 INPUT
		NetFlow* DWE_A0_B; // net ID: DWE lsb: 0  msb: 0 INPUT
		NetFlow* GTXRESET_A0_B; // net ID: GTXRESET lsb: 0  msb: 0 INPUT
		NetFlow* GTXTEST_A13_B; // net ID: GTXTEST lsb: 0  msb: 13 INPUT
		NetFlow* GTXTEST_A12_B; // net ID: GTXTEST lsb: 0  msb: 13 INPUT
		NetFlow* GTXTEST_A11_B; // net ID: GTXTEST lsb: 0  msb: 13 INPUT
		NetFlow* GTXTEST_A10_B; // net ID: GTXTEST lsb: 0  msb: 13 INPUT
		NetFlow* GTXTEST_A9_B; // net ID: GTXTEST lsb: 0  msb: 13 INPUT
		NetFlow* GTXTEST_A8_B; // net ID: GTXTEST lsb: 0  msb: 13 INPUT
		NetFlow* GTXTEST_A7_B; // net ID: GTXTEST lsb: 0  msb: 13 INPUT
		NetFlow* GTXTEST_A6_B; // net ID: GTXTEST lsb: 0  msb: 13 INPUT
		NetFlow* GTXTEST_A5_B; // net ID: GTXTEST lsb: 0  msb: 13 INPUT
		NetFlow* GTXTEST_A4_B; // net ID: GTXTEST lsb: 0  msb: 13 INPUT
		NetFlow* GTXTEST_A3_B; // net ID: GTXTEST lsb: 0  msb: 13 INPUT
		NetFlow* GTXTEST_A2_B; // net ID: GTXTEST lsb: 0  msb: 13 INPUT
		NetFlow* GTXTEST_A1_B; // net ID: GTXTEST lsb: 0  msb: 13 INPUT
		NetFlow* GTXTEST_A0_B; // net ID: GTXTEST lsb: 0  msb: 13 INPUT
		NetFlow* INTDATAWIDTH_A0_B; // net ID: INTDATAWIDTH lsb: 0  msb: 0 INPUT
		NetFlow* LOOPBACK0_A2_B; // net ID: LOOPBACK0 lsb: 0  msb: 2 INPUT
		NetFlow* LOOPBACK0_A1_B; // net ID: LOOPBACK0 lsb: 0  msb: 2 INPUT
		NetFlow* LOOPBACK0_A0_B; // net ID: LOOPBACK0 lsb: 0  msb: 2 INPUT
		NetFlow* LOOPBACK1_A2_B; // net ID: LOOPBACK1 lsb: 0  msb: 2 INPUT
		NetFlow* LOOPBACK1_A1_B; // net ID: LOOPBACK1 lsb: 0  msb: 2 INPUT
		NetFlow* LOOPBACK1_A0_B; // net ID: LOOPBACK1 lsb: 0  msb: 2 INPUT
		NetFlow* PLLLKDETEN_A0_B; // net ID: PLLLKDETEN lsb: 0  msb: 0 INPUT
		NetFlow* PLLPOWERDOWN_A0_B; // net ID: PLLPOWERDOWN lsb: 0  msb: 0 INPUT
		NetFlow* PRBSCNTRESET0_A0_B; // net ID: PRBSCNTRESET0 lsb: 0  msb: 0 INPUT
		NetFlow* PRBSCNTRESET1_A0_B; // net ID: PRBSCNTRESET1 lsb: 0  msb: 0 INPUT
		NetFlow* REFCLKPWRDNB_A0_B; // net ID: REFCLKPWRDNB lsb: 0  msb: 0 INPUT
		NetFlow* RXBUFRESET0_A0_B; // net ID: RXBUFRESET0 lsb: 0  msb: 0 INPUT
		NetFlow* RXBUFRESET1_A0_B; // net ID: RXBUFRESET1 lsb: 0  msb: 0 INPUT
		NetFlow* RXCDRRESET0_A0_B; // net ID: RXCDRRESET0 lsb: 0  msb: 0 INPUT
		NetFlow* RXCDRRESET1_A0_B; // net ID: RXCDRRESET1 lsb: 0  msb: 0 INPUT
		NetFlow* RXCHBONDI0_A3_B; // net ID: RXCHBONDI0 lsb: 0  msb: 3 INPUT
		NetFlow* RXCHBONDI0_A2_B; // net ID: RXCHBONDI0 lsb: 0  msb: 3 INPUT
		NetFlow* RXCHBONDI0_A1_B; // net ID: RXCHBONDI0 lsb: 0  msb: 3 INPUT
		NetFlow* RXCHBONDI0_A0_B; // net ID: RXCHBONDI0 lsb: 0  msb: 3 INPUT
		NetFlow* RXCHBONDI1_A3_B; // net ID: RXCHBONDI1 lsb: 0  msb: 3 INPUT
		NetFlow* RXCHBONDI1_A2_B; // net ID: RXCHBONDI1 lsb: 0  msb: 3 INPUT
		NetFlow* RXCHBONDI1_A1_B; // net ID: RXCHBONDI1 lsb: 0  msb: 3 INPUT
		NetFlow* RXCHBONDI1_A0_B; // net ID: RXCHBONDI1 lsb: 0  msb: 3 INPUT
		NetFlow* RXCOMMADETUSE0_A0_B; // net ID: RXCOMMADETUSE0 lsb: 0  msb: 0 INPUT
		NetFlow* RXCOMMADETUSE1_A0_B; // net ID: RXCOMMADETUSE1 lsb: 0  msb: 0 INPUT
		NetFlow* RXDATAWIDTH0_A1_B; // net ID: RXDATAWIDTH0 lsb: 0  msb: 1 INPUT
		NetFlow* RXDATAWIDTH0_A0_B; // net ID: RXDATAWIDTH0 lsb: 0  msb: 1 INPUT
		NetFlow* RXDATAWIDTH1_A1_B; // net ID: RXDATAWIDTH1 lsb: 0  msb: 1 INPUT
		NetFlow* RXDATAWIDTH1_A0_B; // net ID: RXDATAWIDTH1 lsb: 0  msb: 1 INPUT
		NetFlow* RXDEC8B10BUSE0_A0_B; // net ID: RXDEC8B10BUSE0 lsb: 0  msb: 0 INPUT
		NetFlow* RXDEC8B10BUSE1_A0_B; // net ID: RXDEC8B10BUSE1 lsb: 0  msb: 0 INPUT
		NetFlow* RXENCHANSYNC0_A0_B; // net ID: RXENCHANSYNC0 lsb: 0  msb: 0 INPUT
		NetFlow* RXENCHANSYNC1_A0_B; // net ID: RXENCHANSYNC1 lsb: 0  msb: 0 INPUT
		NetFlow* RXENEQB0_A0_B; // net ID: RXENEQB0 lsb: 0  msb: 0 INPUT
		NetFlow* RXENEQB1_A0_B; // net ID: RXENEQB1 lsb: 0  msb: 0 INPUT
		NetFlow* RXENMCOMMAALIGN0_A0_B; // net ID: RXENMCOMMAALIGN0 lsb: 0  msb: 0 INPUT
		NetFlow* RXENMCOMMAALIGN1_A0_B; // net ID: RXENMCOMMAALIGN1 lsb: 0  msb: 0 INPUT
		NetFlow* RXENPCOMMAALIGN0_A0_B; // net ID: RXENPCOMMAALIGN0 lsb: 0  msb: 0 INPUT
		NetFlow* RXENPCOMMAALIGN1_A0_B; // net ID: RXENPCOMMAALIGN1 lsb: 0  msb: 0 INPUT
		NetFlow* RXENPMAPHASEALIGN0_A0_B; // net ID: RXENPMAPHASEALIGN0 lsb: 0  msb: 0 INPUT
		NetFlow* RXENPMAPHASEALIGN1_A0_B; // net ID: RXENPMAPHASEALIGN1 lsb: 0  msb: 0 INPUT
		NetFlow* RXENPRBSTST0_A1_B; // net ID: RXENPRBSTST0 lsb: 0  msb: 1 INPUT
		NetFlow* RXENPRBSTST0_A0_B; // net ID: RXENPRBSTST0 lsb: 0  msb: 1 INPUT
		NetFlow* RXENPRBSTST1_A1_B; // net ID: RXENPRBSTST1 lsb: 0  msb: 1 INPUT
		NetFlow* RXENPRBSTST1_A0_B; // net ID: RXENPRBSTST1 lsb: 0  msb: 1 INPUT
		NetFlow* RXENSAMPLEALIGN0_A0_B; // net ID: RXENSAMPLEALIGN0 lsb: 0  msb: 0 INPUT
		NetFlow* RXENSAMPLEALIGN1_A0_B; // net ID: RXENSAMPLEALIGN1 lsb: 0  msb: 0 INPUT
		NetFlow* RXEQMIX0_A1_B; // net ID: RXEQMIX0 lsb: 0  msb: 1 INPUT
		NetFlow* RXEQMIX0_A0_B; // net ID: RXEQMIX0 lsb: 0  msb: 1 INPUT
		NetFlow* RXEQMIX1_A1_B; // net ID: RXEQMIX1 lsb: 0  msb: 1 INPUT
		NetFlow* RXEQMIX1_A0_B; // net ID: RXEQMIX1 lsb: 0  msb: 1 INPUT
		NetFlow* RXEQPOLE0_A3_B; // net ID: RXEQPOLE0 lsb: 0  msb: 3 INPUT
		NetFlow* RXEQPOLE0_A2_B; // net ID: RXEQPOLE0 lsb: 0  msb: 3 INPUT
		NetFlow* RXEQPOLE0_A1_B; // net ID: RXEQPOLE0 lsb: 0  msb: 3 INPUT
		NetFlow* RXEQPOLE0_A0_B; // net ID: RXEQPOLE0 lsb: 0  msb: 3 INPUT
		NetFlow* RXEQPOLE1_A3_B; // net ID: RXEQPOLE1 lsb: 0  msb: 3 INPUT
		NetFlow* RXEQPOLE1_A2_B; // net ID: RXEQPOLE1 lsb: 0  msb: 3 INPUT
		NetFlow* RXEQPOLE1_A1_B; // net ID: RXEQPOLE1 lsb: 0  msb: 3 INPUT
		NetFlow* RXEQPOLE1_A0_B; // net ID: RXEQPOLE1 lsb: 0  msb: 3 INPUT
		NetFlow* RXGEARBOXSLIP0_A0_B; // net ID: RXGEARBOXSLIP0 lsb: 0  msb: 0 INPUT
		NetFlow* RXGEARBOXSLIP1_A0_B; // net ID: RXGEARBOXSLIP1 lsb: 0  msb: 0 INPUT
		NetFlow* RXN0_A0_B; // net ID: RXN0 lsb: 0  msb: 0 INPUT
		NetFlow* RXN1_A0_B; // net ID: RXN1 lsb: 0  msb: 0 INPUT
		NetFlow* RXP0_A0_B; // net ID: RXP0 lsb: 0  msb: 0 INPUT
		NetFlow* RXP1_A0_B; // net ID: RXP1 lsb: 0  msb: 0 INPUT
		NetFlow* RXPMASETPHASE0_A0_B; // net ID: RXPMASETPHASE0 lsb: 0  msb: 0 INPUT
		NetFlow* RXPMASETPHASE1_A0_B; // net ID: RXPMASETPHASE1 lsb: 0  msb: 0 INPUT
		NetFlow* RXPOLARITY0_A0_B; // net ID: RXPOLARITY0 lsb: 0  msb: 0 INPUT
		NetFlow* RXPOLARITY1_A0_B; // net ID: RXPOLARITY1 lsb: 0  msb: 0 INPUT
		NetFlow* RXPOWERDOWN0_A1_B; // net ID: RXPOWERDOWN0 lsb: 0  msb: 1 INPUT
		NetFlow* RXPOWERDOWN0_A0_B; // net ID: RXPOWERDOWN0 lsb: 0  msb: 1 INPUT
		NetFlow* RXPOWERDOWN1_A1_B; // net ID: RXPOWERDOWN1 lsb: 0  msb: 1 INPUT
		NetFlow* RXPOWERDOWN1_A0_B; // net ID: RXPOWERDOWN1 lsb: 0  msb: 1 INPUT
		NetFlow* RXRESET0_A0_B; // net ID: RXRESET0 lsb: 0  msb: 0 INPUT
		NetFlow* RXRESET1_A0_B; // net ID: RXRESET1 lsb: 0  msb: 0 INPUT
		NetFlow* RXSLIDE0_A0_B; // net ID: RXSLIDE0 lsb: 0  msb: 0 INPUT
		NetFlow* RXSLIDE1_A0_B; // net ID: RXSLIDE1 lsb: 0  msb: 0 INPUT
		NetFlow* RXUSRCLK0_A0_B; // net ID: RXUSRCLK0 lsb: 0  msb: 0 INPUT
		NetFlow* RXUSRCLK1_A0_B; // net ID: RXUSRCLK1 lsb: 0  msb: 0 INPUT
		NetFlow* RXUSRCLK20_A0_B; // net ID: RXUSRCLK20 lsb: 0  msb: 0 INPUT
		NetFlow* RXUSRCLK21_A0_B; // net ID: RXUSRCLK21 lsb: 0  msb: 0 INPUT
		NetFlow* TXBUFDIFFCTRL0_A2_B; // net ID: TXBUFDIFFCTRL0 lsb: 0  msb: 2 INPUT
		NetFlow* TXBUFDIFFCTRL0_A1_B; // net ID: TXBUFDIFFCTRL0 lsb: 0  msb: 2 INPUT
		NetFlow* TXBUFDIFFCTRL0_A0_B; // net ID: TXBUFDIFFCTRL0 lsb: 0  msb: 2 INPUT
		NetFlow* TXBUFDIFFCTRL1_A2_B; // net ID: TXBUFDIFFCTRL1 lsb: 0  msb: 2 INPUT
		NetFlow* TXBUFDIFFCTRL1_A1_B; // net ID: TXBUFDIFFCTRL1 lsb: 0  msb: 2 INPUT
		NetFlow* TXBUFDIFFCTRL1_A0_B; // net ID: TXBUFDIFFCTRL1 lsb: 0  msb: 2 INPUT
		NetFlow* TXBYPASS8B10B0_A3_B; // net ID: TXBYPASS8B10B0 lsb: 0  msb: 3 INPUT
		NetFlow* TXBYPASS8B10B0_A2_B; // net ID: TXBYPASS8B10B0 lsb: 0  msb: 3 INPUT
		NetFlow* TXBYPASS8B10B0_A1_B; // net ID: TXBYPASS8B10B0 lsb: 0  msb: 3 INPUT
		NetFlow* TXBYPASS8B10B0_A0_B; // net ID: TXBYPASS8B10B0 lsb: 0  msb: 3 INPUT
		NetFlow* TXBYPASS8B10B1_A3_B; // net ID: TXBYPASS8B10B1 lsb: 0  msb: 3 INPUT
		NetFlow* TXBYPASS8B10B1_A2_B; // net ID: TXBYPASS8B10B1 lsb: 0  msb: 3 INPUT
		NetFlow* TXBYPASS8B10B1_A1_B; // net ID: TXBYPASS8B10B1 lsb: 0  msb: 3 INPUT
		NetFlow* TXBYPASS8B10B1_A0_B; // net ID: TXBYPASS8B10B1 lsb: 0  msb: 3 INPUT
		NetFlow* TXCHARDISPMODE0_A3_B; // net ID: TXCHARDISPMODE0 lsb: 0  msb: 3 INPUT
		NetFlow* TXCHARDISPMODE0_A2_B; // net ID: TXCHARDISPMODE0 lsb: 0  msb: 3 INPUT
		NetFlow* TXCHARDISPMODE0_A1_B; // net ID: TXCHARDISPMODE0 lsb: 0  msb: 3 INPUT
		NetFlow* TXCHARDISPMODE0_A0_B; // net ID: TXCHARDISPMODE0 lsb: 0  msb: 3 INPUT
		NetFlow* TXCHARDISPMODE1_A3_B; // net ID: TXCHARDISPMODE1 lsb: 0  msb: 3 INPUT
		NetFlow* TXCHARDISPMODE1_A2_B; // net ID: TXCHARDISPMODE1 lsb: 0  msb: 3 INPUT
		NetFlow* TXCHARDISPMODE1_A1_B; // net ID: TXCHARDISPMODE1 lsb: 0  msb: 3 INPUT
		NetFlow* TXCHARDISPMODE1_A0_B; // net ID: TXCHARDISPMODE1 lsb: 0  msb: 3 INPUT
		NetFlow* TXCHARDISPVAL0_A3_B; // net ID: TXCHARDISPVAL0 lsb: 0  msb: 3 INPUT
		NetFlow* TXCHARDISPVAL0_A2_B; // net ID: TXCHARDISPVAL0 lsb: 0  msb: 3 INPUT
		NetFlow* TXCHARDISPVAL0_A1_B; // net ID: TXCHARDISPVAL0 lsb: 0  msb: 3 INPUT
		NetFlow* TXCHARDISPVAL0_A0_B; // net ID: TXCHARDISPVAL0 lsb: 0  msb: 3 INPUT
		NetFlow* TXCHARDISPVAL1_A3_B; // net ID: TXCHARDISPVAL1 lsb: 0  msb: 3 INPUT
		NetFlow* TXCHARDISPVAL1_A2_B; // net ID: TXCHARDISPVAL1 lsb: 0  msb: 3 INPUT
		NetFlow* TXCHARDISPVAL1_A1_B; // net ID: TXCHARDISPVAL1 lsb: 0  msb: 3 INPUT
		NetFlow* TXCHARDISPVAL1_A0_B; // net ID: TXCHARDISPVAL1 lsb: 0  msb: 3 INPUT
		NetFlow* TXCHARISK0_A3_B; // net ID: TXCHARISK0 lsb: 0  msb: 3 INPUT
		NetFlow* TXCHARISK0_A2_B; // net ID: TXCHARISK0 lsb: 0  msb: 3 INPUT
		NetFlow* TXCHARISK0_A1_B; // net ID: TXCHARISK0 lsb: 0  msb: 3 INPUT
		NetFlow* TXCHARISK0_A0_B; // net ID: TXCHARISK0 lsb: 0  msb: 3 INPUT
		NetFlow* TXCHARISK1_A3_B; // net ID: TXCHARISK1 lsb: 0  msb: 3 INPUT
		NetFlow* TXCHARISK1_A2_B; // net ID: TXCHARISK1 lsb: 0  msb: 3 INPUT
		NetFlow* TXCHARISK1_A1_B; // net ID: TXCHARISK1 lsb: 0  msb: 3 INPUT
		NetFlow* TXCHARISK1_A0_B; // net ID: TXCHARISK1 lsb: 0  msb: 3 INPUT
		NetFlow* TXCOMSTART0_A0_B; // net ID: TXCOMSTART0 lsb: 0  msb: 0 INPUT
		NetFlow* TXCOMSTART1_A0_B; // net ID: TXCOMSTART1 lsb: 0  msb: 0 INPUT
		NetFlow* TXCOMTYPE0_A0_B; // net ID: TXCOMTYPE0 lsb: 0  msb: 0 INPUT
		NetFlow* TXCOMTYPE1_A0_B; // net ID: TXCOMTYPE1 lsb: 0  msb: 0 INPUT
		NetFlow* TXDATA0_A31_B; // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA0_A30_B; // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA0_A29_B; // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA0_A28_B; // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA0_A27_B; // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA0_A26_B; // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA0_A25_B; // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA0_A24_B; // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA0_A23_B; // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA0_A22_B; // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA0_A21_B; // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA0_A20_B; // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA0_A19_B; // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA0_A18_B; // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA0_A17_B; // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA0_A16_B; // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA0_A15_B; // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA0_A14_B; // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA0_A13_B; // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA0_A12_B; // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA0_A11_B; // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA0_A10_B; // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA0_A9_B; // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA0_A8_B; // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA0_A7_B; // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA0_A6_B; // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA0_A5_B; // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA0_A4_B; // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA0_A3_B; // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA0_A2_B; // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA0_A1_B; // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA0_A0_B; // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA1_A31_B; // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA1_A30_B; // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA1_A29_B; // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA1_A28_B; // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA1_A27_B; // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA1_A26_B; // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA1_A25_B; // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA1_A24_B; // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA1_A23_B; // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA1_A22_B; // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA1_A21_B; // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA1_A20_B; // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA1_A19_B; // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA1_A18_B; // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA1_A17_B; // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA1_A16_B; // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA1_A15_B; // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA1_A14_B; // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA1_A13_B; // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA1_A12_B; // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA1_A11_B; // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA1_A10_B; // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA1_A9_B; // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA1_A8_B; // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA1_A7_B; // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA1_A6_B; // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA1_A5_B; // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA1_A4_B; // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA1_A3_B; // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA1_A2_B; // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA1_A1_B; // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA1_A0_B; // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
		NetFlow* TXDATAWIDTH0_A1_B; // net ID: TXDATAWIDTH0 lsb: 0  msb: 1 INPUT
		NetFlow* TXDATAWIDTH0_A0_B; // net ID: TXDATAWIDTH0 lsb: 0  msb: 1 INPUT
		NetFlow* TXDATAWIDTH1_A1_B; // net ID: TXDATAWIDTH1 lsb: 0  msb: 1 INPUT
		NetFlow* TXDATAWIDTH1_A0_B; // net ID: TXDATAWIDTH1 lsb: 0  msb: 1 INPUT
		NetFlow* TXDETECTRX0_A0_B; // net ID: TXDETECTRX0 lsb: 0  msb: 0 INPUT
		NetFlow* TXDETECTRX1_A0_B; // net ID: TXDETECTRX1 lsb: 0  msb: 0 INPUT
		NetFlow* TXDIFFCTRL0_A2_B; // net ID: TXDIFFCTRL0 lsb: 0  msb: 2 INPUT
		NetFlow* TXDIFFCTRL0_A1_B; // net ID: TXDIFFCTRL0 lsb: 0  msb: 2 INPUT
		NetFlow* TXDIFFCTRL0_A0_B; // net ID: TXDIFFCTRL0 lsb: 0  msb: 2 INPUT
		NetFlow* TXDIFFCTRL1_A2_B; // net ID: TXDIFFCTRL1 lsb: 0  msb: 2 INPUT
		NetFlow* TXDIFFCTRL1_A1_B; // net ID: TXDIFFCTRL1 lsb: 0  msb: 2 INPUT
		NetFlow* TXDIFFCTRL1_A0_B; // net ID: TXDIFFCTRL1 lsb: 0  msb: 2 INPUT
		NetFlow* TXELECIDLE0_A0_B; // net ID: TXELECIDLE0 lsb: 0  msb: 0 INPUT
		NetFlow* TXELECIDLE1_A0_B; // net ID: TXELECIDLE1 lsb: 0  msb: 0 INPUT
		NetFlow* TXENC8B10BUSE0_A0_B; // net ID: TXENC8B10BUSE0 lsb: 0  msb: 0 INPUT
		NetFlow* TXENC8B10BUSE1_A0_B; // net ID: TXENC8B10BUSE1 lsb: 0  msb: 0 INPUT
		NetFlow* TXENPMAPHASEALIGN0_A0_B; // net ID: TXENPMAPHASEALIGN0 lsb: 0  msb: 0 INPUT
		NetFlow* TXENPMAPHASEALIGN1_A0_B; // net ID: TXENPMAPHASEALIGN1 lsb: 0  msb: 0 INPUT
		NetFlow* TXENPRBSTST0_A1_B; // net ID: TXENPRBSTST0 lsb: 0  msb: 1 INPUT
		NetFlow* TXENPRBSTST0_A0_B; // net ID: TXENPRBSTST0 lsb: 0  msb: 1 INPUT
		NetFlow* TXENPRBSTST1_A1_B; // net ID: TXENPRBSTST1 lsb: 0  msb: 1 INPUT
		NetFlow* TXENPRBSTST1_A0_B; // net ID: TXENPRBSTST1 lsb: 0  msb: 1 INPUT
		NetFlow* TXHEADER0_A2_B; // net ID: TXHEADER0 lsb: 0  msb: 2 INPUT
		NetFlow* TXHEADER0_A1_B; // net ID: TXHEADER0 lsb: 0  msb: 2 INPUT
		NetFlow* TXHEADER0_A0_B; // net ID: TXHEADER0 lsb: 0  msb: 2 INPUT
		NetFlow* TXHEADER1_A2_B; // net ID: TXHEADER1 lsb: 0  msb: 2 INPUT
		NetFlow* TXHEADER1_A1_B; // net ID: TXHEADER1 lsb: 0  msb: 2 INPUT
		NetFlow* TXHEADER1_A0_B; // net ID: TXHEADER1 lsb: 0  msb: 2 INPUT
		NetFlow* TXINHIBIT0_A0_B; // net ID: TXINHIBIT0 lsb: 0  msb: 0 INPUT
		NetFlow* TXINHIBIT1_A0_B; // net ID: TXINHIBIT1 lsb: 0  msb: 0 INPUT
		NetFlow* TXPMASETPHASE0_A0_B; // net ID: TXPMASETPHASE0 lsb: 0  msb: 0 INPUT
		NetFlow* TXPMASETPHASE1_A0_B; // net ID: TXPMASETPHASE1 lsb: 0  msb: 0 INPUT
		NetFlow* TXPOLARITY0_A0_B; // net ID: TXPOLARITY0 lsb: 0  msb: 0 INPUT
		NetFlow* TXPOLARITY1_A0_B; // net ID: TXPOLARITY1 lsb: 0  msb: 0 INPUT
		NetFlow* TXPOWERDOWN0_A1_B; // net ID: TXPOWERDOWN0 lsb: 0  msb: 1 INPUT
		NetFlow* TXPOWERDOWN0_A0_B; // net ID: TXPOWERDOWN0 lsb: 0  msb: 1 INPUT
		NetFlow* TXPOWERDOWN1_A1_B; // net ID: TXPOWERDOWN1 lsb: 0  msb: 1 INPUT
		NetFlow* TXPOWERDOWN1_A0_B; // net ID: TXPOWERDOWN1 lsb: 0  msb: 1 INPUT
		NetFlow* TXPREEMPHASIS0_A3_B; // net ID: TXPREEMPHASIS0 lsb: 0  msb: 3 INPUT
		NetFlow* TXPREEMPHASIS0_A2_B; // net ID: TXPREEMPHASIS0 lsb: 0  msb: 3 INPUT
		NetFlow* TXPREEMPHASIS0_A1_B; // net ID: TXPREEMPHASIS0 lsb: 0  msb: 3 INPUT
		NetFlow* TXPREEMPHASIS0_A0_B; // net ID: TXPREEMPHASIS0 lsb: 0  msb: 3 INPUT
		NetFlow* TXPREEMPHASIS1_A3_B; // net ID: TXPREEMPHASIS1 lsb: 0  msb: 3 INPUT
		NetFlow* TXPREEMPHASIS1_A2_B; // net ID: TXPREEMPHASIS1 lsb: 0  msb: 3 INPUT
		NetFlow* TXPREEMPHASIS1_A1_B; // net ID: TXPREEMPHASIS1 lsb: 0  msb: 3 INPUT
		NetFlow* TXPREEMPHASIS1_A0_B; // net ID: TXPREEMPHASIS1 lsb: 0  msb: 3 INPUT
		NetFlow* TXRESET0_A0_B; // net ID: TXRESET0 lsb: 0  msb: 0 INPUT
		NetFlow* TXRESET1_A0_B; // net ID: TXRESET1 lsb: 0  msb: 0 INPUT
		NetFlow* TXSEQUENCE0_A6_B; // net ID: TXSEQUENCE0 lsb: 0  msb: 6 INPUT
		NetFlow* TXSEQUENCE0_A5_B; // net ID: TXSEQUENCE0 lsb: 0  msb: 6 INPUT
		NetFlow* TXSEQUENCE0_A4_B; // net ID: TXSEQUENCE0 lsb: 0  msb: 6 INPUT
		NetFlow* TXSEQUENCE0_A3_B; // net ID: TXSEQUENCE0 lsb: 0  msb: 6 INPUT
		NetFlow* TXSEQUENCE0_A2_B; // net ID: TXSEQUENCE0 lsb: 0  msb: 6 INPUT
		NetFlow* TXSEQUENCE0_A1_B; // net ID: TXSEQUENCE0 lsb: 0  msb: 6 INPUT
		NetFlow* TXSEQUENCE0_A0_B; // net ID: TXSEQUENCE0 lsb: 0  msb: 6 INPUT
		NetFlow* TXSEQUENCE1_A6_B; // net ID: TXSEQUENCE1 lsb: 0  msb: 6 INPUT
		NetFlow* TXSEQUENCE1_A5_B; // net ID: TXSEQUENCE1 lsb: 0  msb: 6 INPUT
		NetFlow* TXSEQUENCE1_A4_B; // net ID: TXSEQUENCE1 lsb: 0  msb: 6 INPUT
		NetFlow* TXSEQUENCE1_A3_B; // net ID: TXSEQUENCE1 lsb: 0  msb: 6 INPUT
		NetFlow* TXSEQUENCE1_A2_B; // net ID: TXSEQUENCE1 lsb: 0  msb: 6 INPUT
		NetFlow* TXSEQUENCE1_A1_B; // net ID: TXSEQUENCE1 lsb: 0  msb: 6 INPUT
		NetFlow* TXSEQUENCE1_A0_B; // net ID: TXSEQUENCE1 lsb: 0  msb: 6 INPUT
		NetFlow* TXSTARTSEQ0_A0_B; // net ID: TXSTARTSEQ0 lsb: 0  msb: 0 INPUT
		NetFlow* TXSTARTSEQ1_A0_B; // net ID: TXSTARTSEQ1 lsb: 0  msb: 0 INPUT
		NetFlow* TXUSRCLK0_A0_B; // net ID: TXUSRCLK0 lsb: 0  msb: 0 INPUT
		NetFlow* TXUSRCLK1_A0_B; // net ID: TXUSRCLK1 lsb: 0  msb: 0 INPUT
		NetFlow* TXUSRCLK20_A0_B; // net ID: TXUSRCLK20 lsb: 0  msb: 0 INPUT
		NetFlow* TXUSRCLK21_A0_B; // net ID: TXUSRCLK21 lsb: 0  msb: 0 INPUT
		
		public: X_GTX_DUAL(
			const char * name,
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_enum_t AC_CAP_DIS_0, // Default: "TRUE"
			parameter_enum_t AC_CAP_DIS_1, // Default: "TRUE"
			parameter_enum_t CHAN_BOND_KEEP_ALIGN_0, // Default: "FALSE"
			parameter_enum_t CHAN_BOND_KEEP_ALIGN_1, // Default: "FALSE"
			parameter_string_t CHAN_BOND_MODE_0, // Default: "OFF"
			parameter_string_t CHAN_BOND_MODE_1, // Default: "OFF"
			parameter_enum_t CHAN_BOND_SEQ_2_USE_0, // Default: "FALSE"
			parameter_enum_t CHAN_BOND_SEQ_2_USE_1, // Default: "FALSE"
			parameter_enum_t CLKINDC_B, // Default: "TRUE"
			parameter_enum_t CLKRCV_TRST, // Default: "TRUE"
			parameter_enum_t CLK_CORRECT_USE_0, // Default: "TRUE"
			parameter_enum_t CLK_CORRECT_USE_1, // Default: "TRUE"
			parameter_enum_t CLK_COR_INSERT_IDLE_FLAG_0, // Default: "FALSE"
			parameter_enum_t CLK_COR_INSERT_IDLE_FLAG_1, // Default: "FALSE"
			parameter_enum_t CLK_COR_KEEP_IDLE_0, // Default: "FALSE"
			parameter_enum_t CLK_COR_KEEP_IDLE_1, // Default: "FALSE"
			parameter_enum_t CLK_COR_PRECEDENCE_0, // Default: "TRUE"
			parameter_enum_t CLK_COR_PRECEDENCE_1, // Default: "TRUE"
			parameter_enum_t CLK_COR_SEQ_2_USE_0, // Default: "FALSE"
			parameter_enum_t CLK_COR_SEQ_2_USE_1, // Default: "FALSE"
			parameter_enum_t COMMA_DOUBLE_0, // Default: "FALSE"
			parameter_enum_t COMMA_DOUBLE_1, // Default: "FALSE"
			parameter_enum_t DEC_MCOMMA_DETECT_0, // Default: "TRUE"
			parameter_enum_t DEC_MCOMMA_DETECT_1, // Default: "TRUE"
			parameter_enum_t DEC_PCOMMA_DETECT_0, // Default: "TRUE"
			parameter_enum_t DEC_PCOMMA_DETECT_1, // Default: "TRUE"
			parameter_enum_t DEC_VALID_COMMA_ONLY_0, // Default: "TRUE"
			parameter_enum_t DEC_VALID_COMMA_ONLY_1, // Default: "TRUE"
			parameter_enum_t MCOMMA_DETECT_0, // Default: "TRUE"
			parameter_enum_t MCOMMA_DETECT_1, // Default: "TRUE"
			parameter_enum_t OVERSAMPLE_MODE, // Default: "FALSE"
			parameter_enum_t PCI_EXPRESS_MODE_0, // Default: "FALSE"
			parameter_enum_t PCI_EXPRESS_MODE_1, // Default: "FALSE"
			parameter_enum_t PCOMMA_DETECT_0, // Default: "TRUE"
			parameter_enum_t PCOMMA_DETECT_1, // Default: "TRUE"
			parameter_enum_t PLL_FB_DCCEN, // Default: "FALSE"
			parameter_enum_t PLL_SATA_0, // Default: "FALSE"
			parameter_enum_t PLL_SATA_1, // Default: "FALSE"
			parameter_enum_t RCV_TERM_GND_0, // Default: "FALSE"
			parameter_enum_t RCV_TERM_GND_1, // Default: "FALSE"
			parameter_enum_t RCV_TERM_VTTRX_0, // Default: "FALSE"
			parameter_enum_t RCV_TERM_VTTRX_1, // Default: "FALSE"
			parameter_enum_t RXGEARBOX_USE_0, // Default: "FALSE"
			parameter_enum_t RXGEARBOX_USE_1, // Default: "FALSE"
			parameter_enum_t RX_BUFFER_USE_0, // Default: "TRUE"
			parameter_enum_t RX_BUFFER_USE_1, // Default: "TRUE"
			parameter_enum_t RX_DECODE_SEQ_MATCH_0, // Default: "TRUE"
			parameter_enum_t RX_DECODE_SEQ_MATCH_1, // Default: "TRUE"
			parameter_enum_t RX_EN_IDLE_HOLD_CDR, // Default: "FALSE"
			parameter_enum_t RX_EN_IDLE_HOLD_DFE_0, // Default: "TRUE"
			parameter_enum_t RX_EN_IDLE_HOLD_DFE_1, // Default: "TRUE"
			parameter_enum_t RX_EN_IDLE_RESET_BUF_0, // Default: "TRUE"
			parameter_enum_t RX_EN_IDLE_RESET_BUF_1, // Default: "TRUE"
			parameter_enum_t RX_EN_IDLE_RESET_FR, // Default: "TRUE"
			parameter_enum_t RX_EN_IDLE_RESET_PH, // Default: "TRUE"
			parameter_enum_t RX_LOSS_OF_SYNC_FSM_0, // Default: "FALSE"
			parameter_enum_t RX_LOSS_OF_SYNC_FSM_1, // Default: "FALSE"
			parameter_string_t RX_SLIDE_MODE_0, // Default: "PCS"
			parameter_string_t RX_SLIDE_MODE_1, // Default: "PCS"
			parameter_string_t RX_STATUS_FMT_0, // Default: "PCIE"
			parameter_string_t RX_STATUS_FMT_1, // Default: "PCIE"
			parameter_string_t RX_XCLK_SEL_0, // Default: "RXREC"
			parameter_string_t RX_XCLK_SEL_1, // Default: "RXREC"
			parameter_string_t SIM_MODE, // Default: "FAST"
			parameter_int_t SIM_PLL_PERDIV2, // Default: 9'h140
			parameter_enum_t SIM_RECEIVER_DETECT_PASS_0, // Default: "TRUE"
			parameter_enum_t SIM_RECEIVER_DETECT_PASS_1, // Default: "TRUE"
			parameter_enum_t TERMINATION_OVRD, // Default: "FALSE"
			parameter_enum_t TXGEARBOX_USE_0, // Default: "FALSE"
			parameter_enum_t TXGEARBOX_USE_1, // Default: "FALSE"
			parameter_enum_t TX_BUFFER_USE_0, // Default: "TRUE"
			parameter_enum_t TX_BUFFER_USE_1, // Default: "TRUE"
			parameter_string_t TX_XCLK_SEL_0, // Default: "TXOUT"
			parameter_string_t TX_XCLK_SEL_1, // Default: "TXOUT"
			parameter_int_t TRANS_TIME_FROM_P2_0, // Default: 12'h03c
			parameter_int_t TRANS_TIME_FROM_P2_1, // Default: 12'h03c
			parameter_int_t TX_DETECT_RX_CFG_0, // Default: 14'h1832
			parameter_int_t TX_DETECT_RX_CFG_1, // Default: 14'h1832
			parameter_int_t PMA_TX_CFG_0, // Default: 20'h80082
			parameter_int_t PMA_TX_CFG_1, // Default: 20'h80082
			parameter_int_t CM_TRIM_0, // Default: 2'b10
			parameter_int_t CM_TRIM_1, // Default: 2'b10
			parameter_int_t PLL_COM_CFG, // Default: 24'h21680a
			parameter_int_t PMA_RX_CFG_0, // Default: 25'h0f44089
			parameter_int_t PMA_RX_CFG_1, // Default: 25'h0f44089
			parameter_int_t PMA_CDR_SCAN_0, // Default: 27'h6404035
			parameter_int_t PMA_CDR_SCAN_1, // Default: 27'h6404035
			parameter_int_t GEARBOX_ENDEC_0, // Default: 3'b000
			parameter_int_t GEARBOX_ENDEC_1, // Default: 3'b000
			parameter_int_t OOBDETECT_THRESHOLD_0, // Default: 3'b110
			parameter_int_t OOBDETECT_THRESHOLD_1, // Default: 3'b110
			parameter_int_t PLL_LKDET_CFG, // Default: 3'b101
			parameter_int_t PLL_TDCC_CFG, // Default: 3'b000
			parameter_int_t SATA_BURST_VAL_0, // Default: 3'b100
			parameter_int_t SATA_BURST_VAL_1, // Default: 3'b100
			parameter_int_t SATA_IDLE_VAL_0, // Default: 3'b100
			parameter_int_t SATA_IDLE_VAL_1, // Default: 3'b100
			parameter_int_t TXRX_INVERT_0, // Default: 3'b011
			parameter_int_t TXRX_INVERT_1, // Default: 3'b011
			parameter_int_t TX_IDLE_DELAY_0, // Default: 3'b010
			parameter_int_t TX_IDLE_DELAY_1, // Default: 3'b010
			parameter_int_t PRBS_ERR_THRESHOLD_0, // Default: 32'h00000001
			parameter_int_t PRBS_ERR_THRESHOLD_1, // Default: 32'h00000001
			parameter_int_t CHAN_BOND_SEQ_1_ENABLE_0, // Default: 4'b0001
			parameter_int_t CHAN_BOND_SEQ_1_ENABLE_1, // Default: 4'b0001
			parameter_int_t CHAN_BOND_SEQ_2_ENABLE_0, // Default: 4'b0000
			parameter_int_t CHAN_BOND_SEQ_2_ENABLE_1, // Default: 4'b0000
			parameter_int_t CLK_COR_SEQ_1_ENABLE_0, // Default: 4'b0001
			parameter_int_t CLK_COR_SEQ_1_ENABLE_1, // Default: 4'b0001
			parameter_int_t CLK_COR_SEQ_2_ENABLE_0, // Default: 4'b0000
			parameter_int_t CLK_COR_SEQ_2_ENABLE_1, // Default: 4'b0000
			parameter_int_t COM_BURST_VAL_0, // Default: 4'b1111
			parameter_int_t COM_BURST_VAL_1, // Default: 4'b1111
			parameter_int_t RX_IDLE_HI_CNT_0, // Default: 4'b1000
			parameter_int_t RX_IDLE_HI_CNT_1, // Default: 4'b1000
			parameter_int_t RX_IDLE_LO_CNT_0, // Default: 4'b0000
			parameter_int_t RX_IDLE_LO_CNT_1, // Default: 4'b0000
			parameter_int_t CDR_PH_ADJ_TIME, // Default: 5'b01010
			parameter_int_t DFE_CAL_TIME, // Default: 5'b00110
			parameter_int_t TERMINATION_CTRL, // Default: 5'b10100
			parameter_int_t PMA_COM_CFG, // Default: 69'h0
			parameter_int_t PMA_RXSYNC_CFG_0, // Default: 7'h0
			parameter_int_t PMA_RXSYNC_CFG_1, // Default: 7'h0
			parameter_int_t PLL_CP_CFG, // Default: 8'h00
			parameter_int_t TRANS_TIME_NON_P2_0, // Default: 8'h19
			parameter_int_t TRANS_TIME_NON_P2_1, // Default: 8'h19
			parameter_int_t CHAN_BOND_SEQ_1_1_0, // Default: 10'b0101111100
			parameter_int_t CHAN_BOND_SEQ_1_1_1, // Default: 10'b0101111100
			parameter_int_t CHAN_BOND_SEQ_1_2_0, // Default: 10'b0000000000
			parameter_int_t CHAN_BOND_SEQ_1_2_1, // Default: 10'b0000000000
			parameter_int_t CHAN_BOND_SEQ_1_3_0, // Default: 10'b0000000000
			parameter_int_t CHAN_BOND_SEQ_1_3_1, // Default: 10'b0000000000
			parameter_int_t CHAN_BOND_SEQ_1_4_0, // Default: 10'b0000000000
			parameter_int_t CHAN_BOND_SEQ_1_4_1, // Default: 10'b0000000000
			parameter_int_t CHAN_BOND_SEQ_2_1_0, // Default: 10'b0000000000
			parameter_int_t CHAN_BOND_SEQ_2_1_1, // Default: 10'b0000000000
			parameter_int_t CHAN_BOND_SEQ_2_2_0, // Default: 10'b0000000000
			parameter_int_t CHAN_BOND_SEQ_2_2_1, // Default: 10'b0000000000
			parameter_int_t CHAN_BOND_SEQ_2_3_0, // Default: 10'b0000000000
			parameter_int_t CHAN_BOND_SEQ_2_3_1, // Default: 10'b0000000000
			parameter_int_t CHAN_BOND_SEQ_2_4_0, // Default: 10'b0000000000
			parameter_int_t CHAN_BOND_SEQ_2_4_1, // Default: 10'b0000000000
			parameter_int_t CLK_COR_SEQ_1_1_0, // Default: 10'b0100011100
			parameter_int_t CLK_COR_SEQ_1_1_1, // Default: 10'b0100011100
			parameter_int_t CLK_COR_SEQ_1_2_0, // Default: 10'b0000000000
			parameter_int_t CLK_COR_SEQ_1_2_1, // Default: 10'b0000000000
			parameter_int_t CLK_COR_SEQ_1_3_0, // Default: 10'b0000000000
			parameter_int_t CLK_COR_SEQ_1_3_1, // Default: 10'b0000000000
			parameter_int_t CLK_COR_SEQ_1_4_0, // Default: 10'b0000000000
			parameter_int_t CLK_COR_SEQ_1_4_1, // Default: 10'b0000000000
			parameter_int_t CLK_COR_SEQ_2_1_0, // Default: 10'b0000000000
			parameter_int_t CLK_COR_SEQ_2_1_1, // Default: 10'b0000000000
			parameter_int_t CLK_COR_SEQ_2_2_0, // Default: 10'b0000000000
			parameter_int_t CLK_COR_SEQ_2_2_1, // Default: 10'b0000000000
			parameter_int_t CLK_COR_SEQ_2_3_0, // Default: 10'b0000000000
			parameter_int_t CLK_COR_SEQ_2_3_1, // Default: 10'b0000000000
			parameter_int_t CLK_COR_SEQ_2_4_0, // Default: 10'b0000000000
			parameter_int_t CLK_COR_SEQ_2_4_1, // Default: 10'b0000000000
			parameter_int_t COMMA_10B_ENABLE_0, // Default: 10'b0001111111
			parameter_int_t COMMA_10B_ENABLE_1, // Default: 10'b0001111111
			parameter_int_t DFE_CFG_0, // Default: 10'b1101111011
			parameter_int_t DFE_CFG_1, // Default: 10'b1101111011
			parameter_int_t MCOMMA_10B_VALUE_0, // Default: 10'b1010000011
			parameter_int_t MCOMMA_10B_VALUE_1, // Default: 10'b1010000011
			parameter_int_t PCOMMA_10B_VALUE_0, // Default: 10'b0101111100
			parameter_int_t PCOMMA_10B_VALUE_1, // Default: 10'b0101111100
			parameter_int_t TRANS_TIME_TO_P2_0, // Default: 10'h064
			parameter_int_t TRANS_TIME_TO_P2_1, // Default: 10'h064
			parameter_int_t ALIGN_COMMA_WORD_0, // Default: 1
			parameter_int_t ALIGN_COMMA_WORD_1, // Default: 1
			parameter_int_t CB2_INH_CC_PERIOD_0, // Default: 8
			parameter_int_t CB2_INH_CC_PERIOD_1, // Default: 8
			parameter_int_t CHAN_BOND_1_MAX_SKEW_0, // Default: 7
			parameter_int_t CHAN_BOND_1_MAX_SKEW_1, // Default: 7
			parameter_int_t CHAN_BOND_2_MAX_SKEW_0, // Default: 7
			parameter_int_t CHAN_BOND_2_MAX_SKEW_1, // Default: 7
			parameter_int_t CHAN_BOND_LEVEL_0, // Default: 0
			parameter_int_t CHAN_BOND_LEVEL_1, // Default: 0
			parameter_int_t CHAN_BOND_SEQ_LEN_0, // Default: 1
			parameter_int_t CHAN_BOND_SEQ_LEN_1, // Default: 1
			parameter_int_t CLK25_DIVIDER, // Default: 10
			parameter_int_t CLK_COR_ADJ_LEN_0, // Default: 1
			parameter_int_t CLK_COR_ADJ_LEN_1, // Default: 1
			parameter_int_t CLK_COR_DET_LEN_0, // Default: 1
			parameter_int_t CLK_COR_DET_LEN_1, // Default: 1
			parameter_int_t CLK_COR_MAX_LAT_0, // Default: 20
			parameter_int_t CLK_COR_MAX_LAT_1, // Default: 20
			parameter_int_t CLK_COR_MIN_LAT_0, // Default: 18
			parameter_int_t CLK_COR_MIN_LAT_1, // Default: 18
			parameter_int_t CLK_COR_REPEAT_WAIT_0, // Default: 0
			parameter_int_t CLK_COR_REPEAT_WAIT_1, // Default: 0
			parameter_int_t OOB_CLK_DIVIDER, // Default: 6
			parameter_int_t PLL_DIVSEL_FB, // Default: 2
			parameter_int_t PLL_DIVSEL_REF, // Default: 1
			parameter_int_t PLL_RXDIVSEL_OUT_0, // Default: 1
			parameter_int_t PLL_RXDIVSEL_OUT_1, // Default: 1
			parameter_int_t PLL_TXDIVSEL_OUT_0, // Default: 1
			parameter_int_t PLL_TXDIVSEL_OUT_1, // Default: 1
			parameter_int_t RX_LOS_INVALID_INCR_0, // Default: 1
			parameter_int_t RX_LOS_INVALID_INCR_1, // Default: 1
			parameter_int_t RX_LOS_THRESHOLD_0, // Default: 4
			parameter_int_t RX_LOS_THRESHOLD_1, // Default: 4
			parameter_int_t SATA_MAX_BURST_0, // Default: 7
			parameter_int_t SATA_MAX_BURST_1, // Default: 7
			parameter_int_t SATA_MAX_INIT_0, // Default: 22
			parameter_int_t SATA_MAX_INIT_1, // Default: 22
			parameter_int_t SATA_MAX_WAKE_0, // Default: 7
			parameter_int_t SATA_MAX_WAKE_1, // Default: 7
			parameter_int_t SATA_MIN_BURST_0, // Default: 4
			parameter_int_t SATA_MIN_BURST_1, // Default: 4
			parameter_int_t SATA_MIN_INIT_0, // Default: 12
			parameter_int_t SATA_MIN_INIT_1, // Default: 12
			parameter_int_t SATA_MIN_WAKE_0, // Default: 4
			parameter_int_t SATA_MIN_WAKE_1, // Default: 4
			parameter_int_t SIM_GTXRESET_SPEEDUP, // Default: 1
			parameter_int_t TERMINATION_IMP_0, // Default: 50
			parameter_int_t TERMINATION_IMP_1, // Default: 50
			//Verilog Ports in definition order:
			NetFlow* DFECLKDLYADJMONITOR0_A5_B, // net ID: DFECLKDLYADJMONITOR0 lsb: 0  msb: 5 OUTPUT
			NetFlow* DFECLKDLYADJMONITOR0_A4_B, // net ID: DFECLKDLYADJMONITOR0 lsb: 0  msb: 5 OUTPUT
			NetFlow* DFECLKDLYADJMONITOR0_A3_B, // net ID: DFECLKDLYADJMONITOR0 lsb: 0  msb: 5 OUTPUT
			NetFlow* DFECLKDLYADJMONITOR0_A2_B, // net ID: DFECLKDLYADJMONITOR0 lsb: 0  msb: 5 OUTPUT
			NetFlow* DFECLKDLYADJMONITOR0_A1_B, // net ID: DFECLKDLYADJMONITOR0 lsb: 0  msb: 5 OUTPUT
			NetFlow* DFECLKDLYADJMONITOR0_A0_B, // net ID: DFECLKDLYADJMONITOR0 lsb: 0  msb: 5 OUTPUT
			NetFlow* DFECLKDLYADJMONITOR1_A5_B, // net ID: DFECLKDLYADJMONITOR1 lsb: 0  msb: 5 OUTPUT
			NetFlow* DFECLKDLYADJMONITOR1_A4_B, // net ID: DFECLKDLYADJMONITOR1 lsb: 0  msb: 5 OUTPUT
			NetFlow* DFECLKDLYADJMONITOR1_A3_B, // net ID: DFECLKDLYADJMONITOR1 lsb: 0  msb: 5 OUTPUT
			NetFlow* DFECLKDLYADJMONITOR1_A2_B, // net ID: DFECLKDLYADJMONITOR1 lsb: 0  msb: 5 OUTPUT
			NetFlow* DFECLKDLYADJMONITOR1_A1_B, // net ID: DFECLKDLYADJMONITOR1 lsb: 0  msb: 5 OUTPUT
			NetFlow* DFECLKDLYADJMONITOR1_A0_B, // net ID: DFECLKDLYADJMONITOR1 lsb: 0  msb: 5 OUTPUT
			NetFlow* DFEEYEDACMONITOR0_A4_B, // net ID: DFEEYEDACMONITOR0 lsb: 0  msb: 4 OUTPUT
			NetFlow* DFEEYEDACMONITOR0_A3_B, // net ID: DFEEYEDACMONITOR0 lsb: 0  msb: 4 OUTPUT
			NetFlow* DFEEYEDACMONITOR0_A2_B, // net ID: DFEEYEDACMONITOR0 lsb: 0  msb: 4 OUTPUT
			NetFlow* DFEEYEDACMONITOR0_A1_B, // net ID: DFEEYEDACMONITOR0 lsb: 0  msb: 4 OUTPUT
			NetFlow* DFEEYEDACMONITOR0_A0_B, // net ID: DFEEYEDACMONITOR0 lsb: 0  msb: 4 OUTPUT
			NetFlow* DFEEYEDACMONITOR1_A4_B, // net ID: DFEEYEDACMONITOR1 lsb: 0  msb: 4 OUTPUT
			NetFlow* DFEEYEDACMONITOR1_A3_B, // net ID: DFEEYEDACMONITOR1 lsb: 0  msb: 4 OUTPUT
			NetFlow* DFEEYEDACMONITOR1_A2_B, // net ID: DFEEYEDACMONITOR1 lsb: 0  msb: 4 OUTPUT
			NetFlow* DFEEYEDACMONITOR1_A1_B, // net ID: DFEEYEDACMONITOR1 lsb: 0  msb: 4 OUTPUT
			NetFlow* DFEEYEDACMONITOR1_A0_B, // net ID: DFEEYEDACMONITOR1 lsb: 0  msb: 4 OUTPUT
			NetFlow* DFESENSCAL0_A2_B, // net ID: DFESENSCAL0 lsb: 0  msb: 2 OUTPUT
			NetFlow* DFESENSCAL0_A1_B, // net ID: DFESENSCAL0 lsb: 0  msb: 2 OUTPUT
			NetFlow* DFESENSCAL0_A0_B, // net ID: DFESENSCAL0 lsb: 0  msb: 2 OUTPUT
			NetFlow* DFESENSCAL1_A2_B, // net ID: DFESENSCAL1 lsb: 0  msb: 2 OUTPUT
			NetFlow* DFESENSCAL1_A1_B, // net ID: DFESENSCAL1 lsb: 0  msb: 2 OUTPUT
			NetFlow* DFESENSCAL1_A0_B, // net ID: DFESENSCAL1 lsb: 0  msb: 2 OUTPUT
			NetFlow* DFETAP1MONITOR0_A4_B, // net ID: DFETAP1MONITOR0 lsb: 0  msb: 4 OUTPUT
			NetFlow* DFETAP1MONITOR0_A3_B, // net ID: DFETAP1MONITOR0 lsb: 0  msb: 4 OUTPUT
			NetFlow* DFETAP1MONITOR0_A2_B, // net ID: DFETAP1MONITOR0 lsb: 0  msb: 4 OUTPUT
			NetFlow* DFETAP1MONITOR0_A1_B, // net ID: DFETAP1MONITOR0 lsb: 0  msb: 4 OUTPUT
			NetFlow* DFETAP1MONITOR0_A0_B, // net ID: DFETAP1MONITOR0 lsb: 0  msb: 4 OUTPUT
			NetFlow* DFETAP1MONITOR1_A4_B, // net ID: DFETAP1MONITOR1 lsb: 0  msb: 4 OUTPUT
			NetFlow* DFETAP1MONITOR1_A3_B, // net ID: DFETAP1MONITOR1 lsb: 0  msb: 4 OUTPUT
			NetFlow* DFETAP1MONITOR1_A2_B, // net ID: DFETAP1MONITOR1 lsb: 0  msb: 4 OUTPUT
			NetFlow* DFETAP1MONITOR1_A1_B, // net ID: DFETAP1MONITOR1 lsb: 0  msb: 4 OUTPUT
			NetFlow* DFETAP1MONITOR1_A0_B, // net ID: DFETAP1MONITOR1 lsb: 0  msb: 4 OUTPUT
			NetFlow* DFETAP2MONITOR0_A4_B, // net ID: DFETAP2MONITOR0 lsb: 0  msb: 4 OUTPUT
			NetFlow* DFETAP2MONITOR0_A3_B, // net ID: DFETAP2MONITOR0 lsb: 0  msb: 4 OUTPUT
			NetFlow* DFETAP2MONITOR0_A2_B, // net ID: DFETAP2MONITOR0 lsb: 0  msb: 4 OUTPUT
			NetFlow* DFETAP2MONITOR0_A1_B, // net ID: DFETAP2MONITOR0 lsb: 0  msb: 4 OUTPUT
			NetFlow* DFETAP2MONITOR0_A0_B, // net ID: DFETAP2MONITOR0 lsb: 0  msb: 4 OUTPUT
			NetFlow* DFETAP2MONITOR1_A4_B, // net ID: DFETAP2MONITOR1 lsb: 0  msb: 4 OUTPUT
			NetFlow* DFETAP2MONITOR1_A3_B, // net ID: DFETAP2MONITOR1 lsb: 0  msb: 4 OUTPUT
			NetFlow* DFETAP2MONITOR1_A2_B, // net ID: DFETAP2MONITOR1 lsb: 0  msb: 4 OUTPUT
			NetFlow* DFETAP2MONITOR1_A1_B, // net ID: DFETAP2MONITOR1 lsb: 0  msb: 4 OUTPUT
			NetFlow* DFETAP2MONITOR1_A0_B, // net ID: DFETAP2MONITOR1 lsb: 0  msb: 4 OUTPUT
			NetFlow* DFETAP3MONITOR0_A3_B, // net ID: DFETAP3MONITOR0 lsb: 0  msb: 3 OUTPUT
			NetFlow* DFETAP3MONITOR0_A2_B, // net ID: DFETAP3MONITOR0 lsb: 0  msb: 3 OUTPUT
			NetFlow* DFETAP3MONITOR0_A1_B, // net ID: DFETAP3MONITOR0 lsb: 0  msb: 3 OUTPUT
			NetFlow* DFETAP3MONITOR0_A0_B, // net ID: DFETAP3MONITOR0 lsb: 0  msb: 3 OUTPUT
			NetFlow* DFETAP3MONITOR1_A3_B, // net ID: DFETAP3MONITOR1 lsb: 0  msb: 3 OUTPUT
			NetFlow* DFETAP3MONITOR1_A2_B, // net ID: DFETAP3MONITOR1 lsb: 0  msb: 3 OUTPUT
			NetFlow* DFETAP3MONITOR1_A1_B, // net ID: DFETAP3MONITOR1 lsb: 0  msb: 3 OUTPUT
			NetFlow* DFETAP3MONITOR1_A0_B, // net ID: DFETAP3MONITOR1 lsb: 0  msb: 3 OUTPUT
			NetFlow* DFETAP4MONITOR0_A3_B, // net ID: DFETAP4MONITOR0 lsb: 0  msb: 3 OUTPUT
			NetFlow* DFETAP4MONITOR0_A2_B, // net ID: DFETAP4MONITOR0 lsb: 0  msb: 3 OUTPUT
			NetFlow* DFETAP4MONITOR0_A1_B, // net ID: DFETAP4MONITOR0 lsb: 0  msb: 3 OUTPUT
			NetFlow* DFETAP4MONITOR0_A0_B, // net ID: DFETAP4MONITOR0 lsb: 0  msb: 3 OUTPUT
			NetFlow* DFETAP4MONITOR1_A3_B, // net ID: DFETAP4MONITOR1 lsb: 0  msb: 3 OUTPUT
			NetFlow* DFETAP4MONITOR1_A2_B, // net ID: DFETAP4MONITOR1 lsb: 0  msb: 3 OUTPUT
			NetFlow* DFETAP4MONITOR1_A1_B, // net ID: DFETAP4MONITOR1 lsb: 0  msb: 3 OUTPUT
			NetFlow* DFETAP4MONITOR1_A0_B, // net ID: DFETAP4MONITOR1 lsb: 0  msb: 3 OUTPUT
			NetFlow* DO_A15_B, // net ID: DO lsb: 0  msb: 15 OUTPUT
			NetFlow* DO_A14_B, // net ID: DO lsb: 0  msb: 15 OUTPUT
			NetFlow* DO_A13_B, // net ID: DO lsb: 0  msb: 15 OUTPUT
			NetFlow* DO_A12_B, // net ID: DO lsb: 0  msb: 15 OUTPUT
			NetFlow* DO_A11_B, // net ID: DO lsb: 0  msb: 15 OUTPUT
			NetFlow* DO_A10_B, // net ID: DO lsb: 0  msb: 15 OUTPUT
			NetFlow* DO_A9_B, // net ID: DO lsb: 0  msb: 15 OUTPUT
			NetFlow* DO_A8_B, // net ID: DO lsb: 0  msb: 15 OUTPUT
			NetFlow* DO_A7_B, // net ID: DO lsb: 0  msb: 15 OUTPUT
			NetFlow* DO_A6_B, // net ID: DO lsb: 0  msb: 15 OUTPUT
			NetFlow* DO_A5_B, // net ID: DO lsb: 0  msb: 15 OUTPUT
			NetFlow* DO_A4_B, // net ID: DO lsb: 0  msb: 15 OUTPUT
			NetFlow* DO_A3_B, // net ID: DO lsb: 0  msb: 15 OUTPUT
			NetFlow* DO_A2_B, // net ID: DO lsb: 0  msb: 15 OUTPUT
			NetFlow* DO_A1_B, // net ID: DO lsb: 0  msb: 15 OUTPUT
			NetFlow* DO_A0_B, // net ID: DO lsb: 0  msb: 15 OUTPUT
			NetFlow* DRDY_A0_B, // net ID: DRDY lsb: 0  msb: 0 OUTPUT
			NetFlow* PHYSTATUS0_A0_B, // net ID: PHYSTATUS0 lsb: 0  msb: 0 OUTPUT
			NetFlow* PHYSTATUS1_A0_B, // net ID: PHYSTATUS1 lsb: 0  msb: 0 OUTPUT
			NetFlow* PLLLKDET_A0_B, // net ID: PLLLKDET lsb: 0  msb: 0 OUTPUT
			NetFlow* REFCLKOUT_A0_B, // net ID: REFCLKOUT lsb: 0  msb: 0 OUTPUT
			NetFlow* RESETDONE0_A0_B, // net ID: RESETDONE0 lsb: 0  msb: 0 OUTPUT
			NetFlow* RESETDONE1_A0_B, // net ID: RESETDONE1 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXBUFSTATUS0_A2_B, // net ID: RXBUFSTATUS0 lsb: 0  msb: 2 OUTPUT
			NetFlow* RXBUFSTATUS0_A1_B, // net ID: RXBUFSTATUS0 lsb: 0  msb: 2 OUTPUT
			NetFlow* RXBUFSTATUS0_A0_B, // net ID: RXBUFSTATUS0 lsb: 0  msb: 2 OUTPUT
			NetFlow* RXBUFSTATUS1_A2_B, // net ID: RXBUFSTATUS1 lsb: 0  msb: 2 OUTPUT
			NetFlow* RXBUFSTATUS1_A1_B, // net ID: RXBUFSTATUS1 lsb: 0  msb: 2 OUTPUT
			NetFlow* RXBUFSTATUS1_A0_B, // net ID: RXBUFSTATUS1 lsb: 0  msb: 2 OUTPUT
			NetFlow* RXBYTEISALIGNED0_A0_B, // net ID: RXBYTEISALIGNED0 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXBYTEISALIGNED1_A0_B, // net ID: RXBYTEISALIGNED1 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXBYTEREALIGN0_A0_B, // net ID: RXBYTEREALIGN0 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXBYTEREALIGN1_A0_B, // net ID: RXBYTEREALIGN1 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXCHANBONDSEQ0_A0_B, // net ID: RXCHANBONDSEQ0 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXCHANBONDSEQ1_A0_B, // net ID: RXCHANBONDSEQ1 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXCHANISALIGNED0_A0_B, // net ID: RXCHANISALIGNED0 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXCHANISALIGNED1_A0_B, // net ID: RXCHANISALIGNED1 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXCHANREALIGN0_A0_B, // net ID: RXCHANREALIGN0 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXCHANREALIGN1_A0_B, // net ID: RXCHANREALIGN1 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXCHARISCOMMA0_A3_B, // net ID: RXCHARISCOMMA0 lsb: 0  msb: 3 OUTPUT
			NetFlow* RXCHARISCOMMA0_A2_B, // net ID: RXCHARISCOMMA0 lsb: 0  msb: 3 OUTPUT
			NetFlow* RXCHARISCOMMA0_A1_B, // net ID: RXCHARISCOMMA0 lsb: 0  msb: 3 OUTPUT
			NetFlow* RXCHARISCOMMA0_A0_B, // net ID: RXCHARISCOMMA0 lsb: 0  msb: 3 OUTPUT
			NetFlow* RXCHARISCOMMA1_A3_B, // net ID: RXCHARISCOMMA1 lsb: 0  msb: 3 OUTPUT
			NetFlow* RXCHARISCOMMA1_A2_B, // net ID: RXCHARISCOMMA1 lsb: 0  msb: 3 OUTPUT
			NetFlow* RXCHARISCOMMA1_A1_B, // net ID: RXCHARISCOMMA1 lsb: 0  msb: 3 OUTPUT
			NetFlow* RXCHARISCOMMA1_A0_B, // net ID: RXCHARISCOMMA1 lsb: 0  msb: 3 OUTPUT
			NetFlow* RXCHARISK0_A3_B, // net ID: RXCHARISK0 lsb: 0  msb: 3 OUTPUT
			NetFlow* RXCHARISK0_A2_B, // net ID: RXCHARISK0 lsb: 0  msb: 3 OUTPUT
			NetFlow* RXCHARISK0_A1_B, // net ID: RXCHARISK0 lsb: 0  msb: 3 OUTPUT
			NetFlow* RXCHARISK0_A0_B, // net ID: RXCHARISK0 lsb: 0  msb: 3 OUTPUT
			NetFlow* RXCHARISK1_A3_B, // net ID: RXCHARISK1 lsb: 0  msb: 3 OUTPUT
			NetFlow* RXCHARISK1_A2_B, // net ID: RXCHARISK1 lsb: 0  msb: 3 OUTPUT
			NetFlow* RXCHARISK1_A1_B, // net ID: RXCHARISK1 lsb: 0  msb: 3 OUTPUT
			NetFlow* RXCHARISK1_A0_B, // net ID: RXCHARISK1 lsb: 0  msb: 3 OUTPUT
			NetFlow* RXCHBONDO0_A3_B, // net ID: RXCHBONDO0 lsb: 0  msb: 3 OUTPUT
			NetFlow* RXCHBONDO0_A2_B, // net ID: RXCHBONDO0 lsb: 0  msb: 3 OUTPUT
			NetFlow* RXCHBONDO0_A1_B, // net ID: RXCHBONDO0 lsb: 0  msb: 3 OUTPUT
			NetFlow* RXCHBONDO0_A0_B, // net ID: RXCHBONDO0 lsb: 0  msb: 3 OUTPUT
			NetFlow* RXCHBONDO1_A3_B, // net ID: RXCHBONDO1 lsb: 0  msb: 3 OUTPUT
			NetFlow* RXCHBONDO1_A2_B, // net ID: RXCHBONDO1 lsb: 0  msb: 3 OUTPUT
			NetFlow* RXCHBONDO1_A1_B, // net ID: RXCHBONDO1 lsb: 0  msb: 3 OUTPUT
			NetFlow* RXCHBONDO1_A0_B, // net ID: RXCHBONDO1 lsb: 0  msb: 3 OUTPUT
			NetFlow* RXCLKCORCNT0_A2_B, // net ID: RXCLKCORCNT0 lsb: 0  msb: 2 OUTPUT
			NetFlow* RXCLKCORCNT0_A1_B, // net ID: RXCLKCORCNT0 lsb: 0  msb: 2 OUTPUT
			NetFlow* RXCLKCORCNT0_A0_B, // net ID: RXCLKCORCNT0 lsb: 0  msb: 2 OUTPUT
			NetFlow* RXCLKCORCNT1_A2_B, // net ID: RXCLKCORCNT1 lsb: 0  msb: 2 OUTPUT
			NetFlow* RXCLKCORCNT1_A1_B, // net ID: RXCLKCORCNT1 lsb: 0  msb: 2 OUTPUT
			NetFlow* RXCLKCORCNT1_A0_B, // net ID: RXCLKCORCNT1 lsb: 0  msb: 2 OUTPUT
			NetFlow* RXCOMMADET0_A0_B, // net ID: RXCOMMADET0 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXCOMMADET1_A0_B, // net ID: RXCOMMADET1 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXDATA0_A31_B, // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA0_A30_B, // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA0_A29_B, // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA0_A28_B, // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA0_A27_B, // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA0_A26_B, // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA0_A25_B, // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA0_A24_B, // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA0_A23_B, // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA0_A22_B, // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA0_A21_B, // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA0_A20_B, // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA0_A19_B, // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA0_A18_B, // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA0_A17_B, // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA0_A16_B, // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA0_A15_B, // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA0_A14_B, // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA0_A13_B, // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA0_A12_B, // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA0_A11_B, // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA0_A10_B, // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA0_A9_B, // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA0_A8_B, // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA0_A7_B, // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA0_A6_B, // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA0_A5_B, // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA0_A4_B, // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA0_A3_B, // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA0_A2_B, // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA0_A1_B, // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA0_A0_B, // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA1_A31_B, // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA1_A30_B, // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA1_A29_B, // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA1_A28_B, // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA1_A27_B, // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA1_A26_B, // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA1_A25_B, // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA1_A24_B, // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA1_A23_B, // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA1_A22_B, // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA1_A21_B, // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA1_A20_B, // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA1_A19_B, // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA1_A18_B, // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA1_A17_B, // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA1_A16_B, // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA1_A15_B, // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA1_A14_B, // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA1_A13_B, // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA1_A12_B, // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA1_A11_B, // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA1_A10_B, // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA1_A9_B, // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA1_A8_B, // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA1_A7_B, // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA1_A6_B, // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA1_A5_B, // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA1_A4_B, // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA1_A3_B, // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA1_A2_B, // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA1_A1_B, // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA1_A0_B, // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATAVALID0_A0_B, // net ID: RXDATAVALID0 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXDATAVALID1_A0_B, // net ID: RXDATAVALID1 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXDISPERR0_A3_B, // net ID: RXDISPERR0 lsb: 0  msb: 3 OUTPUT
			NetFlow* RXDISPERR0_A2_B, // net ID: RXDISPERR0 lsb: 0  msb: 3 OUTPUT
			NetFlow* RXDISPERR0_A1_B, // net ID: RXDISPERR0 lsb: 0  msb: 3 OUTPUT
			NetFlow* RXDISPERR0_A0_B, // net ID: RXDISPERR0 lsb: 0  msb: 3 OUTPUT
			NetFlow* RXDISPERR1_A3_B, // net ID: RXDISPERR1 lsb: 0  msb: 3 OUTPUT
			NetFlow* RXDISPERR1_A2_B, // net ID: RXDISPERR1 lsb: 0  msb: 3 OUTPUT
			NetFlow* RXDISPERR1_A1_B, // net ID: RXDISPERR1 lsb: 0  msb: 3 OUTPUT
			NetFlow* RXDISPERR1_A0_B, // net ID: RXDISPERR1 lsb: 0  msb: 3 OUTPUT
			NetFlow* RXELECIDLE0_A0_B, // net ID: RXELECIDLE0 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXELECIDLE1_A0_B, // net ID: RXELECIDLE1 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXHEADER0_A2_B, // net ID: RXHEADER0 lsb: 0  msb: 2 OUTPUT
			NetFlow* RXHEADER0_A1_B, // net ID: RXHEADER0 lsb: 0  msb: 2 OUTPUT
			NetFlow* RXHEADER0_A0_B, // net ID: RXHEADER0 lsb: 0  msb: 2 OUTPUT
			NetFlow* RXHEADER1_A2_B, // net ID: RXHEADER1 lsb: 0  msb: 2 OUTPUT
			NetFlow* RXHEADER1_A1_B, // net ID: RXHEADER1 lsb: 0  msb: 2 OUTPUT
			NetFlow* RXHEADER1_A0_B, // net ID: RXHEADER1 lsb: 0  msb: 2 OUTPUT
			NetFlow* RXHEADERVALID0_A0_B, // net ID: RXHEADERVALID0 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXHEADERVALID1_A0_B, // net ID: RXHEADERVALID1 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXLOSSOFSYNC0_A1_B, // net ID: RXLOSSOFSYNC0 lsb: 0  msb: 1 OUTPUT
			NetFlow* RXLOSSOFSYNC0_A0_B, // net ID: RXLOSSOFSYNC0 lsb: 0  msb: 1 OUTPUT
			NetFlow* RXLOSSOFSYNC1_A1_B, // net ID: RXLOSSOFSYNC1 lsb: 0  msb: 1 OUTPUT
			NetFlow* RXLOSSOFSYNC1_A0_B, // net ID: RXLOSSOFSYNC1 lsb: 0  msb: 1 OUTPUT
			NetFlow* RXNOTINTABLE0_A3_B, // net ID: RXNOTINTABLE0 lsb: 0  msb: 3 OUTPUT
			NetFlow* RXNOTINTABLE0_A2_B, // net ID: RXNOTINTABLE0 lsb: 0  msb: 3 OUTPUT
			NetFlow* RXNOTINTABLE0_A1_B, // net ID: RXNOTINTABLE0 lsb: 0  msb: 3 OUTPUT
			NetFlow* RXNOTINTABLE0_A0_B, // net ID: RXNOTINTABLE0 lsb: 0  msb: 3 OUTPUT
			NetFlow* RXNOTINTABLE1_A3_B, // net ID: RXNOTINTABLE1 lsb: 0  msb: 3 OUTPUT
			NetFlow* RXNOTINTABLE1_A2_B, // net ID: RXNOTINTABLE1 lsb: 0  msb: 3 OUTPUT
			NetFlow* RXNOTINTABLE1_A1_B, // net ID: RXNOTINTABLE1 lsb: 0  msb: 3 OUTPUT
			NetFlow* RXNOTINTABLE1_A0_B, // net ID: RXNOTINTABLE1 lsb: 0  msb: 3 OUTPUT
			NetFlow* RXOVERSAMPLEERR0_A0_B, // net ID: RXOVERSAMPLEERR0 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXOVERSAMPLEERR1_A0_B, // net ID: RXOVERSAMPLEERR1 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXPRBSERR0_A0_B, // net ID: RXPRBSERR0 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXPRBSERR1_A0_B, // net ID: RXPRBSERR1 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXRECCLK0_A0_B, // net ID: RXRECCLK0 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXRECCLK1_A0_B, // net ID: RXRECCLK1 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXRUNDISP0_A3_B, // net ID: RXRUNDISP0 lsb: 0  msb: 3 OUTPUT
			NetFlow* RXRUNDISP0_A2_B, // net ID: RXRUNDISP0 lsb: 0  msb: 3 OUTPUT
			NetFlow* RXRUNDISP0_A1_B, // net ID: RXRUNDISP0 lsb: 0  msb: 3 OUTPUT
			NetFlow* RXRUNDISP0_A0_B, // net ID: RXRUNDISP0 lsb: 0  msb: 3 OUTPUT
			NetFlow* RXRUNDISP1_A3_B, // net ID: RXRUNDISP1 lsb: 0  msb: 3 OUTPUT
			NetFlow* RXRUNDISP1_A2_B, // net ID: RXRUNDISP1 lsb: 0  msb: 3 OUTPUT
			NetFlow* RXRUNDISP1_A1_B, // net ID: RXRUNDISP1 lsb: 0  msb: 3 OUTPUT
			NetFlow* RXRUNDISP1_A0_B, // net ID: RXRUNDISP1 lsb: 0  msb: 3 OUTPUT
			NetFlow* RXSTARTOFSEQ0_A0_B, // net ID: RXSTARTOFSEQ0 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXSTARTOFSEQ1_A0_B, // net ID: RXSTARTOFSEQ1 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXSTATUS0_A2_B, // net ID: RXSTATUS0 lsb: 0  msb: 2 OUTPUT
			NetFlow* RXSTATUS0_A1_B, // net ID: RXSTATUS0 lsb: 0  msb: 2 OUTPUT
			NetFlow* RXSTATUS0_A0_B, // net ID: RXSTATUS0 lsb: 0  msb: 2 OUTPUT
			NetFlow* RXSTATUS1_A2_B, // net ID: RXSTATUS1 lsb: 0  msb: 2 OUTPUT
			NetFlow* RXSTATUS1_A1_B, // net ID: RXSTATUS1 lsb: 0  msb: 2 OUTPUT
			NetFlow* RXSTATUS1_A0_B, // net ID: RXSTATUS1 lsb: 0  msb: 2 OUTPUT
			NetFlow* RXVALID0_A0_B, // net ID: RXVALID0 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXVALID1_A0_B, // net ID: RXVALID1 lsb: 0  msb: 0 OUTPUT
			NetFlow* TXBUFSTATUS0_A1_B, // net ID: TXBUFSTATUS0 lsb: 0  msb: 1 OUTPUT
			NetFlow* TXBUFSTATUS0_A0_B, // net ID: TXBUFSTATUS0 lsb: 0  msb: 1 OUTPUT
			NetFlow* TXBUFSTATUS1_A1_B, // net ID: TXBUFSTATUS1 lsb: 0  msb: 1 OUTPUT
			NetFlow* TXBUFSTATUS1_A0_B, // net ID: TXBUFSTATUS1 lsb: 0  msb: 1 OUTPUT
			NetFlow* TXGEARBOXREADY0_A0_B, // net ID: TXGEARBOXREADY0 lsb: 0  msb: 0 OUTPUT
			NetFlow* TXGEARBOXREADY1_A0_B, // net ID: TXGEARBOXREADY1 lsb: 0  msb: 0 OUTPUT
			NetFlow* TXKERR0_A3_B, // net ID: TXKERR0 lsb: 0  msb: 3 OUTPUT
			NetFlow* TXKERR0_A2_B, // net ID: TXKERR0 lsb: 0  msb: 3 OUTPUT
			NetFlow* TXKERR0_A1_B, // net ID: TXKERR0 lsb: 0  msb: 3 OUTPUT
			NetFlow* TXKERR0_A0_B, // net ID: TXKERR0 lsb: 0  msb: 3 OUTPUT
			NetFlow* TXKERR1_A3_B, // net ID: TXKERR1 lsb: 0  msb: 3 OUTPUT
			NetFlow* TXKERR1_A2_B, // net ID: TXKERR1 lsb: 0  msb: 3 OUTPUT
			NetFlow* TXKERR1_A1_B, // net ID: TXKERR1 lsb: 0  msb: 3 OUTPUT
			NetFlow* TXKERR1_A0_B, // net ID: TXKERR1 lsb: 0  msb: 3 OUTPUT
			NetFlow* TXN0_A0_B, // net ID: TXN0 lsb: 0  msb: 0 OUTPUT
			NetFlow* TXN1_A0_B, // net ID: TXN1 lsb: 0  msb: 0 OUTPUT
			NetFlow* TXOUTCLK0_A0_B, // net ID: TXOUTCLK0 lsb: 0  msb: 0 OUTPUT
			NetFlow* TXOUTCLK1_A0_B, // net ID: TXOUTCLK1 lsb: 0  msb: 0 OUTPUT
			NetFlow* TXP0_A0_B, // net ID: TXP0 lsb: 0  msb: 0 OUTPUT
			NetFlow* TXP1_A0_B, // net ID: TXP1 lsb: 0  msb: 0 OUTPUT
			NetFlow* TXRUNDISP0_A3_B, // net ID: TXRUNDISP0 lsb: 0  msb: 3 OUTPUT
			NetFlow* TXRUNDISP0_A2_B, // net ID: TXRUNDISP0 lsb: 0  msb: 3 OUTPUT
			NetFlow* TXRUNDISP0_A1_B, // net ID: TXRUNDISP0 lsb: 0  msb: 3 OUTPUT
			NetFlow* TXRUNDISP0_A0_B, // net ID: TXRUNDISP0 lsb: 0  msb: 3 OUTPUT
			NetFlow* TXRUNDISP1_A3_B, // net ID: TXRUNDISP1 lsb: 0  msb: 3 OUTPUT
			NetFlow* TXRUNDISP1_A2_B, // net ID: TXRUNDISP1 lsb: 0  msb: 3 OUTPUT
			NetFlow* TXRUNDISP1_A1_B, // net ID: TXRUNDISP1 lsb: 0  msb: 3 OUTPUT
			NetFlow* TXRUNDISP1_A0_B, // net ID: TXRUNDISP1 lsb: 0  msb: 3 OUTPUT
			NetFlow* CLKIN_A0_B, // net ID: CLKIN lsb: 0  msb: 0 INPUT
			NetFlow* DADDR_A6_B, // net ID: DADDR lsb: 0  msb: 6 INPUT
			NetFlow* DADDR_A5_B, // net ID: DADDR lsb: 0  msb: 6 INPUT
			NetFlow* DADDR_A4_B, // net ID: DADDR lsb: 0  msb: 6 INPUT
			NetFlow* DADDR_A3_B, // net ID: DADDR lsb: 0  msb: 6 INPUT
			NetFlow* DADDR_A2_B, // net ID: DADDR lsb: 0  msb: 6 INPUT
			NetFlow* DADDR_A1_B, // net ID: DADDR lsb: 0  msb: 6 INPUT
			NetFlow* DADDR_A0_B, // net ID: DADDR lsb: 0  msb: 6 INPUT
			NetFlow* DCLK_A0_B, // net ID: DCLK lsb: 0  msb: 0 INPUT
			NetFlow* DEN_A0_B, // net ID: DEN lsb: 0  msb: 0 INPUT
			NetFlow* DFECLKDLYADJ0_A5_B, // net ID: DFECLKDLYADJ0 lsb: 0  msb: 5 INPUT
			NetFlow* DFECLKDLYADJ0_A4_B, // net ID: DFECLKDLYADJ0 lsb: 0  msb: 5 INPUT
			NetFlow* DFECLKDLYADJ0_A3_B, // net ID: DFECLKDLYADJ0 lsb: 0  msb: 5 INPUT
			NetFlow* DFECLKDLYADJ0_A2_B, // net ID: DFECLKDLYADJ0 lsb: 0  msb: 5 INPUT
			NetFlow* DFECLKDLYADJ0_A1_B, // net ID: DFECLKDLYADJ0 lsb: 0  msb: 5 INPUT
			NetFlow* DFECLKDLYADJ0_A0_B, // net ID: DFECLKDLYADJ0 lsb: 0  msb: 5 INPUT
			NetFlow* DFECLKDLYADJ1_A5_B, // net ID: DFECLKDLYADJ1 lsb: 0  msb: 5 INPUT
			NetFlow* DFECLKDLYADJ1_A4_B, // net ID: DFECLKDLYADJ1 lsb: 0  msb: 5 INPUT
			NetFlow* DFECLKDLYADJ1_A3_B, // net ID: DFECLKDLYADJ1 lsb: 0  msb: 5 INPUT
			NetFlow* DFECLKDLYADJ1_A2_B, // net ID: DFECLKDLYADJ1 lsb: 0  msb: 5 INPUT
			NetFlow* DFECLKDLYADJ1_A1_B, // net ID: DFECLKDLYADJ1 lsb: 0  msb: 5 INPUT
			NetFlow* DFECLKDLYADJ1_A0_B, // net ID: DFECLKDLYADJ1 lsb: 0  msb: 5 INPUT
			NetFlow* DFETAP10_A4_B, // net ID: DFETAP10 lsb: 0  msb: 4 INPUT
			NetFlow* DFETAP10_A3_B, // net ID: DFETAP10 lsb: 0  msb: 4 INPUT
			NetFlow* DFETAP10_A2_B, // net ID: DFETAP10 lsb: 0  msb: 4 INPUT
			NetFlow* DFETAP10_A1_B, // net ID: DFETAP10 lsb: 0  msb: 4 INPUT
			NetFlow* DFETAP10_A0_B, // net ID: DFETAP10 lsb: 0  msb: 4 INPUT
			NetFlow* DFETAP11_A4_B, // net ID: DFETAP11 lsb: 0  msb: 4 INPUT
			NetFlow* DFETAP11_A3_B, // net ID: DFETAP11 lsb: 0  msb: 4 INPUT
			NetFlow* DFETAP11_A2_B, // net ID: DFETAP11 lsb: 0  msb: 4 INPUT
			NetFlow* DFETAP11_A1_B, // net ID: DFETAP11 lsb: 0  msb: 4 INPUT
			NetFlow* DFETAP11_A0_B, // net ID: DFETAP11 lsb: 0  msb: 4 INPUT
			NetFlow* DFETAP20_A4_B, // net ID: DFETAP20 lsb: 0  msb: 4 INPUT
			NetFlow* DFETAP20_A3_B, // net ID: DFETAP20 lsb: 0  msb: 4 INPUT
			NetFlow* DFETAP20_A2_B, // net ID: DFETAP20 lsb: 0  msb: 4 INPUT
			NetFlow* DFETAP20_A1_B, // net ID: DFETAP20 lsb: 0  msb: 4 INPUT
			NetFlow* DFETAP20_A0_B, // net ID: DFETAP20 lsb: 0  msb: 4 INPUT
			NetFlow* DFETAP21_A4_B, // net ID: DFETAP21 lsb: 0  msb: 4 INPUT
			NetFlow* DFETAP21_A3_B, // net ID: DFETAP21 lsb: 0  msb: 4 INPUT
			NetFlow* DFETAP21_A2_B, // net ID: DFETAP21 lsb: 0  msb: 4 INPUT
			NetFlow* DFETAP21_A1_B, // net ID: DFETAP21 lsb: 0  msb: 4 INPUT
			NetFlow* DFETAP21_A0_B, // net ID: DFETAP21 lsb: 0  msb: 4 INPUT
			NetFlow* DFETAP30_A3_B, // net ID: DFETAP30 lsb: 0  msb: 3 INPUT
			NetFlow* DFETAP30_A2_B, // net ID: DFETAP30 lsb: 0  msb: 3 INPUT
			NetFlow* DFETAP30_A1_B, // net ID: DFETAP30 lsb: 0  msb: 3 INPUT
			NetFlow* DFETAP30_A0_B, // net ID: DFETAP30 lsb: 0  msb: 3 INPUT
			NetFlow* DFETAP31_A3_B, // net ID: DFETAP31 lsb: 0  msb: 3 INPUT
			NetFlow* DFETAP31_A2_B, // net ID: DFETAP31 lsb: 0  msb: 3 INPUT
			NetFlow* DFETAP31_A1_B, // net ID: DFETAP31 lsb: 0  msb: 3 INPUT
			NetFlow* DFETAP31_A0_B, // net ID: DFETAP31 lsb: 0  msb: 3 INPUT
			NetFlow* DFETAP40_A3_B, // net ID: DFETAP40 lsb: 0  msb: 3 INPUT
			NetFlow* DFETAP40_A2_B, // net ID: DFETAP40 lsb: 0  msb: 3 INPUT
			NetFlow* DFETAP40_A1_B, // net ID: DFETAP40 lsb: 0  msb: 3 INPUT
			NetFlow* DFETAP40_A0_B, // net ID: DFETAP40 lsb: 0  msb: 3 INPUT
			NetFlow* DFETAP41_A3_B, // net ID: DFETAP41 lsb: 0  msb: 3 INPUT
			NetFlow* DFETAP41_A2_B, // net ID: DFETAP41 lsb: 0  msb: 3 INPUT
			NetFlow* DFETAP41_A1_B, // net ID: DFETAP41 lsb: 0  msb: 3 INPUT
			NetFlow* DFETAP41_A0_B, // net ID: DFETAP41 lsb: 0  msb: 3 INPUT
			NetFlow* DI_A15_B, // net ID: DI lsb: 0  msb: 15 INPUT
			NetFlow* DI_A14_B, // net ID: DI lsb: 0  msb: 15 INPUT
			NetFlow* DI_A13_B, // net ID: DI lsb: 0  msb: 15 INPUT
			NetFlow* DI_A12_B, // net ID: DI lsb: 0  msb: 15 INPUT
			NetFlow* DI_A11_B, // net ID: DI lsb: 0  msb: 15 INPUT
			NetFlow* DI_A10_B, // net ID: DI lsb: 0  msb: 15 INPUT
			NetFlow* DI_A9_B, // net ID: DI lsb: 0  msb: 15 INPUT
			NetFlow* DI_A8_B, // net ID: DI lsb: 0  msb: 15 INPUT
			NetFlow* DI_A7_B, // net ID: DI lsb: 0  msb: 15 INPUT
			NetFlow* DI_A6_B, // net ID: DI lsb: 0  msb: 15 INPUT
			NetFlow* DI_A5_B, // net ID: DI lsb: 0  msb: 15 INPUT
			NetFlow* DI_A4_B, // net ID: DI lsb: 0  msb: 15 INPUT
			NetFlow* DI_A3_B, // net ID: DI lsb: 0  msb: 15 INPUT
			NetFlow* DI_A2_B, // net ID: DI lsb: 0  msb: 15 INPUT
			NetFlow* DI_A1_B, // net ID: DI lsb: 0  msb: 15 INPUT
			NetFlow* DI_A0_B, // net ID: DI lsb: 0  msb: 15 INPUT
			NetFlow* DWE_A0_B, // net ID: DWE lsb: 0  msb: 0 INPUT
			NetFlow* GTXRESET_A0_B, // net ID: GTXRESET lsb: 0  msb: 0 INPUT
			NetFlow* GTXTEST_A13_B, // net ID: GTXTEST lsb: 0  msb: 13 INPUT
			NetFlow* GTXTEST_A12_B, // net ID: GTXTEST lsb: 0  msb: 13 INPUT
			NetFlow* GTXTEST_A11_B, // net ID: GTXTEST lsb: 0  msb: 13 INPUT
			NetFlow* GTXTEST_A10_B, // net ID: GTXTEST lsb: 0  msb: 13 INPUT
			NetFlow* GTXTEST_A9_B, // net ID: GTXTEST lsb: 0  msb: 13 INPUT
			NetFlow* GTXTEST_A8_B, // net ID: GTXTEST lsb: 0  msb: 13 INPUT
			NetFlow* GTXTEST_A7_B, // net ID: GTXTEST lsb: 0  msb: 13 INPUT
			NetFlow* GTXTEST_A6_B, // net ID: GTXTEST lsb: 0  msb: 13 INPUT
			NetFlow* GTXTEST_A5_B, // net ID: GTXTEST lsb: 0  msb: 13 INPUT
			NetFlow* GTXTEST_A4_B, // net ID: GTXTEST lsb: 0  msb: 13 INPUT
			NetFlow* GTXTEST_A3_B, // net ID: GTXTEST lsb: 0  msb: 13 INPUT
			NetFlow* GTXTEST_A2_B, // net ID: GTXTEST lsb: 0  msb: 13 INPUT
			NetFlow* GTXTEST_A1_B, // net ID: GTXTEST lsb: 0  msb: 13 INPUT
			NetFlow* GTXTEST_A0_B, // net ID: GTXTEST lsb: 0  msb: 13 INPUT
			NetFlow* INTDATAWIDTH_A0_B, // net ID: INTDATAWIDTH lsb: 0  msb: 0 INPUT
			NetFlow* LOOPBACK0_A2_B, // net ID: LOOPBACK0 lsb: 0  msb: 2 INPUT
			NetFlow* LOOPBACK0_A1_B, // net ID: LOOPBACK0 lsb: 0  msb: 2 INPUT
			NetFlow* LOOPBACK0_A0_B, // net ID: LOOPBACK0 lsb: 0  msb: 2 INPUT
			NetFlow* LOOPBACK1_A2_B, // net ID: LOOPBACK1 lsb: 0  msb: 2 INPUT
			NetFlow* LOOPBACK1_A1_B, // net ID: LOOPBACK1 lsb: 0  msb: 2 INPUT
			NetFlow* LOOPBACK1_A0_B, // net ID: LOOPBACK1 lsb: 0  msb: 2 INPUT
			NetFlow* PLLLKDETEN_A0_B, // net ID: PLLLKDETEN lsb: 0  msb: 0 INPUT
			NetFlow* PLLPOWERDOWN_A0_B, // net ID: PLLPOWERDOWN lsb: 0  msb: 0 INPUT
			NetFlow* PRBSCNTRESET0_A0_B, // net ID: PRBSCNTRESET0 lsb: 0  msb: 0 INPUT
			NetFlow* PRBSCNTRESET1_A0_B, // net ID: PRBSCNTRESET1 lsb: 0  msb: 0 INPUT
			NetFlow* REFCLKPWRDNB_A0_B, // net ID: REFCLKPWRDNB lsb: 0  msb: 0 INPUT
			NetFlow* RXBUFRESET0_A0_B, // net ID: RXBUFRESET0 lsb: 0  msb: 0 INPUT
			NetFlow* RXBUFRESET1_A0_B, // net ID: RXBUFRESET1 lsb: 0  msb: 0 INPUT
			NetFlow* RXCDRRESET0_A0_B, // net ID: RXCDRRESET0 lsb: 0  msb: 0 INPUT
			NetFlow* RXCDRRESET1_A0_B, // net ID: RXCDRRESET1 lsb: 0  msb: 0 INPUT
			NetFlow* RXCHBONDI0_A3_B, // net ID: RXCHBONDI0 lsb: 0  msb: 3 INPUT
			NetFlow* RXCHBONDI0_A2_B, // net ID: RXCHBONDI0 lsb: 0  msb: 3 INPUT
			NetFlow* RXCHBONDI0_A1_B, // net ID: RXCHBONDI0 lsb: 0  msb: 3 INPUT
			NetFlow* RXCHBONDI0_A0_B, // net ID: RXCHBONDI0 lsb: 0  msb: 3 INPUT
			NetFlow* RXCHBONDI1_A3_B, // net ID: RXCHBONDI1 lsb: 0  msb: 3 INPUT
			NetFlow* RXCHBONDI1_A2_B, // net ID: RXCHBONDI1 lsb: 0  msb: 3 INPUT
			NetFlow* RXCHBONDI1_A1_B, // net ID: RXCHBONDI1 lsb: 0  msb: 3 INPUT
			NetFlow* RXCHBONDI1_A0_B, // net ID: RXCHBONDI1 lsb: 0  msb: 3 INPUT
			NetFlow* RXCOMMADETUSE0_A0_B, // net ID: RXCOMMADETUSE0 lsb: 0  msb: 0 INPUT
			NetFlow* RXCOMMADETUSE1_A0_B, // net ID: RXCOMMADETUSE1 lsb: 0  msb: 0 INPUT
			NetFlow* RXDATAWIDTH0_A1_B, // net ID: RXDATAWIDTH0 lsb: 0  msb: 1 INPUT
			NetFlow* RXDATAWIDTH0_A0_B, // net ID: RXDATAWIDTH0 lsb: 0  msb: 1 INPUT
			NetFlow* RXDATAWIDTH1_A1_B, // net ID: RXDATAWIDTH1 lsb: 0  msb: 1 INPUT
			NetFlow* RXDATAWIDTH1_A0_B, // net ID: RXDATAWIDTH1 lsb: 0  msb: 1 INPUT
			NetFlow* RXDEC8B10BUSE0_A0_B, // net ID: RXDEC8B10BUSE0 lsb: 0  msb: 0 INPUT
			NetFlow* RXDEC8B10BUSE1_A0_B, // net ID: RXDEC8B10BUSE1 lsb: 0  msb: 0 INPUT
			NetFlow* RXENCHANSYNC0_A0_B, // net ID: RXENCHANSYNC0 lsb: 0  msb: 0 INPUT
			NetFlow* RXENCHANSYNC1_A0_B, // net ID: RXENCHANSYNC1 lsb: 0  msb: 0 INPUT
			NetFlow* RXENEQB0_A0_B, // net ID: RXENEQB0 lsb: 0  msb: 0 INPUT
			NetFlow* RXENEQB1_A0_B, // net ID: RXENEQB1 lsb: 0  msb: 0 INPUT
			NetFlow* RXENMCOMMAALIGN0_A0_B, // net ID: RXENMCOMMAALIGN0 lsb: 0  msb: 0 INPUT
			NetFlow* RXENMCOMMAALIGN1_A0_B, // net ID: RXENMCOMMAALIGN1 lsb: 0  msb: 0 INPUT
			NetFlow* RXENPCOMMAALIGN0_A0_B, // net ID: RXENPCOMMAALIGN0 lsb: 0  msb: 0 INPUT
			NetFlow* RXENPCOMMAALIGN1_A0_B, // net ID: RXENPCOMMAALIGN1 lsb: 0  msb: 0 INPUT
			NetFlow* RXENPMAPHASEALIGN0_A0_B, // net ID: RXENPMAPHASEALIGN0 lsb: 0  msb: 0 INPUT
			NetFlow* RXENPMAPHASEALIGN1_A0_B, // net ID: RXENPMAPHASEALIGN1 lsb: 0  msb: 0 INPUT
			NetFlow* RXENPRBSTST0_A1_B, // net ID: RXENPRBSTST0 lsb: 0  msb: 1 INPUT
			NetFlow* RXENPRBSTST0_A0_B, // net ID: RXENPRBSTST0 lsb: 0  msb: 1 INPUT
			NetFlow* RXENPRBSTST1_A1_B, // net ID: RXENPRBSTST1 lsb: 0  msb: 1 INPUT
			NetFlow* RXENPRBSTST1_A0_B, // net ID: RXENPRBSTST1 lsb: 0  msb: 1 INPUT
			NetFlow* RXENSAMPLEALIGN0_A0_B, // net ID: RXENSAMPLEALIGN0 lsb: 0  msb: 0 INPUT
			NetFlow* RXENSAMPLEALIGN1_A0_B, // net ID: RXENSAMPLEALIGN1 lsb: 0  msb: 0 INPUT
			NetFlow* RXEQMIX0_A1_B, // net ID: RXEQMIX0 lsb: 0  msb: 1 INPUT
			NetFlow* RXEQMIX0_A0_B, // net ID: RXEQMIX0 lsb: 0  msb: 1 INPUT
			NetFlow* RXEQMIX1_A1_B, // net ID: RXEQMIX1 lsb: 0  msb: 1 INPUT
			NetFlow* RXEQMIX1_A0_B, // net ID: RXEQMIX1 lsb: 0  msb: 1 INPUT
			NetFlow* RXEQPOLE0_A3_B, // net ID: RXEQPOLE0 lsb: 0  msb: 3 INPUT
			NetFlow* RXEQPOLE0_A2_B, // net ID: RXEQPOLE0 lsb: 0  msb: 3 INPUT
			NetFlow* RXEQPOLE0_A1_B, // net ID: RXEQPOLE0 lsb: 0  msb: 3 INPUT
			NetFlow* RXEQPOLE0_A0_B, // net ID: RXEQPOLE0 lsb: 0  msb: 3 INPUT
			NetFlow* RXEQPOLE1_A3_B, // net ID: RXEQPOLE1 lsb: 0  msb: 3 INPUT
			NetFlow* RXEQPOLE1_A2_B, // net ID: RXEQPOLE1 lsb: 0  msb: 3 INPUT
			NetFlow* RXEQPOLE1_A1_B, // net ID: RXEQPOLE1 lsb: 0  msb: 3 INPUT
			NetFlow* RXEQPOLE1_A0_B, // net ID: RXEQPOLE1 lsb: 0  msb: 3 INPUT
			NetFlow* RXGEARBOXSLIP0_A0_B, // net ID: RXGEARBOXSLIP0 lsb: 0  msb: 0 INPUT
			NetFlow* RXGEARBOXSLIP1_A0_B, // net ID: RXGEARBOXSLIP1 lsb: 0  msb: 0 INPUT
			NetFlow* RXN0_A0_B, // net ID: RXN0 lsb: 0  msb: 0 INPUT
			NetFlow* RXN1_A0_B, // net ID: RXN1 lsb: 0  msb: 0 INPUT
			NetFlow* RXP0_A0_B, // net ID: RXP0 lsb: 0  msb: 0 INPUT
			NetFlow* RXP1_A0_B, // net ID: RXP1 lsb: 0  msb: 0 INPUT
			NetFlow* RXPMASETPHASE0_A0_B, // net ID: RXPMASETPHASE0 lsb: 0  msb: 0 INPUT
			NetFlow* RXPMASETPHASE1_A0_B, // net ID: RXPMASETPHASE1 lsb: 0  msb: 0 INPUT
			NetFlow* RXPOLARITY0_A0_B, // net ID: RXPOLARITY0 lsb: 0  msb: 0 INPUT
			NetFlow* RXPOLARITY1_A0_B, // net ID: RXPOLARITY1 lsb: 0  msb: 0 INPUT
			NetFlow* RXPOWERDOWN0_A1_B, // net ID: RXPOWERDOWN0 lsb: 0  msb: 1 INPUT
			NetFlow* RXPOWERDOWN0_A0_B, // net ID: RXPOWERDOWN0 lsb: 0  msb: 1 INPUT
			NetFlow* RXPOWERDOWN1_A1_B, // net ID: RXPOWERDOWN1 lsb: 0  msb: 1 INPUT
			NetFlow* RXPOWERDOWN1_A0_B, // net ID: RXPOWERDOWN1 lsb: 0  msb: 1 INPUT
			NetFlow* RXRESET0_A0_B, // net ID: RXRESET0 lsb: 0  msb: 0 INPUT
			NetFlow* RXRESET1_A0_B, // net ID: RXRESET1 lsb: 0  msb: 0 INPUT
			NetFlow* RXSLIDE0_A0_B, // net ID: RXSLIDE0 lsb: 0  msb: 0 INPUT
			NetFlow* RXSLIDE1_A0_B, // net ID: RXSLIDE1 lsb: 0  msb: 0 INPUT
			NetFlow* RXUSRCLK0_A0_B, // net ID: RXUSRCLK0 lsb: 0  msb: 0 INPUT
			NetFlow* RXUSRCLK1_A0_B, // net ID: RXUSRCLK1 lsb: 0  msb: 0 INPUT
			NetFlow* RXUSRCLK20_A0_B, // net ID: RXUSRCLK20 lsb: 0  msb: 0 INPUT
			NetFlow* RXUSRCLK21_A0_B, // net ID: RXUSRCLK21 lsb: 0  msb: 0 INPUT
			NetFlow* TXBUFDIFFCTRL0_A2_B, // net ID: TXBUFDIFFCTRL0 lsb: 0  msb: 2 INPUT
			NetFlow* TXBUFDIFFCTRL0_A1_B, // net ID: TXBUFDIFFCTRL0 lsb: 0  msb: 2 INPUT
			NetFlow* TXBUFDIFFCTRL0_A0_B, // net ID: TXBUFDIFFCTRL0 lsb: 0  msb: 2 INPUT
			NetFlow* TXBUFDIFFCTRL1_A2_B, // net ID: TXBUFDIFFCTRL1 lsb: 0  msb: 2 INPUT
			NetFlow* TXBUFDIFFCTRL1_A1_B, // net ID: TXBUFDIFFCTRL1 lsb: 0  msb: 2 INPUT
			NetFlow* TXBUFDIFFCTRL1_A0_B, // net ID: TXBUFDIFFCTRL1 lsb: 0  msb: 2 INPUT
			NetFlow* TXBYPASS8B10B0_A3_B, // net ID: TXBYPASS8B10B0 lsb: 0  msb: 3 INPUT
			NetFlow* TXBYPASS8B10B0_A2_B, // net ID: TXBYPASS8B10B0 lsb: 0  msb: 3 INPUT
			NetFlow* TXBYPASS8B10B0_A1_B, // net ID: TXBYPASS8B10B0 lsb: 0  msb: 3 INPUT
			NetFlow* TXBYPASS8B10B0_A0_B, // net ID: TXBYPASS8B10B0 lsb: 0  msb: 3 INPUT
			NetFlow* TXBYPASS8B10B1_A3_B, // net ID: TXBYPASS8B10B1 lsb: 0  msb: 3 INPUT
			NetFlow* TXBYPASS8B10B1_A2_B, // net ID: TXBYPASS8B10B1 lsb: 0  msb: 3 INPUT
			NetFlow* TXBYPASS8B10B1_A1_B, // net ID: TXBYPASS8B10B1 lsb: 0  msb: 3 INPUT
			NetFlow* TXBYPASS8B10B1_A0_B, // net ID: TXBYPASS8B10B1 lsb: 0  msb: 3 INPUT
			NetFlow* TXCHARDISPMODE0_A3_B, // net ID: TXCHARDISPMODE0 lsb: 0  msb: 3 INPUT
			NetFlow* TXCHARDISPMODE0_A2_B, // net ID: TXCHARDISPMODE0 lsb: 0  msb: 3 INPUT
			NetFlow* TXCHARDISPMODE0_A1_B, // net ID: TXCHARDISPMODE0 lsb: 0  msb: 3 INPUT
			NetFlow* TXCHARDISPMODE0_A0_B, // net ID: TXCHARDISPMODE0 lsb: 0  msb: 3 INPUT
			NetFlow* TXCHARDISPMODE1_A3_B, // net ID: TXCHARDISPMODE1 lsb: 0  msb: 3 INPUT
			NetFlow* TXCHARDISPMODE1_A2_B, // net ID: TXCHARDISPMODE1 lsb: 0  msb: 3 INPUT
			NetFlow* TXCHARDISPMODE1_A1_B, // net ID: TXCHARDISPMODE1 lsb: 0  msb: 3 INPUT
			NetFlow* TXCHARDISPMODE1_A0_B, // net ID: TXCHARDISPMODE1 lsb: 0  msb: 3 INPUT
			NetFlow* TXCHARDISPVAL0_A3_B, // net ID: TXCHARDISPVAL0 lsb: 0  msb: 3 INPUT
			NetFlow* TXCHARDISPVAL0_A2_B, // net ID: TXCHARDISPVAL0 lsb: 0  msb: 3 INPUT
			NetFlow* TXCHARDISPVAL0_A1_B, // net ID: TXCHARDISPVAL0 lsb: 0  msb: 3 INPUT
			NetFlow* TXCHARDISPVAL0_A0_B, // net ID: TXCHARDISPVAL0 lsb: 0  msb: 3 INPUT
			NetFlow* TXCHARDISPVAL1_A3_B, // net ID: TXCHARDISPVAL1 lsb: 0  msb: 3 INPUT
			NetFlow* TXCHARDISPVAL1_A2_B, // net ID: TXCHARDISPVAL1 lsb: 0  msb: 3 INPUT
			NetFlow* TXCHARDISPVAL1_A1_B, // net ID: TXCHARDISPVAL1 lsb: 0  msb: 3 INPUT
			NetFlow* TXCHARDISPVAL1_A0_B, // net ID: TXCHARDISPVAL1 lsb: 0  msb: 3 INPUT
			NetFlow* TXCHARISK0_A3_B, // net ID: TXCHARISK0 lsb: 0  msb: 3 INPUT
			NetFlow* TXCHARISK0_A2_B, // net ID: TXCHARISK0 lsb: 0  msb: 3 INPUT
			NetFlow* TXCHARISK0_A1_B, // net ID: TXCHARISK0 lsb: 0  msb: 3 INPUT
			NetFlow* TXCHARISK0_A0_B, // net ID: TXCHARISK0 lsb: 0  msb: 3 INPUT
			NetFlow* TXCHARISK1_A3_B, // net ID: TXCHARISK1 lsb: 0  msb: 3 INPUT
			NetFlow* TXCHARISK1_A2_B, // net ID: TXCHARISK1 lsb: 0  msb: 3 INPUT
			NetFlow* TXCHARISK1_A1_B, // net ID: TXCHARISK1 lsb: 0  msb: 3 INPUT
			NetFlow* TXCHARISK1_A0_B, // net ID: TXCHARISK1 lsb: 0  msb: 3 INPUT
			NetFlow* TXCOMSTART0_A0_B, // net ID: TXCOMSTART0 lsb: 0  msb: 0 INPUT
			NetFlow* TXCOMSTART1_A0_B, // net ID: TXCOMSTART1 lsb: 0  msb: 0 INPUT
			NetFlow* TXCOMTYPE0_A0_B, // net ID: TXCOMTYPE0 lsb: 0  msb: 0 INPUT
			NetFlow* TXCOMTYPE1_A0_B, // net ID: TXCOMTYPE1 lsb: 0  msb: 0 INPUT
			NetFlow* TXDATA0_A31_B, // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA0_A30_B, // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA0_A29_B, // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA0_A28_B, // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA0_A27_B, // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA0_A26_B, // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA0_A25_B, // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA0_A24_B, // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA0_A23_B, // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA0_A22_B, // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA0_A21_B, // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA0_A20_B, // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA0_A19_B, // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA0_A18_B, // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA0_A17_B, // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA0_A16_B, // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA0_A15_B, // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA0_A14_B, // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA0_A13_B, // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA0_A12_B, // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA0_A11_B, // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA0_A10_B, // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA0_A9_B, // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA0_A8_B, // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA0_A7_B, // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA0_A6_B, // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA0_A5_B, // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA0_A4_B, // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA0_A3_B, // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA0_A2_B, // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA0_A1_B, // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA0_A0_B, // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA1_A31_B, // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA1_A30_B, // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA1_A29_B, // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA1_A28_B, // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA1_A27_B, // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA1_A26_B, // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA1_A25_B, // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA1_A24_B, // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA1_A23_B, // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA1_A22_B, // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA1_A21_B, // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA1_A20_B, // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA1_A19_B, // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA1_A18_B, // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA1_A17_B, // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA1_A16_B, // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA1_A15_B, // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA1_A14_B, // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA1_A13_B, // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA1_A12_B, // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA1_A11_B, // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA1_A10_B, // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA1_A9_B, // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA1_A8_B, // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA1_A7_B, // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA1_A6_B, // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA1_A5_B, // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA1_A4_B, // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA1_A3_B, // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA1_A2_B, // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA1_A1_B, // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA1_A0_B, // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
			NetFlow* TXDATAWIDTH0_A1_B, // net ID: TXDATAWIDTH0 lsb: 0  msb: 1 INPUT
			NetFlow* TXDATAWIDTH0_A0_B, // net ID: TXDATAWIDTH0 lsb: 0  msb: 1 INPUT
			NetFlow* TXDATAWIDTH1_A1_B, // net ID: TXDATAWIDTH1 lsb: 0  msb: 1 INPUT
			NetFlow* TXDATAWIDTH1_A0_B, // net ID: TXDATAWIDTH1 lsb: 0  msb: 1 INPUT
			NetFlow* TXDETECTRX0_A0_B, // net ID: TXDETECTRX0 lsb: 0  msb: 0 INPUT
			NetFlow* TXDETECTRX1_A0_B, // net ID: TXDETECTRX1 lsb: 0  msb: 0 INPUT
			NetFlow* TXDIFFCTRL0_A2_B, // net ID: TXDIFFCTRL0 lsb: 0  msb: 2 INPUT
			NetFlow* TXDIFFCTRL0_A1_B, // net ID: TXDIFFCTRL0 lsb: 0  msb: 2 INPUT
			NetFlow* TXDIFFCTRL0_A0_B, // net ID: TXDIFFCTRL0 lsb: 0  msb: 2 INPUT
			NetFlow* TXDIFFCTRL1_A2_B, // net ID: TXDIFFCTRL1 lsb: 0  msb: 2 INPUT
			NetFlow* TXDIFFCTRL1_A1_B, // net ID: TXDIFFCTRL1 lsb: 0  msb: 2 INPUT
			NetFlow* TXDIFFCTRL1_A0_B, // net ID: TXDIFFCTRL1 lsb: 0  msb: 2 INPUT
			NetFlow* TXELECIDLE0_A0_B, // net ID: TXELECIDLE0 lsb: 0  msb: 0 INPUT
			NetFlow* TXELECIDLE1_A0_B, // net ID: TXELECIDLE1 lsb: 0  msb: 0 INPUT
			NetFlow* TXENC8B10BUSE0_A0_B, // net ID: TXENC8B10BUSE0 lsb: 0  msb: 0 INPUT
			NetFlow* TXENC8B10BUSE1_A0_B, // net ID: TXENC8B10BUSE1 lsb: 0  msb: 0 INPUT
			NetFlow* TXENPMAPHASEALIGN0_A0_B, // net ID: TXENPMAPHASEALIGN0 lsb: 0  msb: 0 INPUT
			NetFlow* TXENPMAPHASEALIGN1_A0_B, // net ID: TXENPMAPHASEALIGN1 lsb: 0  msb: 0 INPUT
			NetFlow* TXENPRBSTST0_A1_B, // net ID: TXENPRBSTST0 lsb: 0  msb: 1 INPUT
			NetFlow* TXENPRBSTST0_A0_B, // net ID: TXENPRBSTST0 lsb: 0  msb: 1 INPUT
			NetFlow* TXENPRBSTST1_A1_B, // net ID: TXENPRBSTST1 lsb: 0  msb: 1 INPUT
			NetFlow* TXENPRBSTST1_A0_B, // net ID: TXENPRBSTST1 lsb: 0  msb: 1 INPUT
			NetFlow* TXHEADER0_A2_B, // net ID: TXHEADER0 lsb: 0  msb: 2 INPUT
			NetFlow* TXHEADER0_A1_B, // net ID: TXHEADER0 lsb: 0  msb: 2 INPUT
			NetFlow* TXHEADER0_A0_B, // net ID: TXHEADER0 lsb: 0  msb: 2 INPUT
			NetFlow* TXHEADER1_A2_B, // net ID: TXHEADER1 lsb: 0  msb: 2 INPUT
			NetFlow* TXHEADER1_A1_B, // net ID: TXHEADER1 lsb: 0  msb: 2 INPUT
			NetFlow* TXHEADER1_A0_B, // net ID: TXHEADER1 lsb: 0  msb: 2 INPUT
			NetFlow* TXINHIBIT0_A0_B, // net ID: TXINHIBIT0 lsb: 0  msb: 0 INPUT
			NetFlow* TXINHIBIT1_A0_B, // net ID: TXINHIBIT1 lsb: 0  msb: 0 INPUT
			NetFlow* TXPMASETPHASE0_A0_B, // net ID: TXPMASETPHASE0 lsb: 0  msb: 0 INPUT
			NetFlow* TXPMASETPHASE1_A0_B, // net ID: TXPMASETPHASE1 lsb: 0  msb: 0 INPUT
			NetFlow* TXPOLARITY0_A0_B, // net ID: TXPOLARITY0 lsb: 0  msb: 0 INPUT
			NetFlow* TXPOLARITY1_A0_B, // net ID: TXPOLARITY1 lsb: 0  msb: 0 INPUT
			NetFlow* TXPOWERDOWN0_A1_B, // net ID: TXPOWERDOWN0 lsb: 0  msb: 1 INPUT
			NetFlow* TXPOWERDOWN0_A0_B, // net ID: TXPOWERDOWN0 lsb: 0  msb: 1 INPUT
			NetFlow* TXPOWERDOWN1_A1_B, // net ID: TXPOWERDOWN1 lsb: 0  msb: 1 INPUT
			NetFlow* TXPOWERDOWN1_A0_B, // net ID: TXPOWERDOWN1 lsb: 0  msb: 1 INPUT
			NetFlow* TXPREEMPHASIS0_A3_B, // net ID: TXPREEMPHASIS0 lsb: 0  msb: 3 INPUT
			NetFlow* TXPREEMPHASIS0_A2_B, // net ID: TXPREEMPHASIS0 lsb: 0  msb: 3 INPUT
			NetFlow* TXPREEMPHASIS0_A1_B, // net ID: TXPREEMPHASIS0 lsb: 0  msb: 3 INPUT
			NetFlow* TXPREEMPHASIS0_A0_B, // net ID: TXPREEMPHASIS0 lsb: 0  msb: 3 INPUT
			NetFlow* TXPREEMPHASIS1_A3_B, // net ID: TXPREEMPHASIS1 lsb: 0  msb: 3 INPUT
			NetFlow* TXPREEMPHASIS1_A2_B, // net ID: TXPREEMPHASIS1 lsb: 0  msb: 3 INPUT
			NetFlow* TXPREEMPHASIS1_A1_B, // net ID: TXPREEMPHASIS1 lsb: 0  msb: 3 INPUT
			NetFlow* TXPREEMPHASIS1_A0_B, // net ID: TXPREEMPHASIS1 lsb: 0  msb: 3 INPUT
			NetFlow* TXRESET0_A0_B, // net ID: TXRESET0 lsb: 0  msb: 0 INPUT
			NetFlow* TXRESET1_A0_B, // net ID: TXRESET1 lsb: 0  msb: 0 INPUT
			NetFlow* TXSEQUENCE0_A6_B, // net ID: TXSEQUENCE0 lsb: 0  msb: 6 INPUT
			NetFlow* TXSEQUENCE0_A5_B, // net ID: TXSEQUENCE0 lsb: 0  msb: 6 INPUT
			NetFlow* TXSEQUENCE0_A4_B, // net ID: TXSEQUENCE0 lsb: 0  msb: 6 INPUT
			NetFlow* TXSEQUENCE0_A3_B, // net ID: TXSEQUENCE0 lsb: 0  msb: 6 INPUT
			NetFlow* TXSEQUENCE0_A2_B, // net ID: TXSEQUENCE0 lsb: 0  msb: 6 INPUT
			NetFlow* TXSEQUENCE0_A1_B, // net ID: TXSEQUENCE0 lsb: 0  msb: 6 INPUT
			NetFlow* TXSEQUENCE0_A0_B, // net ID: TXSEQUENCE0 lsb: 0  msb: 6 INPUT
			NetFlow* TXSEQUENCE1_A6_B, // net ID: TXSEQUENCE1 lsb: 0  msb: 6 INPUT
			NetFlow* TXSEQUENCE1_A5_B, // net ID: TXSEQUENCE1 lsb: 0  msb: 6 INPUT
			NetFlow* TXSEQUENCE1_A4_B, // net ID: TXSEQUENCE1 lsb: 0  msb: 6 INPUT
			NetFlow* TXSEQUENCE1_A3_B, // net ID: TXSEQUENCE1 lsb: 0  msb: 6 INPUT
			NetFlow* TXSEQUENCE1_A2_B, // net ID: TXSEQUENCE1 lsb: 0  msb: 6 INPUT
			NetFlow* TXSEQUENCE1_A1_B, // net ID: TXSEQUENCE1 lsb: 0  msb: 6 INPUT
			NetFlow* TXSEQUENCE1_A0_B, // net ID: TXSEQUENCE1 lsb: 0  msb: 6 INPUT
			NetFlow* TXSTARTSEQ0_A0_B, // net ID: TXSTARTSEQ0 lsb: 0  msb: 0 INPUT
			NetFlow* TXSTARTSEQ1_A0_B, // net ID: TXSTARTSEQ1 lsb: 0  msb: 0 INPUT
			NetFlow* TXUSRCLK0_A0_B, // net ID: TXUSRCLK0 lsb: 0  msb: 0 INPUT
			NetFlow* TXUSRCLK1_A0_B, // net ID: TXUSRCLK1 lsb: 0  msb: 0 INPUT
			NetFlow* TXUSRCLK20_A0_B, // net ID: TXUSRCLK20 lsb: 0  msb: 0 INPUT
			NetFlow* TXUSRCLK21_A0_B // net ID: TXUSRCLK21 lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->LOC = LOC; // Default: "UNPLACED"
			this->AC_CAP_DIS_0 = AC_CAP_DIS_0; // Default: "TRUE"
			this->AC_CAP_DIS_1 = AC_CAP_DIS_1; // Default: "TRUE"
			this->CHAN_BOND_KEEP_ALIGN_0 = CHAN_BOND_KEEP_ALIGN_0; // Default: "FALSE"
			this->CHAN_BOND_KEEP_ALIGN_1 = CHAN_BOND_KEEP_ALIGN_1; // Default: "FALSE"
			this->CHAN_BOND_MODE_0 = CHAN_BOND_MODE_0; // Default: "OFF"
			this->CHAN_BOND_MODE_1 = CHAN_BOND_MODE_1; // Default: "OFF"
			this->CHAN_BOND_SEQ_2_USE_0 = CHAN_BOND_SEQ_2_USE_0; // Default: "FALSE"
			this->CHAN_BOND_SEQ_2_USE_1 = CHAN_BOND_SEQ_2_USE_1; // Default: "FALSE"
			this->CLKINDC_B = CLKINDC_B; // Default: "TRUE"
			this->CLKRCV_TRST = CLKRCV_TRST; // Default: "TRUE"
			this->CLK_CORRECT_USE_0 = CLK_CORRECT_USE_0; // Default: "TRUE"
			this->CLK_CORRECT_USE_1 = CLK_CORRECT_USE_1; // Default: "TRUE"
			this->CLK_COR_INSERT_IDLE_FLAG_0 = CLK_COR_INSERT_IDLE_FLAG_0; // Default: "FALSE"
			this->CLK_COR_INSERT_IDLE_FLAG_1 = CLK_COR_INSERT_IDLE_FLAG_1; // Default: "FALSE"
			this->CLK_COR_KEEP_IDLE_0 = CLK_COR_KEEP_IDLE_0; // Default: "FALSE"
			this->CLK_COR_KEEP_IDLE_1 = CLK_COR_KEEP_IDLE_1; // Default: "FALSE"
			this->CLK_COR_PRECEDENCE_0 = CLK_COR_PRECEDENCE_0; // Default: "TRUE"
			this->CLK_COR_PRECEDENCE_1 = CLK_COR_PRECEDENCE_1; // Default: "TRUE"
			this->CLK_COR_SEQ_2_USE_0 = CLK_COR_SEQ_2_USE_0; // Default: "FALSE"
			this->CLK_COR_SEQ_2_USE_1 = CLK_COR_SEQ_2_USE_1; // Default: "FALSE"
			this->COMMA_DOUBLE_0 = COMMA_DOUBLE_0; // Default: "FALSE"
			this->COMMA_DOUBLE_1 = COMMA_DOUBLE_1; // Default: "FALSE"
			this->DEC_MCOMMA_DETECT_0 = DEC_MCOMMA_DETECT_0; // Default: "TRUE"
			this->DEC_MCOMMA_DETECT_1 = DEC_MCOMMA_DETECT_1; // Default: "TRUE"
			this->DEC_PCOMMA_DETECT_0 = DEC_PCOMMA_DETECT_0; // Default: "TRUE"
			this->DEC_PCOMMA_DETECT_1 = DEC_PCOMMA_DETECT_1; // Default: "TRUE"
			this->DEC_VALID_COMMA_ONLY_0 = DEC_VALID_COMMA_ONLY_0; // Default: "TRUE"
			this->DEC_VALID_COMMA_ONLY_1 = DEC_VALID_COMMA_ONLY_1; // Default: "TRUE"
			this->MCOMMA_DETECT_0 = MCOMMA_DETECT_0; // Default: "TRUE"
			this->MCOMMA_DETECT_1 = MCOMMA_DETECT_1; // Default: "TRUE"
			this->OVERSAMPLE_MODE = OVERSAMPLE_MODE; // Default: "FALSE"
			this->PCI_EXPRESS_MODE_0 = PCI_EXPRESS_MODE_0; // Default: "FALSE"
			this->PCI_EXPRESS_MODE_1 = PCI_EXPRESS_MODE_1; // Default: "FALSE"
			this->PCOMMA_DETECT_0 = PCOMMA_DETECT_0; // Default: "TRUE"
			this->PCOMMA_DETECT_1 = PCOMMA_DETECT_1; // Default: "TRUE"
			this->PLL_FB_DCCEN = PLL_FB_DCCEN; // Default: "FALSE"
			this->PLL_SATA_0 = PLL_SATA_0; // Default: "FALSE"
			this->PLL_SATA_1 = PLL_SATA_1; // Default: "FALSE"
			this->RCV_TERM_GND_0 = RCV_TERM_GND_0; // Default: "FALSE"
			this->RCV_TERM_GND_1 = RCV_TERM_GND_1; // Default: "FALSE"
			this->RCV_TERM_VTTRX_0 = RCV_TERM_VTTRX_0; // Default: "FALSE"
			this->RCV_TERM_VTTRX_1 = RCV_TERM_VTTRX_1; // Default: "FALSE"
			this->RXGEARBOX_USE_0 = RXGEARBOX_USE_0; // Default: "FALSE"
			this->RXGEARBOX_USE_1 = RXGEARBOX_USE_1; // Default: "FALSE"
			this->RX_BUFFER_USE_0 = RX_BUFFER_USE_0; // Default: "TRUE"
			this->RX_BUFFER_USE_1 = RX_BUFFER_USE_1; // Default: "TRUE"
			this->RX_DECODE_SEQ_MATCH_0 = RX_DECODE_SEQ_MATCH_0; // Default: "TRUE"
			this->RX_DECODE_SEQ_MATCH_1 = RX_DECODE_SEQ_MATCH_1; // Default: "TRUE"
			this->RX_EN_IDLE_HOLD_CDR = RX_EN_IDLE_HOLD_CDR; // Default: "FALSE"
			this->RX_EN_IDLE_HOLD_DFE_0 = RX_EN_IDLE_HOLD_DFE_0; // Default: "TRUE"
			this->RX_EN_IDLE_HOLD_DFE_1 = RX_EN_IDLE_HOLD_DFE_1; // Default: "TRUE"
			this->RX_EN_IDLE_RESET_BUF_0 = RX_EN_IDLE_RESET_BUF_0; // Default: "TRUE"
			this->RX_EN_IDLE_RESET_BUF_1 = RX_EN_IDLE_RESET_BUF_1; // Default: "TRUE"
			this->RX_EN_IDLE_RESET_FR = RX_EN_IDLE_RESET_FR; // Default: "TRUE"
			this->RX_EN_IDLE_RESET_PH = RX_EN_IDLE_RESET_PH; // Default: "TRUE"
			this->RX_LOSS_OF_SYNC_FSM_0 = RX_LOSS_OF_SYNC_FSM_0; // Default: "FALSE"
			this->RX_LOSS_OF_SYNC_FSM_1 = RX_LOSS_OF_SYNC_FSM_1; // Default: "FALSE"
			this->RX_SLIDE_MODE_0 = RX_SLIDE_MODE_0; // Default: "PCS"
			this->RX_SLIDE_MODE_1 = RX_SLIDE_MODE_1; // Default: "PCS"
			this->RX_STATUS_FMT_0 = RX_STATUS_FMT_0; // Default: "PCIE"
			this->RX_STATUS_FMT_1 = RX_STATUS_FMT_1; // Default: "PCIE"
			this->RX_XCLK_SEL_0 = RX_XCLK_SEL_0; // Default: "RXREC"
			this->RX_XCLK_SEL_1 = RX_XCLK_SEL_1; // Default: "RXREC"
			this->SIM_MODE = SIM_MODE; // Default: "FAST"
			this->SIM_PLL_PERDIV2 = SIM_PLL_PERDIV2; // Default: 9'h140
			this->SIM_RECEIVER_DETECT_PASS_0 = SIM_RECEIVER_DETECT_PASS_0; // Default: "TRUE"
			this->SIM_RECEIVER_DETECT_PASS_1 = SIM_RECEIVER_DETECT_PASS_1; // Default: "TRUE"
			this->TERMINATION_OVRD = TERMINATION_OVRD; // Default: "FALSE"
			this->TXGEARBOX_USE_0 = TXGEARBOX_USE_0; // Default: "FALSE"
			this->TXGEARBOX_USE_1 = TXGEARBOX_USE_1; // Default: "FALSE"
			this->TX_BUFFER_USE_0 = TX_BUFFER_USE_0; // Default: "TRUE"
			this->TX_BUFFER_USE_1 = TX_BUFFER_USE_1; // Default: "TRUE"
			this->TX_XCLK_SEL_0 = TX_XCLK_SEL_0; // Default: "TXOUT"
			this->TX_XCLK_SEL_1 = TX_XCLK_SEL_1; // Default: "TXOUT"
			this->TRANS_TIME_FROM_P2_0 = TRANS_TIME_FROM_P2_0; // Default: 12'h03c
			this->TRANS_TIME_FROM_P2_1 = TRANS_TIME_FROM_P2_1; // Default: 12'h03c
			this->TX_DETECT_RX_CFG_0 = TX_DETECT_RX_CFG_0; // Default: 14'h1832
			this->TX_DETECT_RX_CFG_1 = TX_DETECT_RX_CFG_1; // Default: 14'h1832
			this->PMA_TX_CFG_0 = PMA_TX_CFG_0; // Default: 20'h80082
			this->PMA_TX_CFG_1 = PMA_TX_CFG_1; // Default: 20'h80082
			this->CM_TRIM_0 = CM_TRIM_0; // Default: 2'b10
			this->CM_TRIM_1 = CM_TRIM_1; // Default: 2'b10
			this->PLL_COM_CFG = PLL_COM_CFG; // Default: 24'h21680a
			this->PMA_RX_CFG_0 = PMA_RX_CFG_0; // Default: 25'h0f44089
			this->PMA_RX_CFG_1 = PMA_RX_CFG_1; // Default: 25'h0f44089
			this->PMA_CDR_SCAN_0 = PMA_CDR_SCAN_0; // Default: 27'h6404035
			this->PMA_CDR_SCAN_1 = PMA_CDR_SCAN_1; // Default: 27'h6404035
			this->GEARBOX_ENDEC_0 = GEARBOX_ENDEC_0; // Default: 3'b000
			this->GEARBOX_ENDEC_1 = GEARBOX_ENDEC_1; // Default: 3'b000
			this->OOBDETECT_THRESHOLD_0 = OOBDETECT_THRESHOLD_0; // Default: 3'b110
			this->OOBDETECT_THRESHOLD_1 = OOBDETECT_THRESHOLD_1; // Default: 3'b110
			this->PLL_LKDET_CFG = PLL_LKDET_CFG; // Default: 3'b101
			this->PLL_TDCC_CFG = PLL_TDCC_CFG; // Default: 3'b000
			this->SATA_BURST_VAL_0 = SATA_BURST_VAL_0; // Default: 3'b100
			this->SATA_BURST_VAL_1 = SATA_BURST_VAL_1; // Default: 3'b100
			this->SATA_IDLE_VAL_0 = SATA_IDLE_VAL_0; // Default: 3'b100
			this->SATA_IDLE_VAL_1 = SATA_IDLE_VAL_1; // Default: 3'b100
			this->TXRX_INVERT_0 = TXRX_INVERT_0; // Default: 3'b011
			this->TXRX_INVERT_1 = TXRX_INVERT_1; // Default: 3'b011
			this->TX_IDLE_DELAY_0 = TX_IDLE_DELAY_0; // Default: 3'b010
			this->TX_IDLE_DELAY_1 = TX_IDLE_DELAY_1; // Default: 3'b010
			this->PRBS_ERR_THRESHOLD_0 = PRBS_ERR_THRESHOLD_0; // Default: 32'h00000001
			this->PRBS_ERR_THRESHOLD_1 = PRBS_ERR_THRESHOLD_1; // Default: 32'h00000001
			this->CHAN_BOND_SEQ_1_ENABLE_0 = CHAN_BOND_SEQ_1_ENABLE_0; // Default: 4'b0001
			this->CHAN_BOND_SEQ_1_ENABLE_1 = CHAN_BOND_SEQ_1_ENABLE_1; // Default: 4'b0001
			this->CHAN_BOND_SEQ_2_ENABLE_0 = CHAN_BOND_SEQ_2_ENABLE_0; // Default: 4'b0000
			this->CHAN_BOND_SEQ_2_ENABLE_1 = CHAN_BOND_SEQ_2_ENABLE_1; // Default: 4'b0000
			this->CLK_COR_SEQ_1_ENABLE_0 = CLK_COR_SEQ_1_ENABLE_0; // Default: 4'b0001
			this->CLK_COR_SEQ_1_ENABLE_1 = CLK_COR_SEQ_1_ENABLE_1; // Default: 4'b0001
			this->CLK_COR_SEQ_2_ENABLE_0 = CLK_COR_SEQ_2_ENABLE_0; // Default: 4'b0000
			this->CLK_COR_SEQ_2_ENABLE_1 = CLK_COR_SEQ_2_ENABLE_1; // Default: 4'b0000
			this->COM_BURST_VAL_0 = COM_BURST_VAL_0; // Default: 4'b1111
			this->COM_BURST_VAL_1 = COM_BURST_VAL_1; // Default: 4'b1111
			this->RX_IDLE_HI_CNT_0 = RX_IDLE_HI_CNT_0; // Default: 4'b1000
			this->RX_IDLE_HI_CNT_1 = RX_IDLE_HI_CNT_1; // Default: 4'b1000
			this->RX_IDLE_LO_CNT_0 = RX_IDLE_LO_CNT_0; // Default: 4'b0000
			this->RX_IDLE_LO_CNT_1 = RX_IDLE_LO_CNT_1; // Default: 4'b0000
			this->CDR_PH_ADJ_TIME = CDR_PH_ADJ_TIME; // Default: 5'b01010
			this->DFE_CAL_TIME = DFE_CAL_TIME; // Default: 5'b00110
			this->TERMINATION_CTRL = TERMINATION_CTRL; // Default: 5'b10100
			this->PMA_COM_CFG = PMA_COM_CFG; // Default: 69'h0
			this->PMA_RXSYNC_CFG_0 = PMA_RXSYNC_CFG_0; // Default: 7'h0
			this->PMA_RXSYNC_CFG_1 = PMA_RXSYNC_CFG_1; // Default: 7'h0
			this->PLL_CP_CFG = PLL_CP_CFG; // Default: 8'h00
			this->TRANS_TIME_NON_P2_0 = TRANS_TIME_NON_P2_0; // Default: 8'h19
			this->TRANS_TIME_NON_P2_1 = TRANS_TIME_NON_P2_1; // Default: 8'h19
			this->CHAN_BOND_SEQ_1_1_0 = CHAN_BOND_SEQ_1_1_0; // Default: 10'b0101111100
			this->CHAN_BOND_SEQ_1_1_1 = CHAN_BOND_SEQ_1_1_1; // Default: 10'b0101111100
			this->CHAN_BOND_SEQ_1_2_0 = CHAN_BOND_SEQ_1_2_0; // Default: 10'b0000000000
			this->CHAN_BOND_SEQ_1_2_1 = CHAN_BOND_SEQ_1_2_1; // Default: 10'b0000000000
			this->CHAN_BOND_SEQ_1_3_0 = CHAN_BOND_SEQ_1_3_0; // Default: 10'b0000000000
			this->CHAN_BOND_SEQ_1_3_1 = CHAN_BOND_SEQ_1_3_1; // Default: 10'b0000000000
			this->CHAN_BOND_SEQ_1_4_0 = CHAN_BOND_SEQ_1_4_0; // Default: 10'b0000000000
			this->CHAN_BOND_SEQ_1_4_1 = CHAN_BOND_SEQ_1_4_1; // Default: 10'b0000000000
			this->CHAN_BOND_SEQ_2_1_0 = CHAN_BOND_SEQ_2_1_0; // Default: 10'b0000000000
			this->CHAN_BOND_SEQ_2_1_1 = CHAN_BOND_SEQ_2_1_1; // Default: 10'b0000000000
			this->CHAN_BOND_SEQ_2_2_0 = CHAN_BOND_SEQ_2_2_0; // Default: 10'b0000000000
			this->CHAN_BOND_SEQ_2_2_1 = CHAN_BOND_SEQ_2_2_1; // Default: 10'b0000000000
			this->CHAN_BOND_SEQ_2_3_0 = CHAN_BOND_SEQ_2_3_0; // Default: 10'b0000000000
			this->CHAN_BOND_SEQ_2_3_1 = CHAN_BOND_SEQ_2_3_1; // Default: 10'b0000000000
			this->CHAN_BOND_SEQ_2_4_0 = CHAN_BOND_SEQ_2_4_0; // Default: 10'b0000000000
			this->CHAN_BOND_SEQ_2_4_1 = CHAN_BOND_SEQ_2_4_1; // Default: 10'b0000000000
			this->CLK_COR_SEQ_1_1_0 = CLK_COR_SEQ_1_1_0; // Default: 10'b0100011100
			this->CLK_COR_SEQ_1_1_1 = CLK_COR_SEQ_1_1_1; // Default: 10'b0100011100
			this->CLK_COR_SEQ_1_2_0 = CLK_COR_SEQ_1_2_0; // Default: 10'b0000000000
			this->CLK_COR_SEQ_1_2_1 = CLK_COR_SEQ_1_2_1; // Default: 10'b0000000000
			this->CLK_COR_SEQ_1_3_0 = CLK_COR_SEQ_1_3_0; // Default: 10'b0000000000
			this->CLK_COR_SEQ_1_3_1 = CLK_COR_SEQ_1_3_1; // Default: 10'b0000000000
			this->CLK_COR_SEQ_1_4_0 = CLK_COR_SEQ_1_4_0; // Default: 10'b0000000000
			this->CLK_COR_SEQ_1_4_1 = CLK_COR_SEQ_1_4_1; // Default: 10'b0000000000
			this->CLK_COR_SEQ_2_1_0 = CLK_COR_SEQ_2_1_0; // Default: 10'b0000000000
			this->CLK_COR_SEQ_2_1_1 = CLK_COR_SEQ_2_1_1; // Default: 10'b0000000000
			this->CLK_COR_SEQ_2_2_0 = CLK_COR_SEQ_2_2_0; // Default: 10'b0000000000
			this->CLK_COR_SEQ_2_2_1 = CLK_COR_SEQ_2_2_1; // Default: 10'b0000000000
			this->CLK_COR_SEQ_2_3_0 = CLK_COR_SEQ_2_3_0; // Default: 10'b0000000000
			this->CLK_COR_SEQ_2_3_1 = CLK_COR_SEQ_2_3_1; // Default: 10'b0000000000
			this->CLK_COR_SEQ_2_4_0 = CLK_COR_SEQ_2_4_0; // Default: 10'b0000000000
			this->CLK_COR_SEQ_2_4_1 = CLK_COR_SEQ_2_4_1; // Default: 10'b0000000000
			this->COMMA_10B_ENABLE_0 = COMMA_10B_ENABLE_0; // Default: 10'b0001111111
			this->COMMA_10B_ENABLE_1 = COMMA_10B_ENABLE_1; // Default: 10'b0001111111
			this->DFE_CFG_0 = DFE_CFG_0; // Default: 10'b1101111011
			this->DFE_CFG_1 = DFE_CFG_1; // Default: 10'b1101111011
			this->MCOMMA_10B_VALUE_0 = MCOMMA_10B_VALUE_0; // Default: 10'b1010000011
			this->MCOMMA_10B_VALUE_1 = MCOMMA_10B_VALUE_1; // Default: 10'b1010000011
			this->PCOMMA_10B_VALUE_0 = PCOMMA_10B_VALUE_0; // Default: 10'b0101111100
			this->PCOMMA_10B_VALUE_1 = PCOMMA_10B_VALUE_1; // Default: 10'b0101111100
			this->TRANS_TIME_TO_P2_0 = TRANS_TIME_TO_P2_0; // Default: 10'h064
			this->TRANS_TIME_TO_P2_1 = TRANS_TIME_TO_P2_1; // Default: 10'h064
			this->ALIGN_COMMA_WORD_0 = ALIGN_COMMA_WORD_0; // Default: 1
			this->ALIGN_COMMA_WORD_1 = ALIGN_COMMA_WORD_1; // Default: 1
			this->CB2_INH_CC_PERIOD_0 = CB2_INH_CC_PERIOD_0; // Default: 8
			this->CB2_INH_CC_PERIOD_1 = CB2_INH_CC_PERIOD_1; // Default: 8
			this->CHAN_BOND_1_MAX_SKEW_0 = CHAN_BOND_1_MAX_SKEW_0; // Default: 7
			this->CHAN_BOND_1_MAX_SKEW_1 = CHAN_BOND_1_MAX_SKEW_1; // Default: 7
			this->CHAN_BOND_2_MAX_SKEW_0 = CHAN_BOND_2_MAX_SKEW_0; // Default: 7
			this->CHAN_BOND_2_MAX_SKEW_1 = CHAN_BOND_2_MAX_SKEW_1; // Default: 7
			this->CHAN_BOND_LEVEL_0 = CHAN_BOND_LEVEL_0; // Default: 0
			this->CHAN_BOND_LEVEL_1 = CHAN_BOND_LEVEL_1; // Default: 0
			this->CHAN_BOND_SEQ_LEN_0 = CHAN_BOND_SEQ_LEN_0; // Default: 1
			this->CHAN_BOND_SEQ_LEN_1 = CHAN_BOND_SEQ_LEN_1; // Default: 1
			this->CLK25_DIVIDER = CLK25_DIVIDER; // Default: 10
			this->CLK_COR_ADJ_LEN_0 = CLK_COR_ADJ_LEN_0; // Default: 1
			this->CLK_COR_ADJ_LEN_1 = CLK_COR_ADJ_LEN_1; // Default: 1
			this->CLK_COR_DET_LEN_0 = CLK_COR_DET_LEN_0; // Default: 1
			this->CLK_COR_DET_LEN_1 = CLK_COR_DET_LEN_1; // Default: 1
			this->CLK_COR_MAX_LAT_0 = CLK_COR_MAX_LAT_0; // Default: 20
			this->CLK_COR_MAX_LAT_1 = CLK_COR_MAX_LAT_1; // Default: 20
			this->CLK_COR_MIN_LAT_0 = CLK_COR_MIN_LAT_0; // Default: 18
			this->CLK_COR_MIN_LAT_1 = CLK_COR_MIN_LAT_1; // Default: 18
			this->CLK_COR_REPEAT_WAIT_0 = CLK_COR_REPEAT_WAIT_0; // Default: 0
			this->CLK_COR_REPEAT_WAIT_1 = CLK_COR_REPEAT_WAIT_1; // Default: 0
			this->OOB_CLK_DIVIDER = OOB_CLK_DIVIDER; // Default: 6
			this->PLL_DIVSEL_FB = PLL_DIVSEL_FB; // Default: 2
			this->PLL_DIVSEL_REF = PLL_DIVSEL_REF; // Default: 1
			this->PLL_RXDIVSEL_OUT_0 = PLL_RXDIVSEL_OUT_0; // Default: 1
			this->PLL_RXDIVSEL_OUT_1 = PLL_RXDIVSEL_OUT_1; // Default: 1
			this->PLL_TXDIVSEL_OUT_0 = PLL_TXDIVSEL_OUT_0; // Default: 1
			this->PLL_TXDIVSEL_OUT_1 = PLL_TXDIVSEL_OUT_1; // Default: 1
			this->RX_LOS_INVALID_INCR_0 = RX_LOS_INVALID_INCR_0; // Default: 1
			this->RX_LOS_INVALID_INCR_1 = RX_LOS_INVALID_INCR_1; // Default: 1
			this->RX_LOS_THRESHOLD_0 = RX_LOS_THRESHOLD_0; // Default: 4
			this->RX_LOS_THRESHOLD_1 = RX_LOS_THRESHOLD_1; // Default: 4
			this->SATA_MAX_BURST_0 = SATA_MAX_BURST_0; // Default: 7
			this->SATA_MAX_BURST_1 = SATA_MAX_BURST_1; // Default: 7
			this->SATA_MAX_INIT_0 = SATA_MAX_INIT_0; // Default: 22
			this->SATA_MAX_INIT_1 = SATA_MAX_INIT_1; // Default: 22
			this->SATA_MAX_WAKE_0 = SATA_MAX_WAKE_0; // Default: 7
			this->SATA_MAX_WAKE_1 = SATA_MAX_WAKE_1; // Default: 7
			this->SATA_MIN_BURST_0 = SATA_MIN_BURST_0; // Default: 4
			this->SATA_MIN_BURST_1 = SATA_MIN_BURST_1; // Default: 4
			this->SATA_MIN_INIT_0 = SATA_MIN_INIT_0; // Default: 12
			this->SATA_MIN_INIT_1 = SATA_MIN_INIT_1; // Default: 12
			this->SATA_MIN_WAKE_0 = SATA_MIN_WAKE_0; // Default: 4
			this->SATA_MIN_WAKE_1 = SATA_MIN_WAKE_1; // Default: 4
			this->SIM_GTXRESET_SPEEDUP = SIM_GTXRESET_SPEEDUP; // Default: 1
			this->TERMINATION_IMP_0 = TERMINATION_IMP_0; // Default: 50
			this->TERMINATION_IMP_1 = TERMINATION_IMP_1; // Default: 50
			//Verilog Ports in definition order:
			this->DFECLKDLYADJMONITOR0_A5_B = DFECLKDLYADJMONITOR0_A5_B; // net ID: DFECLKDLYADJMONITOR0 lsb: 0  msb: 5 OUTPUT
			this->DFECLKDLYADJMONITOR0_A4_B = DFECLKDLYADJMONITOR0_A4_B; // net ID: DFECLKDLYADJMONITOR0 lsb: 0  msb: 5 OUTPUT
			this->DFECLKDLYADJMONITOR0_A3_B = DFECLKDLYADJMONITOR0_A3_B; // net ID: DFECLKDLYADJMONITOR0 lsb: 0  msb: 5 OUTPUT
			this->DFECLKDLYADJMONITOR0_A2_B = DFECLKDLYADJMONITOR0_A2_B; // net ID: DFECLKDLYADJMONITOR0 lsb: 0  msb: 5 OUTPUT
			this->DFECLKDLYADJMONITOR0_A1_B = DFECLKDLYADJMONITOR0_A1_B; // net ID: DFECLKDLYADJMONITOR0 lsb: 0  msb: 5 OUTPUT
			this->DFECLKDLYADJMONITOR0_A0_B = DFECLKDLYADJMONITOR0_A0_B; // net ID: DFECLKDLYADJMONITOR0 lsb: 0  msb: 5 OUTPUT
			this->DFECLKDLYADJMONITOR1_A5_B = DFECLKDLYADJMONITOR1_A5_B; // net ID: DFECLKDLYADJMONITOR1 lsb: 0  msb: 5 OUTPUT
			this->DFECLKDLYADJMONITOR1_A4_B = DFECLKDLYADJMONITOR1_A4_B; // net ID: DFECLKDLYADJMONITOR1 lsb: 0  msb: 5 OUTPUT
			this->DFECLKDLYADJMONITOR1_A3_B = DFECLKDLYADJMONITOR1_A3_B; // net ID: DFECLKDLYADJMONITOR1 lsb: 0  msb: 5 OUTPUT
			this->DFECLKDLYADJMONITOR1_A2_B = DFECLKDLYADJMONITOR1_A2_B; // net ID: DFECLKDLYADJMONITOR1 lsb: 0  msb: 5 OUTPUT
			this->DFECLKDLYADJMONITOR1_A1_B = DFECLKDLYADJMONITOR1_A1_B; // net ID: DFECLKDLYADJMONITOR1 lsb: 0  msb: 5 OUTPUT
			this->DFECLKDLYADJMONITOR1_A0_B = DFECLKDLYADJMONITOR1_A0_B; // net ID: DFECLKDLYADJMONITOR1 lsb: 0  msb: 5 OUTPUT
			this->DFEEYEDACMONITOR0_A4_B = DFEEYEDACMONITOR0_A4_B; // net ID: DFEEYEDACMONITOR0 lsb: 0  msb: 4 OUTPUT
			this->DFEEYEDACMONITOR0_A3_B = DFEEYEDACMONITOR0_A3_B; // net ID: DFEEYEDACMONITOR0 lsb: 0  msb: 4 OUTPUT
			this->DFEEYEDACMONITOR0_A2_B = DFEEYEDACMONITOR0_A2_B; // net ID: DFEEYEDACMONITOR0 lsb: 0  msb: 4 OUTPUT
			this->DFEEYEDACMONITOR0_A1_B = DFEEYEDACMONITOR0_A1_B; // net ID: DFEEYEDACMONITOR0 lsb: 0  msb: 4 OUTPUT
			this->DFEEYEDACMONITOR0_A0_B = DFEEYEDACMONITOR0_A0_B; // net ID: DFEEYEDACMONITOR0 lsb: 0  msb: 4 OUTPUT
			this->DFEEYEDACMONITOR1_A4_B = DFEEYEDACMONITOR1_A4_B; // net ID: DFEEYEDACMONITOR1 lsb: 0  msb: 4 OUTPUT
			this->DFEEYEDACMONITOR1_A3_B = DFEEYEDACMONITOR1_A3_B; // net ID: DFEEYEDACMONITOR1 lsb: 0  msb: 4 OUTPUT
			this->DFEEYEDACMONITOR1_A2_B = DFEEYEDACMONITOR1_A2_B; // net ID: DFEEYEDACMONITOR1 lsb: 0  msb: 4 OUTPUT
			this->DFEEYEDACMONITOR1_A1_B = DFEEYEDACMONITOR1_A1_B; // net ID: DFEEYEDACMONITOR1 lsb: 0  msb: 4 OUTPUT
			this->DFEEYEDACMONITOR1_A0_B = DFEEYEDACMONITOR1_A0_B; // net ID: DFEEYEDACMONITOR1 lsb: 0  msb: 4 OUTPUT
			this->DFESENSCAL0_A2_B = DFESENSCAL0_A2_B; // net ID: DFESENSCAL0 lsb: 0  msb: 2 OUTPUT
			this->DFESENSCAL0_A1_B = DFESENSCAL0_A1_B; // net ID: DFESENSCAL0 lsb: 0  msb: 2 OUTPUT
			this->DFESENSCAL0_A0_B = DFESENSCAL0_A0_B; // net ID: DFESENSCAL0 lsb: 0  msb: 2 OUTPUT
			this->DFESENSCAL1_A2_B = DFESENSCAL1_A2_B; // net ID: DFESENSCAL1 lsb: 0  msb: 2 OUTPUT
			this->DFESENSCAL1_A1_B = DFESENSCAL1_A1_B; // net ID: DFESENSCAL1 lsb: 0  msb: 2 OUTPUT
			this->DFESENSCAL1_A0_B = DFESENSCAL1_A0_B; // net ID: DFESENSCAL1 lsb: 0  msb: 2 OUTPUT
			this->DFETAP1MONITOR0_A4_B = DFETAP1MONITOR0_A4_B; // net ID: DFETAP1MONITOR0 lsb: 0  msb: 4 OUTPUT
			this->DFETAP1MONITOR0_A3_B = DFETAP1MONITOR0_A3_B; // net ID: DFETAP1MONITOR0 lsb: 0  msb: 4 OUTPUT
			this->DFETAP1MONITOR0_A2_B = DFETAP1MONITOR0_A2_B; // net ID: DFETAP1MONITOR0 lsb: 0  msb: 4 OUTPUT
			this->DFETAP1MONITOR0_A1_B = DFETAP1MONITOR0_A1_B; // net ID: DFETAP1MONITOR0 lsb: 0  msb: 4 OUTPUT
			this->DFETAP1MONITOR0_A0_B = DFETAP1MONITOR0_A0_B; // net ID: DFETAP1MONITOR0 lsb: 0  msb: 4 OUTPUT
			this->DFETAP1MONITOR1_A4_B = DFETAP1MONITOR1_A4_B; // net ID: DFETAP1MONITOR1 lsb: 0  msb: 4 OUTPUT
			this->DFETAP1MONITOR1_A3_B = DFETAP1MONITOR1_A3_B; // net ID: DFETAP1MONITOR1 lsb: 0  msb: 4 OUTPUT
			this->DFETAP1MONITOR1_A2_B = DFETAP1MONITOR1_A2_B; // net ID: DFETAP1MONITOR1 lsb: 0  msb: 4 OUTPUT
			this->DFETAP1MONITOR1_A1_B = DFETAP1MONITOR1_A1_B; // net ID: DFETAP1MONITOR1 lsb: 0  msb: 4 OUTPUT
			this->DFETAP1MONITOR1_A0_B = DFETAP1MONITOR1_A0_B; // net ID: DFETAP1MONITOR1 lsb: 0  msb: 4 OUTPUT
			this->DFETAP2MONITOR0_A4_B = DFETAP2MONITOR0_A4_B; // net ID: DFETAP2MONITOR0 lsb: 0  msb: 4 OUTPUT
			this->DFETAP2MONITOR0_A3_B = DFETAP2MONITOR0_A3_B; // net ID: DFETAP2MONITOR0 lsb: 0  msb: 4 OUTPUT
			this->DFETAP2MONITOR0_A2_B = DFETAP2MONITOR0_A2_B; // net ID: DFETAP2MONITOR0 lsb: 0  msb: 4 OUTPUT
			this->DFETAP2MONITOR0_A1_B = DFETAP2MONITOR0_A1_B; // net ID: DFETAP2MONITOR0 lsb: 0  msb: 4 OUTPUT
			this->DFETAP2MONITOR0_A0_B = DFETAP2MONITOR0_A0_B; // net ID: DFETAP2MONITOR0 lsb: 0  msb: 4 OUTPUT
			this->DFETAP2MONITOR1_A4_B = DFETAP2MONITOR1_A4_B; // net ID: DFETAP2MONITOR1 lsb: 0  msb: 4 OUTPUT
			this->DFETAP2MONITOR1_A3_B = DFETAP2MONITOR1_A3_B; // net ID: DFETAP2MONITOR1 lsb: 0  msb: 4 OUTPUT
			this->DFETAP2MONITOR1_A2_B = DFETAP2MONITOR1_A2_B; // net ID: DFETAP2MONITOR1 lsb: 0  msb: 4 OUTPUT
			this->DFETAP2MONITOR1_A1_B = DFETAP2MONITOR1_A1_B; // net ID: DFETAP2MONITOR1 lsb: 0  msb: 4 OUTPUT
			this->DFETAP2MONITOR1_A0_B = DFETAP2MONITOR1_A0_B; // net ID: DFETAP2MONITOR1 lsb: 0  msb: 4 OUTPUT
			this->DFETAP3MONITOR0_A3_B = DFETAP3MONITOR0_A3_B; // net ID: DFETAP3MONITOR0 lsb: 0  msb: 3 OUTPUT
			this->DFETAP3MONITOR0_A2_B = DFETAP3MONITOR0_A2_B; // net ID: DFETAP3MONITOR0 lsb: 0  msb: 3 OUTPUT
			this->DFETAP3MONITOR0_A1_B = DFETAP3MONITOR0_A1_B; // net ID: DFETAP3MONITOR0 lsb: 0  msb: 3 OUTPUT
			this->DFETAP3MONITOR0_A0_B = DFETAP3MONITOR0_A0_B; // net ID: DFETAP3MONITOR0 lsb: 0  msb: 3 OUTPUT
			this->DFETAP3MONITOR1_A3_B = DFETAP3MONITOR1_A3_B; // net ID: DFETAP3MONITOR1 lsb: 0  msb: 3 OUTPUT
			this->DFETAP3MONITOR1_A2_B = DFETAP3MONITOR1_A2_B; // net ID: DFETAP3MONITOR1 lsb: 0  msb: 3 OUTPUT
			this->DFETAP3MONITOR1_A1_B = DFETAP3MONITOR1_A1_B; // net ID: DFETAP3MONITOR1 lsb: 0  msb: 3 OUTPUT
			this->DFETAP3MONITOR1_A0_B = DFETAP3MONITOR1_A0_B; // net ID: DFETAP3MONITOR1 lsb: 0  msb: 3 OUTPUT
			this->DFETAP4MONITOR0_A3_B = DFETAP4MONITOR0_A3_B; // net ID: DFETAP4MONITOR0 lsb: 0  msb: 3 OUTPUT
			this->DFETAP4MONITOR0_A2_B = DFETAP4MONITOR0_A2_B; // net ID: DFETAP4MONITOR0 lsb: 0  msb: 3 OUTPUT
			this->DFETAP4MONITOR0_A1_B = DFETAP4MONITOR0_A1_B; // net ID: DFETAP4MONITOR0 lsb: 0  msb: 3 OUTPUT
			this->DFETAP4MONITOR0_A0_B = DFETAP4MONITOR0_A0_B; // net ID: DFETAP4MONITOR0 lsb: 0  msb: 3 OUTPUT
			this->DFETAP4MONITOR1_A3_B = DFETAP4MONITOR1_A3_B; // net ID: DFETAP4MONITOR1 lsb: 0  msb: 3 OUTPUT
			this->DFETAP4MONITOR1_A2_B = DFETAP4MONITOR1_A2_B; // net ID: DFETAP4MONITOR1 lsb: 0  msb: 3 OUTPUT
			this->DFETAP4MONITOR1_A1_B = DFETAP4MONITOR1_A1_B; // net ID: DFETAP4MONITOR1 lsb: 0  msb: 3 OUTPUT
			this->DFETAP4MONITOR1_A0_B = DFETAP4MONITOR1_A0_B; // net ID: DFETAP4MONITOR1 lsb: 0  msb: 3 OUTPUT
			this->DO_A15_B = DO_A15_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
			this->DO_A14_B = DO_A14_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
			this->DO_A13_B = DO_A13_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
			this->DO_A12_B = DO_A12_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
			this->DO_A11_B = DO_A11_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
			this->DO_A10_B = DO_A10_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
			this->DO_A9_B = DO_A9_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
			this->DO_A8_B = DO_A8_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
			this->DO_A7_B = DO_A7_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
			this->DO_A6_B = DO_A6_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
			this->DO_A5_B = DO_A5_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
			this->DO_A4_B = DO_A4_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
			this->DO_A3_B = DO_A3_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
			this->DO_A2_B = DO_A2_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
			this->DO_A1_B = DO_A1_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
			this->DO_A0_B = DO_A0_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
			this->DRDY_A0_B = DRDY_A0_B; // net ID: DRDY lsb: 0  msb: 0 OUTPUT
			this->PHYSTATUS0_A0_B = PHYSTATUS0_A0_B; // net ID: PHYSTATUS0 lsb: 0  msb: 0 OUTPUT
			this->PHYSTATUS1_A0_B = PHYSTATUS1_A0_B; // net ID: PHYSTATUS1 lsb: 0  msb: 0 OUTPUT
			this->PLLLKDET_A0_B = PLLLKDET_A0_B; // net ID: PLLLKDET lsb: 0  msb: 0 OUTPUT
			this->REFCLKOUT_A0_B = REFCLKOUT_A0_B; // net ID: REFCLKOUT lsb: 0  msb: 0 OUTPUT
			this->RESETDONE0_A0_B = RESETDONE0_A0_B; // net ID: RESETDONE0 lsb: 0  msb: 0 OUTPUT
			this->RESETDONE1_A0_B = RESETDONE1_A0_B; // net ID: RESETDONE1 lsb: 0  msb: 0 OUTPUT
			this->RXBUFSTATUS0_A2_B = RXBUFSTATUS0_A2_B; // net ID: RXBUFSTATUS0 lsb: 0  msb: 2 OUTPUT
			this->RXBUFSTATUS0_A1_B = RXBUFSTATUS0_A1_B; // net ID: RXBUFSTATUS0 lsb: 0  msb: 2 OUTPUT
			this->RXBUFSTATUS0_A0_B = RXBUFSTATUS0_A0_B; // net ID: RXBUFSTATUS0 lsb: 0  msb: 2 OUTPUT
			this->RXBUFSTATUS1_A2_B = RXBUFSTATUS1_A2_B; // net ID: RXBUFSTATUS1 lsb: 0  msb: 2 OUTPUT
			this->RXBUFSTATUS1_A1_B = RXBUFSTATUS1_A1_B; // net ID: RXBUFSTATUS1 lsb: 0  msb: 2 OUTPUT
			this->RXBUFSTATUS1_A0_B = RXBUFSTATUS1_A0_B; // net ID: RXBUFSTATUS1 lsb: 0  msb: 2 OUTPUT
			this->RXBYTEISALIGNED0_A0_B = RXBYTEISALIGNED0_A0_B; // net ID: RXBYTEISALIGNED0 lsb: 0  msb: 0 OUTPUT
			this->RXBYTEISALIGNED1_A0_B = RXBYTEISALIGNED1_A0_B; // net ID: RXBYTEISALIGNED1 lsb: 0  msb: 0 OUTPUT
			this->RXBYTEREALIGN0_A0_B = RXBYTEREALIGN0_A0_B; // net ID: RXBYTEREALIGN0 lsb: 0  msb: 0 OUTPUT
			this->RXBYTEREALIGN1_A0_B = RXBYTEREALIGN1_A0_B; // net ID: RXBYTEREALIGN1 lsb: 0  msb: 0 OUTPUT
			this->RXCHANBONDSEQ0_A0_B = RXCHANBONDSEQ0_A0_B; // net ID: RXCHANBONDSEQ0 lsb: 0  msb: 0 OUTPUT
			this->RXCHANBONDSEQ1_A0_B = RXCHANBONDSEQ1_A0_B; // net ID: RXCHANBONDSEQ1 lsb: 0  msb: 0 OUTPUT
			this->RXCHANISALIGNED0_A0_B = RXCHANISALIGNED0_A0_B; // net ID: RXCHANISALIGNED0 lsb: 0  msb: 0 OUTPUT
			this->RXCHANISALIGNED1_A0_B = RXCHANISALIGNED1_A0_B; // net ID: RXCHANISALIGNED1 lsb: 0  msb: 0 OUTPUT
			this->RXCHANREALIGN0_A0_B = RXCHANREALIGN0_A0_B; // net ID: RXCHANREALIGN0 lsb: 0  msb: 0 OUTPUT
			this->RXCHANREALIGN1_A0_B = RXCHANREALIGN1_A0_B; // net ID: RXCHANREALIGN1 lsb: 0  msb: 0 OUTPUT
			this->RXCHARISCOMMA0_A3_B = RXCHARISCOMMA0_A3_B; // net ID: RXCHARISCOMMA0 lsb: 0  msb: 3 OUTPUT
			this->RXCHARISCOMMA0_A2_B = RXCHARISCOMMA0_A2_B; // net ID: RXCHARISCOMMA0 lsb: 0  msb: 3 OUTPUT
			this->RXCHARISCOMMA0_A1_B = RXCHARISCOMMA0_A1_B; // net ID: RXCHARISCOMMA0 lsb: 0  msb: 3 OUTPUT
			this->RXCHARISCOMMA0_A0_B = RXCHARISCOMMA0_A0_B; // net ID: RXCHARISCOMMA0 lsb: 0  msb: 3 OUTPUT
			this->RXCHARISCOMMA1_A3_B = RXCHARISCOMMA1_A3_B; // net ID: RXCHARISCOMMA1 lsb: 0  msb: 3 OUTPUT
			this->RXCHARISCOMMA1_A2_B = RXCHARISCOMMA1_A2_B; // net ID: RXCHARISCOMMA1 lsb: 0  msb: 3 OUTPUT
			this->RXCHARISCOMMA1_A1_B = RXCHARISCOMMA1_A1_B; // net ID: RXCHARISCOMMA1 lsb: 0  msb: 3 OUTPUT
			this->RXCHARISCOMMA1_A0_B = RXCHARISCOMMA1_A0_B; // net ID: RXCHARISCOMMA1 lsb: 0  msb: 3 OUTPUT
			this->RXCHARISK0_A3_B = RXCHARISK0_A3_B; // net ID: RXCHARISK0 lsb: 0  msb: 3 OUTPUT
			this->RXCHARISK0_A2_B = RXCHARISK0_A2_B; // net ID: RXCHARISK0 lsb: 0  msb: 3 OUTPUT
			this->RXCHARISK0_A1_B = RXCHARISK0_A1_B; // net ID: RXCHARISK0 lsb: 0  msb: 3 OUTPUT
			this->RXCHARISK0_A0_B = RXCHARISK0_A0_B; // net ID: RXCHARISK0 lsb: 0  msb: 3 OUTPUT
			this->RXCHARISK1_A3_B = RXCHARISK1_A3_B; // net ID: RXCHARISK1 lsb: 0  msb: 3 OUTPUT
			this->RXCHARISK1_A2_B = RXCHARISK1_A2_B; // net ID: RXCHARISK1 lsb: 0  msb: 3 OUTPUT
			this->RXCHARISK1_A1_B = RXCHARISK1_A1_B; // net ID: RXCHARISK1 lsb: 0  msb: 3 OUTPUT
			this->RXCHARISK1_A0_B = RXCHARISK1_A0_B; // net ID: RXCHARISK1 lsb: 0  msb: 3 OUTPUT
			this->RXCHBONDO0_A3_B = RXCHBONDO0_A3_B; // net ID: RXCHBONDO0 lsb: 0  msb: 3 OUTPUT
			this->RXCHBONDO0_A2_B = RXCHBONDO0_A2_B; // net ID: RXCHBONDO0 lsb: 0  msb: 3 OUTPUT
			this->RXCHBONDO0_A1_B = RXCHBONDO0_A1_B; // net ID: RXCHBONDO0 lsb: 0  msb: 3 OUTPUT
			this->RXCHBONDO0_A0_B = RXCHBONDO0_A0_B; // net ID: RXCHBONDO0 lsb: 0  msb: 3 OUTPUT
			this->RXCHBONDO1_A3_B = RXCHBONDO1_A3_B; // net ID: RXCHBONDO1 lsb: 0  msb: 3 OUTPUT
			this->RXCHBONDO1_A2_B = RXCHBONDO1_A2_B; // net ID: RXCHBONDO1 lsb: 0  msb: 3 OUTPUT
			this->RXCHBONDO1_A1_B = RXCHBONDO1_A1_B; // net ID: RXCHBONDO1 lsb: 0  msb: 3 OUTPUT
			this->RXCHBONDO1_A0_B = RXCHBONDO1_A0_B; // net ID: RXCHBONDO1 lsb: 0  msb: 3 OUTPUT
			this->RXCLKCORCNT0_A2_B = RXCLKCORCNT0_A2_B; // net ID: RXCLKCORCNT0 lsb: 0  msb: 2 OUTPUT
			this->RXCLKCORCNT0_A1_B = RXCLKCORCNT0_A1_B; // net ID: RXCLKCORCNT0 lsb: 0  msb: 2 OUTPUT
			this->RXCLKCORCNT0_A0_B = RXCLKCORCNT0_A0_B; // net ID: RXCLKCORCNT0 lsb: 0  msb: 2 OUTPUT
			this->RXCLKCORCNT1_A2_B = RXCLKCORCNT1_A2_B; // net ID: RXCLKCORCNT1 lsb: 0  msb: 2 OUTPUT
			this->RXCLKCORCNT1_A1_B = RXCLKCORCNT1_A1_B; // net ID: RXCLKCORCNT1 lsb: 0  msb: 2 OUTPUT
			this->RXCLKCORCNT1_A0_B = RXCLKCORCNT1_A0_B; // net ID: RXCLKCORCNT1 lsb: 0  msb: 2 OUTPUT
			this->RXCOMMADET0_A0_B = RXCOMMADET0_A0_B; // net ID: RXCOMMADET0 lsb: 0  msb: 0 OUTPUT
			this->RXCOMMADET1_A0_B = RXCOMMADET1_A0_B; // net ID: RXCOMMADET1 lsb: 0  msb: 0 OUTPUT
			this->RXDATA0_A31_B = RXDATA0_A31_B; // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
			this->RXDATA0_A30_B = RXDATA0_A30_B; // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
			this->RXDATA0_A29_B = RXDATA0_A29_B; // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
			this->RXDATA0_A28_B = RXDATA0_A28_B; // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
			this->RXDATA0_A27_B = RXDATA0_A27_B; // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
			this->RXDATA0_A26_B = RXDATA0_A26_B; // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
			this->RXDATA0_A25_B = RXDATA0_A25_B; // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
			this->RXDATA0_A24_B = RXDATA0_A24_B; // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
			this->RXDATA0_A23_B = RXDATA0_A23_B; // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
			this->RXDATA0_A22_B = RXDATA0_A22_B; // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
			this->RXDATA0_A21_B = RXDATA0_A21_B; // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
			this->RXDATA0_A20_B = RXDATA0_A20_B; // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
			this->RXDATA0_A19_B = RXDATA0_A19_B; // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
			this->RXDATA0_A18_B = RXDATA0_A18_B; // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
			this->RXDATA0_A17_B = RXDATA0_A17_B; // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
			this->RXDATA0_A16_B = RXDATA0_A16_B; // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
			this->RXDATA0_A15_B = RXDATA0_A15_B; // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
			this->RXDATA0_A14_B = RXDATA0_A14_B; // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
			this->RXDATA0_A13_B = RXDATA0_A13_B; // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
			this->RXDATA0_A12_B = RXDATA0_A12_B; // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
			this->RXDATA0_A11_B = RXDATA0_A11_B; // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
			this->RXDATA0_A10_B = RXDATA0_A10_B; // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
			this->RXDATA0_A9_B = RXDATA0_A9_B; // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
			this->RXDATA0_A8_B = RXDATA0_A8_B; // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
			this->RXDATA0_A7_B = RXDATA0_A7_B; // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
			this->RXDATA0_A6_B = RXDATA0_A6_B; // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
			this->RXDATA0_A5_B = RXDATA0_A5_B; // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
			this->RXDATA0_A4_B = RXDATA0_A4_B; // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
			this->RXDATA0_A3_B = RXDATA0_A3_B; // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
			this->RXDATA0_A2_B = RXDATA0_A2_B; // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
			this->RXDATA0_A1_B = RXDATA0_A1_B; // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
			this->RXDATA0_A0_B = RXDATA0_A0_B; // net ID: RXDATA0 lsb: 0  msb: 31 OUTPUT
			this->RXDATA1_A31_B = RXDATA1_A31_B; // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
			this->RXDATA1_A30_B = RXDATA1_A30_B; // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
			this->RXDATA1_A29_B = RXDATA1_A29_B; // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
			this->RXDATA1_A28_B = RXDATA1_A28_B; // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
			this->RXDATA1_A27_B = RXDATA1_A27_B; // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
			this->RXDATA1_A26_B = RXDATA1_A26_B; // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
			this->RXDATA1_A25_B = RXDATA1_A25_B; // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
			this->RXDATA1_A24_B = RXDATA1_A24_B; // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
			this->RXDATA1_A23_B = RXDATA1_A23_B; // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
			this->RXDATA1_A22_B = RXDATA1_A22_B; // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
			this->RXDATA1_A21_B = RXDATA1_A21_B; // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
			this->RXDATA1_A20_B = RXDATA1_A20_B; // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
			this->RXDATA1_A19_B = RXDATA1_A19_B; // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
			this->RXDATA1_A18_B = RXDATA1_A18_B; // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
			this->RXDATA1_A17_B = RXDATA1_A17_B; // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
			this->RXDATA1_A16_B = RXDATA1_A16_B; // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
			this->RXDATA1_A15_B = RXDATA1_A15_B; // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
			this->RXDATA1_A14_B = RXDATA1_A14_B; // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
			this->RXDATA1_A13_B = RXDATA1_A13_B; // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
			this->RXDATA1_A12_B = RXDATA1_A12_B; // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
			this->RXDATA1_A11_B = RXDATA1_A11_B; // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
			this->RXDATA1_A10_B = RXDATA1_A10_B; // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
			this->RXDATA1_A9_B = RXDATA1_A9_B; // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
			this->RXDATA1_A8_B = RXDATA1_A8_B; // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
			this->RXDATA1_A7_B = RXDATA1_A7_B; // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
			this->RXDATA1_A6_B = RXDATA1_A6_B; // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
			this->RXDATA1_A5_B = RXDATA1_A5_B; // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
			this->RXDATA1_A4_B = RXDATA1_A4_B; // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
			this->RXDATA1_A3_B = RXDATA1_A3_B; // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
			this->RXDATA1_A2_B = RXDATA1_A2_B; // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
			this->RXDATA1_A1_B = RXDATA1_A1_B; // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
			this->RXDATA1_A0_B = RXDATA1_A0_B; // net ID: RXDATA1 lsb: 0  msb: 31 OUTPUT
			this->RXDATAVALID0_A0_B = RXDATAVALID0_A0_B; // net ID: RXDATAVALID0 lsb: 0  msb: 0 OUTPUT
			this->RXDATAVALID1_A0_B = RXDATAVALID1_A0_B; // net ID: RXDATAVALID1 lsb: 0  msb: 0 OUTPUT
			this->RXDISPERR0_A3_B = RXDISPERR0_A3_B; // net ID: RXDISPERR0 lsb: 0  msb: 3 OUTPUT
			this->RXDISPERR0_A2_B = RXDISPERR0_A2_B; // net ID: RXDISPERR0 lsb: 0  msb: 3 OUTPUT
			this->RXDISPERR0_A1_B = RXDISPERR0_A1_B; // net ID: RXDISPERR0 lsb: 0  msb: 3 OUTPUT
			this->RXDISPERR0_A0_B = RXDISPERR0_A0_B; // net ID: RXDISPERR0 lsb: 0  msb: 3 OUTPUT
			this->RXDISPERR1_A3_B = RXDISPERR1_A3_B; // net ID: RXDISPERR1 lsb: 0  msb: 3 OUTPUT
			this->RXDISPERR1_A2_B = RXDISPERR1_A2_B; // net ID: RXDISPERR1 lsb: 0  msb: 3 OUTPUT
			this->RXDISPERR1_A1_B = RXDISPERR1_A1_B; // net ID: RXDISPERR1 lsb: 0  msb: 3 OUTPUT
			this->RXDISPERR1_A0_B = RXDISPERR1_A0_B; // net ID: RXDISPERR1 lsb: 0  msb: 3 OUTPUT
			this->RXELECIDLE0_A0_B = RXELECIDLE0_A0_B; // net ID: RXELECIDLE0 lsb: 0  msb: 0 OUTPUT
			this->RXELECIDLE1_A0_B = RXELECIDLE1_A0_B; // net ID: RXELECIDLE1 lsb: 0  msb: 0 OUTPUT
			this->RXHEADER0_A2_B = RXHEADER0_A2_B; // net ID: RXHEADER0 lsb: 0  msb: 2 OUTPUT
			this->RXHEADER0_A1_B = RXHEADER0_A1_B; // net ID: RXHEADER0 lsb: 0  msb: 2 OUTPUT
			this->RXHEADER0_A0_B = RXHEADER0_A0_B; // net ID: RXHEADER0 lsb: 0  msb: 2 OUTPUT
			this->RXHEADER1_A2_B = RXHEADER1_A2_B; // net ID: RXHEADER1 lsb: 0  msb: 2 OUTPUT
			this->RXHEADER1_A1_B = RXHEADER1_A1_B; // net ID: RXHEADER1 lsb: 0  msb: 2 OUTPUT
			this->RXHEADER1_A0_B = RXHEADER1_A0_B; // net ID: RXHEADER1 lsb: 0  msb: 2 OUTPUT
			this->RXHEADERVALID0_A0_B = RXHEADERVALID0_A0_B; // net ID: RXHEADERVALID0 lsb: 0  msb: 0 OUTPUT
			this->RXHEADERVALID1_A0_B = RXHEADERVALID1_A0_B; // net ID: RXHEADERVALID1 lsb: 0  msb: 0 OUTPUT
			this->RXLOSSOFSYNC0_A1_B = RXLOSSOFSYNC0_A1_B; // net ID: RXLOSSOFSYNC0 lsb: 0  msb: 1 OUTPUT
			this->RXLOSSOFSYNC0_A0_B = RXLOSSOFSYNC0_A0_B; // net ID: RXLOSSOFSYNC0 lsb: 0  msb: 1 OUTPUT
			this->RXLOSSOFSYNC1_A1_B = RXLOSSOFSYNC1_A1_B; // net ID: RXLOSSOFSYNC1 lsb: 0  msb: 1 OUTPUT
			this->RXLOSSOFSYNC1_A0_B = RXLOSSOFSYNC1_A0_B; // net ID: RXLOSSOFSYNC1 lsb: 0  msb: 1 OUTPUT
			this->RXNOTINTABLE0_A3_B = RXNOTINTABLE0_A3_B; // net ID: RXNOTINTABLE0 lsb: 0  msb: 3 OUTPUT
			this->RXNOTINTABLE0_A2_B = RXNOTINTABLE0_A2_B; // net ID: RXNOTINTABLE0 lsb: 0  msb: 3 OUTPUT
			this->RXNOTINTABLE0_A1_B = RXNOTINTABLE0_A1_B; // net ID: RXNOTINTABLE0 lsb: 0  msb: 3 OUTPUT
			this->RXNOTINTABLE0_A0_B = RXNOTINTABLE0_A0_B; // net ID: RXNOTINTABLE0 lsb: 0  msb: 3 OUTPUT
			this->RXNOTINTABLE1_A3_B = RXNOTINTABLE1_A3_B; // net ID: RXNOTINTABLE1 lsb: 0  msb: 3 OUTPUT
			this->RXNOTINTABLE1_A2_B = RXNOTINTABLE1_A2_B; // net ID: RXNOTINTABLE1 lsb: 0  msb: 3 OUTPUT
			this->RXNOTINTABLE1_A1_B = RXNOTINTABLE1_A1_B; // net ID: RXNOTINTABLE1 lsb: 0  msb: 3 OUTPUT
			this->RXNOTINTABLE1_A0_B = RXNOTINTABLE1_A0_B; // net ID: RXNOTINTABLE1 lsb: 0  msb: 3 OUTPUT
			this->RXOVERSAMPLEERR0_A0_B = RXOVERSAMPLEERR0_A0_B; // net ID: RXOVERSAMPLEERR0 lsb: 0  msb: 0 OUTPUT
			this->RXOVERSAMPLEERR1_A0_B = RXOVERSAMPLEERR1_A0_B; // net ID: RXOVERSAMPLEERR1 lsb: 0  msb: 0 OUTPUT
			this->RXPRBSERR0_A0_B = RXPRBSERR0_A0_B; // net ID: RXPRBSERR0 lsb: 0  msb: 0 OUTPUT
			this->RXPRBSERR1_A0_B = RXPRBSERR1_A0_B; // net ID: RXPRBSERR1 lsb: 0  msb: 0 OUTPUT
			this->RXRECCLK0_A0_B = RXRECCLK0_A0_B; // net ID: RXRECCLK0 lsb: 0  msb: 0 OUTPUT
			this->RXRECCLK1_A0_B = RXRECCLK1_A0_B; // net ID: RXRECCLK1 lsb: 0  msb: 0 OUTPUT
			this->RXRUNDISP0_A3_B = RXRUNDISP0_A3_B; // net ID: RXRUNDISP0 lsb: 0  msb: 3 OUTPUT
			this->RXRUNDISP0_A2_B = RXRUNDISP0_A2_B; // net ID: RXRUNDISP0 lsb: 0  msb: 3 OUTPUT
			this->RXRUNDISP0_A1_B = RXRUNDISP0_A1_B; // net ID: RXRUNDISP0 lsb: 0  msb: 3 OUTPUT
			this->RXRUNDISP0_A0_B = RXRUNDISP0_A0_B; // net ID: RXRUNDISP0 lsb: 0  msb: 3 OUTPUT
			this->RXRUNDISP1_A3_B = RXRUNDISP1_A3_B; // net ID: RXRUNDISP1 lsb: 0  msb: 3 OUTPUT
			this->RXRUNDISP1_A2_B = RXRUNDISP1_A2_B; // net ID: RXRUNDISP1 lsb: 0  msb: 3 OUTPUT
			this->RXRUNDISP1_A1_B = RXRUNDISP1_A1_B; // net ID: RXRUNDISP1 lsb: 0  msb: 3 OUTPUT
			this->RXRUNDISP1_A0_B = RXRUNDISP1_A0_B; // net ID: RXRUNDISP1 lsb: 0  msb: 3 OUTPUT
			this->RXSTARTOFSEQ0_A0_B = RXSTARTOFSEQ0_A0_B; // net ID: RXSTARTOFSEQ0 lsb: 0  msb: 0 OUTPUT
			this->RXSTARTOFSEQ1_A0_B = RXSTARTOFSEQ1_A0_B; // net ID: RXSTARTOFSEQ1 lsb: 0  msb: 0 OUTPUT
			this->RXSTATUS0_A2_B = RXSTATUS0_A2_B; // net ID: RXSTATUS0 lsb: 0  msb: 2 OUTPUT
			this->RXSTATUS0_A1_B = RXSTATUS0_A1_B; // net ID: RXSTATUS0 lsb: 0  msb: 2 OUTPUT
			this->RXSTATUS0_A0_B = RXSTATUS0_A0_B; // net ID: RXSTATUS0 lsb: 0  msb: 2 OUTPUT
			this->RXSTATUS1_A2_B = RXSTATUS1_A2_B; // net ID: RXSTATUS1 lsb: 0  msb: 2 OUTPUT
			this->RXSTATUS1_A1_B = RXSTATUS1_A1_B; // net ID: RXSTATUS1 lsb: 0  msb: 2 OUTPUT
			this->RXSTATUS1_A0_B = RXSTATUS1_A0_B; // net ID: RXSTATUS1 lsb: 0  msb: 2 OUTPUT
			this->RXVALID0_A0_B = RXVALID0_A0_B; // net ID: RXVALID0 lsb: 0  msb: 0 OUTPUT
			this->RXVALID1_A0_B = RXVALID1_A0_B; // net ID: RXVALID1 lsb: 0  msb: 0 OUTPUT
			this->TXBUFSTATUS0_A1_B = TXBUFSTATUS0_A1_B; // net ID: TXBUFSTATUS0 lsb: 0  msb: 1 OUTPUT
			this->TXBUFSTATUS0_A0_B = TXBUFSTATUS0_A0_B; // net ID: TXBUFSTATUS0 lsb: 0  msb: 1 OUTPUT
			this->TXBUFSTATUS1_A1_B = TXBUFSTATUS1_A1_B; // net ID: TXBUFSTATUS1 lsb: 0  msb: 1 OUTPUT
			this->TXBUFSTATUS1_A0_B = TXBUFSTATUS1_A0_B; // net ID: TXBUFSTATUS1 lsb: 0  msb: 1 OUTPUT
			this->TXGEARBOXREADY0_A0_B = TXGEARBOXREADY0_A0_B; // net ID: TXGEARBOXREADY0 lsb: 0  msb: 0 OUTPUT
			this->TXGEARBOXREADY1_A0_B = TXGEARBOXREADY1_A0_B; // net ID: TXGEARBOXREADY1 lsb: 0  msb: 0 OUTPUT
			this->TXKERR0_A3_B = TXKERR0_A3_B; // net ID: TXKERR0 lsb: 0  msb: 3 OUTPUT
			this->TXKERR0_A2_B = TXKERR0_A2_B; // net ID: TXKERR0 lsb: 0  msb: 3 OUTPUT
			this->TXKERR0_A1_B = TXKERR0_A1_B; // net ID: TXKERR0 lsb: 0  msb: 3 OUTPUT
			this->TXKERR0_A0_B = TXKERR0_A0_B; // net ID: TXKERR0 lsb: 0  msb: 3 OUTPUT
			this->TXKERR1_A3_B = TXKERR1_A3_B; // net ID: TXKERR1 lsb: 0  msb: 3 OUTPUT
			this->TXKERR1_A2_B = TXKERR1_A2_B; // net ID: TXKERR1 lsb: 0  msb: 3 OUTPUT
			this->TXKERR1_A1_B = TXKERR1_A1_B; // net ID: TXKERR1 lsb: 0  msb: 3 OUTPUT
			this->TXKERR1_A0_B = TXKERR1_A0_B; // net ID: TXKERR1 lsb: 0  msb: 3 OUTPUT
			this->TXN0_A0_B = TXN0_A0_B; // net ID: TXN0 lsb: 0  msb: 0 OUTPUT
			this->TXN1_A0_B = TXN1_A0_B; // net ID: TXN1 lsb: 0  msb: 0 OUTPUT
			this->TXOUTCLK0_A0_B = TXOUTCLK0_A0_B; // net ID: TXOUTCLK0 lsb: 0  msb: 0 OUTPUT
			this->TXOUTCLK1_A0_B = TXOUTCLK1_A0_B; // net ID: TXOUTCLK1 lsb: 0  msb: 0 OUTPUT
			this->TXP0_A0_B = TXP0_A0_B; // net ID: TXP0 lsb: 0  msb: 0 OUTPUT
			this->TXP1_A0_B = TXP1_A0_B; // net ID: TXP1 lsb: 0  msb: 0 OUTPUT
			this->TXRUNDISP0_A3_B = TXRUNDISP0_A3_B; // net ID: TXRUNDISP0 lsb: 0  msb: 3 OUTPUT
			this->TXRUNDISP0_A2_B = TXRUNDISP0_A2_B; // net ID: TXRUNDISP0 lsb: 0  msb: 3 OUTPUT
			this->TXRUNDISP0_A1_B = TXRUNDISP0_A1_B; // net ID: TXRUNDISP0 lsb: 0  msb: 3 OUTPUT
			this->TXRUNDISP0_A0_B = TXRUNDISP0_A0_B; // net ID: TXRUNDISP0 lsb: 0  msb: 3 OUTPUT
			this->TXRUNDISP1_A3_B = TXRUNDISP1_A3_B; // net ID: TXRUNDISP1 lsb: 0  msb: 3 OUTPUT
			this->TXRUNDISP1_A2_B = TXRUNDISP1_A2_B; // net ID: TXRUNDISP1 lsb: 0  msb: 3 OUTPUT
			this->TXRUNDISP1_A1_B = TXRUNDISP1_A1_B; // net ID: TXRUNDISP1 lsb: 0  msb: 3 OUTPUT
			this->TXRUNDISP1_A0_B = TXRUNDISP1_A0_B; // net ID: TXRUNDISP1 lsb: 0  msb: 3 OUTPUT
			this->CLKIN_A0_B = CLKIN_A0_B; // net ID: CLKIN lsb: 0  msb: 0 INPUT
			this->DADDR_A6_B = DADDR_A6_B; // net ID: DADDR lsb: 0  msb: 6 INPUT
			this->DADDR_A5_B = DADDR_A5_B; // net ID: DADDR lsb: 0  msb: 6 INPUT
			this->DADDR_A4_B = DADDR_A4_B; // net ID: DADDR lsb: 0  msb: 6 INPUT
			this->DADDR_A3_B = DADDR_A3_B; // net ID: DADDR lsb: 0  msb: 6 INPUT
			this->DADDR_A2_B = DADDR_A2_B; // net ID: DADDR lsb: 0  msb: 6 INPUT
			this->DADDR_A1_B = DADDR_A1_B; // net ID: DADDR lsb: 0  msb: 6 INPUT
			this->DADDR_A0_B = DADDR_A0_B; // net ID: DADDR lsb: 0  msb: 6 INPUT
			this->DCLK_A0_B = DCLK_A0_B; // net ID: DCLK lsb: 0  msb: 0 INPUT
			this->DEN_A0_B = DEN_A0_B; // net ID: DEN lsb: 0  msb: 0 INPUT
			this->DFECLKDLYADJ0_A5_B = DFECLKDLYADJ0_A5_B; // net ID: DFECLKDLYADJ0 lsb: 0  msb: 5 INPUT
			this->DFECLKDLYADJ0_A4_B = DFECLKDLYADJ0_A4_B; // net ID: DFECLKDLYADJ0 lsb: 0  msb: 5 INPUT
			this->DFECLKDLYADJ0_A3_B = DFECLKDLYADJ0_A3_B; // net ID: DFECLKDLYADJ0 lsb: 0  msb: 5 INPUT
			this->DFECLKDLYADJ0_A2_B = DFECLKDLYADJ0_A2_B; // net ID: DFECLKDLYADJ0 lsb: 0  msb: 5 INPUT
			this->DFECLKDLYADJ0_A1_B = DFECLKDLYADJ0_A1_B; // net ID: DFECLKDLYADJ0 lsb: 0  msb: 5 INPUT
			this->DFECLKDLYADJ0_A0_B = DFECLKDLYADJ0_A0_B; // net ID: DFECLKDLYADJ0 lsb: 0  msb: 5 INPUT
			this->DFECLKDLYADJ1_A5_B = DFECLKDLYADJ1_A5_B; // net ID: DFECLKDLYADJ1 lsb: 0  msb: 5 INPUT
			this->DFECLKDLYADJ1_A4_B = DFECLKDLYADJ1_A4_B; // net ID: DFECLKDLYADJ1 lsb: 0  msb: 5 INPUT
			this->DFECLKDLYADJ1_A3_B = DFECLKDLYADJ1_A3_B; // net ID: DFECLKDLYADJ1 lsb: 0  msb: 5 INPUT
			this->DFECLKDLYADJ1_A2_B = DFECLKDLYADJ1_A2_B; // net ID: DFECLKDLYADJ1 lsb: 0  msb: 5 INPUT
			this->DFECLKDLYADJ1_A1_B = DFECLKDLYADJ1_A1_B; // net ID: DFECLKDLYADJ1 lsb: 0  msb: 5 INPUT
			this->DFECLKDLYADJ1_A0_B = DFECLKDLYADJ1_A0_B; // net ID: DFECLKDLYADJ1 lsb: 0  msb: 5 INPUT
			this->DFETAP10_A4_B = DFETAP10_A4_B; // net ID: DFETAP10 lsb: 0  msb: 4 INPUT
			this->DFETAP10_A3_B = DFETAP10_A3_B; // net ID: DFETAP10 lsb: 0  msb: 4 INPUT
			this->DFETAP10_A2_B = DFETAP10_A2_B; // net ID: DFETAP10 lsb: 0  msb: 4 INPUT
			this->DFETAP10_A1_B = DFETAP10_A1_B; // net ID: DFETAP10 lsb: 0  msb: 4 INPUT
			this->DFETAP10_A0_B = DFETAP10_A0_B; // net ID: DFETAP10 lsb: 0  msb: 4 INPUT
			this->DFETAP11_A4_B = DFETAP11_A4_B; // net ID: DFETAP11 lsb: 0  msb: 4 INPUT
			this->DFETAP11_A3_B = DFETAP11_A3_B; // net ID: DFETAP11 lsb: 0  msb: 4 INPUT
			this->DFETAP11_A2_B = DFETAP11_A2_B; // net ID: DFETAP11 lsb: 0  msb: 4 INPUT
			this->DFETAP11_A1_B = DFETAP11_A1_B; // net ID: DFETAP11 lsb: 0  msb: 4 INPUT
			this->DFETAP11_A0_B = DFETAP11_A0_B; // net ID: DFETAP11 lsb: 0  msb: 4 INPUT
			this->DFETAP20_A4_B = DFETAP20_A4_B; // net ID: DFETAP20 lsb: 0  msb: 4 INPUT
			this->DFETAP20_A3_B = DFETAP20_A3_B; // net ID: DFETAP20 lsb: 0  msb: 4 INPUT
			this->DFETAP20_A2_B = DFETAP20_A2_B; // net ID: DFETAP20 lsb: 0  msb: 4 INPUT
			this->DFETAP20_A1_B = DFETAP20_A1_B; // net ID: DFETAP20 lsb: 0  msb: 4 INPUT
			this->DFETAP20_A0_B = DFETAP20_A0_B; // net ID: DFETAP20 lsb: 0  msb: 4 INPUT
			this->DFETAP21_A4_B = DFETAP21_A4_B; // net ID: DFETAP21 lsb: 0  msb: 4 INPUT
			this->DFETAP21_A3_B = DFETAP21_A3_B; // net ID: DFETAP21 lsb: 0  msb: 4 INPUT
			this->DFETAP21_A2_B = DFETAP21_A2_B; // net ID: DFETAP21 lsb: 0  msb: 4 INPUT
			this->DFETAP21_A1_B = DFETAP21_A1_B; // net ID: DFETAP21 lsb: 0  msb: 4 INPUT
			this->DFETAP21_A0_B = DFETAP21_A0_B; // net ID: DFETAP21 lsb: 0  msb: 4 INPUT
			this->DFETAP30_A3_B = DFETAP30_A3_B; // net ID: DFETAP30 lsb: 0  msb: 3 INPUT
			this->DFETAP30_A2_B = DFETAP30_A2_B; // net ID: DFETAP30 lsb: 0  msb: 3 INPUT
			this->DFETAP30_A1_B = DFETAP30_A1_B; // net ID: DFETAP30 lsb: 0  msb: 3 INPUT
			this->DFETAP30_A0_B = DFETAP30_A0_B; // net ID: DFETAP30 lsb: 0  msb: 3 INPUT
			this->DFETAP31_A3_B = DFETAP31_A3_B; // net ID: DFETAP31 lsb: 0  msb: 3 INPUT
			this->DFETAP31_A2_B = DFETAP31_A2_B; // net ID: DFETAP31 lsb: 0  msb: 3 INPUT
			this->DFETAP31_A1_B = DFETAP31_A1_B; // net ID: DFETAP31 lsb: 0  msb: 3 INPUT
			this->DFETAP31_A0_B = DFETAP31_A0_B; // net ID: DFETAP31 lsb: 0  msb: 3 INPUT
			this->DFETAP40_A3_B = DFETAP40_A3_B; // net ID: DFETAP40 lsb: 0  msb: 3 INPUT
			this->DFETAP40_A2_B = DFETAP40_A2_B; // net ID: DFETAP40 lsb: 0  msb: 3 INPUT
			this->DFETAP40_A1_B = DFETAP40_A1_B; // net ID: DFETAP40 lsb: 0  msb: 3 INPUT
			this->DFETAP40_A0_B = DFETAP40_A0_B; // net ID: DFETAP40 lsb: 0  msb: 3 INPUT
			this->DFETAP41_A3_B = DFETAP41_A3_B; // net ID: DFETAP41 lsb: 0  msb: 3 INPUT
			this->DFETAP41_A2_B = DFETAP41_A2_B; // net ID: DFETAP41 lsb: 0  msb: 3 INPUT
			this->DFETAP41_A1_B = DFETAP41_A1_B; // net ID: DFETAP41 lsb: 0  msb: 3 INPUT
			this->DFETAP41_A0_B = DFETAP41_A0_B; // net ID: DFETAP41 lsb: 0  msb: 3 INPUT
			this->DI_A15_B = DI_A15_B; // net ID: DI lsb: 0  msb: 15 INPUT
			this->DI_A14_B = DI_A14_B; // net ID: DI lsb: 0  msb: 15 INPUT
			this->DI_A13_B = DI_A13_B; // net ID: DI lsb: 0  msb: 15 INPUT
			this->DI_A12_B = DI_A12_B; // net ID: DI lsb: 0  msb: 15 INPUT
			this->DI_A11_B = DI_A11_B; // net ID: DI lsb: 0  msb: 15 INPUT
			this->DI_A10_B = DI_A10_B; // net ID: DI lsb: 0  msb: 15 INPUT
			this->DI_A9_B = DI_A9_B; // net ID: DI lsb: 0  msb: 15 INPUT
			this->DI_A8_B = DI_A8_B; // net ID: DI lsb: 0  msb: 15 INPUT
			this->DI_A7_B = DI_A7_B; // net ID: DI lsb: 0  msb: 15 INPUT
			this->DI_A6_B = DI_A6_B; // net ID: DI lsb: 0  msb: 15 INPUT
			this->DI_A5_B = DI_A5_B; // net ID: DI lsb: 0  msb: 15 INPUT
			this->DI_A4_B = DI_A4_B; // net ID: DI lsb: 0  msb: 15 INPUT
			this->DI_A3_B = DI_A3_B; // net ID: DI lsb: 0  msb: 15 INPUT
			this->DI_A2_B = DI_A2_B; // net ID: DI lsb: 0  msb: 15 INPUT
			this->DI_A1_B = DI_A1_B; // net ID: DI lsb: 0  msb: 15 INPUT
			this->DI_A0_B = DI_A0_B; // net ID: DI lsb: 0  msb: 15 INPUT
			this->DWE_A0_B = DWE_A0_B; // net ID: DWE lsb: 0  msb: 0 INPUT
			this->GTXRESET_A0_B = GTXRESET_A0_B; // net ID: GTXRESET lsb: 0  msb: 0 INPUT
			this->GTXTEST_A13_B = GTXTEST_A13_B; // net ID: GTXTEST lsb: 0  msb: 13 INPUT
			this->GTXTEST_A12_B = GTXTEST_A12_B; // net ID: GTXTEST lsb: 0  msb: 13 INPUT
			this->GTXTEST_A11_B = GTXTEST_A11_B; // net ID: GTXTEST lsb: 0  msb: 13 INPUT
			this->GTXTEST_A10_B = GTXTEST_A10_B; // net ID: GTXTEST lsb: 0  msb: 13 INPUT
			this->GTXTEST_A9_B = GTXTEST_A9_B; // net ID: GTXTEST lsb: 0  msb: 13 INPUT
			this->GTXTEST_A8_B = GTXTEST_A8_B; // net ID: GTXTEST lsb: 0  msb: 13 INPUT
			this->GTXTEST_A7_B = GTXTEST_A7_B; // net ID: GTXTEST lsb: 0  msb: 13 INPUT
			this->GTXTEST_A6_B = GTXTEST_A6_B; // net ID: GTXTEST lsb: 0  msb: 13 INPUT
			this->GTXTEST_A5_B = GTXTEST_A5_B; // net ID: GTXTEST lsb: 0  msb: 13 INPUT
			this->GTXTEST_A4_B = GTXTEST_A4_B; // net ID: GTXTEST lsb: 0  msb: 13 INPUT
			this->GTXTEST_A3_B = GTXTEST_A3_B; // net ID: GTXTEST lsb: 0  msb: 13 INPUT
			this->GTXTEST_A2_B = GTXTEST_A2_B; // net ID: GTXTEST lsb: 0  msb: 13 INPUT
			this->GTXTEST_A1_B = GTXTEST_A1_B; // net ID: GTXTEST lsb: 0  msb: 13 INPUT
			this->GTXTEST_A0_B = GTXTEST_A0_B; // net ID: GTXTEST lsb: 0  msb: 13 INPUT
			this->INTDATAWIDTH_A0_B = INTDATAWIDTH_A0_B; // net ID: INTDATAWIDTH lsb: 0  msb: 0 INPUT
			this->LOOPBACK0_A2_B = LOOPBACK0_A2_B; // net ID: LOOPBACK0 lsb: 0  msb: 2 INPUT
			this->LOOPBACK0_A1_B = LOOPBACK0_A1_B; // net ID: LOOPBACK0 lsb: 0  msb: 2 INPUT
			this->LOOPBACK0_A0_B = LOOPBACK0_A0_B; // net ID: LOOPBACK0 lsb: 0  msb: 2 INPUT
			this->LOOPBACK1_A2_B = LOOPBACK1_A2_B; // net ID: LOOPBACK1 lsb: 0  msb: 2 INPUT
			this->LOOPBACK1_A1_B = LOOPBACK1_A1_B; // net ID: LOOPBACK1 lsb: 0  msb: 2 INPUT
			this->LOOPBACK1_A0_B = LOOPBACK1_A0_B; // net ID: LOOPBACK1 lsb: 0  msb: 2 INPUT
			this->PLLLKDETEN_A0_B = PLLLKDETEN_A0_B; // net ID: PLLLKDETEN lsb: 0  msb: 0 INPUT
			this->PLLPOWERDOWN_A0_B = PLLPOWERDOWN_A0_B; // net ID: PLLPOWERDOWN lsb: 0  msb: 0 INPUT
			this->PRBSCNTRESET0_A0_B = PRBSCNTRESET0_A0_B; // net ID: PRBSCNTRESET0 lsb: 0  msb: 0 INPUT
			this->PRBSCNTRESET1_A0_B = PRBSCNTRESET1_A0_B; // net ID: PRBSCNTRESET1 lsb: 0  msb: 0 INPUT
			this->REFCLKPWRDNB_A0_B = REFCLKPWRDNB_A0_B; // net ID: REFCLKPWRDNB lsb: 0  msb: 0 INPUT
			this->RXBUFRESET0_A0_B = RXBUFRESET0_A0_B; // net ID: RXBUFRESET0 lsb: 0  msb: 0 INPUT
			this->RXBUFRESET1_A0_B = RXBUFRESET1_A0_B; // net ID: RXBUFRESET1 lsb: 0  msb: 0 INPUT
			this->RXCDRRESET0_A0_B = RXCDRRESET0_A0_B; // net ID: RXCDRRESET0 lsb: 0  msb: 0 INPUT
			this->RXCDRRESET1_A0_B = RXCDRRESET1_A0_B; // net ID: RXCDRRESET1 lsb: 0  msb: 0 INPUT
			this->RXCHBONDI0_A3_B = RXCHBONDI0_A3_B; // net ID: RXCHBONDI0 lsb: 0  msb: 3 INPUT
			this->RXCHBONDI0_A2_B = RXCHBONDI0_A2_B; // net ID: RXCHBONDI0 lsb: 0  msb: 3 INPUT
			this->RXCHBONDI0_A1_B = RXCHBONDI0_A1_B; // net ID: RXCHBONDI0 lsb: 0  msb: 3 INPUT
			this->RXCHBONDI0_A0_B = RXCHBONDI0_A0_B; // net ID: RXCHBONDI0 lsb: 0  msb: 3 INPUT
			this->RXCHBONDI1_A3_B = RXCHBONDI1_A3_B; // net ID: RXCHBONDI1 lsb: 0  msb: 3 INPUT
			this->RXCHBONDI1_A2_B = RXCHBONDI1_A2_B; // net ID: RXCHBONDI1 lsb: 0  msb: 3 INPUT
			this->RXCHBONDI1_A1_B = RXCHBONDI1_A1_B; // net ID: RXCHBONDI1 lsb: 0  msb: 3 INPUT
			this->RXCHBONDI1_A0_B = RXCHBONDI1_A0_B; // net ID: RXCHBONDI1 lsb: 0  msb: 3 INPUT
			this->RXCOMMADETUSE0_A0_B = RXCOMMADETUSE0_A0_B; // net ID: RXCOMMADETUSE0 lsb: 0  msb: 0 INPUT
			this->RXCOMMADETUSE1_A0_B = RXCOMMADETUSE1_A0_B; // net ID: RXCOMMADETUSE1 lsb: 0  msb: 0 INPUT
			this->RXDATAWIDTH0_A1_B = RXDATAWIDTH0_A1_B; // net ID: RXDATAWIDTH0 lsb: 0  msb: 1 INPUT
			this->RXDATAWIDTH0_A0_B = RXDATAWIDTH0_A0_B; // net ID: RXDATAWIDTH0 lsb: 0  msb: 1 INPUT
			this->RXDATAWIDTH1_A1_B = RXDATAWIDTH1_A1_B; // net ID: RXDATAWIDTH1 lsb: 0  msb: 1 INPUT
			this->RXDATAWIDTH1_A0_B = RXDATAWIDTH1_A0_B; // net ID: RXDATAWIDTH1 lsb: 0  msb: 1 INPUT
			this->RXDEC8B10BUSE0_A0_B = RXDEC8B10BUSE0_A0_B; // net ID: RXDEC8B10BUSE0 lsb: 0  msb: 0 INPUT
			this->RXDEC8B10BUSE1_A0_B = RXDEC8B10BUSE1_A0_B; // net ID: RXDEC8B10BUSE1 lsb: 0  msb: 0 INPUT
			this->RXENCHANSYNC0_A0_B = RXENCHANSYNC0_A0_B; // net ID: RXENCHANSYNC0 lsb: 0  msb: 0 INPUT
			this->RXENCHANSYNC1_A0_B = RXENCHANSYNC1_A0_B; // net ID: RXENCHANSYNC1 lsb: 0  msb: 0 INPUT
			this->RXENEQB0_A0_B = RXENEQB0_A0_B; // net ID: RXENEQB0 lsb: 0  msb: 0 INPUT
			this->RXENEQB1_A0_B = RXENEQB1_A0_B; // net ID: RXENEQB1 lsb: 0  msb: 0 INPUT
			this->RXENMCOMMAALIGN0_A0_B = RXENMCOMMAALIGN0_A0_B; // net ID: RXENMCOMMAALIGN0 lsb: 0  msb: 0 INPUT
			this->RXENMCOMMAALIGN1_A0_B = RXENMCOMMAALIGN1_A0_B; // net ID: RXENMCOMMAALIGN1 lsb: 0  msb: 0 INPUT
			this->RXENPCOMMAALIGN0_A0_B = RXENPCOMMAALIGN0_A0_B; // net ID: RXENPCOMMAALIGN0 lsb: 0  msb: 0 INPUT
			this->RXENPCOMMAALIGN1_A0_B = RXENPCOMMAALIGN1_A0_B; // net ID: RXENPCOMMAALIGN1 lsb: 0  msb: 0 INPUT
			this->RXENPMAPHASEALIGN0_A0_B = RXENPMAPHASEALIGN0_A0_B; // net ID: RXENPMAPHASEALIGN0 lsb: 0  msb: 0 INPUT
			this->RXENPMAPHASEALIGN1_A0_B = RXENPMAPHASEALIGN1_A0_B; // net ID: RXENPMAPHASEALIGN1 lsb: 0  msb: 0 INPUT
			this->RXENPRBSTST0_A1_B = RXENPRBSTST0_A1_B; // net ID: RXENPRBSTST0 lsb: 0  msb: 1 INPUT
			this->RXENPRBSTST0_A0_B = RXENPRBSTST0_A0_B; // net ID: RXENPRBSTST0 lsb: 0  msb: 1 INPUT
			this->RXENPRBSTST1_A1_B = RXENPRBSTST1_A1_B; // net ID: RXENPRBSTST1 lsb: 0  msb: 1 INPUT
			this->RXENPRBSTST1_A0_B = RXENPRBSTST1_A0_B; // net ID: RXENPRBSTST1 lsb: 0  msb: 1 INPUT
			this->RXENSAMPLEALIGN0_A0_B = RXENSAMPLEALIGN0_A0_B; // net ID: RXENSAMPLEALIGN0 lsb: 0  msb: 0 INPUT
			this->RXENSAMPLEALIGN1_A0_B = RXENSAMPLEALIGN1_A0_B; // net ID: RXENSAMPLEALIGN1 lsb: 0  msb: 0 INPUT
			this->RXEQMIX0_A1_B = RXEQMIX0_A1_B; // net ID: RXEQMIX0 lsb: 0  msb: 1 INPUT
			this->RXEQMIX0_A0_B = RXEQMIX0_A0_B; // net ID: RXEQMIX0 lsb: 0  msb: 1 INPUT
			this->RXEQMIX1_A1_B = RXEQMIX1_A1_B; // net ID: RXEQMIX1 lsb: 0  msb: 1 INPUT
			this->RXEQMIX1_A0_B = RXEQMIX1_A0_B; // net ID: RXEQMIX1 lsb: 0  msb: 1 INPUT
			this->RXEQPOLE0_A3_B = RXEQPOLE0_A3_B; // net ID: RXEQPOLE0 lsb: 0  msb: 3 INPUT
			this->RXEQPOLE0_A2_B = RXEQPOLE0_A2_B; // net ID: RXEQPOLE0 lsb: 0  msb: 3 INPUT
			this->RXEQPOLE0_A1_B = RXEQPOLE0_A1_B; // net ID: RXEQPOLE0 lsb: 0  msb: 3 INPUT
			this->RXEQPOLE0_A0_B = RXEQPOLE0_A0_B; // net ID: RXEQPOLE0 lsb: 0  msb: 3 INPUT
			this->RXEQPOLE1_A3_B = RXEQPOLE1_A3_B; // net ID: RXEQPOLE1 lsb: 0  msb: 3 INPUT
			this->RXEQPOLE1_A2_B = RXEQPOLE1_A2_B; // net ID: RXEQPOLE1 lsb: 0  msb: 3 INPUT
			this->RXEQPOLE1_A1_B = RXEQPOLE1_A1_B; // net ID: RXEQPOLE1 lsb: 0  msb: 3 INPUT
			this->RXEQPOLE1_A0_B = RXEQPOLE1_A0_B; // net ID: RXEQPOLE1 lsb: 0  msb: 3 INPUT
			this->RXGEARBOXSLIP0_A0_B = RXGEARBOXSLIP0_A0_B; // net ID: RXGEARBOXSLIP0 lsb: 0  msb: 0 INPUT
			this->RXGEARBOXSLIP1_A0_B = RXGEARBOXSLIP1_A0_B; // net ID: RXGEARBOXSLIP1 lsb: 0  msb: 0 INPUT
			this->RXN0_A0_B = RXN0_A0_B; // net ID: RXN0 lsb: 0  msb: 0 INPUT
			this->RXN1_A0_B = RXN1_A0_B; // net ID: RXN1 lsb: 0  msb: 0 INPUT
			this->RXP0_A0_B = RXP0_A0_B; // net ID: RXP0 lsb: 0  msb: 0 INPUT
			this->RXP1_A0_B = RXP1_A0_B; // net ID: RXP1 lsb: 0  msb: 0 INPUT
			this->RXPMASETPHASE0_A0_B = RXPMASETPHASE0_A0_B; // net ID: RXPMASETPHASE0 lsb: 0  msb: 0 INPUT
			this->RXPMASETPHASE1_A0_B = RXPMASETPHASE1_A0_B; // net ID: RXPMASETPHASE1 lsb: 0  msb: 0 INPUT
			this->RXPOLARITY0_A0_B = RXPOLARITY0_A0_B; // net ID: RXPOLARITY0 lsb: 0  msb: 0 INPUT
			this->RXPOLARITY1_A0_B = RXPOLARITY1_A0_B; // net ID: RXPOLARITY1 lsb: 0  msb: 0 INPUT
			this->RXPOWERDOWN0_A1_B = RXPOWERDOWN0_A1_B; // net ID: RXPOWERDOWN0 lsb: 0  msb: 1 INPUT
			this->RXPOWERDOWN0_A0_B = RXPOWERDOWN0_A0_B; // net ID: RXPOWERDOWN0 lsb: 0  msb: 1 INPUT
			this->RXPOWERDOWN1_A1_B = RXPOWERDOWN1_A1_B; // net ID: RXPOWERDOWN1 lsb: 0  msb: 1 INPUT
			this->RXPOWERDOWN1_A0_B = RXPOWERDOWN1_A0_B; // net ID: RXPOWERDOWN1 lsb: 0  msb: 1 INPUT
			this->RXRESET0_A0_B = RXRESET0_A0_B; // net ID: RXRESET0 lsb: 0  msb: 0 INPUT
			this->RXRESET1_A0_B = RXRESET1_A0_B; // net ID: RXRESET1 lsb: 0  msb: 0 INPUT
			this->RXSLIDE0_A0_B = RXSLIDE0_A0_B; // net ID: RXSLIDE0 lsb: 0  msb: 0 INPUT
			this->RXSLIDE1_A0_B = RXSLIDE1_A0_B; // net ID: RXSLIDE1 lsb: 0  msb: 0 INPUT
			this->RXUSRCLK0_A0_B = RXUSRCLK0_A0_B; // net ID: RXUSRCLK0 lsb: 0  msb: 0 INPUT
			this->RXUSRCLK1_A0_B = RXUSRCLK1_A0_B; // net ID: RXUSRCLK1 lsb: 0  msb: 0 INPUT
			this->RXUSRCLK20_A0_B = RXUSRCLK20_A0_B; // net ID: RXUSRCLK20 lsb: 0  msb: 0 INPUT
			this->RXUSRCLK21_A0_B = RXUSRCLK21_A0_B; // net ID: RXUSRCLK21 lsb: 0  msb: 0 INPUT
			this->TXBUFDIFFCTRL0_A2_B = TXBUFDIFFCTRL0_A2_B; // net ID: TXBUFDIFFCTRL0 lsb: 0  msb: 2 INPUT
			this->TXBUFDIFFCTRL0_A1_B = TXBUFDIFFCTRL0_A1_B; // net ID: TXBUFDIFFCTRL0 lsb: 0  msb: 2 INPUT
			this->TXBUFDIFFCTRL0_A0_B = TXBUFDIFFCTRL0_A0_B; // net ID: TXBUFDIFFCTRL0 lsb: 0  msb: 2 INPUT
			this->TXBUFDIFFCTRL1_A2_B = TXBUFDIFFCTRL1_A2_B; // net ID: TXBUFDIFFCTRL1 lsb: 0  msb: 2 INPUT
			this->TXBUFDIFFCTRL1_A1_B = TXBUFDIFFCTRL1_A1_B; // net ID: TXBUFDIFFCTRL1 lsb: 0  msb: 2 INPUT
			this->TXBUFDIFFCTRL1_A0_B = TXBUFDIFFCTRL1_A0_B; // net ID: TXBUFDIFFCTRL1 lsb: 0  msb: 2 INPUT
			this->TXBYPASS8B10B0_A3_B = TXBYPASS8B10B0_A3_B; // net ID: TXBYPASS8B10B0 lsb: 0  msb: 3 INPUT
			this->TXBYPASS8B10B0_A2_B = TXBYPASS8B10B0_A2_B; // net ID: TXBYPASS8B10B0 lsb: 0  msb: 3 INPUT
			this->TXBYPASS8B10B0_A1_B = TXBYPASS8B10B0_A1_B; // net ID: TXBYPASS8B10B0 lsb: 0  msb: 3 INPUT
			this->TXBYPASS8B10B0_A0_B = TXBYPASS8B10B0_A0_B; // net ID: TXBYPASS8B10B0 lsb: 0  msb: 3 INPUT
			this->TXBYPASS8B10B1_A3_B = TXBYPASS8B10B1_A3_B; // net ID: TXBYPASS8B10B1 lsb: 0  msb: 3 INPUT
			this->TXBYPASS8B10B1_A2_B = TXBYPASS8B10B1_A2_B; // net ID: TXBYPASS8B10B1 lsb: 0  msb: 3 INPUT
			this->TXBYPASS8B10B1_A1_B = TXBYPASS8B10B1_A1_B; // net ID: TXBYPASS8B10B1 lsb: 0  msb: 3 INPUT
			this->TXBYPASS8B10B1_A0_B = TXBYPASS8B10B1_A0_B; // net ID: TXBYPASS8B10B1 lsb: 0  msb: 3 INPUT
			this->TXCHARDISPMODE0_A3_B = TXCHARDISPMODE0_A3_B; // net ID: TXCHARDISPMODE0 lsb: 0  msb: 3 INPUT
			this->TXCHARDISPMODE0_A2_B = TXCHARDISPMODE0_A2_B; // net ID: TXCHARDISPMODE0 lsb: 0  msb: 3 INPUT
			this->TXCHARDISPMODE0_A1_B = TXCHARDISPMODE0_A1_B; // net ID: TXCHARDISPMODE0 lsb: 0  msb: 3 INPUT
			this->TXCHARDISPMODE0_A0_B = TXCHARDISPMODE0_A0_B; // net ID: TXCHARDISPMODE0 lsb: 0  msb: 3 INPUT
			this->TXCHARDISPMODE1_A3_B = TXCHARDISPMODE1_A3_B; // net ID: TXCHARDISPMODE1 lsb: 0  msb: 3 INPUT
			this->TXCHARDISPMODE1_A2_B = TXCHARDISPMODE1_A2_B; // net ID: TXCHARDISPMODE1 lsb: 0  msb: 3 INPUT
			this->TXCHARDISPMODE1_A1_B = TXCHARDISPMODE1_A1_B; // net ID: TXCHARDISPMODE1 lsb: 0  msb: 3 INPUT
			this->TXCHARDISPMODE1_A0_B = TXCHARDISPMODE1_A0_B; // net ID: TXCHARDISPMODE1 lsb: 0  msb: 3 INPUT
			this->TXCHARDISPVAL0_A3_B = TXCHARDISPVAL0_A3_B; // net ID: TXCHARDISPVAL0 lsb: 0  msb: 3 INPUT
			this->TXCHARDISPVAL0_A2_B = TXCHARDISPVAL0_A2_B; // net ID: TXCHARDISPVAL0 lsb: 0  msb: 3 INPUT
			this->TXCHARDISPVAL0_A1_B = TXCHARDISPVAL0_A1_B; // net ID: TXCHARDISPVAL0 lsb: 0  msb: 3 INPUT
			this->TXCHARDISPVAL0_A0_B = TXCHARDISPVAL0_A0_B; // net ID: TXCHARDISPVAL0 lsb: 0  msb: 3 INPUT
			this->TXCHARDISPVAL1_A3_B = TXCHARDISPVAL1_A3_B; // net ID: TXCHARDISPVAL1 lsb: 0  msb: 3 INPUT
			this->TXCHARDISPVAL1_A2_B = TXCHARDISPVAL1_A2_B; // net ID: TXCHARDISPVAL1 lsb: 0  msb: 3 INPUT
			this->TXCHARDISPVAL1_A1_B = TXCHARDISPVAL1_A1_B; // net ID: TXCHARDISPVAL1 lsb: 0  msb: 3 INPUT
			this->TXCHARDISPVAL1_A0_B = TXCHARDISPVAL1_A0_B; // net ID: TXCHARDISPVAL1 lsb: 0  msb: 3 INPUT
			this->TXCHARISK0_A3_B = TXCHARISK0_A3_B; // net ID: TXCHARISK0 lsb: 0  msb: 3 INPUT
			this->TXCHARISK0_A2_B = TXCHARISK0_A2_B; // net ID: TXCHARISK0 lsb: 0  msb: 3 INPUT
			this->TXCHARISK0_A1_B = TXCHARISK0_A1_B; // net ID: TXCHARISK0 lsb: 0  msb: 3 INPUT
			this->TXCHARISK0_A0_B = TXCHARISK0_A0_B; // net ID: TXCHARISK0 lsb: 0  msb: 3 INPUT
			this->TXCHARISK1_A3_B = TXCHARISK1_A3_B; // net ID: TXCHARISK1 lsb: 0  msb: 3 INPUT
			this->TXCHARISK1_A2_B = TXCHARISK1_A2_B; // net ID: TXCHARISK1 lsb: 0  msb: 3 INPUT
			this->TXCHARISK1_A1_B = TXCHARISK1_A1_B; // net ID: TXCHARISK1 lsb: 0  msb: 3 INPUT
			this->TXCHARISK1_A0_B = TXCHARISK1_A0_B; // net ID: TXCHARISK1 lsb: 0  msb: 3 INPUT
			this->TXCOMSTART0_A0_B = TXCOMSTART0_A0_B; // net ID: TXCOMSTART0 lsb: 0  msb: 0 INPUT
			this->TXCOMSTART1_A0_B = TXCOMSTART1_A0_B; // net ID: TXCOMSTART1 lsb: 0  msb: 0 INPUT
			this->TXCOMTYPE0_A0_B = TXCOMTYPE0_A0_B; // net ID: TXCOMTYPE0 lsb: 0  msb: 0 INPUT
			this->TXCOMTYPE1_A0_B = TXCOMTYPE1_A0_B; // net ID: TXCOMTYPE1 lsb: 0  msb: 0 INPUT
			this->TXDATA0_A31_B = TXDATA0_A31_B; // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
			this->TXDATA0_A30_B = TXDATA0_A30_B; // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
			this->TXDATA0_A29_B = TXDATA0_A29_B; // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
			this->TXDATA0_A28_B = TXDATA0_A28_B; // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
			this->TXDATA0_A27_B = TXDATA0_A27_B; // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
			this->TXDATA0_A26_B = TXDATA0_A26_B; // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
			this->TXDATA0_A25_B = TXDATA0_A25_B; // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
			this->TXDATA0_A24_B = TXDATA0_A24_B; // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
			this->TXDATA0_A23_B = TXDATA0_A23_B; // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
			this->TXDATA0_A22_B = TXDATA0_A22_B; // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
			this->TXDATA0_A21_B = TXDATA0_A21_B; // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
			this->TXDATA0_A20_B = TXDATA0_A20_B; // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
			this->TXDATA0_A19_B = TXDATA0_A19_B; // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
			this->TXDATA0_A18_B = TXDATA0_A18_B; // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
			this->TXDATA0_A17_B = TXDATA0_A17_B; // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
			this->TXDATA0_A16_B = TXDATA0_A16_B; // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
			this->TXDATA0_A15_B = TXDATA0_A15_B; // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
			this->TXDATA0_A14_B = TXDATA0_A14_B; // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
			this->TXDATA0_A13_B = TXDATA0_A13_B; // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
			this->TXDATA0_A12_B = TXDATA0_A12_B; // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
			this->TXDATA0_A11_B = TXDATA0_A11_B; // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
			this->TXDATA0_A10_B = TXDATA0_A10_B; // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
			this->TXDATA0_A9_B = TXDATA0_A9_B; // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
			this->TXDATA0_A8_B = TXDATA0_A8_B; // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
			this->TXDATA0_A7_B = TXDATA0_A7_B; // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
			this->TXDATA0_A6_B = TXDATA0_A6_B; // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
			this->TXDATA0_A5_B = TXDATA0_A5_B; // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
			this->TXDATA0_A4_B = TXDATA0_A4_B; // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
			this->TXDATA0_A3_B = TXDATA0_A3_B; // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
			this->TXDATA0_A2_B = TXDATA0_A2_B; // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
			this->TXDATA0_A1_B = TXDATA0_A1_B; // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
			this->TXDATA0_A0_B = TXDATA0_A0_B; // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
			this->TXDATA1_A31_B = TXDATA1_A31_B; // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
			this->TXDATA1_A30_B = TXDATA1_A30_B; // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
			this->TXDATA1_A29_B = TXDATA1_A29_B; // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
			this->TXDATA1_A28_B = TXDATA1_A28_B; // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
			this->TXDATA1_A27_B = TXDATA1_A27_B; // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
			this->TXDATA1_A26_B = TXDATA1_A26_B; // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
			this->TXDATA1_A25_B = TXDATA1_A25_B; // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
			this->TXDATA1_A24_B = TXDATA1_A24_B; // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
			this->TXDATA1_A23_B = TXDATA1_A23_B; // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
			this->TXDATA1_A22_B = TXDATA1_A22_B; // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
			this->TXDATA1_A21_B = TXDATA1_A21_B; // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
			this->TXDATA1_A20_B = TXDATA1_A20_B; // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
			this->TXDATA1_A19_B = TXDATA1_A19_B; // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
			this->TXDATA1_A18_B = TXDATA1_A18_B; // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
			this->TXDATA1_A17_B = TXDATA1_A17_B; // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
			this->TXDATA1_A16_B = TXDATA1_A16_B; // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
			this->TXDATA1_A15_B = TXDATA1_A15_B; // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
			this->TXDATA1_A14_B = TXDATA1_A14_B; // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
			this->TXDATA1_A13_B = TXDATA1_A13_B; // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
			this->TXDATA1_A12_B = TXDATA1_A12_B; // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
			this->TXDATA1_A11_B = TXDATA1_A11_B; // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
			this->TXDATA1_A10_B = TXDATA1_A10_B; // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
			this->TXDATA1_A9_B = TXDATA1_A9_B; // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
			this->TXDATA1_A8_B = TXDATA1_A8_B; // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
			this->TXDATA1_A7_B = TXDATA1_A7_B; // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
			this->TXDATA1_A6_B = TXDATA1_A6_B; // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
			this->TXDATA1_A5_B = TXDATA1_A5_B; // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
			this->TXDATA1_A4_B = TXDATA1_A4_B; // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
			this->TXDATA1_A3_B = TXDATA1_A3_B; // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
			this->TXDATA1_A2_B = TXDATA1_A2_B; // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
			this->TXDATA1_A1_B = TXDATA1_A1_B; // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
			this->TXDATA1_A0_B = TXDATA1_A0_B; // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
			this->TXDATAWIDTH0_A1_B = TXDATAWIDTH0_A1_B; // net ID: TXDATAWIDTH0 lsb: 0  msb: 1 INPUT
			this->TXDATAWIDTH0_A0_B = TXDATAWIDTH0_A0_B; // net ID: TXDATAWIDTH0 lsb: 0  msb: 1 INPUT
			this->TXDATAWIDTH1_A1_B = TXDATAWIDTH1_A1_B; // net ID: TXDATAWIDTH1 lsb: 0  msb: 1 INPUT
			this->TXDATAWIDTH1_A0_B = TXDATAWIDTH1_A0_B; // net ID: TXDATAWIDTH1 lsb: 0  msb: 1 INPUT
			this->TXDETECTRX0_A0_B = TXDETECTRX0_A0_B; // net ID: TXDETECTRX0 lsb: 0  msb: 0 INPUT
			this->TXDETECTRX1_A0_B = TXDETECTRX1_A0_B; // net ID: TXDETECTRX1 lsb: 0  msb: 0 INPUT
			this->TXDIFFCTRL0_A2_B = TXDIFFCTRL0_A2_B; // net ID: TXDIFFCTRL0 lsb: 0  msb: 2 INPUT
			this->TXDIFFCTRL0_A1_B = TXDIFFCTRL0_A1_B; // net ID: TXDIFFCTRL0 lsb: 0  msb: 2 INPUT
			this->TXDIFFCTRL0_A0_B = TXDIFFCTRL0_A0_B; // net ID: TXDIFFCTRL0 lsb: 0  msb: 2 INPUT
			this->TXDIFFCTRL1_A2_B = TXDIFFCTRL1_A2_B; // net ID: TXDIFFCTRL1 lsb: 0  msb: 2 INPUT
			this->TXDIFFCTRL1_A1_B = TXDIFFCTRL1_A1_B; // net ID: TXDIFFCTRL1 lsb: 0  msb: 2 INPUT
			this->TXDIFFCTRL1_A0_B = TXDIFFCTRL1_A0_B; // net ID: TXDIFFCTRL1 lsb: 0  msb: 2 INPUT
			this->TXELECIDLE0_A0_B = TXELECIDLE0_A0_B; // net ID: TXELECIDLE0 lsb: 0  msb: 0 INPUT
			this->TXELECIDLE1_A0_B = TXELECIDLE1_A0_B; // net ID: TXELECIDLE1 lsb: 0  msb: 0 INPUT
			this->TXENC8B10BUSE0_A0_B = TXENC8B10BUSE0_A0_B; // net ID: TXENC8B10BUSE0 lsb: 0  msb: 0 INPUT
			this->TXENC8B10BUSE1_A0_B = TXENC8B10BUSE1_A0_B; // net ID: TXENC8B10BUSE1 lsb: 0  msb: 0 INPUT
			this->TXENPMAPHASEALIGN0_A0_B = TXENPMAPHASEALIGN0_A0_B; // net ID: TXENPMAPHASEALIGN0 lsb: 0  msb: 0 INPUT
			this->TXENPMAPHASEALIGN1_A0_B = TXENPMAPHASEALIGN1_A0_B; // net ID: TXENPMAPHASEALIGN1 lsb: 0  msb: 0 INPUT
			this->TXENPRBSTST0_A1_B = TXENPRBSTST0_A1_B; // net ID: TXENPRBSTST0 lsb: 0  msb: 1 INPUT
			this->TXENPRBSTST0_A0_B = TXENPRBSTST0_A0_B; // net ID: TXENPRBSTST0 lsb: 0  msb: 1 INPUT
			this->TXENPRBSTST1_A1_B = TXENPRBSTST1_A1_B; // net ID: TXENPRBSTST1 lsb: 0  msb: 1 INPUT
			this->TXENPRBSTST1_A0_B = TXENPRBSTST1_A0_B; // net ID: TXENPRBSTST1 lsb: 0  msb: 1 INPUT
			this->TXHEADER0_A2_B = TXHEADER0_A2_B; // net ID: TXHEADER0 lsb: 0  msb: 2 INPUT
			this->TXHEADER0_A1_B = TXHEADER0_A1_B; // net ID: TXHEADER0 lsb: 0  msb: 2 INPUT
			this->TXHEADER0_A0_B = TXHEADER0_A0_B; // net ID: TXHEADER0 lsb: 0  msb: 2 INPUT
			this->TXHEADER1_A2_B = TXHEADER1_A2_B; // net ID: TXHEADER1 lsb: 0  msb: 2 INPUT
			this->TXHEADER1_A1_B = TXHEADER1_A1_B; // net ID: TXHEADER1 lsb: 0  msb: 2 INPUT
			this->TXHEADER1_A0_B = TXHEADER1_A0_B; // net ID: TXHEADER1 lsb: 0  msb: 2 INPUT
			this->TXINHIBIT0_A0_B = TXINHIBIT0_A0_B; // net ID: TXINHIBIT0 lsb: 0  msb: 0 INPUT
			this->TXINHIBIT1_A0_B = TXINHIBIT1_A0_B; // net ID: TXINHIBIT1 lsb: 0  msb: 0 INPUT
			this->TXPMASETPHASE0_A0_B = TXPMASETPHASE0_A0_B; // net ID: TXPMASETPHASE0 lsb: 0  msb: 0 INPUT
			this->TXPMASETPHASE1_A0_B = TXPMASETPHASE1_A0_B; // net ID: TXPMASETPHASE1 lsb: 0  msb: 0 INPUT
			this->TXPOLARITY0_A0_B = TXPOLARITY0_A0_B; // net ID: TXPOLARITY0 lsb: 0  msb: 0 INPUT
			this->TXPOLARITY1_A0_B = TXPOLARITY1_A0_B; // net ID: TXPOLARITY1 lsb: 0  msb: 0 INPUT
			this->TXPOWERDOWN0_A1_B = TXPOWERDOWN0_A1_B; // net ID: TXPOWERDOWN0 lsb: 0  msb: 1 INPUT
			this->TXPOWERDOWN0_A0_B = TXPOWERDOWN0_A0_B; // net ID: TXPOWERDOWN0 lsb: 0  msb: 1 INPUT
			this->TXPOWERDOWN1_A1_B = TXPOWERDOWN1_A1_B; // net ID: TXPOWERDOWN1 lsb: 0  msb: 1 INPUT
			this->TXPOWERDOWN1_A0_B = TXPOWERDOWN1_A0_B; // net ID: TXPOWERDOWN1 lsb: 0  msb: 1 INPUT
			this->TXPREEMPHASIS0_A3_B = TXPREEMPHASIS0_A3_B; // net ID: TXPREEMPHASIS0 lsb: 0  msb: 3 INPUT
			this->TXPREEMPHASIS0_A2_B = TXPREEMPHASIS0_A2_B; // net ID: TXPREEMPHASIS0 lsb: 0  msb: 3 INPUT
			this->TXPREEMPHASIS0_A1_B = TXPREEMPHASIS0_A1_B; // net ID: TXPREEMPHASIS0 lsb: 0  msb: 3 INPUT
			this->TXPREEMPHASIS0_A0_B = TXPREEMPHASIS0_A0_B; // net ID: TXPREEMPHASIS0 lsb: 0  msb: 3 INPUT
			this->TXPREEMPHASIS1_A3_B = TXPREEMPHASIS1_A3_B; // net ID: TXPREEMPHASIS1 lsb: 0  msb: 3 INPUT
			this->TXPREEMPHASIS1_A2_B = TXPREEMPHASIS1_A2_B; // net ID: TXPREEMPHASIS1 lsb: 0  msb: 3 INPUT
			this->TXPREEMPHASIS1_A1_B = TXPREEMPHASIS1_A1_B; // net ID: TXPREEMPHASIS1 lsb: 0  msb: 3 INPUT
			this->TXPREEMPHASIS1_A0_B = TXPREEMPHASIS1_A0_B; // net ID: TXPREEMPHASIS1 lsb: 0  msb: 3 INPUT
			this->TXRESET0_A0_B = TXRESET0_A0_B; // net ID: TXRESET0 lsb: 0  msb: 0 INPUT
			this->TXRESET1_A0_B = TXRESET1_A0_B; // net ID: TXRESET1 lsb: 0  msb: 0 INPUT
			this->TXSEQUENCE0_A6_B = TXSEQUENCE0_A6_B; // net ID: TXSEQUENCE0 lsb: 0  msb: 6 INPUT
			this->TXSEQUENCE0_A5_B = TXSEQUENCE0_A5_B; // net ID: TXSEQUENCE0 lsb: 0  msb: 6 INPUT
			this->TXSEQUENCE0_A4_B = TXSEQUENCE0_A4_B; // net ID: TXSEQUENCE0 lsb: 0  msb: 6 INPUT
			this->TXSEQUENCE0_A3_B = TXSEQUENCE0_A3_B; // net ID: TXSEQUENCE0 lsb: 0  msb: 6 INPUT
			this->TXSEQUENCE0_A2_B = TXSEQUENCE0_A2_B; // net ID: TXSEQUENCE0 lsb: 0  msb: 6 INPUT
			this->TXSEQUENCE0_A1_B = TXSEQUENCE0_A1_B; // net ID: TXSEQUENCE0 lsb: 0  msb: 6 INPUT
			this->TXSEQUENCE0_A0_B = TXSEQUENCE0_A0_B; // net ID: TXSEQUENCE0 lsb: 0  msb: 6 INPUT
			this->TXSEQUENCE1_A6_B = TXSEQUENCE1_A6_B; // net ID: TXSEQUENCE1 lsb: 0  msb: 6 INPUT
			this->TXSEQUENCE1_A5_B = TXSEQUENCE1_A5_B; // net ID: TXSEQUENCE1 lsb: 0  msb: 6 INPUT
			this->TXSEQUENCE1_A4_B = TXSEQUENCE1_A4_B; // net ID: TXSEQUENCE1 lsb: 0  msb: 6 INPUT
			this->TXSEQUENCE1_A3_B = TXSEQUENCE1_A3_B; // net ID: TXSEQUENCE1 lsb: 0  msb: 6 INPUT
			this->TXSEQUENCE1_A2_B = TXSEQUENCE1_A2_B; // net ID: TXSEQUENCE1 lsb: 0  msb: 6 INPUT
			this->TXSEQUENCE1_A1_B = TXSEQUENCE1_A1_B; // net ID: TXSEQUENCE1 lsb: 0  msb: 6 INPUT
			this->TXSEQUENCE1_A0_B = TXSEQUENCE1_A0_B; // net ID: TXSEQUENCE1 lsb: 0  msb: 6 INPUT
			this->TXSTARTSEQ0_A0_B = TXSTARTSEQ0_A0_B; // net ID: TXSTARTSEQ0 lsb: 0  msb: 0 INPUT
			this->TXSTARTSEQ1_A0_B = TXSTARTSEQ1_A0_B; // net ID: TXSTARTSEQ1 lsb: 0  msb: 0 INPUT
			this->TXUSRCLK0_A0_B = TXUSRCLK0_A0_B; // net ID: TXUSRCLK0 lsb: 0  msb: 0 INPUT
			this->TXUSRCLK1_A0_B = TXUSRCLK1_A0_B; // net ID: TXUSRCLK1 lsb: 0  msb: 0 INPUT
			this->TXUSRCLK20_A0_B = TXUSRCLK20_A0_B; // net ID: TXUSRCLK20 lsb: 0  msb: 0 INPUT
			this->TXUSRCLK21_A0_B = TXUSRCLK21_A0_B; // net ID: TXUSRCLK21 lsb: 0  msb: 0 INPUT
			
			register_wait_on_event_nets();
			
		}
		
		void register_wait_on_event_nets(){
		// TODO
		}
		
		void calculate(simtime_t time){
		// TODO
		}
		};
		
}
#endif // X_GTX_DUAL_H
