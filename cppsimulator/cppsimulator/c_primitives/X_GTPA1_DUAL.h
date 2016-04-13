/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_GTPA1_DUAL: public Primitive{

		//Verilog Parameters:
		parameter_enum_t AC_CAP_DIS_0;
		parameter_enum_t AC_CAP_DIS_1;
		parameter_string_t ALIGN_COMMA_WORD_0;
		parameter_string_t ALIGN_COMMA_WORD_1;
		parameter_string_t CB2_INH_CC_PERIOD_0;
		parameter_string_t CB2_INH_CC_PERIOD_1;
		parameter_string_t CDR_PH_ADJ_TIME_0;
		parameter_string_t CDR_PH_ADJ_TIME_1;
		parameter_string_t CHAN_BOND_1_MAX_SKEW_0;
		parameter_string_t CHAN_BOND_1_MAX_SKEW_1;
		parameter_string_t CHAN_BOND_2_MAX_SKEW_0;
		parameter_string_t CHAN_BOND_2_MAX_SKEW_1;
		parameter_enum_t CHAN_BOND_KEEP_ALIGN_0;
		parameter_enum_t CHAN_BOND_KEEP_ALIGN_1;
		parameter_string_t CHAN_BOND_SEQ_1_1_0;
		parameter_string_t CHAN_BOND_SEQ_1_1_1;
		parameter_string_t CHAN_BOND_SEQ_1_2_0;
		parameter_string_t CHAN_BOND_SEQ_1_2_1;
		parameter_string_t CHAN_BOND_SEQ_1_3_0;
		parameter_string_t CHAN_BOND_SEQ_1_3_1;
		parameter_string_t CHAN_BOND_SEQ_1_4_0;
		parameter_string_t CHAN_BOND_SEQ_1_4_1;
		parameter_string_t CHAN_BOND_SEQ_1_ENABLE_0;
		parameter_string_t CHAN_BOND_SEQ_1_ENABLE_1;
		parameter_string_t CHAN_BOND_SEQ_2_1_0;
		parameter_string_t CHAN_BOND_SEQ_2_1_1;
		parameter_string_t CHAN_BOND_SEQ_2_2_0;
		parameter_string_t CHAN_BOND_SEQ_2_2_1;
		parameter_string_t CHAN_BOND_SEQ_2_3_0;
		parameter_string_t CHAN_BOND_SEQ_2_3_1;
		parameter_string_t CHAN_BOND_SEQ_2_4_0;
		parameter_string_t CHAN_BOND_SEQ_2_4_1;
		parameter_string_t CHAN_BOND_SEQ_2_ENABLE_0;
		parameter_string_t CHAN_BOND_SEQ_2_ENABLE_1;
		parameter_enum_t CHAN_BOND_SEQ_2_USE_0;
		parameter_enum_t CHAN_BOND_SEQ_2_USE_1;
		parameter_string_t CHAN_BOND_SEQ_LEN_0;
		parameter_string_t CHAN_BOND_SEQ_LEN_1;
		parameter_string_t CLK25_DIVIDER_0;
		parameter_string_t CLK25_DIVIDER_1;
		parameter_enum_t CLKINDC_B_0;
		parameter_enum_t CLKINDC_B_1;
		parameter_enum_t CLKRCV_TRST_0;
		parameter_enum_t CLKRCV_TRST_1;
		parameter_enum_t CLK_CORRECT_USE_0;
		parameter_enum_t CLK_CORRECT_USE_1;
		parameter_string_t CLK_COR_ADJ_LEN_0;
		parameter_string_t CLK_COR_ADJ_LEN_1;
		parameter_string_t CLK_COR_DET_LEN_0;
		parameter_string_t CLK_COR_DET_LEN_1;
		parameter_enum_t CLK_COR_INSERT_IDLE_FLAG_0;
		parameter_enum_t CLK_COR_INSERT_IDLE_FLAG_1;
		parameter_enum_t CLK_COR_KEEP_IDLE_0;
		parameter_enum_t CLK_COR_KEEP_IDLE_1;
		parameter_string_t CLK_COR_MAX_LAT_0;
		parameter_string_t CLK_COR_MAX_LAT_1;
		parameter_string_t CLK_COR_MIN_LAT_0;
		parameter_string_t CLK_COR_MIN_LAT_1;
		parameter_enum_t CLK_COR_PRECEDENCE_0;
		parameter_enum_t CLK_COR_PRECEDENCE_1;
		parameter_string_t CLK_COR_REPEAT_WAIT_0;
		parameter_string_t CLK_COR_REPEAT_WAIT_1;
		parameter_string_t CLK_COR_SEQ_1_1_0;
		parameter_string_t CLK_COR_SEQ_1_1_1;
		parameter_string_t CLK_COR_SEQ_1_2_0;
		parameter_string_t CLK_COR_SEQ_1_2_1;
		parameter_string_t CLK_COR_SEQ_1_3_0;
		parameter_string_t CLK_COR_SEQ_1_3_1;
		parameter_string_t CLK_COR_SEQ_1_4_0;
		parameter_string_t CLK_COR_SEQ_1_4_1;
		parameter_string_t CLK_COR_SEQ_1_ENABLE_0;
		parameter_string_t CLK_COR_SEQ_1_ENABLE_1;
		parameter_string_t CLK_COR_SEQ_2_1_0;
		parameter_string_t CLK_COR_SEQ_2_1_1;
		parameter_string_t CLK_COR_SEQ_2_2_0;
		parameter_string_t CLK_COR_SEQ_2_2_1;
		parameter_string_t CLK_COR_SEQ_2_3_0;
		parameter_string_t CLK_COR_SEQ_2_3_1;
		parameter_string_t CLK_COR_SEQ_2_4_0;
		parameter_string_t CLK_COR_SEQ_2_4_1;
		parameter_string_t CLK_COR_SEQ_2_ENABLE_0;
		parameter_string_t CLK_COR_SEQ_2_ENABLE_1;
		parameter_enum_t CLK_COR_SEQ_2_USE_0;
		parameter_enum_t CLK_COR_SEQ_2_USE_1;
		parameter_string_t CLK_OUT_GTP_SEL_0;
		parameter_string_t CLK_OUT_GTP_SEL_1;
		parameter_string_t CM_TRIM_0;
		parameter_string_t CM_TRIM_1;
		parameter_string_t COMMA_10B_ENABLE_0;
		parameter_string_t COMMA_10B_ENABLE_1;
		parameter_string_t COM_BURST_VAL_0;
		parameter_string_t COM_BURST_VAL_1;
		parameter_enum_t DEC_MCOMMA_DETECT_0;
		parameter_enum_t DEC_MCOMMA_DETECT_1;
		parameter_enum_t DEC_PCOMMA_DETECT_0;
		parameter_enum_t DEC_PCOMMA_DETECT_1;
		parameter_enum_t DEC_VALID_COMMA_ONLY_0;
		parameter_enum_t DEC_VALID_COMMA_ONLY_1;
		parameter_enum_t GTP_CFG_PWRUP_0;
		parameter_enum_t GTP_CFG_PWRUP_1;
		parameter_string_t MCOMMA_10B_VALUE_0;
		parameter_string_t MCOMMA_10B_VALUE_1;
		parameter_enum_t MCOMMA_DETECT_0;
		parameter_enum_t MCOMMA_DETECT_1;
		parameter_string_t OOBDETECT_THRESHOLD_0;
		parameter_string_t OOBDETECT_THRESHOLD_1;
		parameter_string_t OOB_CLK_DIVIDER_0;
		parameter_string_t OOB_CLK_DIVIDER_1;
		parameter_enum_t PCI_EXPRESS_MODE_0;
		parameter_enum_t PCI_EXPRESS_MODE_1;
		parameter_string_t PCOMMA_10B_VALUE_0;
		parameter_string_t PCOMMA_10B_VALUE_1;
		parameter_enum_t PCOMMA_DETECT_0;
		parameter_enum_t PCOMMA_DETECT_1;
		parameter_string_t PLLLKDET_CFG_0;
		parameter_string_t PLLLKDET_CFG_1;
		parameter_string_t PLL_COM_CFG_0;
		parameter_string_t PLL_COM_CFG_1;
		parameter_string_t PLL_CP_CFG_0;
		parameter_string_t PLL_CP_CFG_1;
		parameter_string_t PLL_DIVSEL_FB_0;
		parameter_string_t PLL_DIVSEL_FB_1;
		parameter_string_t PLL_DIVSEL_REF_0;
		parameter_string_t PLL_DIVSEL_REF_1;
		parameter_string_t PLL_RXDIVSEL_OUT_0;
		parameter_string_t PLL_RXDIVSEL_OUT_1;
		parameter_enum_t PLL_SATA_0;
		parameter_enum_t PLL_SATA_1;
		parameter_string_t PLL_SOURCE_0;
		parameter_string_t PLL_SOURCE_1;
		parameter_string_t PLL_TXDIVSEL_OUT_0;
		parameter_string_t PLL_TXDIVSEL_OUT_1;
		parameter_string_t PMA_CDR_SCAN_0;
		parameter_string_t PMA_CDR_SCAN_1;
		parameter_string_t PMA_COM_CFG_EAST;
		parameter_string_t PMA_COM_CFG_WEST;
		parameter_string_t PMA_RXSYNC_CFG_0;
		parameter_string_t PMA_RXSYNC_CFG_1;
		parameter_string_t PMA_RX_CFG_0;
		parameter_string_t PMA_RX_CFG_1;
		parameter_string_t PMA_TX_CFG_0;
		parameter_string_t PMA_TX_CFG_1;
		parameter_enum_t RCV_TERM_GND_0;
		parameter_enum_t RCV_TERM_GND_1;
		parameter_enum_t RCV_TERM_VTTRX_0;
		parameter_enum_t RCV_TERM_VTTRX_1;
		parameter_string_t RXEQ_CFG_0;
		parameter_string_t RXEQ_CFG_1;
		parameter_string_t RXPRBSERR_LOOPBACK_0;
		parameter_string_t RXPRBSERR_LOOPBACK_1;
		parameter_enum_t RX_BUFFER_USE_0;
		parameter_enum_t RX_BUFFER_USE_1;
		parameter_enum_t RX_DECODE_SEQ_MATCH_0;
		parameter_enum_t RX_DECODE_SEQ_MATCH_1;
		parameter_enum_t RX_EN_IDLE_HOLD_CDR_0;
		parameter_enum_t RX_EN_IDLE_HOLD_CDR_1;
		parameter_enum_t RX_EN_IDLE_RESET_BUF_0;
		parameter_enum_t RX_EN_IDLE_RESET_BUF_1;
		parameter_enum_t RX_EN_IDLE_RESET_FR_0;
		parameter_enum_t RX_EN_IDLE_RESET_FR_1;
		parameter_enum_t RX_EN_IDLE_RESET_PH_0;
		parameter_enum_t RX_EN_IDLE_RESET_PH_1;
		parameter_enum_t RX_EN_MODE_RESET_BUF_0;
		parameter_enum_t RX_EN_MODE_RESET_BUF_1;
		parameter_string_t RX_IDLE_HI_CNT_0;
		parameter_string_t RX_IDLE_HI_CNT_1;
		parameter_string_t RX_IDLE_LO_CNT_0;
		parameter_string_t RX_IDLE_LO_CNT_1;
		parameter_enum_t RX_LOSS_OF_SYNC_FSM_0;
		parameter_enum_t RX_LOSS_OF_SYNC_FSM_1;
		parameter_string_t RX_LOS_INVALID_INCR_0;
		parameter_string_t RX_LOS_INVALID_INCR_1;
		parameter_string_t RX_LOS_THRESHOLD_0;
		parameter_string_t RX_LOS_THRESHOLD_1;
		parameter_string_t RX_SLIDE_MODE_0;
		parameter_string_t RX_SLIDE_MODE_1;
		parameter_string_t RX_STATUS_FMT_0;
		parameter_string_t RX_STATUS_FMT_1;
		parameter_string_t RX_XCLK_SEL_0;
		parameter_string_t RX_XCLK_SEL_1;
		parameter_string_t SATA_BURST_VAL_0;
		parameter_string_t SATA_BURST_VAL_1;
		parameter_string_t SATA_IDLE_VAL_0;
		parameter_string_t SATA_IDLE_VAL_1;
		parameter_string_t SATA_MAX_BURST_0;
		parameter_string_t SATA_MAX_BURST_1;
		parameter_string_t SATA_MAX_INIT_0;
		parameter_string_t SATA_MAX_INIT_1;
		parameter_string_t SATA_MAX_WAKE_0;
		parameter_string_t SATA_MAX_WAKE_1;
		parameter_string_t SATA_MIN_BURST_0;
		parameter_string_t SATA_MIN_BURST_1;
		parameter_string_t SATA_MIN_INIT_0;
		parameter_string_t SATA_MIN_INIT_1;
		parameter_string_t SATA_MIN_WAKE_0;
		parameter_string_t SATA_MIN_WAKE_1;
		parameter_string_t SIM_GTPRESET_SPEEDUP;
		parameter_enum_t SIM_RECEIVER_DETECT_PASS;
		parameter_string_t SIM_REFCLK0_SOURCE;
		parameter_string_t SIM_REFCLK1_SOURCE;
		parameter_string_t SIM_TX_ELEC_IDLE_LEVEL;
		parameter_string_t SIM_VERSION;
		parameter_string_t TERMINATION_CTRL_0;
		parameter_string_t TERMINATION_CTRL_1;
		parameter_enum_t TERMINATION_OVRD_0;
		parameter_enum_t TERMINATION_OVRD_1;
		parameter_string_t TRANS_TIME_FROM_P2_0;
		parameter_string_t TRANS_TIME_FROM_P2_1;
		parameter_string_t TRANS_TIME_NON_P2_0;
		parameter_string_t TRANS_TIME_NON_P2_1;
		parameter_string_t TRANS_TIME_TO_P2_0;
		parameter_string_t TRANS_TIME_TO_P2_1;
		parameter_string_t TST_ATTR_0;
		parameter_string_t TST_ATTR_1;
		parameter_string_t TXRX_INVERT_0;
		parameter_string_t TXRX_INVERT_1;
		parameter_enum_t TX_BUFFER_USE_0;
		parameter_enum_t TX_BUFFER_USE_1;
		parameter_string_t TX_DETECT_RX_CFG_0;
		parameter_string_t TX_DETECT_RX_CFG_1;
		parameter_string_t TX_IDLE_DELAY_0;
		parameter_string_t TX_IDLE_DELAY_1;
		parameter_string_t TX_TDCC_CFG_0;
		parameter_string_t TX_TDCC_CFG_1;
		parameter_string_t TX_XCLK_SEL_0;
		parameter_string_t TX_XCLK_SEL_1;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* DRDY; // net ID: DRDY lsb: 0  msb: 0 OUTPUT
		NetFlow* DRPDO; // net ID: DRPDO lsb: 0  msb: 0 OUTPUT
		NetFlow* GTPCLKFBEAST; // net ID: GTPCLKFBEAST lsb: 0  msb: 0 OUTPUT
		NetFlow* GTPCLKFBWEST; // net ID: GTPCLKFBWEST lsb: 0  msb: 0 OUTPUT
		NetFlow* GTPCLKOUT0; // net ID: GTPCLKOUT0 lsb: 0  msb: 0 OUTPUT
		NetFlow* GTPCLKOUT1; // net ID: GTPCLKOUT1 lsb: 0  msb: 0 OUTPUT
		NetFlow* PHYSTATUS0; // net ID: PHYSTATUS0 lsb: 0  msb: 0 OUTPUT
		NetFlow* PHYSTATUS1; // net ID: PHYSTATUS1 lsb: 0  msb: 0 OUTPUT
		NetFlow* PLLLKDET0; // net ID: PLLLKDET0 lsb: 0  msb: 0 OUTPUT
		NetFlow* PLLLKDET1; // net ID: PLLLKDET1 lsb: 0  msb: 0 OUTPUT
		NetFlow* RCALOUTEAST; // net ID: RCALOUTEAST lsb: 0  msb: 0 OUTPUT
		NetFlow* RCALOUTWEST; // net ID: RCALOUTWEST lsb: 0  msb: 0 OUTPUT
		NetFlow* REFCLKOUT0; // net ID: REFCLKOUT0 lsb: 0  msb: 0 OUTPUT
		NetFlow* REFCLKOUT1; // net ID: REFCLKOUT1 lsb: 0  msb: 0 OUTPUT
		NetFlow* REFCLKPLL0; // net ID: REFCLKPLL0 lsb: 0  msb: 0 OUTPUT
		NetFlow* REFCLKPLL1; // net ID: REFCLKPLL1 lsb: 0  msb: 0 OUTPUT
		NetFlow* RESETDONE0; // net ID: RESETDONE0 lsb: 0  msb: 0 OUTPUT
		NetFlow* RESETDONE1; // net ID: RESETDONE1 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXBUFSTATUS0; // net ID: RXBUFSTATUS0 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXBUFSTATUS1; // net ID: RXBUFSTATUS1 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXBYTEISALIGNED0; // net ID: RXBYTEISALIGNED0 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXBYTEISALIGNED1; // net ID: RXBYTEISALIGNED1 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXBYTEREALIGN0; // net ID: RXBYTEREALIGN0 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXBYTEREALIGN1; // net ID: RXBYTEREALIGN1 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXCHANBONDSEQ0; // net ID: RXCHANBONDSEQ0 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXCHANBONDSEQ1; // net ID: RXCHANBONDSEQ1 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXCHANISALIGNED0; // net ID: RXCHANISALIGNED0 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXCHANISALIGNED1; // net ID: RXCHANISALIGNED1 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXCHANREALIGN0; // net ID: RXCHANREALIGN0 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXCHANREALIGN1; // net ID: RXCHANREALIGN1 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXCHARISCOMMA0; // net ID: RXCHARISCOMMA0 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXCHARISCOMMA1; // net ID: RXCHARISCOMMA1 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXCHARISK0; // net ID: RXCHARISK0 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXCHARISK1; // net ID: RXCHARISK1 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXCHBONDO; // net ID: RXCHBONDO lsb: 0  msb: 0 OUTPUT
		NetFlow* RXCLKCORCNT0; // net ID: RXCLKCORCNT0 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXCLKCORCNT1; // net ID: RXCLKCORCNT1 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXCOMMADET0; // net ID: RXCOMMADET0 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXCOMMADET1; // net ID: RXCOMMADET1 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXDATA0; // net ID: RXDATA0 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXDATA1; // net ID: RXDATA1 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXDISPERR0; // net ID: RXDISPERR0 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXDISPERR1; // net ID: RXDISPERR1 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXELECIDLE0; // net ID: RXELECIDLE0 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXELECIDLE1; // net ID: RXELECIDLE1 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXLOSSOFSYNC0; // net ID: RXLOSSOFSYNC0 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXLOSSOFSYNC1; // net ID: RXLOSSOFSYNC1 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXNOTINTABLE0; // net ID: RXNOTINTABLE0 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXNOTINTABLE1; // net ID: RXNOTINTABLE1 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXPRBSERR0; // net ID: RXPRBSERR0 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXPRBSERR1; // net ID: RXPRBSERR1 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXRECCLK0; // net ID: RXRECCLK0 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXRECCLK1; // net ID: RXRECCLK1 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXRUNDISP0; // net ID: RXRUNDISP0 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXRUNDISP1; // net ID: RXRUNDISP1 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXSTATUS0; // net ID: RXSTATUS0 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXSTATUS1; // net ID: RXSTATUS1 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXVALID0; // net ID: RXVALID0 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXVALID1; // net ID: RXVALID1 lsb: 0  msb: 0 OUTPUT
		NetFlow* TSTOUT0; // net ID: TSTOUT0 lsb: 0  msb: 0 OUTPUT
		NetFlow* TSTOUT1; // net ID: TSTOUT1 lsb: 0  msb: 0 OUTPUT
		NetFlow* TXBUFSTATUS0; // net ID: TXBUFSTATUS0 lsb: 0  msb: 0 OUTPUT
		NetFlow* TXBUFSTATUS1; // net ID: TXBUFSTATUS1 lsb: 0  msb: 0 OUTPUT
		NetFlow* TXKERR0; // net ID: TXKERR0 lsb: 0  msb: 0 OUTPUT
		NetFlow* TXKERR1; // net ID: TXKERR1 lsb: 0  msb: 0 OUTPUT
		NetFlow* TXN0; // net ID: TXN0 lsb: 0  msb: 0 OUTPUT
		NetFlow* TXN1; // net ID: TXN1 lsb: 0  msb: 0 OUTPUT
		NetFlow* TXOUTCLK0; // net ID: TXOUTCLK0 lsb: 0  msb: 0 OUTPUT
		NetFlow* TXOUTCLK1; // net ID: TXOUTCLK1 lsb: 0  msb: 0 OUTPUT
		NetFlow* TXP0; // net ID: TXP0 lsb: 0  msb: 0 OUTPUT
		NetFlow* TXP1; // net ID: TXP1 lsb: 0  msb: 0 OUTPUT
		NetFlow* TXRUNDISP0; // net ID: TXRUNDISP0 lsb: 0  msb: 0 OUTPUT
		NetFlow* TXRUNDISP1; // net ID: TXRUNDISP1 lsb: 0  msb: 0 OUTPUT
		NetFlow* CLK00; // net ID: CLK00 lsb: 0  msb: 0 INPUT
		NetFlow* CLK01; // net ID: CLK01 lsb: 0  msb: 0 INPUT
		NetFlow* CLK10; // net ID: CLK10 lsb: 0  msb: 0 INPUT
		NetFlow* CLK11; // net ID: CLK11 lsb: 0  msb: 0 INPUT
		NetFlow* CLKINEAST0; // net ID: CLKINEAST0 lsb: 0  msb: 0 INPUT
		NetFlow* CLKINEAST1; // net ID: CLKINEAST1 lsb: 0  msb: 0 INPUT
		NetFlow* CLKINWEST0; // net ID: CLKINWEST0 lsb: 0  msb: 0 INPUT
		NetFlow* CLKINWEST1; // net ID: CLKINWEST1 lsb: 0  msb: 0 INPUT
		NetFlow* DADDR; // net ID: DADDR lsb: 0  msb: 7 INPUT
		NetFlow* DCLK; // net ID: DCLK lsb: 0  msb: 0 INPUT
		NetFlow* DEN; // net ID: DEN lsb: 0  msb: 0 INPUT
		NetFlow* DI; // net ID: DI lsb: 0  msb: 15 INPUT
		NetFlow* DWE; // net ID: DWE lsb: 0  msb: 0 INPUT
		NetFlow* GATERXELECIDLE0; // net ID: GATERXELECIDLE0 lsb: 0  msb: 0 INPUT
		NetFlow* GATERXELECIDLE1; // net ID: GATERXELECIDLE1 lsb: 0  msb: 0 INPUT
		NetFlow* GCLK00; // net ID: GCLK00 lsb: 0  msb: 0 INPUT
		NetFlow* GCLK01; // net ID: GCLK01 lsb: 0  msb: 0 INPUT
		NetFlow* GCLK10; // net ID: GCLK10 lsb: 0  msb: 0 INPUT
		NetFlow* GCLK11; // net ID: GCLK11 lsb: 0  msb: 0 INPUT
		NetFlow* GTPCLKFBSEL0EAST; // net ID: GTPCLKFBSEL0EAST lsb: 0  msb: 1 INPUT
		NetFlow* GTPCLKFBSEL0WEST; // net ID: GTPCLKFBSEL0WEST lsb: 0  msb: 1 INPUT
		NetFlow* GTPCLKFBSEL1EAST; // net ID: GTPCLKFBSEL1EAST lsb: 0  msb: 1 INPUT
		NetFlow* GTPCLKFBSEL1WEST; // net ID: GTPCLKFBSEL1WEST lsb: 0  msb: 1 INPUT
		NetFlow* GTPRESET0; // net ID: GTPRESET0 lsb: 0  msb: 0 INPUT
		NetFlow* GTPRESET1; // net ID: GTPRESET1 lsb: 0  msb: 0 INPUT
		NetFlow* GTPTEST0; // net ID: GTPTEST0 lsb: 0  msb: 7 INPUT
		NetFlow* GTPTEST1; // net ID: GTPTEST1 lsb: 0  msb: 7 INPUT
		NetFlow* IGNORESIGDET0; // net ID: IGNORESIGDET0 lsb: 0  msb: 0 INPUT
		NetFlow* IGNORESIGDET1; // net ID: IGNORESIGDET1 lsb: 0  msb: 0 INPUT
		NetFlow* INTDATAWIDTH0; // net ID: INTDATAWIDTH0 lsb: 0  msb: 0 INPUT
		NetFlow* INTDATAWIDTH1; // net ID: INTDATAWIDTH1 lsb: 0  msb: 0 INPUT
		NetFlow* LOOPBACK0; // net ID: LOOPBACK0 lsb: 0  msb: 2 INPUT
		NetFlow* LOOPBACK1; // net ID: LOOPBACK1 lsb: 0  msb: 2 INPUT
		NetFlow* PLLCLK00; // net ID: PLLCLK00 lsb: 0  msb: 0 INPUT
		NetFlow* PLLCLK01; // net ID: PLLCLK01 lsb: 0  msb: 0 INPUT
		NetFlow* PLLCLK10; // net ID: PLLCLK10 lsb: 0  msb: 0 INPUT
		NetFlow* PLLCLK11; // net ID: PLLCLK11 lsb: 0  msb: 0 INPUT
		NetFlow* PLLLKDETEN0; // net ID: PLLLKDETEN0 lsb: 0  msb: 0 INPUT
		NetFlow* PLLLKDETEN1; // net ID: PLLLKDETEN1 lsb: 0  msb: 0 INPUT
		NetFlow* PLLPOWERDOWN0; // net ID: PLLPOWERDOWN0 lsb: 0  msb: 0 INPUT
		NetFlow* PLLPOWERDOWN1; // net ID: PLLPOWERDOWN1 lsb: 0  msb: 0 INPUT
		NetFlow* PRBSCNTRESET0; // net ID: PRBSCNTRESET0 lsb: 0  msb: 0 INPUT
		NetFlow* PRBSCNTRESET1; // net ID: PRBSCNTRESET1 lsb: 0  msb: 0 INPUT
		NetFlow* RCALINEAST; // net ID: RCALINEAST lsb: 0  msb: 4 INPUT
		NetFlow* RCALINWEST; // net ID: RCALINWEST lsb: 0  msb: 4 INPUT
		NetFlow* REFCLKPWRDNB0; // net ID: REFCLKPWRDNB0 lsb: 0  msb: 0 INPUT
		NetFlow* REFCLKPWRDNB1; // net ID: REFCLKPWRDNB1 lsb: 0  msb: 0 INPUT
		NetFlow* REFSELDYPLL0; // net ID: REFSELDYPLL0 lsb: 0  msb: 2 INPUT
		NetFlow* REFSELDYPLL1; // net ID: REFSELDYPLL1 lsb: 0  msb: 2 INPUT
		NetFlow* RXBUFRESET0; // net ID: RXBUFRESET0 lsb: 0  msb: 0 INPUT
		NetFlow* RXBUFRESET1; // net ID: RXBUFRESET1 lsb: 0  msb: 0 INPUT
		NetFlow* RXCDRRESET0; // net ID: RXCDRRESET0 lsb: 0  msb: 0 INPUT
		NetFlow* RXCDRRESET1; // net ID: RXCDRRESET1 lsb: 0  msb: 0 INPUT
		NetFlow* RXCHBONDI; // net ID: RXCHBONDI lsb: 0  msb: 2 INPUT
		NetFlow* RXCHBONDMASTER0; // net ID: RXCHBONDMASTER0 lsb: 0  msb: 0 INPUT
		NetFlow* RXCHBONDMASTER1; // net ID: RXCHBONDMASTER1 lsb: 0  msb: 0 INPUT
		NetFlow* RXCHBONDSLAVE0; // net ID: RXCHBONDSLAVE0 lsb: 0  msb: 0 INPUT
		NetFlow* RXCHBONDSLAVE1; // net ID: RXCHBONDSLAVE1 lsb: 0  msb: 0 INPUT
		NetFlow* RXCOMMADETUSE0; // net ID: RXCOMMADETUSE0 lsb: 0  msb: 0 INPUT
		NetFlow* RXCOMMADETUSE1; // net ID: RXCOMMADETUSE1 lsb: 0  msb: 0 INPUT
		NetFlow* RXDATAWIDTH0; // net ID: RXDATAWIDTH0 lsb: 0  msb: 1 INPUT
		NetFlow* RXDATAWIDTH1; // net ID: RXDATAWIDTH1 lsb: 0  msb: 1 INPUT
		NetFlow* RXDEC8B10BUSE0; // net ID: RXDEC8B10BUSE0 lsb: 0  msb: 0 INPUT
		NetFlow* RXDEC8B10BUSE1; // net ID: RXDEC8B10BUSE1 lsb: 0  msb: 0 INPUT
		NetFlow* RXENCHANSYNC0; // net ID: RXENCHANSYNC0 lsb: 0  msb: 0 INPUT
		NetFlow* RXENCHANSYNC1; // net ID: RXENCHANSYNC1 lsb: 0  msb: 0 INPUT
		NetFlow* RXENMCOMMAALIGN0; // net ID: RXENMCOMMAALIGN0 lsb: 0  msb: 0 INPUT
		NetFlow* RXENMCOMMAALIGN1; // net ID: RXENMCOMMAALIGN1 lsb: 0  msb: 0 INPUT
		NetFlow* RXENPCOMMAALIGN0; // net ID: RXENPCOMMAALIGN0 lsb: 0  msb: 0 INPUT
		NetFlow* RXENPCOMMAALIGN1; // net ID: RXENPCOMMAALIGN1 lsb: 0  msb: 0 INPUT
		NetFlow* RXENPMAPHASEALIGN0; // net ID: RXENPMAPHASEALIGN0 lsb: 0  msb: 0 INPUT
		NetFlow* RXENPMAPHASEALIGN1; // net ID: RXENPMAPHASEALIGN1 lsb: 0  msb: 0 INPUT
		NetFlow* RXENPRBSTST0; // net ID: RXENPRBSTST0 lsb: 0  msb: 2 INPUT
		NetFlow* RXENPRBSTST1; // net ID: RXENPRBSTST1 lsb: 0  msb: 2 INPUT
		NetFlow* RXEQMIX0; // net ID: RXEQMIX0 lsb: 0  msb: 1 INPUT
		NetFlow* RXEQMIX1; // net ID: RXEQMIX1 lsb: 0  msb: 1 INPUT
		NetFlow* RXN0; // net ID: RXN0 lsb: 0  msb: 0 INPUT
		NetFlow* RXN1; // net ID: RXN1 lsb: 0  msb: 0 INPUT
		NetFlow* RXP0; // net ID: RXP0 lsb: 0  msb: 0 INPUT
		NetFlow* RXP1; // net ID: RXP1 lsb: 0  msb: 0 INPUT
		NetFlow* RXPMASETPHASE0; // net ID: RXPMASETPHASE0 lsb: 0  msb: 0 INPUT
		NetFlow* RXPMASETPHASE1; // net ID: RXPMASETPHASE1 lsb: 0  msb: 0 INPUT
		NetFlow* RXPOLARITY0; // net ID: RXPOLARITY0 lsb: 0  msb: 0 INPUT
		NetFlow* RXPOLARITY1; // net ID: RXPOLARITY1 lsb: 0  msb: 0 INPUT
		NetFlow* RXPOWERDOWN0; // net ID: RXPOWERDOWN0 lsb: 0  msb: 1 INPUT
		NetFlow* RXPOWERDOWN1; // net ID: RXPOWERDOWN1 lsb: 0  msb: 1 INPUT
		NetFlow* RXRESET0; // net ID: RXRESET0 lsb: 0  msb: 0 INPUT
		NetFlow* RXRESET1; // net ID: RXRESET1 lsb: 0  msb: 0 INPUT
		NetFlow* RXSLIDE0; // net ID: RXSLIDE0 lsb: 0  msb: 0 INPUT
		NetFlow* RXSLIDE1; // net ID: RXSLIDE1 lsb: 0  msb: 0 INPUT
		NetFlow* RXUSRCLK0; // net ID: RXUSRCLK0 lsb: 0  msb: 0 INPUT
		NetFlow* RXUSRCLK1; // net ID: RXUSRCLK1 lsb: 0  msb: 0 INPUT
		NetFlow* RXUSRCLK20; // net ID: RXUSRCLK20 lsb: 0  msb: 0 INPUT
		NetFlow* RXUSRCLK21; // net ID: RXUSRCLK21 lsb: 0  msb: 0 INPUT
		NetFlow* TSTCLK0; // net ID: TSTCLK0 lsb: 0  msb: 0 INPUT
		NetFlow* TSTCLK1; // net ID: TSTCLK1 lsb: 0  msb: 0 INPUT
		NetFlow* TSTIN0; // net ID: TSTIN0 lsb: 0  msb: 11 INPUT
		NetFlow* TSTIN1; // net ID: TSTIN1 lsb: 0  msb: 11 INPUT
		NetFlow* TXBUFDIFFCTRL0; // net ID: TXBUFDIFFCTRL0 lsb: 0  msb: 2 INPUT
		NetFlow* TXBUFDIFFCTRL1; // net ID: TXBUFDIFFCTRL1 lsb: 0  msb: 2 INPUT
		NetFlow* TXBYPASS8B10B0; // net ID: TXBYPASS8B10B0 lsb: 0  msb: 3 INPUT
		NetFlow* TXBYPASS8B10B1; // net ID: TXBYPASS8B10B1 lsb: 0  msb: 3 INPUT
		NetFlow* TXCHARDISPMODE0; // net ID: TXCHARDISPMODE0 lsb: 0  msb: 3 INPUT
		NetFlow* TXCHARDISPMODE1; // net ID: TXCHARDISPMODE1 lsb: 0  msb: 3 INPUT
		NetFlow* TXCHARDISPVAL0; // net ID: TXCHARDISPVAL0 lsb: 0  msb: 3 INPUT
		NetFlow* TXCHARDISPVAL1; // net ID: TXCHARDISPVAL1 lsb: 0  msb: 3 INPUT
		NetFlow* TXCHARISK0; // net ID: TXCHARISK0 lsb: 0  msb: 3 INPUT
		NetFlow* TXCHARISK1; // net ID: TXCHARISK1 lsb: 0  msb: 3 INPUT
		NetFlow* TXCOMSTART0; // net ID: TXCOMSTART0 lsb: 0  msb: 0 INPUT
		NetFlow* TXCOMSTART1; // net ID: TXCOMSTART1 lsb: 0  msb: 0 INPUT
		NetFlow* TXCOMTYPE0; // net ID: TXCOMTYPE0 lsb: 0  msb: 0 INPUT
		NetFlow* TXCOMTYPE1; // net ID: TXCOMTYPE1 lsb: 0  msb: 0 INPUT
		NetFlow* TXDATA0; // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA1; // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
		NetFlow* TXDATAWIDTH0; // net ID: TXDATAWIDTH0 lsb: 0  msb: 1 INPUT
		NetFlow* TXDATAWIDTH1; // net ID: TXDATAWIDTH1 lsb: 0  msb: 1 INPUT
		NetFlow* TXDETECTRX0; // net ID: TXDETECTRX0 lsb: 0  msb: 0 INPUT
		NetFlow* TXDETECTRX1; // net ID: TXDETECTRX1 lsb: 0  msb: 0 INPUT
		NetFlow* TXDIFFCTRL0; // net ID: TXDIFFCTRL0 lsb: 0  msb: 3 INPUT
		NetFlow* TXDIFFCTRL1; // net ID: TXDIFFCTRL1 lsb: 0  msb: 3 INPUT
		NetFlow* TXELECIDLE0; // net ID: TXELECIDLE0 lsb: 0  msb: 0 INPUT
		NetFlow* TXELECIDLE1; // net ID: TXELECIDLE1 lsb: 0  msb: 0 INPUT
		NetFlow* TXENC8B10BUSE0; // net ID: TXENC8B10BUSE0 lsb: 0  msb: 0 INPUT
		NetFlow* TXENC8B10BUSE1; // net ID: TXENC8B10BUSE1 lsb: 0  msb: 0 INPUT
		NetFlow* TXENPMAPHASEALIGN0; // net ID: TXENPMAPHASEALIGN0 lsb: 0  msb: 0 INPUT
		NetFlow* TXENPMAPHASEALIGN1; // net ID: TXENPMAPHASEALIGN1 lsb: 0  msb: 0 INPUT
		NetFlow* TXENPRBSTST0; // net ID: TXENPRBSTST0 lsb: 0  msb: 2 INPUT
		NetFlow* TXENPRBSTST1; // net ID: TXENPRBSTST1 lsb: 0  msb: 2 INPUT
		NetFlow* TXINHIBIT0; // net ID: TXINHIBIT0 lsb: 0  msb: 0 INPUT
		NetFlow* TXINHIBIT1; // net ID: TXINHIBIT1 lsb: 0  msb: 0 INPUT
		NetFlow* TXPDOWNASYNCH0; // net ID: TXPDOWNASYNCH0 lsb: 0  msb: 0 INPUT
		NetFlow* TXPDOWNASYNCH1; // net ID: TXPDOWNASYNCH1 lsb: 0  msb: 0 INPUT
		NetFlow* TXPMASETPHASE0; // net ID: TXPMASETPHASE0 lsb: 0  msb: 0 INPUT
		NetFlow* TXPMASETPHASE1; // net ID: TXPMASETPHASE1 lsb: 0  msb: 0 INPUT
		NetFlow* TXPOLARITY0; // net ID: TXPOLARITY0 lsb: 0  msb: 0 INPUT
		NetFlow* TXPOLARITY1; // net ID: TXPOLARITY1 lsb: 0  msb: 0 INPUT
		NetFlow* TXPOWERDOWN0; // net ID: TXPOWERDOWN0 lsb: 0  msb: 1 INPUT
		NetFlow* TXPOWERDOWN1; // net ID: TXPOWERDOWN1 lsb: 0  msb: 1 INPUT
		NetFlow* TXPRBSFORCEERR0; // net ID: TXPRBSFORCEERR0 lsb: 0  msb: 0 INPUT
		NetFlow* TXPRBSFORCEERR1; // net ID: TXPRBSFORCEERR1 lsb: 0  msb: 0 INPUT
		NetFlow* TXPREEMPHASIS0; // net ID: TXPREEMPHASIS0 lsb: 0  msb: 2 INPUT
		NetFlow* TXPREEMPHASIS1; // net ID: TXPREEMPHASIS1 lsb: 0  msb: 2 INPUT
		NetFlow* TXRESET0; // net ID: TXRESET0 lsb: 0  msb: 0 INPUT
		NetFlow* TXRESET1; // net ID: TXRESET1 lsb: 0  msb: 0 INPUT
		NetFlow* TXUSRCLK0; // net ID: TXUSRCLK0 lsb: 0  msb: 0 INPUT
		NetFlow* TXUSRCLK1; // net ID: TXUSRCLK1 lsb: 0  msb: 0 INPUT
		NetFlow* TXUSRCLK20; // net ID: TXUSRCLK20 lsb: 0  msb: 0 INPUT
		NetFlow* TXUSRCLK21; // net ID: TXUSRCLK21 lsb: 0  msb: 0 INPUT
		NetFlow* USRCODEERR0; // net ID: USRCODEERR0 lsb: 0  msb: 0 INPUT
		NetFlow* USRCODEERR1; // net ID: USRCODEERR1 lsb: 0  msb: 0 INPUT
		
		X_GTPA1_DUAL(
			const char * name,
			//Verilog Parameters:
			parameter_enum_t AC_CAP_DIS_0, // Default: "TRUE"
			parameter_enum_t AC_CAP_DIS_1, // Default: "TRUE"
			parameter_string_t ALIGN_COMMA_WORD_0, // Default: 1
			parameter_string_t ALIGN_COMMA_WORD_1, // Default: 1
			parameter_string_t CB2_INH_CC_PERIOD_0, // Default: 8
			parameter_string_t CB2_INH_CC_PERIOD_1, // Default: 8
			parameter_string_t CDR_PH_ADJ_TIME_0, // Default: 5'b01010
			parameter_string_t CDR_PH_ADJ_TIME_1, // Default: 5'b01010
			parameter_string_t CHAN_BOND_1_MAX_SKEW_0, // Default: 7
			parameter_string_t CHAN_BOND_1_MAX_SKEW_1, // Default: 7
			parameter_string_t CHAN_BOND_2_MAX_SKEW_0, // Default: 1
			parameter_string_t CHAN_BOND_2_MAX_SKEW_1, // Default: 1
			parameter_enum_t CHAN_BOND_KEEP_ALIGN_0, // Default: "FALSE"
			parameter_enum_t CHAN_BOND_KEEP_ALIGN_1, // Default: "FALSE"
			parameter_string_t CHAN_BOND_SEQ_1_1_0, // Default: 10'b0101111100
			parameter_string_t CHAN_BOND_SEQ_1_1_1, // Default: 10'b0101111100
			parameter_string_t CHAN_BOND_SEQ_1_2_0, // Default: 10'b0001001010
			parameter_string_t CHAN_BOND_SEQ_1_2_1, // Default: 10'b0001001010
			parameter_string_t CHAN_BOND_SEQ_1_3_0, // Default: 10'b0001001010
			parameter_string_t CHAN_BOND_SEQ_1_3_1, // Default: 10'b0001001010
			parameter_string_t CHAN_BOND_SEQ_1_4_0, // Default: 10'b0110111100
			parameter_string_t CHAN_BOND_SEQ_1_4_1, // Default: 10'b0110111100
			parameter_string_t CHAN_BOND_SEQ_1_ENABLE_0, // Default: 4'b1111
			parameter_string_t CHAN_BOND_SEQ_1_ENABLE_1, // Default: 4'b1111
			parameter_string_t CHAN_BOND_SEQ_2_1_0, // Default: 10'b0110111100
			parameter_string_t CHAN_BOND_SEQ_2_1_1, // Default: 10'b0110111100
			parameter_string_t CHAN_BOND_SEQ_2_2_0, // Default: 10'b0100111100
			parameter_string_t CHAN_BOND_SEQ_2_2_1, // Default: 10'b0100111100
			parameter_string_t CHAN_BOND_SEQ_2_3_0, // Default: 10'b0100111100
			parameter_string_t CHAN_BOND_SEQ_2_3_1, // Default: 10'b0100111100
			parameter_string_t CHAN_BOND_SEQ_2_4_0, // Default: 10'b0100111100
			parameter_string_t CHAN_BOND_SEQ_2_4_1, // Default: 10'b0100111100
			parameter_string_t CHAN_BOND_SEQ_2_ENABLE_0, // Default: 4'b1111
			parameter_string_t CHAN_BOND_SEQ_2_ENABLE_1, // Default: 4'b1111
			parameter_enum_t CHAN_BOND_SEQ_2_USE_0, // Default: "FALSE"
			parameter_enum_t CHAN_BOND_SEQ_2_USE_1, // Default: "FALSE"
			parameter_string_t CHAN_BOND_SEQ_LEN_0, // Default: 1
			parameter_string_t CHAN_BOND_SEQ_LEN_1, // Default: 1
			parameter_string_t CLK25_DIVIDER_0, // Default: 4
			parameter_string_t CLK25_DIVIDER_1, // Default: 4
			parameter_enum_t CLKINDC_B_0, // Default: "TRUE"
			parameter_enum_t CLKINDC_B_1, // Default: "TRUE"
			parameter_enum_t CLKRCV_TRST_0, // Default: "TRUE"
			parameter_enum_t CLKRCV_TRST_1, // Default: "TRUE"
			parameter_enum_t CLK_CORRECT_USE_0, // Default: "TRUE"
			parameter_enum_t CLK_CORRECT_USE_1, // Default: "TRUE"
			parameter_string_t CLK_COR_ADJ_LEN_0, // Default: 1
			parameter_string_t CLK_COR_ADJ_LEN_1, // Default: 1
			parameter_string_t CLK_COR_DET_LEN_0, // Default: 1
			parameter_string_t CLK_COR_DET_LEN_1, // Default: 1
			parameter_enum_t CLK_COR_INSERT_IDLE_FLAG_0, // Default: "FALSE"
			parameter_enum_t CLK_COR_INSERT_IDLE_FLAG_1, // Default: "FALSE"
			parameter_enum_t CLK_COR_KEEP_IDLE_0, // Default: "FALSE"
			parameter_enum_t CLK_COR_KEEP_IDLE_1, // Default: "FALSE"
			parameter_string_t CLK_COR_MAX_LAT_0, // Default: 20
			parameter_string_t CLK_COR_MAX_LAT_1, // Default: 20
			parameter_string_t CLK_COR_MIN_LAT_0, // Default: 18
			parameter_string_t CLK_COR_MIN_LAT_1, // Default: 18
			parameter_enum_t CLK_COR_PRECEDENCE_0, // Default: "TRUE"
			parameter_enum_t CLK_COR_PRECEDENCE_1, // Default: "TRUE"
			parameter_string_t CLK_COR_REPEAT_WAIT_0, // Default: 0
			parameter_string_t CLK_COR_REPEAT_WAIT_1, // Default: 0
			parameter_string_t CLK_COR_SEQ_1_1_0, // Default: 10'b0100011100
			parameter_string_t CLK_COR_SEQ_1_1_1, // Default: 10'b0100011100
			parameter_string_t CLK_COR_SEQ_1_2_0, // Default: 10'b0000000000
			parameter_string_t CLK_COR_SEQ_1_2_1, // Default: 10'b0000000000
			parameter_string_t CLK_COR_SEQ_1_3_0, // Default: 10'b0000000000
			parameter_string_t CLK_COR_SEQ_1_3_1, // Default: 10'b0000000000
			parameter_string_t CLK_COR_SEQ_1_4_0, // Default: 10'b0000000000
			parameter_string_t CLK_COR_SEQ_1_4_1, // Default: 10'b0000000000
			parameter_string_t CLK_COR_SEQ_1_ENABLE_0, // Default: 4'b1111
			parameter_string_t CLK_COR_SEQ_1_ENABLE_1, // Default: 4'b1111
			parameter_string_t CLK_COR_SEQ_2_1_0, // Default: 10'b0000000000
			parameter_string_t CLK_COR_SEQ_2_1_1, // Default: 10'b0000000000
			parameter_string_t CLK_COR_SEQ_2_2_0, // Default: 10'b0000000000
			parameter_string_t CLK_COR_SEQ_2_2_1, // Default: 10'b0000000000
			parameter_string_t CLK_COR_SEQ_2_3_0, // Default: 10'b0000000000
			parameter_string_t CLK_COR_SEQ_2_3_1, // Default: 10'b0000000000
			parameter_string_t CLK_COR_SEQ_2_4_0, // Default: 10'b0000000000
			parameter_string_t CLK_COR_SEQ_2_4_1, // Default: 10'b0000000000
			parameter_string_t CLK_COR_SEQ_2_ENABLE_0, // Default: 4'b1111
			parameter_string_t CLK_COR_SEQ_2_ENABLE_1, // Default: 4'b1111
			parameter_enum_t CLK_COR_SEQ_2_USE_0, // Default: "FALSE"
			parameter_enum_t CLK_COR_SEQ_2_USE_1, // Default: "FALSE"
			parameter_string_t CLK_OUT_GTP_SEL_0, // Default: "REFCLKPLL0"
			parameter_string_t CLK_OUT_GTP_SEL_1, // Default: "REFCLKPLL1"
			parameter_string_t CM_TRIM_0, // Default: 2'b00
			parameter_string_t CM_TRIM_1, // Default: 2'b00
			parameter_string_t COMMA_10B_ENABLE_0, // Default: 10'b1111111111
			parameter_string_t COMMA_10B_ENABLE_1, // Default: 10'b1111111111
			parameter_string_t COM_BURST_VAL_0, // Default: 4'b1111
			parameter_string_t COM_BURST_VAL_1, // Default: 4'b1111
			parameter_enum_t DEC_MCOMMA_DETECT_0, // Default: "TRUE"
			parameter_enum_t DEC_MCOMMA_DETECT_1, // Default: "TRUE"
			parameter_enum_t DEC_PCOMMA_DETECT_0, // Default: "TRUE"
			parameter_enum_t DEC_PCOMMA_DETECT_1, // Default: "TRUE"
			parameter_enum_t DEC_VALID_COMMA_ONLY_0, // Default: "TRUE"
			parameter_enum_t DEC_VALID_COMMA_ONLY_1, // Default: "TRUE"
			parameter_enum_t GTP_CFG_PWRUP_0, // Default: "TRUE"
			parameter_enum_t GTP_CFG_PWRUP_1, // Default: "TRUE"
			parameter_string_t MCOMMA_10B_VALUE_0, // Default: 10'b1010000011
			parameter_string_t MCOMMA_10B_VALUE_1, // Default: 10'b1010000011
			parameter_enum_t MCOMMA_DETECT_0, // Default: "TRUE"
			parameter_enum_t MCOMMA_DETECT_1, // Default: "TRUE"
			parameter_string_t OOBDETECT_THRESHOLD_0, // Default: 3'b110
			parameter_string_t OOBDETECT_THRESHOLD_1, // Default: 3'b110
			parameter_string_t OOB_CLK_DIVIDER_0, // Default: 4
			parameter_string_t OOB_CLK_DIVIDER_1, // Default: 4
			parameter_enum_t PCI_EXPRESS_MODE_0, // Default: "FALSE"
			parameter_enum_t PCI_EXPRESS_MODE_1, // Default: "FALSE"
			parameter_string_t PCOMMA_10B_VALUE_0, // Default: 10'b0101111100
			parameter_string_t PCOMMA_10B_VALUE_1, // Default: 10'b0101111100
			parameter_enum_t PCOMMA_DETECT_0, // Default: "TRUE"
			parameter_enum_t PCOMMA_DETECT_1, // Default: "TRUE"
			parameter_string_t PLLLKDET_CFG_0, // Default: 3'b101
			parameter_string_t PLLLKDET_CFG_1, // Default: 3'b101
			parameter_string_t PLL_COM_CFG_0, // Default: 24'h21680A
			parameter_string_t PLL_COM_CFG_1, // Default: 24'h21680A
			parameter_string_t PLL_CP_CFG_0, // Default: 8'h00
			parameter_string_t PLL_CP_CFG_1, // Default: 8'h00
			parameter_string_t PLL_DIVSEL_FB_0, // Default: 5
			parameter_string_t PLL_DIVSEL_FB_1, // Default: 5
			parameter_string_t PLL_DIVSEL_REF_0, // Default: 2
			parameter_string_t PLL_DIVSEL_REF_1, // Default: 2
			parameter_string_t PLL_RXDIVSEL_OUT_0, // Default: 1
			parameter_string_t PLL_RXDIVSEL_OUT_1, // Default: 1
			parameter_enum_t PLL_SATA_0, // Default: "FALSE"
			parameter_enum_t PLL_SATA_1, // Default: "FALSE"
			parameter_string_t PLL_SOURCE_0, // Default: "PLL0"
			parameter_string_t PLL_SOURCE_1, // Default: "PLL0"
			parameter_string_t PLL_TXDIVSEL_OUT_0, // Default: 1
			parameter_string_t PLL_TXDIVSEL_OUT_1, // Default: 1
			parameter_string_t PMA_CDR_SCAN_0, // Default: 27'h6404040
			parameter_string_t PMA_CDR_SCAN_1, // Default: 27'h6404040
			parameter_string_t PMA_COM_CFG_EAST, // Default: 36'h000008000
			parameter_string_t PMA_COM_CFG_WEST, // Default: 36'h00000A000
			parameter_string_t PMA_RXSYNC_CFG_0, // Default: 7'h00
			parameter_string_t PMA_RXSYNC_CFG_1, // Default: 7'h00
			parameter_string_t PMA_RX_CFG_0, // Default: 25'h05CE048
			parameter_string_t PMA_RX_CFG_1, // Default: 25'h05CE048
			parameter_string_t PMA_TX_CFG_0, // Default: 20'h00082
			parameter_string_t PMA_TX_CFG_1, // Default: 20'h00082
			parameter_enum_t RCV_TERM_GND_0, // Default: "FALSE"
			parameter_enum_t RCV_TERM_GND_1, // Default: "FALSE"
			parameter_enum_t RCV_TERM_VTTRX_0, // Default: "TRUE"
			parameter_enum_t RCV_TERM_VTTRX_1, // Default: "TRUE"
			parameter_string_t RXEQ_CFG_0, // Default: 8'b01111011
			parameter_string_t RXEQ_CFG_1, // Default: 8'b01111011
			parameter_string_t RXPRBSERR_LOOPBACK_0, // Default: 1'b0
			parameter_string_t RXPRBSERR_LOOPBACK_1, // Default: 1'b0
			parameter_enum_t RX_BUFFER_USE_0, // Default: "TRUE"
			parameter_enum_t RX_BUFFER_USE_1, // Default: "TRUE"
			parameter_enum_t RX_DECODE_SEQ_MATCH_0, // Default: "TRUE"
			parameter_enum_t RX_DECODE_SEQ_MATCH_1, // Default: "TRUE"
			parameter_enum_t RX_EN_IDLE_HOLD_CDR_0, // Default: "FALSE"
			parameter_enum_t RX_EN_IDLE_HOLD_CDR_1, // Default: "FALSE"
			parameter_enum_t RX_EN_IDLE_RESET_BUF_0, // Default: "TRUE"
			parameter_enum_t RX_EN_IDLE_RESET_BUF_1, // Default: "TRUE"
			parameter_enum_t RX_EN_IDLE_RESET_FR_0, // Default: "TRUE"
			parameter_enum_t RX_EN_IDLE_RESET_FR_1, // Default: "TRUE"
			parameter_enum_t RX_EN_IDLE_RESET_PH_0, // Default: "TRUE"
			parameter_enum_t RX_EN_IDLE_RESET_PH_1, // Default: "TRUE"
			parameter_enum_t RX_EN_MODE_RESET_BUF_0, // Default: "TRUE"
			parameter_enum_t RX_EN_MODE_RESET_BUF_1, // Default: "TRUE"
			parameter_string_t RX_IDLE_HI_CNT_0, // Default: 4'b1000
			parameter_string_t RX_IDLE_HI_CNT_1, // Default: 4'b1000
			parameter_string_t RX_IDLE_LO_CNT_0, // Default: 4'b0000
			parameter_string_t RX_IDLE_LO_CNT_1, // Default: 4'b0000
			parameter_enum_t RX_LOSS_OF_SYNC_FSM_0, // Default: "FALSE"
			parameter_enum_t RX_LOSS_OF_SYNC_FSM_1, // Default: "FALSE"
			parameter_string_t RX_LOS_INVALID_INCR_0, // Default: 1
			parameter_string_t RX_LOS_INVALID_INCR_1, // Default: 1
			parameter_string_t RX_LOS_THRESHOLD_0, // Default: 4
			parameter_string_t RX_LOS_THRESHOLD_1, // Default: 4
			parameter_string_t RX_SLIDE_MODE_0, // Default: "PCS"
			parameter_string_t RX_SLIDE_MODE_1, // Default: "PCS"
			parameter_string_t RX_STATUS_FMT_0, // Default: "PCIE"
			parameter_string_t RX_STATUS_FMT_1, // Default: "PCIE"
			parameter_string_t RX_XCLK_SEL_0, // Default: "RXREC"
			parameter_string_t RX_XCLK_SEL_1, // Default: "RXREC"
			parameter_string_t SATA_BURST_VAL_0, // Default: 3'b100
			parameter_string_t SATA_BURST_VAL_1, // Default: 3'b100
			parameter_string_t SATA_IDLE_VAL_0, // Default: 3'b011
			parameter_string_t SATA_IDLE_VAL_1, // Default: 3'b011
			parameter_string_t SATA_MAX_BURST_0, // Default: 7
			parameter_string_t SATA_MAX_BURST_1, // Default: 7
			parameter_string_t SATA_MAX_INIT_0, // Default: 22
			parameter_string_t SATA_MAX_INIT_1, // Default: 22
			parameter_string_t SATA_MAX_WAKE_0, // Default: 7
			parameter_string_t SATA_MAX_WAKE_1, // Default: 7
			parameter_string_t SATA_MIN_BURST_0, // Default: 4
			parameter_string_t SATA_MIN_BURST_1, // Default: 4
			parameter_string_t SATA_MIN_INIT_0, // Default: 12
			parameter_string_t SATA_MIN_INIT_1, // Default: 12
			parameter_string_t SATA_MIN_WAKE_0, // Default: 4
			parameter_string_t SATA_MIN_WAKE_1, // Default: 4
			parameter_string_t SIM_GTPRESET_SPEEDUP, // Default: 1
			parameter_enum_t SIM_RECEIVER_DETECT_PASS, // Default: "TRUE"
			parameter_string_t SIM_REFCLK0_SOURCE, // Default: 3'b000
			parameter_string_t SIM_REFCLK1_SOURCE, // Default: 3'b000
			parameter_string_t SIM_TX_ELEC_IDLE_LEVEL, // Default: "X"
			parameter_string_t SIM_VERSION, // Default: "2.0"
			parameter_string_t TERMINATION_CTRL_0, // Default: 5'b10100
			parameter_string_t TERMINATION_CTRL_1, // Default: 5'b10100
			parameter_enum_t TERMINATION_OVRD_0, // Default: "FALSE"
			parameter_enum_t TERMINATION_OVRD_1, // Default: "FALSE"
			parameter_string_t TRANS_TIME_FROM_P2_0, // Default: 12'h03C
			parameter_string_t TRANS_TIME_FROM_P2_1, // Default: 12'h03C
			parameter_string_t TRANS_TIME_NON_P2_0, // Default: 8'h19
			parameter_string_t TRANS_TIME_NON_P2_1, // Default: 8'h19
			parameter_string_t TRANS_TIME_TO_P2_0, // Default: 10'h064
			parameter_string_t TRANS_TIME_TO_P2_1, // Default: 10'h064
			parameter_string_t TST_ATTR_0, // Default: 32'h00000000
			parameter_string_t TST_ATTR_1, // Default: 32'h00000000
			parameter_string_t TXRX_INVERT_0, // Default: 3'b011
			parameter_string_t TXRX_INVERT_1, // Default: 3'b011
			parameter_enum_t TX_BUFFER_USE_0, // Default: "FALSE"
			parameter_enum_t TX_BUFFER_USE_1, // Default: "FALSE"
			parameter_string_t TX_DETECT_RX_CFG_0, // Default: 14'h1832
			parameter_string_t TX_DETECT_RX_CFG_1, // Default: 14'h1832
			parameter_string_t TX_IDLE_DELAY_0, // Default: 3'b011
			parameter_string_t TX_IDLE_DELAY_1, // Default: 3'b011
			parameter_string_t TX_TDCC_CFG_0, // Default: 2'b00
			parameter_string_t TX_TDCC_CFG_1, // Default: 2'b00
			parameter_string_t TX_XCLK_SEL_0, // Default: "TXUSR"
			parameter_string_t TX_XCLK_SEL_1, // Default: "TXUSR"
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* DRDY, // net ID: DRDY lsb: 0  msb: 0 OUTPUT
			NetFlow* DRPDO, // net ID: DRPDO lsb: 0  msb: 0 OUTPUT
			NetFlow* GTPCLKFBEAST, // net ID: GTPCLKFBEAST lsb: 0  msb: 0 OUTPUT
			NetFlow* GTPCLKFBWEST, // net ID: GTPCLKFBWEST lsb: 0  msb: 0 OUTPUT
			NetFlow* GTPCLKOUT0, // net ID: GTPCLKOUT0 lsb: 0  msb: 0 OUTPUT
			NetFlow* GTPCLKOUT1, // net ID: GTPCLKOUT1 lsb: 0  msb: 0 OUTPUT
			NetFlow* PHYSTATUS0, // net ID: PHYSTATUS0 lsb: 0  msb: 0 OUTPUT
			NetFlow* PHYSTATUS1, // net ID: PHYSTATUS1 lsb: 0  msb: 0 OUTPUT
			NetFlow* PLLLKDET0, // net ID: PLLLKDET0 lsb: 0  msb: 0 OUTPUT
			NetFlow* PLLLKDET1, // net ID: PLLLKDET1 lsb: 0  msb: 0 OUTPUT
			NetFlow* RCALOUTEAST, // net ID: RCALOUTEAST lsb: 0  msb: 0 OUTPUT
			NetFlow* RCALOUTWEST, // net ID: RCALOUTWEST lsb: 0  msb: 0 OUTPUT
			NetFlow* REFCLKOUT0, // net ID: REFCLKOUT0 lsb: 0  msb: 0 OUTPUT
			NetFlow* REFCLKOUT1, // net ID: REFCLKOUT1 lsb: 0  msb: 0 OUTPUT
			NetFlow* REFCLKPLL0, // net ID: REFCLKPLL0 lsb: 0  msb: 0 OUTPUT
			NetFlow* REFCLKPLL1, // net ID: REFCLKPLL1 lsb: 0  msb: 0 OUTPUT
			NetFlow* RESETDONE0, // net ID: RESETDONE0 lsb: 0  msb: 0 OUTPUT
			NetFlow* RESETDONE1, // net ID: RESETDONE1 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXBUFSTATUS0, // net ID: RXBUFSTATUS0 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXBUFSTATUS1, // net ID: RXBUFSTATUS1 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXBYTEISALIGNED0, // net ID: RXBYTEISALIGNED0 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXBYTEISALIGNED1, // net ID: RXBYTEISALIGNED1 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXBYTEREALIGN0, // net ID: RXBYTEREALIGN0 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXBYTEREALIGN1, // net ID: RXBYTEREALIGN1 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXCHANBONDSEQ0, // net ID: RXCHANBONDSEQ0 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXCHANBONDSEQ1, // net ID: RXCHANBONDSEQ1 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXCHANISALIGNED0, // net ID: RXCHANISALIGNED0 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXCHANISALIGNED1, // net ID: RXCHANISALIGNED1 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXCHANREALIGN0, // net ID: RXCHANREALIGN0 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXCHANREALIGN1, // net ID: RXCHANREALIGN1 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXCHARISCOMMA0, // net ID: RXCHARISCOMMA0 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXCHARISCOMMA1, // net ID: RXCHARISCOMMA1 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXCHARISK0, // net ID: RXCHARISK0 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXCHARISK1, // net ID: RXCHARISK1 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXCHBONDO, // net ID: RXCHBONDO lsb: 0  msb: 0 OUTPUT
			NetFlow* RXCLKCORCNT0, // net ID: RXCLKCORCNT0 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXCLKCORCNT1, // net ID: RXCLKCORCNT1 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXCOMMADET0, // net ID: RXCOMMADET0 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXCOMMADET1, // net ID: RXCOMMADET1 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXDATA0, // net ID: RXDATA0 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXDATA1, // net ID: RXDATA1 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXDISPERR0, // net ID: RXDISPERR0 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXDISPERR1, // net ID: RXDISPERR1 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXELECIDLE0, // net ID: RXELECIDLE0 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXELECIDLE1, // net ID: RXELECIDLE1 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXLOSSOFSYNC0, // net ID: RXLOSSOFSYNC0 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXLOSSOFSYNC1, // net ID: RXLOSSOFSYNC1 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXNOTINTABLE0, // net ID: RXNOTINTABLE0 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXNOTINTABLE1, // net ID: RXNOTINTABLE1 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXPRBSERR0, // net ID: RXPRBSERR0 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXPRBSERR1, // net ID: RXPRBSERR1 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXRECCLK0, // net ID: RXRECCLK0 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXRECCLK1, // net ID: RXRECCLK1 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXRUNDISP0, // net ID: RXRUNDISP0 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXRUNDISP1, // net ID: RXRUNDISP1 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXSTATUS0, // net ID: RXSTATUS0 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXSTATUS1, // net ID: RXSTATUS1 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXVALID0, // net ID: RXVALID0 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXVALID1, // net ID: RXVALID1 lsb: 0  msb: 0 OUTPUT
			NetFlow* TSTOUT0, // net ID: TSTOUT0 lsb: 0  msb: 0 OUTPUT
			NetFlow* TSTOUT1, // net ID: TSTOUT1 lsb: 0  msb: 0 OUTPUT
			NetFlow* TXBUFSTATUS0, // net ID: TXBUFSTATUS0 lsb: 0  msb: 0 OUTPUT
			NetFlow* TXBUFSTATUS1, // net ID: TXBUFSTATUS1 lsb: 0  msb: 0 OUTPUT
			NetFlow* TXKERR0, // net ID: TXKERR0 lsb: 0  msb: 0 OUTPUT
			NetFlow* TXKERR1, // net ID: TXKERR1 lsb: 0  msb: 0 OUTPUT
			NetFlow* TXN0, // net ID: TXN0 lsb: 0  msb: 0 OUTPUT
			NetFlow* TXN1, // net ID: TXN1 lsb: 0  msb: 0 OUTPUT
			NetFlow* TXOUTCLK0, // net ID: TXOUTCLK0 lsb: 0  msb: 0 OUTPUT
			NetFlow* TXOUTCLK1, // net ID: TXOUTCLK1 lsb: 0  msb: 0 OUTPUT
			NetFlow* TXP0, // net ID: TXP0 lsb: 0  msb: 0 OUTPUT
			NetFlow* TXP1, // net ID: TXP1 lsb: 0  msb: 0 OUTPUT
			NetFlow* TXRUNDISP0, // net ID: TXRUNDISP0 lsb: 0  msb: 0 OUTPUT
			NetFlow* TXRUNDISP1, // net ID: TXRUNDISP1 lsb: 0  msb: 0 OUTPUT
			NetFlow* CLK00, // net ID: CLK00 lsb: 0  msb: 0 INPUT
			NetFlow* CLK01, // net ID: CLK01 lsb: 0  msb: 0 INPUT
			NetFlow* CLK10, // net ID: CLK10 lsb: 0  msb: 0 INPUT
			NetFlow* CLK11, // net ID: CLK11 lsb: 0  msb: 0 INPUT
			NetFlow* CLKINEAST0, // net ID: CLKINEAST0 lsb: 0  msb: 0 INPUT
			NetFlow* CLKINEAST1, // net ID: CLKINEAST1 lsb: 0  msb: 0 INPUT
			NetFlow* CLKINWEST0, // net ID: CLKINWEST0 lsb: 0  msb: 0 INPUT
			NetFlow* CLKINWEST1, // net ID: CLKINWEST1 lsb: 0  msb: 0 INPUT
			NetFlow* DADDR, // net ID: DADDR lsb: 0  msb: 7 INPUT
			NetFlow* DCLK, // net ID: DCLK lsb: 0  msb: 0 INPUT
			NetFlow* DEN, // net ID: DEN lsb: 0  msb: 0 INPUT
			NetFlow* DI, // net ID: DI lsb: 0  msb: 15 INPUT
			NetFlow* DWE, // net ID: DWE lsb: 0  msb: 0 INPUT
			NetFlow* GATERXELECIDLE0, // net ID: GATERXELECIDLE0 lsb: 0  msb: 0 INPUT
			NetFlow* GATERXELECIDLE1, // net ID: GATERXELECIDLE1 lsb: 0  msb: 0 INPUT
			NetFlow* GCLK00, // net ID: GCLK00 lsb: 0  msb: 0 INPUT
			NetFlow* GCLK01, // net ID: GCLK01 lsb: 0  msb: 0 INPUT
			NetFlow* GCLK10, // net ID: GCLK10 lsb: 0  msb: 0 INPUT
			NetFlow* GCLK11, // net ID: GCLK11 lsb: 0  msb: 0 INPUT
			NetFlow* GTPCLKFBSEL0EAST, // net ID: GTPCLKFBSEL0EAST lsb: 0  msb: 1 INPUT
			NetFlow* GTPCLKFBSEL0WEST, // net ID: GTPCLKFBSEL0WEST lsb: 0  msb: 1 INPUT
			NetFlow* GTPCLKFBSEL1EAST, // net ID: GTPCLKFBSEL1EAST lsb: 0  msb: 1 INPUT
			NetFlow* GTPCLKFBSEL1WEST, // net ID: GTPCLKFBSEL1WEST lsb: 0  msb: 1 INPUT
			NetFlow* GTPRESET0, // net ID: GTPRESET0 lsb: 0  msb: 0 INPUT
			NetFlow* GTPRESET1, // net ID: GTPRESET1 lsb: 0  msb: 0 INPUT
			NetFlow* GTPTEST0, // net ID: GTPTEST0 lsb: 0  msb: 7 INPUT
			NetFlow* GTPTEST1, // net ID: GTPTEST1 lsb: 0  msb: 7 INPUT
			NetFlow* IGNORESIGDET0, // net ID: IGNORESIGDET0 lsb: 0  msb: 0 INPUT
			NetFlow* IGNORESIGDET1, // net ID: IGNORESIGDET1 lsb: 0  msb: 0 INPUT
			NetFlow* INTDATAWIDTH0, // net ID: INTDATAWIDTH0 lsb: 0  msb: 0 INPUT
			NetFlow* INTDATAWIDTH1, // net ID: INTDATAWIDTH1 lsb: 0  msb: 0 INPUT
			NetFlow* LOOPBACK0, // net ID: LOOPBACK0 lsb: 0  msb: 2 INPUT
			NetFlow* LOOPBACK1, // net ID: LOOPBACK1 lsb: 0  msb: 2 INPUT
			NetFlow* PLLCLK00, // net ID: PLLCLK00 lsb: 0  msb: 0 INPUT
			NetFlow* PLLCLK01, // net ID: PLLCLK01 lsb: 0  msb: 0 INPUT
			NetFlow* PLLCLK10, // net ID: PLLCLK10 lsb: 0  msb: 0 INPUT
			NetFlow* PLLCLK11, // net ID: PLLCLK11 lsb: 0  msb: 0 INPUT
			NetFlow* PLLLKDETEN0, // net ID: PLLLKDETEN0 lsb: 0  msb: 0 INPUT
			NetFlow* PLLLKDETEN1, // net ID: PLLLKDETEN1 lsb: 0  msb: 0 INPUT
			NetFlow* PLLPOWERDOWN0, // net ID: PLLPOWERDOWN0 lsb: 0  msb: 0 INPUT
			NetFlow* PLLPOWERDOWN1, // net ID: PLLPOWERDOWN1 lsb: 0  msb: 0 INPUT
			NetFlow* PRBSCNTRESET0, // net ID: PRBSCNTRESET0 lsb: 0  msb: 0 INPUT
			NetFlow* PRBSCNTRESET1, // net ID: PRBSCNTRESET1 lsb: 0  msb: 0 INPUT
			NetFlow* RCALINEAST, // net ID: RCALINEAST lsb: 0  msb: 4 INPUT
			NetFlow* RCALINWEST, // net ID: RCALINWEST lsb: 0  msb: 4 INPUT
			NetFlow* REFCLKPWRDNB0, // net ID: REFCLKPWRDNB0 lsb: 0  msb: 0 INPUT
			NetFlow* REFCLKPWRDNB1, // net ID: REFCLKPWRDNB1 lsb: 0  msb: 0 INPUT
			NetFlow* REFSELDYPLL0, // net ID: REFSELDYPLL0 lsb: 0  msb: 2 INPUT
			NetFlow* REFSELDYPLL1, // net ID: REFSELDYPLL1 lsb: 0  msb: 2 INPUT
			NetFlow* RXBUFRESET0, // net ID: RXBUFRESET0 lsb: 0  msb: 0 INPUT
			NetFlow* RXBUFRESET1, // net ID: RXBUFRESET1 lsb: 0  msb: 0 INPUT
			NetFlow* RXCDRRESET0, // net ID: RXCDRRESET0 lsb: 0  msb: 0 INPUT
			NetFlow* RXCDRRESET1, // net ID: RXCDRRESET1 lsb: 0  msb: 0 INPUT
			NetFlow* RXCHBONDI, // net ID: RXCHBONDI lsb: 0  msb: 2 INPUT
			NetFlow* RXCHBONDMASTER0, // net ID: RXCHBONDMASTER0 lsb: 0  msb: 0 INPUT
			NetFlow* RXCHBONDMASTER1, // net ID: RXCHBONDMASTER1 lsb: 0  msb: 0 INPUT
			NetFlow* RXCHBONDSLAVE0, // net ID: RXCHBONDSLAVE0 lsb: 0  msb: 0 INPUT
			NetFlow* RXCHBONDSLAVE1, // net ID: RXCHBONDSLAVE1 lsb: 0  msb: 0 INPUT
			NetFlow* RXCOMMADETUSE0, // net ID: RXCOMMADETUSE0 lsb: 0  msb: 0 INPUT
			NetFlow* RXCOMMADETUSE1, // net ID: RXCOMMADETUSE1 lsb: 0  msb: 0 INPUT
			NetFlow* RXDATAWIDTH0, // net ID: RXDATAWIDTH0 lsb: 0  msb: 1 INPUT
			NetFlow* RXDATAWIDTH1, // net ID: RXDATAWIDTH1 lsb: 0  msb: 1 INPUT
			NetFlow* RXDEC8B10BUSE0, // net ID: RXDEC8B10BUSE0 lsb: 0  msb: 0 INPUT
			NetFlow* RXDEC8B10BUSE1, // net ID: RXDEC8B10BUSE1 lsb: 0  msb: 0 INPUT
			NetFlow* RXENCHANSYNC0, // net ID: RXENCHANSYNC0 lsb: 0  msb: 0 INPUT
			NetFlow* RXENCHANSYNC1, // net ID: RXENCHANSYNC1 lsb: 0  msb: 0 INPUT
			NetFlow* RXENMCOMMAALIGN0, // net ID: RXENMCOMMAALIGN0 lsb: 0  msb: 0 INPUT
			NetFlow* RXENMCOMMAALIGN1, // net ID: RXENMCOMMAALIGN1 lsb: 0  msb: 0 INPUT
			NetFlow* RXENPCOMMAALIGN0, // net ID: RXENPCOMMAALIGN0 lsb: 0  msb: 0 INPUT
			NetFlow* RXENPCOMMAALIGN1, // net ID: RXENPCOMMAALIGN1 lsb: 0  msb: 0 INPUT
			NetFlow* RXENPMAPHASEALIGN0, // net ID: RXENPMAPHASEALIGN0 lsb: 0  msb: 0 INPUT
			NetFlow* RXENPMAPHASEALIGN1, // net ID: RXENPMAPHASEALIGN1 lsb: 0  msb: 0 INPUT
			NetFlow* RXENPRBSTST0, // net ID: RXENPRBSTST0 lsb: 0  msb: 2 INPUT
			NetFlow* RXENPRBSTST1, // net ID: RXENPRBSTST1 lsb: 0  msb: 2 INPUT
			NetFlow* RXEQMIX0, // net ID: RXEQMIX0 lsb: 0  msb: 1 INPUT
			NetFlow* RXEQMIX1, // net ID: RXEQMIX1 lsb: 0  msb: 1 INPUT
			NetFlow* RXN0, // net ID: RXN0 lsb: 0  msb: 0 INPUT
			NetFlow* RXN1, // net ID: RXN1 lsb: 0  msb: 0 INPUT
			NetFlow* RXP0, // net ID: RXP0 lsb: 0  msb: 0 INPUT
			NetFlow* RXP1, // net ID: RXP1 lsb: 0  msb: 0 INPUT
			NetFlow* RXPMASETPHASE0, // net ID: RXPMASETPHASE0 lsb: 0  msb: 0 INPUT
			NetFlow* RXPMASETPHASE1, // net ID: RXPMASETPHASE1 lsb: 0  msb: 0 INPUT
			NetFlow* RXPOLARITY0, // net ID: RXPOLARITY0 lsb: 0  msb: 0 INPUT
			NetFlow* RXPOLARITY1, // net ID: RXPOLARITY1 lsb: 0  msb: 0 INPUT
			NetFlow* RXPOWERDOWN0, // net ID: RXPOWERDOWN0 lsb: 0  msb: 1 INPUT
			NetFlow* RXPOWERDOWN1, // net ID: RXPOWERDOWN1 lsb: 0  msb: 1 INPUT
			NetFlow* RXRESET0, // net ID: RXRESET0 lsb: 0  msb: 0 INPUT
			NetFlow* RXRESET1, // net ID: RXRESET1 lsb: 0  msb: 0 INPUT
			NetFlow* RXSLIDE0, // net ID: RXSLIDE0 lsb: 0  msb: 0 INPUT
			NetFlow* RXSLIDE1, // net ID: RXSLIDE1 lsb: 0  msb: 0 INPUT
			NetFlow* RXUSRCLK0, // net ID: RXUSRCLK0 lsb: 0  msb: 0 INPUT
			NetFlow* RXUSRCLK1, // net ID: RXUSRCLK1 lsb: 0  msb: 0 INPUT
			NetFlow* RXUSRCLK20, // net ID: RXUSRCLK20 lsb: 0  msb: 0 INPUT
			NetFlow* RXUSRCLK21, // net ID: RXUSRCLK21 lsb: 0  msb: 0 INPUT
			NetFlow* TSTCLK0, // net ID: TSTCLK0 lsb: 0  msb: 0 INPUT
			NetFlow* TSTCLK1, // net ID: TSTCLK1 lsb: 0  msb: 0 INPUT
			NetFlow* TSTIN0, // net ID: TSTIN0 lsb: 0  msb: 11 INPUT
			NetFlow* TSTIN1, // net ID: TSTIN1 lsb: 0  msb: 11 INPUT
			NetFlow* TXBUFDIFFCTRL0, // net ID: TXBUFDIFFCTRL0 lsb: 0  msb: 2 INPUT
			NetFlow* TXBUFDIFFCTRL1, // net ID: TXBUFDIFFCTRL1 lsb: 0  msb: 2 INPUT
			NetFlow* TXBYPASS8B10B0, // net ID: TXBYPASS8B10B0 lsb: 0  msb: 3 INPUT
			NetFlow* TXBYPASS8B10B1, // net ID: TXBYPASS8B10B1 lsb: 0  msb: 3 INPUT
			NetFlow* TXCHARDISPMODE0, // net ID: TXCHARDISPMODE0 lsb: 0  msb: 3 INPUT
			NetFlow* TXCHARDISPMODE1, // net ID: TXCHARDISPMODE1 lsb: 0  msb: 3 INPUT
			NetFlow* TXCHARDISPVAL0, // net ID: TXCHARDISPVAL0 lsb: 0  msb: 3 INPUT
			NetFlow* TXCHARDISPVAL1, // net ID: TXCHARDISPVAL1 lsb: 0  msb: 3 INPUT
			NetFlow* TXCHARISK0, // net ID: TXCHARISK0 lsb: 0  msb: 3 INPUT
			NetFlow* TXCHARISK1, // net ID: TXCHARISK1 lsb: 0  msb: 3 INPUT
			NetFlow* TXCOMSTART0, // net ID: TXCOMSTART0 lsb: 0  msb: 0 INPUT
			NetFlow* TXCOMSTART1, // net ID: TXCOMSTART1 lsb: 0  msb: 0 INPUT
			NetFlow* TXCOMTYPE0, // net ID: TXCOMTYPE0 lsb: 0  msb: 0 INPUT
			NetFlow* TXCOMTYPE1, // net ID: TXCOMTYPE1 lsb: 0  msb: 0 INPUT
			NetFlow* TXDATA0, // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA1, // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
			NetFlow* TXDATAWIDTH0, // net ID: TXDATAWIDTH0 lsb: 0  msb: 1 INPUT
			NetFlow* TXDATAWIDTH1, // net ID: TXDATAWIDTH1 lsb: 0  msb: 1 INPUT
			NetFlow* TXDETECTRX0, // net ID: TXDETECTRX0 lsb: 0  msb: 0 INPUT
			NetFlow* TXDETECTRX1, // net ID: TXDETECTRX1 lsb: 0  msb: 0 INPUT
			NetFlow* TXDIFFCTRL0, // net ID: TXDIFFCTRL0 lsb: 0  msb: 3 INPUT
			NetFlow* TXDIFFCTRL1, // net ID: TXDIFFCTRL1 lsb: 0  msb: 3 INPUT
			NetFlow* TXELECIDLE0, // net ID: TXELECIDLE0 lsb: 0  msb: 0 INPUT
			NetFlow* TXELECIDLE1, // net ID: TXELECIDLE1 lsb: 0  msb: 0 INPUT
			NetFlow* TXENC8B10BUSE0, // net ID: TXENC8B10BUSE0 lsb: 0  msb: 0 INPUT
			NetFlow* TXENC8B10BUSE1, // net ID: TXENC8B10BUSE1 lsb: 0  msb: 0 INPUT
			NetFlow* TXENPMAPHASEALIGN0, // net ID: TXENPMAPHASEALIGN0 lsb: 0  msb: 0 INPUT
			NetFlow* TXENPMAPHASEALIGN1, // net ID: TXENPMAPHASEALIGN1 lsb: 0  msb: 0 INPUT
			NetFlow* TXENPRBSTST0, // net ID: TXENPRBSTST0 lsb: 0  msb: 2 INPUT
			NetFlow* TXENPRBSTST1, // net ID: TXENPRBSTST1 lsb: 0  msb: 2 INPUT
			NetFlow* TXINHIBIT0, // net ID: TXINHIBIT0 lsb: 0  msb: 0 INPUT
			NetFlow* TXINHIBIT1, // net ID: TXINHIBIT1 lsb: 0  msb: 0 INPUT
			NetFlow* TXPDOWNASYNCH0, // net ID: TXPDOWNASYNCH0 lsb: 0  msb: 0 INPUT
			NetFlow* TXPDOWNASYNCH1, // net ID: TXPDOWNASYNCH1 lsb: 0  msb: 0 INPUT
			NetFlow* TXPMASETPHASE0, // net ID: TXPMASETPHASE0 lsb: 0  msb: 0 INPUT
			NetFlow* TXPMASETPHASE1, // net ID: TXPMASETPHASE1 lsb: 0  msb: 0 INPUT
			NetFlow* TXPOLARITY0, // net ID: TXPOLARITY0 lsb: 0  msb: 0 INPUT
			NetFlow* TXPOLARITY1, // net ID: TXPOLARITY1 lsb: 0  msb: 0 INPUT
			NetFlow* TXPOWERDOWN0, // net ID: TXPOWERDOWN0 lsb: 0  msb: 1 INPUT
			NetFlow* TXPOWERDOWN1, // net ID: TXPOWERDOWN1 lsb: 0  msb: 1 INPUT
			NetFlow* TXPRBSFORCEERR0, // net ID: TXPRBSFORCEERR0 lsb: 0  msb: 0 INPUT
			NetFlow* TXPRBSFORCEERR1, // net ID: TXPRBSFORCEERR1 lsb: 0  msb: 0 INPUT
			NetFlow* TXPREEMPHASIS0, // net ID: TXPREEMPHASIS0 lsb: 0  msb: 2 INPUT
			NetFlow* TXPREEMPHASIS1, // net ID: TXPREEMPHASIS1 lsb: 0  msb: 2 INPUT
			NetFlow* TXRESET0, // net ID: TXRESET0 lsb: 0  msb: 0 INPUT
			NetFlow* TXRESET1, // net ID: TXRESET1 lsb: 0  msb: 0 INPUT
			NetFlow* TXUSRCLK0, // net ID: TXUSRCLK0 lsb: 0  msb: 0 INPUT
			NetFlow* TXUSRCLK1, // net ID: TXUSRCLK1 lsb: 0  msb: 0 INPUT
			NetFlow* TXUSRCLK20, // net ID: TXUSRCLK20 lsb: 0  msb: 0 INPUT
			NetFlow* TXUSRCLK21, // net ID: TXUSRCLK21 lsb: 0  msb: 0 INPUT
			NetFlow* USRCODEERR0, // net ID: USRCODEERR0 lsb: 0  msb: 0 INPUT
			NetFlow* USRCODEERR1 // net ID: USRCODEERR1 lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->AC_CAP_DIS_0 = AC_CAP_DIS_0; // Default: "TRUE"
			this->AC_CAP_DIS_1 = AC_CAP_DIS_1; // Default: "TRUE"
			this->ALIGN_COMMA_WORD_0 = ALIGN_COMMA_WORD_0; // Default: 1
			this->ALIGN_COMMA_WORD_1 = ALIGN_COMMA_WORD_1; // Default: 1
			this->CB2_INH_CC_PERIOD_0 = CB2_INH_CC_PERIOD_0; // Default: 8
			this->CB2_INH_CC_PERIOD_1 = CB2_INH_CC_PERIOD_1; // Default: 8
			this->CDR_PH_ADJ_TIME_0 = CDR_PH_ADJ_TIME_0; // Default: 5'b01010
			this->CDR_PH_ADJ_TIME_1 = CDR_PH_ADJ_TIME_1; // Default: 5'b01010
			this->CHAN_BOND_1_MAX_SKEW_0 = CHAN_BOND_1_MAX_SKEW_0; // Default: 7
			this->CHAN_BOND_1_MAX_SKEW_1 = CHAN_BOND_1_MAX_SKEW_1; // Default: 7
			this->CHAN_BOND_2_MAX_SKEW_0 = CHAN_BOND_2_MAX_SKEW_0; // Default: 1
			this->CHAN_BOND_2_MAX_SKEW_1 = CHAN_BOND_2_MAX_SKEW_1; // Default: 1
			this->CHAN_BOND_KEEP_ALIGN_0 = CHAN_BOND_KEEP_ALIGN_0; // Default: "FALSE"
			this->CHAN_BOND_KEEP_ALIGN_1 = CHAN_BOND_KEEP_ALIGN_1; // Default: "FALSE"
			this->CHAN_BOND_SEQ_1_1_0 = CHAN_BOND_SEQ_1_1_0; // Default: 10'b0101111100
			this->CHAN_BOND_SEQ_1_1_1 = CHAN_BOND_SEQ_1_1_1; // Default: 10'b0101111100
			this->CHAN_BOND_SEQ_1_2_0 = CHAN_BOND_SEQ_1_2_0; // Default: 10'b0001001010
			this->CHAN_BOND_SEQ_1_2_1 = CHAN_BOND_SEQ_1_2_1; // Default: 10'b0001001010
			this->CHAN_BOND_SEQ_1_3_0 = CHAN_BOND_SEQ_1_3_0; // Default: 10'b0001001010
			this->CHAN_BOND_SEQ_1_3_1 = CHAN_BOND_SEQ_1_3_1; // Default: 10'b0001001010
			this->CHAN_BOND_SEQ_1_4_0 = CHAN_BOND_SEQ_1_4_0; // Default: 10'b0110111100
			this->CHAN_BOND_SEQ_1_4_1 = CHAN_BOND_SEQ_1_4_1; // Default: 10'b0110111100
			this->CHAN_BOND_SEQ_1_ENABLE_0 = CHAN_BOND_SEQ_1_ENABLE_0; // Default: 4'b1111
			this->CHAN_BOND_SEQ_1_ENABLE_1 = CHAN_BOND_SEQ_1_ENABLE_1; // Default: 4'b1111
			this->CHAN_BOND_SEQ_2_1_0 = CHAN_BOND_SEQ_2_1_0; // Default: 10'b0110111100
			this->CHAN_BOND_SEQ_2_1_1 = CHAN_BOND_SEQ_2_1_1; // Default: 10'b0110111100
			this->CHAN_BOND_SEQ_2_2_0 = CHAN_BOND_SEQ_2_2_0; // Default: 10'b0100111100
			this->CHAN_BOND_SEQ_2_2_1 = CHAN_BOND_SEQ_2_2_1; // Default: 10'b0100111100
			this->CHAN_BOND_SEQ_2_3_0 = CHAN_BOND_SEQ_2_3_0; // Default: 10'b0100111100
			this->CHAN_BOND_SEQ_2_3_1 = CHAN_BOND_SEQ_2_3_1; // Default: 10'b0100111100
			this->CHAN_BOND_SEQ_2_4_0 = CHAN_BOND_SEQ_2_4_0; // Default: 10'b0100111100
			this->CHAN_BOND_SEQ_2_4_1 = CHAN_BOND_SEQ_2_4_1; // Default: 10'b0100111100
			this->CHAN_BOND_SEQ_2_ENABLE_0 = CHAN_BOND_SEQ_2_ENABLE_0; // Default: 4'b1111
			this->CHAN_BOND_SEQ_2_ENABLE_1 = CHAN_BOND_SEQ_2_ENABLE_1; // Default: 4'b1111
			this->CHAN_BOND_SEQ_2_USE_0 = CHAN_BOND_SEQ_2_USE_0; // Default: "FALSE"
			this->CHAN_BOND_SEQ_2_USE_1 = CHAN_BOND_SEQ_2_USE_1; // Default: "FALSE"
			this->CHAN_BOND_SEQ_LEN_0 = CHAN_BOND_SEQ_LEN_0; // Default: 1
			this->CHAN_BOND_SEQ_LEN_1 = CHAN_BOND_SEQ_LEN_1; // Default: 1
			this->CLK25_DIVIDER_0 = CLK25_DIVIDER_0; // Default: 4
			this->CLK25_DIVIDER_1 = CLK25_DIVIDER_1; // Default: 4
			this->CLKINDC_B_0 = CLKINDC_B_0; // Default: "TRUE"
			this->CLKINDC_B_1 = CLKINDC_B_1; // Default: "TRUE"
			this->CLKRCV_TRST_0 = CLKRCV_TRST_0; // Default: "TRUE"
			this->CLKRCV_TRST_1 = CLKRCV_TRST_1; // Default: "TRUE"
			this->CLK_CORRECT_USE_0 = CLK_CORRECT_USE_0; // Default: "TRUE"
			this->CLK_CORRECT_USE_1 = CLK_CORRECT_USE_1; // Default: "TRUE"
			this->CLK_COR_ADJ_LEN_0 = CLK_COR_ADJ_LEN_0; // Default: 1
			this->CLK_COR_ADJ_LEN_1 = CLK_COR_ADJ_LEN_1; // Default: 1
			this->CLK_COR_DET_LEN_0 = CLK_COR_DET_LEN_0; // Default: 1
			this->CLK_COR_DET_LEN_1 = CLK_COR_DET_LEN_1; // Default: 1
			this->CLK_COR_INSERT_IDLE_FLAG_0 = CLK_COR_INSERT_IDLE_FLAG_0; // Default: "FALSE"
			this->CLK_COR_INSERT_IDLE_FLAG_1 = CLK_COR_INSERT_IDLE_FLAG_1; // Default: "FALSE"
			this->CLK_COR_KEEP_IDLE_0 = CLK_COR_KEEP_IDLE_0; // Default: "FALSE"
			this->CLK_COR_KEEP_IDLE_1 = CLK_COR_KEEP_IDLE_1; // Default: "FALSE"
			this->CLK_COR_MAX_LAT_0 = CLK_COR_MAX_LAT_0; // Default: 20
			this->CLK_COR_MAX_LAT_1 = CLK_COR_MAX_LAT_1; // Default: 20
			this->CLK_COR_MIN_LAT_0 = CLK_COR_MIN_LAT_0; // Default: 18
			this->CLK_COR_MIN_LAT_1 = CLK_COR_MIN_LAT_1; // Default: 18
			this->CLK_COR_PRECEDENCE_0 = CLK_COR_PRECEDENCE_0; // Default: "TRUE"
			this->CLK_COR_PRECEDENCE_1 = CLK_COR_PRECEDENCE_1; // Default: "TRUE"
			this->CLK_COR_REPEAT_WAIT_0 = CLK_COR_REPEAT_WAIT_0; // Default: 0
			this->CLK_COR_REPEAT_WAIT_1 = CLK_COR_REPEAT_WAIT_1; // Default: 0
			this->CLK_COR_SEQ_1_1_0 = CLK_COR_SEQ_1_1_0; // Default: 10'b0100011100
			this->CLK_COR_SEQ_1_1_1 = CLK_COR_SEQ_1_1_1; // Default: 10'b0100011100
			this->CLK_COR_SEQ_1_2_0 = CLK_COR_SEQ_1_2_0; // Default: 10'b0000000000
			this->CLK_COR_SEQ_1_2_1 = CLK_COR_SEQ_1_2_1; // Default: 10'b0000000000
			this->CLK_COR_SEQ_1_3_0 = CLK_COR_SEQ_1_3_0; // Default: 10'b0000000000
			this->CLK_COR_SEQ_1_3_1 = CLK_COR_SEQ_1_3_1; // Default: 10'b0000000000
			this->CLK_COR_SEQ_1_4_0 = CLK_COR_SEQ_1_4_0; // Default: 10'b0000000000
			this->CLK_COR_SEQ_1_4_1 = CLK_COR_SEQ_1_4_1; // Default: 10'b0000000000
			this->CLK_COR_SEQ_1_ENABLE_0 = CLK_COR_SEQ_1_ENABLE_0; // Default: 4'b1111
			this->CLK_COR_SEQ_1_ENABLE_1 = CLK_COR_SEQ_1_ENABLE_1; // Default: 4'b1111
			this->CLK_COR_SEQ_2_1_0 = CLK_COR_SEQ_2_1_0; // Default: 10'b0000000000
			this->CLK_COR_SEQ_2_1_1 = CLK_COR_SEQ_2_1_1; // Default: 10'b0000000000
			this->CLK_COR_SEQ_2_2_0 = CLK_COR_SEQ_2_2_0; // Default: 10'b0000000000
			this->CLK_COR_SEQ_2_2_1 = CLK_COR_SEQ_2_2_1; // Default: 10'b0000000000
			this->CLK_COR_SEQ_2_3_0 = CLK_COR_SEQ_2_3_0; // Default: 10'b0000000000
			this->CLK_COR_SEQ_2_3_1 = CLK_COR_SEQ_2_3_1; // Default: 10'b0000000000
			this->CLK_COR_SEQ_2_4_0 = CLK_COR_SEQ_2_4_0; // Default: 10'b0000000000
			this->CLK_COR_SEQ_2_4_1 = CLK_COR_SEQ_2_4_1; // Default: 10'b0000000000
			this->CLK_COR_SEQ_2_ENABLE_0 = CLK_COR_SEQ_2_ENABLE_0; // Default: 4'b1111
			this->CLK_COR_SEQ_2_ENABLE_1 = CLK_COR_SEQ_2_ENABLE_1; // Default: 4'b1111
			this->CLK_COR_SEQ_2_USE_0 = CLK_COR_SEQ_2_USE_0; // Default: "FALSE"
			this->CLK_COR_SEQ_2_USE_1 = CLK_COR_SEQ_2_USE_1; // Default: "FALSE"
			this->CLK_OUT_GTP_SEL_0 = CLK_OUT_GTP_SEL_0; // Default: "REFCLKPLL0"
			this->CLK_OUT_GTP_SEL_1 = CLK_OUT_GTP_SEL_1; // Default: "REFCLKPLL1"
			this->CM_TRIM_0 = CM_TRIM_0; // Default: 2'b00
			this->CM_TRIM_1 = CM_TRIM_1; // Default: 2'b00
			this->COMMA_10B_ENABLE_0 = COMMA_10B_ENABLE_0; // Default: 10'b1111111111
			this->COMMA_10B_ENABLE_1 = COMMA_10B_ENABLE_1; // Default: 10'b1111111111
			this->COM_BURST_VAL_0 = COM_BURST_VAL_0; // Default: 4'b1111
			this->COM_BURST_VAL_1 = COM_BURST_VAL_1; // Default: 4'b1111
			this->DEC_MCOMMA_DETECT_0 = DEC_MCOMMA_DETECT_0; // Default: "TRUE"
			this->DEC_MCOMMA_DETECT_1 = DEC_MCOMMA_DETECT_1; // Default: "TRUE"
			this->DEC_PCOMMA_DETECT_0 = DEC_PCOMMA_DETECT_0; // Default: "TRUE"
			this->DEC_PCOMMA_DETECT_1 = DEC_PCOMMA_DETECT_1; // Default: "TRUE"
			this->DEC_VALID_COMMA_ONLY_0 = DEC_VALID_COMMA_ONLY_0; // Default: "TRUE"
			this->DEC_VALID_COMMA_ONLY_1 = DEC_VALID_COMMA_ONLY_1; // Default: "TRUE"
			this->GTP_CFG_PWRUP_0 = GTP_CFG_PWRUP_0; // Default: "TRUE"
			this->GTP_CFG_PWRUP_1 = GTP_CFG_PWRUP_1; // Default: "TRUE"
			this->MCOMMA_10B_VALUE_0 = MCOMMA_10B_VALUE_0; // Default: 10'b1010000011
			this->MCOMMA_10B_VALUE_1 = MCOMMA_10B_VALUE_1; // Default: 10'b1010000011
			this->MCOMMA_DETECT_0 = MCOMMA_DETECT_0; // Default: "TRUE"
			this->MCOMMA_DETECT_1 = MCOMMA_DETECT_1; // Default: "TRUE"
			this->OOBDETECT_THRESHOLD_0 = OOBDETECT_THRESHOLD_0; // Default: 3'b110
			this->OOBDETECT_THRESHOLD_1 = OOBDETECT_THRESHOLD_1; // Default: 3'b110
			this->OOB_CLK_DIVIDER_0 = OOB_CLK_DIVIDER_0; // Default: 4
			this->OOB_CLK_DIVIDER_1 = OOB_CLK_DIVIDER_1; // Default: 4
			this->PCI_EXPRESS_MODE_0 = PCI_EXPRESS_MODE_0; // Default: "FALSE"
			this->PCI_EXPRESS_MODE_1 = PCI_EXPRESS_MODE_1; // Default: "FALSE"
			this->PCOMMA_10B_VALUE_0 = PCOMMA_10B_VALUE_0; // Default: 10'b0101111100
			this->PCOMMA_10B_VALUE_1 = PCOMMA_10B_VALUE_1; // Default: 10'b0101111100
			this->PCOMMA_DETECT_0 = PCOMMA_DETECT_0; // Default: "TRUE"
			this->PCOMMA_DETECT_1 = PCOMMA_DETECT_1; // Default: "TRUE"
			this->PLLLKDET_CFG_0 = PLLLKDET_CFG_0; // Default: 3'b101
			this->PLLLKDET_CFG_1 = PLLLKDET_CFG_1; // Default: 3'b101
			this->PLL_COM_CFG_0 = PLL_COM_CFG_0; // Default: 24'h21680A
			this->PLL_COM_CFG_1 = PLL_COM_CFG_1; // Default: 24'h21680A
			this->PLL_CP_CFG_0 = PLL_CP_CFG_0; // Default: 8'h00
			this->PLL_CP_CFG_1 = PLL_CP_CFG_1; // Default: 8'h00
			this->PLL_DIVSEL_FB_0 = PLL_DIVSEL_FB_0; // Default: 5
			this->PLL_DIVSEL_FB_1 = PLL_DIVSEL_FB_1; // Default: 5
			this->PLL_DIVSEL_REF_0 = PLL_DIVSEL_REF_0; // Default: 2
			this->PLL_DIVSEL_REF_1 = PLL_DIVSEL_REF_1; // Default: 2
			this->PLL_RXDIVSEL_OUT_0 = PLL_RXDIVSEL_OUT_0; // Default: 1
			this->PLL_RXDIVSEL_OUT_1 = PLL_RXDIVSEL_OUT_1; // Default: 1
			this->PLL_SATA_0 = PLL_SATA_0; // Default: "FALSE"
			this->PLL_SATA_1 = PLL_SATA_1; // Default: "FALSE"
			this->PLL_SOURCE_0 = PLL_SOURCE_0; // Default: "PLL0"
			this->PLL_SOURCE_1 = PLL_SOURCE_1; // Default: "PLL0"
			this->PLL_TXDIVSEL_OUT_0 = PLL_TXDIVSEL_OUT_0; // Default: 1
			this->PLL_TXDIVSEL_OUT_1 = PLL_TXDIVSEL_OUT_1; // Default: 1
			this->PMA_CDR_SCAN_0 = PMA_CDR_SCAN_0; // Default: 27'h6404040
			this->PMA_CDR_SCAN_1 = PMA_CDR_SCAN_1; // Default: 27'h6404040
			this->PMA_COM_CFG_EAST = PMA_COM_CFG_EAST; // Default: 36'h000008000
			this->PMA_COM_CFG_WEST = PMA_COM_CFG_WEST; // Default: 36'h00000A000
			this->PMA_RXSYNC_CFG_0 = PMA_RXSYNC_CFG_0; // Default: 7'h00
			this->PMA_RXSYNC_CFG_1 = PMA_RXSYNC_CFG_1; // Default: 7'h00
			this->PMA_RX_CFG_0 = PMA_RX_CFG_0; // Default: 25'h05CE048
			this->PMA_RX_CFG_1 = PMA_RX_CFG_1; // Default: 25'h05CE048
			this->PMA_TX_CFG_0 = PMA_TX_CFG_0; // Default: 20'h00082
			this->PMA_TX_CFG_1 = PMA_TX_CFG_1; // Default: 20'h00082
			this->RCV_TERM_GND_0 = RCV_TERM_GND_0; // Default: "FALSE"
			this->RCV_TERM_GND_1 = RCV_TERM_GND_1; // Default: "FALSE"
			this->RCV_TERM_VTTRX_0 = RCV_TERM_VTTRX_0; // Default: "TRUE"
			this->RCV_TERM_VTTRX_1 = RCV_TERM_VTTRX_1; // Default: "TRUE"
			this->RXEQ_CFG_0 = RXEQ_CFG_0; // Default: 8'b01111011
			this->RXEQ_CFG_1 = RXEQ_CFG_1; // Default: 8'b01111011
			this->RXPRBSERR_LOOPBACK_0 = RXPRBSERR_LOOPBACK_0; // Default: 1'b0
			this->RXPRBSERR_LOOPBACK_1 = RXPRBSERR_LOOPBACK_1; // Default: 1'b0
			this->RX_BUFFER_USE_0 = RX_BUFFER_USE_0; // Default: "TRUE"
			this->RX_BUFFER_USE_1 = RX_BUFFER_USE_1; // Default: "TRUE"
			this->RX_DECODE_SEQ_MATCH_0 = RX_DECODE_SEQ_MATCH_0; // Default: "TRUE"
			this->RX_DECODE_SEQ_MATCH_1 = RX_DECODE_SEQ_MATCH_1; // Default: "TRUE"
			this->RX_EN_IDLE_HOLD_CDR_0 = RX_EN_IDLE_HOLD_CDR_0; // Default: "FALSE"
			this->RX_EN_IDLE_HOLD_CDR_1 = RX_EN_IDLE_HOLD_CDR_1; // Default: "FALSE"
			this->RX_EN_IDLE_RESET_BUF_0 = RX_EN_IDLE_RESET_BUF_0; // Default: "TRUE"
			this->RX_EN_IDLE_RESET_BUF_1 = RX_EN_IDLE_RESET_BUF_1; // Default: "TRUE"
			this->RX_EN_IDLE_RESET_FR_0 = RX_EN_IDLE_RESET_FR_0; // Default: "TRUE"
			this->RX_EN_IDLE_RESET_FR_1 = RX_EN_IDLE_RESET_FR_1; // Default: "TRUE"
			this->RX_EN_IDLE_RESET_PH_0 = RX_EN_IDLE_RESET_PH_0; // Default: "TRUE"
			this->RX_EN_IDLE_RESET_PH_1 = RX_EN_IDLE_RESET_PH_1; // Default: "TRUE"
			this->RX_EN_MODE_RESET_BUF_0 = RX_EN_MODE_RESET_BUF_0; // Default: "TRUE"
			this->RX_EN_MODE_RESET_BUF_1 = RX_EN_MODE_RESET_BUF_1; // Default: "TRUE"
			this->RX_IDLE_HI_CNT_0 = RX_IDLE_HI_CNT_0; // Default: 4'b1000
			this->RX_IDLE_HI_CNT_1 = RX_IDLE_HI_CNT_1; // Default: 4'b1000
			this->RX_IDLE_LO_CNT_0 = RX_IDLE_LO_CNT_0; // Default: 4'b0000
			this->RX_IDLE_LO_CNT_1 = RX_IDLE_LO_CNT_1; // Default: 4'b0000
			this->RX_LOSS_OF_SYNC_FSM_0 = RX_LOSS_OF_SYNC_FSM_0; // Default: "FALSE"
			this->RX_LOSS_OF_SYNC_FSM_1 = RX_LOSS_OF_SYNC_FSM_1; // Default: "FALSE"
			this->RX_LOS_INVALID_INCR_0 = RX_LOS_INVALID_INCR_0; // Default: 1
			this->RX_LOS_INVALID_INCR_1 = RX_LOS_INVALID_INCR_1; // Default: 1
			this->RX_LOS_THRESHOLD_0 = RX_LOS_THRESHOLD_0; // Default: 4
			this->RX_LOS_THRESHOLD_1 = RX_LOS_THRESHOLD_1; // Default: 4
			this->RX_SLIDE_MODE_0 = RX_SLIDE_MODE_0; // Default: "PCS"
			this->RX_SLIDE_MODE_1 = RX_SLIDE_MODE_1; // Default: "PCS"
			this->RX_STATUS_FMT_0 = RX_STATUS_FMT_0; // Default: "PCIE"
			this->RX_STATUS_FMT_1 = RX_STATUS_FMT_1; // Default: "PCIE"
			this->RX_XCLK_SEL_0 = RX_XCLK_SEL_0; // Default: "RXREC"
			this->RX_XCLK_SEL_1 = RX_XCLK_SEL_1; // Default: "RXREC"
			this->SATA_BURST_VAL_0 = SATA_BURST_VAL_0; // Default: 3'b100
			this->SATA_BURST_VAL_1 = SATA_BURST_VAL_1; // Default: 3'b100
			this->SATA_IDLE_VAL_0 = SATA_IDLE_VAL_0; // Default: 3'b011
			this->SATA_IDLE_VAL_1 = SATA_IDLE_VAL_1; // Default: 3'b011
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
			this->SIM_GTPRESET_SPEEDUP = SIM_GTPRESET_SPEEDUP; // Default: 1
			this->SIM_RECEIVER_DETECT_PASS = SIM_RECEIVER_DETECT_PASS; // Default: "TRUE"
			this->SIM_REFCLK0_SOURCE = SIM_REFCLK0_SOURCE; // Default: 3'b000
			this->SIM_REFCLK1_SOURCE = SIM_REFCLK1_SOURCE; // Default: 3'b000
			this->SIM_TX_ELEC_IDLE_LEVEL = SIM_TX_ELEC_IDLE_LEVEL; // Default: "X"
			this->SIM_VERSION = SIM_VERSION; // Default: "2.0"
			this->TERMINATION_CTRL_0 = TERMINATION_CTRL_0; // Default: 5'b10100
			this->TERMINATION_CTRL_1 = TERMINATION_CTRL_1; // Default: 5'b10100
			this->TERMINATION_OVRD_0 = TERMINATION_OVRD_0; // Default: "FALSE"
			this->TERMINATION_OVRD_1 = TERMINATION_OVRD_1; // Default: "FALSE"
			this->TRANS_TIME_FROM_P2_0 = TRANS_TIME_FROM_P2_0; // Default: 12'h03C
			this->TRANS_TIME_FROM_P2_1 = TRANS_TIME_FROM_P2_1; // Default: 12'h03C
			this->TRANS_TIME_NON_P2_0 = TRANS_TIME_NON_P2_0; // Default: 8'h19
			this->TRANS_TIME_NON_P2_1 = TRANS_TIME_NON_P2_1; // Default: 8'h19
			this->TRANS_TIME_TO_P2_0 = TRANS_TIME_TO_P2_0; // Default: 10'h064
			this->TRANS_TIME_TO_P2_1 = TRANS_TIME_TO_P2_1; // Default: 10'h064
			this->TST_ATTR_0 = TST_ATTR_0; // Default: 32'h00000000
			this->TST_ATTR_1 = TST_ATTR_1; // Default: 32'h00000000
			this->TXRX_INVERT_0 = TXRX_INVERT_0; // Default: 3'b011
			this->TXRX_INVERT_1 = TXRX_INVERT_1; // Default: 3'b011
			this->TX_BUFFER_USE_0 = TX_BUFFER_USE_0; // Default: "FALSE"
			this->TX_BUFFER_USE_1 = TX_BUFFER_USE_1; // Default: "FALSE"
			this->TX_DETECT_RX_CFG_0 = TX_DETECT_RX_CFG_0; // Default: 14'h1832
			this->TX_DETECT_RX_CFG_1 = TX_DETECT_RX_CFG_1; // Default: 14'h1832
			this->TX_IDLE_DELAY_0 = TX_IDLE_DELAY_0; // Default: 3'b011
			this->TX_IDLE_DELAY_1 = TX_IDLE_DELAY_1; // Default: 3'b011
			this->TX_TDCC_CFG_0 = TX_TDCC_CFG_0; // Default: 2'b00
			this->TX_TDCC_CFG_1 = TX_TDCC_CFG_1; // Default: 2'b00
			this->TX_XCLK_SEL_0 = TX_XCLK_SEL_0; // Default: "TXUSR"
			this->TX_XCLK_SEL_1 = TX_XCLK_SEL_1; // Default: "TXUSR"
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->DRDY = DRDY; // net ID: DRDY lsb: 0  msb: 0 OUTPUT
			this->DRPDO = DRPDO; // net ID: DRPDO lsb: 0  msb: 0 OUTPUT
			this->GTPCLKFBEAST = GTPCLKFBEAST; // net ID: GTPCLKFBEAST lsb: 0  msb: 0 OUTPUT
			this->GTPCLKFBWEST = GTPCLKFBWEST; // net ID: GTPCLKFBWEST lsb: 0  msb: 0 OUTPUT
			this->GTPCLKOUT0 = GTPCLKOUT0; // net ID: GTPCLKOUT0 lsb: 0  msb: 0 OUTPUT
			this->GTPCLKOUT1 = GTPCLKOUT1; // net ID: GTPCLKOUT1 lsb: 0  msb: 0 OUTPUT
			this->PHYSTATUS0 = PHYSTATUS0; // net ID: PHYSTATUS0 lsb: 0  msb: 0 OUTPUT
			this->PHYSTATUS1 = PHYSTATUS1; // net ID: PHYSTATUS1 lsb: 0  msb: 0 OUTPUT
			this->PLLLKDET0 = PLLLKDET0; // net ID: PLLLKDET0 lsb: 0  msb: 0 OUTPUT
			this->PLLLKDET1 = PLLLKDET1; // net ID: PLLLKDET1 lsb: 0  msb: 0 OUTPUT
			this->RCALOUTEAST = RCALOUTEAST; // net ID: RCALOUTEAST lsb: 0  msb: 0 OUTPUT
			this->RCALOUTWEST = RCALOUTWEST; // net ID: RCALOUTWEST lsb: 0  msb: 0 OUTPUT
			this->REFCLKOUT0 = REFCLKOUT0; // net ID: REFCLKOUT0 lsb: 0  msb: 0 OUTPUT
			this->REFCLKOUT1 = REFCLKOUT1; // net ID: REFCLKOUT1 lsb: 0  msb: 0 OUTPUT
			this->REFCLKPLL0 = REFCLKPLL0; // net ID: REFCLKPLL0 lsb: 0  msb: 0 OUTPUT
			this->REFCLKPLL1 = REFCLKPLL1; // net ID: REFCLKPLL1 lsb: 0  msb: 0 OUTPUT
			this->RESETDONE0 = RESETDONE0; // net ID: RESETDONE0 lsb: 0  msb: 0 OUTPUT
			this->RESETDONE1 = RESETDONE1; // net ID: RESETDONE1 lsb: 0  msb: 0 OUTPUT
			this->RXBUFSTATUS0 = RXBUFSTATUS0; // net ID: RXBUFSTATUS0 lsb: 0  msb: 0 OUTPUT
			this->RXBUFSTATUS1 = RXBUFSTATUS1; // net ID: RXBUFSTATUS1 lsb: 0  msb: 0 OUTPUT
			this->RXBYTEISALIGNED0 = RXBYTEISALIGNED0; // net ID: RXBYTEISALIGNED0 lsb: 0  msb: 0 OUTPUT
			this->RXBYTEISALIGNED1 = RXBYTEISALIGNED1; // net ID: RXBYTEISALIGNED1 lsb: 0  msb: 0 OUTPUT
			this->RXBYTEREALIGN0 = RXBYTEREALIGN0; // net ID: RXBYTEREALIGN0 lsb: 0  msb: 0 OUTPUT
			this->RXBYTEREALIGN1 = RXBYTEREALIGN1; // net ID: RXBYTEREALIGN1 lsb: 0  msb: 0 OUTPUT
			this->RXCHANBONDSEQ0 = RXCHANBONDSEQ0; // net ID: RXCHANBONDSEQ0 lsb: 0  msb: 0 OUTPUT
			this->RXCHANBONDSEQ1 = RXCHANBONDSEQ1; // net ID: RXCHANBONDSEQ1 lsb: 0  msb: 0 OUTPUT
			this->RXCHANISALIGNED0 = RXCHANISALIGNED0; // net ID: RXCHANISALIGNED0 lsb: 0  msb: 0 OUTPUT
			this->RXCHANISALIGNED1 = RXCHANISALIGNED1; // net ID: RXCHANISALIGNED1 lsb: 0  msb: 0 OUTPUT
			this->RXCHANREALIGN0 = RXCHANREALIGN0; // net ID: RXCHANREALIGN0 lsb: 0  msb: 0 OUTPUT
			this->RXCHANREALIGN1 = RXCHANREALIGN1; // net ID: RXCHANREALIGN1 lsb: 0  msb: 0 OUTPUT
			this->RXCHARISCOMMA0 = RXCHARISCOMMA0; // net ID: RXCHARISCOMMA0 lsb: 0  msb: 0 OUTPUT
			this->RXCHARISCOMMA1 = RXCHARISCOMMA1; // net ID: RXCHARISCOMMA1 lsb: 0  msb: 0 OUTPUT
			this->RXCHARISK0 = RXCHARISK0; // net ID: RXCHARISK0 lsb: 0  msb: 0 OUTPUT
			this->RXCHARISK1 = RXCHARISK1; // net ID: RXCHARISK1 lsb: 0  msb: 0 OUTPUT
			this->RXCHBONDO = RXCHBONDO; // net ID: RXCHBONDO lsb: 0  msb: 0 OUTPUT
			this->RXCLKCORCNT0 = RXCLKCORCNT0; // net ID: RXCLKCORCNT0 lsb: 0  msb: 0 OUTPUT
			this->RXCLKCORCNT1 = RXCLKCORCNT1; // net ID: RXCLKCORCNT1 lsb: 0  msb: 0 OUTPUT
			this->RXCOMMADET0 = RXCOMMADET0; // net ID: RXCOMMADET0 lsb: 0  msb: 0 OUTPUT
			this->RXCOMMADET1 = RXCOMMADET1; // net ID: RXCOMMADET1 lsb: 0  msb: 0 OUTPUT
			this->RXDATA0 = RXDATA0; // net ID: RXDATA0 lsb: 0  msb: 0 OUTPUT
			this->RXDATA1 = RXDATA1; // net ID: RXDATA1 lsb: 0  msb: 0 OUTPUT
			this->RXDISPERR0 = RXDISPERR0; // net ID: RXDISPERR0 lsb: 0  msb: 0 OUTPUT
			this->RXDISPERR1 = RXDISPERR1; // net ID: RXDISPERR1 lsb: 0  msb: 0 OUTPUT
			this->RXELECIDLE0 = RXELECIDLE0; // net ID: RXELECIDLE0 lsb: 0  msb: 0 OUTPUT
			this->RXELECIDLE1 = RXELECIDLE1; // net ID: RXELECIDLE1 lsb: 0  msb: 0 OUTPUT
			this->RXLOSSOFSYNC0 = RXLOSSOFSYNC0; // net ID: RXLOSSOFSYNC0 lsb: 0  msb: 0 OUTPUT
			this->RXLOSSOFSYNC1 = RXLOSSOFSYNC1; // net ID: RXLOSSOFSYNC1 lsb: 0  msb: 0 OUTPUT
			this->RXNOTINTABLE0 = RXNOTINTABLE0; // net ID: RXNOTINTABLE0 lsb: 0  msb: 0 OUTPUT
			this->RXNOTINTABLE1 = RXNOTINTABLE1; // net ID: RXNOTINTABLE1 lsb: 0  msb: 0 OUTPUT
			this->RXPRBSERR0 = RXPRBSERR0; // net ID: RXPRBSERR0 lsb: 0  msb: 0 OUTPUT
			this->RXPRBSERR1 = RXPRBSERR1; // net ID: RXPRBSERR1 lsb: 0  msb: 0 OUTPUT
			this->RXRECCLK0 = RXRECCLK0; // net ID: RXRECCLK0 lsb: 0  msb: 0 OUTPUT
			this->RXRECCLK1 = RXRECCLK1; // net ID: RXRECCLK1 lsb: 0  msb: 0 OUTPUT
			this->RXRUNDISP0 = RXRUNDISP0; // net ID: RXRUNDISP0 lsb: 0  msb: 0 OUTPUT
			this->RXRUNDISP1 = RXRUNDISP1; // net ID: RXRUNDISP1 lsb: 0  msb: 0 OUTPUT
			this->RXSTATUS0 = RXSTATUS0; // net ID: RXSTATUS0 lsb: 0  msb: 0 OUTPUT
			this->RXSTATUS1 = RXSTATUS1; // net ID: RXSTATUS1 lsb: 0  msb: 0 OUTPUT
			this->RXVALID0 = RXVALID0; // net ID: RXVALID0 lsb: 0  msb: 0 OUTPUT
			this->RXVALID1 = RXVALID1; // net ID: RXVALID1 lsb: 0  msb: 0 OUTPUT
			this->TSTOUT0 = TSTOUT0; // net ID: TSTOUT0 lsb: 0  msb: 0 OUTPUT
			this->TSTOUT1 = TSTOUT1; // net ID: TSTOUT1 lsb: 0  msb: 0 OUTPUT
			this->TXBUFSTATUS0 = TXBUFSTATUS0; // net ID: TXBUFSTATUS0 lsb: 0  msb: 0 OUTPUT
			this->TXBUFSTATUS1 = TXBUFSTATUS1; // net ID: TXBUFSTATUS1 lsb: 0  msb: 0 OUTPUT
			this->TXKERR0 = TXKERR0; // net ID: TXKERR0 lsb: 0  msb: 0 OUTPUT
			this->TXKERR1 = TXKERR1; // net ID: TXKERR1 lsb: 0  msb: 0 OUTPUT
			this->TXN0 = TXN0; // net ID: TXN0 lsb: 0  msb: 0 OUTPUT
			this->TXN1 = TXN1; // net ID: TXN1 lsb: 0  msb: 0 OUTPUT
			this->TXOUTCLK0 = TXOUTCLK0; // net ID: TXOUTCLK0 lsb: 0  msb: 0 OUTPUT
			this->TXOUTCLK1 = TXOUTCLK1; // net ID: TXOUTCLK1 lsb: 0  msb: 0 OUTPUT
			this->TXP0 = TXP0; // net ID: TXP0 lsb: 0  msb: 0 OUTPUT
			this->TXP1 = TXP1; // net ID: TXP1 lsb: 0  msb: 0 OUTPUT
			this->TXRUNDISP0 = TXRUNDISP0; // net ID: TXRUNDISP0 lsb: 0  msb: 0 OUTPUT
			this->TXRUNDISP1 = TXRUNDISP1; // net ID: TXRUNDISP1 lsb: 0  msb: 0 OUTPUT
			this->CLK00 = CLK00; // net ID: CLK00 lsb: 0  msb: 0 INPUT
			this->CLK01 = CLK01; // net ID: CLK01 lsb: 0  msb: 0 INPUT
			this->CLK10 = CLK10; // net ID: CLK10 lsb: 0  msb: 0 INPUT
			this->CLK11 = CLK11; // net ID: CLK11 lsb: 0  msb: 0 INPUT
			this->CLKINEAST0 = CLKINEAST0; // net ID: CLKINEAST0 lsb: 0  msb: 0 INPUT
			this->CLKINEAST1 = CLKINEAST1; // net ID: CLKINEAST1 lsb: 0  msb: 0 INPUT
			this->CLKINWEST0 = CLKINWEST0; // net ID: CLKINWEST0 lsb: 0  msb: 0 INPUT
			this->CLKINWEST1 = CLKINWEST1; // net ID: CLKINWEST1 lsb: 0  msb: 0 INPUT
			this->DADDR = DADDR; // net ID: DADDR lsb: 0  msb: 7 INPUT
			this->DCLK = DCLK; // net ID: DCLK lsb: 0  msb: 0 INPUT
			this->DEN = DEN; // net ID: DEN lsb: 0  msb: 0 INPUT
			this->DI = DI; // net ID: DI lsb: 0  msb: 15 INPUT
			this->DWE = DWE; // net ID: DWE lsb: 0  msb: 0 INPUT
			this->GATERXELECIDLE0 = GATERXELECIDLE0; // net ID: GATERXELECIDLE0 lsb: 0  msb: 0 INPUT
			this->GATERXELECIDLE1 = GATERXELECIDLE1; // net ID: GATERXELECIDLE1 lsb: 0  msb: 0 INPUT
			this->GCLK00 = GCLK00; // net ID: GCLK00 lsb: 0  msb: 0 INPUT
			this->GCLK01 = GCLK01; // net ID: GCLK01 lsb: 0  msb: 0 INPUT
			this->GCLK10 = GCLK10; // net ID: GCLK10 lsb: 0  msb: 0 INPUT
			this->GCLK11 = GCLK11; // net ID: GCLK11 lsb: 0  msb: 0 INPUT
			this->GTPCLKFBSEL0EAST = GTPCLKFBSEL0EAST; // net ID: GTPCLKFBSEL0EAST lsb: 0  msb: 1 INPUT
			this->GTPCLKFBSEL0WEST = GTPCLKFBSEL0WEST; // net ID: GTPCLKFBSEL0WEST lsb: 0  msb: 1 INPUT
			this->GTPCLKFBSEL1EAST = GTPCLKFBSEL1EAST; // net ID: GTPCLKFBSEL1EAST lsb: 0  msb: 1 INPUT
			this->GTPCLKFBSEL1WEST = GTPCLKFBSEL1WEST; // net ID: GTPCLKFBSEL1WEST lsb: 0  msb: 1 INPUT
			this->GTPRESET0 = GTPRESET0; // net ID: GTPRESET0 lsb: 0  msb: 0 INPUT
			this->GTPRESET1 = GTPRESET1; // net ID: GTPRESET1 lsb: 0  msb: 0 INPUT
			this->GTPTEST0 = GTPTEST0; // net ID: GTPTEST0 lsb: 0  msb: 7 INPUT
			this->GTPTEST1 = GTPTEST1; // net ID: GTPTEST1 lsb: 0  msb: 7 INPUT
			this->IGNORESIGDET0 = IGNORESIGDET0; // net ID: IGNORESIGDET0 lsb: 0  msb: 0 INPUT
			this->IGNORESIGDET1 = IGNORESIGDET1; // net ID: IGNORESIGDET1 lsb: 0  msb: 0 INPUT
			this->INTDATAWIDTH0 = INTDATAWIDTH0; // net ID: INTDATAWIDTH0 lsb: 0  msb: 0 INPUT
			this->INTDATAWIDTH1 = INTDATAWIDTH1; // net ID: INTDATAWIDTH1 lsb: 0  msb: 0 INPUT
			this->LOOPBACK0 = LOOPBACK0; // net ID: LOOPBACK0 lsb: 0  msb: 2 INPUT
			this->LOOPBACK1 = LOOPBACK1; // net ID: LOOPBACK1 lsb: 0  msb: 2 INPUT
			this->PLLCLK00 = PLLCLK00; // net ID: PLLCLK00 lsb: 0  msb: 0 INPUT
			this->PLLCLK01 = PLLCLK01; // net ID: PLLCLK01 lsb: 0  msb: 0 INPUT
			this->PLLCLK10 = PLLCLK10; // net ID: PLLCLK10 lsb: 0  msb: 0 INPUT
			this->PLLCLK11 = PLLCLK11; // net ID: PLLCLK11 lsb: 0  msb: 0 INPUT
			this->PLLLKDETEN0 = PLLLKDETEN0; // net ID: PLLLKDETEN0 lsb: 0  msb: 0 INPUT
			this->PLLLKDETEN1 = PLLLKDETEN1; // net ID: PLLLKDETEN1 lsb: 0  msb: 0 INPUT
			this->PLLPOWERDOWN0 = PLLPOWERDOWN0; // net ID: PLLPOWERDOWN0 lsb: 0  msb: 0 INPUT
			this->PLLPOWERDOWN1 = PLLPOWERDOWN1; // net ID: PLLPOWERDOWN1 lsb: 0  msb: 0 INPUT
			this->PRBSCNTRESET0 = PRBSCNTRESET0; // net ID: PRBSCNTRESET0 lsb: 0  msb: 0 INPUT
			this->PRBSCNTRESET1 = PRBSCNTRESET1; // net ID: PRBSCNTRESET1 lsb: 0  msb: 0 INPUT
			this->RCALINEAST = RCALINEAST; // net ID: RCALINEAST lsb: 0  msb: 4 INPUT
			this->RCALINWEST = RCALINWEST; // net ID: RCALINWEST lsb: 0  msb: 4 INPUT
			this->REFCLKPWRDNB0 = REFCLKPWRDNB0; // net ID: REFCLKPWRDNB0 lsb: 0  msb: 0 INPUT
			this->REFCLKPWRDNB1 = REFCLKPWRDNB1; // net ID: REFCLKPWRDNB1 lsb: 0  msb: 0 INPUT
			this->REFSELDYPLL0 = REFSELDYPLL0; // net ID: REFSELDYPLL0 lsb: 0  msb: 2 INPUT
			this->REFSELDYPLL1 = REFSELDYPLL1; // net ID: REFSELDYPLL1 lsb: 0  msb: 2 INPUT
			this->RXBUFRESET0 = RXBUFRESET0; // net ID: RXBUFRESET0 lsb: 0  msb: 0 INPUT
			this->RXBUFRESET1 = RXBUFRESET1; // net ID: RXBUFRESET1 lsb: 0  msb: 0 INPUT
			this->RXCDRRESET0 = RXCDRRESET0; // net ID: RXCDRRESET0 lsb: 0  msb: 0 INPUT
			this->RXCDRRESET1 = RXCDRRESET1; // net ID: RXCDRRESET1 lsb: 0  msb: 0 INPUT
			this->RXCHBONDI = RXCHBONDI; // net ID: RXCHBONDI lsb: 0  msb: 2 INPUT
			this->RXCHBONDMASTER0 = RXCHBONDMASTER0; // net ID: RXCHBONDMASTER0 lsb: 0  msb: 0 INPUT
			this->RXCHBONDMASTER1 = RXCHBONDMASTER1; // net ID: RXCHBONDMASTER1 lsb: 0  msb: 0 INPUT
			this->RXCHBONDSLAVE0 = RXCHBONDSLAVE0; // net ID: RXCHBONDSLAVE0 lsb: 0  msb: 0 INPUT
			this->RXCHBONDSLAVE1 = RXCHBONDSLAVE1; // net ID: RXCHBONDSLAVE1 lsb: 0  msb: 0 INPUT
			this->RXCOMMADETUSE0 = RXCOMMADETUSE0; // net ID: RXCOMMADETUSE0 lsb: 0  msb: 0 INPUT
			this->RXCOMMADETUSE1 = RXCOMMADETUSE1; // net ID: RXCOMMADETUSE1 lsb: 0  msb: 0 INPUT
			this->RXDATAWIDTH0 = RXDATAWIDTH0; // net ID: RXDATAWIDTH0 lsb: 0  msb: 1 INPUT
			this->RXDATAWIDTH1 = RXDATAWIDTH1; // net ID: RXDATAWIDTH1 lsb: 0  msb: 1 INPUT
			this->RXDEC8B10BUSE0 = RXDEC8B10BUSE0; // net ID: RXDEC8B10BUSE0 lsb: 0  msb: 0 INPUT
			this->RXDEC8B10BUSE1 = RXDEC8B10BUSE1; // net ID: RXDEC8B10BUSE1 lsb: 0  msb: 0 INPUT
			this->RXENCHANSYNC0 = RXENCHANSYNC0; // net ID: RXENCHANSYNC0 lsb: 0  msb: 0 INPUT
			this->RXENCHANSYNC1 = RXENCHANSYNC1; // net ID: RXENCHANSYNC1 lsb: 0  msb: 0 INPUT
			this->RXENMCOMMAALIGN0 = RXENMCOMMAALIGN0; // net ID: RXENMCOMMAALIGN0 lsb: 0  msb: 0 INPUT
			this->RXENMCOMMAALIGN1 = RXENMCOMMAALIGN1; // net ID: RXENMCOMMAALIGN1 lsb: 0  msb: 0 INPUT
			this->RXENPCOMMAALIGN0 = RXENPCOMMAALIGN0; // net ID: RXENPCOMMAALIGN0 lsb: 0  msb: 0 INPUT
			this->RXENPCOMMAALIGN1 = RXENPCOMMAALIGN1; // net ID: RXENPCOMMAALIGN1 lsb: 0  msb: 0 INPUT
			this->RXENPMAPHASEALIGN0 = RXENPMAPHASEALIGN0; // net ID: RXENPMAPHASEALIGN0 lsb: 0  msb: 0 INPUT
			this->RXENPMAPHASEALIGN1 = RXENPMAPHASEALIGN1; // net ID: RXENPMAPHASEALIGN1 lsb: 0  msb: 0 INPUT
			this->RXENPRBSTST0 = RXENPRBSTST0; // net ID: RXENPRBSTST0 lsb: 0  msb: 2 INPUT
			this->RXENPRBSTST1 = RXENPRBSTST1; // net ID: RXENPRBSTST1 lsb: 0  msb: 2 INPUT
			this->RXEQMIX0 = RXEQMIX0; // net ID: RXEQMIX0 lsb: 0  msb: 1 INPUT
			this->RXEQMIX1 = RXEQMIX1; // net ID: RXEQMIX1 lsb: 0  msb: 1 INPUT
			this->RXN0 = RXN0; // net ID: RXN0 lsb: 0  msb: 0 INPUT
			this->RXN1 = RXN1; // net ID: RXN1 lsb: 0  msb: 0 INPUT
			this->RXP0 = RXP0; // net ID: RXP0 lsb: 0  msb: 0 INPUT
			this->RXP1 = RXP1; // net ID: RXP1 lsb: 0  msb: 0 INPUT
			this->RXPMASETPHASE0 = RXPMASETPHASE0; // net ID: RXPMASETPHASE0 lsb: 0  msb: 0 INPUT
			this->RXPMASETPHASE1 = RXPMASETPHASE1; // net ID: RXPMASETPHASE1 lsb: 0  msb: 0 INPUT
			this->RXPOLARITY0 = RXPOLARITY0; // net ID: RXPOLARITY0 lsb: 0  msb: 0 INPUT
			this->RXPOLARITY1 = RXPOLARITY1; // net ID: RXPOLARITY1 lsb: 0  msb: 0 INPUT
			this->RXPOWERDOWN0 = RXPOWERDOWN0; // net ID: RXPOWERDOWN0 lsb: 0  msb: 1 INPUT
			this->RXPOWERDOWN1 = RXPOWERDOWN1; // net ID: RXPOWERDOWN1 lsb: 0  msb: 1 INPUT
			this->RXRESET0 = RXRESET0; // net ID: RXRESET0 lsb: 0  msb: 0 INPUT
			this->RXRESET1 = RXRESET1; // net ID: RXRESET1 lsb: 0  msb: 0 INPUT
			this->RXSLIDE0 = RXSLIDE0; // net ID: RXSLIDE0 lsb: 0  msb: 0 INPUT
			this->RXSLIDE1 = RXSLIDE1; // net ID: RXSLIDE1 lsb: 0  msb: 0 INPUT
			this->RXUSRCLK0 = RXUSRCLK0; // net ID: RXUSRCLK0 lsb: 0  msb: 0 INPUT
			this->RXUSRCLK1 = RXUSRCLK1; // net ID: RXUSRCLK1 lsb: 0  msb: 0 INPUT
			this->RXUSRCLK20 = RXUSRCLK20; // net ID: RXUSRCLK20 lsb: 0  msb: 0 INPUT
			this->RXUSRCLK21 = RXUSRCLK21; // net ID: RXUSRCLK21 lsb: 0  msb: 0 INPUT
			this->TSTCLK0 = TSTCLK0; // net ID: TSTCLK0 lsb: 0  msb: 0 INPUT
			this->TSTCLK1 = TSTCLK1; // net ID: TSTCLK1 lsb: 0  msb: 0 INPUT
			this->TSTIN0 = TSTIN0; // net ID: TSTIN0 lsb: 0  msb: 11 INPUT
			this->TSTIN1 = TSTIN1; // net ID: TSTIN1 lsb: 0  msb: 11 INPUT
			this->TXBUFDIFFCTRL0 = TXBUFDIFFCTRL0; // net ID: TXBUFDIFFCTRL0 lsb: 0  msb: 2 INPUT
			this->TXBUFDIFFCTRL1 = TXBUFDIFFCTRL1; // net ID: TXBUFDIFFCTRL1 lsb: 0  msb: 2 INPUT
			this->TXBYPASS8B10B0 = TXBYPASS8B10B0; // net ID: TXBYPASS8B10B0 lsb: 0  msb: 3 INPUT
			this->TXBYPASS8B10B1 = TXBYPASS8B10B1; // net ID: TXBYPASS8B10B1 lsb: 0  msb: 3 INPUT
			this->TXCHARDISPMODE0 = TXCHARDISPMODE0; // net ID: TXCHARDISPMODE0 lsb: 0  msb: 3 INPUT
			this->TXCHARDISPMODE1 = TXCHARDISPMODE1; // net ID: TXCHARDISPMODE1 lsb: 0  msb: 3 INPUT
			this->TXCHARDISPVAL0 = TXCHARDISPVAL0; // net ID: TXCHARDISPVAL0 lsb: 0  msb: 3 INPUT
			this->TXCHARDISPVAL1 = TXCHARDISPVAL1; // net ID: TXCHARDISPVAL1 lsb: 0  msb: 3 INPUT
			this->TXCHARISK0 = TXCHARISK0; // net ID: TXCHARISK0 lsb: 0  msb: 3 INPUT
			this->TXCHARISK1 = TXCHARISK1; // net ID: TXCHARISK1 lsb: 0  msb: 3 INPUT
			this->TXCOMSTART0 = TXCOMSTART0; // net ID: TXCOMSTART0 lsb: 0  msb: 0 INPUT
			this->TXCOMSTART1 = TXCOMSTART1; // net ID: TXCOMSTART1 lsb: 0  msb: 0 INPUT
			this->TXCOMTYPE0 = TXCOMTYPE0; // net ID: TXCOMTYPE0 lsb: 0  msb: 0 INPUT
			this->TXCOMTYPE1 = TXCOMTYPE1; // net ID: TXCOMTYPE1 lsb: 0  msb: 0 INPUT
			this->TXDATA0 = TXDATA0; // net ID: TXDATA0 lsb: 0  msb: 31 INPUT
			this->TXDATA1 = TXDATA1; // net ID: TXDATA1 lsb: 0  msb: 31 INPUT
			this->TXDATAWIDTH0 = TXDATAWIDTH0; // net ID: TXDATAWIDTH0 lsb: 0  msb: 1 INPUT
			this->TXDATAWIDTH1 = TXDATAWIDTH1; // net ID: TXDATAWIDTH1 lsb: 0  msb: 1 INPUT
			this->TXDETECTRX0 = TXDETECTRX0; // net ID: TXDETECTRX0 lsb: 0  msb: 0 INPUT
			this->TXDETECTRX1 = TXDETECTRX1; // net ID: TXDETECTRX1 lsb: 0  msb: 0 INPUT
			this->TXDIFFCTRL0 = TXDIFFCTRL0; // net ID: TXDIFFCTRL0 lsb: 0  msb: 3 INPUT
			this->TXDIFFCTRL1 = TXDIFFCTRL1; // net ID: TXDIFFCTRL1 lsb: 0  msb: 3 INPUT
			this->TXELECIDLE0 = TXELECIDLE0; // net ID: TXELECIDLE0 lsb: 0  msb: 0 INPUT
			this->TXELECIDLE1 = TXELECIDLE1; // net ID: TXELECIDLE1 lsb: 0  msb: 0 INPUT
			this->TXENC8B10BUSE0 = TXENC8B10BUSE0; // net ID: TXENC8B10BUSE0 lsb: 0  msb: 0 INPUT
			this->TXENC8B10BUSE1 = TXENC8B10BUSE1; // net ID: TXENC8B10BUSE1 lsb: 0  msb: 0 INPUT
			this->TXENPMAPHASEALIGN0 = TXENPMAPHASEALIGN0; // net ID: TXENPMAPHASEALIGN0 lsb: 0  msb: 0 INPUT
			this->TXENPMAPHASEALIGN1 = TXENPMAPHASEALIGN1; // net ID: TXENPMAPHASEALIGN1 lsb: 0  msb: 0 INPUT
			this->TXENPRBSTST0 = TXENPRBSTST0; // net ID: TXENPRBSTST0 lsb: 0  msb: 2 INPUT
			this->TXENPRBSTST1 = TXENPRBSTST1; // net ID: TXENPRBSTST1 lsb: 0  msb: 2 INPUT
			this->TXINHIBIT0 = TXINHIBIT0; // net ID: TXINHIBIT0 lsb: 0  msb: 0 INPUT
			this->TXINHIBIT1 = TXINHIBIT1; // net ID: TXINHIBIT1 lsb: 0  msb: 0 INPUT
			this->TXPDOWNASYNCH0 = TXPDOWNASYNCH0; // net ID: TXPDOWNASYNCH0 lsb: 0  msb: 0 INPUT
			this->TXPDOWNASYNCH1 = TXPDOWNASYNCH1; // net ID: TXPDOWNASYNCH1 lsb: 0  msb: 0 INPUT
			this->TXPMASETPHASE0 = TXPMASETPHASE0; // net ID: TXPMASETPHASE0 lsb: 0  msb: 0 INPUT
			this->TXPMASETPHASE1 = TXPMASETPHASE1; // net ID: TXPMASETPHASE1 lsb: 0  msb: 0 INPUT
			this->TXPOLARITY0 = TXPOLARITY0; // net ID: TXPOLARITY0 lsb: 0  msb: 0 INPUT
			this->TXPOLARITY1 = TXPOLARITY1; // net ID: TXPOLARITY1 lsb: 0  msb: 0 INPUT
			this->TXPOWERDOWN0 = TXPOWERDOWN0; // net ID: TXPOWERDOWN0 lsb: 0  msb: 1 INPUT
			this->TXPOWERDOWN1 = TXPOWERDOWN1; // net ID: TXPOWERDOWN1 lsb: 0  msb: 1 INPUT
			this->TXPRBSFORCEERR0 = TXPRBSFORCEERR0; // net ID: TXPRBSFORCEERR0 lsb: 0  msb: 0 INPUT
			this->TXPRBSFORCEERR1 = TXPRBSFORCEERR1; // net ID: TXPRBSFORCEERR1 lsb: 0  msb: 0 INPUT
			this->TXPREEMPHASIS0 = TXPREEMPHASIS0; // net ID: TXPREEMPHASIS0 lsb: 0  msb: 2 INPUT
			this->TXPREEMPHASIS1 = TXPREEMPHASIS1; // net ID: TXPREEMPHASIS1 lsb: 0  msb: 2 INPUT
			this->TXRESET0 = TXRESET0; // net ID: TXRESET0 lsb: 0  msb: 0 INPUT
			this->TXRESET1 = TXRESET1; // net ID: TXRESET1 lsb: 0  msb: 0 INPUT
			this->TXUSRCLK0 = TXUSRCLK0; // net ID: TXUSRCLK0 lsb: 0  msb: 0 INPUT
			this->TXUSRCLK1 = TXUSRCLK1; // net ID: TXUSRCLK1 lsb: 0  msb: 0 INPUT
			this->TXUSRCLK20 = TXUSRCLK20; // net ID: TXUSRCLK20 lsb: 0  msb: 0 INPUT
			this->TXUSRCLK21 = TXUSRCLK21; // net ID: TXUSRCLK21 lsb: 0  msb: 0 INPUT
			this->USRCODEERR0 = USRCODEERR0; // net ID: USRCODEERR0 lsb: 0  msb: 0 INPUT
			this->USRCODEERR1 = USRCODEERR1; // net ID: USRCODEERR1 lsb: 0  msb: 0 INPUT
			
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
