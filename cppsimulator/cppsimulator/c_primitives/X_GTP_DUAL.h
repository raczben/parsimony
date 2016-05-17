/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_GTP_DUAL_H
#define X_GTP_DUAL_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_GTP_DUAL: public Primitive{

		//Verilog Parameters:
		parameter_string_t LOC;
		parameter_enum_t AC_CAP_DIS_0;
		parameter_enum_t AC_CAP_DIS_1;
		parameter_string_t CHAN_BOND_MODE_0;
		parameter_string_t CHAN_BOND_MODE_1;
		parameter_enum_t CHAN_BOND_SEQ_2_USE_0;
		parameter_enum_t CHAN_BOND_SEQ_2_USE_1;
		parameter_enum_t CLKINDC_B;
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
		parameter_enum_t PLL_SATA_0;
		parameter_enum_t PLL_SATA_1;
		parameter_enum_t RCV_TERM_GND_0;
		parameter_enum_t RCV_TERM_GND_1;
		parameter_enum_t RCV_TERM_MID_0;
		parameter_enum_t RCV_TERM_MID_1;
		parameter_enum_t RCV_TERM_VTTRX_0;
		parameter_enum_t RCV_TERM_VTTRX_1;
		parameter_enum_t RX_BUFFER_USE_0;
		parameter_enum_t RX_BUFFER_USE_1;
		parameter_enum_t RX_DECODE_SEQ_MATCH_0;
		parameter_enum_t RX_DECODE_SEQ_MATCH_1;
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
		parameter_enum_t SIM_RECEIVER_DETECT_PASS0;
		parameter_enum_t SIM_RECEIVER_DETECT_PASS1;
		parameter_enum_t TERMINATION_OVRD;
		parameter_enum_t TX_BUFFER_USE_0;
		parameter_enum_t TX_BUFFER_USE_1;
		parameter_enum_t TX_DIFF_BOOST_0;
		parameter_enum_t TX_DIFF_BOOST_1;
		parameter_string_t TX_XCLK_SEL_0;
		parameter_string_t TX_XCLK_SEL_1;
		parameter_int_t TRANS_TIME_FROM_P2_0;
		parameter_int_t TRANS_TIME_FROM_P2_1;
		parameter_int_t TRANS_TIME_NON_P2_0;
		parameter_int_t TRANS_TIME_NON_P2_1;
		parameter_int_t TRANS_TIME_TO_P2_0;
		parameter_int_t TRANS_TIME_TO_P2_1;
		parameter_int_t PMA_RX_CFG_0;
		parameter_int_t PMA_RX_CFG_1;
		parameter_int_t PMA_CDR_SCAN_0;
		parameter_int_t PMA_CDR_SCAN_1;
		parameter_int_t PCS_COM_CFG;
		parameter_int_t OOBDETECT_THRESHOLD_0;
		parameter_int_t OOBDETECT_THRESHOLD_1;
		parameter_int_t SATA_BURST_VAL_0;
		parameter_int_t SATA_BURST_VAL_1;
		parameter_int_t SATA_IDLE_VAL_0;
		parameter_int_t SATA_IDLE_VAL_1;
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
		parameter_int_t TERMINATION_CTRL;
		parameter_int_t TXRX_INVERT_0;
		parameter_int_t TXRX_INVERT_1;
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
		parameter_int_t MCOMMA_10B_VALUE_0;
		parameter_int_t MCOMMA_10B_VALUE_1;
		parameter_int_t PCOMMA_10B_VALUE_0;
		parameter_int_t PCOMMA_10B_VALUE_1;
		parameter_int_t ALIGN_COMMA_WORD_0;
		parameter_int_t ALIGN_COMMA_WORD_1;
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
		parameter_int_t PLL_TXDIVSEL_COMM_OUT;
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
		parameter_int_t SIM_GTPRESET_SPEEDUP;
		parameter_int_t TERMINATION_IMP_0;
		parameter_int_t TERMINATION_IMP_1;
		parameter_int_t TX_SYNC_FILTERB;
		//Verilog Ports in definition order:
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
		NetFlow* RXCHARISCOMMA0_A1_B; // net ID: RXCHARISCOMMA0 lsb: 0  msb: 1 OUTPUT
		NetFlow* RXCHARISCOMMA0_A0_B; // net ID: RXCHARISCOMMA0 lsb: 0  msb: 1 OUTPUT
		NetFlow* RXCHARISCOMMA1_A1_B; // net ID: RXCHARISCOMMA1 lsb: 0  msb: 1 OUTPUT
		NetFlow* RXCHARISCOMMA1_A0_B; // net ID: RXCHARISCOMMA1 lsb: 0  msb: 1 OUTPUT
		NetFlow* RXCHARISK0_A1_B; // net ID: RXCHARISK0 lsb: 0  msb: 1 OUTPUT
		NetFlow* RXCHARISK0_A0_B; // net ID: RXCHARISK0 lsb: 0  msb: 1 OUTPUT
		NetFlow* RXCHARISK1_A1_B; // net ID: RXCHARISK1 lsb: 0  msb: 1 OUTPUT
		NetFlow* RXCHARISK1_A0_B; // net ID: RXCHARISK1 lsb: 0  msb: 1 OUTPUT
		NetFlow* RXCHBONDO0_A2_B; // net ID: RXCHBONDO0 lsb: 0  msb: 2 OUTPUT
		NetFlow* RXCHBONDO0_A1_B; // net ID: RXCHBONDO0 lsb: 0  msb: 2 OUTPUT
		NetFlow* RXCHBONDO0_A0_B; // net ID: RXCHBONDO0 lsb: 0  msb: 2 OUTPUT
		NetFlow* RXCHBONDO1_A2_B; // net ID: RXCHBONDO1 lsb: 0  msb: 2 OUTPUT
		NetFlow* RXCHBONDO1_A1_B; // net ID: RXCHBONDO1 lsb: 0  msb: 2 OUTPUT
		NetFlow* RXCHBONDO1_A0_B; // net ID: RXCHBONDO1 lsb: 0  msb: 2 OUTPUT
		NetFlow* RXCLKCORCNT0_A2_B; // net ID: RXCLKCORCNT0 lsb: 0  msb: 2 OUTPUT
		NetFlow* RXCLKCORCNT0_A1_B; // net ID: RXCLKCORCNT0 lsb: 0  msb: 2 OUTPUT
		NetFlow* RXCLKCORCNT0_A0_B; // net ID: RXCLKCORCNT0 lsb: 0  msb: 2 OUTPUT
		NetFlow* RXCLKCORCNT1_A2_B; // net ID: RXCLKCORCNT1 lsb: 0  msb: 2 OUTPUT
		NetFlow* RXCLKCORCNT1_A1_B; // net ID: RXCLKCORCNT1 lsb: 0  msb: 2 OUTPUT
		NetFlow* RXCLKCORCNT1_A0_B; // net ID: RXCLKCORCNT1 lsb: 0  msb: 2 OUTPUT
		NetFlow* RXCOMMADET0_A0_B; // net ID: RXCOMMADET0 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXCOMMADET1_A0_B; // net ID: RXCOMMADET1 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXDATA0_A15_B; // net ID: RXDATA0 lsb: 0  msb: 15 OUTPUT
		NetFlow* RXDATA0_A14_B; // net ID: RXDATA0 lsb: 0  msb: 15 OUTPUT
		NetFlow* RXDATA0_A13_B; // net ID: RXDATA0 lsb: 0  msb: 15 OUTPUT
		NetFlow* RXDATA0_A12_B; // net ID: RXDATA0 lsb: 0  msb: 15 OUTPUT
		NetFlow* RXDATA0_A11_B; // net ID: RXDATA0 lsb: 0  msb: 15 OUTPUT
		NetFlow* RXDATA0_A10_B; // net ID: RXDATA0 lsb: 0  msb: 15 OUTPUT
		NetFlow* RXDATA0_A9_B; // net ID: RXDATA0 lsb: 0  msb: 15 OUTPUT
		NetFlow* RXDATA0_A8_B; // net ID: RXDATA0 lsb: 0  msb: 15 OUTPUT
		NetFlow* RXDATA0_A7_B; // net ID: RXDATA0 lsb: 0  msb: 15 OUTPUT
		NetFlow* RXDATA0_A6_B; // net ID: RXDATA0 lsb: 0  msb: 15 OUTPUT
		NetFlow* RXDATA0_A5_B; // net ID: RXDATA0 lsb: 0  msb: 15 OUTPUT
		NetFlow* RXDATA0_A4_B; // net ID: RXDATA0 lsb: 0  msb: 15 OUTPUT
		NetFlow* RXDATA0_A3_B; // net ID: RXDATA0 lsb: 0  msb: 15 OUTPUT
		NetFlow* RXDATA0_A2_B; // net ID: RXDATA0 lsb: 0  msb: 15 OUTPUT
		NetFlow* RXDATA0_A1_B; // net ID: RXDATA0 lsb: 0  msb: 15 OUTPUT
		NetFlow* RXDATA0_A0_B; // net ID: RXDATA0 lsb: 0  msb: 15 OUTPUT
		NetFlow* RXDATA1_A15_B; // net ID: RXDATA1 lsb: 0  msb: 15 OUTPUT
		NetFlow* RXDATA1_A14_B; // net ID: RXDATA1 lsb: 0  msb: 15 OUTPUT
		NetFlow* RXDATA1_A13_B; // net ID: RXDATA1 lsb: 0  msb: 15 OUTPUT
		NetFlow* RXDATA1_A12_B; // net ID: RXDATA1 lsb: 0  msb: 15 OUTPUT
		NetFlow* RXDATA1_A11_B; // net ID: RXDATA1 lsb: 0  msb: 15 OUTPUT
		NetFlow* RXDATA1_A10_B; // net ID: RXDATA1 lsb: 0  msb: 15 OUTPUT
		NetFlow* RXDATA1_A9_B; // net ID: RXDATA1 lsb: 0  msb: 15 OUTPUT
		NetFlow* RXDATA1_A8_B; // net ID: RXDATA1 lsb: 0  msb: 15 OUTPUT
		NetFlow* RXDATA1_A7_B; // net ID: RXDATA1 lsb: 0  msb: 15 OUTPUT
		NetFlow* RXDATA1_A6_B; // net ID: RXDATA1 lsb: 0  msb: 15 OUTPUT
		NetFlow* RXDATA1_A5_B; // net ID: RXDATA1 lsb: 0  msb: 15 OUTPUT
		NetFlow* RXDATA1_A4_B; // net ID: RXDATA1 lsb: 0  msb: 15 OUTPUT
		NetFlow* RXDATA1_A3_B; // net ID: RXDATA1 lsb: 0  msb: 15 OUTPUT
		NetFlow* RXDATA1_A2_B; // net ID: RXDATA1 lsb: 0  msb: 15 OUTPUT
		NetFlow* RXDATA1_A1_B; // net ID: RXDATA1 lsb: 0  msb: 15 OUTPUT
		NetFlow* RXDATA1_A0_B; // net ID: RXDATA1 lsb: 0  msb: 15 OUTPUT
		NetFlow* RXDISPERR0_A1_B; // net ID: RXDISPERR0 lsb: 0  msb: 1 OUTPUT
		NetFlow* RXDISPERR0_A0_B; // net ID: RXDISPERR0 lsb: 0  msb: 1 OUTPUT
		NetFlow* RXDISPERR1_A1_B; // net ID: RXDISPERR1 lsb: 0  msb: 1 OUTPUT
		NetFlow* RXDISPERR1_A0_B; // net ID: RXDISPERR1 lsb: 0  msb: 1 OUTPUT
		NetFlow* RXELECIDLE0_A0_B; // net ID: RXELECIDLE0 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXELECIDLE1_A0_B; // net ID: RXELECIDLE1 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXLOSSOFSYNC0_A1_B; // net ID: RXLOSSOFSYNC0 lsb: 0  msb: 1 OUTPUT
		NetFlow* RXLOSSOFSYNC0_A0_B; // net ID: RXLOSSOFSYNC0 lsb: 0  msb: 1 OUTPUT
		NetFlow* RXLOSSOFSYNC1_A1_B; // net ID: RXLOSSOFSYNC1 lsb: 0  msb: 1 OUTPUT
		NetFlow* RXLOSSOFSYNC1_A0_B; // net ID: RXLOSSOFSYNC1 lsb: 0  msb: 1 OUTPUT
		NetFlow* RXNOTINTABLE0_A1_B; // net ID: RXNOTINTABLE0 lsb: 0  msb: 1 OUTPUT
		NetFlow* RXNOTINTABLE0_A0_B; // net ID: RXNOTINTABLE0 lsb: 0  msb: 1 OUTPUT
		NetFlow* RXNOTINTABLE1_A1_B; // net ID: RXNOTINTABLE1 lsb: 0  msb: 1 OUTPUT
		NetFlow* RXNOTINTABLE1_A0_B; // net ID: RXNOTINTABLE1 lsb: 0  msb: 1 OUTPUT
		NetFlow* RXOVERSAMPLEERR0_A0_B; // net ID: RXOVERSAMPLEERR0 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXOVERSAMPLEERR1_A0_B; // net ID: RXOVERSAMPLEERR1 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXPRBSERR0_A0_B; // net ID: RXPRBSERR0 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXPRBSERR1_A0_B; // net ID: RXPRBSERR1 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXRECCLK0_A0_B; // net ID: RXRECCLK0 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXRECCLK1_A0_B; // net ID: RXRECCLK1 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXRUNDISP0_A1_B; // net ID: RXRUNDISP0 lsb: 0  msb: 1 OUTPUT
		NetFlow* RXRUNDISP0_A0_B; // net ID: RXRUNDISP0 lsb: 0  msb: 1 OUTPUT
		NetFlow* RXRUNDISP1_A1_B; // net ID: RXRUNDISP1 lsb: 0  msb: 1 OUTPUT
		NetFlow* RXRUNDISP1_A0_B; // net ID: RXRUNDISP1 lsb: 0  msb: 1 OUTPUT
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
		NetFlow* TXKERR0_A1_B; // net ID: TXKERR0 lsb: 0  msb: 1 OUTPUT
		NetFlow* TXKERR0_A0_B; // net ID: TXKERR0 lsb: 0  msb: 1 OUTPUT
		NetFlow* TXKERR1_A1_B; // net ID: TXKERR1 lsb: 0  msb: 1 OUTPUT
		NetFlow* TXKERR1_A0_B; // net ID: TXKERR1 lsb: 0  msb: 1 OUTPUT
		NetFlow* TXN0_A0_B; // net ID: TXN0 lsb: 0  msb: 0 OUTPUT
		NetFlow* TXN1_A0_B; // net ID: TXN1 lsb: 0  msb: 0 OUTPUT
		NetFlow* TXOUTCLK0_A0_B; // net ID: TXOUTCLK0 lsb: 0  msb: 0 OUTPUT
		NetFlow* TXOUTCLK1_A0_B; // net ID: TXOUTCLK1 lsb: 0  msb: 0 OUTPUT
		NetFlow* TXP0_A0_B; // net ID: TXP0 lsb: 0  msb: 0 OUTPUT
		NetFlow* TXP1_A0_B; // net ID: TXP1 lsb: 0  msb: 0 OUTPUT
		NetFlow* TXRUNDISP0_A1_B; // net ID: TXRUNDISP0 lsb: 0  msb: 1 OUTPUT
		NetFlow* TXRUNDISP0_A0_B; // net ID: TXRUNDISP0 lsb: 0  msb: 1 OUTPUT
		NetFlow* TXRUNDISP1_A1_B; // net ID: TXRUNDISP1 lsb: 0  msb: 1 OUTPUT
		NetFlow* TXRUNDISP1_A0_B; // net ID: TXRUNDISP1 lsb: 0  msb: 1 OUTPUT
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
		NetFlow* GTPRESET_A0_B; // net ID: GTPRESET lsb: 0  msb: 0 INPUT
		NetFlow* GTPTEST_A3_B; // net ID: GTPTEST lsb: 0  msb: 3 INPUT
		NetFlow* GTPTEST_A2_B; // net ID: GTPTEST lsb: 0  msb: 3 INPUT
		NetFlow* GTPTEST_A1_B; // net ID: GTPTEST lsb: 0  msb: 3 INPUT
		NetFlow* GTPTEST_A0_B; // net ID: GTPTEST lsb: 0  msb: 3 INPUT
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
		NetFlow* RXCHBONDI0_A2_B; // net ID: RXCHBONDI0 lsb: 0  msb: 2 INPUT
		NetFlow* RXCHBONDI0_A1_B; // net ID: RXCHBONDI0 lsb: 0  msb: 2 INPUT
		NetFlow* RXCHBONDI0_A0_B; // net ID: RXCHBONDI0 lsb: 0  msb: 2 INPUT
		NetFlow* RXCHBONDI1_A2_B; // net ID: RXCHBONDI1 lsb: 0  msb: 2 INPUT
		NetFlow* RXCHBONDI1_A1_B; // net ID: RXCHBONDI1 lsb: 0  msb: 2 INPUT
		NetFlow* RXCHBONDI1_A0_B; // net ID: RXCHBONDI1 lsb: 0  msb: 2 INPUT
		NetFlow* RXCOMMADETUSE0_A0_B; // net ID: RXCOMMADETUSE0 lsb: 0  msb: 0 INPUT
		NetFlow* RXCOMMADETUSE1_A0_B; // net ID: RXCOMMADETUSE1 lsb: 0  msb: 0 INPUT
		NetFlow* RXDATAWIDTH0_A0_B; // net ID: RXDATAWIDTH0 lsb: 0  msb: 0 INPUT
		NetFlow* RXDATAWIDTH1_A0_B; // net ID: RXDATAWIDTH1 lsb: 0  msb: 0 INPUT
		NetFlow* RXDEC8B10BUSE0_A0_B; // net ID: RXDEC8B10BUSE0 lsb: 0  msb: 0 INPUT
		NetFlow* RXDEC8B10BUSE1_A0_B; // net ID: RXDEC8B10BUSE1 lsb: 0  msb: 0 INPUT
		NetFlow* RXELECIDLERESET0_A0_B; // net ID: RXELECIDLERESET0 lsb: 0  msb: 0 INPUT
		NetFlow* RXELECIDLERESET1_A0_B; // net ID: RXELECIDLERESET1 lsb: 0  msb: 0 INPUT
		NetFlow* RXENCHANSYNC0_A0_B; // net ID: RXENCHANSYNC0 lsb: 0  msb: 0 INPUT
		NetFlow* RXENCHANSYNC1_A0_B; // net ID: RXENCHANSYNC1 lsb: 0  msb: 0 INPUT
		NetFlow* RXENELECIDLERESETB_A0_B; // net ID: RXENELECIDLERESETB lsb: 0  msb: 0 INPUT
		NetFlow* RXENEQB0_A0_B; // net ID: RXENEQB0 lsb: 0  msb: 0 INPUT
		NetFlow* RXENEQB1_A0_B; // net ID: RXENEQB1 lsb: 0  msb: 0 INPUT
		NetFlow* RXENMCOMMAALIGN0_A0_B; // net ID: RXENMCOMMAALIGN0 lsb: 0  msb: 0 INPUT
		NetFlow* RXENMCOMMAALIGN1_A0_B; // net ID: RXENMCOMMAALIGN1 lsb: 0  msb: 0 INPUT
		NetFlow* RXENPCOMMAALIGN0_A0_B; // net ID: RXENPCOMMAALIGN0 lsb: 0  msb: 0 INPUT
		NetFlow* RXENPCOMMAALIGN1_A0_B; // net ID: RXENPCOMMAALIGN1 lsb: 0  msb: 0 INPUT
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
		NetFlow* TXBYPASS8B10B0_A1_B; // net ID: TXBYPASS8B10B0 lsb: 0  msb: 1 INPUT
		NetFlow* TXBYPASS8B10B0_A0_B; // net ID: TXBYPASS8B10B0 lsb: 0  msb: 1 INPUT
		NetFlow* TXBYPASS8B10B1_A1_B; // net ID: TXBYPASS8B10B1 lsb: 0  msb: 1 INPUT
		NetFlow* TXBYPASS8B10B1_A0_B; // net ID: TXBYPASS8B10B1 lsb: 0  msb: 1 INPUT
		NetFlow* TXCHARDISPMODE0_A1_B; // net ID: TXCHARDISPMODE0 lsb: 0  msb: 1 INPUT
		NetFlow* TXCHARDISPMODE0_A0_B; // net ID: TXCHARDISPMODE0 lsb: 0  msb: 1 INPUT
		NetFlow* TXCHARDISPMODE1_A1_B; // net ID: TXCHARDISPMODE1 lsb: 0  msb: 1 INPUT
		NetFlow* TXCHARDISPMODE1_A0_B; // net ID: TXCHARDISPMODE1 lsb: 0  msb: 1 INPUT
		NetFlow* TXCHARDISPVAL0_A1_B; // net ID: TXCHARDISPVAL0 lsb: 0  msb: 1 INPUT
		NetFlow* TXCHARDISPVAL0_A0_B; // net ID: TXCHARDISPVAL0 lsb: 0  msb: 1 INPUT
		NetFlow* TXCHARDISPVAL1_A1_B; // net ID: TXCHARDISPVAL1 lsb: 0  msb: 1 INPUT
		NetFlow* TXCHARDISPVAL1_A0_B; // net ID: TXCHARDISPVAL1 lsb: 0  msb: 1 INPUT
		NetFlow* TXCHARISK0_A1_B; // net ID: TXCHARISK0 lsb: 0  msb: 1 INPUT
		NetFlow* TXCHARISK0_A0_B; // net ID: TXCHARISK0 lsb: 0  msb: 1 INPUT
		NetFlow* TXCHARISK1_A1_B; // net ID: TXCHARISK1 lsb: 0  msb: 1 INPUT
		NetFlow* TXCHARISK1_A0_B; // net ID: TXCHARISK1 lsb: 0  msb: 1 INPUT
		NetFlow* TXCOMSTART0_A0_B; // net ID: TXCOMSTART0 lsb: 0  msb: 0 INPUT
		NetFlow* TXCOMSTART1_A0_B; // net ID: TXCOMSTART1 lsb: 0  msb: 0 INPUT
		NetFlow* TXCOMTYPE0_A0_B; // net ID: TXCOMTYPE0 lsb: 0  msb: 0 INPUT
		NetFlow* TXCOMTYPE1_A0_B; // net ID: TXCOMTYPE1 lsb: 0  msb: 0 INPUT
		NetFlow* TXDATA0_A15_B; // net ID: TXDATA0 lsb: 0  msb: 15 INPUT
		NetFlow* TXDATA0_A14_B; // net ID: TXDATA0 lsb: 0  msb: 15 INPUT
		NetFlow* TXDATA0_A13_B; // net ID: TXDATA0 lsb: 0  msb: 15 INPUT
		NetFlow* TXDATA0_A12_B; // net ID: TXDATA0 lsb: 0  msb: 15 INPUT
		NetFlow* TXDATA0_A11_B; // net ID: TXDATA0 lsb: 0  msb: 15 INPUT
		NetFlow* TXDATA0_A10_B; // net ID: TXDATA0 lsb: 0  msb: 15 INPUT
		NetFlow* TXDATA0_A9_B; // net ID: TXDATA0 lsb: 0  msb: 15 INPUT
		NetFlow* TXDATA0_A8_B; // net ID: TXDATA0 lsb: 0  msb: 15 INPUT
		NetFlow* TXDATA0_A7_B; // net ID: TXDATA0 lsb: 0  msb: 15 INPUT
		NetFlow* TXDATA0_A6_B; // net ID: TXDATA0 lsb: 0  msb: 15 INPUT
		NetFlow* TXDATA0_A5_B; // net ID: TXDATA0 lsb: 0  msb: 15 INPUT
		NetFlow* TXDATA0_A4_B; // net ID: TXDATA0 lsb: 0  msb: 15 INPUT
		NetFlow* TXDATA0_A3_B; // net ID: TXDATA0 lsb: 0  msb: 15 INPUT
		NetFlow* TXDATA0_A2_B; // net ID: TXDATA0 lsb: 0  msb: 15 INPUT
		NetFlow* TXDATA0_A1_B; // net ID: TXDATA0 lsb: 0  msb: 15 INPUT
		NetFlow* TXDATA0_A0_B; // net ID: TXDATA0 lsb: 0  msb: 15 INPUT
		NetFlow* TXDATA1_A15_B; // net ID: TXDATA1 lsb: 0  msb: 15 INPUT
		NetFlow* TXDATA1_A14_B; // net ID: TXDATA1 lsb: 0  msb: 15 INPUT
		NetFlow* TXDATA1_A13_B; // net ID: TXDATA1 lsb: 0  msb: 15 INPUT
		NetFlow* TXDATA1_A12_B; // net ID: TXDATA1 lsb: 0  msb: 15 INPUT
		NetFlow* TXDATA1_A11_B; // net ID: TXDATA1 lsb: 0  msb: 15 INPUT
		NetFlow* TXDATA1_A10_B; // net ID: TXDATA1 lsb: 0  msb: 15 INPUT
		NetFlow* TXDATA1_A9_B; // net ID: TXDATA1 lsb: 0  msb: 15 INPUT
		NetFlow* TXDATA1_A8_B; // net ID: TXDATA1 lsb: 0  msb: 15 INPUT
		NetFlow* TXDATA1_A7_B; // net ID: TXDATA1 lsb: 0  msb: 15 INPUT
		NetFlow* TXDATA1_A6_B; // net ID: TXDATA1 lsb: 0  msb: 15 INPUT
		NetFlow* TXDATA1_A5_B; // net ID: TXDATA1 lsb: 0  msb: 15 INPUT
		NetFlow* TXDATA1_A4_B; // net ID: TXDATA1 lsb: 0  msb: 15 INPUT
		NetFlow* TXDATA1_A3_B; // net ID: TXDATA1 lsb: 0  msb: 15 INPUT
		NetFlow* TXDATA1_A2_B; // net ID: TXDATA1 lsb: 0  msb: 15 INPUT
		NetFlow* TXDATA1_A1_B; // net ID: TXDATA1 lsb: 0  msb: 15 INPUT
		NetFlow* TXDATA1_A0_B; // net ID: TXDATA1 lsb: 0  msb: 15 INPUT
		NetFlow* TXDATAWIDTH0_A0_B; // net ID: TXDATAWIDTH0 lsb: 0  msb: 0 INPUT
		NetFlow* TXDATAWIDTH1_A0_B; // net ID: TXDATAWIDTH1 lsb: 0  msb: 0 INPUT
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
		NetFlow* TXENPMAPHASEALIGN_A0_B; // net ID: TXENPMAPHASEALIGN lsb: 0  msb: 0 INPUT
		NetFlow* TXENPRBSTST0_A1_B; // net ID: TXENPRBSTST0 lsb: 0  msb: 1 INPUT
		NetFlow* TXENPRBSTST0_A0_B; // net ID: TXENPRBSTST0 lsb: 0  msb: 1 INPUT
		NetFlow* TXENPRBSTST1_A1_B; // net ID: TXENPRBSTST1 lsb: 0  msb: 1 INPUT
		NetFlow* TXENPRBSTST1_A0_B; // net ID: TXENPRBSTST1 lsb: 0  msb: 1 INPUT
		NetFlow* TXINHIBIT0_A0_B; // net ID: TXINHIBIT0 lsb: 0  msb: 0 INPUT
		NetFlow* TXINHIBIT1_A0_B; // net ID: TXINHIBIT1 lsb: 0  msb: 0 INPUT
		NetFlow* TXPMASETPHASE_A0_B; // net ID: TXPMASETPHASE lsb: 0  msb: 0 INPUT
		NetFlow* TXPOLARITY0_A0_B; // net ID: TXPOLARITY0 lsb: 0  msb: 0 INPUT
		NetFlow* TXPOLARITY1_A0_B; // net ID: TXPOLARITY1 lsb: 0  msb: 0 INPUT
		NetFlow* TXPOWERDOWN0_A1_B; // net ID: TXPOWERDOWN0 lsb: 0  msb: 1 INPUT
		NetFlow* TXPOWERDOWN0_A0_B; // net ID: TXPOWERDOWN0 lsb: 0  msb: 1 INPUT
		NetFlow* TXPOWERDOWN1_A1_B; // net ID: TXPOWERDOWN1 lsb: 0  msb: 1 INPUT
		NetFlow* TXPOWERDOWN1_A0_B; // net ID: TXPOWERDOWN1 lsb: 0  msb: 1 INPUT
		NetFlow* TXPREEMPHASIS0_A2_B; // net ID: TXPREEMPHASIS0 lsb: 0  msb: 2 INPUT
		NetFlow* TXPREEMPHASIS0_A1_B; // net ID: TXPREEMPHASIS0 lsb: 0  msb: 2 INPUT
		NetFlow* TXPREEMPHASIS0_A0_B; // net ID: TXPREEMPHASIS0 lsb: 0  msb: 2 INPUT
		NetFlow* TXPREEMPHASIS1_A2_B; // net ID: TXPREEMPHASIS1 lsb: 0  msb: 2 INPUT
		NetFlow* TXPREEMPHASIS1_A1_B; // net ID: TXPREEMPHASIS1 lsb: 0  msb: 2 INPUT
		NetFlow* TXPREEMPHASIS1_A0_B; // net ID: TXPREEMPHASIS1 lsb: 0  msb: 2 INPUT
		NetFlow* TXRESET0_A0_B; // net ID: TXRESET0 lsb: 0  msb: 0 INPUT
		NetFlow* TXRESET1_A0_B; // net ID: TXRESET1 lsb: 0  msb: 0 INPUT
		NetFlow* TXUSRCLK0_A0_B; // net ID: TXUSRCLK0 lsb: 0  msb: 0 INPUT
		NetFlow* TXUSRCLK1_A0_B; // net ID: TXUSRCLK1 lsb: 0  msb: 0 INPUT
		NetFlow* TXUSRCLK20_A0_B; // net ID: TXUSRCLK20 lsb: 0  msb: 0 INPUT
		NetFlow* TXUSRCLK21_A0_B; // net ID: TXUSRCLK21 lsb: 0  msb: 0 INPUT
		
		public: X_GTP_DUAL(
			const char * name,
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_enum_t AC_CAP_DIS_0, // Default: "TRUE"
			parameter_enum_t AC_CAP_DIS_1, // Default: "TRUE"
			parameter_string_t CHAN_BOND_MODE_0, // Default: "OFF"
			parameter_string_t CHAN_BOND_MODE_1, // Default: "OFF"
			parameter_enum_t CHAN_BOND_SEQ_2_USE_0, // Default: "TRUE"
			parameter_enum_t CHAN_BOND_SEQ_2_USE_1, // Default: "TRUE"
			parameter_enum_t CLKINDC_B, // Default: "TRUE"
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
			parameter_enum_t PCI_EXPRESS_MODE_0, // Default: "TRUE"
			parameter_enum_t PCI_EXPRESS_MODE_1, // Default: "TRUE"
			parameter_enum_t PCOMMA_DETECT_0, // Default: "TRUE"
			parameter_enum_t PCOMMA_DETECT_1, // Default: "TRUE"
			parameter_enum_t PLL_SATA_0, // Default: "FALSE"
			parameter_enum_t PLL_SATA_1, // Default: "FALSE"
			parameter_enum_t RCV_TERM_GND_0, // Default: "TRUE"
			parameter_enum_t RCV_TERM_GND_1, // Default: "TRUE"
			parameter_enum_t RCV_TERM_MID_0, // Default: "FALSE"
			parameter_enum_t RCV_TERM_MID_1, // Default: "FALSE"
			parameter_enum_t RCV_TERM_VTTRX_0, // Default: "FALSE"
			parameter_enum_t RCV_TERM_VTTRX_1, // Default: "FALSE"
			parameter_enum_t RX_BUFFER_USE_0, // Default: "TRUE"
			parameter_enum_t RX_BUFFER_USE_1, // Default: "TRUE"
			parameter_enum_t RX_DECODE_SEQ_MATCH_0, // Default: "TRUE"
			parameter_enum_t RX_DECODE_SEQ_MATCH_1, // Default: "TRUE"
			parameter_enum_t RX_LOSS_OF_SYNC_FSM_0, // Default: "FALSE"
			parameter_enum_t RX_LOSS_OF_SYNC_FSM_1, // Default: "FALSE"
			parameter_string_t RX_SLIDE_MODE_0, // Default: "PCS"
			parameter_string_t RX_SLIDE_MODE_1, // Default: "PCS"
			parameter_string_t RX_STATUS_FMT_0, // Default: "PCIE"
			parameter_string_t RX_STATUS_FMT_1, // Default: "PCIE"
			parameter_string_t RX_XCLK_SEL_0, // Default: "RXREC"
			parameter_string_t RX_XCLK_SEL_1, // Default: "RXREC"
			parameter_string_t SIM_MODE, // Default: "FAST"
			parameter_int_t SIM_PLL_PERDIV2, // Default: 9'h190
			parameter_enum_t SIM_RECEIVER_DETECT_PASS0, // Default: "FALSE"
			parameter_enum_t SIM_RECEIVER_DETECT_PASS1, // Default: "FALSE"
			parameter_enum_t TERMINATION_OVRD, // Default: "FALSE"
			parameter_enum_t TX_BUFFER_USE_0, // Default: "TRUE"
			parameter_enum_t TX_BUFFER_USE_1, // Default: "TRUE"
			parameter_enum_t TX_DIFF_BOOST_0, // Default: "TRUE"
			parameter_enum_t TX_DIFF_BOOST_1, // Default: "TRUE"
			parameter_string_t TX_XCLK_SEL_0, // Default: "TXUSR"
			parameter_string_t TX_XCLK_SEL_1, // Default: "TXUSR"
			parameter_int_t TRANS_TIME_FROM_P2_0, // Default: 16'h003c
			parameter_int_t TRANS_TIME_FROM_P2_1, // Default: 16'h003c
			parameter_int_t TRANS_TIME_NON_P2_0, // Default: 16'h0019
			parameter_int_t TRANS_TIME_NON_P2_1, // Default: 16'h0019
			parameter_int_t TRANS_TIME_TO_P2_0, // Default: 16'h0064
			parameter_int_t TRANS_TIME_TO_P2_1, // Default: 16'h0064
			parameter_int_t PMA_RX_CFG_0, // Default: 25'h09f0089
			parameter_int_t PMA_RX_CFG_1, // Default: 25'h09f0089
			parameter_int_t PMA_CDR_SCAN_0, // Default: 27'h6c07640
			parameter_int_t PMA_CDR_SCAN_1, // Default: 27'h6c07640
			parameter_int_t PCS_COM_CFG, // Default: 28'h1680a0e
			parameter_int_t OOBDETECT_THRESHOLD_0, // Default: 3'b001
			parameter_int_t OOBDETECT_THRESHOLD_1, // Default: 3'b001
			parameter_int_t SATA_BURST_VAL_0, // Default: 3'b100
			parameter_int_t SATA_BURST_VAL_1, // Default: 3'b100
			parameter_int_t SATA_IDLE_VAL_0, // Default: 3'b011
			parameter_int_t SATA_IDLE_VAL_1, // Default: 3'b011
			parameter_int_t PRBS_ERR_THRESHOLD_0, // Default: 32'h1
			parameter_int_t PRBS_ERR_THRESHOLD_1, // Default: 32'h1
			parameter_int_t CHAN_BOND_SEQ_1_ENABLE_0, // Default: 4'b1111
			parameter_int_t CHAN_BOND_SEQ_1_ENABLE_1, // Default: 4'b1111
			parameter_int_t CHAN_BOND_SEQ_2_ENABLE_0, // Default: 4'b1111
			parameter_int_t CHAN_BOND_SEQ_2_ENABLE_1, // Default: 4'b1111
			parameter_int_t CLK_COR_SEQ_1_ENABLE_0, // Default: 4'b1111
			parameter_int_t CLK_COR_SEQ_1_ENABLE_1, // Default: 4'b1111
			parameter_int_t CLK_COR_SEQ_2_ENABLE_0, // Default: 4'b1111
			parameter_int_t CLK_COR_SEQ_2_ENABLE_1, // Default: 4'b1111
			parameter_int_t COM_BURST_VAL_0, // Default: 4'b1111
			parameter_int_t COM_BURST_VAL_1, // Default: 4'b1111
			parameter_int_t TERMINATION_CTRL, // Default: 5'b10100
			parameter_int_t TXRX_INVERT_0, // Default: 5'b00000
			parameter_int_t TXRX_INVERT_1, // Default: 5'b00000
			parameter_int_t CHAN_BOND_SEQ_1_1_0, // Default: 10'b0001001010
			parameter_int_t CHAN_BOND_SEQ_1_1_1, // Default: 10'b0001001010
			parameter_int_t CHAN_BOND_SEQ_1_2_0, // Default: 10'b0001001010
			parameter_int_t CHAN_BOND_SEQ_1_2_1, // Default: 10'b0001001010
			parameter_int_t CHAN_BOND_SEQ_1_3_0, // Default: 10'b0001001010
			parameter_int_t CHAN_BOND_SEQ_1_3_1, // Default: 10'b0001001010
			parameter_int_t CHAN_BOND_SEQ_1_4_0, // Default: 10'b0110111100
			parameter_int_t CHAN_BOND_SEQ_1_4_1, // Default: 10'b0110111100
			parameter_int_t CHAN_BOND_SEQ_2_1_0, // Default: 10'b0110111100
			parameter_int_t CHAN_BOND_SEQ_2_1_1, // Default: 10'b0110111100
			parameter_int_t CHAN_BOND_SEQ_2_2_0, // Default: 10'b0100111100
			parameter_int_t CHAN_BOND_SEQ_2_2_1, // Default: 10'b0100111100
			parameter_int_t CHAN_BOND_SEQ_2_3_0, // Default: 10'b0100111100
			parameter_int_t CHAN_BOND_SEQ_2_3_1, // Default: 10'b0100111100
			parameter_int_t CHAN_BOND_SEQ_2_4_0, // Default: 10'b0100111100
			parameter_int_t CHAN_BOND_SEQ_2_4_1, // Default: 10'b0100111100
			parameter_int_t CLK_COR_SEQ_1_1_0, // Default: 10'b0100011100
			parameter_int_t CLK_COR_SEQ_1_1_1, // Default: 10'b0100011100
			parameter_int_t CLK_COR_SEQ_1_2_0, // Default: 10'b0
			parameter_int_t CLK_COR_SEQ_1_2_1, // Default: 10'b0
			parameter_int_t CLK_COR_SEQ_1_3_0, // Default: 10'b0
			parameter_int_t CLK_COR_SEQ_1_3_1, // Default: 10'b0
			parameter_int_t CLK_COR_SEQ_1_4_0, // Default: 10'b0
			parameter_int_t CLK_COR_SEQ_1_4_1, // Default: 10'b0
			parameter_int_t CLK_COR_SEQ_2_1_0, // Default: 10'b0
			parameter_int_t CLK_COR_SEQ_2_1_1, // Default: 10'b0
			parameter_int_t CLK_COR_SEQ_2_2_0, // Default: 10'b0
			parameter_int_t CLK_COR_SEQ_2_2_1, // Default: 10'b0
			parameter_int_t CLK_COR_SEQ_2_3_0, // Default: 10'b0
			parameter_int_t CLK_COR_SEQ_2_3_1, // Default: 10'b0
			parameter_int_t CLK_COR_SEQ_2_4_0, // Default: 10'b0
			parameter_int_t CLK_COR_SEQ_2_4_1, // Default: 10'b0
			parameter_int_t COMMA_10B_ENABLE_0, // Default: 10'b1111111111
			parameter_int_t COMMA_10B_ENABLE_1, // Default: 10'b1111111111
			parameter_int_t MCOMMA_10B_VALUE_0, // Default: 10'b1010000011
			parameter_int_t MCOMMA_10B_VALUE_1, // Default: 10'b1010000011
			parameter_int_t PCOMMA_10B_VALUE_0, // Default: 10'b0101111100
			parameter_int_t PCOMMA_10B_VALUE_1, // Default: 10'b0101111100
			parameter_int_t ALIGN_COMMA_WORD_0, // Default: 1
			parameter_int_t ALIGN_COMMA_WORD_1, // Default: 1
			parameter_int_t CHAN_BOND_1_MAX_SKEW_0, // Default: 7
			parameter_int_t CHAN_BOND_1_MAX_SKEW_1, // Default: 7
			parameter_int_t CHAN_BOND_2_MAX_SKEW_0, // Default: 1
			parameter_int_t CHAN_BOND_2_MAX_SKEW_1, // Default: 1
			parameter_int_t CHAN_BOND_LEVEL_0, // Default: 0
			parameter_int_t CHAN_BOND_LEVEL_1, // Default: 0
			parameter_int_t CHAN_BOND_SEQ_LEN_0, // Default: 4
			parameter_int_t CHAN_BOND_SEQ_LEN_1, // Default: 4
			parameter_int_t CLK25_DIVIDER, // Default: 4
			parameter_int_t CLK_COR_ADJ_LEN_0, // Default: 1
			parameter_int_t CLK_COR_ADJ_LEN_1, // Default: 1
			parameter_int_t CLK_COR_DET_LEN_0, // Default: 1
			parameter_int_t CLK_COR_DET_LEN_1, // Default: 1
			parameter_int_t CLK_COR_MAX_LAT_0, // Default: 18
			parameter_int_t CLK_COR_MAX_LAT_1, // Default: 18
			parameter_int_t CLK_COR_MIN_LAT_0, // Default: 16
			parameter_int_t CLK_COR_MIN_LAT_1, // Default: 16
			parameter_int_t CLK_COR_REPEAT_WAIT_0, // Default: 5
			parameter_int_t CLK_COR_REPEAT_WAIT_1, // Default: 5
			parameter_int_t OOB_CLK_DIVIDER, // Default: 4
			parameter_int_t PLL_DIVSEL_FB, // Default: 5
			parameter_int_t PLL_DIVSEL_REF, // Default: 2
			parameter_int_t PLL_RXDIVSEL_OUT_0, // Default: 1
			parameter_int_t PLL_RXDIVSEL_OUT_1, // Default: 1
			parameter_int_t PLL_TXDIVSEL_COMM_OUT, // Default: 1
			parameter_int_t PLL_TXDIVSEL_OUT_0, // Default: 1
			parameter_int_t PLL_TXDIVSEL_OUT_1, // Default: 1
			parameter_int_t RX_LOS_INVALID_INCR_0, // Default: 8
			parameter_int_t RX_LOS_INVALID_INCR_1, // Default: 8
			parameter_int_t RX_LOS_THRESHOLD_0, // Default: 128
			parameter_int_t RX_LOS_THRESHOLD_1, // Default: 128
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
			parameter_int_t SIM_GTPRESET_SPEEDUP, // Default: 0
			parameter_int_t TERMINATION_IMP_0, // Default: 50
			parameter_int_t TERMINATION_IMP_1, // Default: 50
			parameter_int_t TX_SYNC_FILTERB, // Default: 1
			//Verilog Ports in definition order:
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
			NetFlow* RXCHARISCOMMA0_A1_B, // net ID: RXCHARISCOMMA0 lsb: 0  msb: 1 OUTPUT
			NetFlow* RXCHARISCOMMA0_A0_B, // net ID: RXCHARISCOMMA0 lsb: 0  msb: 1 OUTPUT
			NetFlow* RXCHARISCOMMA1_A1_B, // net ID: RXCHARISCOMMA1 lsb: 0  msb: 1 OUTPUT
			NetFlow* RXCHARISCOMMA1_A0_B, // net ID: RXCHARISCOMMA1 lsb: 0  msb: 1 OUTPUT
			NetFlow* RXCHARISK0_A1_B, // net ID: RXCHARISK0 lsb: 0  msb: 1 OUTPUT
			NetFlow* RXCHARISK0_A0_B, // net ID: RXCHARISK0 lsb: 0  msb: 1 OUTPUT
			NetFlow* RXCHARISK1_A1_B, // net ID: RXCHARISK1 lsb: 0  msb: 1 OUTPUT
			NetFlow* RXCHARISK1_A0_B, // net ID: RXCHARISK1 lsb: 0  msb: 1 OUTPUT
			NetFlow* RXCHBONDO0_A2_B, // net ID: RXCHBONDO0 lsb: 0  msb: 2 OUTPUT
			NetFlow* RXCHBONDO0_A1_B, // net ID: RXCHBONDO0 lsb: 0  msb: 2 OUTPUT
			NetFlow* RXCHBONDO0_A0_B, // net ID: RXCHBONDO0 lsb: 0  msb: 2 OUTPUT
			NetFlow* RXCHBONDO1_A2_B, // net ID: RXCHBONDO1 lsb: 0  msb: 2 OUTPUT
			NetFlow* RXCHBONDO1_A1_B, // net ID: RXCHBONDO1 lsb: 0  msb: 2 OUTPUT
			NetFlow* RXCHBONDO1_A0_B, // net ID: RXCHBONDO1 lsb: 0  msb: 2 OUTPUT
			NetFlow* RXCLKCORCNT0_A2_B, // net ID: RXCLKCORCNT0 lsb: 0  msb: 2 OUTPUT
			NetFlow* RXCLKCORCNT0_A1_B, // net ID: RXCLKCORCNT0 lsb: 0  msb: 2 OUTPUT
			NetFlow* RXCLKCORCNT0_A0_B, // net ID: RXCLKCORCNT0 lsb: 0  msb: 2 OUTPUT
			NetFlow* RXCLKCORCNT1_A2_B, // net ID: RXCLKCORCNT1 lsb: 0  msb: 2 OUTPUT
			NetFlow* RXCLKCORCNT1_A1_B, // net ID: RXCLKCORCNT1 lsb: 0  msb: 2 OUTPUT
			NetFlow* RXCLKCORCNT1_A0_B, // net ID: RXCLKCORCNT1 lsb: 0  msb: 2 OUTPUT
			NetFlow* RXCOMMADET0_A0_B, // net ID: RXCOMMADET0 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXCOMMADET1_A0_B, // net ID: RXCOMMADET1 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXDATA0_A15_B, // net ID: RXDATA0 lsb: 0  msb: 15 OUTPUT
			NetFlow* RXDATA0_A14_B, // net ID: RXDATA0 lsb: 0  msb: 15 OUTPUT
			NetFlow* RXDATA0_A13_B, // net ID: RXDATA0 lsb: 0  msb: 15 OUTPUT
			NetFlow* RXDATA0_A12_B, // net ID: RXDATA0 lsb: 0  msb: 15 OUTPUT
			NetFlow* RXDATA0_A11_B, // net ID: RXDATA0 lsb: 0  msb: 15 OUTPUT
			NetFlow* RXDATA0_A10_B, // net ID: RXDATA0 lsb: 0  msb: 15 OUTPUT
			NetFlow* RXDATA0_A9_B, // net ID: RXDATA0 lsb: 0  msb: 15 OUTPUT
			NetFlow* RXDATA0_A8_B, // net ID: RXDATA0 lsb: 0  msb: 15 OUTPUT
			NetFlow* RXDATA0_A7_B, // net ID: RXDATA0 lsb: 0  msb: 15 OUTPUT
			NetFlow* RXDATA0_A6_B, // net ID: RXDATA0 lsb: 0  msb: 15 OUTPUT
			NetFlow* RXDATA0_A5_B, // net ID: RXDATA0 lsb: 0  msb: 15 OUTPUT
			NetFlow* RXDATA0_A4_B, // net ID: RXDATA0 lsb: 0  msb: 15 OUTPUT
			NetFlow* RXDATA0_A3_B, // net ID: RXDATA0 lsb: 0  msb: 15 OUTPUT
			NetFlow* RXDATA0_A2_B, // net ID: RXDATA0 lsb: 0  msb: 15 OUTPUT
			NetFlow* RXDATA0_A1_B, // net ID: RXDATA0 lsb: 0  msb: 15 OUTPUT
			NetFlow* RXDATA0_A0_B, // net ID: RXDATA0 lsb: 0  msb: 15 OUTPUT
			NetFlow* RXDATA1_A15_B, // net ID: RXDATA1 lsb: 0  msb: 15 OUTPUT
			NetFlow* RXDATA1_A14_B, // net ID: RXDATA1 lsb: 0  msb: 15 OUTPUT
			NetFlow* RXDATA1_A13_B, // net ID: RXDATA1 lsb: 0  msb: 15 OUTPUT
			NetFlow* RXDATA1_A12_B, // net ID: RXDATA1 lsb: 0  msb: 15 OUTPUT
			NetFlow* RXDATA1_A11_B, // net ID: RXDATA1 lsb: 0  msb: 15 OUTPUT
			NetFlow* RXDATA1_A10_B, // net ID: RXDATA1 lsb: 0  msb: 15 OUTPUT
			NetFlow* RXDATA1_A9_B, // net ID: RXDATA1 lsb: 0  msb: 15 OUTPUT
			NetFlow* RXDATA1_A8_B, // net ID: RXDATA1 lsb: 0  msb: 15 OUTPUT
			NetFlow* RXDATA1_A7_B, // net ID: RXDATA1 lsb: 0  msb: 15 OUTPUT
			NetFlow* RXDATA1_A6_B, // net ID: RXDATA1 lsb: 0  msb: 15 OUTPUT
			NetFlow* RXDATA1_A5_B, // net ID: RXDATA1 lsb: 0  msb: 15 OUTPUT
			NetFlow* RXDATA1_A4_B, // net ID: RXDATA1 lsb: 0  msb: 15 OUTPUT
			NetFlow* RXDATA1_A3_B, // net ID: RXDATA1 lsb: 0  msb: 15 OUTPUT
			NetFlow* RXDATA1_A2_B, // net ID: RXDATA1 lsb: 0  msb: 15 OUTPUT
			NetFlow* RXDATA1_A1_B, // net ID: RXDATA1 lsb: 0  msb: 15 OUTPUT
			NetFlow* RXDATA1_A0_B, // net ID: RXDATA1 lsb: 0  msb: 15 OUTPUT
			NetFlow* RXDISPERR0_A1_B, // net ID: RXDISPERR0 lsb: 0  msb: 1 OUTPUT
			NetFlow* RXDISPERR0_A0_B, // net ID: RXDISPERR0 lsb: 0  msb: 1 OUTPUT
			NetFlow* RXDISPERR1_A1_B, // net ID: RXDISPERR1 lsb: 0  msb: 1 OUTPUT
			NetFlow* RXDISPERR1_A0_B, // net ID: RXDISPERR1 lsb: 0  msb: 1 OUTPUT
			NetFlow* RXELECIDLE0_A0_B, // net ID: RXELECIDLE0 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXELECIDLE1_A0_B, // net ID: RXELECIDLE1 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXLOSSOFSYNC0_A1_B, // net ID: RXLOSSOFSYNC0 lsb: 0  msb: 1 OUTPUT
			NetFlow* RXLOSSOFSYNC0_A0_B, // net ID: RXLOSSOFSYNC0 lsb: 0  msb: 1 OUTPUT
			NetFlow* RXLOSSOFSYNC1_A1_B, // net ID: RXLOSSOFSYNC1 lsb: 0  msb: 1 OUTPUT
			NetFlow* RXLOSSOFSYNC1_A0_B, // net ID: RXLOSSOFSYNC1 lsb: 0  msb: 1 OUTPUT
			NetFlow* RXNOTINTABLE0_A1_B, // net ID: RXNOTINTABLE0 lsb: 0  msb: 1 OUTPUT
			NetFlow* RXNOTINTABLE0_A0_B, // net ID: RXNOTINTABLE0 lsb: 0  msb: 1 OUTPUT
			NetFlow* RXNOTINTABLE1_A1_B, // net ID: RXNOTINTABLE1 lsb: 0  msb: 1 OUTPUT
			NetFlow* RXNOTINTABLE1_A0_B, // net ID: RXNOTINTABLE1 lsb: 0  msb: 1 OUTPUT
			NetFlow* RXOVERSAMPLEERR0_A0_B, // net ID: RXOVERSAMPLEERR0 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXOVERSAMPLEERR1_A0_B, // net ID: RXOVERSAMPLEERR1 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXPRBSERR0_A0_B, // net ID: RXPRBSERR0 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXPRBSERR1_A0_B, // net ID: RXPRBSERR1 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXRECCLK0_A0_B, // net ID: RXRECCLK0 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXRECCLK1_A0_B, // net ID: RXRECCLK1 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXRUNDISP0_A1_B, // net ID: RXRUNDISP0 lsb: 0  msb: 1 OUTPUT
			NetFlow* RXRUNDISP0_A0_B, // net ID: RXRUNDISP0 lsb: 0  msb: 1 OUTPUT
			NetFlow* RXRUNDISP1_A1_B, // net ID: RXRUNDISP1 lsb: 0  msb: 1 OUTPUT
			NetFlow* RXRUNDISP1_A0_B, // net ID: RXRUNDISP1 lsb: 0  msb: 1 OUTPUT
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
			NetFlow* TXKERR0_A1_B, // net ID: TXKERR0 lsb: 0  msb: 1 OUTPUT
			NetFlow* TXKERR0_A0_B, // net ID: TXKERR0 lsb: 0  msb: 1 OUTPUT
			NetFlow* TXKERR1_A1_B, // net ID: TXKERR1 lsb: 0  msb: 1 OUTPUT
			NetFlow* TXKERR1_A0_B, // net ID: TXKERR1 lsb: 0  msb: 1 OUTPUT
			NetFlow* TXN0_A0_B, // net ID: TXN0 lsb: 0  msb: 0 OUTPUT
			NetFlow* TXN1_A0_B, // net ID: TXN1 lsb: 0  msb: 0 OUTPUT
			NetFlow* TXOUTCLK0_A0_B, // net ID: TXOUTCLK0 lsb: 0  msb: 0 OUTPUT
			NetFlow* TXOUTCLK1_A0_B, // net ID: TXOUTCLK1 lsb: 0  msb: 0 OUTPUT
			NetFlow* TXP0_A0_B, // net ID: TXP0 lsb: 0  msb: 0 OUTPUT
			NetFlow* TXP1_A0_B, // net ID: TXP1 lsb: 0  msb: 0 OUTPUT
			NetFlow* TXRUNDISP0_A1_B, // net ID: TXRUNDISP0 lsb: 0  msb: 1 OUTPUT
			NetFlow* TXRUNDISP0_A0_B, // net ID: TXRUNDISP0 lsb: 0  msb: 1 OUTPUT
			NetFlow* TXRUNDISP1_A1_B, // net ID: TXRUNDISP1 lsb: 0  msb: 1 OUTPUT
			NetFlow* TXRUNDISP1_A0_B, // net ID: TXRUNDISP1 lsb: 0  msb: 1 OUTPUT
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
			NetFlow* GTPRESET_A0_B, // net ID: GTPRESET lsb: 0  msb: 0 INPUT
			NetFlow* GTPTEST_A3_B, // net ID: GTPTEST lsb: 0  msb: 3 INPUT
			NetFlow* GTPTEST_A2_B, // net ID: GTPTEST lsb: 0  msb: 3 INPUT
			NetFlow* GTPTEST_A1_B, // net ID: GTPTEST lsb: 0  msb: 3 INPUT
			NetFlow* GTPTEST_A0_B, // net ID: GTPTEST lsb: 0  msb: 3 INPUT
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
			NetFlow* RXCHBONDI0_A2_B, // net ID: RXCHBONDI0 lsb: 0  msb: 2 INPUT
			NetFlow* RXCHBONDI0_A1_B, // net ID: RXCHBONDI0 lsb: 0  msb: 2 INPUT
			NetFlow* RXCHBONDI0_A0_B, // net ID: RXCHBONDI0 lsb: 0  msb: 2 INPUT
			NetFlow* RXCHBONDI1_A2_B, // net ID: RXCHBONDI1 lsb: 0  msb: 2 INPUT
			NetFlow* RXCHBONDI1_A1_B, // net ID: RXCHBONDI1 lsb: 0  msb: 2 INPUT
			NetFlow* RXCHBONDI1_A0_B, // net ID: RXCHBONDI1 lsb: 0  msb: 2 INPUT
			NetFlow* RXCOMMADETUSE0_A0_B, // net ID: RXCOMMADETUSE0 lsb: 0  msb: 0 INPUT
			NetFlow* RXCOMMADETUSE1_A0_B, // net ID: RXCOMMADETUSE1 lsb: 0  msb: 0 INPUT
			NetFlow* RXDATAWIDTH0_A0_B, // net ID: RXDATAWIDTH0 lsb: 0  msb: 0 INPUT
			NetFlow* RXDATAWIDTH1_A0_B, // net ID: RXDATAWIDTH1 lsb: 0  msb: 0 INPUT
			NetFlow* RXDEC8B10BUSE0_A0_B, // net ID: RXDEC8B10BUSE0 lsb: 0  msb: 0 INPUT
			NetFlow* RXDEC8B10BUSE1_A0_B, // net ID: RXDEC8B10BUSE1 lsb: 0  msb: 0 INPUT
			NetFlow* RXELECIDLERESET0_A0_B, // net ID: RXELECIDLERESET0 lsb: 0  msb: 0 INPUT
			NetFlow* RXELECIDLERESET1_A0_B, // net ID: RXELECIDLERESET1 lsb: 0  msb: 0 INPUT
			NetFlow* RXENCHANSYNC0_A0_B, // net ID: RXENCHANSYNC0 lsb: 0  msb: 0 INPUT
			NetFlow* RXENCHANSYNC1_A0_B, // net ID: RXENCHANSYNC1 lsb: 0  msb: 0 INPUT
			NetFlow* RXENELECIDLERESETB_A0_B, // net ID: RXENELECIDLERESETB lsb: 0  msb: 0 INPUT
			NetFlow* RXENEQB0_A0_B, // net ID: RXENEQB0 lsb: 0  msb: 0 INPUT
			NetFlow* RXENEQB1_A0_B, // net ID: RXENEQB1 lsb: 0  msb: 0 INPUT
			NetFlow* RXENMCOMMAALIGN0_A0_B, // net ID: RXENMCOMMAALIGN0 lsb: 0  msb: 0 INPUT
			NetFlow* RXENMCOMMAALIGN1_A0_B, // net ID: RXENMCOMMAALIGN1 lsb: 0  msb: 0 INPUT
			NetFlow* RXENPCOMMAALIGN0_A0_B, // net ID: RXENPCOMMAALIGN0 lsb: 0  msb: 0 INPUT
			NetFlow* RXENPCOMMAALIGN1_A0_B, // net ID: RXENPCOMMAALIGN1 lsb: 0  msb: 0 INPUT
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
			NetFlow* TXBYPASS8B10B0_A1_B, // net ID: TXBYPASS8B10B0 lsb: 0  msb: 1 INPUT
			NetFlow* TXBYPASS8B10B0_A0_B, // net ID: TXBYPASS8B10B0 lsb: 0  msb: 1 INPUT
			NetFlow* TXBYPASS8B10B1_A1_B, // net ID: TXBYPASS8B10B1 lsb: 0  msb: 1 INPUT
			NetFlow* TXBYPASS8B10B1_A0_B, // net ID: TXBYPASS8B10B1 lsb: 0  msb: 1 INPUT
			NetFlow* TXCHARDISPMODE0_A1_B, // net ID: TXCHARDISPMODE0 lsb: 0  msb: 1 INPUT
			NetFlow* TXCHARDISPMODE0_A0_B, // net ID: TXCHARDISPMODE0 lsb: 0  msb: 1 INPUT
			NetFlow* TXCHARDISPMODE1_A1_B, // net ID: TXCHARDISPMODE1 lsb: 0  msb: 1 INPUT
			NetFlow* TXCHARDISPMODE1_A0_B, // net ID: TXCHARDISPMODE1 lsb: 0  msb: 1 INPUT
			NetFlow* TXCHARDISPVAL0_A1_B, // net ID: TXCHARDISPVAL0 lsb: 0  msb: 1 INPUT
			NetFlow* TXCHARDISPVAL0_A0_B, // net ID: TXCHARDISPVAL0 lsb: 0  msb: 1 INPUT
			NetFlow* TXCHARDISPVAL1_A1_B, // net ID: TXCHARDISPVAL1 lsb: 0  msb: 1 INPUT
			NetFlow* TXCHARDISPVAL1_A0_B, // net ID: TXCHARDISPVAL1 lsb: 0  msb: 1 INPUT
			NetFlow* TXCHARISK0_A1_B, // net ID: TXCHARISK0 lsb: 0  msb: 1 INPUT
			NetFlow* TXCHARISK0_A0_B, // net ID: TXCHARISK0 lsb: 0  msb: 1 INPUT
			NetFlow* TXCHARISK1_A1_B, // net ID: TXCHARISK1 lsb: 0  msb: 1 INPUT
			NetFlow* TXCHARISK1_A0_B, // net ID: TXCHARISK1 lsb: 0  msb: 1 INPUT
			NetFlow* TXCOMSTART0_A0_B, // net ID: TXCOMSTART0 lsb: 0  msb: 0 INPUT
			NetFlow* TXCOMSTART1_A0_B, // net ID: TXCOMSTART1 lsb: 0  msb: 0 INPUT
			NetFlow* TXCOMTYPE0_A0_B, // net ID: TXCOMTYPE0 lsb: 0  msb: 0 INPUT
			NetFlow* TXCOMTYPE1_A0_B, // net ID: TXCOMTYPE1 lsb: 0  msb: 0 INPUT
			NetFlow* TXDATA0_A15_B, // net ID: TXDATA0 lsb: 0  msb: 15 INPUT
			NetFlow* TXDATA0_A14_B, // net ID: TXDATA0 lsb: 0  msb: 15 INPUT
			NetFlow* TXDATA0_A13_B, // net ID: TXDATA0 lsb: 0  msb: 15 INPUT
			NetFlow* TXDATA0_A12_B, // net ID: TXDATA0 lsb: 0  msb: 15 INPUT
			NetFlow* TXDATA0_A11_B, // net ID: TXDATA0 lsb: 0  msb: 15 INPUT
			NetFlow* TXDATA0_A10_B, // net ID: TXDATA0 lsb: 0  msb: 15 INPUT
			NetFlow* TXDATA0_A9_B, // net ID: TXDATA0 lsb: 0  msb: 15 INPUT
			NetFlow* TXDATA0_A8_B, // net ID: TXDATA0 lsb: 0  msb: 15 INPUT
			NetFlow* TXDATA0_A7_B, // net ID: TXDATA0 lsb: 0  msb: 15 INPUT
			NetFlow* TXDATA0_A6_B, // net ID: TXDATA0 lsb: 0  msb: 15 INPUT
			NetFlow* TXDATA0_A5_B, // net ID: TXDATA0 lsb: 0  msb: 15 INPUT
			NetFlow* TXDATA0_A4_B, // net ID: TXDATA0 lsb: 0  msb: 15 INPUT
			NetFlow* TXDATA0_A3_B, // net ID: TXDATA0 lsb: 0  msb: 15 INPUT
			NetFlow* TXDATA0_A2_B, // net ID: TXDATA0 lsb: 0  msb: 15 INPUT
			NetFlow* TXDATA0_A1_B, // net ID: TXDATA0 lsb: 0  msb: 15 INPUT
			NetFlow* TXDATA0_A0_B, // net ID: TXDATA0 lsb: 0  msb: 15 INPUT
			NetFlow* TXDATA1_A15_B, // net ID: TXDATA1 lsb: 0  msb: 15 INPUT
			NetFlow* TXDATA1_A14_B, // net ID: TXDATA1 lsb: 0  msb: 15 INPUT
			NetFlow* TXDATA1_A13_B, // net ID: TXDATA1 lsb: 0  msb: 15 INPUT
			NetFlow* TXDATA1_A12_B, // net ID: TXDATA1 lsb: 0  msb: 15 INPUT
			NetFlow* TXDATA1_A11_B, // net ID: TXDATA1 lsb: 0  msb: 15 INPUT
			NetFlow* TXDATA1_A10_B, // net ID: TXDATA1 lsb: 0  msb: 15 INPUT
			NetFlow* TXDATA1_A9_B, // net ID: TXDATA1 lsb: 0  msb: 15 INPUT
			NetFlow* TXDATA1_A8_B, // net ID: TXDATA1 lsb: 0  msb: 15 INPUT
			NetFlow* TXDATA1_A7_B, // net ID: TXDATA1 lsb: 0  msb: 15 INPUT
			NetFlow* TXDATA1_A6_B, // net ID: TXDATA1 lsb: 0  msb: 15 INPUT
			NetFlow* TXDATA1_A5_B, // net ID: TXDATA1 lsb: 0  msb: 15 INPUT
			NetFlow* TXDATA1_A4_B, // net ID: TXDATA1 lsb: 0  msb: 15 INPUT
			NetFlow* TXDATA1_A3_B, // net ID: TXDATA1 lsb: 0  msb: 15 INPUT
			NetFlow* TXDATA1_A2_B, // net ID: TXDATA1 lsb: 0  msb: 15 INPUT
			NetFlow* TXDATA1_A1_B, // net ID: TXDATA1 lsb: 0  msb: 15 INPUT
			NetFlow* TXDATA1_A0_B, // net ID: TXDATA1 lsb: 0  msb: 15 INPUT
			NetFlow* TXDATAWIDTH0_A0_B, // net ID: TXDATAWIDTH0 lsb: 0  msb: 0 INPUT
			NetFlow* TXDATAWIDTH1_A0_B, // net ID: TXDATAWIDTH1 lsb: 0  msb: 0 INPUT
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
			NetFlow* TXENPMAPHASEALIGN_A0_B, // net ID: TXENPMAPHASEALIGN lsb: 0  msb: 0 INPUT
			NetFlow* TXENPRBSTST0_A1_B, // net ID: TXENPRBSTST0 lsb: 0  msb: 1 INPUT
			NetFlow* TXENPRBSTST0_A0_B, // net ID: TXENPRBSTST0 lsb: 0  msb: 1 INPUT
			NetFlow* TXENPRBSTST1_A1_B, // net ID: TXENPRBSTST1 lsb: 0  msb: 1 INPUT
			NetFlow* TXENPRBSTST1_A0_B, // net ID: TXENPRBSTST1 lsb: 0  msb: 1 INPUT
			NetFlow* TXINHIBIT0_A0_B, // net ID: TXINHIBIT0 lsb: 0  msb: 0 INPUT
			NetFlow* TXINHIBIT1_A0_B, // net ID: TXINHIBIT1 lsb: 0  msb: 0 INPUT
			NetFlow* TXPMASETPHASE_A0_B, // net ID: TXPMASETPHASE lsb: 0  msb: 0 INPUT
			NetFlow* TXPOLARITY0_A0_B, // net ID: TXPOLARITY0 lsb: 0  msb: 0 INPUT
			NetFlow* TXPOLARITY1_A0_B, // net ID: TXPOLARITY1 lsb: 0  msb: 0 INPUT
			NetFlow* TXPOWERDOWN0_A1_B, // net ID: TXPOWERDOWN0 lsb: 0  msb: 1 INPUT
			NetFlow* TXPOWERDOWN0_A0_B, // net ID: TXPOWERDOWN0 lsb: 0  msb: 1 INPUT
			NetFlow* TXPOWERDOWN1_A1_B, // net ID: TXPOWERDOWN1 lsb: 0  msb: 1 INPUT
			NetFlow* TXPOWERDOWN1_A0_B, // net ID: TXPOWERDOWN1 lsb: 0  msb: 1 INPUT
			NetFlow* TXPREEMPHASIS0_A2_B, // net ID: TXPREEMPHASIS0 lsb: 0  msb: 2 INPUT
			NetFlow* TXPREEMPHASIS0_A1_B, // net ID: TXPREEMPHASIS0 lsb: 0  msb: 2 INPUT
			NetFlow* TXPREEMPHASIS0_A0_B, // net ID: TXPREEMPHASIS0 lsb: 0  msb: 2 INPUT
			NetFlow* TXPREEMPHASIS1_A2_B, // net ID: TXPREEMPHASIS1 lsb: 0  msb: 2 INPUT
			NetFlow* TXPREEMPHASIS1_A1_B, // net ID: TXPREEMPHASIS1 lsb: 0  msb: 2 INPUT
			NetFlow* TXPREEMPHASIS1_A0_B, // net ID: TXPREEMPHASIS1 lsb: 0  msb: 2 INPUT
			NetFlow* TXRESET0_A0_B, // net ID: TXRESET0 lsb: 0  msb: 0 INPUT
			NetFlow* TXRESET1_A0_B, // net ID: TXRESET1 lsb: 0  msb: 0 INPUT
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
			this->CHAN_BOND_MODE_0 = CHAN_BOND_MODE_0; // Default: "OFF"
			this->CHAN_BOND_MODE_1 = CHAN_BOND_MODE_1; // Default: "OFF"
			this->CHAN_BOND_SEQ_2_USE_0 = CHAN_BOND_SEQ_2_USE_0; // Default: "TRUE"
			this->CHAN_BOND_SEQ_2_USE_1 = CHAN_BOND_SEQ_2_USE_1; // Default: "TRUE"
			this->CLKINDC_B = CLKINDC_B; // Default: "TRUE"
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
			this->PCI_EXPRESS_MODE_0 = PCI_EXPRESS_MODE_0; // Default: "TRUE"
			this->PCI_EXPRESS_MODE_1 = PCI_EXPRESS_MODE_1; // Default: "TRUE"
			this->PCOMMA_DETECT_0 = PCOMMA_DETECT_0; // Default: "TRUE"
			this->PCOMMA_DETECT_1 = PCOMMA_DETECT_1; // Default: "TRUE"
			this->PLL_SATA_0 = PLL_SATA_0; // Default: "FALSE"
			this->PLL_SATA_1 = PLL_SATA_1; // Default: "FALSE"
			this->RCV_TERM_GND_0 = RCV_TERM_GND_0; // Default: "TRUE"
			this->RCV_TERM_GND_1 = RCV_TERM_GND_1; // Default: "TRUE"
			this->RCV_TERM_MID_0 = RCV_TERM_MID_0; // Default: "FALSE"
			this->RCV_TERM_MID_1 = RCV_TERM_MID_1; // Default: "FALSE"
			this->RCV_TERM_VTTRX_0 = RCV_TERM_VTTRX_0; // Default: "FALSE"
			this->RCV_TERM_VTTRX_1 = RCV_TERM_VTTRX_1; // Default: "FALSE"
			this->RX_BUFFER_USE_0 = RX_BUFFER_USE_0; // Default: "TRUE"
			this->RX_BUFFER_USE_1 = RX_BUFFER_USE_1; // Default: "TRUE"
			this->RX_DECODE_SEQ_MATCH_0 = RX_DECODE_SEQ_MATCH_0; // Default: "TRUE"
			this->RX_DECODE_SEQ_MATCH_1 = RX_DECODE_SEQ_MATCH_1; // Default: "TRUE"
			this->RX_LOSS_OF_SYNC_FSM_0 = RX_LOSS_OF_SYNC_FSM_0; // Default: "FALSE"
			this->RX_LOSS_OF_SYNC_FSM_1 = RX_LOSS_OF_SYNC_FSM_1; // Default: "FALSE"
			this->RX_SLIDE_MODE_0 = RX_SLIDE_MODE_0; // Default: "PCS"
			this->RX_SLIDE_MODE_1 = RX_SLIDE_MODE_1; // Default: "PCS"
			this->RX_STATUS_FMT_0 = RX_STATUS_FMT_0; // Default: "PCIE"
			this->RX_STATUS_FMT_1 = RX_STATUS_FMT_1; // Default: "PCIE"
			this->RX_XCLK_SEL_0 = RX_XCLK_SEL_0; // Default: "RXREC"
			this->RX_XCLK_SEL_1 = RX_XCLK_SEL_1; // Default: "RXREC"
			this->SIM_MODE = SIM_MODE; // Default: "FAST"
			this->SIM_PLL_PERDIV2 = SIM_PLL_PERDIV2; // Default: 9'h190
			this->SIM_RECEIVER_DETECT_PASS0 = SIM_RECEIVER_DETECT_PASS0; // Default: "FALSE"
			this->SIM_RECEIVER_DETECT_PASS1 = SIM_RECEIVER_DETECT_PASS1; // Default: "FALSE"
			this->TERMINATION_OVRD = TERMINATION_OVRD; // Default: "FALSE"
			this->TX_BUFFER_USE_0 = TX_BUFFER_USE_0; // Default: "TRUE"
			this->TX_BUFFER_USE_1 = TX_BUFFER_USE_1; // Default: "TRUE"
			this->TX_DIFF_BOOST_0 = TX_DIFF_BOOST_0; // Default: "TRUE"
			this->TX_DIFF_BOOST_1 = TX_DIFF_BOOST_1; // Default: "TRUE"
			this->TX_XCLK_SEL_0 = TX_XCLK_SEL_0; // Default: "TXUSR"
			this->TX_XCLK_SEL_1 = TX_XCLK_SEL_1; // Default: "TXUSR"
			this->TRANS_TIME_FROM_P2_0 = TRANS_TIME_FROM_P2_0; // Default: 16'h003c
			this->TRANS_TIME_FROM_P2_1 = TRANS_TIME_FROM_P2_1; // Default: 16'h003c
			this->TRANS_TIME_NON_P2_0 = TRANS_TIME_NON_P2_0; // Default: 16'h0019
			this->TRANS_TIME_NON_P2_1 = TRANS_TIME_NON_P2_1; // Default: 16'h0019
			this->TRANS_TIME_TO_P2_0 = TRANS_TIME_TO_P2_0; // Default: 16'h0064
			this->TRANS_TIME_TO_P2_1 = TRANS_TIME_TO_P2_1; // Default: 16'h0064
			this->PMA_RX_CFG_0 = PMA_RX_CFG_0; // Default: 25'h09f0089
			this->PMA_RX_CFG_1 = PMA_RX_CFG_1; // Default: 25'h09f0089
			this->PMA_CDR_SCAN_0 = PMA_CDR_SCAN_0; // Default: 27'h6c07640
			this->PMA_CDR_SCAN_1 = PMA_CDR_SCAN_1; // Default: 27'h6c07640
			this->PCS_COM_CFG = PCS_COM_CFG; // Default: 28'h1680a0e
			this->OOBDETECT_THRESHOLD_0 = OOBDETECT_THRESHOLD_0; // Default: 3'b001
			this->OOBDETECT_THRESHOLD_1 = OOBDETECT_THRESHOLD_1; // Default: 3'b001
			this->SATA_BURST_VAL_0 = SATA_BURST_VAL_0; // Default: 3'b100
			this->SATA_BURST_VAL_1 = SATA_BURST_VAL_1; // Default: 3'b100
			this->SATA_IDLE_VAL_0 = SATA_IDLE_VAL_0; // Default: 3'b011
			this->SATA_IDLE_VAL_1 = SATA_IDLE_VAL_1; // Default: 3'b011
			this->PRBS_ERR_THRESHOLD_0 = PRBS_ERR_THRESHOLD_0; // Default: 32'h1
			this->PRBS_ERR_THRESHOLD_1 = PRBS_ERR_THRESHOLD_1; // Default: 32'h1
			this->CHAN_BOND_SEQ_1_ENABLE_0 = CHAN_BOND_SEQ_1_ENABLE_0; // Default: 4'b1111
			this->CHAN_BOND_SEQ_1_ENABLE_1 = CHAN_BOND_SEQ_1_ENABLE_1; // Default: 4'b1111
			this->CHAN_BOND_SEQ_2_ENABLE_0 = CHAN_BOND_SEQ_2_ENABLE_0; // Default: 4'b1111
			this->CHAN_BOND_SEQ_2_ENABLE_1 = CHAN_BOND_SEQ_2_ENABLE_1; // Default: 4'b1111
			this->CLK_COR_SEQ_1_ENABLE_0 = CLK_COR_SEQ_1_ENABLE_0; // Default: 4'b1111
			this->CLK_COR_SEQ_1_ENABLE_1 = CLK_COR_SEQ_1_ENABLE_1; // Default: 4'b1111
			this->CLK_COR_SEQ_2_ENABLE_0 = CLK_COR_SEQ_2_ENABLE_0; // Default: 4'b1111
			this->CLK_COR_SEQ_2_ENABLE_1 = CLK_COR_SEQ_2_ENABLE_1; // Default: 4'b1111
			this->COM_BURST_VAL_0 = COM_BURST_VAL_0; // Default: 4'b1111
			this->COM_BURST_VAL_1 = COM_BURST_VAL_1; // Default: 4'b1111
			this->TERMINATION_CTRL = TERMINATION_CTRL; // Default: 5'b10100
			this->TXRX_INVERT_0 = TXRX_INVERT_0; // Default: 5'b00000
			this->TXRX_INVERT_1 = TXRX_INVERT_1; // Default: 5'b00000
			this->CHAN_BOND_SEQ_1_1_0 = CHAN_BOND_SEQ_1_1_0; // Default: 10'b0001001010
			this->CHAN_BOND_SEQ_1_1_1 = CHAN_BOND_SEQ_1_1_1; // Default: 10'b0001001010
			this->CHAN_BOND_SEQ_1_2_0 = CHAN_BOND_SEQ_1_2_0; // Default: 10'b0001001010
			this->CHAN_BOND_SEQ_1_2_1 = CHAN_BOND_SEQ_1_2_1; // Default: 10'b0001001010
			this->CHAN_BOND_SEQ_1_3_0 = CHAN_BOND_SEQ_1_3_0; // Default: 10'b0001001010
			this->CHAN_BOND_SEQ_1_3_1 = CHAN_BOND_SEQ_1_3_1; // Default: 10'b0001001010
			this->CHAN_BOND_SEQ_1_4_0 = CHAN_BOND_SEQ_1_4_0; // Default: 10'b0110111100
			this->CHAN_BOND_SEQ_1_4_1 = CHAN_BOND_SEQ_1_4_1; // Default: 10'b0110111100
			this->CHAN_BOND_SEQ_2_1_0 = CHAN_BOND_SEQ_2_1_0; // Default: 10'b0110111100
			this->CHAN_BOND_SEQ_2_1_1 = CHAN_BOND_SEQ_2_1_1; // Default: 10'b0110111100
			this->CHAN_BOND_SEQ_2_2_0 = CHAN_BOND_SEQ_2_2_0; // Default: 10'b0100111100
			this->CHAN_BOND_SEQ_2_2_1 = CHAN_BOND_SEQ_2_2_1; // Default: 10'b0100111100
			this->CHAN_BOND_SEQ_2_3_0 = CHAN_BOND_SEQ_2_3_0; // Default: 10'b0100111100
			this->CHAN_BOND_SEQ_2_3_1 = CHAN_BOND_SEQ_2_3_1; // Default: 10'b0100111100
			this->CHAN_BOND_SEQ_2_4_0 = CHAN_BOND_SEQ_2_4_0; // Default: 10'b0100111100
			this->CHAN_BOND_SEQ_2_4_1 = CHAN_BOND_SEQ_2_4_1; // Default: 10'b0100111100
			this->CLK_COR_SEQ_1_1_0 = CLK_COR_SEQ_1_1_0; // Default: 10'b0100011100
			this->CLK_COR_SEQ_1_1_1 = CLK_COR_SEQ_1_1_1; // Default: 10'b0100011100
			this->CLK_COR_SEQ_1_2_0 = CLK_COR_SEQ_1_2_0; // Default: 10'b0
			this->CLK_COR_SEQ_1_2_1 = CLK_COR_SEQ_1_2_1; // Default: 10'b0
			this->CLK_COR_SEQ_1_3_0 = CLK_COR_SEQ_1_3_0; // Default: 10'b0
			this->CLK_COR_SEQ_1_3_1 = CLK_COR_SEQ_1_3_1; // Default: 10'b0
			this->CLK_COR_SEQ_1_4_0 = CLK_COR_SEQ_1_4_0; // Default: 10'b0
			this->CLK_COR_SEQ_1_4_1 = CLK_COR_SEQ_1_4_1; // Default: 10'b0
			this->CLK_COR_SEQ_2_1_0 = CLK_COR_SEQ_2_1_0; // Default: 10'b0
			this->CLK_COR_SEQ_2_1_1 = CLK_COR_SEQ_2_1_1; // Default: 10'b0
			this->CLK_COR_SEQ_2_2_0 = CLK_COR_SEQ_2_2_0; // Default: 10'b0
			this->CLK_COR_SEQ_2_2_1 = CLK_COR_SEQ_2_2_1; // Default: 10'b0
			this->CLK_COR_SEQ_2_3_0 = CLK_COR_SEQ_2_3_0; // Default: 10'b0
			this->CLK_COR_SEQ_2_3_1 = CLK_COR_SEQ_2_3_1; // Default: 10'b0
			this->CLK_COR_SEQ_2_4_0 = CLK_COR_SEQ_2_4_0; // Default: 10'b0
			this->CLK_COR_SEQ_2_4_1 = CLK_COR_SEQ_2_4_1; // Default: 10'b0
			this->COMMA_10B_ENABLE_0 = COMMA_10B_ENABLE_0; // Default: 10'b1111111111
			this->COMMA_10B_ENABLE_1 = COMMA_10B_ENABLE_1; // Default: 10'b1111111111
			this->MCOMMA_10B_VALUE_0 = MCOMMA_10B_VALUE_0; // Default: 10'b1010000011
			this->MCOMMA_10B_VALUE_1 = MCOMMA_10B_VALUE_1; // Default: 10'b1010000011
			this->PCOMMA_10B_VALUE_0 = PCOMMA_10B_VALUE_0; // Default: 10'b0101111100
			this->PCOMMA_10B_VALUE_1 = PCOMMA_10B_VALUE_1; // Default: 10'b0101111100
			this->ALIGN_COMMA_WORD_0 = ALIGN_COMMA_WORD_0; // Default: 1
			this->ALIGN_COMMA_WORD_1 = ALIGN_COMMA_WORD_1; // Default: 1
			this->CHAN_BOND_1_MAX_SKEW_0 = CHAN_BOND_1_MAX_SKEW_0; // Default: 7
			this->CHAN_BOND_1_MAX_SKEW_1 = CHAN_BOND_1_MAX_SKEW_1; // Default: 7
			this->CHAN_BOND_2_MAX_SKEW_0 = CHAN_BOND_2_MAX_SKEW_0; // Default: 1
			this->CHAN_BOND_2_MAX_SKEW_1 = CHAN_BOND_2_MAX_SKEW_1; // Default: 1
			this->CHAN_BOND_LEVEL_0 = CHAN_BOND_LEVEL_0; // Default: 0
			this->CHAN_BOND_LEVEL_1 = CHAN_BOND_LEVEL_1; // Default: 0
			this->CHAN_BOND_SEQ_LEN_0 = CHAN_BOND_SEQ_LEN_0; // Default: 4
			this->CHAN_BOND_SEQ_LEN_1 = CHAN_BOND_SEQ_LEN_1; // Default: 4
			this->CLK25_DIVIDER = CLK25_DIVIDER; // Default: 4
			this->CLK_COR_ADJ_LEN_0 = CLK_COR_ADJ_LEN_0; // Default: 1
			this->CLK_COR_ADJ_LEN_1 = CLK_COR_ADJ_LEN_1; // Default: 1
			this->CLK_COR_DET_LEN_0 = CLK_COR_DET_LEN_0; // Default: 1
			this->CLK_COR_DET_LEN_1 = CLK_COR_DET_LEN_1; // Default: 1
			this->CLK_COR_MAX_LAT_0 = CLK_COR_MAX_LAT_0; // Default: 18
			this->CLK_COR_MAX_LAT_1 = CLK_COR_MAX_LAT_1; // Default: 18
			this->CLK_COR_MIN_LAT_0 = CLK_COR_MIN_LAT_0; // Default: 16
			this->CLK_COR_MIN_LAT_1 = CLK_COR_MIN_LAT_1; // Default: 16
			this->CLK_COR_REPEAT_WAIT_0 = CLK_COR_REPEAT_WAIT_0; // Default: 5
			this->CLK_COR_REPEAT_WAIT_1 = CLK_COR_REPEAT_WAIT_1; // Default: 5
			this->OOB_CLK_DIVIDER = OOB_CLK_DIVIDER; // Default: 4
			this->PLL_DIVSEL_FB = PLL_DIVSEL_FB; // Default: 5
			this->PLL_DIVSEL_REF = PLL_DIVSEL_REF; // Default: 2
			this->PLL_RXDIVSEL_OUT_0 = PLL_RXDIVSEL_OUT_0; // Default: 1
			this->PLL_RXDIVSEL_OUT_1 = PLL_RXDIVSEL_OUT_1; // Default: 1
			this->PLL_TXDIVSEL_COMM_OUT = PLL_TXDIVSEL_COMM_OUT; // Default: 1
			this->PLL_TXDIVSEL_OUT_0 = PLL_TXDIVSEL_OUT_0; // Default: 1
			this->PLL_TXDIVSEL_OUT_1 = PLL_TXDIVSEL_OUT_1; // Default: 1
			this->RX_LOS_INVALID_INCR_0 = RX_LOS_INVALID_INCR_0; // Default: 8
			this->RX_LOS_INVALID_INCR_1 = RX_LOS_INVALID_INCR_1; // Default: 8
			this->RX_LOS_THRESHOLD_0 = RX_LOS_THRESHOLD_0; // Default: 128
			this->RX_LOS_THRESHOLD_1 = RX_LOS_THRESHOLD_1; // Default: 128
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
			this->SIM_GTPRESET_SPEEDUP = SIM_GTPRESET_SPEEDUP; // Default: 0
			this->TERMINATION_IMP_0 = TERMINATION_IMP_0; // Default: 50
			this->TERMINATION_IMP_1 = TERMINATION_IMP_1; // Default: 50
			this->TX_SYNC_FILTERB = TX_SYNC_FILTERB; // Default: 1
			//Verilog Ports in definition order:
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
			this->RXCHARISCOMMA0_A1_B = RXCHARISCOMMA0_A1_B; // net ID: RXCHARISCOMMA0 lsb: 0  msb: 1 OUTPUT
			this->RXCHARISCOMMA0_A0_B = RXCHARISCOMMA0_A0_B; // net ID: RXCHARISCOMMA0 lsb: 0  msb: 1 OUTPUT
			this->RXCHARISCOMMA1_A1_B = RXCHARISCOMMA1_A1_B; // net ID: RXCHARISCOMMA1 lsb: 0  msb: 1 OUTPUT
			this->RXCHARISCOMMA1_A0_B = RXCHARISCOMMA1_A0_B; // net ID: RXCHARISCOMMA1 lsb: 0  msb: 1 OUTPUT
			this->RXCHARISK0_A1_B = RXCHARISK0_A1_B; // net ID: RXCHARISK0 lsb: 0  msb: 1 OUTPUT
			this->RXCHARISK0_A0_B = RXCHARISK0_A0_B; // net ID: RXCHARISK0 lsb: 0  msb: 1 OUTPUT
			this->RXCHARISK1_A1_B = RXCHARISK1_A1_B; // net ID: RXCHARISK1 lsb: 0  msb: 1 OUTPUT
			this->RXCHARISK1_A0_B = RXCHARISK1_A0_B; // net ID: RXCHARISK1 lsb: 0  msb: 1 OUTPUT
			this->RXCHBONDO0_A2_B = RXCHBONDO0_A2_B; // net ID: RXCHBONDO0 lsb: 0  msb: 2 OUTPUT
			this->RXCHBONDO0_A1_B = RXCHBONDO0_A1_B; // net ID: RXCHBONDO0 lsb: 0  msb: 2 OUTPUT
			this->RXCHBONDO0_A0_B = RXCHBONDO0_A0_B; // net ID: RXCHBONDO0 lsb: 0  msb: 2 OUTPUT
			this->RXCHBONDO1_A2_B = RXCHBONDO1_A2_B; // net ID: RXCHBONDO1 lsb: 0  msb: 2 OUTPUT
			this->RXCHBONDO1_A1_B = RXCHBONDO1_A1_B; // net ID: RXCHBONDO1 lsb: 0  msb: 2 OUTPUT
			this->RXCHBONDO1_A0_B = RXCHBONDO1_A0_B; // net ID: RXCHBONDO1 lsb: 0  msb: 2 OUTPUT
			this->RXCLKCORCNT0_A2_B = RXCLKCORCNT0_A2_B; // net ID: RXCLKCORCNT0 lsb: 0  msb: 2 OUTPUT
			this->RXCLKCORCNT0_A1_B = RXCLKCORCNT0_A1_B; // net ID: RXCLKCORCNT0 lsb: 0  msb: 2 OUTPUT
			this->RXCLKCORCNT0_A0_B = RXCLKCORCNT0_A0_B; // net ID: RXCLKCORCNT0 lsb: 0  msb: 2 OUTPUT
			this->RXCLKCORCNT1_A2_B = RXCLKCORCNT1_A2_B; // net ID: RXCLKCORCNT1 lsb: 0  msb: 2 OUTPUT
			this->RXCLKCORCNT1_A1_B = RXCLKCORCNT1_A1_B; // net ID: RXCLKCORCNT1 lsb: 0  msb: 2 OUTPUT
			this->RXCLKCORCNT1_A0_B = RXCLKCORCNT1_A0_B; // net ID: RXCLKCORCNT1 lsb: 0  msb: 2 OUTPUT
			this->RXCOMMADET0_A0_B = RXCOMMADET0_A0_B; // net ID: RXCOMMADET0 lsb: 0  msb: 0 OUTPUT
			this->RXCOMMADET1_A0_B = RXCOMMADET1_A0_B; // net ID: RXCOMMADET1 lsb: 0  msb: 0 OUTPUT
			this->RXDATA0_A15_B = RXDATA0_A15_B; // net ID: RXDATA0 lsb: 0  msb: 15 OUTPUT
			this->RXDATA0_A14_B = RXDATA0_A14_B; // net ID: RXDATA0 lsb: 0  msb: 15 OUTPUT
			this->RXDATA0_A13_B = RXDATA0_A13_B; // net ID: RXDATA0 lsb: 0  msb: 15 OUTPUT
			this->RXDATA0_A12_B = RXDATA0_A12_B; // net ID: RXDATA0 lsb: 0  msb: 15 OUTPUT
			this->RXDATA0_A11_B = RXDATA0_A11_B; // net ID: RXDATA0 lsb: 0  msb: 15 OUTPUT
			this->RXDATA0_A10_B = RXDATA0_A10_B; // net ID: RXDATA0 lsb: 0  msb: 15 OUTPUT
			this->RXDATA0_A9_B = RXDATA0_A9_B; // net ID: RXDATA0 lsb: 0  msb: 15 OUTPUT
			this->RXDATA0_A8_B = RXDATA0_A8_B; // net ID: RXDATA0 lsb: 0  msb: 15 OUTPUT
			this->RXDATA0_A7_B = RXDATA0_A7_B; // net ID: RXDATA0 lsb: 0  msb: 15 OUTPUT
			this->RXDATA0_A6_B = RXDATA0_A6_B; // net ID: RXDATA0 lsb: 0  msb: 15 OUTPUT
			this->RXDATA0_A5_B = RXDATA0_A5_B; // net ID: RXDATA0 lsb: 0  msb: 15 OUTPUT
			this->RXDATA0_A4_B = RXDATA0_A4_B; // net ID: RXDATA0 lsb: 0  msb: 15 OUTPUT
			this->RXDATA0_A3_B = RXDATA0_A3_B; // net ID: RXDATA0 lsb: 0  msb: 15 OUTPUT
			this->RXDATA0_A2_B = RXDATA0_A2_B; // net ID: RXDATA0 lsb: 0  msb: 15 OUTPUT
			this->RXDATA0_A1_B = RXDATA0_A1_B; // net ID: RXDATA0 lsb: 0  msb: 15 OUTPUT
			this->RXDATA0_A0_B = RXDATA0_A0_B; // net ID: RXDATA0 lsb: 0  msb: 15 OUTPUT
			this->RXDATA1_A15_B = RXDATA1_A15_B; // net ID: RXDATA1 lsb: 0  msb: 15 OUTPUT
			this->RXDATA1_A14_B = RXDATA1_A14_B; // net ID: RXDATA1 lsb: 0  msb: 15 OUTPUT
			this->RXDATA1_A13_B = RXDATA1_A13_B; // net ID: RXDATA1 lsb: 0  msb: 15 OUTPUT
			this->RXDATA1_A12_B = RXDATA1_A12_B; // net ID: RXDATA1 lsb: 0  msb: 15 OUTPUT
			this->RXDATA1_A11_B = RXDATA1_A11_B; // net ID: RXDATA1 lsb: 0  msb: 15 OUTPUT
			this->RXDATA1_A10_B = RXDATA1_A10_B; // net ID: RXDATA1 lsb: 0  msb: 15 OUTPUT
			this->RXDATA1_A9_B = RXDATA1_A9_B; // net ID: RXDATA1 lsb: 0  msb: 15 OUTPUT
			this->RXDATA1_A8_B = RXDATA1_A8_B; // net ID: RXDATA1 lsb: 0  msb: 15 OUTPUT
			this->RXDATA1_A7_B = RXDATA1_A7_B; // net ID: RXDATA1 lsb: 0  msb: 15 OUTPUT
			this->RXDATA1_A6_B = RXDATA1_A6_B; // net ID: RXDATA1 lsb: 0  msb: 15 OUTPUT
			this->RXDATA1_A5_B = RXDATA1_A5_B; // net ID: RXDATA1 lsb: 0  msb: 15 OUTPUT
			this->RXDATA1_A4_B = RXDATA1_A4_B; // net ID: RXDATA1 lsb: 0  msb: 15 OUTPUT
			this->RXDATA1_A3_B = RXDATA1_A3_B; // net ID: RXDATA1 lsb: 0  msb: 15 OUTPUT
			this->RXDATA1_A2_B = RXDATA1_A2_B; // net ID: RXDATA1 lsb: 0  msb: 15 OUTPUT
			this->RXDATA1_A1_B = RXDATA1_A1_B; // net ID: RXDATA1 lsb: 0  msb: 15 OUTPUT
			this->RXDATA1_A0_B = RXDATA1_A0_B; // net ID: RXDATA1 lsb: 0  msb: 15 OUTPUT
			this->RXDISPERR0_A1_B = RXDISPERR0_A1_B; // net ID: RXDISPERR0 lsb: 0  msb: 1 OUTPUT
			this->RXDISPERR0_A0_B = RXDISPERR0_A0_B; // net ID: RXDISPERR0 lsb: 0  msb: 1 OUTPUT
			this->RXDISPERR1_A1_B = RXDISPERR1_A1_B; // net ID: RXDISPERR1 lsb: 0  msb: 1 OUTPUT
			this->RXDISPERR1_A0_B = RXDISPERR1_A0_B; // net ID: RXDISPERR1 lsb: 0  msb: 1 OUTPUT
			this->RXELECIDLE0_A0_B = RXELECIDLE0_A0_B; // net ID: RXELECIDLE0 lsb: 0  msb: 0 OUTPUT
			this->RXELECIDLE1_A0_B = RXELECIDLE1_A0_B; // net ID: RXELECIDLE1 lsb: 0  msb: 0 OUTPUT
			this->RXLOSSOFSYNC0_A1_B = RXLOSSOFSYNC0_A1_B; // net ID: RXLOSSOFSYNC0 lsb: 0  msb: 1 OUTPUT
			this->RXLOSSOFSYNC0_A0_B = RXLOSSOFSYNC0_A0_B; // net ID: RXLOSSOFSYNC0 lsb: 0  msb: 1 OUTPUT
			this->RXLOSSOFSYNC1_A1_B = RXLOSSOFSYNC1_A1_B; // net ID: RXLOSSOFSYNC1 lsb: 0  msb: 1 OUTPUT
			this->RXLOSSOFSYNC1_A0_B = RXLOSSOFSYNC1_A0_B; // net ID: RXLOSSOFSYNC1 lsb: 0  msb: 1 OUTPUT
			this->RXNOTINTABLE0_A1_B = RXNOTINTABLE0_A1_B; // net ID: RXNOTINTABLE0 lsb: 0  msb: 1 OUTPUT
			this->RXNOTINTABLE0_A0_B = RXNOTINTABLE0_A0_B; // net ID: RXNOTINTABLE0 lsb: 0  msb: 1 OUTPUT
			this->RXNOTINTABLE1_A1_B = RXNOTINTABLE1_A1_B; // net ID: RXNOTINTABLE1 lsb: 0  msb: 1 OUTPUT
			this->RXNOTINTABLE1_A0_B = RXNOTINTABLE1_A0_B; // net ID: RXNOTINTABLE1 lsb: 0  msb: 1 OUTPUT
			this->RXOVERSAMPLEERR0_A0_B = RXOVERSAMPLEERR0_A0_B; // net ID: RXOVERSAMPLEERR0 lsb: 0  msb: 0 OUTPUT
			this->RXOVERSAMPLEERR1_A0_B = RXOVERSAMPLEERR1_A0_B; // net ID: RXOVERSAMPLEERR1 lsb: 0  msb: 0 OUTPUT
			this->RXPRBSERR0_A0_B = RXPRBSERR0_A0_B; // net ID: RXPRBSERR0 lsb: 0  msb: 0 OUTPUT
			this->RXPRBSERR1_A0_B = RXPRBSERR1_A0_B; // net ID: RXPRBSERR1 lsb: 0  msb: 0 OUTPUT
			this->RXRECCLK0_A0_B = RXRECCLK0_A0_B; // net ID: RXRECCLK0 lsb: 0  msb: 0 OUTPUT
			this->RXRECCLK1_A0_B = RXRECCLK1_A0_B; // net ID: RXRECCLK1 lsb: 0  msb: 0 OUTPUT
			this->RXRUNDISP0_A1_B = RXRUNDISP0_A1_B; // net ID: RXRUNDISP0 lsb: 0  msb: 1 OUTPUT
			this->RXRUNDISP0_A0_B = RXRUNDISP0_A0_B; // net ID: RXRUNDISP0 lsb: 0  msb: 1 OUTPUT
			this->RXRUNDISP1_A1_B = RXRUNDISP1_A1_B; // net ID: RXRUNDISP1 lsb: 0  msb: 1 OUTPUT
			this->RXRUNDISP1_A0_B = RXRUNDISP1_A0_B; // net ID: RXRUNDISP1 lsb: 0  msb: 1 OUTPUT
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
			this->TXKERR0_A1_B = TXKERR0_A1_B; // net ID: TXKERR0 lsb: 0  msb: 1 OUTPUT
			this->TXKERR0_A0_B = TXKERR0_A0_B; // net ID: TXKERR0 lsb: 0  msb: 1 OUTPUT
			this->TXKERR1_A1_B = TXKERR1_A1_B; // net ID: TXKERR1 lsb: 0  msb: 1 OUTPUT
			this->TXKERR1_A0_B = TXKERR1_A0_B; // net ID: TXKERR1 lsb: 0  msb: 1 OUTPUT
			this->TXN0_A0_B = TXN0_A0_B; // net ID: TXN0 lsb: 0  msb: 0 OUTPUT
			this->TXN1_A0_B = TXN1_A0_B; // net ID: TXN1 lsb: 0  msb: 0 OUTPUT
			this->TXOUTCLK0_A0_B = TXOUTCLK0_A0_B; // net ID: TXOUTCLK0 lsb: 0  msb: 0 OUTPUT
			this->TXOUTCLK1_A0_B = TXOUTCLK1_A0_B; // net ID: TXOUTCLK1 lsb: 0  msb: 0 OUTPUT
			this->TXP0_A0_B = TXP0_A0_B; // net ID: TXP0 lsb: 0  msb: 0 OUTPUT
			this->TXP1_A0_B = TXP1_A0_B; // net ID: TXP1 lsb: 0  msb: 0 OUTPUT
			this->TXRUNDISP0_A1_B = TXRUNDISP0_A1_B; // net ID: TXRUNDISP0 lsb: 0  msb: 1 OUTPUT
			this->TXRUNDISP0_A0_B = TXRUNDISP0_A0_B; // net ID: TXRUNDISP0 lsb: 0  msb: 1 OUTPUT
			this->TXRUNDISP1_A1_B = TXRUNDISP1_A1_B; // net ID: TXRUNDISP1 lsb: 0  msb: 1 OUTPUT
			this->TXRUNDISP1_A0_B = TXRUNDISP1_A0_B; // net ID: TXRUNDISP1 lsb: 0  msb: 1 OUTPUT
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
			this->GTPRESET_A0_B = GTPRESET_A0_B; // net ID: GTPRESET lsb: 0  msb: 0 INPUT
			this->GTPTEST_A3_B = GTPTEST_A3_B; // net ID: GTPTEST lsb: 0  msb: 3 INPUT
			this->GTPTEST_A2_B = GTPTEST_A2_B; // net ID: GTPTEST lsb: 0  msb: 3 INPUT
			this->GTPTEST_A1_B = GTPTEST_A1_B; // net ID: GTPTEST lsb: 0  msb: 3 INPUT
			this->GTPTEST_A0_B = GTPTEST_A0_B; // net ID: GTPTEST lsb: 0  msb: 3 INPUT
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
			this->RXCHBONDI0_A2_B = RXCHBONDI0_A2_B; // net ID: RXCHBONDI0 lsb: 0  msb: 2 INPUT
			this->RXCHBONDI0_A1_B = RXCHBONDI0_A1_B; // net ID: RXCHBONDI0 lsb: 0  msb: 2 INPUT
			this->RXCHBONDI0_A0_B = RXCHBONDI0_A0_B; // net ID: RXCHBONDI0 lsb: 0  msb: 2 INPUT
			this->RXCHBONDI1_A2_B = RXCHBONDI1_A2_B; // net ID: RXCHBONDI1 lsb: 0  msb: 2 INPUT
			this->RXCHBONDI1_A1_B = RXCHBONDI1_A1_B; // net ID: RXCHBONDI1 lsb: 0  msb: 2 INPUT
			this->RXCHBONDI1_A0_B = RXCHBONDI1_A0_B; // net ID: RXCHBONDI1 lsb: 0  msb: 2 INPUT
			this->RXCOMMADETUSE0_A0_B = RXCOMMADETUSE0_A0_B; // net ID: RXCOMMADETUSE0 lsb: 0  msb: 0 INPUT
			this->RXCOMMADETUSE1_A0_B = RXCOMMADETUSE1_A0_B; // net ID: RXCOMMADETUSE1 lsb: 0  msb: 0 INPUT
			this->RXDATAWIDTH0_A0_B = RXDATAWIDTH0_A0_B; // net ID: RXDATAWIDTH0 lsb: 0  msb: 0 INPUT
			this->RXDATAWIDTH1_A0_B = RXDATAWIDTH1_A0_B; // net ID: RXDATAWIDTH1 lsb: 0  msb: 0 INPUT
			this->RXDEC8B10BUSE0_A0_B = RXDEC8B10BUSE0_A0_B; // net ID: RXDEC8B10BUSE0 lsb: 0  msb: 0 INPUT
			this->RXDEC8B10BUSE1_A0_B = RXDEC8B10BUSE1_A0_B; // net ID: RXDEC8B10BUSE1 lsb: 0  msb: 0 INPUT
			this->RXELECIDLERESET0_A0_B = RXELECIDLERESET0_A0_B; // net ID: RXELECIDLERESET0 lsb: 0  msb: 0 INPUT
			this->RXELECIDLERESET1_A0_B = RXELECIDLERESET1_A0_B; // net ID: RXELECIDLERESET1 lsb: 0  msb: 0 INPUT
			this->RXENCHANSYNC0_A0_B = RXENCHANSYNC0_A0_B; // net ID: RXENCHANSYNC0 lsb: 0  msb: 0 INPUT
			this->RXENCHANSYNC1_A0_B = RXENCHANSYNC1_A0_B; // net ID: RXENCHANSYNC1 lsb: 0  msb: 0 INPUT
			this->RXENELECIDLERESETB_A0_B = RXENELECIDLERESETB_A0_B; // net ID: RXENELECIDLERESETB lsb: 0  msb: 0 INPUT
			this->RXENEQB0_A0_B = RXENEQB0_A0_B; // net ID: RXENEQB0 lsb: 0  msb: 0 INPUT
			this->RXENEQB1_A0_B = RXENEQB1_A0_B; // net ID: RXENEQB1 lsb: 0  msb: 0 INPUT
			this->RXENMCOMMAALIGN0_A0_B = RXENMCOMMAALIGN0_A0_B; // net ID: RXENMCOMMAALIGN0 lsb: 0  msb: 0 INPUT
			this->RXENMCOMMAALIGN1_A0_B = RXENMCOMMAALIGN1_A0_B; // net ID: RXENMCOMMAALIGN1 lsb: 0  msb: 0 INPUT
			this->RXENPCOMMAALIGN0_A0_B = RXENPCOMMAALIGN0_A0_B; // net ID: RXENPCOMMAALIGN0 lsb: 0  msb: 0 INPUT
			this->RXENPCOMMAALIGN1_A0_B = RXENPCOMMAALIGN1_A0_B; // net ID: RXENPCOMMAALIGN1 lsb: 0  msb: 0 INPUT
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
			this->TXBYPASS8B10B0_A1_B = TXBYPASS8B10B0_A1_B; // net ID: TXBYPASS8B10B0 lsb: 0  msb: 1 INPUT
			this->TXBYPASS8B10B0_A0_B = TXBYPASS8B10B0_A0_B; // net ID: TXBYPASS8B10B0 lsb: 0  msb: 1 INPUT
			this->TXBYPASS8B10B1_A1_B = TXBYPASS8B10B1_A1_B; // net ID: TXBYPASS8B10B1 lsb: 0  msb: 1 INPUT
			this->TXBYPASS8B10B1_A0_B = TXBYPASS8B10B1_A0_B; // net ID: TXBYPASS8B10B1 lsb: 0  msb: 1 INPUT
			this->TXCHARDISPMODE0_A1_B = TXCHARDISPMODE0_A1_B; // net ID: TXCHARDISPMODE0 lsb: 0  msb: 1 INPUT
			this->TXCHARDISPMODE0_A0_B = TXCHARDISPMODE0_A0_B; // net ID: TXCHARDISPMODE0 lsb: 0  msb: 1 INPUT
			this->TXCHARDISPMODE1_A1_B = TXCHARDISPMODE1_A1_B; // net ID: TXCHARDISPMODE1 lsb: 0  msb: 1 INPUT
			this->TXCHARDISPMODE1_A0_B = TXCHARDISPMODE1_A0_B; // net ID: TXCHARDISPMODE1 lsb: 0  msb: 1 INPUT
			this->TXCHARDISPVAL0_A1_B = TXCHARDISPVAL0_A1_B; // net ID: TXCHARDISPVAL0 lsb: 0  msb: 1 INPUT
			this->TXCHARDISPVAL0_A0_B = TXCHARDISPVAL0_A0_B; // net ID: TXCHARDISPVAL0 lsb: 0  msb: 1 INPUT
			this->TXCHARDISPVAL1_A1_B = TXCHARDISPVAL1_A1_B; // net ID: TXCHARDISPVAL1 lsb: 0  msb: 1 INPUT
			this->TXCHARDISPVAL1_A0_B = TXCHARDISPVAL1_A0_B; // net ID: TXCHARDISPVAL1 lsb: 0  msb: 1 INPUT
			this->TXCHARISK0_A1_B = TXCHARISK0_A1_B; // net ID: TXCHARISK0 lsb: 0  msb: 1 INPUT
			this->TXCHARISK0_A0_B = TXCHARISK0_A0_B; // net ID: TXCHARISK0 lsb: 0  msb: 1 INPUT
			this->TXCHARISK1_A1_B = TXCHARISK1_A1_B; // net ID: TXCHARISK1 lsb: 0  msb: 1 INPUT
			this->TXCHARISK1_A0_B = TXCHARISK1_A0_B; // net ID: TXCHARISK1 lsb: 0  msb: 1 INPUT
			this->TXCOMSTART0_A0_B = TXCOMSTART0_A0_B; // net ID: TXCOMSTART0 lsb: 0  msb: 0 INPUT
			this->TXCOMSTART1_A0_B = TXCOMSTART1_A0_B; // net ID: TXCOMSTART1 lsb: 0  msb: 0 INPUT
			this->TXCOMTYPE0_A0_B = TXCOMTYPE0_A0_B; // net ID: TXCOMTYPE0 lsb: 0  msb: 0 INPUT
			this->TXCOMTYPE1_A0_B = TXCOMTYPE1_A0_B; // net ID: TXCOMTYPE1 lsb: 0  msb: 0 INPUT
			this->TXDATA0_A15_B = TXDATA0_A15_B; // net ID: TXDATA0 lsb: 0  msb: 15 INPUT
			this->TXDATA0_A14_B = TXDATA0_A14_B; // net ID: TXDATA0 lsb: 0  msb: 15 INPUT
			this->TXDATA0_A13_B = TXDATA0_A13_B; // net ID: TXDATA0 lsb: 0  msb: 15 INPUT
			this->TXDATA0_A12_B = TXDATA0_A12_B; // net ID: TXDATA0 lsb: 0  msb: 15 INPUT
			this->TXDATA0_A11_B = TXDATA0_A11_B; // net ID: TXDATA0 lsb: 0  msb: 15 INPUT
			this->TXDATA0_A10_B = TXDATA0_A10_B; // net ID: TXDATA0 lsb: 0  msb: 15 INPUT
			this->TXDATA0_A9_B = TXDATA0_A9_B; // net ID: TXDATA0 lsb: 0  msb: 15 INPUT
			this->TXDATA0_A8_B = TXDATA0_A8_B; // net ID: TXDATA0 lsb: 0  msb: 15 INPUT
			this->TXDATA0_A7_B = TXDATA0_A7_B; // net ID: TXDATA0 lsb: 0  msb: 15 INPUT
			this->TXDATA0_A6_B = TXDATA0_A6_B; // net ID: TXDATA0 lsb: 0  msb: 15 INPUT
			this->TXDATA0_A5_B = TXDATA0_A5_B; // net ID: TXDATA0 lsb: 0  msb: 15 INPUT
			this->TXDATA0_A4_B = TXDATA0_A4_B; // net ID: TXDATA0 lsb: 0  msb: 15 INPUT
			this->TXDATA0_A3_B = TXDATA0_A3_B; // net ID: TXDATA0 lsb: 0  msb: 15 INPUT
			this->TXDATA0_A2_B = TXDATA0_A2_B; // net ID: TXDATA0 lsb: 0  msb: 15 INPUT
			this->TXDATA0_A1_B = TXDATA0_A1_B; // net ID: TXDATA0 lsb: 0  msb: 15 INPUT
			this->TXDATA0_A0_B = TXDATA0_A0_B; // net ID: TXDATA0 lsb: 0  msb: 15 INPUT
			this->TXDATA1_A15_B = TXDATA1_A15_B; // net ID: TXDATA1 lsb: 0  msb: 15 INPUT
			this->TXDATA1_A14_B = TXDATA1_A14_B; // net ID: TXDATA1 lsb: 0  msb: 15 INPUT
			this->TXDATA1_A13_B = TXDATA1_A13_B; // net ID: TXDATA1 lsb: 0  msb: 15 INPUT
			this->TXDATA1_A12_B = TXDATA1_A12_B; // net ID: TXDATA1 lsb: 0  msb: 15 INPUT
			this->TXDATA1_A11_B = TXDATA1_A11_B; // net ID: TXDATA1 lsb: 0  msb: 15 INPUT
			this->TXDATA1_A10_B = TXDATA1_A10_B; // net ID: TXDATA1 lsb: 0  msb: 15 INPUT
			this->TXDATA1_A9_B = TXDATA1_A9_B; // net ID: TXDATA1 lsb: 0  msb: 15 INPUT
			this->TXDATA1_A8_B = TXDATA1_A8_B; // net ID: TXDATA1 lsb: 0  msb: 15 INPUT
			this->TXDATA1_A7_B = TXDATA1_A7_B; // net ID: TXDATA1 lsb: 0  msb: 15 INPUT
			this->TXDATA1_A6_B = TXDATA1_A6_B; // net ID: TXDATA1 lsb: 0  msb: 15 INPUT
			this->TXDATA1_A5_B = TXDATA1_A5_B; // net ID: TXDATA1 lsb: 0  msb: 15 INPUT
			this->TXDATA1_A4_B = TXDATA1_A4_B; // net ID: TXDATA1 lsb: 0  msb: 15 INPUT
			this->TXDATA1_A3_B = TXDATA1_A3_B; // net ID: TXDATA1 lsb: 0  msb: 15 INPUT
			this->TXDATA1_A2_B = TXDATA1_A2_B; // net ID: TXDATA1 lsb: 0  msb: 15 INPUT
			this->TXDATA1_A1_B = TXDATA1_A1_B; // net ID: TXDATA1 lsb: 0  msb: 15 INPUT
			this->TXDATA1_A0_B = TXDATA1_A0_B; // net ID: TXDATA1 lsb: 0  msb: 15 INPUT
			this->TXDATAWIDTH0_A0_B = TXDATAWIDTH0_A0_B; // net ID: TXDATAWIDTH0 lsb: 0  msb: 0 INPUT
			this->TXDATAWIDTH1_A0_B = TXDATAWIDTH1_A0_B; // net ID: TXDATAWIDTH1 lsb: 0  msb: 0 INPUT
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
			this->TXENPMAPHASEALIGN_A0_B = TXENPMAPHASEALIGN_A0_B; // net ID: TXENPMAPHASEALIGN lsb: 0  msb: 0 INPUT
			this->TXENPRBSTST0_A1_B = TXENPRBSTST0_A1_B; // net ID: TXENPRBSTST0 lsb: 0  msb: 1 INPUT
			this->TXENPRBSTST0_A0_B = TXENPRBSTST0_A0_B; // net ID: TXENPRBSTST0 lsb: 0  msb: 1 INPUT
			this->TXENPRBSTST1_A1_B = TXENPRBSTST1_A1_B; // net ID: TXENPRBSTST1 lsb: 0  msb: 1 INPUT
			this->TXENPRBSTST1_A0_B = TXENPRBSTST1_A0_B; // net ID: TXENPRBSTST1 lsb: 0  msb: 1 INPUT
			this->TXINHIBIT0_A0_B = TXINHIBIT0_A0_B; // net ID: TXINHIBIT0 lsb: 0  msb: 0 INPUT
			this->TXINHIBIT1_A0_B = TXINHIBIT1_A0_B; // net ID: TXINHIBIT1 lsb: 0  msb: 0 INPUT
			this->TXPMASETPHASE_A0_B = TXPMASETPHASE_A0_B; // net ID: TXPMASETPHASE lsb: 0  msb: 0 INPUT
			this->TXPOLARITY0_A0_B = TXPOLARITY0_A0_B; // net ID: TXPOLARITY0 lsb: 0  msb: 0 INPUT
			this->TXPOLARITY1_A0_B = TXPOLARITY1_A0_B; // net ID: TXPOLARITY1 lsb: 0  msb: 0 INPUT
			this->TXPOWERDOWN0_A1_B = TXPOWERDOWN0_A1_B; // net ID: TXPOWERDOWN0 lsb: 0  msb: 1 INPUT
			this->TXPOWERDOWN0_A0_B = TXPOWERDOWN0_A0_B; // net ID: TXPOWERDOWN0 lsb: 0  msb: 1 INPUT
			this->TXPOWERDOWN1_A1_B = TXPOWERDOWN1_A1_B; // net ID: TXPOWERDOWN1 lsb: 0  msb: 1 INPUT
			this->TXPOWERDOWN1_A0_B = TXPOWERDOWN1_A0_B; // net ID: TXPOWERDOWN1 lsb: 0  msb: 1 INPUT
			this->TXPREEMPHASIS0_A2_B = TXPREEMPHASIS0_A2_B; // net ID: TXPREEMPHASIS0 lsb: 0  msb: 2 INPUT
			this->TXPREEMPHASIS0_A1_B = TXPREEMPHASIS0_A1_B; // net ID: TXPREEMPHASIS0 lsb: 0  msb: 2 INPUT
			this->TXPREEMPHASIS0_A0_B = TXPREEMPHASIS0_A0_B; // net ID: TXPREEMPHASIS0 lsb: 0  msb: 2 INPUT
			this->TXPREEMPHASIS1_A2_B = TXPREEMPHASIS1_A2_B; // net ID: TXPREEMPHASIS1 lsb: 0  msb: 2 INPUT
			this->TXPREEMPHASIS1_A1_B = TXPREEMPHASIS1_A1_B; // net ID: TXPREEMPHASIS1 lsb: 0  msb: 2 INPUT
			this->TXPREEMPHASIS1_A0_B = TXPREEMPHASIS1_A0_B; // net ID: TXPREEMPHASIS1 lsb: 0  msb: 2 INPUT
			this->TXRESET0_A0_B = TXRESET0_A0_B; // net ID: TXRESET0 lsb: 0  msb: 0 INPUT
			this->TXRESET1_A0_B = TXRESET1_A0_B; // net ID: TXRESET1 lsb: 0  msb: 0 INPUT
			this->TXUSRCLK0_A0_B = TXUSRCLK0_A0_B; // net ID: TXUSRCLK0 lsb: 0  msb: 0 INPUT
			this->TXUSRCLK1_A0_B = TXUSRCLK1_A0_B; // net ID: TXUSRCLK1 lsb: 0  msb: 0 INPUT
			this->TXUSRCLK20_A0_B = TXUSRCLK20_A0_B; // net ID: TXUSRCLK20 lsb: 0  msb: 0 INPUT
			this->TXUSRCLK21_A0_B = TXUSRCLK21_A0_B; // net ID: TXUSRCLK21 lsb: 0  msb: 0 INPUT
			
			register_wait_on_event_nets();
			
		}
		
		void register_wait_on_event_nets(){
		// TODO
		}
		
		bool calculate(simtime_t time){
		// TODO
		}
		};
		
}
#endif // X_GTP_DUAL_H
