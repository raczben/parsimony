/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_GTPA1_DUAL{

		//Verilog Parameters:
		parameter_enum_t AC_CAP_DIS_0;
		parameter_enum_t AC_CAP_DIS_1;
		parameter_int_t ALIGN_COMMA_WORD_0;
		parameter_int_t ALIGN_COMMA_WORD_1;
		parameter_int_t CB2_INH_CC_PERIOD_0;
		parameter_int_t CB2_INH_CC_PERIOD_1;
		parameter_int_t CDR_PH_ADJ_TIME_0;
		parameter_int_t CDR_PH_ADJ_TIME_1;
		parameter_int_t CHAN_BOND_1_MAX_SKEW_0;
		parameter_int_t CHAN_BOND_1_MAX_SKEW_1;
		parameter_int_t CHAN_BOND_2_MAX_SKEW_0;
		parameter_int_t CHAN_BOND_2_MAX_SKEW_1;
		parameter_enum_t CHAN_BOND_KEEP_ALIGN_0;
		parameter_enum_t CHAN_BOND_KEEP_ALIGN_1;
		parameter_int_t CHAN_BOND_SEQ_1_1_0;
		parameter_int_t CHAN_BOND_SEQ_1_1_1;
		parameter_int_t CHAN_BOND_SEQ_1_2_0;
		parameter_int_t CHAN_BOND_SEQ_1_2_1;
		parameter_int_t CHAN_BOND_SEQ_1_3_0;
		parameter_int_t CHAN_BOND_SEQ_1_3_1;
		parameter_int_t CHAN_BOND_SEQ_1_4_0;
		parameter_int_t CHAN_BOND_SEQ_1_4_1;
		parameter_int_t CHAN_BOND_SEQ_1_ENABLE_0;
		parameter_int_t CHAN_BOND_SEQ_1_ENABLE_1;
		parameter_int_t CHAN_BOND_SEQ_2_1_0;
		parameter_int_t CHAN_BOND_SEQ_2_1_1;
		parameter_int_t CHAN_BOND_SEQ_2_2_0;
		parameter_int_t CHAN_BOND_SEQ_2_2_1;
		parameter_int_t CHAN_BOND_SEQ_2_3_0;
		parameter_int_t CHAN_BOND_SEQ_2_3_1;
		parameter_int_t CHAN_BOND_SEQ_2_4_0;
		parameter_int_t CHAN_BOND_SEQ_2_4_1;
		parameter_int_t CHAN_BOND_SEQ_2_ENABLE_0;
		parameter_int_t CHAN_BOND_SEQ_2_ENABLE_1;
		parameter_enum_t CHAN_BOND_SEQ_2_USE_0;
		parameter_enum_t CHAN_BOND_SEQ_2_USE_1;
		parameter_int_t CHAN_BOND_SEQ_LEN_0;
		parameter_int_t CHAN_BOND_SEQ_LEN_1;
		parameter_int_t CLK25_DIVIDER_0;
		parameter_int_t CLK25_DIVIDER_1;
		parameter_enum_t CLKINDC_B_0;
		parameter_enum_t CLKINDC_B_1;
		parameter_enum_t CLKRCV_TRST_0;
		parameter_enum_t CLKRCV_TRST_1;
		parameter_enum_t CLK_CORRECT_USE_0;
		parameter_enum_t CLK_CORRECT_USE_1;
		parameter_int_t CLK_COR_ADJ_LEN_0;
		parameter_int_t CLK_COR_ADJ_LEN_1;
		parameter_int_t CLK_COR_DET_LEN_0;
		parameter_int_t CLK_COR_DET_LEN_1;
		parameter_enum_t CLK_COR_INSERT_IDLE_FLAG_0;
		parameter_enum_t CLK_COR_INSERT_IDLE_FLAG_1;
		parameter_enum_t CLK_COR_KEEP_IDLE_0;
		parameter_enum_t CLK_COR_KEEP_IDLE_1;
		parameter_int_t CLK_COR_MAX_LAT_0;
		parameter_int_t CLK_COR_MAX_LAT_1;
		parameter_int_t CLK_COR_MIN_LAT_0;
		parameter_int_t CLK_COR_MIN_LAT_1;
		parameter_enum_t CLK_COR_PRECEDENCE_0;
		parameter_enum_t CLK_COR_PRECEDENCE_1;
		parameter_int_t CLK_COR_REPEAT_WAIT_0;
		parameter_int_t CLK_COR_REPEAT_WAIT_1;
		parameter_int_t CLK_COR_SEQ_1_1_0;
		parameter_int_t CLK_COR_SEQ_1_1_1;
		parameter_int_t CLK_COR_SEQ_1_2_0;
		parameter_int_t CLK_COR_SEQ_1_2_1;
		parameter_int_t CLK_COR_SEQ_1_3_0;
		parameter_int_t CLK_COR_SEQ_1_3_1;
		parameter_int_t CLK_COR_SEQ_1_4_0;
		parameter_int_t CLK_COR_SEQ_1_4_1;
		parameter_int_t CLK_COR_SEQ_1_ENABLE_0;
		parameter_int_t CLK_COR_SEQ_1_ENABLE_1;
		parameter_int_t CLK_COR_SEQ_2_1_0;
		parameter_int_t CLK_COR_SEQ_2_1_1;
		parameter_int_t CLK_COR_SEQ_2_2_0;
		parameter_int_t CLK_COR_SEQ_2_2_1;
		parameter_int_t CLK_COR_SEQ_2_3_0;
		parameter_int_t CLK_COR_SEQ_2_3_1;
		parameter_int_t CLK_COR_SEQ_2_4_0;
		parameter_int_t CLK_COR_SEQ_2_4_1;
		parameter_int_t CLK_COR_SEQ_2_ENABLE_0;
		parameter_int_t CLK_COR_SEQ_2_ENABLE_1;
		parameter_enum_t CLK_COR_SEQ_2_USE_0;
		parameter_enum_t CLK_COR_SEQ_2_USE_1;
		parameter_string_t CLK_OUT_GTP_SEL_0;
		parameter_string_t CLK_OUT_GTP_SEL_1;
		parameter_int_t CM_TRIM_0;
		parameter_int_t CM_TRIM_1;
		parameter_int_t COMMA_10B_ENABLE_0;
		parameter_int_t COMMA_10B_ENABLE_1;
		parameter_int_t COM_BURST_VAL_0;
		parameter_int_t COM_BURST_VAL_1;
		parameter_enum_t DEC_MCOMMA_DETECT_0;
		parameter_enum_t DEC_MCOMMA_DETECT_1;
		parameter_enum_t DEC_PCOMMA_DETECT_0;
		parameter_enum_t DEC_PCOMMA_DETECT_1;
		parameter_enum_t DEC_VALID_COMMA_ONLY_0;
		parameter_enum_t DEC_VALID_COMMA_ONLY_1;
		parameter_enum_t GTP_CFG_PWRUP_0;
		parameter_enum_t GTP_CFG_PWRUP_1;
		parameter_int_t MCOMMA_10B_VALUE_0;
		parameter_int_t MCOMMA_10B_VALUE_1;
		parameter_enum_t MCOMMA_DETECT_0;
		parameter_enum_t MCOMMA_DETECT_1;
		parameter_int_t OOBDETECT_THRESHOLD_0;
		parameter_int_t OOBDETECT_THRESHOLD_1;
		parameter_int_t OOB_CLK_DIVIDER_0;
		parameter_int_t OOB_CLK_DIVIDER_1;
		parameter_enum_t PCI_EXPRESS_MODE_0;
		parameter_enum_t PCI_EXPRESS_MODE_1;
		parameter_int_t PCOMMA_10B_VALUE_0;
		parameter_int_t PCOMMA_10B_VALUE_1;
		parameter_enum_t PCOMMA_DETECT_0;
		parameter_enum_t PCOMMA_DETECT_1;
		parameter_int_t PLLLKDET_CFG_0;
		parameter_int_t PLLLKDET_CFG_1;
		parameter_int_t PLL_COM_CFG_0;
		parameter_int_t PLL_COM_CFG_1;
		parameter_int_t PLL_CP_CFG_0;
		parameter_int_t PLL_CP_CFG_1;
		parameter_int_t PLL_DIVSEL_FB_0;
		parameter_int_t PLL_DIVSEL_FB_1;
		parameter_int_t PLL_DIVSEL_REF_0;
		parameter_int_t PLL_DIVSEL_REF_1;
		parameter_int_t PLL_RXDIVSEL_OUT_0;
		parameter_int_t PLL_RXDIVSEL_OUT_1;
		parameter_enum_t PLL_SATA_0;
		parameter_enum_t PLL_SATA_1;
		parameter_string_t PLL_SOURCE_0;
		parameter_string_t PLL_SOURCE_1;
		parameter_int_t PLL_TXDIVSEL_OUT_0;
		parameter_int_t PLL_TXDIVSEL_OUT_1;
		parameter_int_t PMA_CDR_SCAN_0;
		parameter_int_t PMA_CDR_SCAN_1;
		parameter_int_t PMA_COM_CFG_EAST;
		parameter_int_t PMA_COM_CFG_WEST;
		parameter_int_t PMA_RXSYNC_CFG_0;
		parameter_int_t PMA_RXSYNC_CFG_1;
		parameter_int_t PMA_RX_CFG_0;
		parameter_int_t PMA_RX_CFG_1;
		parameter_int_t PMA_TX_CFG_0;
		parameter_int_t PMA_TX_CFG_1;
		parameter_enum_t RCV_TERM_GND_0;
		parameter_enum_t RCV_TERM_GND_1;
		parameter_enum_t RCV_TERM_VTTRX_0;
		parameter_enum_t RCV_TERM_VTTRX_1;
		parameter_int_t RXEQ_CFG_0;
		parameter_int_t RXEQ_CFG_1;
		parameter_int_t RXPRBSERR_LOOPBACK_0;
		parameter_int_t RXPRBSERR_LOOPBACK_1;
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
		parameter_int_t RX_IDLE_HI_CNT_0;
		parameter_int_t RX_IDLE_HI_CNT_1;
		parameter_int_t RX_IDLE_LO_CNT_0;
		parameter_int_t RX_IDLE_LO_CNT_1;
		parameter_enum_t RX_LOSS_OF_SYNC_FSM_0;
		parameter_enum_t RX_LOSS_OF_SYNC_FSM_1;
		parameter_int_t RX_LOS_INVALID_INCR_0;
		parameter_int_t RX_LOS_INVALID_INCR_1;
		parameter_int_t RX_LOS_THRESHOLD_0;
		parameter_int_t RX_LOS_THRESHOLD_1;
		parameter_string_t RX_SLIDE_MODE_0;
		parameter_string_t RX_SLIDE_MODE_1;
		parameter_string_t RX_STATUS_FMT_0;
		parameter_string_t RX_STATUS_FMT_1;
		parameter_string_t RX_XCLK_SEL_0;
		parameter_string_t RX_XCLK_SEL_1;
		parameter_int_t SATA_BURST_VAL_0;
		parameter_int_t SATA_BURST_VAL_1;
		parameter_int_t SATA_IDLE_VAL_0;
		parameter_int_t SATA_IDLE_VAL_1;
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
		parameter_enum_t SIM_RECEIVER_DETECT_PASS;
		parameter_int_t SIM_REFCLK0_SOURCE;
		parameter_int_t SIM_REFCLK1_SOURCE;
		parameter_string_t SIM_TX_ELEC_IDLE_LEVEL;
		parameter_string_t SIM_VERSION;
		parameter_int_t TERMINATION_CTRL_0;
		parameter_int_t TERMINATION_CTRL_1;
		parameter_enum_t TERMINATION_OVRD_0;
		parameter_enum_t TERMINATION_OVRD_1;
		parameter_int_t TRANS_TIME_FROM_P2_0;
		parameter_int_t TRANS_TIME_FROM_P2_1;
		parameter_int_t TRANS_TIME_NON_P2_0;
		parameter_int_t TRANS_TIME_NON_P2_1;
		parameter_int_t TRANS_TIME_TO_P2_0;
		parameter_int_t TRANS_TIME_TO_P2_1;
		parameter_int_t TST_ATTR_0;
		parameter_int_t TST_ATTR_1;
		parameter_int_t TXRX_INVERT_0;
		parameter_int_t TXRX_INVERT_1;
		parameter_enum_t TX_BUFFER_USE_0;
		parameter_enum_t TX_BUFFER_USE_1;
		parameter_int_t TX_DETECT_RX_CFG_0;
		parameter_int_t TX_DETECT_RX_CFG_1;
		parameter_int_t TX_IDLE_DELAY_0;
		parameter_int_t TX_IDLE_DELAY_1;
		parameter_int_t TX_TDCC_CFG_0;
		parameter_int_t TX_TDCC_CFG_1;
		parameter_string_t TX_XCLK_SEL_0;
		parameter_string_t TX_XCLK_SEL_1;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* DRDY; // OUTPUT
		NetFlow* DRPDO; // OUTPUT
		NetFlow* GTPCLKFBEAST; // OUTPUT
		NetFlow* GTPCLKFBWEST; // OUTPUT
		NetFlow* GTPCLKOUT0; // OUTPUT
		NetFlow* GTPCLKOUT1; // OUTPUT
		NetFlow* PHYSTATUS0; // OUTPUT
		NetFlow* PHYSTATUS1; // OUTPUT
		NetFlow* PLLLKDET0; // OUTPUT
		NetFlow* PLLLKDET1; // OUTPUT
		NetFlow* RCALOUTEAST; // OUTPUT
		NetFlow* RCALOUTWEST; // OUTPUT
		NetFlow* REFCLKOUT0; // OUTPUT
		NetFlow* REFCLKOUT1; // OUTPUT
		NetFlow* REFCLKPLL0; // OUTPUT
		NetFlow* REFCLKPLL1; // OUTPUT
		NetFlow* RESETDONE0; // OUTPUT
		NetFlow* RESETDONE1; // OUTPUT
		NetFlow* RXBUFSTATUS0; // OUTPUT
		NetFlow* RXBUFSTATUS1; // OUTPUT
		NetFlow* RXBYTEISALIGNED0; // OUTPUT
		NetFlow* RXBYTEISALIGNED1; // OUTPUT
		NetFlow* RXBYTEREALIGN0; // OUTPUT
		NetFlow* RXBYTEREALIGN1; // OUTPUT
		NetFlow* RXCHANBONDSEQ0; // OUTPUT
		NetFlow* RXCHANBONDSEQ1; // OUTPUT
		NetFlow* RXCHANISALIGNED0; // OUTPUT
		NetFlow* RXCHANISALIGNED1; // OUTPUT
		NetFlow* RXCHANREALIGN0; // OUTPUT
		NetFlow* RXCHANREALIGN1; // OUTPUT
		NetFlow* RXCHARISCOMMA0; // OUTPUT
		NetFlow* RXCHARISCOMMA1; // OUTPUT
		NetFlow* RXCHARISK0; // OUTPUT
		NetFlow* RXCHARISK1; // OUTPUT
		NetFlow* RXCHBONDO; // OUTPUT
		NetFlow* RXCLKCORCNT0; // OUTPUT
		NetFlow* RXCLKCORCNT1; // OUTPUT
		NetFlow* RXCOMMADET0; // OUTPUT
		NetFlow* RXCOMMADET1; // OUTPUT
		NetFlow* RXDATA0; // OUTPUT
		NetFlow* RXDATA1; // OUTPUT
		NetFlow* RXDISPERR0; // OUTPUT
		NetFlow* RXDISPERR1; // OUTPUT
		NetFlow* RXELECIDLE0; // OUTPUT
		NetFlow* RXELECIDLE1; // OUTPUT
		NetFlow* RXLOSSOFSYNC0; // OUTPUT
		NetFlow* RXLOSSOFSYNC1; // OUTPUT
		NetFlow* RXNOTINTABLE0; // OUTPUT
		NetFlow* RXNOTINTABLE1; // OUTPUT
		NetFlow* RXPRBSERR0; // OUTPUT
		NetFlow* RXPRBSERR1; // OUTPUT
		NetFlow* RXRECCLK0; // OUTPUT
		NetFlow* RXRECCLK1; // OUTPUT
		NetFlow* RXRUNDISP0; // OUTPUT
		NetFlow* RXRUNDISP1; // OUTPUT
		NetFlow* RXSTATUS0; // OUTPUT
		NetFlow* RXSTATUS1; // OUTPUT
		NetFlow* RXVALID0; // OUTPUT
		NetFlow* RXVALID1; // OUTPUT
		NetFlow* TSTOUT0; // OUTPUT
		NetFlow* TSTOUT1; // OUTPUT
		NetFlow* TXBUFSTATUS0; // OUTPUT
		NetFlow* TXBUFSTATUS1; // OUTPUT
		NetFlow* TXKERR0; // OUTPUT
		NetFlow* TXKERR1; // OUTPUT
		NetFlow* TXN0; // OUTPUT
		NetFlow* TXN1; // OUTPUT
		NetFlow* TXOUTCLK0; // OUTPUT
		NetFlow* TXOUTCLK1; // OUTPUT
		NetFlow* TXP0; // OUTPUT
		NetFlow* TXP1; // OUTPUT
		NetFlow* TXRUNDISP0; // OUTPUT
		NetFlow* TXRUNDISP1; // OUTPUT
		NetFlow* CLK00; // INPUT
		NetFlow* CLK01; // INPUT
		NetFlow* CLK10; // INPUT
		NetFlow* CLK11; // INPUT
		NetFlow* CLKINEAST0; // INPUT
		NetFlow* CLKINEAST1; // INPUT
		NetFlow* CLKINWEST0; // INPUT
		NetFlow* CLKINWEST1; // INPUT
		NetFlow* DADDR; // INPUT
		NetFlow* DCLK; // INPUT
		NetFlow* DEN; // INPUT
		NetFlow* DI; // INPUT
		NetFlow* DWE; // INPUT
		NetFlow* GATERXELECIDLE0; // INPUT
		NetFlow* GATERXELECIDLE1; // INPUT
		NetFlow* GCLK00; // INPUT
		NetFlow* GCLK01; // INPUT
		NetFlow* GCLK10; // INPUT
		NetFlow* GCLK11; // INPUT
		NetFlow* GTPCLKFBSEL0EAST; // INPUT
		NetFlow* GTPCLKFBSEL0WEST; // INPUT
		NetFlow* GTPCLKFBSEL1EAST; // INPUT
		NetFlow* GTPCLKFBSEL1WEST; // INPUT
		NetFlow* GTPRESET0; // INPUT
		NetFlow* GTPRESET1; // INPUT
		NetFlow* GTPTEST0; // INPUT
		NetFlow* GTPTEST1; // INPUT
		NetFlow* IGNORESIGDET0; // INPUT
		NetFlow* IGNORESIGDET1; // INPUT
		NetFlow* INTDATAWIDTH0; // INPUT
		NetFlow* INTDATAWIDTH1; // INPUT
		NetFlow* LOOPBACK0; // INPUT
		NetFlow* LOOPBACK1; // INPUT
		NetFlow* PLLCLK00; // INPUT
		NetFlow* PLLCLK01; // INPUT
		NetFlow* PLLCLK10; // INPUT
		NetFlow* PLLCLK11; // INPUT
		NetFlow* PLLLKDETEN0; // INPUT
		NetFlow* PLLLKDETEN1; // INPUT
		NetFlow* PLLPOWERDOWN0; // INPUT
		NetFlow* PLLPOWERDOWN1; // INPUT
		NetFlow* PRBSCNTRESET0; // INPUT
		NetFlow* PRBSCNTRESET1; // INPUT
		NetFlow* RCALINEAST; // INPUT
		NetFlow* RCALINWEST; // INPUT
		NetFlow* REFCLKPWRDNB0; // INPUT
		NetFlow* REFCLKPWRDNB1; // INPUT
		NetFlow* REFSELDYPLL0; // INPUT
		NetFlow* REFSELDYPLL1; // INPUT
		NetFlow* RXBUFRESET0; // INPUT
		NetFlow* RXBUFRESET1; // INPUT
		NetFlow* RXCDRRESET0; // INPUT
		NetFlow* RXCDRRESET1; // INPUT
		NetFlow* RXCHBONDI; // INPUT
		NetFlow* RXCHBONDMASTER0; // INPUT
		NetFlow* RXCHBONDMASTER1; // INPUT
		NetFlow* RXCHBONDSLAVE0; // INPUT
		NetFlow* RXCHBONDSLAVE1; // INPUT
		NetFlow* RXCOMMADETUSE0; // INPUT
		NetFlow* RXCOMMADETUSE1; // INPUT
		NetFlow* RXDATAWIDTH0; // INPUT
		NetFlow* RXDATAWIDTH1; // INPUT
		NetFlow* RXDEC8B10BUSE0; // INPUT
		NetFlow* RXDEC8B10BUSE1; // INPUT
		NetFlow* RXENCHANSYNC0; // INPUT
		NetFlow* RXENCHANSYNC1; // INPUT
		NetFlow* RXENMCOMMAALIGN0; // INPUT
		NetFlow* RXENMCOMMAALIGN1; // INPUT
		NetFlow* RXENPCOMMAALIGN0; // INPUT
		NetFlow* RXENPCOMMAALIGN1; // INPUT
		NetFlow* RXENPMAPHASEALIGN0; // INPUT
		NetFlow* RXENPMAPHASEALIGN1; // INPUT
		NetFlow* RXENPRBSTST0; // INPUT
		NetFlow* RXENPRBSTST1; // INPUT
		NetFlow* RXEQMIX0; // INPUT
		NetFlow* RXEQMIX1; // INPUT
		NetFlow* RXN0; // INPUT
		NetFlow* RXN1; // INPUT
		NetFlow* RXP0; // INPUT
		NetFlow* RXP1; // INPUT
		NetFlow* RXPMASETPHASE0; // INPUT
		NetFlow* RXPMASETPHASE1; // INPUT
		NetFlow* RXPOLARITY0; // INPUT
		NetFlow* RXPOLARITY1; // INPUT
		NetFlow* RXPOWERDOWN0; // INPUT
		NetFlow* RXPOWERDOWN1; // INPUT
		NetFlow* RXRESET0; // INPUT
		NetFlow* RXRESET1; // INPUT
		NetFlow* RXSLIDE0; // INPUT
		NetFlow* RXSLIDE1; // INPUT
		NetFlow* RXUSRCLK0; // INPUT
		NetFlow* RXUSRCLK1; // INPUT
		NetFlow* RXUSRCLK20; // INPUT
		NetFlow* RXUSRCLK21; // INPUT
		NetFlow* TSTCLK0; // INPUT
		NetFlow* TSTCLK1; // INPUT
		NetFlow* TSTIN0; // INPUT
		NetFlow* TSTIN1; // INPUT
		NetFlow* TXBUFDIFFCTRL0; // INPUT
		NetFlow* TXBUFDIFFCTRL1; // INPUT
		NetFlow* TXBYPASS8B10B0; // INPUT
		NetFlow* TXBYPASS8B10B1; // INPUT
		NetFlow* TXCHARDISPMODE0; // INPUT
		NetFlow* TXCHARDISPMODE1; // INPUT
		NetFlow* TXCHARDISPVAL0; // INPUT
		NetFlow* TXCHARDISPVAL1; // INPUT
		NetFlow* TXCHARISK0; // INPUT
		NetFlow* TXCHARISK1; // INPUT
		NetFlow* TXCOMSTART0; // INPUT
		NetFlow* TXCOMSTART1; // INPUT
		NetFlow* TXCOMTYPE0; // INPUT
		NetFlow* TXCOMTYPE1; // INPUT
		NetFlow* TXDATA0; // INPUT
		NetFlow* TXDATA1; // INPUT
		NetFlow* TXDATAWIDTH0; // INPUT
		NetFlow* TXDATAWIDTH1; // INPUT
		NetFlow* TXDETECTRX0; // INPUT
		NetFlow* TXDETECTRX1; // INPUT
		NetFlow* TXDIFFCTRL0; // INPUT
		NetFlow* TXDIFFCTRL1; // INPUT
		NetFlow* TXELECIDLE0; // INPUT
		NetFlow* TXELECIDLE1; // INPUT
		NetFlow* TXENC8B10BUSE0; // INPUT
		NetFlow* TXENC8B10BUSE1; // INPUT
		NetFlow* TXENPMAPHASEALIGN0; // INPUT
		NetFlow* TXENPMAPHASEALIGN1; // INPUT
		NetFlow* TXENPRBSTST0; // INPUT
		NetFlow* TXENPRBSTST1; // INPUT
		NetFlow* TXINHIBIT0; // INPUT
		NetFlow* TXINHIBIT1; // INPUT
		NetFlow* TXPDOWNASYNCH0; // INPUT
		NetFlow* TXPDOWNASYNCH1; // INPUT
		NetFlow* TXPMASETPHASE0; // INPUT
		NetFlow* TXPMASETPHASE1; // INPUT
		NetFlow* TXPOLARITY0; // INPUT
		NetFlow* TXPOLARITY1; // INPUT
		NetFlow* TXPOWERDOWN0; // INPUT
		NetFlow* TXPOWERDOWN1; // INPUT
		NetFlow* TXPRBSFORCEERR0; // INPUT
		NetFlow* TXPRBSFORCEERR1; // INPUT
		NetFlow* TXPREEMPHASIS0; // INPUT
		NetFlow* TXPREEMPHASIS1; // INPUT
		NetFlow* TXRESET0; // INPUT
		NetFlow* TXRESET1; // INPUT
		NetFlow* TXUSRCLK0; // INPUT
		NetFlow* TXUSRCLK1; // INPUT
		NetFlow* TXUSRCLK20; // INPUT
		NetFlow* TXUSRCLK21; // INPUT
		NetFlow* USRCODEERR0; // INPUT
		NetFlow* USRCODEERR1; // INPUT
		
	
		X_GTPA1_DUAL(
			//Verilog Parameters:
			parameter_enum_t AC_CAP_DIS_0, // Default: "TRUE"
			parameter_enum_t AC_CAP_DIS_1, // Default: "TRUE"
			parameter_int_t ALIGN_COMMA_WORD_0, // Default: 1
			parameter_int_t ALIGN_COMMA_WORD_1, // Default: 1
			parameter_int_t CB2_INH_CC_PERIOD_0, // Default: 8
			parameter_int_t CB2_INH_CC_PERIOD_1, // Default: 8
			parameter_int_t CDR_PH_ADJ_TIME_0, // Default: 5'b01010
			parameter_int_t CDR_PH_ADJ_TIME_1, // Default: 5'b01010
			parameter_int_t CHAN_BOND_1_MAX_SKEW_0, // Default: 7
			parameter_int_t CHAN_BOND_1_MAX_SKEW_1, // Default: 7
			parameter_int_t CHAN_BOND_2_MAX_SKEW_0, // Default: 1
			parameter_int_t CHAN_BOND_2_MAX_SKEW_1, // Default: 1
			parameter_enum_t CHAN_BOND_KEEP_ALIGN_0, // Default: "FALSE"
			parameter_enum_t CHAN_BOND_KEEP_ALIGN_1, // Default: "FALSE"
			parameter_int_t CHAN_BOND_SEQ_1_1_0, // Default: 10'b0101111100
			parameter_int_t CHAN_BOND_SEQ_1_1_1, // Default: 10'b0101111100
			parameter_int_t CHAN_BOND_SEQ_1_2_0, // Default: 10'b0001001010
			parameter_int_t CHAN_BOND_SEQ_1_2_1, // Default: 10'b0001001010
			parameter_int_t CHAN_BOND_SEQ_1_3_0, // Default: 10'b0001001010
			parameter_int_t CHAN_BOND_SEQ_1_3_1, // Default: 10'b0001001010
			parameter_int_t CHAN_BOND_SEQ_1_4_0, // Default: 10'b0110111100
			parameter_int_t CHAN_BOND_SEQ_1_4_1, // Default: 10'b0110111100
			parameter_int_t CHAN_BOND_SEQ_1_ENABLE_0, // Default: 4'b1111
			parameter_int_t CHAN_BOND_SEQ_1_ENABLE_1, // Default: 4'b1111
			parameter_int_t CHAN_BOND_SEQ_2_1_0, // Default: 10'b0110111100
			parameter_int_t CHAN_BOND_SEQ_2_1_1, // Default: 10'b0110111100
			parameter_int_t CHAN_BOND_SEQ_2_2_0, // Default: 10'b0100111100
			parameter_int_t CHAN_BOND_SEQ_2_2_1, // Default: 10'b0100111100
			parameter_int_t CHAN_BOND_SEQ_2_3_0, // Default: 10'b0100111100
			parameter_int_t CHAN_BOND_SEQ_2_3_1, // Default: 10'b0100111100
			parameter_int_t CHAN_BOND_SEQ_2_4_0, // Default: 10'b0100111100
			parameter_int_t CHAN_BOND_SEQ_2_4_1, // Default: 10'b0100111100
			parameter_int_t CHAN_BOND_SEQ_2_ENABLE_0, // Default: 4'b1111
			parameter_int_t CHAN_BOND_SEQ_2_ENABLE_1, // Default: 4'b1111
			parameter_enum_t CHAN_BOND_SEQ_2_USE_0, // Default: "FALSE"
			parameter_enum_t CHAN_BOND_SEQ_2_USE_1, // Default: "FALSE"
			parameter_int_t CHAN_BOND_SEQ_LEN_0, // Default: 1
			parameter_int_t CHAN_BOND_SEQ_LEN_1, // Default: 1
			parameter_int_t CLK25_DIVIDER_0, // Default: 4
			parameter_int_t CLK25_DIVIDER_1, // Default: 4
			parameter_enum_t CLKINDC_B_0, // Default: "TRUE"
			parameter_enum_t CLKINDC_B_1, // Default: "TRUE"
			parameter_enum_t CLKRCV_TRST_0, // Default: "TRUE"
			parameter_enum_t CLKRCV_TRST_1, // Default: "TRUE"
			parameter_enum_t CLK_CORRECT_USE_0, // Default: "TRUE"
			parameter_enum_t CLK_CORRECT_USE_1, // Default: "TRUE"
			parameter_int_t CLK_COR_ADJ_LEN_0, // Default: 1
			parameter_int_t CLK_COR_ADJ_LEN_1, // Default: 1
			parameter_int_t CLK_COR_DET_LEN_0, // Default: 1
			parameter_int_t CLK_COR_DET_LEN_1, // Default: 1
			parameter_enum_t CLK_COR_INSERT_IDLE_FLAG_0, // Default: "FALSE"
			parameter_enum_t CLK_COR_INSERT_IDLE_FLAG_1, // Default: "FALSE"
			parameter_enum_t CLK_COR_KEEP_IDLE_0, // Default: "FALSE"
			parameter_enum_t CLK_COR_KEEP_IDLE_1, // Default: "FALSE"
			parameter_int_t CLK_COR_MAX_LAT_0, // Default: 20
			parameter_int_t CLK_COR_MAX_LAT_1, // Default: 20
			parameter_int_t CLK_COR_MIN_LAT_0, // Default: 18
			parameter_int_t CLK_COR_MIN_LAT_1, // Default: 18
			parameter_enum_t CLK_COR_PRECEDENCE_0, // Default: "TRUE"
			parameter_enum_t CLK_COR_PRECEDENCE_1, // Default: "TRUE"
			parameter_int_t CLK_COR_REPEAT_WAIT_0, // Default: 0
			parameter_int_t CLK_COR_REPEAT_WAIT_1, // Default: 0
			parameter_int_t CLK_COR_SEQ_1_1_0, // Default: 10'b0100011100
			parameter_int_t CLK_COR_SEQ_1_1_1, // Default: 10'b0100011100
			parameter_int_t CLK_COR_SEQ_1_2_0, // Default: 10'b0000000000
			parameter_int_t CLK_COR_SEQ_1_2_1, // Default: 10'b0000000000
			parameter_int_t CLK_COR_SEQ_1_3_0, // Default: 10'b0000000000
			parameter_int_t CLK_COR_SEQ_1_3_1, // Default: 10'b0000000000
			parameter_int_t CLK_COR_SEQ_1_4_0, // Default: 10'b0000000000
			parameter_int_t CLK_COR_SEQ_1_4_1, // Default: 10'b0000000000
			parameter_int_t CLK_COR_SEQ_1_ENABLE_0, // Default: 4'b1111
			parameter_int_t CLK_COR_SEQ_1_ENABLE_1, // Default: 4'b1111
			parameter_int_t CLK_COR_SEQ_2_1_0, // Default: 10'b0000000000
			parameter_int_t CLK_COR_SEQ_2_1_1, // Default: 10'b0000000000
			parameter_int_t CLK_COR_SEQ_2_2_0, // Default: 10'b0000000000
			parameter_int_t CLK_COR_SEQ_2_2_1, // Default: 10'b0000000000
			parameter_int_t CLK_COR_SEQ_2_3_0, // Default: 10'b0000000000
			parameter_int_t CLK_COR_SEQ_2_3_1, // Default: 10'b0000000000
			parameter_int_t CLK_COR_SEQ_2_4_0, // Default: 10'b0000000000
			parameter_int_t CLK_COR_SEQ_2_4_1, // Default: 10'b0000000000
			parameter_int_t CLK_COR_SEQ_2_ENABLE_0, // Default: 4'b1111
			parameter_int_t CLK_COR_SEQ_2_ENABLE_1, // Default: 4'b1111
			parameter_enum_t CLK_COR_SEQ_2_USE_0, // Default: "FALSE"
			parameter_enum_t CLK_COR_SEQ_2_USE_1, // Default: "FALSE"
			parameter_string_t CLK_OUT_GTP_SEL_0, // Default: "REFCLKPLL0"
			parameter_string_t CLK_OUT_GTP_SEL_1, // Default: "REFCLKPLL1"
			parameter_int_t CM_TRIM_0, // Default: 2'b00
			parameter_int_t CM_TRIM_1, // Default: 2'b00
			parameter_int_t COMMA_10B_ENABLE_0, // Default: 10'b1111111111
			parameter_int_t COMMA_10B_ENABLE_1, // Default: 10'b1111111111
			parameter_int_t COM_BURST_VAL_0, // Default: 4'b1111
			parameter_int_t COM_BURST_VAL_1, // Default: 4'b1111
			parameter_enum_t DEC_MCOMMA_DETECT_0, // Default: "TRUE"
			parameter_enum_t DEC_MCOMMA_DETECT_1, // Default: "TRUE"
			parameter_enum_t DEC_PCOMMA_DETECT_0, // Default: "TRUE"
			parameter_enum_t DEC_PCOMMA_DETECT_1, // Default: "TRUE"
			parameter_enum_t DEC_VALID_COMMA_ONLY_0, // Default: "TRUE"
			parameter_enum_t DEC_VALID_COMMA_ONLY_1, // Default: "TRUE"
			parameter_enum_t GTP_CFG_PWRUP_0, // Default: "TRUE"
			parameter_enum_t GTP_CFG_PWRUP_1, // Default: "TRUE"
			parameter_int_t MCOMMA_10B_VALUE_0, // Default: 10'b1010000011
			parameter_int_t MCOMMA_10B_VALUE_1, // Default: 10'b1010000011
			parameter_enum_t MCOMMA_DETECT_0, // Default: "TRUE"
			parameter_enum_t MCOMMA_DETECT_1, // Default: "TRUE"
			parameter_int_t OOBDETECT_THRESHOLD_0, // Default: 3'b110
			parameter_int_t OOBDETECT_THRESHOLD_1, // Default: 3'b110
			parameter_int_t OOB_CLK_DIVIDER_0, // Default: 4
			parameter_int_t OOB_CLK_DIVIDER_1, // Default: 4
			parameter_enum_t PCI_EXPRESS_MODE_0, // Default: "FALSE"
			parameter_enum_t PCI_EXPRESS_MODE_1, // Default: "FALSE"
			parameter_int_t PCOMMA_10B_VALUE_0, // Default: 10'b0101111100
			parameter_int_t PCOMMA_10B_VALUE_1, // Default: 10'b0101111100
			parameter_enum_t PCOMMA_DETECT_0, // Default: "TRUE"
			parameter_enum_t PCOMMA_DETECT_1, // Default: "TRUE"
			parameter_int_t PLLLKDET_CFG_0, // Default: 3'b101
			parameter_int_t PLLLKDET_CFG_1, // Default: 3'b101
			parameter_int_t PLL_COM_CFG_0, // Default: 24'h21680A
			parameter_int_t PLL_COM_CFG_1, // Default: 24'h21680A
			parameter_int_t PLL_CP_CFG_0, // Default: 8'h00
			parameter_int_t PLL_CP_CFG_1, // Default: 8'h00
			parameter_int_t PLL_DIVSEL_FB_0, // Default: 5
			parameter_int_t PLL_DIVSEL_FB_1, // Default: 5
			parameter_int_t PLL_DIVSEL_REF_0, // Default: 2
			parameter_int_t PLL_DIVSEL_REF_1, // Default: 2
			parameter_int_t PLL_RXDIVSEL_OUT_0, // Default: 1
			parameter_int_t PLL_RXDIVSEL_OUT_1, // Default: 1
			parameter_enum_t PLL_SATA_0, // Default: "FALSE"
			parameter_enum_t PLL_SATA_1, // Default: "FALSE"
			parameter_string_t PLL_SOURCE_0, // Default: "PLL0"
			parameter_string_t PLL_SOURCE_1, // Default: "PLL0"
			parameter_int_t PLL_TXDIVSEL_OUT_0, // Default: 1
			parameter_int_t PLL_TXDIVSEL_OUT_1, // Default: 1
			parameter_int_t PMA_CDR_SCAN_0, // Default: 27'h6404040
			parameter_int_t PMA_CDR_SCAN_1, // Default: 27'h6404040
			parameter_int_t PMA_COM_CFG_EAST, // Default: 36'h000008000
			parameter_int_t PMA_COM_CFG_WEST, // Default: 36'h00000A000
			parameter_int_t PMA_RXSYNC_CFG_0, // Default: 7'h00
			parameter_int_t PMA_RXSYNC_CFG_1, // Default: 7'h00
			parameter_int_t PMA_RX_CFG_0, // Default: 25'h05CE048
			parameter_int_t PMA_RX_CFG_1, // Default: 25'h05CE048
			parameter_int_t PMA_TX_CFG_0, // Default: 20'h00082
			parameter_int_t PMA_TX_CFG_1, // Default: 20'h00082
			parameter_enum_t RCV_TERM_GND_0, // Default: "FALSE"
			parameter_enum_t RCV_TERM_GND_1, // Default: "FALSE"
			parameter_enum_t RCV_TERM_VTTRX_0, // Default: "TRUE"
			parameter_enum_t RCV_TERM_VTTRX_1, // Default: "TRUE"
			parameter_int_t RXEQ_CFG_0, // Default: 8'b01111011
			parameter_int_t RXEQ_CFG_1, // Default: 8'b01111011
			parameter_int_t RXPRBSERR_LOOPBACK_0, // Default: 1'b0
			parameter_int_t RXPRBSERR_LOOPBACK_1, // Default: 1'b0
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
			parameter_int_t RX_IDLE_HI_CNT_0, // Default: 4'b1000
			parameter_int_t RX_IDLE_HI_CNT_1, // Default: 4'b1000
			parameter_int_t RX_IDLE_LO_CNT_0, // Default: 4'b0000
			parameter_int_t RX_IDLE_LO_CNT_1, // Default: 4'b0000
			parameter_enum_t RX_LOSS_OF_SYNC_FSM_0, // Default: "FALSE"
			parameter_enum_t RX_LOSS_OF_SYNC_FSM_1, // Default: "FALSE"
			parameter_int_t RX_LOS_INVALID_INCR_0, // Default: 1
			parameter_int_t RX_LOS_INVALID_INCR_1, // Default: 1
			parameter_int_t RX_LOS_THRESHOLD_0, // Default: 4
			parameter_int_t RX_LOS_THRESHOLD_1, // Default: 4
			parameter_string_t RX_SLIDE_MODE_0, // Default: "PCS"
			parameter_string_t RX_SLIDE_MODE_1, // Default: "PCS"
			parameter_string_t RX_STATUS_FMT_0, // Default: "PCIE"
			parameter_string_t RX_STATUS_FMT_1, // Default: "PCIE"
			parameter_string_t RX_XCLK_SEL_0, // Default: "RXREC"
			parameter_string_t RX_XCLK_SEL_1, // Default: "RXREC"
			parameter_int_t SATA_BURST_VAL_0, // Default: 3'b100
			parameter_int_t SATA_BURST_VAL_1, // Default: 3'b100
			parameter_int_t SATA_IDLE_VAL_0, // Default: 3'b011
			parameter_int_t SATA_IDLE_VAL_1, // Default: 3'b011
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
			parameter_int_t SIM_GTPRESET_SPEEDUP, // Default: 1
			parameter_enum_t SIM_RECEIVER_DETECT_PASS, // Default: "TRUE"
			parameter_int_t SIM_REFCLK0_SOURCE, // Default: 3'b000
			parameter_int_t SIM_REFCLK1_SOURCE, // Default: 3'b000
			parameter_string_t SIM_TX_ELEC_IDLE_LEVEL, // Default: "X"
			parameter_string_t SIM_VERSION, // Default: "2.0"
			parameter_int_t TERMINATION_CTRL_0, // Default: 5'b10100
			parameter_int_t TERMINATION_CTRL_1, // Default: 5'b10100
			parameter_enum_t TERMINATION_OVRD_0, // Default: "FALSE"
			parameter_enum_t TERMINATION_OVRD_1, // Default: "FALSE"
			parameter_int_t TRANS_TIME_FROM_P2_0, // Default: 12'h03C
			parameter_int_t TRANS_TIME_FROM_P2_1, // Default: 12'h03C
			parameter_int_t TRANS_TIME_NON_P2_0, // Default: 8'h19
			parameter_int_t TRANS_TIME_NON_P2_1, // Default: 8'h19
			parameter_int_t TRANS_TIME_TO_P2_0, // Default: 10'h064
			parameter_int_t TRANS_TIME_TO_P2_1, // Default: 10'h064
			parameter_int_t TST_ATTR_0, // Default: 32'h00000000
			parameter_int_t TST_ATTR_1, // Default: 32'h00000000
			parameter_int_t TXRX_INVERT_0, // Default: 3'b011
			parameter_int_t TXRX_INVERT_1, // Default: 3'b011
			parameter_enum_t TX_BUFFER_USE_0, // Default: "FALSE"
			parameter_enum_t TX_BUFFER_USE_1, // Default: "FALSE"
			parameter_int_t TX_DETECT_RX_CFG_0, // Default: 14'h1832
			parameter_int_t TX_DETECT_RX_CFG_1, // Default: 14'h1832
			parameter_int_t TX_IDLE_DELAY_0, // Default: 3'b011
			parameter_int_t TX_IDLE_DELAY_1, // Default: 3'b011
			parameter_int_t TX_TDCC_CFG_0, // Default: 2'b00
			parameter_int_t TX_TDCC_CFG_1, // Default: 2'b00
			parameter_string_t TX_XCLK_SEL_0, // Default: "TXUSR"
			parameter_string_t TX_XCLK_SEL_1, // Default: "TXUSR"
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* DRDY, // OUTPUT
			NetFlow* DRPDO, // OUTPUT
			NetFlow* GTPCLKFBEAST, // OUTPUT
			NetFlow* GTPCLKFBWEST, // OUTPUT
			NetFlow* GTPCLKOUT0, // OUTPUT
			NetFlow* GTPCLKOUT1, // OUTPUT
			NetFlow* PHYSTATUS0, // OUTPUT
			NetFlow* PHYSTATUS1, // OUTPUT
			NetFlow* PLLLKDET0, // OUTPUT
			NetFlow* PLLLKDET1, // OUTPUT
			NetFlow* RCALOUTEAST, // OUTPUT
			NetFlow* RCALOUTWEST, // OUTPUT
			NetFlow* REFCLKOUT0, // OUTPUT
			NetFlow* REFCLKOUT1, // OUTPUT
			NetFlow* REFCLKPLL0, // OUTPUT
			NetFlow* REFCLKPLL1, // OUTPUT
			NetFlow* RESETDONE0, // OUTPUT
			NetFlow* RESETDONE1, // OUTPUT
			NetFlow* RXBUFSTATUS0, // OUTPUT
			NetFlow* RXBUFSTATUS1, // OUTPUT
			NetFlow* RXBYTEISALIGNED0, // OUTPUT
			NetFlow* RXBYTEISALIGNED1, // OUTPUT
			NetFlow* RXBYTEREALIGN0, // OUTPUT
			NetFlow* RXBYTEREALIGN1, // OUTPUT
			NetFlow* RXCHANBONDSEQ0, // OUTPUT
			NetFlow* RXCHANBONDSEQ1, // OUTPUT
			NetFlow* RXCHANISALIGNED0, // OUTPUT
			NetFlow* RXCHANISALIGNED1, // OUTPUT
			NetFlow* RXCHANREALIGN0, // OUTPUT
			NetFlow* RXCHANREALIGN1, // OUTPUT
			NetFlow* RXCHARISCOMMA0, // OUTPUT
			NetFlow* RXCHARISCOMMA1, // OUTPUT
			NetFlow* RXCHARISK0, // OUTPUT
			NetFlow* RXCHARISK1, // OUTPUT
			NetFlow* RXCHBONDO, // OUTPUT
			NetFlow* RXCLKCORCNT0, // OUTPUT
			NetFlow* RXCLKCORCNT1, // OUTPUT
			NetFlow* RXCOMMADET0, // OUTPUT
			NetFlow* RXCOMMADET1, // OUTPUT
			NetFlow* RXDATA0, // OUTPUT
			NetFlow* RXDATA1, // OUTPUT
			NetFlow* RXDISPERR0, // OUTPUT
			NetFlow* RXDISPERR1, // OUTPUT
			NetFlow* RXELECIDLE0, // OUTPUT
			NetFlow* RXELECIDLE1, // OUTPUT
			NetFlow* RXLOSSOFSYNC0, // OUTPUT
			NetFlow* RXLOSSOFSYNC1, // OUTPUT
			NetFlow* RXNOTINTABLE0, // OUTPUT
			NetFlow* RXNOTINTABLE1, // OUTPUT
			NetFlow* RXPRBSERR0, // OUTPUT
			NetFlow* RXPRBSERR1, // OUTPUT
			NetFlow* RXRECCLK0, // OUTPUT
			NetFlow* RXRECCLK1, // OUTPUT
			NetFlow* RXRUNDISP0, // OUTPUT
			NetFlow* RXRUNDISP1, // OUTPUT
			NetFlow* RXSTATUS0, // OUTPUT
			NetFlow* RXSTATUS1, // OUTPUT
			NetFlow* RXVALID0, // OUTPUT
			NetFlow* RXVALID1, // OUTPUT
			NetFlow* TSTOUT0, // OUTPUT
			NetFlow* TSTOUT1, // OUTPUT
			NetFlow* TXBUFSTATUS0, // OUTPUT
			NetFlow* TXBUFSTATUS1, // OUTPUT
			NetFlow* TXKERR0, // OUTPUT
			NetFlow* TXKERR1, // OUTPUT
			NetFlow* TXN0, // OUTPUT
			NetFlow* TXN1, // OUTPUT
			NetFlow* TXOUTCLK0, // OUTPUT
			NetFlow* TXOUTCLK1, // OUTPUT
			NetFlow* TXP0, // OUTPUT
			NetFlow* TXP1, // OUTPUT
			NetFlow* TXRUNDISP0, // OUTPUT
			NetFlow* TXRUNDISP1, // OUTPUT
			NetFlow* CLK00, // INPUT
			NetFlow* CLK01, // INPUT
			NetFlow* CLK10, // INPUT
			NetFlow* CLK11, // INPUT
			NetFlow* CLKINEAST0, // INPUT
			NetFlow* CLKINEAST1, // INPUT
			NetFlow* CLKINWEST0, // INPUT
			NetFlow* CLKINWEST1, // INPUT
			NetFlow* DADDR, // INPUT
			NetFlow* DCLK, // INPUT
			NetFlow* DEN, // INPUT
			NetFlow* DI, // INPUT
			NetFlow* DWE, // INPUT
			NetFlow* GATERXELECIDLE0, // INPUT
			NetFlow* GATERXELECIDLE1, // INPUT
			NetFlow* GCLK00, // INPUT
			NetFlow* GCLK01, // INPUT
			NetFlow* GCLK10, // INPUT
			NetFlow* GCLK11, // INPUT
			NetFlow* GTPCLKFBSEL0EAST, // INPUT
			NetFlow* GTPCLKFBSEL0WEST, // INPUT
			NetFlow* GTPCLKFBSEL1EAST, // INPUT
			NetFlow* GTPCLKFBSEL1WEST, // INPUT
			NetFlow* GTPRESET0, // INPUT
			NetFlow* GTPRESET1, // INPUT
			NetFlow* GTPTEST0, // INPUT
			NetFlow* GTPTEST1, // INPUT
			NetFlow* IGNORESIGDET0, // INPUT
			NetFlow* IGNORESIGDET1, // INPUT
			NetFlow* INTDATAWIDTH0, // INPUT
			NetFlow* INTDATAWIDTH1, // INPUT
			NetFlow* LOOPBACK0, // INPUT
			NetFlow* LOOPBACK1, // INPUT
			NetFlow* PLLCLK00, // INPUT
			NetFlow* PLLCLK01, // INPUT
			NetFlow* PLLCLK10, // INPUT
			NetFlow* PLLCLK11, // INPUT
			NetFlow* PLLLKDETEN0, // INPUT
			NetFlow* PLLLKDETEN1, // INPUT
			NetFlow* PLLPOWERDOWN0, // INPUT
			NetFlow* PLLPOWERDOWN1, // INPUT
			NetFlow* PRBSCNTRESET0, // INPUT
			NetFlow* PRBSCNTRESET1, // INPUT
			NetFlow* RCALINEAST, // INPUT
			NetFlow* RCALINWEST, // INPUT
			NetFlow* REFCLKPWRDNB0, // INPUT
			NetFlow* REFCLKPWRDNB1, // INPUT
			NetFlow* REFSELDYPLL0, // INPUT
			NetFlow* REFSELDYPLL1, // INPUT
			NetFlow* RXBUFRESET0, // INPUT
			NetFlow* RXBUFRESET1, // INPUT
			NetFlow* RXCDRRESET0, // INPUT
			NetFlow* RXCDRRESET1, // INPUT
			NetFlow* RXCHBONDI, // INPUT
			NetFlow* RXCHBONDMASTER0, // INPUT
			NetFlow* RXCHBONDMASTER1, // INPUT
			NetFlow* RXCHBONDSLAVE0, // INPUT
			NetFlow* RXCHBONDSLAVE1, // INPUT
			NetFlow* RXCOMMADETUSE0, // INPUT
			NetFlow* RXCOMMADETUSE1, // INPUT
			NetFlow* RXDATAWIDTH0, // INPUT
			NetFlow* RXDATAWIDTH1, // INPUT
			NetFlow* RXDEC8B10BUSE0, // INPUT
			NetFlow* RXDEC8B10BUSE1, // INPUT
			NetFlow* RXENCHANSYNC0, // INPUT
			NetFlow* RXENCHANSYNC1, // INPUT
			NetFlow* RXENMCOMMAALIGN0, // INPUT
			NetFlow* RXENMCOMMAALIGN1, // INPUT
			NetFlow* RXENPCOMMAALIGN0, // INPUT
			NetFlow* RXENPCOMMAALIGN1, // INPUT
			NetFlow* RXENPMAPHASEALIGN0, // INPUT
			NetFlow* RXENPMAPHASEALIGN1, // INPUT
			NetFlow* RXENPRBSTST0, // INPUT
			NetFlow* RXENPRBSTST1, // INPUT
			NetFlow* RXEQMIX0, // INPUT
			NetFlow* RXEQMIX1, // INPUT
			NetFlow* RXN0, // INPUT
			NetFlow* RXN1, // INPUT
			NetFlow* RXP0, // INPUT
			NetFlow* RXP1, // INPUT
			NetFlow* RXPMASETPHASE0, // INPUT
			NetFlow* RXPMASETPHASE1, // INPUT
			NetFlow* RXPOLARITY0, // INPUT
			NetFlow* RXPOLARITY1, // INPUT
			NetFlow* RXPOWERDOWN0, // INPUT
			NetFlow* RXPOWERDOWN1, // INPUT
			NetFlow* RXRESET0, // INPUT
			NetFlow* RXRESET1, // INPUT
			NetFlow* RXSLIDE0, // INPUT
			NetFlow* RXSLIDE1, // INPUT
			NetFlow* RXUSRCLK0, // INPUT
			NetFlow* RXUSRCLK1, // INPUT
			NetFlow* RXUSRCLK20, // INPUT
			NetFlow* RXUSRCLK21, // INPUT
			NetFlow* TSTCLK0, // INPUT
			NetFlow* TSTCLK1, // INPUT
			NetFlow* TSTIN0, // INPUT
			NetFlow* TSTIN1, // INPUT
			NetFlow* TXBUFDIFFCTRL0, // INPUT
			NetFlow* TXBUFDIFFCTRL1, // INPUT
			NetFlow* TXBYPASS8B10B0, // INPUT
			NetFlow* TXBYPASS8B10B1, // INPUT
			NetFlow* TXCHARDISPMODE0, // INPUT
			NetFlow* TXCHARDISPMODE1, // INPUT
			NetFlow* TXCHARDISPVAL0, // INPUT
			NetFlow* TXCHARDISPVAL1, // INPUT
			NetFlow* TXCHARISK0, // INPUT
			NetFlow* TXCHARISK1, // INPUT
			NetFlow* TXCOMSTART0, // INPUT
			NetFlow* TXCOMSTART1, // INPUT
			NetFlow* TXCOMTYPE0, // INPUT
			NetFlow* TXCOMTYPE1, // INPUT
			NetFlow* TXDATA0, // INPUT
			NetFlow* TXDATA1, // INPUT
			NetFlow* TXDATAWIDTH0, // INPUT
			NetFlow* TXDATAWIDTH1, // INPUT
			NetFlow* TXDETECTRX0, // INPUT
			NetFlow* TXDETECTRX1, // INPUT
			NetFlow* TXDIFFCTRL0, // INPUT
			NetFlow* TXDIFFCTRL1, // INPUT
			NetFlow* TXELECIDLE0, // INPUT
			NetFlow* TXELECIDLE1, // INPUT
			NetFlow* TXENC8B10BUSE0, // INPUT
			NetFlow* TXENC8B10BUSE1, // INPUT
			NetFlow* TXENPMAPHASEALIGN0, // INPUT
			NetFlow* TXENPMAPHASEALIGN1, // INPUT
			NetFlow* TXENPRBSTST0, // INPUT
			NetFlow* TXENPRBSTST1, // INPUT
			NetFlow* TXINHIBIT0, // INPUT
			NetFlow* TXINHIBIT1, // INPUT
			NetFlow* TXPDOWNASYNCH0, // INPUT
			NetFlow* TXPDOWNASYNCH1, // INPUT
			NetFlow* TXPMASETPHASE0, // INPUT
			NetFlow* TXPMASETPHASE1, // INPUT
			NetFlow* TXPOLARITY0, // INPUT
			NetFlow* TXPOLARITY1, // INPUT
			NetFlow* TXPOWERDOWN0, // INPUT
			NetFlow* TXPOWERDOWN1, // INPUT
			NetFlow* TXPRBSFORCEERR0, // INPUT
			NetFlow* TXPRBSFORCEERR1, // INPUT
			NetFlow* TXPREEMPHASIS0, // INPUT
			NetFlow* TXPREEMPHASIS1, // INPUT
			NetFlow* TXRESET0, // INPUT
			NetFlow* TXRESET1, // INPUT
			NetFlow* TXUSRCLK0, // INPUT
			NetFlow* TXUSRCLK1, // INPUT
			NetFlow* TXUSRCLK20, // INPUT
			NetFlow* TXUSRCLK21, // INPUT
			NetFlow* USRCODEERR0, // INPUT
			NetFlow* USRCODEERR1 // INPUT
			){
		
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
			this->DRDY = DRDY; // OUTPUT
			this->DRPDO = DRPDO; // OUTPUT
			this->GTPCLKFBEAST = GTPCLKFBEAST; // OUTPUT
			this->GTPCLKFBWEST = GTPCLKFBWEST; // OUTPUT
			this->GTPCLKOUT0 = GTPCLKOUT0; // OUTPUT
			this->GTPCLKOUT1 = GTPCLKOUT1; // OUTPUT
			this->PHYSTATUS0 = PHYSTATUS0; // OUTPUT
			this->PHYSTATUS1 = PHYSTATUS1; // OUTPUT
			this->PLLLKDET0 = PLLLKDET0; // OUTPUT
			this->PLLLKDET1 = PLLLKDET1; // OUTPUT
			this->RCALOUTEAST = RCALOUTEAST; // OUTPUT
			this->RCALOUTWEST = RCALOUTWEST; // OUTPUT
			this->REFCLKOUT0 = REFCLKOUT0; // OUTPUT
			this->REFCLKOUT1 = REFCLKOUT1; // OUTPUT
			this->REFCLKPLL0 = REFCLKPLL0; // OUTPUT
			this->REFCLKPLL1 = REFCLKPLL1; // OUTPUT
			this->RESETDONE0 = RESETDONE0; // OUTPUT
			this->RESETDONE1 = RESETDONE1; // OUTPUT
			this->RXBUFSTATUS0 = RXBUFSTATUS0; // OUTPUT
			this->RXBUFSTATUS1 = RXBUFSTATUS1; // OUTPUT
			this->RXBYTEISALIGNED0 = RXBYTEISALIGNED0; // OUTPUT
			this->RXBYTEISALIGNED1 = RXBYTEISALIGNED1; // OUTPUT
			this->RXBYTEREALIGN0 = RXBYTEREALIGN0; // OUTPUT
			this->RXBYTEREALIGN1 = RXBYTEREALIGN1; // OUTPUT
			this->RXCHANBONDSEQ0 = RXCHANBONDSEQ0; // OUTPUT
			this->RXCHANBONDSEQ1 = RXCHANBONDSEQ1; // OUTPUT
			this->RXCHANISALIGNED0 = RXCHANISALIGNED0; // OUTPUT
			this->RXCHANISALIGNED1 = RXCHANISALIGNED1; // OUTPUT
			this->RXCHANREALIGN0 = RXCHANREALIGN0; // OUTPUT
			this->RXCHANREALIGN1 = RXCHANREALIGN1; // OUTPUT
			this->RXCHARISCOMMA0 = RXCHARISCOMMA0; // OUTPUT
			this->RXCHARISCOMMA1 = RXCHARISCOMMA1; // OUTPUT
			this->RXCHARISK0 = RXCHARISK0; // OUTPUT
			this->RXCHARISK1 = RXCHARISK1; // OUTPUT
			this->RXCHBONDO = RXCHBONDO; // OUTPUT
			this->RXCLKCORCNT0 = RXCLKCORCNT0; // OUTPUT
			this->RXCLKCORCNT1 = RXCLKCORCNT1; // OUTPUT
			this->RXCOMMADET0 = RXCOMMADET0; // OUTPUT
			this->RXCOMMADET1 = RXCOMMADET1; // OUTPUT
			this->RXDATA0 = RXDATA0; // OUTPUT
			this->RXDATA1 = RXDATA1; // OUTPUT
			this->RXDISPERR0 = RXDISPERR0; // OUTPUT
			this->RXDISPERR1 = RXDISPERR1; // OUTPUT
			this->RXELECIDLE0 = RXELECIDLE0; // OUTPUT
			this->RXELECIDLE1 = RXELECIDLE1; // OUTPUT
			this->RXLOSSOFSYNC0 = RXLOSSOFSYNC0; // OUTPUT
			this->RXLOSSOFSYNC1 = RXLOSSOFSYNC1; // OUTPUT
			this->RXNOTINTABLE0 = RXNOTINTABLE0; // OUTPUT
			this->RXNOTINTABLE1 = RXNOTINTABLE1; // OUTPUT
			this->RXPRBSERR0 = RXPRBSERR0; // OUTPUT
			this->RXPRBSERR1 = RXPRBSERR1; // OUTPUT
			this->RXRECCLK0 = RXRECCLK0; // OUTPUT
			this->RXRECCLK1 = RXRECCLK1; // OUTPUT
			this->RXRUNDISP0 = RXRUNDISP0; // OUTPUT
			this->RXRUNDISP1 = RXRUNDISP1; // OUTPUT
			this->RXSTATUS0 = RXSTATUS0; // OUTPUT
			this->RXSTATUS1 = RXSTATUS1; // OUTPUT
			this->RXVALID0 = RXVALID0; // OUTPUT
			this->RXVALID1 = RXVALID1; // OUTPUT
			this->TSTOUT0 = TSTOUT0; // OUTPUT
			this->TSTOUT1 = TSTOUT1; // OUTPUT
			this->TXBUFSTATUS0 = TXBUFSTATUS0; // OUTPUT
			this->TXBUFSTATUS1 = TXBUFSTATUS1; // OUTPUT
			this->TXKERR0 = TXKERR0; // OUTPUT
			this->TXKERR1 = TXKERR1; // OUTPUT
			this->TXN0 = TXN0; // OUTPUT
			this->TXN1 = TXN1; // OUTPUT
			this->TXOUTCLK0 = TXOUTCLK0; // OUTPUT
			this->TXOUTCLK1 = TXOUTCLK1; // OUTPUT
			this->TXP0 = TXP0; // OUTPUT
			this->TXP1 = TXP1; // OUTPUT
			this->TXRUNDISP0 = TXRUNDISP0; // OUTPUT
			this->TXRUNDISP1 = TXRUNDISP1; // OUTPUT
			this->CLK00 = CLK00; // INPUT
			this->CLK01 = CLK01; // INPUT
			this->CLK10 = CLK10; // INPUT
			this->CLK11 = CLK11; // INPUT
			this->CLKINEAST0 = CLKINEAST0; // INPUT
			this->CLKINEAST1 = CLKINEAST1; // INPUT
			this->CLKINWEST0 = CLKINWEST0; // INPUT
			this->CLKINWEST1 = CLKINWEST1; // INPUT
			this->DADDR = DADDR; // INPUT
			this->DCLK = DCLK; // INPUT
			this->DEN = DEN; // INPUT
			this->DI = DI; // INPUT
			this->DWE = DWE; // INPUT
			this->GATERXELECIDLE0 = GATERXELECIDLE0; // INPUT
			this->GATERXELECIDLE1 = GATERXELECIDLE1; // INPUT
			this->GCLK00 = GCLK00; // INPUT
			this->GCLK01 = GCLK01; // INPUT
			this->GCLK10 = GCLK10; // INPUT
			this->GCLK11 = GCLK11; // INPUT
			this->GTPCLKFBSEL0EAST = GTPCLKFBSEL0EAST; // INPUT
			this->GTPCLKFBSEL0WEST = GTPCLKFBSEL0WEST; // INPUT
			this->GTPCLKFBSEL1EAST = GTPCLKFBSEL1EAST; // INPUT
			this->GTPCLKFBSEL1WEST = GTPCLKFBSEL1WEST; // INPUT
			this->GTPRESET0 = GTPRESET0; // INPUT
			this->GTPRESET1 = GTPRESET1; // INPUT
			this->GTPTEST0 = GTPTEST0; // INPUT
			this->GTPTEST1 = GTPTEST1; // INPUT
			this->IGNORESIGDET0 = IGNORESIGDET0; // INPUT
			this->IGNORESIGDET1 = IGNORESIGDET1; // INPUT
			this->INTDATAWIDTH0 = INTDATAWIDTH0; // INPUT
			this->INTDATAWIDTH1 = INTDATAWIDTH1; // INPUT
			this->LOOPBACK0 = LOOPBACK0; // INPUT
			this->LOOPBACK1 = LOOPBACK1; // INPUT
			this->PLLCLK00 = PLLCLK00; // INPUT
			this->PLLCLK01 = PLLCLK01; // INPUT
			this->PLLCLK10 = PLLCLK10; // INPUT
			this->PLLCLK11 = PLLCLK11; // INPUT
			this->PLLLKDETEN0 = PLLLKDETEN0; // INPUT
			this->PLLLKDETEN1 = PLLLKDETEN1; // INPUT
			this->PLLPOWERDOWN0 = PLLPOWERDOWN0; // INPUT
			this->PLLPOWERDOWN1 = PLLPOWERDOWN1; // INPUT
			this->PRBSCNTRESET0 = PRBSCNTRESET0; // INPUT
			this->PRBSCNTRESET1 = PRBSCNTRESET1; // INPUT
			this->RCALINEAST = RCALINEAST; // INPUT
			this->RCALINWEST = RCALINWEST; // INPUT
			this->REFCLKPWRDNB0 = REFCLKPWRDNB0; // INPUT
			this->REFCLKPWRDNB1 = REFCLKPWRDNB1; // INPUT
			this->REFSELDYPLL0 = REFSELDYPLL0; // INPUT
			this->REFSELDYPLL1 = REFSELDYPLL1; // INPUT
			this->RXBUFRESET0 = RXBUFRESET0; // INPUT
			this->RXBUFRESET1 = RXBUFRESET1; // INPUT
			this->RXCDRRESET0 = RXCDRRESET0; // INPUT
			this->RXCDRRESET1 = RXCDRRESET1; // INPUT
			this->RXCHBONDI = RXCHBONDI; // INPUT
			this->RXCHBONDMASTER0 = RXCHBONDMASTER0; // INPUT
			this->RXCHBONDMASTER1 = RXCHBONDMASTER1; // INPUT
			this->RXCHBONDSLAVE0 = RXCHBONDSLAVE0; // INPUT
			this->RXCHBONDSLAVE1 = RXCHBONDSLAVE1; // INPUT
			this->RXCOMMADETUSE0 = RXCOMMADETUSE0; // INPUT
			this->RXCOMMADETUSE1 = RXCOMMADETUSE1; // INPUT
			this->RXDATAWIDTH0 = RXDATAWIDTH0; // INPUT
			this->RXDATAWIDTH1 = RXDATAWIDTH1; // INPUT
			this->RXDEC8B10BUSE0 = RXDEC8B10BUSE0; // INPUT
			this->RXDEC8B10BUSE1 = RXDEC8B10BUSE1; // INPUT
			this->RXENCHANSYNC0 = RXENCHANSYNC0; // INPUT
			this->RXENCHANSYNC1 = RXENCHANSYNC1; // INPUT
			this->RXENMCOMMAALIGN0 = RXENMCOMMAALIGN0; // INPUT
			this->RXENMCOMMAALIGN1 = RXENMCOMMAALIGN1; // INPUT
			this->RXENPCOMMAALIGN0 = RXENPCOMMAALIGN0; // INPUT
			this->RXENPCOMMAALIGN1 = RXENPCOMMAALIGN1; // INPUT
			this->RXENPMAPHASEALIGN0 = RXENPMAPHASEALIGN0; // INPUT
			this->RXENPMAPHASEALIGN1 = RXENPMAPHASEALIGN1; // INPUT
			this->RXENPRBSTST0 = RXENPRBSTST0; // INPUT
			this->RXENPRBSTST1 = RXENPRBSTST1; // INPUT
			this->RXEQMIX0 = RXEQMIX0; // INPUT
			this->RXEQMIX1 = RXEQMIX1; // INPUT
			this->RXN0 = RXN0; // INPUT
			this->RXN1 = RXN1; // INPUT
			this->RXP0 = RXP0; // INPUT
			this->RXP1 = RXP1; // INPUT
			this->RXPMASETPHASE0 = RXPMASETPHASE0; // INPUT
			this->RXPMASETPHASE1 = RXPMASETPHASE1; // INPUT
			this->RXPOLARITY0 = RXPOLARITY0; // INPUT
			this->RXPOLARITY1 = RXPOLARITY1; // INPUT
			this->RXPOWERDOWN0 = RXPOWERDOWN0; // INPUT
			this->RXPOWERDOWN1 = RXPOWERDOWN1; // INPUT
			this->RXRESET0 = RXRESET0; // INPUT
			this->RXRESET1 = RXRESET1; // INPUT
			this->RXSLIDE0 = RXSLIDE0; // INPUT
			this->RXSLIDE1 = RXSLIDE1; // INPUT
			this->RXUSRCLK0 = RXUSRCLK0; // INPUT
			this->RXUSRCLK1 = RXUSRCLK1; // INPUT
			this->RXUSRCLK20 = RXUSRCLK20; // INPUT
			this->RXUSRCLK21 = RXUSRCLK21; // INPUT
			this->TSTCLK0 = TSTCLK0; // INPUT
			this->TSTCLK1 = TSTCLK1; // INPUT
			this->TSTIN0 = TSTIN0; // INPUT
			this->TSTIN1 = TSTIN1; // INPUT
			this->TXBUFDIFFCTRL0 = TXBUFDIFFCTRL0; // INPUT
			this->TXBUFDIFFCTRL1 = TXBUFDIFFCTRL1; // INPUT
			this->TXBYPASS8B10B0 = TXBYPASS8B10B0; // INPUT
			this->TXBYPASS8B10B1 = TXBYPASS8B10B1; // INPUT
			this->TXCHARDISPMODE0 = TXCHARDISPMODE0; // INPUT
			this->TXCHARDISPMODE1 = TXCHARDISPMODE1; // INPUT
			this->TXCHARDISPVAL0 = TXCHARDISPVAL0; // INPUT
			this->TXCHARDISPVAL1 = TXCHARDISPVAL1; // INPUT
			this->TXCHARISK0 = TXCHARISK0; // INPUT
			this->TXCHARISK1 = TXCHARISK1; // INPUT
			this->TXCOMSTART0 = TXCOMSTART0; // INPUT
			this->TXCOMSTART1 = TXCOMSTART1; // INPUT
			this->TXCOMTYPE0 = TXCOMTYPE0; // INPUT
			this->TXCOMTYPE1 = TXCOMTYPE1; // INPUT
			this->TXDATA0 = TXDATA0; // INPUT
			this->TXDATA1 = TXDATA1; // INPUT
			this->TXDATAWIDTH0 = TXDATAWIDTH0; // INPUT
			this->TXDATAWIDTH1 = TXDATAWIDTH1; // INPUT
			this->TXDETECTRX0 = TXDETECTRX0; // INPUT
			this->TXDETECTRX1 = TXDETECTRX1; // INPUT
			this->TXDIFFCTRL0 = TXDIFFCTRL0; // INPUT
			this->TXDIFFCTRL1 = TXDIFFCTRL1; // INPUT
			this->TXELECIDLE0 = TXELECIDLE0; // INPUT
			this->TXELECIDLE1 = TXELECIDLE1; // INPUT
			this->TXENC8B10BUSE0 = TXENC8B10BUSE0; // INPUT
			this->TXENC8B10BUSE1 = TXENC8B10BUSE1; // INPUT
			this->TXENPMAPHASEALIGN0 = TXENPMAPHASEALIGN0; // INPUT
			this->TXENPMAPHASEALIGN1 = TXENPMAPHASEALIGN1; // INPUT
			this->TXENPRBSTST0 = TXENPRBSTST0; // INPUT
			this->TXENPRBSTST1 = TXENPRBSTST1; // INPUT
			this->TXINHIBIT0 = TXINHIBIT0; // INPUT
			this->TXINHIBIT1 = TXINHIBIT1; // INPUT
			this->TXPDOWNASYNCH0 = TXPDOWNASYNCH0; // INPUT
			this->TXPDOWNASYNCH1 = TXPDOWNASYNCH1; // INPUT
			this->TXPMASETPHASE0 = TXPMASETPHASE0; // INPUT
			this->TXPMASETPHASE1 = TXPMASETPHASE1; // INPUT
			this->TXPOLARITY0 = TXPOLARITY0; // INPUT
			this->TXPOLARITY1 = TXPOLARITY1; // INPUT
			this->TXPOWERDOWN0 = TXPOWERDOWN0; // INPUT
			this->TXPOWERDOWN1 = TXPOWERDOWN1; // INPUT
			this->TXPRBSFORCEERR0 = TXPRBSFORCEERR0; // INPUT
			this->TXPRBSFORCEERR1 = TXPRBSFORCEERR1; // INPUT
			this->TXPREEMPHASIS0 = TXPREEMPHASIS0; // INPUT
			this->TXPREEMPHASIS1 = TXPREEMPHASIS1; // INPUT
			this->TXRESET0 = TXRESET0; // INPUT
			this->TXRESET1 = TXRESET1; // INPUT
			this->TXUSRCLK0 = TXUSRCLK0; // INPUT
			this->TXUSRCLK1 = TXUSRCLK1; // INPUT
			this->TXUSRCLK20 = TXUSRCLK20; // INPUT
			this->TXUSRCLK21 = TXUSRCLK21; // INPUT
			this->USRCODEERR0 = USRCODEERR0; // INPUT
			this->USRCODEERR1 = USRCODEERR1; // INPUT
		
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
