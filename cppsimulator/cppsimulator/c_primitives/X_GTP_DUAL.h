/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

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
		parameter_string_t SIM_PLL_PERDIV2;
		parameter_enum_t SIM_RECEIVER_DETECT_PASS0;
		parameter_enum_t SIM_RECEIVER_DETECT_PASS1;
		parameter_enum_t TERMINATION_OVRD;
		parameter_enum_t TX_BUFFER_USE_0;
		parameter_enum_t TX_BUFFER_USE_1;
		parameter_enum_t TX_DIFF_BOOST_0;
		parameter_enum_t TX_DIFF_BOOST_1;
		parameter_string_t TX_XCLK_SEL_0;
		parameter_string_t TX_XCLK_SEL_1;
		parameter_string_t TRANS_TIME_FROM_P2_0;
		parameter_string_t TRANS_TIME_FROM_P2_1;
		parameter_string_t TRANS_TIME_NON_P2_0;
		parameter_string_t TRANS_TIME_NON_P2_1;
		parameter_string_t TRANS_TIME_TO_P2_0;
		parameter_string_t TRANS_TIME_TO_P2_1;
		parameter_string_t PMA_RX_CFG_0;
		parameter_string_t PMA_RX_CFG_1;
		parameter_string_t PMA_CDR_SCAN_0;
		parameter_string_t PMA_CDR_SCAN_1;
		parameter_string_t PCS_COM_CFG;
		parameter_string_t OOBDETECT_THRESHOLD_0;
		parameter_string_t OOBDETECT_THRESHOLD_1;
		parameter_string_t SATA_BURST_VAL_0;
		parameter_string_t SATA_BURST_VAL_1;
		parameter_string_t SATA_IDLE_VAL_0;
		parameter_string_t SATA_IDLE_VAL_1;
		parameter_string_t PRBS_ERR_THRESHOLD_0;
		parameter_string_t PRBS_ERR_THRESHOLD_1;
		parameter_string_t CHAN_BOND_SEQ_1_ENABLE_0;
		parameter_string_t CHAN_BOND_SEQ_1_ENABLE_1;
		parameter_string_t CHAN_BOND_SEQ_2_ENABLE_0;
		parameter_string_t CHAN_BOND_SEQ_2_ENABLE_1;
		parameter_string_t CLK_COR_SEQ_1_ENABLE_0;
		parameter_string_t CLK_COR_SEQ_1_ENABLE_1;
		parameter_string_t CLK_COR_SEQ_2_ENABLE_0;
		parameter_string_t CLK_COR_SEQ_2_ENABLE_1;
		parameter_string_t COM_BURST_VAL_0;
		parameter_string_t COM_BURST_VAL_1;
		parameter_string_t TERMINATION_CTRL;
		parameter_string_t TXRX_INVERT_0;
		parameter_string_t TXRX_INVERT_1;
		parameter_string_t CHAN_BOND_SEQ_1_1_0;
		parameter_string_t CHAN_BOND_SEQ_1_1_1;
		parameter_string_t CHAN_BOND_SEQ_1_2_0;
		parameter_string_t CHAN_BOND_SEQ_1_2_1;
		parameter_string_t CHAN_BOND_SEQ_1_3_0;
		parameter_string_t CHAN_BOND_SEQ_1_3_1;
		parameter_string_t CHAN_BOND_SEQ_1_4_0;
		parameter_string_t CHAN_BOND_SEQ_1_4_1;
		parameter_string_t CHAN_BOND_SEQ_2_1_0;
		parameter_string_t CHAN_BOND_SEQ_2_1_1;
		parameter_string_t CHAN_BOND_SEQ_2_2_0;
		parameter_string_t CHAN_BOND_SEQ_2_2_1;
		parameter_string_t CHAN_BOND_SEQ_2_3_0;
		parameter_string_t CHAN_BOND_SEQ_2_3_1;
		parameter_string_t CHAN_BOND_SEQ_2_4_0;
		parameter_string_t CHAN_BOND_SEQ_2_4_1;
		parameter_string_t CLK_COR_SEQ_1_1_0;
		parameter_string_t CLK_COR_SEQ_1_1_1;
		parameter_string_t CLK_COR_SEQ_1_2_0;
		parameter_string_t CLK_COR_SEQ_1_2_1;
		parameter_string_t CLK_COR_SEQ_1_3_0;
		parameter_string_t CLK_COR_SEQ_1_3_1;
		parameter_string_t CLK_COR_SEQ_1_4_0;
		parameter_string_t CLK_COR_SEQ_1_4_1;
		parameter_string_t CLK_COR_SEQ_2_1_0;
		parameter_string_t CLK_COR_SEQ_2_1_1;
		parameter_string_t CLK_COR_SEQ_2_2_0;
		parameter_string_t CLK_COR_SEQ_2_2_1;
		parameter_string_t CLK_COR_SEQ_2_3_0;
		parameter_string_t CLK_COR_SEQ_2_3_1;
		parameter_string_t CLK_COR_SEQ_2_4_0;
		parameter_string_t CLK_COR_SEQ_2_4_1;
		parameter_string_t COMMA_10B_ENABLE_0;
		parameter_string_t COMMA_10B_ENABLE_1;
		parameter_string_t MCOMMA_10B_VALUE_0;
		parameter_string_t MCOMMA_10B_VALUE_1;
		parameter_string_t PCOMMA_10B_VALUE_0;
		parameter_string_t PCOMMA_10B_VALUE_1;
		parameter_string_t ALIGN_COMMA_WORD_0;
		parameter_string_t ALIGN_COMMA_WORD_1;
		parameter_string_t CHAN_BOND_1_MAX_SKEW_0;
		parameter_string_t CHAN_BOND_1_MAX_SKEW_1;
		parameter_string_t CHAN_BOND_2_MAX_SKEW_0;
		parameter_string_t CHAN_BOND_2_MAX_SKEW_1;
		parameter_string_t CHAN_BOND_LEVEL_0;
		parameter_string_t CHAN_BOND_LEVEL_1;
		parameter_string_t CHAN_BOND_SEQ_LEN_0;
		parameter_string_t CHAN_BOND_SEQ_LEN_1;
		parameter_string_t CLK25_DIVIDER;
		parameter_string_t CLK_COR_ADJ_LEN_0;
		parameter_string_t CLK_COR_ADJ_LEN_1;
		parameter_string_t CLK_COR_DET_LEN_0;
		parameter_string_t CLK_COR_DET_LEN_1;
		parameter_string_t CLK_COR_MAX_LAT_0;
		parameter_string_t CLK_COR_MAX_LAT_1;
		parameter_string_t CLK_COR_MIN_LAT_0;
		parameter_string_t CLK_COR_MIN_LAT_1;
		parameter_string_t CLK_COR_REPEAT_WAIT_0;
		parameter_string_t CLK_COR_REPEAT_WAIT_1;
		parameter_string_t OOB_CLK_DIVIDER;
		parameter_string_t PLL_DIVSEL_FB;
		parameter_string_t PLL_DIVSEL_REF;
		parameter_string_t PLL_RXDIVSEL_OUT_0;
		parameter_string_t PLL_RXDIVSEL_OUT_1;
		parameter_string_t PLL_TXDIVSEL_COMM_OUT;
		parameter_string_t PLL_TXDIVSEL_OUT_0;
		parameter_string_t PLL_TXDIVSEL_OUT_1;
		parameter_string_t RX_LOS_INVALID_INCR_0;
		parameter_string_t RX_LOS_INVALID_INCR_1;
		parameter_string_t RX_LOS_THRESHOLD_0;
		parameter_string_t RX_LOS_THRESHOLD_1;
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
		parameter_string_t TERMINATION_IMP_0;
		parameter_string_t TERMINATION_IMP_1;
		parameter_string_t TX_SYNC_FILTERB;
		//Verilog Ports in definition order:
		NetFlow* DO; // net ID: DO lsb: 0  msb: 0 OUTPUT
		NetFlow* DRDY; // net ID: DRDY lsb: 0  msb: 0 OUTPUT
		NetFlow* PHYSTATUS0; // net ID: PHYSTATUS0 lsb: 0  msb: 0 OUTPUT
		NetFlow* PHYSTATUS1; // net ID: PHYSTATUS1 lsb: 0  msb: 0 OUTPUT
		NetFlow* PLLLKDET; // net ID: PLLLKDET lsb: 0  msb: 0 OUTPUT
		NetFlow* REFCLKOUT; // net ID: REFCLKOUT lsb: 0  msb: 0 OUTPUT
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
		NetFlow* RXCHBONDO0; // net ID: RXCHBONDO0 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXCHBONDO1; // net ID: RXCHBONDO1 lsb: 0  msb: 0 OUTPUT
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
		NetFlow* RXOVERSAMPLEERR0; // net ID: RXOVERSAMPLEERR0 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXOVERSAMPLEERR1; // net ID: RXOVERSAMPLEERR1 lsb: 0  msb: 0 OUTPUT
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
		NetFlow* CLKIN; // net ID: CLKIN lsb: 0  msb: 0 INPUT
		NetFlow* DADDR; // net ID: DADDR lsb: 0  msb: 6 INPUT
		NetFlow* DCLK; // net ID: DCLK lsb: 0  msb: 0 INPUT
		NetFlow* DEN; // net ID: DEN lsb: 0  msb: 0 INPUT
		NetFlow* DI; // net ID: DI lsb: 0  msb: 15 INPUT
		NetFlow* DWE; // net ID: DWE lsb: 0  msb: 0 INPUT
		NetFlow* GTPRESET; // net ID: GTPRESET lsb: 0  msb: 0 INPUT
		NetFlow* GTPTEST; // net ID: GTPTEST lsb: 0  msb: 3 INPUT
		NetFlow* INTDATAWIDTH; // net ID: INTDATAWIDTH lsb: 0  msb: 0 INPUT
		NetFlow* LOOPBACK0; // net ID: LOOPBACK0 lsb: 0  msb: 2 INPUT
		NetFlow* LOOPBACK1; // net ID: LOOPBACK1 lsb: 0  msb: 2 INPUT
		NetFlow* PLLLKDETEN; // net ID: PLLLKDETEN lsb: 0  msb: 0 INPUT
		NetFlow* PLLPOWERDOWN; // net ID: PLLPOWERDOWN lsb: 0  msb: 0 INPUT
		NetFlow* PRBSCNTRESET0; // net ID: PRBSCNTRESET0 lsb: 0  msb: 0 INPUT
		NetFlow* PRBSCNTRESET1; // net ID: PRBSCNTRESET1 lsb: 0  msb: 0 INPUT
		NetFlow* REFCLKPWRDNB; // net ID: REFCLKPWRDNB lsb: 0  msb: 0 INPUT
		NetFlow* RXBUFRESET0; // net ID: RXBUFRESET0 lsb: 0  msb: 0 INPUT
		NetFlow* RXBUFRESET1; // net ID: RXBUFRESET1 lsb: 0  msb: 0 INPUT
		NetFlow* RXCDRRESET0; // net ID: RXCDRRESET0 lsb: 0  msb: 0 INPUT
		NetFlow* RXCDRRESET1; // net ID: RXCDRRESET1 lsb: 0  msb: 0 INPUT
		NetFlow* RXCHBONDI0; // net ID: RXCHBONDI0 lsb: 0  msb: 2 INPUT
		NetFlow* RXCHBONDI1; // net ID: RXCHBONDI1 lsb: 0  msb: 2 INPUT
		NetFlow* RXCOMMADETUSE0; // net ID: RXCOMMADETUSE0 lsb: 0  msb: 0 INPUT
		NetFlow* RXCOMMADETUSE1; // net ID: RXCOMMADETUSE1 lsb: 0  msb: 0 INPUT
		NetFlow* RXDATAWIDTH0; // net ID: RXDATAWIDTH0 lsb: 0  msb: 0 INPUT
		NetFlow* RXDATAWIDTH1; // net ID: RXDATAWIDTH1 lsb: 0  msb: 0 INPUT
		NetFlow* RXDEC8B10BUSE0; // net ID: RXDEC8B10BUSE0 lsb: 0  msb: 0 INPUT
		NetFlow* RXDEC8B10BUSE1; // net ID: RXDEC8B10BUSE1 lsb: 0  msb: 0 INPUT
		NetFlow* RXELECIDLERESET0; // net ID: RXELECIDLERESET0 lsb: 0  msb: 0 INPUT
		NetFlow* RXELECIDLERESET1; // net ID: RXELECIDLERESET1 lsb: 0  msb: 0 INPUT
		NetFlow* RXENCHANSYNC0; // net ID: RXENCHANSYNC0 lsb: 0  msb: 0 INPUT
		NetFlow* RXENCHANSYNC1; // net ID: RXENCHANSYNC1 lsb: 0  msb: 0 INPUT
		NetFlow* RXENELECIDLERESETB; // net ID: RXENELECIDLERESETB lsb: 0  msb: 0 INPUT
		NetFlow* RXENEQB0; // net ID: RXENEQB0 lsb: 0  msb: 0 INPUT
		NetFlow* RXENEQB1; // net ID: RXENEQB1 lsb: 0  msb: 0 INPUT
		NetFlow* RXENMCOMMAALIGN0; // net ID: RXENMCOMMAALIGN0 lsb: 0  msb: 0 INPUT
		NetFlow* RXENMCOMMAALIGN1; // net ID: RXENMCOMMAALIGN1 lsb: 0  msb: 0 INPUT
		NetFlow* RXENPCOMMAALIGN0; // net ID: RXENPCOMMAALIGN0 lsb: 0  msb: 0 INPUT
		NetFlow* RXENPCOMMAALIGN1; // net ID: RXENPCOMMAALIGN1 lsb: 0  msb: 0 INPUT
		NetFlow* RXENPRBSTST0; // net ID: RXENPRBSTST0 lsb: 0  msb: 1 INPUT
		NetFlow* RXENPRBSTST1; // net ID: RXENPRBSTST1 lsb: 0  msb: 1 INPUT
		NetFlow* RXENSAMPLEALIGN0; // net ID: RXENSAMPLEALIGN0 lsb: 0  msb: 0 INPUT
		NetFlow* RXENSAMPLEALIGN1; // net ID: RXENSAMPLEALIGN1 lsb: 0  msb: 0 INPUT
		NetFlow* RXEQMIX0; // net ID: RXEQMIX0 lsb: 0  msb: 1 INPUT
		NetFlow* RXEQMIX1; // net ID: RXEQMIX1 lsb: 0  msb: 1 INPUT
		NetFlow* RXEQPOLE0; // net ID: RXEQPOLE0 lsb: 0  msb: 3 INPUT
		NetFlow* RXEQPOLE1; // net ID: RXEQPOLE1 lsb: 0  msb: 3 INPUT
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
		NetFlow* TXBUFDIFFCTRL0; // net ID: TXBUFDIFFCTRL0 lsb: 0  msb: 2 INPUT
		NetFlow* TXBUFDIFFCTRL1; // net ID: TXBUFDIFFCTRL1 lsb: 0  msb: 2 INPUT
		NetFlow* TXBYPASS8B10B0; // net ID: TXBYPASS8B10B0 lsb: 0  msb: 1 INPUT
		NetFlow* TXBYPASS8B10B1; // net ID: TXBYPASS8B10B1 lsb: 0  msb: 1 INPUT
		NetFlow* TXCHARDISPMODE0; // net ID: TXCHARDISPMODE0 lsb: 0  msb: 1 INPUT
		NetFlow* TXCHARDISPMODE1; // net ID: TXCHARDISPMODE1 lsb: 0  msb: 1 INPUT
		NetFlow* TXCHARDISPVAL0; // net ID: TXCHARDISPVAL0 lsb: 0  msb: 1 INPUT
		NetFlow* TXCHARDISPVAL1; // net ID: TXCHARDISPVAL1 lsb: 0  msb: 1 INPUT
		NetFlow* TXCHARISK0; // net ID: TXCHARISK0 lsb: 0  msb: 1 INPUT
		NetFlow* TXCHARISK1; // net ID: TXCHARISK1 lsb: 0  msb: 1 INPUT
		NetFlow* TXCOMSTART0; // net ID: TXCOMSTART0 lsb: 0  msb: 0 INPUT
		NetFlow* TXCOMSTART1; // net ID: TXCOMSTART1 lsb: 0  msb: 0 INPUT
		NetFlow* TXCOMTYPE0; // net ID: TXCOMTYPE0 lsb: 0  msb: 0 INPUT
		NetFlow* TXCOMTYPE1; // net ID: TXCOMTYPE1 lsb: 0  msb: 0 INPUT
		NetFlow* TXDATA0; // net ID: TXDATA0 lsb: 0  msb: 15 INPUT
		NetFlow* TXDATA1; // net ID: TXDATA1 lsb: 0  msb: 15 INPUT
		NetFlow* TXDATAWIDTH0; // net ID: TXDATAWIDTH0 lsb: 0  msb: 0 INPUT
		NetFlow* TXDATAWIDTH1; // net ID: TXDATAWIDTH1 lsb: 0  msb: 0 INPUT
		NetFlow* TXDETECTRX0; // net ID: TXDETECTRX0 lsb: 0  msb: 0 INPUT
		NetFlow* TXDETECTRX1; // net ID: TXDETECTRX1 lsb: 0  msb: 0 INPUT
		NetFlow* TXDIFFCTRL0; // net ID: TXDIFFCTRL0 lsb: 0  msb: 2 INPUT
		NetFlow* TXDIFFCTRL1; // net ID: TXDIFFCTRL1 lsb: 0  msb: 2 INPUT
		NetFlow* TXELECIDLE0; // net ID: TXELECIDLE0 lsb: 0  msb: 0 INPUT
		NetFlow* TXELECIDLE1; // net ID: TXELECIDLE1 lsb: 0  msb: 0 INPUT
		NetFlow* TXENC8B10BUSE0; // net ID: TXENC8B10BUSE0 lsb: 0  msb: 0 INPUT
		NetFlow* TXENC8B10BUSE1; // net ID: TXENC8B10BUSE1 lsb: 0  msb: 0 INPUT
		NetFlow* TXENPMAPHASEALIGN; // net ID: TXENPMAPHASEALIGN lsb: 0  msb: 0 INPUT
		NetFlow* TXENPRBSTST0; // net ID: TXENPRBSTST0 lsb: 0  msb: 1 INPUT
		NetFlow* TXENPRBSTST1; // net ID: TXENPRBSTST1 lsb: 0  msb: 1 INPUT
		NetFlow* TXINHIBIT0; // net ID: TXINHIBIT0 lsb: 0  msb: 0 INPUT
		NetFlow* TXINHIBIT1; // net ID: TXINHIBIT1 lsb: 0  msb: 0 INPUT
		NetFlow* TXPMASETPHASE; // net ID: TXPMASETPHASE lsb: 0  msb: 0 INPUT
		NetFlow* TXPOLARITY0; // net ID: TXPOLARITY0 lsb: 0  msb: 0 INPUT
		NetFlow* TXPOLARITY1; // net ID: TXPOLARITY1 lsb: 0  msb: 0 INPUT
		NetFlow* TXPOWERDOWN0; // net ID: TXPOWERDOWN0 lsb: 0  msb: 1 INPUT
		NetFlow* TXPOWERDOWN1; // net ID: TXPOWERDOWN1 lsb: 0  msb: 1 INPUT
		NetFlow* TXPREEMPHASIS0; // net ID: TXPREEMPHASIS0 lsb: 0  msb: 2 INPUT
		NetFlow* TXPREEMPHASIS1; // net ID: TXPREEMPHASIS1 lsb: 0  msb: 2 INPUT
		NetFlow* TXRESET0; // net ID: TXRESET0 lsb: 0  msb: 0 INPUT
		NetFlow* TXRESET1; // net ID: TXRESET1 lsb: 0  msb: 0 INPUT
		NetFlow* TXUSRCLK0; // net ID: TXUSRCLK0 lsb: 0  msb: 0 INPUT
		NetFlow* TXUSRCLK1; // net ID: TXUSRCLK1 lsb: 0  msb: 0 INPUT
		NetFlow* TXUSRCLK20; // net ID: TXUSRCLK20 lsb: 0  msb: 0 INPUT
		NetFlow* TXUSRCLK21; // net ID: TXUSRCLK21 lsb: 0  msb: 0 INPUT
		
		X_GTP_DUAL(
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
			parameter_string_t SIM_PLL_PERDIV2, // Default: 9'h190
			parameter_enum_t SIM_RECEIVER_DETECT_PASS0, // Default: "FALSE"
			parameter_enum_t SIM_RECEIVER_DETECT_PASS1, // Default: "FALSE"
			parameter_enum_t TERMINATION_OVRD, // Default: "FALSE"
			parameter_enum_t TX_BUFFER_USE_0, // Default: "TRUE"
			parameter_enum_t TX_BUFFER_USE_1, // Default: "TRUE"
			parameter_enum_t TX_DIFF_BOOST_0, // Default: "TRUE"
			parameter_enum_t TX_DIFF_BOOST_1, // Default: "TRUE"
			parameter_string_t TX_XCLK_SEL_0, // Default: "TXUSR"
			parameter_string_t TX_XCLK_SEL_1, // Default: "TXUSR"
			parameter_string_t TRANS_TIME_FROM_P2_0, // Default: 16'h003c
			parameter_string_t TRANS_TIME_FROM_P2_1, // Default: 16'h003c
			parameter_string_t TRANS_TIME_NON_P2_0, // Default: 16'h0019
			parameter_string_t TRANS_TIME_NON_P2_1, // Default: 16'h0019
			parameter_string_t TRANS_TIME_TO_P2_0, // Default: 16'h0064
			parameter_string_t TRANS_TIME_TO_P2_1, // Default: 16'h0064
			parameter_string_t PMA_RX_CFG_0, // Default: 25'h09f0089
			parameter_string_t PMA_RX_CFG_1, // Default: 25'h09f0089
			parameter_string_t PMA_CDR_SCAN_0, // Default: 27'h6c07640
			parameter_string_t PMA_CDR_SCAN_1, // Default: 27'h6c07640
			parameter_string_t PCS_COM_CFG, // Default: 28'h1680a0e
			parameter_string_t OOBDETECT_THRESHOLD_0, // Default: 3'b001
			parameter_string_t OOBDETECT_THRESHOLD_1, // Default: 3'b001
			parameter_string_t SATA_BURST_VAL_0, // Default: 3'b100
			parameter_string_t SATA_BURST_VAL_1, // Default: 3'b100
			parameter_string_t SATA_IDLE_VAL_0, // Default: 3'b011
			parameter_string_t SATA_IDLE_VAL_1, // Default: 3'b011
			parameter_string_t PRBS_ERR_THRESHOLD_0, // Default: 32'h1
			parameter_string_t PRBS_ERR_THRESHOLD_1, // Default: 32'h1
			parameter_string_t CHAN_BOND_SEQ_1_ENABLE_0, // Default: 4'b1111
			parameter_string_t CHAN_BOND_SEQ_1_ENABLE_1, // Default: 4'b1111
			parameter_string_t CHAN_BOND_SEQ_2_ENABLE_0, // Default: 4'b1111
			parameter_string_t CHAN_BOND_SEQ_2_ENABLE_1, // Default: 4'b1111
			parameter_string_t CLK_COR_SEQ_1_ENABLE_0, // Default: 4'b1111
			parameter_string_t CLK_COR_SEQ_1_ENABLE_1, // Default: 4'b1111
			parameter_string_t CLK_COR_SEQ_2_ENABLE_0, // Default: 4'b1111
			parameter_string_t CLK_COR_SEQ_2_ENABLE_1, // Default: 4'b1111
			parameter_string_t COM_BURST_VAL_0, // Default: 4'b1111
			parameter_string_t COM_BURST_VAL_1, // Default: 4'b1111
			parameter_string_t TERMINATION_CTRL, // Default: 5'b10100
			parameter_string_t TXRX_INVERT_0, // Default: 5'b00000
			parameter_string_t TXRX_INVERT_1, // Default: 5'b00000
			parameter_string_t CHAN_BOND_SEQ_1_1_0, // Default: 10'b0001001010
			parameter_string_t CHAN_BOND_SEQ_1_1_1, // Default: 10'b0001001010
			parameter_string_t CHAN_BOND_SEQ_1_2_0, // Default: 10'b0001001010
			parameter_string_t CHAN_BOND_SEQ_1_2_1, // Default: 10'b0001001010
			parameter_string_t CHAN_BOND_SEQ_1_3_0, // Default: 10'b0001001010
			parameter_string_t CHAN_BOND_SEQ_1_3_1, // Default: 10'b0001001010
			parameter_string_t CHAN_BOND_SEQ_1_4_0, // Default: 10'b0110111100
			parameter_string_t CHAN_BOND_SEQ_1_4_1, // Default: 10'b0110111100
			parameter_string_t CHAN_BOND_SEQ_2_1_0, // Default: 10'b0110111100
			parameter_string_t CHAN_BOND_SEQ_2_1_1, // Default: 10'b0110111100
			parameter_string_t CHAN_BOND_SEQ_2_2_0, // Default: 10'b0100111100
			parameter_string_t CHAN_BOND_SEQ_2_2_1, // Default: 10'b0100111100
			parameter_string_t CHAN_BOND_SEQ_2_3_0, // Default: 10'b0100111100
			parameter_string_t CHAN_BOND_SEQ_2_3_1, // Default: 10'b0100111100
			parameter_string_t CHAN_BOND_SEQ_2_4_0, // Default: 10'b0100111100
			parameter_string_t CHAN_BOND_SEQ_2_4_1, // Default: 10'b0100111100
			parameter_string_t CLK_COR_SEQ_1_1_0, // Default: 10'b0100011100
			parameter_string_t CLK_COR_SEQ_1_1_1, // Default: 10'b0100011100
			parameter_string_t CLK_COR_SEQ_1_2_0, // Default: 10'b0
			parameter_string_t CLK_COR_SEQ_1_2_1, // Default: 10'b0
			parameter_string_t CLK_COR_SEQ_1_3_0, // Default: 10'b0
			parameter_string_t CLK_COR_SEQ_1_3_1, // Default: 10'b0
			parameter_string_t CLK_COR_SEQ_1_4_0, // Default: 10'b0
			parameter_string_t CLK_COR_SEQ_1_4_1, // Default: 10'b0
			parameter_string_t CLK_COR_SEQ_2_1_0, // Default: 10'b0
			parameter_string_t CLK_COR_SEQ_2_1_1, // Default: 10'b0
			parameter_string_t CLK_COR_SEQ_2_2_0, // Default: 10'b0
			parameter_string_t CLK_COR_SEQ_2_2_1, // Default: 10'b0
			parameter_string_t CLK_COR_SEQ_2_3_0, // Default: 10'b0
			parameter_string_t CLK_COR_SEQ_2_3_1, // Default: 10'b0
			parameter_string_t CLK_COR_SEQ_2_4_0, // Default: 10'b0
			parameter_string_t CLK_COR_SEQ_2_4_1, // Default: 10'b0
			parameter_string_t COMMA_10B_ENABLE_0, // Default: 10'b1111111111
			parameter_string_t COMMA_10B_ENABLE_1, // Default: 10'b1111111111
			parameter_string_t MCOMMA_10B_VALUE_0, // Default: 10'b1010000011
			parameter_string_t MCOMMA_10B_VALUE_1, // Default: 10'b1010000011
			parameter_string_t PCOMMA_10B_VALUE_0, // Default: 10'b0101111100
			parameter_string_t PCOMMA_10B_VALUE_1, // Default: 10'b0101111100
			parameter_string_t ALIGN_COMMA_WORD_0, // Default: 1
			parameter_string_t ALIGN_COMMA_WORD_1, // Default: 1
			parameter_string_t CHAN_BOND_1_MAX_SKEW_0, // Default: 7
			parameter_string_t CHAN_BOND_1_MAX_SKEW_1, // Default: 7
			parameter_string_t CHAN_BOND_2_MAX_SKEW_0, // Default: 1
			parameter_string_t CHAN_BOND_2_MAX_SKEW_1, // Default: 1
			parameter_string_t CHAN_BOND_LEVEL_0, // Default: 0
			parameter_string_t CHAN_BOND_LEVEL_1, // Default: 0
			parameter_string_t CHAN_BOND_SEQ_LEN_0, // Default: 4
			parameter_string_t CHAN_BOND_SEQ_LEN_1, // Default: 4
			parameter_string_t CLK25_DIVIDER, // Default: 4
			parameter_string_t CLK_COR_ADJ_LEN_0, // Default: 1
			parameter_string_t CLK_COR_ADJ_LEN_1, // Default: 1
			parameter_string_t CLK_COR_DET_LEN_0, // Default: 1
			parameter_string_t CLK_COR_DET_LEN_1, // Default: 1
			parameter_string_t CLK_COR_MAX_LAT_0, // Default: 18
			parameter_string_t CLK_COR_MAX_LAT_1, // Default: 18
			parameter_string_t CLK_COR_MIN_LAT_0, // Default: 16
			parameter_string_t CLK_COR_MIN_LAT_1, // Default: 16
			parameter_string_t CLK_COR_REPEAT_WAIT_0, // Default: 5
			parameter_string_t CLK_COR_REPEAT_WAIT_1, // Default: 5
			parameter_string_t OOB_CLK_DIVIDER, // Default: 4
			parameter_string_t PLL_DIVSEL_FB, // Default: 5
			parameter_string_t PLL_DIVSEL_REF, // Default: 2
			parameter_string_t PLL_RXDIVSEL_OUT_0, // Default: 1
			parameter_string_t PLL_RXDIVSEL_OUT_1, // Default: 1
			parameter_string_t PLL_TXDIVSEL_COMM_OUT, // Default: 1
			parameter_string_t PLL_TXDIVSEL_OUT_0, // Default: 1
			parameter_string_t PLL_TXDIVSEL_OUT_1, // Default: 1
			parameter_string_t RX_LOS_INVALID_INCR_0, // Default: 8
			parameter_string_t RX_LOS_INVALID_INCR_1, // Default: 8
			parameter_string_t RX_LOS_THRESHOLD_0, // Default: 128
			parameter_string_t RX_LOS_THRESHOLD_1, // Default: 128
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
			parameter_string_t SIM_GTPRESET_SPEEDUP, // Default: 0
			parameter_string_t TERMINATION_IMP_0, // Default: 50
			parameter_string_t TERMINATION_IMP_1, // Default: 50
			parameter_string_t TX_SYNC_FILTERB, // Default: 1
			//Verilog Ports in definition order:
			NetFlow* DO, // net ID: DO lsb: 0  msb: 0 OUTPUT
			NetFlow* DRDY, // net ID: DRDY lsb: 0  msb: 0 OUTPUT
			NetFlow* PHYSTATUS0, // net ID: PHYSTATUS0 lsb: 0  msb: 0 OUTPUT
			NetFlow* PHYSTATUS1, // net ID: PHYSTATUS1 lsb: 0  msb: 0 OUTPUT
			NetFlow* PLLLKDET, // net ID: PLLLKDET lsb: 0  msb: 0 OUTPUT
			NetFlow* REFCLKOUT, // net ID: REFCLKOUT lsb: 0  msb: 0 OUTPUT
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
			NetFlow* RXCHBONDO0, // net ID: RXCHBONDO0 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXCHBONDO1, // net ID: RXCHBONDO1 lsb: 0  msb: 0 OUTPUT
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
			NetFlow* RXOVERSAMPLEERR0, // net ID: RXOVERSAMPLEERR0 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXOVERSAMPLEERR1, // net ID: RXOVERSAMPLEERR1 lsb: 0  msb: 0 OUTPUT
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
			NetFlow* CLKIN, // net ID: CLKIN lsb: 0  msb: 0 INPUT
			NetFlow* DADDR, // net ID: DADDR lsb: 0  msb: 6 INPUT
			NetFlow* DCLK, // net ID: DCLK lsb: 0  msb: 0 INPUT
			NetFlow* DEN, // net ID: DEN lsb: 0  msb: 0 INPUT
			NetFlow* DI, // net ID: DI lsb: 0  msb: 15 INPUT
			NetFlow* DWE, // net ID: DWE lsb: 0  msb: 0 INPUT
			NetFlow* GTPRESET, // net ID: GTPRESET lsb: 0  msb: 0 INPUT
			NetFlow* GTPTEST, // net ID: GTPTEST lsb: 0  msb: 3 INPUT
			NetFlow* INTDATAWIDTH, // net ID: INTDATAWIDTH lsb: 0  msb: 0 INPUT
			NetFlow* LOOPBACK0, // net ID: LOOPBACK0 lsb: 0  msb: 2 INPUT
			NetFlow* LOOPBACK1, // net ID: LOOPBACK1 lsb: 0  msb: 2 INPUT
			NetFlow* PLLLKDETEN, // net ID: PLLLKDETEN lsb: 0  msb: 0 INPUT
			NetFlow* PLLPOWERDOWN, // net ID: PLLPOWERDOWN lsb: 0  msb: 0 INPUT
			NetFlow* PRBSCNTRESET0, // net ID: PRBSCNTRESET0 lsb: 0  msb: 0 INPUT
			NetFlow* PRBSCNTRESET1, // net ID: PRBSCNTRESET1 lsb: 0  msb: 0 INPUT
			NetFlow* REFCLKPWRDNB, // net ID: REFCLKPWRDNB lsb: 0  msb: 0 INPUT
			NetFlow* RXBUFRESET0, // net ID: RXBUFRESET0 lsb: 0  msb: 0 INPUT
			NetFlow* RXBUFRESET1, // net ID: RXBUFRESET1 lsb: 0  msb: 0 INPUT
			NetFlow* RXCDRRESET0, // net ID: RXCDRRESET0 lsb: 0  msb: 0 INPUT
			NetFlow* RXCDRRESET1, // net ID: RXCDRRESET1 lsb: 0  msb: 0 INPUT
			NetFlow* RXCHBONDI0, // net ID: RXCHBONDI0 lsb: 0  msb: 2 INPUT
			NetFlow* RXCHBONDI1, // net ID: RXCHBONDI1 lsb: 0  msb: 2 INPUT
			NetFlow* RXCOMMADETUSE0, // net ID: RXCOMMADETUSE0 lsb: 0  msb: 0 INPUT
			NetFlow* RXCOMMADETUSE1, // net ID: RXCOMMADETUSE1 lsb: 0  msb: 0 INPUT
			NetFlow* RXDATAWIDTH0, // net ID: RXDATAWIDTH0 lsb: 0  msb: 0 INPUT
			NetFlow* RXDATAWIDTH1, // net ID: RXDATAWIDTH1 lsb: 0  msb: 0 INPUT
			NetFlow* RXDEC8B10BUSE0, // net ID: RXDEC8B10BUSE0 lsb: 0  msb: 0 INPUT
			NetFlow* RXDEC8B10BUSE1, // net ID: RXDEC8B10BUSE1 lsb: 0  msb: 0 INPUT
			NetFlow* RXELECIDLERESET0, // net ID: RXELECIDLERESET0 lsb: 0  msb: 0 INPUT
			NetFlow* RXELECIDLERESET1, // net ID: RXELECIDLERESET1 lsb: 0  msb: 0 INPUT
			NetFlow* RXENCHANSYNC0, // net ID: RXENCHANSYNC0 lsb: 0  msb: 0 INPUT
			NetFlow* RXENCHANSYNC1, // net ID: RXENCHANSYNC1 lsb: 0  msb: 0 INPUT
			NetFlow* RXENELECIDLERESETB, // net ID: RXENELECIDLERESETB lsb: 0  msb: 0 INPUT
			NetFlow* RXENEQB0, // net ID: RXENEQB0 lsb: 0  msb: 0 INPUT
			NetFlow* RXENEQB1, // net ID: RXENEQB1 lsb: 0  msb: 0 INPUT
			NetFlow* RXENMCOMMAALIGN0, // net ID: RXENMCOMMAALIGN0 lsb: 0  msb: 0 INPUT
			NetFlow* RXENMCOMMAALIGN1, // net ID: RXENMCOMMAALIGN1 lsb: 0  msb: 0 INPUT
			NetFlow* RXENPCOMMAALIGN0, // net ID: RXENPCOMMAALIGN0 lsb: 0  msb: 0 INPUT
			NetFlow* RXENPCOMMAALIGN1, // net ID: RXENPCOMMAALIGN1 lsb: 0  msb: 0 INPUT
			NetFlow* RXENPRBSTST0, // net ID: RXENPRBSTST0 lsb: 0  msb: 1 INPUT
			NetFlow* RXENPRBSTST1, // net ID: RXENPRBSTST1 lsb: 0  msb: 1 INPUT
			NetFlow* RXENSAMPLEALIGN0, // net ID: RXENSAMPLEALIGN0 lsb: 0  msb: 0 INPUT
			NetFlow* RXENSAMPLEALIGN1, // net ID: RXENSAMPLEALIGN1 lsb: 0  msb: 0 INPUT
			NetFlow* RXEQMIX0, // net ID: RXEQMIX0 lsb: 0  msb: 1 INPUT
			NetFlow* RXEQMIX1, // net ID: RXEQMIX1 lsb: 0  msb: 1 INPUT
			NetFlow* RXEQPOLE0, // net ID: RXEQPOLE0 lsb: 0  msb: 3 INPUT
			NetFlow* RXEQPOLE1, // net ID: RXEQPOLE1 lsb: 0  msb: 3 INPUT
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
			NetFlow* TXBUFDIFFCTRL0, // net ID: TXBUFDIFFCTRL0 lsb: 0  msb: 2 INPUT
			NetFlow* TXBUFDIFFCTRL1, // net ID: TXBUFDIFFCTRL1 lsb: 0  msb: 2 INPUT
			NetFlow* TXBYPASS8B10B0, // net ID: TXBYPASS8B10B0 lsb: 0  msb: 1 INPUT
			NetFlow* TXBYPASS8B10B1, // net ID: TXBYPASS8B10B1 lsb: 0  msb: 1 INPUT
			NetFlow* TXCHARDISPMODE0, // net ID: TXCHARDISPMODE0 lsb: 0  msb: 1 INPUT
			NetFlow* TXCHARDISPMODE1, // net ID: TXCHARDISPMODE1 lsb: 0  msb: 1 INPUT
			NetFlow* TXCHARDISPVAL0, // net ID: TXCHARDISPVAL0 lsb: 0  msb: 1 INPUT
			NetFlow* TXCHARDISPVAL1, // net ID: TXCHARDISPVAL1 lsb: 0  msb: 1 INPUT
			NetFlow* TXCHARISK0, // net ID: TXCHARISK0 lsb: 0  msb: 1 INPUT
			NetFlow* TXCHARISK1, // net ID: TXCHARISK1 lsb: 0  msb: 1 INPUT
			NetFlow* TXCOMSTART0, // net ID: TXCOMSTART0 lsb: 0  msb: 0 INPUT
			NetFlow* TXCOMSTART1, // net ID: TXCOMSTART1 lsb: 0  msb: 0 INPUT
			NetFlow* TXCOMTYPE0, // net ID: TXCOMTYPE0 lsb: 0  msb: 0 INPUT
			NetFlow* TXCOMTYPE1, // net ID: TXCOMTYPE1 lsb: 0  msb: 0 INPUT
			NetFlow* TXDATA0, // net ID: TXDATA0 lsb: 0  msb: 15 INPUT
			NetFlow* TXDATA1, // net ID: TXDATA1 lsb: 0  msb: 15 INPUT
			NetFlow* TXDATAWIDTH0, // net ID: TXDATAWIDTH0 lsb: 0  msb: 0 INPUT
			NetFlow* TXDATAWIDTH1, // net ID: TXDATAWIDTH1 lsb: 0  msb: 0 INPUT
			NetFlow* TXDETECTRX0, // net ID: TXDETECTRX0 lsb: 0  msb: 0 INPUT
			NetFlow* TXDETECTRX1, // net ID: TXDETECTRX1 lsb: 0  msb: 0 INPUT
			NetFlow* TXDIFFCTRL0, // net ID: TXDIFFCTRL0 lsb: 0  msb: 2 INPUT
			NetFlow* TXDIFFCTRL1, // net ID: TXDIFFCTRL1 lsb: 0  msb: 2 INPUT
			NetFlow* TXELECIDLE0, // net ID: TXELECIDLE0 lsb: 0  msb: 0 INPUT
			NetFlow* TXELECIDLE1, // net ID: TXELECIDLE1 lsb: 0  msb: 0 INPUT
			NetFlow* TXENC8B10BUSE0, // net ID: TXENC8B10BUSE0 lsb: 0  msb: 0 INPUT
			NetFlow* TXENC8B10BUSE1, // net ID: TXENC8B10BUSE1 lsb: 0  msb: 0 INPUT
			NetFlow* TXENPMAPHASEALIGN, // net ID: TXENPMAPHASEALIGN lsb: 0  msb: 0 INPUT
			NetFlow* TXENPRBSTST0, // net ID: TXENPRBSTST0 lsb: 0  msb: 1 INPUT
			NetFlow* TXENPRBSTST1, // net ID: TXENPRBSTST1 lsb: 0  msb: 1 INPUT
			NetFlow* TXINHIBIT0, // net ID: TXINHIBIT0 lsb: 0  msb: 0 INPUT
			NetFlow* TXINHIBIT1, // net ID: TXINHIBIT1 lsb: 0  msb: 0 INPUT
			NetFlow* TXPMASETPHASE, // net ID: TXPMASETPHASE lsb: 0  msb: 0 INPUT
			NetFlow* TXPOLARITY0, // net ID: TXPOLARITY0 lsb: 0  msb: 0 INPUT
			NetFlow* TXPOLARITY1, // net ID: TXPOLARITY1 lsb: 0  msb: 0 INPUT
			NetFlow* TXPOWERDOWN0, // net ID: TXPOWERDOWN0 lsb: 0  msb: 1 INPUT
			NetFlow* TXPOWERDOWN1, // net ID: TXPOWERDOWN1 lsb: 0  msb: 1 INPUT
			NetFlow* TXPREEMPHASIS0, // net ID: TXPREEMPHASIS0 lsb: 0  msb: 2 INPUT
			NetFlow* TXPREEMPHASIS1, // net ID: TXPREEMPHASIS1 lsb: 0  msb: 2 INPUT
			NetFlow* TXRESET0, // net ID: TXRESET0 lsb: 0  msb: 0 INPUT
			NetFlow* TXRESET1, // net ID: TXRESET1 lsb: 0  msb: 0 INPUT
			NetFlow* TXUSRCLK0, // net ID: TXUSRCLK0 lsb: 0  msb: 0 INPUT
			NetFlow* TXUSRCLK1, // net ID: TXUSRCLK1 lsb: 0  msb: 0 INPUT
			NetFlow* TXUSRCLK20, // net ID: TXUSRCLK20 lsb: 0  msb: 0 INPUT
			NetFlow* TXUSRCLK21 // net ID: TXUSRCLK21 lsb: 0  msb: 0 INPUT
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
			this->DO = DO; // net ID: DO lsb: 0  msb: 0 OUTPUT
			this->DRDY = DRDY; // net ID: DRDY lsb: 0  msb: 0 OUTPUT
			this->PHYSTATUS0 = PHYSTATUS0; // net ID: PHYSTATUS0 lsb: 0  msb: 0 OUTPUT
			this->PHYSTATUS1 = PHYSTATUS1; // net ID: PHYSTATUS1 lsb: 0  msb: 0 OUTPUT
			this->PLLLKDET = PLLLKDET; // net ID: PLLLKDET lsb: 0  msb: 0 OUTPUT
			this->REFCLKOUT = REFCLKOUT; // net ID: REFCLKOUT lsb: 0  msb: 0 OUTPUT
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
			this->RXCHBONDO0 = RXCHBONDO0; // net ID: RXCHBONDO0 lsb: 0  msb: 0 OUTPUT
			this->RXCHBONDO1 = RXCHBONDO1; // net ID: RXCHBONDO1 lsb: 0  msb: 0 OUTPUT
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
			this->RXOVERSAMPLEERR0 = RXOVERSAMPLEERR0; // net ID: RXOVERSAMPLEERR0 lsb: 0  msb: 0 OUTPUT
			this->RXOVERSAMPLEERR1 = RXOVERSAMPLEERR1; // net ID: RXOVERSAMPLEERR1 lsb: 0  msb: 0 OUTPUT
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
			this->CLKIN = CLKIN; // net ID: CLKIN lsb: 0  msb: 0 INPUT
			this->DADDR = DADDR; // net ID: DADDR lsb: 0  msb: 6 INPUT
			this->DCLK = DCLK; // net ID: DCLK lsb: 0  msb: 0 INPUT
			this->DEN = DEN; // net ID: DEN lsb: 0  msb: 0 INPUT
			this->DI = DI; // net ID: DI lsb: 0  msb: 15 INPUT
			this->DWE = DWE; // net ID: DWE lsb: 0  msb: 0 INPUT
			this->GTPRESET = GTPRESET; // net ID: GTPRESET lsb: 0  msb: 0 INPUT
			this->GTPTEST = GTPTEST; // net ID: GTPTEST lsb: 0  msb: 3 INPUT
			this->INTDATAWIDTH = INTDATAWIDTH; // net ID: INTDATAWIDTH lsb: 0  msb: 0 INPUT
			this->LOOPBACK0 = LOOPBACK0; // net ID: LOOPBACK0 lsb: 0  msb: 2 INPUT
			this->LOOPBACK1 = LOOPBACK1; // net ID: LOOPBACK1 lsb: 0  msb: 2 INPUT
			this->PLLLKDETEN = PLLLKDETEN; // net ID: PLLLKDETEN lsb: 0  msb: 0 INPUT
			this->PLLPOWERDOWN = PLLPOWERDOWN; // net ID: PLLPOWERDOWN lsb: 0  msb: 0 INPUT
			this->PRBSCNTRESET0 = PRBSCNTRESET0; // net ID: PRBSCNTRESET0 lsb: 0  msb: 0 INPUT
			this->PRBSCNTRESET1 = PRBSCNTRESET1; // net ID: PRBSCNTRESET1 lsb: 0  msb: 0 INPUT
			this->REFCLKPWRDNB = REFCLKPWRDNB; // net ID: REFCLKPWRDNB lsb: 0  msb: 0 INPUT
			this->RXBUFRESET0 = RXBUFRESET0; // net ID: RXBUFRESET0 lsb: 0  msb: 0 INPUT
			this->RXBUFRESET1 = RXBUFRESET1; // net ID: RXBUFRESET1 lsb: 0  msb: 0 INPUT
			this->RXCDRRESET0 = RXCDRRESET0; // net ID: RXCDRRESET0 lsb: 0  msb: 0 INPUT
			this->RXCDRRESET1 = RXCDRRESET1; // net ID: RXCDRRESET1 lsb: 0  msb: 0 INPUT
			this->RXCHBONDI0 = RXCHBONDI0; // net ID: RXCHBONDI0 lsb: 0  msb: 2 INPUT
			this->RXCHBONDI1 = RXCHBONDI1; // net ID: RXCHBONDI1 lsb: 0  msb: 2 INPUT
			this->RXCOMMADETUSE0 = RXCOMMADETUSE0; // net ID: RXCOMMADETUSE0 lsb: 0  msb: 0 INPUT
			this->RXCOMMADETUSE1 = RXCOMMADETUSE1; // net ID: RXCOMMADETUSE1 lsb: 0  msb: 0 INPUT
			this->RXDATAWIDTH0 = RXDATAWIDTH0; // net ID: RXDATAWIDTH0 lsb: 0  msb: 0 INPUT
			this->RXDATAWIDTH1 = RXDATAWIDTH1; // net ID: RXDATAWIDTH1 lsb: 0  msb: 0 INPUT
			this->RXDEC8B10BUSE0 = RXDEC8B10BUSE0; // net ID: RXDEC8B10BUSE0 lsb: 0  msb: 0 INPUT
			this->RXDEC8B10BUSE1 = RXDEC8B10BUSE1; // net ID: RXDEC8B10BUSE1 lsb: 0  msb: 0 INPUT
			this->RXELECIDLERESET0 = RXELECIDLERESET0; // net ID: RXELECIDLERESET0 lsb: 0  msb: 0 INPUT
			this->RXELECIDLERESET1 = RXELECIDLERESET1; // net ID: RXELECIDLERESET1 lsb: 0  msb: 0 INPUT
			this->RXENCHANSYNC0 = RXENCHANSYNC0; // net ID: RXENCHANSYNC0 lsb: 0  msb: 0 INPUT
			this->RXENCHANSYNC1 = RXENCHANSYNC1; // net ID: RXENCHANSYNC1 lsb: 0  msb: 0 INPUT
			this->RXENELECIDLERESETB = RXENELECIDLERESETB; // net ID: RXENELECIDLERESETB lsb: 0  msb: 0 INPUT
			this->RXENEQB0 = RXENEQB0; // net ID: RXENEQB0 lsb: 0  msb: 0 INPUT
			this->RXENEQB1 = RXENEQB1; // net ID: RXENEQB1 lsb: 0  msb: 0 INPUT
			this->RXENMCOMMAALIGN0 = RXENMCOMMAALIGN0; // net ID: RXENMCOMMAALIGN0 lsb: 0  msb: 0 INPUT
			this->RXENMCOMMAALIGN1 = RXENMCOMMAALIGN1; // net ID: RXENMCOMMAALIGN1 lsb: 0  msb: 0 INPUT
			this->RXENPCOMMAALIGN0 = RXENPCOMMAALIGN0; // net ID: RXENPCOMMAALIGN0 lsb: 0  msb: 0 INPUT
			this->RXENPCOMMAALIGN1 = RXENPCOMMAALIGN1; // net ID: RXENPCOMMAALIGN1 lsb: 0  msb: 0 INPUT
			this->RXENPRBSTST0 = RXENPRBSTST0; // net ID: RXENPRBSTST0 lsb: 0  msb: 1 INPUT
			this->RXENPRBSTST1 = RXENPRBSTST1; // net ID: RXENPRBSTST1 lsb: 0  msb: 1 INPUT
			this->RXENSAMPLEALIGN0 = RXENSAMPLEALIGN0; // net ID: RXENSAMPLEALIGN0 lsb: 0  msb: 0 INPUT
			this->RXENSAMPLEALIGN1 = RXENSAMPLEALIGN1; // net ID: RXENSAMPLEALIGN1 lsb: 0  msb: 0 INPUT
			this->RXEQMIX0 = RXEQMIX0; // net ID: RXEQMIX0 lsb: 0  msb: 1 INPUT
			this->RXEQMIX1 = RXEQMIX1; // net ID: RXEQMIX1 lsb: 0  msb: 1 INPUT
			this->RXEQPOLE0 = RXEQPOLE0; // net ID: RXEQPOLE0 lsb: 0  msb: 3 INPUT
			this->RXEQPOLE1 = RXEQPOLE1; // net ID: RXEQPOLE1 lsb: 0  msb: 3 INPUT
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
			this->TXBUFDIFFCTRL0 = TXBUFDIFFCTRL0; // net ID: TXBUFDIFFCTRL0 lsb: 0  msb: 2 INPUT
			this->TXBUFDIFFCTRL1 = TXBUFDIFFCTRL1; // net ID: TXBUFDIFFCTRL1 lsb: 0  msb: 2 INPUT
			this->TXBYPASS8B10B0 = TXBYPASS8B10B0; // net ID: TXBYPASS8B10B0 lsb: 0  msb: 1 INPUT
			this->TXBYPASS8B10B1 = TXBYPASS8B10B1; // net ID: TXBYPASS8B10B1 lsb: 0  msb: 1 INPUT
			this->TXCHARDISPMODE0 = TXCHARDISPMODE0; // net ID: TXCHARDISPMODE0 lsb: 0  msb: 1 INPUT
			this->TXCHARDISPMODE1 = TXCHARDISPMODE1; // net ID: TXCHARDISPMODE1 lsb: 0  msb: 1 INPUT
			this->TXCHARDISPVAL0 = TXCHARDISPVAL0; // net ID: TXCHARDISPVAL0 lsb: 0  msb: 1 INPUT
			this->TXCHARDISPVAL1 = TXCHARDISPVAL1; // net ID: TXCHARDISPVAL1 lsb: 0  msb: 1 INPUT
			this->TXCHARISK0 = TXCHARISK0; // net ID: TXCHARISK0 lsb: 0  msb: 1 INPUT
			this->TXCHARISK1 = TXCHARISK1; // net ID: TXCHARISK1 lsb: 0  msb: 1 INPUT
			this->TXCOMSTART0 = TXCOMSTART0; // net ID: TXCOMSTART0 lsb: 0  msb: 0 INPUT
			this->TXCOMSTART1 = TXCOMSTART1; // net ID: TXCOMSTART1 lsb: 0  msb: 0 INPUT
			this->TXCOMTYPE0 = TXCOMTYPE0; // net ID: TXCOMTYPE0 lsb: 0  msb: 0 INPUT
			this->TXCOMTYPE1 = TXCOMTYPE1; // net ID: TXCOMTYPE1 lsb: 0  msb: 0 INPUT
			this->TXDATA0 = TXDATA0; // net ID: TXDATA0 lsb: 0  msb: 15 INPUT
			this->TXDATA1 = TXDATA1; // net ID: TXDATA1 lsb: 0  msb: 15 INPUT
			this->TXDATAWIDTH0 = TXDATAWIDTH0; // net ID: TXDATAWIDTH0 lsb: 0  msb: 0 INPUT
			this->TXDATAWIDTH1 = TXDATAWIDTH1; // net ID: TXDATAWIDTH1 lsb: 0  msb: 0 INPUT
			this->TXDETECTRX0 = TXDETECTRX0; // net ID: TXDETECTRX0 lsb: 0  msb: 0 INPUT
			this->TXDETECTRX1 = TXDETECTRX1; // net ID: TXDETECTRX1 lsb: 0  msb: 0 INPUT
			this->TXDIFFCTRL0 = TXDIFFCTRL0; // net ID: TXDIFFCTRL0 lsb: 0  msb: 2 INPUT
			this->TXDIFFCTRL1 = TXDIFFCTRL1; // net ID: TXDIFFCTRL1 lsb: 0  msb: 2 INPUT
			this->TXELECIDLE0 = TXELECIDLE0; // net ID: TXELECIDLE0 lsb: 0  msb: 0 INPUT
			this->TXELECIDLE1 = TXELECIDLE1; // net ID: TXELECIDLE1 lsb: 0  msb: 0 INPUT
			this->TXENC8B10BUSE0 = TXENC8B10BUSE0; // net ID: TXENC8B10BUSE0 lsb: 0  msb: 0 INPUT
			this->TXENC8B10BUSE1 = TXENC8B10BUSE1; // net ID: TXENC8B10BUSE1 lsb: 0  msb: 0 INPUT
			this->TXENPMAPHASEALIGN = TXENPMAPHASEALIGN; // net ID: TXENPMAPHASEALIGN lsb: 0  msb: 0 INPUT
			this->TXENPRBSTST0 = TXENPRBSTST0; // net ID: TXENPRBSTST0 lsb: 0  msb: 1 INPUT
			this->TXENPRBSTST1 = TXENPRBSTST1; // net ID: TXENPRBSTST1 lsb: 0  msb: 1 INPUT
			this->TXINHIBIT0 = TXINHIBIT0; // net ID: TXINHIBIT0 lsb: 0  msb: 0 INPUT
			this->TXINHIBIT1 = TXINHIBIT1; // net ID: TXINHIBIT1 lsb: 0  msb: 0 INPUT
			this->TXPMASETPHASE = TXPMASETPHASE; // net ID: TXPMASETPHASE lsb: 0  msb: 0 INPUT
			this->TXPOLARITY0 = TXPOLARITY0; // net ID: TXPOLARITY0 lsb: 0  msb: 0 INPUT
			this->TXPOLARITY1 = TXPOLARITY1; // net ID: TXPOLARITY1 lsb: 0  msb: 0 INPUT
			this->TXPOWERDOWN0 = TXPOWERDOWN0; // net ID: TXPOWERDOWN0 lsb: 0  msb: 1 INPUT
			this->TXPOWERDOWN1 = TXPOWERDOWN1; // net ID: TXPOWERDOWN1 lsb: 0  msb: 1 INPUT
			this->TXPREEMPHASIS0 = TXPREEMPHASIS0; // net ID: TXPREEMPHASIS0 lsb: 0  msb: 2 INPUT
			this->TXPREEMPHASIS1 = TXPREEMPHASIS1; // net ID: TXPREEMPHASIS1 lsb: 0  msb: 2 INPUT
			this->TXRESET0 = TXRESET0; // net ID: TXRESET0 lsb: 0  msb: 0 INPUT
			this->TXRESET1 = TXRESET1; // net ID: TXRESET1 lsb: 0  msb: 0 INPUT
			this->TXUSRCLK0 = TXUSRCLK0; // net ID: TXUSRCLK0 lsb: 0  msb: 0 INPUT
			this->TXUSRCLK1 = TXUSRCLK1; // net ID: TXUSRCLK1 lsb: 0  msb: 0 INPUT
			this->TXUSRCLK20 = TXUSRCLK20; // net ID: TXUSRCLK20 lsb: 0  msb: 0 INPUT
			this->TXUSRCLK21 = TXUSRCLK21; // net ID: TXUSRCLK21 lsb: 0  msb: 0 INPUT
			
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
