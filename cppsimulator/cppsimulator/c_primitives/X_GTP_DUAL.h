/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_GTP_DUAL{

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
		NetFlow* DO; // OUTPUT
		NetFlow* DRDY; // OUTPUT
		NetFlow* PHYSTATUS0; // OUTPUT
		NetFlow* PHYSTATUS1; // OUTPUT
		NetFlow* PLLLKDET; // OUTPUT
		NetFlow* REFCLKOUT; // OUTPUT
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
		NetFlow* RXCHBONDO0; // OUTPUT
		NetFlow* RXCHBONDO1; // OUTPUT
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
		NetFlow* RXOVERSAMPLEERR0; // OUTPUT
		NetFlow* RXOVERSAMPLEERR1; // OUTPUT
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
		NetFlow* CLKIN; // INPUT
		NetFlow* DADDR; // INPUT
		NetFlow* DCLK; // INPUT
		NetFlow* DEN; // INPUT
		NetFlow* DI; // INPUT
		NetFlow* DWE; // INPUT
		NetFlow* GTPRESET; // INPUT
		NetFlow* GTPTEST; // INPUT
		NetFlow* INTDATAWIDTH; // INPUT
		NetFlow* LOOPBACK0; // INPUT
		NetFlow* LOOPBACK1; // INPUT
		NetFlow* PLLLKDETEN; // INPUT
		NetFlow* PLLPOWERDOWN; // INPUT
		NetFlow* PRBSCNTRESET0; // INPUT
		NetFlow* PRBSCNTRESET1; // INPUT
		NetFlow* REFCLKPWRDNB; // INPUT
		NetFlow* RXBUFRESET0; // INPUT
		NetFlow* RXBUFRESET1; // INPUT
		NetFlow* RXCDRRESET0; // INPUT
		NetFlow* RXCDRRESET1; // INPUT
		NetFlow* RXCHBONDI0; // INPUT
		NetFlow* RXCHBONDI1; // INPUT
		NetFlow* RXCOMMADETUSE0; // INPUT
		NetFlow* RXCOMMADETUSE1; // INPUT
		NetFlow* RXDATAWIDTH0; // INPUT
		NetFlow* RXDATAWIDTH1; // INPUT
		NetFlow* RXDEC8B10BUSE0; // INPUT
		NetFlow* RXDEC8B10BUSE1; // INPUT
		NetFlow* RXELECIDLERESET0; // INPUT
		NetFlow* RXELECIDLERESET1; // INPUT
		NetFlow* RXENCHANSYNC0; // INPUT
		NetFlow* RXENCHANSYNC1; // INPUT
		NetFlow* RXENELECIDLERESETB; // INPUT
		NetFlow* RXENEQB0; // INPUT
		NetFlow* RXENEQB1; // INPUT
		NetFlow* RXENMCOMMAALIGN0; // INPUT
		NetFlow* RXENMCOMMAALIGN1; // INPUT
		NetFlow* RXENPCOMMAALIGN0; // INPUT
		NetFlow* RXENPCOMMAALIGN1; // INPUT
		NetFlow* RXENPRBSTST0; // INPUT
		NetFlow* RXENPRBSTST1; // INPUT
		NetFlow* RXENSAMPLEALIGN0; // INPUT
		NetFlow* RXENSAMPLEALIGN1; // INPUT
		NetFlow* RXEQMIX0; // INPUT
		NetFlow* RXEQMIX1; // INPUT
		NetFlow* RXEQPOLE0; // INPUT
		NetFlow* RXEQPOLE1; // INPUT
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
		NetFlow* TXENPMAPHASEALIGN; // INPUT
		NetFlow* TXENPRBSTST0; // INPUT
		NetFlow* TXENPRBSTST1; // INPUT
		NetFlow* TXINHIBIT0; // INPUT
		NetFlow* TXINHIBIT1; // INPUT
		NetFlow* TXPMASETPHASE; // INPUT
		NetFlow* TXPOLARITY0; // INPUT
		NetFlow* TXPOLARITY1; // INPUT
		NetFlow* TXPOWERDOWN0; // INPUT
		NetFlow* TXPOWERDOWN1; // INPUT
		NetFlow* TXPREEMPHASIS0; // INPUT
		NetFlow* TXPREEMPHASIS1; // INPUT
		NetFlow* TXRESET0; // INPUT
		NetFlow* TXRESET1; // INPUT
		NetFlow* TXUSRCLK0; // INPUT
		NetFlow* TXUSRCLK1; // INPUT
		NetFlow* TXUSRCLK20; // INPUT
		NetFlow* TXUSRCLK21; // INPUT
		
	
		X_GTP_DUAL(
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
			NetFlow* DO, // OUTPUT
			NetFlow* DRDY, // OUTPUT
			NetFlow* PHYSTATUS0, // OUTPUT
			NetFlow* PHYSTATUS1, // OUTPUT
			NetFlow* PLLLKDET, // OUTPUT
			NetFlow* REFCLKOUT, // OUTPUT
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
			NetFlow* RXCHBONDO0, // OUTPUT
			NetFlow* RXCHBONDO1, // OUTPUT
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
			NetFlow* RXOVERSAMPLEERR0, // OUTPUT
			NetFlow* RXOVERSAMPLEERR1, // OUTPUT
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
			NetFlow* CLKIN, // INPUT
			NetFlow* DADDR, // INPUT
			NetFlow* DCLK, // INPUT
			NetFlow* DEN, // INPUT
			NetFlow* DI, // INPUT
			NetFlow* DWE, // INPUT
			NetFlow* GTPRESET, // INPUT
			NetFlow* GTPTEST, // INPUT
			NetFlow* INTDATAWIDTH, // INPUT
			NetFlow* LOOPBACK0, // INPUT
			NetFlow* LOOPBACK1, // INPUT
			NetFlow* PLLLKDETEN, // INPUT
			NetFlow* PLLPOWERDOWN, // INPUT
			NetFlow* PRBSCNTRESET0, // INPUT
			NetFlow* PRBSCNTRESET1, // INPUT
			NetFlow* REFCLKPWRDNB, // INPUT
			NetFlow* RXBUFRESET0, // INPUT
			NetFlow* RXBUFRESET1, // INPUT
			NetFlow* RXCDRRESET0, // INPUT
			NetFlow* RXCDRRESET1, // INPUT
			NetFlow* RXCHBONDI0, // INPUT
			NetFlow* RXCHBONDI1, // INPUT
			NetFlow* RXCOMMADETUSE0, // INPUT
			NetFlow* RXCOMMADETUSE1, // INPUT
			NetFlow* RXDATAWIDTH0, // INPUT
			NetFlow* RXDATAWIDTH1, // INPUT
			NetFlow* RXDEC8B10BUSE0, // INPUT
			NetFlow* RXDEC8B10BUSE1, // INPUT
			NetFlow* RXELECIDLERESET0, // INPUT
			NetFlow* RXELECIDLERESET1, // INPUT
			NetFlow* RXENCHANSYNC0, // INPUT
			NetFlow* RXENCHANSYNC1, // INPUT
			NetFlow* RXENELECIDLERESETB, // INPUT
			NetFlow* RXENEQB0, // INPUT
			NetFlow* RXENEQB1, // INPUT
			NetFlow* RXENMCOMMAALIGN0, // INPUT
			NetFlow* RXENMCOMMAALIGN1, // INPUT
			NetFlow* RXENPCOMMAALIGN0, // INPUT
			NetFlow* RXENPCOMMAALIGN1, // INPUT
			NetFlow* RXENPRBSTST0, // INPUT
			NetFlow* RXENPRBSTST1, // INPUT
			NetFlow* RXENSAMPLEALIGN0, // INPUT
			NetFlow* RXENSAMPLEALIGN1, // INPUT
			NetFlow* RXEQMIX0, // INPUT
			NetFlow* RXEQMIX1, // INPUT
			NetFlow* RXEQPOLE0, // INPUT
			NetFlow* RXEQPOLE1, // INPUT
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
			NetFlow* TXENPMAPHASEALIGN, // INPUT
			NetFlow* TXENPRBSTST0, // INPUT
			NetFlow* TXENPRBSTST1, // INPUT
			NetFlow* TXINHIBIT0, // INPUT
			NetFlow* TXINHIBIT1, // INPUT
			NetFlow* TXPMASETPHASE, // INPUT
			NetFlow* TXPOLARITY0, // INPUT
			NetFlow* TXPOLARITY1, // INPUT
			NetFlow* TXPOWERDOWN0, // INPUT
			NetFlow* TXPOWERDOWN1, // INPUT
			NetFlow* TXPREEMPHASIS0, // INPUT
			NetFlow* TXPREEMPHASIS1, // INPUT
			NetFlow* TXRESET0, // INPUT
			NetFlow* TXRESET1, // INPUT
			NetFlow* TXUSRCLK0, // INPUT
			NetFlow* TXUSRCLK1, // INPUT
			NetFlow* TXUSRCLK20, // INPUT
			NetFlow* TXUSRCLK21 // INPUT
			){
		
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
			this->DO = DO; // OUTPUT
			this->DRDY = DRDY; // OUTPUT
			this->PHYSTATUS0 = PHYSTATUS0; // OUTPUT
			this->PHYSTATUS1 = PHYSTATUS1; // OUTPUT
			this->PLLLKDET = PLLLKDET; // OUTPUT
			this->REFCLKOUT = REFCLKOUT; // OUTPUT
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
			this->RXCHBONDO0 = RXCHBONDO0; // OUTPUT
			this->RXCHBONDO1 = RXCHBONDO1; // OUTPUT
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
			this->RXOVERSAMPLEERR0 = RXOVERSAMPLEERR0; // OUTPUT
			this->RXOVERSAMPLEERR1 = RXOVERSAMPLEERR1; // OUTPUT
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
			this->CLKIN = CLKIN; // INPUT
			this->DADDR = DADDR; // INPUT
			this->DCLK = DCLK; // INPUT
			this->DEN = DEN; // INPUT
			this->DI = DI; // INPUT
			this->DWE = DWE; // INPUT
			this->GTPRESET = GTPRESET; // INPUT
			this->GTPTEST = GTPTEST; // INPUT
			this->INTDATAWIDTH = INTDATAWIDTH; // INPUT
			this->LOOPBACK0 = LOOPBACK0; // INPUT
			this->LOOPBACK1 = LOOPBACK1; // INPUT
			this->PLLLKDETEN = PLLLKDETEN; // INPUT
			this->PLLPOWERDOWN = PLLPOWERDOWN; // INPUT
			this->PRBSCNTRESET0 = PRBSCNTRESET0; // INPUT
			this->PRBSCNTRESET1 = PRBSCNTRESET1; // INPUT
			this->REFCLKPWRDNB = REFCLKPWRDNB; // INPUT
			this->RXBUFRESET0 = RXBUFRESET0; // INPUT
			this->RXBUFRESET1 = RXBUFRESET1; // INPUT
			this->RXCDRRESET0 = RXCDRRESET0; // INPUT
			this->RXCDRRESET1 = RXCDRRESET1; // INPUT
			this->RXCHBONDI0 = RXCHBONDI0; // INPUT
			this->RXCHBONDI1 = RXCHBONDI1; // INPUT
			this->RXCOMMADETUSE0 = RXCOMMADETUSE0; // INPUT
			this->RXCOMMADETUSE1 = RXCOMMADETUSE1; // INPUT
			this->RXDATAWIDTH0 = RXDATAWIDTH0; // INPUT
			this->RXDATAWIDTH1 = RXDATAWIDTH1; // INPUT
			this->RXDEC8B10BUSE0 = RXDEC8B10BUSE0; // INPUT
			this->RXDEC8B10BUSE1 = RXDEC8B10BUSE1; // INPUT
			this->RXELECIDLERESET0 = RXELECIDLERESET0; // INPUT
			this->RXELECIDLERESET1 = RXELECIDLERESET1; // INPUT
			this->RXENCHANSYNC0 = RXENCHANSYNC0; // INPUT
			this->RXENCHANSYNC1 = RXENCHANSYNC1; // INPUT
			this->RXENELECIDLERESETB = RXENELECIDLERESETB; // INPUT
			this->RXENEQB0 = RXENEQB0; // INPUT
			this->RXENEQB1 = RXENEQB1; // INPUT
			this->RXENMCOMMAALIGN0 = RXENMCOMMAALIGN0; // INPUT
			this->RXENMCOMMAALIGN1 = RXENMCOMMAALIGN1; // INPUT
			this->RXENPCOMMAALIGN0 = RXENPCOMMAALIGN0; // INPUT
			this->RXENPCOMMAALIGN1 = RXENPCOMMAALIGN1; // INPUT
			this->RXENPRBSTST0 = RXENPRBSTST0; // INPUT
			this->RXENPRBSTST1 = RXENPRBSTST1; // INPUT
			this->RXENSAMPLEALIGN0 = RXENSAMPLEALIGN0; // INPUT
			this->RXENSAMPLEALIGN1 = RXENSAMPLEALIGN1; // INPUT
			this->RXEQMIX0 = RXEQMIX0; // INPUT
			this->RXEQMIX1 = RXEQMIX1; // INPUT
			this->RXEQPOLE0 = RXEQPOLE0; // INPUT
			this->RXEQPOLE1 = RXEQPOLE1; // INPUT
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
			this->TXENPMAPHASEALIGN = TXENPMAPHASEALIGN; // INPUT
			this->TXENPRBSTST0 = TXENPRBSTST0; // INPUT
			this->TXENPRBSTST1 = TXENPRBSTST1; // INPUT
			this->TXINHIBIT0 = TXINHIBIT0; // INPUT
			this->TXINHIBIT1 = TXINHIBIT1; // INPUT
			this->TXPMASETPHASE = TXPMASETPHASE; // INPUT
			this->TXPOLARITY0 = TXPOLARITY0; // INPUT
			this->TXPOLARITY1 = TXPOLARITY1; // INPUT
			this->TXPOWERDOWN0 = TXPOWERDOWN0; // INPUT
			this->TXPOWERDOWN1 = TXPOWERDOWN1; // INPUT
			this->TXPREEMPHASIS0 = TXPREEMPHASIS0; // INPUT
			this->TXPREEMPHASIS1 = TXPREEMPHASIS1; // INPUT
			this->TXRESET0 = TXRESET0; // INPUT
			this->TXRESET1 = TXRESET1; // INPUT
			this->TXUSRCLK0 = TXUSRCLK0; // INPUT
			this->TXUSRCLK1 = TXUSRCLK1; // INPUT
			this->TXUSRCLK20 = TXUSRCLK20; // INPUT
			this->TXUSRCLK21 = TXUSRCLK21; // INPUT
		
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