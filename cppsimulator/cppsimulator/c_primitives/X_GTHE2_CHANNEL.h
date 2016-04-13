/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_GTHE2_CHANNEL: public Primitive{

		//Verilog Parameters:
		parameter_string_t LOC;
		parameter_string_t ACJTAG_DEBUG_MODE;
		parameter_string_t ACJTAG_MODE;
		parameter_string_t ACJTAG_RESET;
		parameter_string_t ADAPT_CFG0;
		parameter_enum_t ALIGN_COMMA_DOUBLE;
		parameter_string_t ALIGN_COMMA_ENABLE;
		parameter_string_t ALIGN_COMMA_WORD;
		parameter_enum_t ALIGN_MCOMMA_DET;
		parameter_string_t ALIGN_MCOMMA_VALUE;
		parameter_enum_t ALIGN_PCOMMA_DET;
		parameter_string_t ALIGN_PCOMMA_VALUE;
		parameter_string_t A_RXOSCALRESET;
		parameter_string_t CBCC_DATA_SOURCE_SEL;
		parameter_string_t CFOK_CFG;
		parameter_string_t CFOK_CFG2;
		parameter_string_t CFOK_CFG3;
		parameter_enum_t CHAN_BOND_KEEP_ALIGN;
		parameter_string_t CHAN_BOND_MAX_SKEW;
		parameter_string_t CHAN_BOND_SEQ_1_1;
		parameter_string_t CHAN_BOND_SEQ_1_2;
		parameter_string_t CHAN_BOND_SEQ_1_3;
		parameter_string_t CHAN_BOND_SEQ_1_4;
		parameter_string_t CHAN_BOND_SEQ_1_ENABLE;
		parameter_string_t CHAN_BOND_SEQ_2_1;
		parameter_string_t CHAN_BOND_SEQ_2_2;
		parameter_string_t CHAN_BOND_SEQ_2_3;
		parameter_string_t CHAN_BOND_SEQ_2_4;
		parameter_string_t CHAN_BOND_SEQ_2_ENABLE;
		parameter_enum_t CHAN_BOND_SEQ_2_USE;
		parameter_string_t CHAN_BOND_SEQ_LEN;
		parameter_enum_t CLK_CORRECT_USE;
		parameter_enum_t CLK_COR_KEEP_IDLE;
		parameter_string_t CLK_COR_MAX_LAT;
		parameter_string_t CLK_COR_MIN_LAT;
		parameter_enum_t CLK_COR_PRECEDENCE;
		parameter_string_t CLK_COR_REPEAT_WAIT;
		parameter_string_t CLK_COR_SEQ_1_1;
		parameter_string_t CLK_COR_SEQ_1_2;
		parameter_string_t CLK_COR_SEQ_1_3;
		parameter_string_t CLK_COR_SEQ_1_4;
		parameter_string_t CLK_COR_SEQ_1_ENABLE;
		parameter_string_t CLK_COR_SEQ_2_1;
		parameter_string_t CLK_COR_SEQ_2_2;
		parameter_string_t CLK_COR_SEQ_2_3;
		parameter_string_t CLK_COR_SEQ_2_4;
		parameter_string_t CLK_COR_SEQ_2_ENABLE;
		parameter_enum_t CLK_COR_SEQ_2_USE;
		parameter_string_t CLK_COR_SEQ_LEN;
		parameter_string_t CPLL_CFG;
		parameter_string_t CPLL_FBDIV;
		parameter_string_t CPLL_FBDIV_45;
		parameter_string_t CPLL_INIT_CFG;
		parameter_string_t CPLL_LOCK_CFG;
		parameter_string_t CPLL_REFCLK_DIV;
		parameter_enum_t DEC_MCOMMA_DETECT;
		parameter_enum_t DEC_PCOMMA_DETECT;
		parameter_enum_t DEC_VALID_COMMA_ONLY;
		parameter_string_t DMONITOR_CFG;
		parameter_string_t ES_CLK_PHASE_SEL;
		parameter_string_t ES_CONTROL;
		parameter_enum_t ES_ERRDET_EN;
		parameter_enum_t ES_EYE_SCAN_EN;
		parameter_string_t ES_HORZ_OFFSET;
		parameter_string_t ES_PMA_CFG;
		parameter_string_t ES_PRESCALE;
		parameter_string_t ES_QUALIFIER;
		parameter_string_t ES_QUAL_MASK;
		parameter_string_t ES_SDATA_MASK;
		parameter_string_t ES_VERT_OFFSET;
		parameter_string_t FTS_DESKEW_SEQ_ENABLE;
		parameter_string_t FTS_LANE_DESKEW_CFG;
		parameter_enum_t FTS_LANE_DESKEW_EN;
		parameter_string_t GEARBOX_MODE;
		parameter_string_t LOOPBACK_CFG;
		parameter_string_t OUTREFCLK_SEL_INV;
		parameter_enum_t PCS_PCIE_EN;
		parameter_string_t PCS_RSVD_ATTR;
		parameter_string_t PD_TRANS_TIME_FROM_P2;
		parameter_string_t PD_TRANS_TIME_NONE_P2;
		parameter_string_t PD_TRANS_TIME_TO_P2;
		parameter_string_t PMA_RSV;
		parameter_string_t PMA_RSV2;
		parameter_string_t PMA_RSV3;
		parameter_string_t PMA_RSV4;
		parameter_string_t PMA_RSV5;
		parameter_string_t RESET_POWERSAVE_DISABLE;
		parameter_string_t RXBUFRESET_TIME;
		parameter_string_t RXBUF_ADDR_MODE;
		parameter_string_t RXBUF_EIDLE_HI_CNT;
		parameter_string_t RXBUF_EIDLE_LO_CNT;
		parameter_enum_t RXBUF_EN;
		parameter_enum_t RXBUF_RESET_ON_CB_CHANGE;
		parameter_enum_t RXBUF_RESET_ON_COMMAALIGN;
		parameter_enum_t RXBUF_RESET_ON_EIDLE;
		parameter_enum_t RXBUF_RESET_ON_RATE_CHANGE;
		parameter_string_t RXBUF_THRESH_OVFLW;
		parameter_enum_t RXBUF_THRESH_OVRD;
		parameter_string_t RXBUF_THRESH_UNDFLW;
		parameter_string_t RXCDRFREQRESET_TIME;
		parameter_string_t RXCDRPHRESET_TIME;
		parameter_string_t RXCDR_CFG;
		parameter_string_t RXCDR_FR_RESET_ON_EIDLE;
		parameter_string_t RXCDR_HOLD_DURING_EIDLE;
		parameter_string_t RXCDR_LOCK_CFG;
		parameter_string_t RXCDR_PH_RESET_ON_EIDLE;
		parameter_string_t RXDFELPMRESET_TIME;
		parameter_string_t RXDLY_CFG;
		parameter_string_t RXDLY_LCFG;
		parameter_string_t RXDLY_TAP_CFG;
		parameter_enum_t RXGEARBOX_EN;
		parameter_string_t RXISCANRESET_TIME;
		parameter_string_t RXLPM_HF_CFG;
		parameter_string_t RXLPM_LF_CFG;
		parameter_string_t RXOOB_CFG;
		parameter_string_t RXOOB_CLK_CFG;
		parameter_string_t RXOSCALRESET_TIME;
		parameter_string_t RXOSCALRESET_TIMEOUT;
		parameter_string_t RXOUT_DIV;
		parameter_string_t RXPCSRESET_TIME;
		parameter_string_t RXPHDLY_CFG;
		parameter_string_t RXPH_CFG;
		parameter_string_t RXPH_MONITOR_SEL;
		parameter_string_t RXPI_CFG0;
		parameter_string_t RXPI_CFG1;
		parameter_string_t RXPI_CFG2;
		parameter_string_t RXPI_CFG3;
		parameter_string_t RXPI_CFG4;
		parameter_string_t RXPI_CFG5;
		parameter_string_t RXPI_CFG6;
		parameter_string_t RXPMARESET_TIME;
		parameter_string_t RXPRBS_ERR_LOOPBACK;
		parameter_string_t RXSLIDE_AUTO_WAIT;
		parameter_string_t RXSLIDE_MODE;
		parameter_string_t RXSYNC_MULTILANE;
		parameter_string_t RXSYNC_OVRD;
		parameter_string_t RXSYNC_SKIP_DA;
		parameter_string_t RX_BIAS_CFG;
		parameter_string_t RX_BUFFER_CFG;
		parameter_string_t RX_CLK25_DIV;
		parameter_string_t RX_CLKMUX_PD;
		parameter_string_t RX_CM_SEL;
		parameter_string_t RX_CM_TRIM;
		parameter_string_t RX_DATA_WIDTH;
		parameter_string_t RX_DDI_SEL;
		parameter_string_t RX_DEBUG_CFG;
		parameter_enum_t RX_DEFER_RESET_BUF_EN;
		parameter_string_t RX_DFELPM_CFG0;
		parameter_string_t RX_DFELPM_CFG1;
		parameter_string_t RX_DFELPM_KLKH_AGC_STUP_EN;
		parameter_string_t RX_DFE_AGC_CFG0;
		parameter_string_t RX_DFE_AGC_CFG1;
		parameter_string_t RX_DFE_AGC_CFG2;
		parameter_string_t RX_DFE_AGC_OVRDEN;
		parameter_string_t RX_DFE_GAIN_CFG;
		parameter_string_t RX_DFE_H2_CFG;
		parameter_string_t RX_DFE_H3_CFG;
		parameter_string_t RX_DFE_H4_CFG;
		parameter_string_t RX_DFE_H5_CFG;
		parameter_string_t RX_DFE_H6_CFG;
		parameter_string_t RX_DFE_H7_CFG;
		parameter_string_t RX_DFE_KL_CFG;
		parameter_string_t RX_DFE_KL_LPM_KH_CFG0;
		parameter_string_t RX_DFE_KL_LPM_KH_CFG1;
		parameter_string_t RX_DFE_KL_LPM_KH_CFG2;
		parameter_string_t RX_DFE_KL_LPM_KH_OVRDEN;
		parameter_string_t RX_DFE_KL_LPM_KL_CFG0;
		parameter_string_t RX_DFE_KL_LPM_KL_CFG1;
		parameter_string_t RX_DFE_KL_LPM_KL_CFG2;
		parameter_string_t RX_DFE_KL_LPM_KL_OVRDEN;
		parameter_string_t RX_DFE_LPM_CFG;
		parameter_string_t RX_DFE_LPM_HOLD_DURING_EIDLE;
		parameter_string_t RX_DFE_ST_CFG;
		parameter_string_t RX_DFE_UT_CFG;
		parameter_string_t RX_DFE_VP_CFG;
		parameter_enum_t RX_DISPERR_SEQ_MATCH;
		parameter_string_t RX_INT_DATAWIDTH;
		parameter_string_t RX_OS_CFG;
		parameter_string_t RX_SIG_VALID_DLY;
		parameter_string_t RX_XCLK_SEL;
		parameter_string_t SAS_MAX_COM;
		parameter_string_t SAS_MIN_COM;
		parameter_string_t SATA_BURST_SEQ_LEN;
		parameter_string_t SATA_BURST_VAL;
		parameter_string_t SATA_CPLL_CFG;
		parameter_string_t SATA_EIDLE_VAL;
		parameter_string_t SATA_MAX_BURST;
		parameter_string_t SATA_MAX_INIT;
		parameter_string_t SATA_MAX_WAKE;
		parameter_string_t SATA_MIN_BURST;
		parameter_string_t SATA_MIN_INIT;
		parameter_string_t SATA_MIN_WAKE;
		parameter_enum_t SHOW_REALIGN_COMMA;
		parameter_string_t SIM_CPLLREFCLK_SEL;
		parameter_enum_t SIM_RECEIVER_DETECT_PASS;
		parameter_enum_t SIM_RESET_SPEEDUP;
		parameter_string_t SIM_TX_EIDLE_DRIVE_LEVEL;
		parameter_string_t SIM_VERSION;
		parameter_string_t TERM_RCAL_CFG;
		parameter_string_t TERM_RCAL_OVRD;
		parameter_string_t TRANS_TIME_RATE;
		parameter_string_t TST_RSV;
		parameter_enum_t TXBUF_EN;
		parameter_enum_t TXBUF_RESET_ON_RATE_CHANGE;
		parameter_string_t TXDLY_CFG;
		parameter_string_t TXDLY_LCFG;
		parameter_string_t TXDLY_TAP_CFG;
		parameter_enum_t TXGEARBOX_EN;
		parameter_string_t TXOOB_CFG;
		parameter_string_t TXOUT_DIV;
		parameter_string_t TXPCSRESET_TIME;
		parameter_string_t TXPHDLY_CFG;
		parameter_string_t TXPH_CFG;
		parameter_string_t TXPH_MONITOR_SEL;
		parameter_string_t TXPI_CFG0;
		parameter_string_t TXPI_CFG1;
		parameter_string_t TXPI_CFG2;
		parameter_string_t TXPI_CFG3;
		parameter_string_t TXPI_CFG4;
		parameter_string_t TXPI_CFG5;
		parameter_string_t TXPI_GREY_SEL;
		parameter_string_t TXPI_INVSTROBE_SEL;
		parameter_string_t TXPI_PPMCLK_SEL;
		parameter_string_t TXPI_PPM_CFG;
		parameter_string_t TXPI_SYNFREQ_PPM;
		parameter_string_t TXPMARESET_TIME;
		parameter_string_t TXSYNC_MULTILANE;
		parameter_string_t TXSYNC_OVRD;
		parameter_string_t TXSYNC_SKIP_DA;
		parameter_string_t TX_CLK25_DIV;
		parameter_string_t TX_CLKMUX_PD;
		parameter_string_t TX_DATA_WIDTH;
		parameter_string_t TX_DEEMPH0;
		parameter_string_t TX_DEEMPH1;
		parameter_string_t TX_DRIVE_MODE;
		parameter_string_t TX_EIDLE_ASSERT_DELAY;
		parameter_string_t TX_EIDLE_DEASSERT_DELAY;
		parameter_string_t TX_INT_DATAWIDTH;
		parameter_enum_t TX_LOOPBACK_DRIVE_HIZ;
		parameter_string_t TX_MAINCURSOR_SEL;
		parameter_string_t TX_MARGIN_FULL_0;
		parameter_string_t TX_MARGIN_FULL_1;
		parameter_string_t TX_MARGIN_FULL_2;
		parameter_string_t TX_MARGIN_FULL_3;
		parameter_string_t TX_MARGIN_FULL_4;
		parameter_string_t TX_MARGIN_LOW_0;
		parameter_string_t TX_MARGIN_LOW_1;
		parameter_string_t TX_MARGIN_LOW_2;
		parameter_string_t TX_MARGIN_LOW_3;
		parameter_string_t TX_MARGIN_LOW_4;
		parameter_string_t TX_QPI_STATUS_EN;
		parameter_string_t TX_RXDETECT_CFG;
		parameter_string_t TX_RXDETECT_PRECHARGE_TIME;
		parameter_string_t TX_RXDETECT_REF;
		parameter_string_t TX_XCLK_SEL;
		parameter_string_t UCODEER_CLR;
		parameter_string_t USE_PCS_CLK_PHASE_SEL;
		//Verilog Ports in definition order:
		NetFlow* CPLLFBCLKLOST; // net ID: CPLLFBCLKLOST lsb: 0  msb: 0 OUTPUT
		NetFlow* CPLLLOCK; // net ID: CPLLLOCK lsb: 0  msb: 0 OUTPUT
		NetFlow* CPLLREFCLKLOST; // net ID: CPLLREFCLKLOST lsb: 0  msb: 0 OUTPUT
		NetFlow* DMONITOROUT; // net ID: DMONITOROUT lsb: 0  msb: 0 OUTPUT
		NetFlow* DRPDO; // net ID: DRPDO lsb: 0  msb: 0 OUTPUT
		NetFlow* DRPRDY; // net ID: DRPRDY lsb: 0  msb: 0 OUTPUT
		NetFlow* EYESCANDATAERROR; // net ID: EYESCANDATAERROR lsb: 0  msb: 0 OUTPUT
		NetFlow* GTHTXN; // net ID: GTHTXN lsb: 0  msb: 0 OUTPUT
		NetFlow* GTHTXP; // net ID: GTHTXP lsb: 0  msb: 0 OUTPUT
		NetFlow* GTREFCLKMONITOR; // net ID: GTREFCLKMONITOR lsb: 0  msb: 0 OUTPUT
		NetFlow* PCSRSVDOUT; // net ID: PCSRSVDOUT lsb: 0  msb: 0 OUTPUT
		NetFlow* PHYSTATUS; // net ID: PHYSTATUS lsb: 0  msb: 0 OUTPUT
		NetFlow* RSOSINTDONE; // net ID: RSOSINTDONE lsb: 0  msb: 0 OUTPUT
		NetFlow* RXBUFSTATUS; // net ID: RXBUFSTATUS lsb: 0  msb: 0 OUTPUT
		NetFlow* RXBYTEISALIGNED; // net ID: RXBYTEISALIGNED lsb: 0  msb: 0 OUTPUT
		NetFlow* RXBYTEREALIGN; // net ID: RXBYTEREALIGN lsb: 0  msb: 0 OUTPUT
		NetFlow* RXCDRLOCK; // net ID: RXCDRLOCK lsb: 0  msb: 0 OUTPUT
		NetFlow* RXCHANBONDSEQ; // net ID: RXCHANBONDSEQ lsb: 0  msb: 0 OUTPUT
		NetFlow* RXCHANISALIGNED; // net ID: RXCHANISALIGNED lsb: 0  msb: 0 OUTPUT
		NetFlow* RXCHANREALIGN; // net ID: RXCHANREALIGN lsb: 0  msb: 0 OUTPUT
		NetFlow* RXCHARISCOMMA; // net ID: RXCHARISCOMMA lsb: 0  msb: 0 OUTPUT
		NetFlow* RXCHARISK; // net ID: RXCHARISK lsb: 0  msb: 0 OUTPUT
		NetFlow* RXCHBONDO; // net ID: RXCHBONDO lsb: 0  msb: 0 OUTPUT
		NetFlow* RXCLKCORCNT; // net ID: RXCLKCORCNT lsb: 0  msb: 0 OUTPUT
		NetFlow* RXCOMINITDET; // net ID: RXCOMINITDET lsb: 0  msb: 0 OUTPUT
		NetFlow* RXCOMMADET; // net ID: RXCOMMADET lsb: 0  msb: 0 OUTPUT
		NetFlow* RXCOMSASDET; // net ID: RXCOMSASDET lsb: 0  msb: 0 OUTPUT
		NetFlow* RXCOMWAKEDET; // net ID: RXCOMWAKEDET lsb: 0  msb: 0 OUTPUT
		NetFlow* RXDATA; // net ID: RXDATA lsb: 0  msb: 0 OUTPUT
		NetFlow* RXDATAVALID; // net ID: RXDATAVALID lsb: 0  msb: 0 OUTPUT
		NetFlow* RXDFESLIDETAPSTARTED; // net ID: RXDFESLIDETAPSTARTED lsb: 0  msb: 0 OUTPUT
		NetFlow* RXDFESLIDETAPSTROBEDONE; // net ID: RXDFESLIDETAPSTROBEDONE lsb: 0  msb: 0 OUTPUT
		NetFlow* RXDFESLIDETAPSTROBESTARTED; // net ID: RXDFESLIDETAPSTROBESTARTED lsb: 0  msb: 0 OUTPUT
		NetFlow* RXDFESTADAPTDONE; // net ID: RXDFESTADAPTDONE lsb: 0  msb: 0 OUTPUT
		NetFlow* RXDISPERR; // net ID: RXDISPERR lsb: 0  msb: 0 OUTPUT
		NetFlow* RXDLYSRESETDONE; // net ID: RXDLYSRESETDONE lsb: 0  msb: 0 OUTPUT
		NetFlow* RXELECIDLE; // net ID: RXELECIDLE lsb: 0  msb: 0 OUTPUT
		NetFlow* RXHEADER; // net ID: RXHEADER lsb: 0  msb: 0 OUTPUT
		NetFlow* RXHEADERVALID; // net ID: RXHEADERVALID lsb: 0  msb: 0 OUTPUT
		NetFlow* RXMONITOROUT; // net ID: RXMONITOROUT lsb: 0  msb: 0 OUTPUT
		NetFlow* RXNOTINTABLE; // net ID: RXNOTINTABLE lsb: 0  msb: 0 OUTPUT
		NetFlow* RXOSINTSTARTED; // net ID: RXOSINTSTARTED lsb: 0  msb: 0 OUTPUT
		NetFlow* RXOSINTSTROBEDONE; // net ID: RXOSINTSTROBEDONE lsb: 0  msb: 0 OUTPUT
		NetFlow* RXOSINTSTROBESTARTED; // net ID: RXOSINTSTROBESTARTED lsb: 0  msb: 0 OUTPUT
		NetFlow* RXOUTCLK; // net ID: RXOUTCLK lsb: 0  msb: 0 OUTPUT
		NetFlow* RXOUTCLKFABRIC; // net ID: RXOUTCLKFABRIC lsb: 0  msb: 0 OUTPUT
		NetFlow* RXOUTCLKPCS; // net ID: RXOUTCLKPCS lsb: 0  msb: 0 OUTPUT
		NetFlow* RXPHALIGNDONE; // net ID: RXPHALIGNDONE lsb: 0  msb: 0 OUTPUT
		NetFlow* RXPHMONITOR; // net ID: RXPHMONITOR lsb: 0  msb: 0 OUTPUT
		NetFlow* RXPHSLIPMONITOR; // net ID: RXPHSLIPMONITOR lsb: 0  msb: 0 OUTPUT
		NetFlow* RXPMARESETDONE; // net ID: RXPMARESETDONE lsb: 0  msb: 0 OUTPUT
		NetFlow* RXPRBSERR; // net ID: RXPRBSERR lsb: 0  msb: 0 OUTPUT
		NetFlow* RXQPISENN; // net ID: RXQPISENN lsb: 0  msb: 0 OUTPUT
		NetFlow* RXQPISENP; // net ID: RXQPISENP lsb: 0  msb: 0 OUTPUT
		NetFlow* RXRATEDONE; // net ID: RXRATEDONE lsb: 0  msb: 0 OUTPUT
		NetFlow* RXRESETDONE; // net ID: RXRESETDONE lsb: 0  msb: 0 OUTPUT
		NetFlow* RXSTARTOFSEQ; // net ID: RXSTARTOFSEQ lsb: 0  msb: 0 OUTPUT
		NetFlow* RXSTATUS; // net ID: RXSTATUS lsb: 0  msb: 0 OUTPUT
		NetFlow* RXSYNCDONE; // net ID: RXSYNCDONE lsb: 0  msb: 0 OUTPUT
		NetFlow* RXSYNCOUT; // net ID: RXSYNCOUT lsb: 0  msb: 0 OUTPUT
		NetFlow* RXVALID; // net ID: RXVALID lsb: 0  msb: 0 OUTPUT
		NetFlow* TXBUFSTATUS; // net ID: TXBUFSTATUS lsb: 0  msb: 0 OUTPUT
		NetFlow* TXCOMFINISH; // net ID: TXCOMFINISH lsb: 0  msb: 0 OUTPUT
		NetFlow* TXDLYSRESETDONE; // net ID: TXDLYSRESETDONE lsb: 0  msb: 0 OUTPUT
		NetFlow* TXGEARBOXREADY; // net ID: TXGEARBOXREADY lsb: 0  msb: 0 OUTPUT
		NetFlow* TXOUTCLK; // net ID: TXOUTCLK lsb: 0  msb: 0 OUTPUT
		NetFlow* TXOUTCLKFABRIC; // net ID: TXOUTCLKFABRIC lsb: 0  msb: 0 OUTPUT
		NetFlow* TXOUTCLKPCS; // net ID: TXOUTCLKPCS lsb: 0  msb: 0 OUTPUT
		NetFlow* TXPHALIGNDONE; // net ID: TXPHALIGNDONE lsb: 0  msb: 0 OUTPUT
		NetFlow* TXPHINITDONE; // net ID: TXPHINITDONE lsb: 0  msb: 0 OUTPUT
		NetFlow* TXPMARESETDONE; // net ID: TXPMARESETDONE lsb: 0  msb: 0 OUTPUT
		NetFlow* TXQPISENN; // net ID: TXQPISENN lsb: 0  msb: 0 OUTPUT
		NetFlow* TXQPISENP; // net ID: TXQPISENP lsb: 0  msb: 0 OUTPUT
		NetFlow* TXRATEDONE; // net ID: TXRATEDONE lsb: 0  msb: 0 OUTPUT
		NetFlow* TXRESETDONE; // net ID: TXRESETDONE lsb: 0  msb: 0 OUTPUT
		NetFlow* TXSYNCDONE; // net ID: TXSYNCDONE lsb: 0  msb: 0 OUTPUT
		NetFlow* TXSYNCOUT; // net ID: TXSYNCOUT lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGRESET; // net ID: CFGRESET lsb: 0  msb: 0 INPUT
		NetFlow* CLKRSVD0; // net ID: CLKRSVD0 lsb: 0  msb: 0 INPUT
		NetFlow* CLKRSVD1; // net ID: CLKRSVD1 lsb: 0  msb: 0 INPUT
		NetFlow* CPLLLOCKDETCLK; // net ID: CPLLLOCKDETCLK lsb: 0  msb: 0 INPUT
		NetFlow* CPLLLOCKEN; // net ID: CPLLLOCKEN lsb: 0  msb: 0 INPUT
		NetFlow* CPLLPD; // net ID: CPLLPD lsb: 0  msb: 0 INPUT
		NetFlow* CPLLREFCLKSEL; // net ID: CPLLREFCLKSEL lsb: 0  msb: 2 INPUT
		NetFlow* CPLLRESET; // net ID: CPLLRESET lsb: 0  msb: 0 INPUT
		NetFlow* DMONFIFORESET; // net ID: DMONFIFORESET lsb: 0  msb: 0 INPUT
		NetFlow* DMONITORCLK; // net ID: DMONITORCLK lsb: 0  msb: 0 INPUT
		NetFlow* DRPADDR; // net ID: DRPADDR lsb: 0  msb: 8 INPUT
		NetFlow* DRPCLK; // net ID: DRPCLK lsb: 0  msb: 0 INPUT
		NetFlow* DRPDI; // net ID: DRPDI lsb: 0  msb: 15 INPUT
		NetFlow* DRPEN; // net ID: DRPEN lsb: 0  msb: 0 INPUT
		NetFlow* DRPWE; // net ID: DRPWE lsb: 0  msb: 0 INPUT
		NetFlow* EYESCANMODE; // net ID: EYESCANMODE lsb: 0  msb: 0 INPUT
		NetFlow* EYESCANRESET; // net ID: EYESCANRESET lsb: 0  msb: 0 INPUT
		NetFlow* EYESCANTRIGGER; // net ID: EYESCANTRIGGER lsb: 0  msb: 0 INPUT
		NetFlow* GTGREFCLK; // net ID: GTGREFCLK lsb: 0  msb: 0 INPUT
		NetFlow* GTHRXN; // net ID: GTHRXN lsb: 0  msb: 0 INPUT
		NetFlow* GTHRXP; // net ID: GTHRXP lsb: 0  msb: 0 INPUT
		NetFlow* GTNORTHREFCLK0; // net ID: GTNORTHREFCLK0 lsb: 0  msb: 0 INPUT
		NetFlow* GTNORTHREFCLK1; // net ID: GTNORTHREFCLK1 lsb: 0  msb: 0 INPUT
		NetFlow* GTREFCLK0; // net ID: GTREFCLK0 lsb: 0  msb: 0 INPUT
		NetFlow* GTREFCLK1; // net ID: GTREFCLK1 lsb: 0  msb: 0 INPUT
		NetFlow* GTRESETSEL; // net ID: GTRESETSEL lsb: 0  msb: 0 INPUT
		NetFlow* GTRSVD; // net ID: GTRSVD lsb: 0  msb: 15 INPUT
		NetFlow* GTRXRESET; // net ID: GTRXRESET lsb: 0  msb: 0 INPUT
		NetFlow* GTSOUTHREFCLK0; // net ID: GTSOUTHREFCLK0 lsb: 0  msb: 0 INPUT
		NetFlow* GTSOUTHREFCLK1; // net ID: GTSOUTHREFCLK1 lsb: 0  msb: 0 INPUT
		NetFlow* GTTXRESET; // net ID: GTTXRESET lsb: 0  msb: 0 INPUT
		NetFlow* LOOPBACK; // net ID: LOOPBACK lsb: 0  msb: 2 INPUT
		NetFlow* PCSRSVDIN; // net ID: PCSRSVDIN lsb: 0  msb: 15 INPUT
		NetFlow* PCSRSVDIN2; // net ID: PCSRSVDIN2 lsb: 0  msb: 4 INPUT
		NetFlow* PMARSVDIN; // net ID: PMARSVDIN lsb: 0  msb: 4 INPUT
		NetFlow* QPLLCLK; // net ID: QPLLCLK lsb: 0  msb: 0 INPUT
		NetFlow* QPLLREFCLK; // net ID: QPLLREFCLK lsb: 0  msb: 0 INPUT
		NetFlow* RESETOVRD; // net ID: RESETOVRD lsb: 0  msb: 0 INPUT
		NetFlow* RX8B10BEN; // net ID: RX8B10BEN lsb: 0  msb: 0 INPUT
		NetFlow* RXADAPTSELTEST; // net ID: RXADAPTSELTEST lsb: 0  msb: 13 INPUT
		NetFlow* RXBUFRESET; // net ID: RXBUFRESET lsb: 0  msb: 0 INPUT
		NetFlow* RXCDRFREQRESET; // net ID: RXCDRFREQRESET lsb: 0  msb: 0 INPUT
		NetFlow* RXCDRHOLD; // net ID: RXCDRHOLD lsb: 0  msb: 0 INPUT
		NetFlow* RXCDROVRDEN; // net ID: RXCDROVRDEN lsb: 0  msb: 0 INPUT
		NetFlow* RXCDRRESET; // net ID: RXCDRRESET lsb: 0  msb: 0 INPUT
		NetFlow* RXCDRRESETRSV; // net ID: RXCDRRESETRSV lsb: 0  msb: 0 INPUT
		NetFlow* RXCHBONDEN; // net ID: RXCHBONDEN lsb: 0  msb: 0 INPUT
		NetFlow* RXCHBONDI; // net ID: RXCHBONDI lsb: 0  msb: 4 INPUT
		NetFlow* RXCHBONDLEVEL; // net ID: RXCHBONDLEVEL lsb: 0  msb: 2 INPUT
		NetFlow* RXCHBONDMASTER; // net ID: RXCHBONDMASTER lsb: 0  msb: 0 INPUT
		NetFlow* RXCHBONDSLAVE; // net ID: RXCHBONDSLAVE lsb: 0  msb: 0 INPUT
		NetFlow* RXCOMMADETEN; // net ID: RXCOMMADETEN lsb: 0  msb: 0 INPUT
		NetFlow* RXDDIEN; // net ID: RXDDIEN lsb: 0  msb: 0 INPUT
		NetFlow* RXDFEAGCHOLD; // net ID: RXDFEAGCHOLD lsb: 0  msb: 0 INPUT
		NetFlow* RXDFEAGCOVRDEN; // net ID: RXDFEAGCOVRDEN lsb: 0  msb: 0 INPUT
		NetFlow* RXDFEAGCTRL; // net ID: RXDFEAGCTRL lsb: 0  msb: 4 INPUT
		NetFlow* RXDFECM1EN; // net ID: RXDFECM1EN lsb: 0  msb: 0 INPUT
		NetFlow* RXDFELFHOLD; // net ID: RXDFELFHOLD lsb: 0  msb: 0 INPUT
		NetFlow* RXDFELFOVRDEN; // net ID: RXDFELFOVRDEN lsb: 0  msb: 0 INPUT
		NetFlow* RXDFELPMRESET; // net ID: RXDFELPMRESET lsb: 0  msb: 0 INPUT
		NetFlow* RXDFESLIDETAP; // net ID: RXDFESLIDETAP lsb: 0  msb: 4 INPUT
		NetFlow* RXDFESLIDETAPADAPTEN; // net ID: RXDFESLIDETAPADAPTEN lsb: 0  msb: 0 INPUT
		NetFlow* RXDFESLIDETAPHOLD; // net ID: RXDFESLIDETAPHOLD lsb: 0  msb: 0 INPUT
		NetFlow* RXDFESLIDETAPID; // net ID: RXDFESLIDETAPID lsb: 0  msb: 5 INPUT
		NetFlow* RXDFESLIDETAPINITOVRDEN; // net ID: RXDFESLIDETAPINITOVRDEN lsb: 0  msb: 0 INPUT
		NetFlow* RXDFESLIDETAPONLYADAPTEN; // net ID: RXDFESLIDETAPONLYADAPTEN lsb: 0  msb: 0 INPUT
		NetFlow* RXDFESLIDETAPOVRDEN; // net ID: RXDFESLIDETAPOVRDEN lsb: 0  msb: 0 INPUT
		NetFlow* RXDFESLIDETAPSTROBE; // net ID: RXDFESLIDETAPSTROBE lsb: 0  msb: 0 INPUT
		NetFlow* RXDFETAP2HOLD; // net ID: RXDFETAP2HOLD lsb: 0  msb: 0 INPUT
		NetFlow* RXDFETAP2OVRDEN; // net ID: RXDFETAP2OVRDEN lsb: 0  msb: 0 INPUT
		NetFlow* RXDFETAP3HOLD; // net ID: RXDFETAP3HOLD lsb: 0  msb: 0 INPUT
		NetFlow* RXDFETAP3OVRDEN; // net ID: RXDFETAP3OVRDEN lsb: 0  msb: 0 INPUT
		NetFlow* RXDFETAP4HOLD; // net ID: RXDFETAP4HOLD lsb: 0  msb: 0 INPUT
		NetFlow* RXDFETAP4OVRDEN; // net ID: RXDFETAP4OVRDEN lsb: 0  msb: 0 INPUT
		NetFlow* RXDFETAP5HOLD; // net ID: RXDFETAP5HOLD lsb: 0  msb: 0 INPUT
		NetFlow* RXDFETAP5OVRDEN; // net ID: RXDFETAP5OVRDEN lsb: 0  msb: 0 INPUT
		NetFlow* RXDFETAP6HOLD; // net ID: RXDFETAP6HOLD lsb: 0  msb: 0 INPUT
		NetFlow* RXDFETAP6OVRDEN; // net ID: RXDFETAP6OVRDEN lsb: 0  msb: 0 INPUT
		NetFlow* RXDFETAP7HOLD; // net ID: RXDFETAP7HOLD lsb: 0  msb: 0 INPUT
		NetFlow* RXDFETAP7OVRDEN; // net ID: RXDFETAP7OVRDEN lsb: 0  msb: 0 INPUT
		NetFlow* RXDFEUTHOLD; // net ID: RXDFEUTHOLD lsb: 0  msb: 0 INPUT
		NetFlow* RXDFEUTOVRDEN; // net ID: RXDFEUTOVRDEN lsb: 0  msb: 0 INPUT
		NetFlow* RXDFEVPHOLD; // net ID: RXDFEVPHOLD lsb: 0  msb: 0 INPUT
		NetFlow* RXDFEVPOVRDEN; // net ID: RXDFEVPOVRDEN lsb: 0  msb: 0 INPUT
		NetFlow* RXDFEVSEN; // net ID: RXDFEVSEN lsb: 0  msb: 0 INPUT
		NetFlow* RXDFEXYDEN; // net ID: RXDFEXYDEN lsb: 0  msb: 0 INPUT
		NetFlow* RXDLYBYPASS; // net ID: RXDLYBYPASS lsb: 0  msb: 0 INPUT
		NetFlow* RXDLYEN; // net ID: RXDLYEN lsb: 0  msb: 0 INPUT
		NetFlow* RXDLYOVRDEN; // net ID: RXDLYOVRDEN lsb: 0  msb: 0 INPUT
		NetFlow* RXDLYSRESET; // net ID: RXDLYSRESET lsb: 0  msb: 0 INPUT
		NetFlow* RXELECIDLEMODE; // net ID: RXELECIDLEMODE lsb: 0  msb: 1 INPUT
		NetFlow* RXGEARBOXSLIP; // net ID: RXGEARBOXSLIP lsb: 0  msb: 0 INPUT
		NetFlow* RXLPMEN; // net ID: RXLPMEN lsb: 0  msb: 0 INPUT
		NetFlow* RXLPMHFHOLD; // net ID: RXLPMHFHOLD lsb: 0  msb: 0 INPUT
		NetFlow* RXLPMHFOVRDEN; // net ID: RXLPMHFOVRDEN lsb: 0  msb: 0 INPUT
		NetFlow* RXLPMLFHOLD; // net ID: RXLPMLFHOLD lsb: 0  msb: 0 INPUT
		NetFlow* RXLPMLFKLOVRDEN; // net ID: RXLPMLFKLOVRDEN lsb: 0  msb: 0 INPUT
		NetFlow* RXMCOMMAALIGNEN; // net ID: RXMCOMMAALIGNEN lsb: 0  msb: 0 INPUT
		NetFlow* RXMONITORSEL; // net ID: RXMONITORSEL lsb: 0  msb: 1 INPUT
		NetFlow* RXOOBRESET; // net ID: RXOOBRESET lsb: 0  msb: 0 INPUT
		NetFlow* RXOSCALRESET; // net ID: RXOSCALRESET lsb: 0  msb: 0 INPUT
		NetFlow* RXOSHOLD; // net ID: RXOSHOLD lsb: 0  msb: 0 INPUT
		NetFlow* RXOSINTCFG; // net ID: RXOSINTCFG lsb: 0  msb: 3 INPUT
		NetFlow* RXOSINTEN; // net ID: RXOSINTEN lsb: 0  msb: 0 INPUT
		NetFlow* RXOSINTHOLD; // net ID: RXOSINTHOLD lsb: 0  msb: 0 INPUT
		NetFlow* RXOSINTID0; // net ID: RXOSINTID0 lsb: 0  msb: 3 INPUT
		NetFlow* RXOSINTNTRLEN; // net ID: RXOSINTNTRLEN lsb: 0  msb: 0 INPUT
		NetFlow* RXOSINTOVRDEN; // net ID: RXOSINTOVRDEN lsb: 0  msb: 0 INPUT
		NetFlow* RXOSINTSTROBE; // net ID: RXOSINTSTROBE lsb: 0  msb: 0 INPUT
		NetFlow* RXOSINTTESTOVRDEN; // net ID: RXOSINTTESTOVRDEN lsb: 0  msb: 0 INPUT
		NetFlow* RXOSOVRDEN; // net ID: RXOSOVRDEN lsb: 0  msb: 0 INPUT
		NetFlow* RXOUTCLKSEL; // net ID: RXOUTCLKSEL lsb: 0  msb: 2 INPUT
		NetFlow* RXPCOMMAALIGNEN; // net ID: RXPCOMMAALIGNEN lsb: 0  msb: 0 INPUT
		NetFlow* RXPCSRESET; // net ID: RXPCSRESET lsb: 0  msb: 0 INPUT
		NetFlow* RXPD; // net ID: RXPD lsb: 0  msb: 1 INPUT
		NetFlow* RXPHALIGN; // net ID: RXPHALIGN lsb: 0  msb: 0 INPUT
		NetFlow* RXPHALIGNEN; // net ID: RXPHALIGNEN lsb: 0  msb: 0 INPUT
		NetFlow* RXPHDLYPD; // net ID: RXPHDLYPD lsb: 0  msb: 0 INPUT
		NetFlow* RXPHDLYRESET; // net ID: RXPHDLYRESET lsb: 0  msb: 0 INPUT
		NetFlow* RXPHOVRDEN; // net ID: RXPHOVRDEN lsb: 0  msb: 0 INPUT
		NetFlow* RXPMARESET; // net ID: RXPMARESET lsb: 0  msb: 0 INPUT
		NetFlow* RXPOLARITY; // net ID: RXPOLARITY lsb: 0  msb: 0 INPUT
		NetFlow* RXPRBSCNTRESET; // net ID: RXPRBSCNTRESET lsb: 0  msb: 0 INPUT
		NetFlow* RXPRBSSEL; // net ID: RXPRBSSEL lsb: 0  msb: 2 INPUT
		NetFlow* RXQPIEN; // net ID: RXQPIEN lsb: 0  msb: 0 INPUT
		NetFlow* RXRATE; // net ID: RXRATE lsb: 0  msb: 2 INPUT
		NetFlow* RXRATEMODE; // net ID: RXRATEMODE lsb: 0  msb: 0 INPUT
		NetFlow* RXSLIDE; // net ID: RXSLIDE lsb: 0  msb: 0 INPUT
		NetFlow* RXSYNCALLIN; // net ID: RXSYNCALLIN lsb: 0  msb: 0 INPUT
		NetFlow* RXSYNCIN; // net ID: RXSYNCIN lsb: 0  msb: 0 INPUT
		NetFlow* RXSYNCMODE; // net ID: RXSYNCMODE lsb: 0  msb: 0 INPUT
		NetFlow* RXSYSCLKSEL; // net ID: RXSYSCLKSEL lsb: 0  msb: 1 INPUT
		NetFlow* RXUSERRDY; // net ID: RXUSERRDY lsb: 0  msb: 0 INPUT
		NetFlow* RXUSRCLK; // net ID: RXUSRCLK lsb: 0  msb: 0 INPUT
		NetFlow* RXUSRCLK2; // net ID: RXUSRCLK2 lsb: 0  msb: 0 INPUT
		NetFlow* SETERRSTATUS; // net ID: SETERRSTATUS lsb: 0  msb: 0 INPUT
		NetFlow* SIGVALIDCLK; // net ID: SIGVALIDCLK lsb: 0  msb: 0 INPUT
		NetFlow* TSTIN; // net ID: TSTIN lsb: 0  msb: 19 INPUT
		NetFlow* TX8B10BBYPASS; // net ID: TX8B10BBYPASS lsb: 0  msb: 7 INPUT
		NetFlow* TX8B10BEN; // net ID: TX8B10BEN lsb: 0  msb: 0 INPUT
		NetFlow* TXBUFDIFFCTRL; // net ID: TXBUFDIFFCTRL lsb: 0  msb: 2 INPUT
		NetFlow* TXCHARDISPMODE; // net ID: TXCHARDISPMODE lsb: 0  msb: 7 INPUT
		NetFlow* TXCHARDISPVAL; // net ID: TXCHARDISPVAL lsb: 0  msb: 7 INPUT
		NetFlow* TXCHARISK; // net ID: TXCHARISK lsb: 0  msb: 7 INPUT
		NetFlow* TXCOMINIT; // net ID: TXCOMINIT lsb: 0  msb: 0 INPUT
		NetFlow* TXCOMSAS; // net ID: TXCOMSAS lsb: 0  msb: 0 INPUT
		NetFlow* TXCOMWAKE; // net ID: TXCOMWAKE lsb: 0  msb: 0 INPUT
		NetFlow* TXDATA; // net ID: TXDATA lsb: 0  msb: 63 INPUT
		NetFlow* TXDEEMPH; // net ID: TXDEEMPH lsb: 0  msb: 0 INPUT
		NetFlow* TXDETECTRX; // net ID: TXDETECTRX lsb: 0  msb: 0 INPUT
		NetFlow* TXDIFFCTRL; // net ID: TXDIFFCTRL lsb: 0  msb: 3 INPUT
		NetFlow* TXDIFFPD; // net ID: TXDIFFPD lsb: 0  msb: 0 INPUT
		NetFlow* TXDLYBYPASS; // net ID: TXDLYBYPASS lsb: 0  msb: 0 INPUT
		NetFlow* TXDLYEN; // net ID: TXDLYEN lsb: 0  msb: 0 INPUT
		NetFlow* TXDLYHOLD; // net ID: TXDLYHOLD lsb: 0  msb: 0 INPUT
		NetFlow* TXDLYOVRDEN; // net ID: TXDLYOVRDEN lsb: 0  msb: 0 INPUT
		NetFlow* TXDLYSRESET; // net ID: TXDLYSRESET lsb: 0  msb: 0 INPUT
		NetFlow* TXDLYUPDOWN; // net ID: TXDLYUPDOWN lsb: 0  msb: 0 INPUT
		NetFlow* TXELECIDLE; // net ID: TXELECIDLE lsb: 0  msb: 0 INPUT
		NetFlow* TXHEADER; // net ID: TXHEADER lsb: 0  msb: 2 INPUT
		NetFlow* TXINHIBIT; // net ID: TXINHIBIT lsb: 0  msb: 0 INPUT
		NetFlow* TXMAINCURSOR; // net ID: TXMAINCURSOR lsb: 0  msb: 6 INPUT
		NetFlow* TXMARGIN; // net ID: TXMARGIN lsb: 0  msb: 2 INPUT
		NetFlow* TXOUTCLKSEL; // net ID: TXOUTCLKSEL lsb: 0  msb: 2 INPUT
		NetFlow* TXPCSRESET; // net ID: TXPCSRESET lsb: 0  msb: 0 INPUT
		NetFlow* TXPD; // net ID: TXPD lsb: 0  msb: 1 INPUT
		NetFlow* TXPDELECIDLEMODE; // net ID: TXPDELECIDLEMODE lsb: 0  msb: 0 INPUT
		NetFlow* TXPHALIGN; // net ID: TXPHALIGN lsb: 0  msb: 0 INPUT
		NetFlow* TXPHALIGNEN; // net ID: TXPHALIGNEN lsb: 0  msb: 0 INPUT
		NetFlow* TXPHDLYPD; // net ID: TXPHDLYPD lsb: 0  msb: 0 INPUT
		NetFlow* TXPHDLYRESET; // net ID: TXPHDLYRESET lsb: 0  msb: 0 INPUT
		NetFlow* TXPHDLYTSTCLK; // net ID: TXPHDLYTSTCLK lsb: 0  msb: 0 INPUT
		NetFlow* TXPHINIT; // net ID: TXPHINIT lsb: 0  msb: 0 INPUT
		NetFlow* TXPHOVRDEN; // net ID: TXPHOVRDEN lsb: 0  msb: 0 INPUT
		NetFlow* TXPIPPMEN; // net ID: TXPIPPMEN lsb: 0  msb: 0 INPUT
		NetFlow* TXPIPPMOVRDEN; // net ID: TXPIPPMOVRDEN lsb: 0  msb: 0 INPUT
		NetFlow* TXPIPPMPD; // net ID: TXPIPPMPD lsb: 0  msb: 0 INPUT
		NetFlow* TXPIPPMSEL; // net ID: TXPIPPMSEL lsb: 0  msb: 0 INPUT
		NetFlow* TXPIPPMSTEPSIZE; // net ID: TXPIPPMSTEPSIZE lsb: 0  msb: 4 INPUT
		NetFlow* TXPISOPD; // net ID: TXPISOPD lsb: 0  msb: 0 INPUT
		NetFlow* TXPMARESET; // net ID: TXPMARESET lsb: 0  msb: 0 INPUT
		NetFlow* TXPOLARITY; // net ID: TXPOLARITY lsb: 0  msb: 0 INPUT
		NetFlow* TXPOSTCURSOR; // net ID: TXPOSTCURSOR lsb: 0  msb: 4 INPUT
		NetFlow* TXPOSTCURSORINV; // net ID: TXPOSTCURSORINV lsb: 0  msb: 0 INPUT
		NetFlow* TXPRBSFORCEERR; // net ID: TXPRBSFORCEERR lsb: 0  msb: 0 INPUT
		NetFlow* TXPRBSSEL; // net ID: TXPRBSSEL lsb: 0  msb: 2 INPUT
		NetFlow* TXPRECURSOR; // net ID: TXPRECURSOR lsb: 0  msb: 4 INPUT
		NetFlow* TXPRECURSORINV; // net ID: TXPRECURSORINV lsb: 0  msb: 0 INPUT
		NetFlow* TXQPIBIASEN; // net ID: TXQPIBIASEN lsb: 0  msb: 0 INPUT
		NetFlow* TXQPISTRONGPDOWN; // net ID: TXQPISTRONGPDOWN lsb: 0  msb: 0 INPUT
		NetFlow* TXQPIWEAKPUP; // net ID: TXQPIWEAKPUP lsb: 0  msb: 0 INPUT
		NetFlow* TXRATE; // net ID: TXRATE lsb: 0  msb: 2 INPUT
		NetFlow* TXRATEMODE; // net ID: TXRATEMODE lsb: 0  msb: 0 INPUT
		NetFlow* TXSEQUENCE; // net ID: TXSEQUENCE lsb: 0  msb: 6 INPUT
		NetFlow* TXSTARTSEQ; // net ID: TXSTARTSEQ lsb: 0  msb: 0 INPUT
		NetFlow* TXSWING; // net ID: TXSWING lsb: 0  msb: 0 INPUT
		NetFlow* TXSYNCALLIN; // net ID: TXSYNCALLIN lsb: 0  msb: 0 INPUT
		NetFlow* TXSYNCIN; // net ID: TXSYNCIN lsb: 0  msb: 0 INPUT
		NetFlow* TXSYNCMODE; // net ID: TXSYNCMODE lsb: 0  msb: 0 INPUT
		NetFlow* TXSYSCLKSEL; // net ID: TXSYSCLKSEL lsb: 0  msb: 1 INPUT
		NetFlow* TXUSERRDY; // net ID: TXUSERRDY lsb: 0  msb: 0 INPUT
		NetFlow* TXUSRCLK; // net ID: TXUSRCLK lsb: 0  msb: 0 INPUT
		NetFlow* TXUSRCLK2; // net ID: TXUSRCLK2 lsb: 0  msb: 0 INPUT
		
		X_GTHE2_CHANNEL(
			const char * name,
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_string_t ACJTAG_DEBUG_MODE, // Default: 1'b0
			parameter_string_t ACJTAG_MODE, // Default: 1'b0
			parameter_string_t ACJTAG_RESET, // Default: 1'b0
			parameter_string_t ADAPT_CFG0, // Default: 20'h00C10
			parameter_enum_t ALIGN_COMMA_DOUBLE, // Default: "FALSE"
			parameter_string_t ALIGN_COMMA_ENABLE, // Default: 10'b0001111111
			parameter_string_t ALIGN_COMMA_WORD, // Default: 1
			parameter_enum_t ALIGN_MCOMMA_DET, // Default: "TRUE"
			parameter_string_t ALIGN_MCOMMA_VALUE, // Default: 10'b1010000011
			parameter_enum_t ALIGN_PCOMMA_DET, // Default: "TRUE"
			parameter_string_t ALIGN_PCOMMA_VALUE, // Default: 10'b0101111100
			parameter_string_t A_RXOSCALRESET, // Default: 1'b0
			parameter_string_t CBCC_DATA_SOURCE_SEL, // Default: "DECODED"
			parameter_string_t CFOK_CFG, // Default: 42'h24800040E80
			parameter_string_t CFOK_CFG2, // Default: 6'b100000
			parameter_string_t CFOK_CFG3, // Default: 6'b100000
			parameter_enum_t CHAN_BOND_KEEP_ALIGN, // Default: "FALSE"
			parameter_string_t CHAN_BOND_MAX_SKEW, // Default: 7
			parameter_string_t CHAN_BOND_SEQ_1_1, // Default: 10'b0101111100
			parameter_string_t CHAN_BOND_SEQ_1_2, // Default: 10'b0000000000
			parameter_string_t CHAN_BOND_SEQ_1_3, // Default: 10'b0000000000
			parameter_string_t CHAN_BOND_SEQ_1_4, // Default: 10'b0000000000
			parameter_string_t CHAN_BOND_SEQ_1_ENABLE, // Default: 4'b1111
			parameter_string_t CHAN_BOND_SEQ_2_1, // Default: 10'b0100000000
			parameter_string_t CHAN_BOND_SEQ_2_2, // Default: 10'b0100000000
			parameter_string_t CHAN_BOND_SEQ_2_3, // Default: 10'b0100000000
			parameter_string_t CHAN_BOND_SEQ_2_4, // Default: 10'b0100000000
			parameter_string_t CHAN_BOND_SEQ_2_ENABLE, // Default: 4'b1111
			parameter_enum_t CHAN_BOND_SEQ_2_USE, // Default: "FALSE"
			parameter_string_t CHAN_BOND_SEQ_LEN, // Default: 1
			parameter_enum_t CLK_CORRECT_USE, // Default: "TRUE"
			parameter_enum_t CLK_COR_KEEP_IDLE, // Default: "FALSE"
			parameter_string_t CLK_COR_MAX_LAT, // Default: 20
			parameter_string_t CLK_COR_MIN_LAT, // Default: 18
			parameter_enum_t CLK_COR_PRECEDENCE, // Default: "TRUE"
			parameter_string_t CLK_COR_REPEAT_WAIT, // Default: 0
			parameter_string_t CLK_COR_SEQ_1_1, // Default: 10'b0100011100
			parameter_string_t CLK_COR_SEQ_1_2, // Default: 10'b0000000000
			parameter_string_t CLK_COR_SEQ_1_3, // Default: 10'b0000000000
			parameter_string_t CLK_COR_SEQ_1_4, // Default: 10'b0000000000
			parameter_string_t CLK_COR_SEQ_1_ENABLE, // Default: 4'b1111
			parameter_string_t CLK_COR_SEQ_2_1, // Default: 10'b0100000000
			parameter_string_t CLK_COR_SEQ_2_2, // Default: 10'b0100000000
			parameter_string_t CLK_COR_SEQ_2_3, // Default: 10'b0100000000
			parameter_string_t CLK_COR_SEQ_2_4, // Default: 10'b0100000000
			parameter_string_t CLK_COR_SEQ_2_ENABLE, // Default: 4'b1111
			parameter_enum_t CLK_COR_SEQ_2_USE, // Default: "FALSE"
			parameter_string_t CLK_COR_SEQ_LEN, // Default: 1
			parameter_string_t CPLL_CFG, // Default: 29'h00BC07DC
			parameter_string_t CPLL_FBDIV, // Default: 4
			parameter_string_t CPLL_FBDIV_45, // Default: 5
			parameter_string_t CPLL_INIT_CFG, // Default: 24'h00001E
			parameter_string_t CPLL_LOCK_CFG, // Default: 16'h01E8
			parameter_string_t CPLL_REFCLK_DIV, // Default: 1
			parameter_enum_t DEC_MCOMMA_DETECT, // Default: "TRUE"
			parameter_enum_t DEC_PCOMMA_DETECT, // Default: "TRUE"
			parameter_enum_t DEC_VALID_COMMA_ONLY, // Default: "TRUE"
			parameter_string_t DMONITOR_CFG, // Default: 24'h000A00
			parameter_string_t ES_CLK_PHASE_SEL, // Default: 1'b0
			parameter_string_t ES_CONTROL, // Default: 6'b000000
			parameter_enum_t ES_ERRDET_EN, // Default: "FALSE"
			parameter_enum_t ES_EYE_SCAN_EN, // Default: "TRUE"
			parameter_string_t ES_HORZ_OFFSET, // Default: 12'h000
			parameter_string_t ES_PMA_CFG, // Default: 10'b0000000000
			parameter_string_t ES_PRESCALE, // Default: 5'b00000
			parameter_string_t ES_QUALIFIER, // Default: 80'h00000000000000000000
			parameter_string_t ES_QUAL_MASK, // Default: 80'h00000000000000000000
			parameter_string_t ES_SDATA_MASK, // Default: 80'h00000000000000000000
			parameter_string_t ES_VERT_OFFSET, // Default: 9'b000000000
			parameter_string_t FTS_DESKEW_SEQ_ENABLE, // Default: 4'b1111
			parameter_string_t FTS_LANE_DESKEW_CFG, // Default: 4'b1111
			parameter_enum_t FTS_LANE_DESKEW_EN, // Default: "FALSE"
			parameter_string_t GEARBOX_MODE, // Default: 3'b000
			parameter_string_t LOOPBACK_CFG, // Default: 1'b0
			parameter_string_t OUTREFCLK_SEL_INV, // Default: 2'b11
			parameter_enum_t PCS_PCIE_EN, // Default: "FALSE"
			parameter_string_t PCS_RSVD_ATTR, // Default: 48'h000000000000
			parameter_string_t PD_TRANS_TIME_FROM_P2, // Default: 12'h03C
			parameter_string_t PD_TRANS_TIME_NONE_P2, // Default: 8'h19
			parameter_string_t PD_TRANS_TIME_TO_P2, // Default: 8'h64
			parameter_string_t PMA_RSV, // Default: 32'b00000000000000000000000010000000
			parameter_string_t PMA_RSV2, // Default: 32'b00011100000000000000000000001010
			parameter_string_t PMA_RSV3, // Default: 2'b00
			parameter_string_t PMA_RSV4, // Default: 15'b000000000001000
			parameter_string_t PMA_RSV5, // Default: 4'b0000
			parameter_string_t RESET_POWERSAVE_DISABLE, // Default: 1'b0
			parameter_string_t RXBUFRESET_TIME, // Default: 5'b00001
			parameter_string_t RXBUF_ADDR_MODE, // Default: "FULL"
			parameter_string_t RXBUF_EIDLE_HI_CNT, // Default: 4'b1000
			parameter_string_t RXBUF_EIDLE_LO_CNT, // Default: 4'b0000
			parameter_enum_t RXBUF_EN, // Default: "TRUE"
			parameter_enum_t RXBUF_RESET_ON_CB_CHANGE, // Default: "TRUE"
			parameter_enum_t RXBUF_RESET_ON_COMMAALIGN, // Default: "FALSE"
			parameter_enum_t RXBUF_RESET_ON_EIDLE, // Default: "FALSE"
			parameter_enum_t RXBUF_RESET_ON_RATE_CHANGE, // Default: "TRUE"
			parameter_string_t RXBUF_THRESH_OVFLW, // Default: 61
			parameter_enum_t RXBUF_THRESH_OVRD, // Default: "FALSE"
			parameter_string_t RXBUF_THRESH_UNDFLW, // Default: 4
			parameter_string_t RXCDRFREQRESET_TIME, // Default: 5'b00001
			parameter_string_t RXCDRPHRESET_TIME, // Default: 5'b00001
			parameter_string_t RXCDR_CFG, // Default: 83'h0002007FE2000C208001A
			parameter_string_t RXCDR_FR_RESET_ON_EIDLE, // Default: 1'b0
			parameter_string_t RXCDR_HOLD_DURING_EIDLE, // Default: 1'b0
			parameter_string_t RXCDR_LOCK_CFG, // Default: 6'b001001
			parameter_string_t RXCDR_PH_RESET_ON_EIDLE, // Default: 1'b0
			parameter_string_t RXDFELPMRESET_TIME, // Default: 7'b0001111
			parameter_string_t RXDLY_CFG, // Default: 16'h001F
			parameter_string_t RXDLY_LCFG, // Default: 9'h030
			parameter_string_t RXDLY_TAP_CFG, // Default: 16'h0000
			parameter_enum_t RXGEARBOX_EN, // Default: "FALSE"
			parameter_string_t RXISCANRESET_TIME, // Default: 5'b00001
			parameter_string_t RXLPM_HF_CFG, // Default: 14'b00001000000000
			parameter_string_t RXLPM_LF_CFG, // Default: 18'b001001000000000000
			parameter_string_t RXOOB_CFG, // Default: 7'b0000110
			parameter_string_t RXOOB_CLK_CFG, // Default: "PMA"
			parameter_string_t RXOSCALRESET_TIME, // Default: 5'b00011
			parameter_string_t RXOSCALRESET_TIMEOUT, // Default: 5'b00000
			parameter_string_t RXOUT_DIV, // Default: 2
			parameter_string_t RXPCSRESET_TIME, // Default: 5'b00001
			parameter_string_t RXPHDLY_CFG, // Default: 24'h084020
			parameter_string_t RXPH_CFG, // Default: 24'hC00002
			parameter_string_t RXPH_MONITOR_SEL, // Default: 5'b00000
			parameter_string_t RXPI_CFG0, // Default: 2'b00
			parameter_string_t RXPI_CFG1, // Default: 2'b00
			parameter_string_t RXPI_CFG2, // Default: 2'b00
			parameter_string_t RXPI_CFG3, // Default: 2'b00
			parameter_string_t RXPI_CFG4, // Default: 1'b0
			parameter_string_t RXPI_CFG5, // Default: 1'b0
			parameter_string_t RXPI_CFG6, // Default: 3'b100
			parameter_string_t RXPMARESET_TIME, // Default: 5'b00011
			parameter_string_t RXPRBS_ERR_LOOPBACK, // Default: 1'b0
			parameter_string_t RXSLIDE_AUTO_WAIT, // Default: 7
			parameter_string_t RXSLIDE_MODE, // Default: "OFF"
			parameter_string_t RXSYNC_MULTILANE, // Default: 1'b0
			parameter_string_t RXSYNC_OVRD, // Default: 1'b0
			parameter_string_t RXSYNC_SKIP_DA, // Default: 1'b0
			parameter_string_t RX_BIAS_CFG, // Default: 24'b000011000000000000010000
			parameter_string_t RX_BUFFER_CFG, // Default: 6'b000000
			parameter_string_t RX_CLK25_DIV, // Default: 7
			parameter_string_t RX_CLKMUX_PD, // Default: 1'b1
			parameter_string_t RX_CM_SEL, // Default: 2'b11
			parameter_string_t RX_CM_TRIM, // Default: 4'b0100
			parameter_string_t RX_DATA_WIDTH, // Default: 20
			parameter_string_t RX_DDI_SEL, // Default: 6'b000000
			parameter_string_t RX_DEBUG_CFG, // Default: 14'b00000000000000
			parameter_enum_t RX_DEFER_RESET_BUF_EN, // Default: "TRUE"
			parameter_string_t RX_DFELPM_CFG0, // Default: 4'b0110
			parameter_string_t RX_DFELPM_CFG1, // Default: 1'b0
			parameter_string_t RX_DFELPM_KLKH_AGC_STUP_EN, // Default: 1'b1
			parameter_string_t RX_DFE_AGC_CFG0, // Default: 2'b00
			parameter_string_t RX_DFE_AGC_CFG1, // Default: 3'b010
			parameter_string_t RX_DFE_AGC_CFG2, // Default: 4'b0000
			parameter_string_t RX_DFE_AGC_OVRDEN, // Default: 1'b1
			parameter_string_t RX_DFE_GAIN_CFG, // Default: 23'h0020C0
			parameter_string_t RX_DFE_H2_CFG, // Default: 12'b000000000000
			parameter_string_t RX_DFE_H3_CFG, // Default: 12'b000001000000
			parameter_string_t RX_DFE_H4_CFG, // Default: 11'b00011100000
			parameter_string_t RX_DFE_H5_CFG, // Default: 11'b00011100000
			parameter_string_t RX_DFE_H6_CFG, // Default: 11'b00000100000
			parameter_string_t RX_DFE_H7_CFG, // Default: 11'b00000100000
			parameter_string_t RX_DFE_KL_CFG, // Default: 33'b000000000000000000000001100010000
			parameter_string_t RX_DFE_KL_LPM_KH_CFG0, // Default: 2'b01
			parameter_string_t RX_DFE_KL_LPM_KH_CFG1, // Default: 3'b010
			parameter_string_t RX_DFE_KL_LPM_KH_CFG2, // Default: 4'b0010
			parameter_string_t RX_DFE_KL_LPM_KH_OVRDEN, // Default: 1'b1
			parameter_string_t RX_DFE_KL_LPM_KL_CFG0, // Default: 2'b10
			parameter_string_t RX_DFE_KL_LPM_KL_CFG1, // Default: 3'b010
			parameter_string_t RX_DFE_KL_LPM_KL_CFG2, // Default: 4'b0010
			parameter_string_t RX_DFE_KL_LPM_KL_OVRDEN, // Default: 1'b1
			parameter_string_t RX_DFE_LPM_CFG, // Default: 16'h0080
			parameter_string_t RX_DFE_LPM_HOLD_DURING_EIDLE, // Default: 1'b0
			parameter_string_t RX_DFE_ST_CFG, // Default: 54'h00E100000C003F
			parameter_string_t RX_DFE_UT_CFG, // Default: 17'b00011100000000000
			parameter_string_t RX_DFE_VP_CFG, // Default: 17'b00011101010100011
			parameter_enum_t RX_DISPERR_SEQ_MATCH, // Default: "TRUE"
			parameter_string_t RX_INT_DATAWIDTH, // Default: 0
			parameter_string_t RX_OS_CFG, // Default: 13'b0000010000000
			parameter_string_t RX_SIG_VALID_DLY, // Default: 10
			parameter_string_t RX_XCLK_SEL, // Default: "RXREC"
			parameter_string_t SAS_MAX_COM, // Default: 64
			parameter_string_t SAS_MIN_COM, // Default: 36
			parameter_string_t SATA_BURST_SEQ_LEN, // Default: 4'b1111
			parameter_string_t SATA_BURST_VAL, // Default: 3'b100
			parameter_string_t SATA_CPLL_CFG, // Default: "VCO_3000MHZ"
			parameter_string_t SATA_EIDLE_VAL, // Default: 3'b100
			parameter_string_t SATA_MAX_BURST, // Default: 8
			parameter_string_t SATA_MAX_INIT, // Default: 21
			parameter_string_t SATA_MAX_WAKE, // Default: 7
			parameter_string_t SATA_MIN_BURST, // Default: 4
			parameter_string_t SATA_MIN_INIT, // Default: 12
			parameter_string_t SATA_MIN_WAKE, // Default: 4
			parameter_enum_t SHOW_REALIGN_COMMA, // Default: "TRUE"
			parameter_string_t SIM_CPLLREFCLK_SEL, // Default: 3'b001
			parameter_enum_t SIM_RECEIVER_DETECT_PASS, // Default: "TRUE"
			parameter_enum_t SIM_RESET_SPEEDUP, // Default: "TRUE"
			parameter_string_t SIM_TX_EIDLE_DRIVE_LEVEL, // Default: "X"
			parameter_string_t SIM_VERSION, // Default: "1.1"
			parameter_string_t TERM_RCAL_CFG, // Default: 15'b100001000010000
			parameter_string_t TERM_RCAL_OVRD, // Default: 3'b000
			parameter_string_t TRANS_TIME_RATE, // Default: 8'h0E
			parameter_string_t TST_RSV, // Default: 32'h00000000
			parameter_enum_t TXBUF_EN, // Default: "TRUE"
			parameter_enum_t TXBUF_RESET_ON_RATE_CHANGE, // Default: "FALSE"
			parameter_string_t TXDLY_CFG, // Default: 16'h001F
			parameter_string_t TXDLY_LCFG, // Default: 9'h030
			parameter_string_t TXDLY_TAP_CFG, // Default: 16'h0000
			parameter_enum_t TXGEARBOX_EN, // Default: "FALSE"
			parameter_string_t TXOOB_CFG, // Default: 1'b0
			parameter_string_t TXOUT_DIV, // Default: 2
			parameter_string_t TXPCSRESET_TIME, // Default: 5'b00001
			parameter_string_t TXPHDLY_CFG, // Default: 24'h084020
			parameter_string_t TXPH_CFG, // Default: 16'h0780
			parameter_string_t TXPH_MONITOR_SEL, // Default: 5'b00000
			parameter_string_t TXPI_CFG0, // Default: 2'b00
			parameter_string_t TXPI_CFG1, // Default: 2'b00
			parameter_string_t TXPI_CFG2, // Default: 2'b00
			parameter_string_t TXPI_CFG3, // Default: 1'b0
			parameter_string_t TXPI_CFG4, // Default: 1'b0
			parameter_string_t TXPI_CFG5, // Default: 3'b100
			parameter_string_t TXPI_GREY_SEL, // Default: 1'b0
			parameter_string_t TXPI_INVSTROBE_SEL, // Default: 1'b0
			parameter_string_t TXPI_PPMCLK_SEL, // Default: "TXUSRCLK2"
			parameter_string_t TXPI_PPM_CFG, // Default: 8'b00000000
			parameter_string_t TXPI_SYNFREQ_PPM, // Default: 3'b000
			parameter_string_t TXPMARESET_TIME, // Default: 5'b00001
			parameter_string_t TXSYNC_MULTILANE, // Default: 1'b0
			parameter_string_t TXSYNC_OVRD, // Default: 1'b0
			parameter_string_t TXSYNC_SKIP_DA, // Default: 1'b0
			parameter_string_t TX_CLK25_DIV, // Default: 7
			parameter_string_t TX_CLKMUX_PD, // Default: 1'b1
			parameter_string_t TX_DATA_WIDTH, // Default: 20
			parameter_string_t TX_DEEMPH0, // Default: 6'b000000
			parameter_string_t TX_DEEMPH1, // Default: 6'b000000
			parameter_string_t TX_DRIVE_MODE, // Default: "DIRECT"
			parameter_string_t TX_EIDLE_ASSERT_DELAY, // Default: 3'b110
			parameter_string_t TX_EIDLE_DEASSERT_DELAY, // Default: 3'b100
			parameter_string_t TX_INT_DATAWIDTH, // Default: 0
			parameter_enum_t TX_LOOPBACK_DRIVE_HIZ, // Default: "FALSE"
			parameter_string_t TX_MAINCURSOR_SEL, // Default: 1'b0
			parameter_string_t TX_MARGIN_FULL_0, // Default: 7'b1001110
			parameter_string_t TX_MARGIN_FULL_1, // Default: 7'b1001001
			parameter_string_t TX_MARGIN_FULL_2, // Default: 7'b1000101
			parameter_string_t TX_MARGIN_FULL_3, // Default: 7'b1000010
			parameter_string_t TX_MARGIN_FULL_4, // Default: 7'b1000000
			parameter_string_t TX_MARGIN_LOW_0, // Default: 7'b1000110
			parameter_string_t TX_MARGIN_LOW_1, // Default: 7'b1000100
			parameter_string_t TX_MARGIN_LOW_2, // Default: 7'b1000010
			parameter_string_t TX_MARGIN_LOW_3, // Default: 7'b1000000
			parameter_string_t TX_MARGIN_LOW_4, // Default: 7'b1000000
			parameter_string_t TX_QPI_STATUS_EN, // Default: 1'b0
			parameter_string_t TX_RXDETECT_CFG, // Default: 14'h1832
			parameter_string_t TX_RXDETECT_PRECHARGE_TIME, // Default: 17'h00000
			parameter_string_t TX_RXDETECT_REF, // Default: 3'b100
			parameter_string_t TX_XCLK_SEL, // Default: "TXUSR"
			parameter_string_t UCODEER_CLR, // Default: 1'b0
			parameter_string_t USE_PCS_CLK_PHASE_SEL, // Default: 1'b0
			//Verilog Ports in definition order:
			NetFlow* CPLLFBCLKLOST, // net ID: CPLLFBCLKLOST lsb: 0  msb: 0 OUTPUT
			NetFlow* CPLLLOCK, // net ID: CPLLLOCK lsb: 0  msb: 0 OUTPUT
			NetFlow* CPLLREFCLKLOST, // net ID: CPLLREFCLKLOST lsb: 0  msb: 0 OUTPUT
			NetFlow* DMONITOROUT, // net ID: DMONITOROUT lsb: 0  msb: 0 OUTPUT
			NetFlow* DRPDO, // net ID: DRPDO lsb: 0  msb: 0 OUTPUT
			NetFlow* DRPRDY, // net ID: DRPRDY lsb: 0  msb: 0 OUTPUT
			NetFlow* EYESCANDATAERROR, // net ID: EYESCANDATAERROR lsb: 0  msb: 0 OUTPUT
			NetFlow* GTHTXN, // net ID: GTHTXN lsb: 0  msb: 0 OUTPUT
			NetFlow* GTHTXP, // net ID: GTHTXP lsb: 0  msb: 0 OUTPUT
			NetFlow* GTREFCLKMONITOR, // net ID: GTREFCLKMONITOR lsb: 0  msb: 0 OUTPUT
			NetFlow* PCSRSVDOUT, // net ID: PCSRSVDOUT lsb: 0  msb: 0 OUTPUT
			NetFlow* PHYSTATUS, // net ID: PHYSTATUS lsb: 0  msb: 0 OUTPUT
			NetFlow* RSOSINTDONE, // net ID: RSOSINTDONE lsb: 0  msb: 0 OUTPUT
			NetFlow* RXBUFSTATUS, // net ID: RXBUFSTATUS lsb: 0  msb: 0 OUTPUT
			NetFlow* RXBYTEISALIGNED, // net ID: RXBYTEISALIGNED lsb: 0  msb: 0 OUTPUT
			NetFlow* RXBYTEREALIGN, // net ID: RXBYTEREALIGN lsb: 0  msb: 0 OUTPUT
			NetFlow* RXCDRLOCK, // net ID: RXCDRLOCK lsb: 0  msb: 0 OUTPUT
			NetFlow* RXCHANBONDSEQ, // net ID: RXCHANBONDSEQ lsb: 0  msb: 0 OUTPUT
			NetFlow* RXCHANISALIGNED, // net ID: RXCHANISALIGNED lsb: 0  msb: 0 OUTPUT
			NetFlow* RXCHANREALIGN, // net ID: RXCHANREALIGN lsb: 0  msb: 0 OUTPUT
			NetFlow* RXCHARISCOMMA, // net ID: RXCHARISCOMMA lsb: 0  msb: 0 OUTPUT
			NetFlow* RXCHARISK, // net ID: RXCHARISK lsb: 0  msb: 0 OUTPUT
			NetFlow* RXCHBONDO, // net ID: RXCHBONDO lsb: 0  msb: 0 OUTPUT
			NetFlow* RXCLKCORCNT, // net ID: RXCLKCORCNT lsb: 0  msb: 0 OUTPUT
			NetFlow* RXCOMINITDET, // net ID: RXCOMINITDET lsb: 0  msb: 0 OUTPUT
			NetFlow* RXCOMMADET, // net ID: RXCOMMADET lsb: 0  msb: 0 OUTPUT
			NetFlow* RXCOMSASDET, // net ID: RXCOMSASDET lsb: 0  msb: 0 OUTPUT
			NetFlow* RXCOMWAKEDET, // net ID: RXCOMWAKEDET lsb: 0  msb: 0 OUTPUT
			NetFlow* RXDATA, // net ID: RXDATA lsb: 0  msb: 0 OUTPUT
			NetFlow* RXDATAVALID, // net ID: RXDATAVALID lsb: 0  msb: 0 OUTPUT
			NetFlow* RXDFESLIDETAPSTARTED, // net ID: RXDFESLIDETAPSTARTED lsb: 0  msb: 0 OUTPUT
			NetFlow* RXDFESLIDETAPSTROBEDONE, // net ID: RXDFESLIDETAPSTROBEDONE lsb: 0  msb: 0 OUTPUT
			NetFlow* RXDFESLIDETAPSTROBESTARTED, // net ID: RXDFESLIDETAPSTROBESTARTED lsb: 0  msb: 0 OUTPUT
			NetFlow* RXDFESTADAPTDONE, // net ID: RXDFESTADAPTDONE lsb: 0  msb: 0 OUTPUT
			NetFlow* RXDISPERR, // net ID: RXDISPERR lsb: 0  msb: 0 OUTPUT
			NetFlow* RXDLYSRESETDONE, // net ID: RXDLYSRESETDONE lsb: 0  msb: 0 OUTPUT
			NetFlow* RXELECIDLE, // net ID: RXELECIDLE lsb: 0  msb: 0 OUTPUT
			NetFlow* RXHEADER, // net ID: RXHEADER lsb: 0  msb: 0 OUTPUT
			NetFlow* RXHEADERVALID, // net ID: RXHEADERVALID lsb: 0  msb: 0 OUTPUT
			NetFlow* RXMONITOROUT, // net ID: RXMONITOROUT lsb: 0  msb: 0 OUTPUT
			NetFlow* RXNOTINTABLE, // net ID: RXNOTINTABLE lsb: 0  msb: 0 OUTPUT
			NetFlow* RXOSINTSTARTED, // net ID: RXOSINTSTARTED lsb: 0  msb: 0 OUTPUT
			NetFlow* RXOSINTSTROBEDONE, // net ID: RXOSINTSTROBEDONE lsb: 0  msb: 0 OUTPUT
			NetFlow* RXOSINTSTROBESTARTED, // net ID: RXOSINTSTROBESTARTED lsb: 0  msb: 0 OUTPUT
			NetFlow* RXOUTCLK, // net ID: RXOUTCLK lsb: 0  msb: 0 OUTPUT
			NetFlow* RXOUTCLKFABRIC, // net ID: RXOUTCLKFABRIC lsb: 0  msb: 0 OUTPUT
			NetFlow* RXOUTCLKPCS, // net ID: RXOUTCLKPCS lsb: 0  msb: 0 OUTPUT
			NetFlow* RXPHALIGNDONE, // net ID: RXPHALIGNDONE lsb: 0  msb: 0 OUTPUT
			NetFlow* RXPHMONITOR, // net ID: RXPHMONITOR lsb: 0  msb: 0 OUTPUT
			NetFlow* RXPHSLIPMONITOR, // net ID: RXPHSLIPMONITOR lsb: 0  msb: 0 OUTPUT
			NetFlow* RXPMARESETDONE, // net ID: RXPMARESETDONE lsb: 0  msb: 0 OUTPUT
			NetFlow* RXPRBSERR, // net ID: RXPRBSERR lsb: 0  msb: 0 OUTPUT
			NetFlow* RXQPISENN, // net ID: RXQPISENN lsb: 0  msb: 0 OUTPUT
			NetFlow* RXQPISENP, // net ID: RXQPISENP lsb: 0  msb: 0 OUTPUT
			NetFlow* RXRATEDONE, // net ID: RXRATEDONE lsb: 0  msb: 0 OUTPUT
			NetFlow* RXRESETDONE, // net ID: RXRESETDONE lsb: 0  msb: 0 OUTPUT
			NetFlow* RXSTARTOFSEQ, // net ID: RXSTARTOFSEQ lsb: 0  msb: 0 OUTPUT
			NetFlow* RXSTATUS, // net ID: RXSTATUS lsb: 0  msb: 0 OUTPUT
			NetFlow* RXSYNCDONE, // net ID: RXSYNCDONE lsb: 0  msb: 0 OUTPUT
			NetFlow* RXSYNCOUT, // net ID: RXSYNCOUT lsb: 0  msb: 0 OUTPUT
			NetFlow* RXVALID, // net ID: RXVALID lsb: 0  msb: 0 OUTPUT
			NetFlow* TXBUFSTATUS, // net ID: TXBUFSTATUS lsb: 0  msb: 0 OUTPUT
			NetFlow* TXCOMFINISH, // net ID: TXCOMFINISH lsb: 0  msb: 0 OUTPUT
			NetFlow* TXDLYSRESETDONE, // net ID: TXDLYSRESETDONE lsb: 0  msb: 0 OUTPUT
			NetFlow* TXGEARBOXREADY, // net ID: TXGEARBOXREADY lsb: 0  msb: 0 OUTPUT
			NetFlow* TXOUTCLK, // net ID: TXOUTCLK lsb: 0  msb: 0 OUTPUT
			NetFlow* TXOUTCLKFABRIC, // net ID: TXOUTCLKFABRIC lsb: 0  msb: 0 OUTPUT
			NetFlow* TXOUTCLKPCS, // net ID: TXOUTCLKPCS lsb: 0  msb: 0 OUTPUT
			NetFlow* TXPHALIGNDONE, // net ID: TXPHALIGNDONE lsb: 0  msb: 0 OUTPUT
			NetFlow* TXPHINITDONE, // net ID: TXPHINITDONE lsb: 0  msb: 0 OUTPUT
			NetFlow* TXPMARESETDONE, // net ID: TXPMARESETDONE lsb: 0  msb: 0 OUTPUT
			NetFlow* TXQPISENN, // net ID: TXQPISENN lsb: 0  msb: 0 OUTPUT
			NetFlow* TXQPISENP, // net ID: TXQPISENP lsb: 0  msb: 0 OUTPUT
			NetFlow* TXRATEDONE, // net ID: TXRATEDONE lsb: 0  msb: 0 OUTPUT
			NetFlow* TXRESETDONE, // net ID: TXRESETDONE lsb: 0  msb: 0 OUTPUT
			NetFlow* TXSYNCDONE, // net ID: TXSYNCDONE lsb: 0  msb: 0 OUTPUT
			NetFlow* TXSYNCOUT, // net ID: TXSYNCOUT lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGRESET, // net ID: CFGRESET lsb: 0  msb: 0 INPUT
			NetFlow* CLKRSVD0, // net ID: CLKRSVD0 lsb: 0  msb: 0 INPUT
			NetFlow* CLKRSVD1, // net ID: CLKRSVD1 lsb: 0  msb: 0 INPUT
			NetFlow* CPLLLOCKDETCLK, // net ID: CPLLLOCKDETCLK lsb: 0  msb: 0 INPUT
			NetFlow* CPLLLOCKEN, // net ID: CPLLLOCKEN lsb: 0  msb: 0 INPUT
			NetFlow* CPLLPD, // net ID: CPLLPD lsb: 0  msb: 0 INPUT
			NetFlow* CPLLREFCLKSEL, // net ID: CPLLREFCLKSEL lsb: 0  msb: 2 INPUT
			NetFlow* CPLLRESET, // net ID: CPLLRESET lsb: 0  msb: 0 INPUT
			NetFlow* DMONFIFORESET, // net ID: DMONFIFORESET lsb: 0  msb: 0 INPUT
			NetFlow* DMONITORCLK, // net ID: DMONITORCLK lsb: 0  msb: 0 INPUT
			NetFlow* DRPADDR, // net ID: DRPADDR lsb: 0  msb: 8 INPUT
			NetFlow* DRPCLK, // net ID: DRPCLK lsb: 0  msb: 0 INPUT
			NetFlow* DRPDI, // net ID: DRPDI lsb: 0  msb: 15 INPUT
			NetFlow* DRPEN, // net ID: DRPEN lsb: 0  msb: 0 INPUT
			NetFlow* DRPWE, // net ID: DRPWE lsb: 0  msb: 0 INPUT
			NetFlow* EYESCANMODE, // net ID: EYESCANMODE lsb: 0  msb: 0 INPUT
			NetFlow* EYESCANRESET, // net ID: EYESCANRESET lsb: 0  msb: 0 INPUT
			NetFlow* EYESCANTRIGGER, // net ID: EYESCANTRIGGER lsb: 0  msb: 0 INPUT
			NetFlow* GTGREFCLK, // net ID: GTGREFCLK lsb: 0  msb: 0 INPUT
			NetFlow* GTHRXN, // net ID: GTHRXN lsb: 0  msb: 0 INPUT
			NetFlow* GTHRXP, // net ID: GTHRXP lsb: 0  msb: 0 INPUT
			NetFlow* GTNORTHREFCLK0, // net ID: GTNORTHREFCLK0 lsb: 0  msb: 0 INPUT
			NetFlow* GTNORTHREFCLK1, // net ID: GTNORTHREFCLK1 lsb: 0  msb: 0 INPUT
			NetFlow* GTREFCLK0, // net ID: GTREFCLK0 lsb: 0  msb: 0 INPUT
			NetFlow* GTREFCLK1, // net ID: GTREFCLK1 lsb: 0  msb: 0 INPUT
			NetFlow* GTRESETSEL, // net ID: GTRESETSEL lsb: 0  msb: 0 INPUT
			NetFlow* GTRSVD, // net ID: GTRSVD lsb: 0  msb: 15 INPUT
			NetFlow* GTRXRESET, // net ID: GTRXRESET lsb: 0  msb: 0 INPUT
			NetFlow* GTSOUTHREFCLK0, // net ID: GTSOUTHREFCLK0 lsb: 0  msb: 0 INPUT
			NetFlow* GTSOUTHREFCLK1, // net ID: GTSOUTHREFCLK1 lsb: 0  msb: 0 INPUT
			NetFlow* GTTXRESET, // net ID: GTTXRESET lsb: 0  msb: 0 INPUT
			NetFlow* LOOPBACK, // net ID: LOOPBACK lsb: 0  msb: 2 INPUT
			NetFlow* PCSRSVDIN, // net ID: PCSRSVDIN lsb: 0  msb: 15 INPUT
			NetFlow* PCSRSVDIN2, // net ID: PCSRSVDIN2 lsb: 0  msb: 4 INPUT
			NetFlow* PMARSVDIN, // net ID: PMARSVDIN lsb: 0  msb: 4 INPUT
			NetFlow* QPLLCLK, // net ID: QPLLCLK lsb: 0  msb: 0 INPUT
			NetFlow* QPLLREFCLK, // net ID: QPLLREFCLK lsb: 0  msb: 0 INPUT
			NetFlow* RESETOVRD, // net ID: RESETOVRD lsb: 0  msb: 0 INPUT
			NetFlow* RX8B10BEN, // net ID: RX8B10BEN lsb: 0  msb: 0 INPUT
			NetFlow* RXADAPTSELTEST, // net ID: RXADAPTSELTEST lsb: 0  msb: 13 INPUT
			NetFlow* RXBUFRESET, // net ID: RXBUFRESET lsb: 0  msb: 0 INPUT
			NetFlow* RXCDRFREQRESET, // net ID: RXCDRFREQRESET lsb: 0  msb: 0 INPUT
			NetFlow* RXCDRHOLD, // net ID: RXCDRHOLD lsb: 0  msb: 0 INPUT
			NetFlow* RXCDROVRDEN, // net ID: RXCDROVRDEN lsb: 0  msb: 0 INPUT
			NetFlow* RXCDRRESET, // net ID: RXCDRRESET lsb: 0  msb: 0 INPUT
			NetFlow* RXCDRRESETRSV, // net ID: RXCDRRESETRSV lsb: 0  msb: 0 INPUT
			NetFlow* RXCHBONDEN, // net ID: RXCHBONDEN lsb: 0  msb: 0 INPUT
			NetFlow* RXCHBONDI, // net ID: RXCHBONDI lsb: 0  msb: 4 INPUT
			NetFlow* RXCHBONDLEVEL, // net ID: RXCHBONDLEVEL lsb: 0  msb: 2 INPUT
			NetFlow* RXCHBONDMASTER, // net ID: RXCHBONDMASTER lsb: 0  msb: 0 INPUT
			NetFlow* RXCHBONDSLAVE, // net ID: RXCHBONDSLAVE lsb: 0  msb: 0 INPUT
			NetFlow* RXCOMMADETEN, // net ID: RXCOMMADETEN lsb: 0  msb: 0 INPUT
			NetFlow* RXDDIEN, // net ID: RXDDIEN lsb: 0  msb: 0 INPUT
			NetFlow* RXDFEAGCHOLD, // net ID: RXDFEAGCHOLD lsb: 0  msb: 0 INPUT
			NetFlow* RXDFEAGCOVRDEN, // net ID: RXDFEAGCOVRDEN lsb: 0  msb: 0 INPUT
			NetFlow* RXDFEAGCTRL, // net ID: RXDFEAGCTRL lsb: 0  msb: 4 INPUT
			NetFlow* RXDFECM1EN, // net ID: RXDFECM1EN lsb: 0  msb: 0 INPUT
			NetFlow* RXDFELFHOLD, // net ID: RXDFELFHOLD lsb: 0  msb: 0 INPUT
			NetFlow* RXDFELFOVRDEN, // net ID: RXDFELFOVRDEN lsb: 0  msb: 0 INPUT
			NetFlow* RXDFELPMRESET, // net ID: RXDFELPMRESET lsb: 0  msb: 0 INPUT
			NetFlow* RXDFESLIDETAP, // net ID: RXDFESLIDETAP lsb: 0  msb: 4 INPUT
			NetFlow* RXDFESLIDETAPADAPTEN, // net ID: RXDFESLIDETAPADAPTEN lsb: 0  msb: 0 INPUT
			NetFlow* RXDFESLIDETAPHOLD, // net ID: RXDFESLIDETAPHOLD lsb: 0  msb: 0 INPUT
			NetFlow* RXDFESLIDETAPID, // net ID: RXDFESLIDETAPID lsb: 0  msb: 5 INPUT
			NetFlow* RXDFESLIDETAPINITOVRDEN, // net ID: RXDFESLIDETAPINITOVRDEN lsb: 0  msb: 0 INPUT
			NetFlow* RXDFESLIDETAPONLYADAPTEN, // net ID: RXDFESLIDETAPONLYADAPTEN lsb: 0  msb: 0 INPUT
			NetFlow* RXDFESLIDETAPOVRDEN, // net ID: RXDFESLIDETAPOVRDEN lsb: 0  msb: 0 INPUT
			NetFlow* RXDFESLIDETAPSTROBE, // net ID: RXDFESLIDETAPSTROBE lsb: 0  msb: 0 INPUT
			NetFlow* RXDFETAP2HOLD, // net ID: RXDFETAP2HOLD lsb: 0  msb: 0 INPUT
			NetFlow* RXDFETAP2OVRDEN, // net ID: RXDFETAP2OVRDEN lsb: 0  msb: 0 INPUT
			NetFlow* RXDFETAP3HOLD, // net ID: RXDFETAP3HOLD lsb: 0  msb: 0 INPUT
			NetFlow* RXDFETAP3OVRDEN, // net ID: RXDFETAP3OVRDEN lsb: 0  msb: 0 INPUT
			NetFlow* RXDFETAP4HOLD, // net ID: RXDFETAP4HOLD lsb: 0  msb: 0 INPUT
			NetFlow* RXDFETAP4OVRDEN, // net ID: RXDFETAP4OVRDEN lsb: 0  msb: 0 INPUT
			NetFlow* RXDFETAP5HOLD, // net ID: RXDFETAP5HOLD lsb: 0  msb: 0 INPUT
			NetFlow* RXDFETAP5OVRDEN, // net ID: RXDFETAP5OVRDEN lsb: 0  msb: 0 INPUT
			NetFlow* RXDFETAP6HOLD, // net ID: RXDFETAP6HOLD lsb: 0  msb: 0 INPUT
			NetFlow* RXDFETAP6OVRDEN, // net ID: RXDFETAP6OVRDEN lsb: 0  msb: 0 INPUT
			NetFlow* RXDFETAP7HOLD, // net ID: RXDFETAP7HOLD lsb: 0  msb: 0 INPUT
			NetFlow* RXDFETAP7OVRDEN, // net ID: RXDFETAP7OVRDEN lsb: 0  msb: 0 INPUT
			NetFlow* RXDFEUTHOLD, // net ID: RXDFEUTHOLD lsb: 0  msb: 0 INPUT
			NetFlow* RXDFEUTOVRDEN, // net ID: RXDFEUTOVRDEN lsb: 0  msb: 0 INPUT
			NetFlow* RXDFEVPHOLD, // net ID: RXDFEVPHOLD lsb: 0  msb: 0 INPUT
			NetFlow* RXDFEVPOVRDEN, // net ID: RXDFEVPOVRDEN lsb: 0  msb: 0 INPUT
			NetFlow* RXDFEVSEN, // net ID: RXDFEVSEN lsb: 0  msb: 0 INPUT
			NetFlow* RXDFEXYDEN, // net ID: RXDFEXYDEN lsb: 0  msb: 0 INPUT
			NetFlow* RXDLYBYPASS, // net ID: RXDLYBYPASS lsb: 0  msb: 0 INPUT
			NetFlow* RXDLYEN, // net ID: RXDLYEN lsb: 0  msb: 0 INPUT
			NetFlow* RXDLYOVRDEN, // net ID: RXDLYOVRDEN lsb: 0  msb: 0 INPUT
			NetFlow* RXDLYSRESET, // net ID: RXDLYSRESET lsb: 0  msb: 0 INPUT
			NetFlow* RXELECIDLEMODE, // net ID: RXELECIDLEMODE lsb: 0  msb: 1 INPUT
			NetFlow* RXGEARBOXSLIP, // net ID: RXGEARBOXSLIP lsb: 0  msb: 0 INPUT
			NetFlow* RXLPMEN, // net ID: RXLPMEN lsb: 0  msb: 0 INPUT
			NetFlow* RXLPMHFHOLD, // net ID: RXLPMHFHOLD lsb: 0  msb: 0 INPUT
			NetFlow* RXLPMHFOVRDEN, // net ID: RXLPMHFOVRDEN lsb: 0  msb: 0 INPUT
			NetFlow* RXLPMLFHOLD, // net ID: RXLPMLFHOLD lsb: 0  msb: 0 INPUT
			NetFlow* RXLPMLFKLOVRDEN, // net ID: RXLPMLFKLOVRDEN lsb: 0  msb: 0 INPUT
			NetFlow* RXMCOMMAALIGNEN, // net ID: RXMCOMMAALIGNEN lsb: 0  msb: 0 INPUT
			NetFlow* RXMONITORSEL, // net ID: RXMONITORSEL lsb: 0  msb: 1 INPUT
			NetFlow* RXOOBRESET, // net ID: RXOOBRESET lsb: 0  msb: 0 INPUT
			NetFlow* RXOSCALRESET, // net ID: RXOSCALRESET lsb: 0  msb: 0 INPUT
			NetFlow* RXOSHOLD, // net ID: RXOSHOLD lsb: 0  msb: 0 INPUT
			NetFlow* RXOSINTCFG, // net ID: RXOSINTCFG lsb: 0  msb: 3 INPUT
			NetFlow* RXOSINTEN, // net ID: RXOSINTEN lsb: 0  msb: 0 INPUT
			NetFlow* RXOSINTHOLD, // net ID: RXOSINTHOLD lsb: 0  msb: 0 INPUT
			NetFlow* RXOSINTID0, // net ID: RXOSINTID0 lsb: 0  msb: 3 INPUT
			NetFlow* RXOSINTNTRLEN, // net ID: RXOSINTNTRLEN lsb: 0  msb: 0 INPUT
			NetFlow* RXOSINTOVRDEN, // net ID: RXOSINTOVRDEN lsb: 0  msb: 0 INPUT
			NetFlow* RXOSINTSTROBE, // net ID: RXOSINTSTROBE lsb: 0  msb: 0 INPUT
			NetFlow* RXOSINTTESTOVRDEN, // net ID: RXOSINTTESTOVRDEN lsb: 0  msb: 0 INPUT
			NetFlow* RXOSOVRDEN, // net ID: RXOSOVRDEN lsb: 0  msb: 0 INPUT
			NetFlow* RXOUTCLKSEL, // net ID: RXOUTCLKSEL lsb: 0  msb: 2 INPUT
			NetFlow* RXPCOMMAALIGNEN, // net ID: RXPCOMMAALIGNEN lsb: 0  msb: 0 INPUT
			NetFlow* RXPCSRESET, // net ID: RXPCSRESET lsb: 0  msb: 0 INPUT
			NetFlow* RXPD, // net ID: RXPD lsb: 0  msb: 1 INPUT
			NetFlow* RXPHALIGN, // net ID: RXPHALIGN lsb: 0  msb: 0 INPUT
			NetFlow* RXPHALIGNEN, // net ID: RXPHALIGNEN lsb: 0  msb: 0 INPUT
			NetFlow* RXPHDLYPD, // net ID: RXPHDLYPD lsb: 0  msb: 0 INPUT
			NetFlow* RXPHDLYRESET, // net ID: RXPHDLYRESET lsb: 0  msb: 0 INPUT
			NetFlow* RXPHOVRDEN, // net ID: RXPHOVRDEN lsb: 0  msb: 0 INPUT
			NetFlow* RXPMARESET, // net ID: RXPMARESET lsb: 0  msb: 0 INPUT
			NetFlow* RXPOLARITY, // net ID: RXPOLARITY lsb: 0  msb: 0 INPUT
			NetFlow* RXPRBSCNTRESET, // net ID: RXPRBSCNTRESET lsb: 0  msb: 0 INPUT
			NetFlow* RXPRBSSEL, // net ID: RXPRBSSEL lsb: 0  msb: 2 INPUT
			NetFlow* RXQPIEN, // net ID: RXQPIEN lsb: 0  msb: 0 INPUT
			NetFlow* RXRATE, // net ID: RXRATE lsb: 0  msb: 2 INPUT
			NetFlow* RXRATEMODE, // net ID: RXRATEMODE lsb: 0  msb: 0 INPUT
			NetFlow* RXSLIDE, // net ID: RXSLIDE lsb: 0  msb: 0 INPUT
			NetFlow* RXSYNCALLIN, // net ID: RXSYNCALLIN lsb: 0  msb: 0 INPUT
			NetFlow* RXSYNCIN, // net ID: RXSYNCIN lsb: 0  msb: 0 INPUT
			NetFlow* RXSYNCMODE, // net ID: RXSYNCMODE lsb: 0  msb: 0 INPUT
			NetFlow* RXSYSCLKSEL, // net ID: RXSYSCLKSEL lsb: 0  msb: 1 INPUT
			NetFlow* RXUSERRDY, // net ID: RXUSERRDY lsb: 0  msb: 0 INPUT
			NetFlow* RXUSRCLK, // net ID: RXUSRCLK lsb: 0  msb: 0 INPUT
			NetFlow* RXUSRCLK2, // net ID: RXUSRCLK2 lsb: 0  msb: 0 INPUT
			NetFlow* SETERRSTATUS, // net ID: SETERRSTATUS lsb: 0  msb: 0 INPUT
			NetFlow* SIGVALIDCLK, // net ID: SIGVALIDCLK lsb: 0  msb: 0 INPUT
			NetFlow* TSTIN, // net ID: TSTIN lsb: 0  msb: 19 INPUT
			NetFlow* TX8B10BBYPASS, // net ID: TX8B10BBYPASS lsb: 0  msb: 7 INPUT
			NetFlow* TX8B10BEN, // net ID: TX8B10BEN lsb: 0  msb: 0 INPUT
			NetFlow* TXBUFDIFFCTRL, // net ID: TXBUFDIFFCTRL lsb: 0  msb: 2 INPUT
			NetFlow* TXCHARDISPMODE, // net ID: TXCHARDISPMODE lsb: 0  msb: 7 INPUT
			NetFlow* TXCHARDISPVAL, // net ID: TXCHARDISPVAL lsb: 0  msb: 7 INPUT
			NetFlow* TXCHARISK, // net ID: TXCHARISK lsb: 0  msb: 7 INPUT
			NetFlow* TXCOMINIT, // net ID: TXCOMINIT lsb: 0  msb: 0 INPUT
			NetFlow* TXCOMSAS, // net ID: TXCOMSAS lsb: 0  msb: 0 INPUT
			NetFlow* TXCOMWAKE, // net ID: TXCOMWAKE lsb: 0  msb: 0 INPUT
			NetFlow* TXDATA, // net ID: TXDATA lsb: 0  msb: 63 INPUT
			NetFlow* TXDEEMPH, // net ID: TXDEEMPH lsb: 0  msb: 0 INPUT
			NetFlow* TXDETECTRX, // net ID: TXDETECTRX lsb: 0  msb: 0 INPUT
			NetFlow* TXDIFFCTRL, // net ID: TXDIFFCTRL lsb: 0  msb: 3 INPUT
			NetFlow* TXDIFFPD, // net ID: TXDIFFPD lsb: 0  msb: 0 INPUT
			NetFlow* TXDLYBYPASS, // net ID: TXDLYBYPASS lsb: 0  msb: 0 INPUT
			NetFlow* TXDLYEN, // net ID: TXDLYEN lsb: 0  msb: 0 INPUT
			NetFlow* TXDLYHOLD, // net ID: TXDLYHOLD lsb: 0  msb: 0 INPUT
			NetFlow* TXDLYOVRDEN, // net ID: TXDLYOVRDEN lsb: 0  msb: 0 INPUT
			NetFlow* TXDLYSRESET, // net ID: TXDLYSRESET lsb: 0  msb: 0 INPUT
			NetFlow* TXDLYUPDOWN, // net ID: TXDLYUPDOWN lsb: 0  msb: 0 INPUT
			NetFlow* TXELECIDLE, // net ID: TXELECIDLE lsb: 0  msb: 0 INPUT
			NetFlow* TXHEADER, // net ID: TXHEADER lsb: 0  msb: 2 INPUT
			NetFlow* TXINHIBIT, // net ID: TXINHIBIT lsb: 0  msb: 0 INPUT
			NetFlow* TXMAINCURSOR, // net ID: TXMAINCURSOR lsb: 0  msb: 6 INPUT
			NetFlow* TXMARGIN, // net ID: TXMARGIN lsb: 0  msb: 2 INPUT
			NetFlow* TXOUTCLKSEL, // net ID: TXOUTCLKSEL lsb: 0  msb: 2 INPUT
			NetFlow* TXPCSRESET, // net ID: TXPCSRESET lsb: 0  msb: 0 INPUT
			NetFlow* TXPD, // net ID: TXPD lsb: 0  msb: 1 INPUT
			NetFlow* TXPDELECIDLEMODE, // net ID: TXPDELECIDLEMODE lsb: 0  msb: 0 INPUT
			NetFlow* TXPHALIGN, // net ID: TXPHALIGN lsb: 0  msb: 0 INPUT
			NetFlow* TXPHALIGNEN, // net ID: TXPHALIGNEN lsb: 0  msb: 0 INPUT
			NetFlow* TXPHDLYPD, // net ID: TXPHDLYPD lsb: 0  msb: 0 INPUT
			NetFlow* TXPHDLYRESET, // net ID: TXPHDLYRESET lsb: 0  msb: 0 INPUT
			NetFlow* TXPHDLYTSTCLK, // net ID: TXPHDLYTSTCLK lsb: 0  msb: 0 INPUT
			NetFlow* TXPHINIT, // net ID: TXPHINIT lsb: 0  msb: 0 INPUT
			NetFlow* TXPHOVRDEN, // net ID: TXPHOVRDEN lsb: 0  msb: 0 INPUT
			NetFlow* TXPIPPMEN, // net ID: TXPIPPMEN lsb: 0  msb: 0 INPUT
			NetFlow* TXPIPPMOVRDEN, // net ID: TXPIPPMOVRDEN lsb: 0  msb: 0 INPUT
			NetFlow* TXPIPPMPD, // net ID: TXPIPPMPD lsb: 0  msb: 0 INPUT
			NetFlow* TXPIPPMSEL, // net ID: TXPIPPMSEL lsb: 0  msb: 0 INPUT
			NetFlow* TXPIPPMSTEPSIZE, // net ID: TXPIPPMSTEPSIZE lsb: 0  msb: 4 INPUT
			NetFlow* TXPISOPD, // net ID: TXPISOPD lsb: 0  msb: 0 INPUT
			NetFlow* TXPMARESET, // net ID: TXPMARESET lsb: 0  msb: 0 INPUT
			NetFlow* TXPOLARITY, // net ID: TXPOLARITY lsb: 0  msb: 0 INPUT
			NetFlow* TXPOSTCURSOR, // net ID: TXPOSTCURSOR lsb: 0  msb: 4 INPUT
			NetFlow* TXPOSTCURSORINV, // net ID: TXPOSTCURSORINV lsb: 0  msb: 0 INPUT
			NetFlow* TXPRBSFORCEERR, // net ID: TXPRBSFORCEERR lsb: 0  msb: 0 INPUT
			NetFlow* TXPRBSSEL, // net ID: TXPRBSSEL lsb: 0  msb: 2 INPUT
			NetFlow* TXPRECURSOR, // net ID: TXPRECURSOR lsb: 0  msb: 4 INPUT
			NetFlow* TXPRECURSORINV, // net ID: TXPRECURSORINV lsb: 0  msb: 0 INPUT
			NetFlow* TXQPIBIASEN, // net ID: TXQPIBIASEN lsb: 0  msb: 0 INPUT
			NetFlow* TXQPISTRONGPDOWN, // net ID: TXQPISTRONGPDOWN lsb: 0  msb: 0 INPUT
			NetFlow* TXQPIWEAKPUP, // net ID: TXQPIWEAKPUP lsb: 0  msb: 0 INPUT
			NetFlow* TXRATE, // net ID: TXRATE lsb: 0  msb: 2 INPUT
			NetFlow* TXRATEMODE, // net ID: TXRATEMODE lsb: 0  msb: 0 INPUT
			NetFlow* TXSEQUENCE, // net ID: TXSEQUENCE lsb: 0  msb: 6 INPUT
			NetFlow* TXSTARTSEQ, // net ID: TXSTARTSEQ lsb: 0  msb: 0 INPUT
			NetFlow* TXSWING, // net ID: TXSWING lsb: 0  msb: 0 INPUT
			NetFlow* TXSYNCALLIN, // net ID: TXSYNCALLIN lsb: 0  msb: 0 INPUT
			NetFlow* TXSYNCIN, // net ID: TXSYNCIN lsb: 0  msb: 0 INPUT
			NetFlow* TXSYNCMODE, // net ID: TXSYNCMODE lsb: 0  msb: 0 INPUT
			NetFlow* TXSYSCLKSEL, // net ID: TXSYSCLKSEL lsb: 0  msb: 1 INPUT
			NetFlow* TXUSERRDY, // net ID: TXUSERRDY lsb: 0  msb: 0 INPUT
			NetFlow* TXUSRCLK, // net ID: TXUSRCLK lsb: 0  msb: 0 INPUT
			NetFlow* TXUSRCLK2 // net ID: TXUSRCLK2 lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->LOC = LOC; // Default: "UNPLACED"
			this->ACJTAG_DEBUG_MODE = ACJTAG_DEBUG_MODE; // Default: 1'b0
			this->ACJTAG_MODE = ACJTAG_MODE; // Default: 1'b0
			this->ACJTAG_RESET = ACJTAG_RESET; // Default: 1'b0
			this->ADAPT_CFG0 = ADAPT_CFG0; // Default: 20'h00C10
			this->ALIGN_COMMA_DOUBLE = ALIGN_COMMA_DOUBLE; // Default: "FALSE"
			this->ALIGN_COMMA_ENABLE = ALIGN_COMMA_ENABLE; // Default: 10'b0001111111
			this->ALIGN_COMMA_WORD = ALIGN_COMMA_WORD; // Default: 1
			this->ALIGN_MCOMMA_DET = ALIGN_MCOMMA_DET; // Default: "TRUE"
			this->ALIGN_MCOMMA_VALUE = ALIGN_MCOMMA_VALUE; // Default: 10'b1010000011
			this->ALIGN_PCOMMA_DET = ALIGN_PCOMMA_DET; // Default: "TRUE"
			this->ALIGN_PCOMMA_VALUE = ALIGN_PCOMMA_VALUE; // Default: 10'b0101111100
			this->A_RXOSCALRESET = A_RXOSCALRESET; // Default: 1'b0
			this->CBCC_DATA_SOURCE_SEL = CBCC_DATA_SOURCE_SEL; // Default: "DECODED"
			this->CFOK_CFG = CFOK_CFG; // Default: 42'h24800040E80
			this->CFOK_CFG2 = CFOK_CFG2; // Default: 6'b100000
			this->CFOK_CFG3 = CFOK_CFG3; // Default: 6'b100000
			this->CHAN_BOND_KEEP_ALIGN = CHAN_BOND_KEEP_ALIGN; // Default: "FALSE"
			this->CHAN_BOND_MAX_SKEW = CHAN_BOND_MAX_SKEW; // Default: 7
			this->CHAN_BOND_SEQ_1_1 = CHAN_BOND_SEQ_1_1; // Default: 10'b0101111100
			this->CHAN_BOND_SEQ_1_2 = CHAN_BOND_SEQ_1_2; // Default: 10'b0000000000
			this->CHAN_BOND_SEQ_1_3 = CHAN_BOND_SEQ_1_3; // Default: 10'b0000000000
			this->CHAN_BOND_SEQ_1_4 = CHAN_BOND_SEQ_1_4; // Default: 10'b0000000000
			this->CHAN_BOND_SEQ_1_ENABLE = CHAN_BOND_SEQ_1_ENABLE; // Default: 4'b1111
			this->CHAN_BOND_SEQ_2_1 = CHAN_BOND_SEQ_2_1; // Default: 10'b0100000000
			this->CHAN_BOND_SEQ_2_2 = CHAN_BOND_SEQ_2_2; // Default: 10'b0100000000
			this->CHAN_BOND_SEQ_2_3 = CHAN_BOND_SEQ_2_3; // Default: 10'b0100000000
			this->CHAN_BOND_SEQ_2_4 = CHAN_BOND_SEQ_2_4; // Default: 10'b0100000000
			this->CHAN_BOND_SEQ_2_ENABLE = CHAN_BOND_SEQ_2_ENABLE; // Default: 4'b1111
			this->CHAN_BOND_SEQ_2_USE = CHAN_BOND_SEQ_2_USE; // Default: "FALSE"
			this->CHAN_BOND_SEQ_LEN = CHAN_BOND_SEQ_LEN; // Default: 1
			this->CLK_CORRECT_USE = CLK_CORRECT_USE; // Default: "TRUE"
			this->CLK_COR_KEEP_IDLE = CLK_COR_KEEP_IDLE; // Default: "FALSE"
			this->CLK_COR_MAX_LAT = CLK_COR_MAX_LAT; // Default: 20
			this->CLK_COR_MIN_LAT = CLK_COR_MIN_LAT; // Default: 18
			this->CLK_COR_PRECEDENCE = CLK_COR_PRECEDENCE; // Default: "TRUE"
			this->CLK_COR_REPEAT_WAIT = CLK_COR_REPEAT_WAIT; // Default: 0
			this->CLK_COR_SEQ_1_1 = CLK_COR_SEQ_1_1; // Default: 10'b0100011100
			this->CLK_COR_SEQ_1_2 = CLK_COR_SEQ_1_2; // Default: 10'b0000000000
			this->CLK_COR_SEQ_1_3 = CLK_COR_SEQ_1_3; // Default: 10'b0000000000
			this->CLK_COR_SEQ_1_4 = CLK_COR_SEQ_1_4; // Default: 10'b0000000000
			this->CLK_COR_SEQ_1_ENABLE = CLK_COR_SEQ_1_ENABLE; // Default: 4'b1111
			this->CLK_COR_SEQ_2_1 = CLK_COR_SEQ_2_1; // Default: 10'b0100000000
			this->CLK_COR_SEQ_2_2 = CLK_COR_SEQ_2_2; // Default: 10'b0100000000
			this->CLK_COR_SEQ_2_3 = CLK_COR_SEQ_2_3; // Default: 10'b0100000000
			this->CLK_COR_SEQ_2_4 = CLK_COR_SEQ_2_4; // Default: 10'b0100000000
			this->CLK_COR_SEQ_2_ENABLE = CLK_COR_SEQ_2_ENABLE; // Default: 4'b1111
			this->CLK_COR_SEQ_2_USE = CLK_COR_SEQ_2_USE; // Default: "FALSE"
			this->CLK_COR_SEQ_LEN = CLK_COR_SEQ_LEN; // Default: 1
			this->CPLL_CFG = CPLL_CFG; // Default: 29'h00BC07DC
			this->CPLL_FBDIV = CPLL_FBDIV; // Default: 4
			this->CPLL_FBDIV_45 = CPLL_FBDIV_45; // Default: 5
			this->CPLL_INIT_CFG = CPLL_INIT_CFG; // Default: 24'h00001E
			this->CPLL_LOCK_CFG = CPLL_LOCK_CFG; // Default: 16'h01E8
			this->CPLL_REFCLK_DIV = CPLL_REFCLK_DIV; // Default: 1
			this->DEC_MCOMMA_DETECT = DEC_MCOMMA_DETECT; // Default: "TRUE"
			this->DEC_PCOMMA_DETECT = DEC_PCOMMA_DETECT; // Default: "TRUE"
			this->DEC_VALID_COMMA_ONLY = DEC_VALID_COMMA_ONLY; // Default: "TRUE"
			this->DMONITOR_CFG = DMONITOR_CFG; // Default: 24'h000A00
			this->ES_CLK_PHASE_SEL = ES_CLK_PHASE_SEL; // Default: 1'b0
			this->ES_CONTROL = ES_CONTROL; // Default: 6'b000000
			this->ES_ERRDET_EN = ES_ERRDET_EN; // Default: "FALSE"
			this->ES_EYE_SCAN_EN = ES_EYE_SCAN_EN; // Default: "TRUE"
			this->ES_HORZ_OFFSET = ES_HORZ_OFFSET; // Default: 12'h000
			this->ES_PMA_CFG = ES_PMA_CFG; // Default: 10'b0000000000
			this->ES_PRESCALE = ES_PRESCALE; // Default: 5'b00000
			this->ES_QUALIFIER = ES_QUALIFIER; // Default: 80'h00000000000000000000
			this->ES_QUAL_MASK = ES_QUAL_MASK; // Default: 80'h00000000000000000000
			this->ES_SDATA_MASK = ES_SDATA_MASK; // Default: 80'h00000000000000000000
			this->ES_VERT_OFFSET = ES_VERT_OFFSET; // Default: 9'b000000000
			this->FTS_DESKEW_SEQ_ENABLE = FTS_DESKEW_SEQ_ENABLE; // Default: 4'b1111
			this->FTS_LANE_DESKEW_CFG = FTS_LANE_DESKEW_CFG; // Default: 4'b1111
			this->FTS_LANE_DESKEW_EN = FTS_LANE_DESKEW_EN; // Default: "FALSE"
			this->GEARBOX_MODE = GEARBOX_MODE; // Default: 3'b000
			this->LOOPBACK_CFG = LOOPBACK_CFG; // Default: 1'b0
			this->OUTREFCLK_SEL_INV = OUTREFCLK_SEL_INV; // Default: 2'b11
			this->PCS_PCIE_EN = PCS_PCIE_EN; // Default: "FALSE"
			this->PCS_RSVD_ATTR = PCS_RSVD_ATTR; // Default: 48'h000000000000
			this->PD_TRANS_TIME_FROM_P2 = PD_TRANS_TIME_FROM_P2; // Default: 12'h03C
			this->PD_TRANS_TIME_NONE_P2 = PD_TRANS_TIME_NONE_P2; // Default: 8'h19
			this->PD_TRANS_TIME_TO_P2 = PD_TRANS_TIME_TO_P2; // Default: 8'h64
			this->PMA_RSV = PMA_RSV; // Default: 32'b00000000000000000000000010000000
			this->PMA_RSV2 = PMA_RSV2; // Default: 32'b00011100000000000000000000001010
			this->PMA_RSV3 = PMA_RSV3; // Default: 2'b00
			this->PMA_RSV4 = PMA_RSV4; // Default: 15'b000000000001000
			this->PMA_RSV5 = PMA_RSV5; // Default: 4'b0000
			this->RESET_POWERSAVE_DISABLE = RESET_POWERSAVE_DISABLE; // Default: 1'b0
			this->RXBUFRESET_TIME = RXBUFRESET_TIME; // Default: 5'b00001
			this->RXBUF_ADDR_MODE = RXBUF_ADDR_MODE; // Default: "FULL"
			this->RXBUF_EIDLE_HI_CNT = RXBUF_EIDLE_HI_CNT; // Default: 4'b1000
			this->RXBUF_EIDLE_LO_CNT = RXBUF_EIDLE_LO_CNT; // Default: 4'b0000
			this->RXBUF_EN = RXBUF_EN; // Default: "TRUE"
			this->RXBUF_RESET_ON_CB_CHANGE = RXBUF_RESET_ON_CB_CHANGE; // Default: "TRUE"
			this->RXBUF_RESET_ON_COMMAALIGN = RXBUF_RESET_ON_COMMAALIGN; // Default: "FALSE"
			this->RXBUF_RESET_ON_EIDLE = RXBUF_RESET_ON_EIDLE; // Default: "FALSE"
			this->RXBUF_RESET_ON_RATE_CHANGE = RXBUF_RESET_ON_RATE_CHANGE; // Default: "TRUE"
			this->RXBUF_THRESH_OVFLW = RXBUF_THRESH_OVFLW; // Default: 61
			this->RXBUF_THRESH_OVRD = RXBUF_THRESH_OVRD; // Default: "FALSE"
			this->RXBUF_THRESH_UNDFLW = RXBUF_THRESH_UNDFLW; // Default: 4
			this->RXCDRFREQRESET_TIME = RXCDRFREQRESET_TIME; // Default: 5'b00001
			this->RXCDRPHRESET_TIME = RXCDRPHRESET_TIME; // Default: 5'b00001
			this->RXCDR_CFG = RXCDR_CFG; // Default: 83'h0002007FE2000C208001A
			this->RXCDR_FR_RESET_ON_EIDLE = RXCDR_FR_RESET_ON_EIDLE; // Default: 1'b0
			this->RXCDR_HOLD_DURING_EIDLE = RXCDR_HOLD_DURING_EIDLE; // Default: 1'b0
			this->RXCDR_LOCK_CFG = RXCDR_LOCK_CFG; // Default: 6'b001001
			this->RXCDR_PH_RESET_ON_EIDLE = RXCDR_PH_RESET_ON_EIDLE; // Default: 1'b0
			this->RXDFELPMRESET_TIME = RXDFELPMRESET_TIME; // Default: 7'b0001111
			this->RXDLY_CFG = RXDLY_CFG; // Default: 16'h001F
			this->RXDLY_LCFG = RXDLY_LCFG; // Default: 9'h030
			this->RXDLY_TAP_CFG = RXDLY_TAP_CFG; // Default: 16'h0000
			this->RXGEARBOX_EN = RXGEARBOX_EN; // Default: "FALSE"
			this->RXISCANRESET_TIME = RXISCANRESET_TIME; // Default: 5'b00001
			this->RXLPM_HF_CFG = RXLPM_HF_CFG; // Default: 14'b00001000000000
			this->RXLPM_LF_CFG = RXLPM_LF_CFG; // Default: 18'b001001000000000000
			this->RXOOB_CFG = RXOOB_CFG; // Default: 7'b0000110
			this->RXOOB_CLK_CFG = RXOOB_CLK_CFG; // Default: "PMA"
			this->RXOSCALRESET_TIME = RXOSCALRESET_TIME; // Default: 5'b00011
			this->RXOSCALRESET_TIMEOUT = RXOSCALRESET_TIMEOUT; // Default: 5'b00000
			this->RXOUT_DIV = RXOUT_DIV; // Default: 2
			this->RXPCSRESET_TIME = RXPCSRESET_TIME; // Default: 5'b00001
			this->RXPHDLY_CFG = RXPHDLY_CFG; // Default: 24'h084020
			this->RXPH_CFG = RXPH_CFG; // Default: 24'hC00002
			this->RXPH_MONITOR_SEL = RXPH_MONITOR_SEL; // Default: 5'b00000
			this->RXPI_CFG0 = RXPI_CFG0; // Default: 2'b00
			this->RXPI_CFG1 = RXPI_CFG1; // Default: 2'b00
			this->RXPI_CFG2 = RXPI_CFG2; // Default: 2'b00
			this->RXPI_CFG3 = RXPI_CFG3; // Default: 2'b00
			this->RXPI_CFG4 = RXPI_CFG4; // Default: 1'b0
			this->RXPI_CFG5 = RXPI_CFG5; // Default: 1'b0
			this->RXPI_CFG6 = RXPI_CFG6; // Default: 3'b100
			this->RXPMARESET_TIME = RXPMARESET_TIME; // Default: 5'b00011
			this->RXPRBS_ERR_LOOPBACK = RXPRBS_ERR_LOOPBACK; // Default: 1'b0
			this->RXSLIDE_AUTO_WAIT = RXSLIDE_AUTO_WAIT; // Default: 7
			this->RXSLIDE_MODE = RXSLIDE_MODE; // Default: "OFF"
			this->RXSYNC_MULTILANE = RXSYNC_MULTILANE; // Default: 1'b0
			this->RXSYNC_OVRD = RXSYNC_OVRD; // Default: 1'b0
			this->RXSYNC_SKIP_DA = RXSYNC_SKIP_DA; // Default: 1'b0
			this->RX_BIAS_CFG = RX_BIAS_CFG; // Default: 24'b000011000000000000010000
			this->RX_BUFFER_CFG = RX_BUFFER_CFG; // Default: 6'b000000
			this->RX_CLK25_DIV = RX_CLK25_DIV; // Default: 7
			this->RX_CLKMUX_PD = RX_CLKMUX_PD; // Default: 1'b1
			this->RX_CM_SEL = RX_CM_SEL; // Default: 2'b11
			this->RX_CM_TRIM = RX_CM_TRIM; // Default: 4'b0100
			this->RX_DATA_WIDTH = RX_DATA_WIDTH; // Default: 20
			this->RX_DDI_SEL = RX_DDI_SEL; // Default: 6'b000000
			this->RX_DEBUG_CFG = RX_DEBUG_CFG; // Default: 14'b00000000000000
			this->RX_DEFER_RESET_BUF_EN = RX_DEFER_RESET_BUF_EN; // Default: "TRUE"
			this->RX_DFELPM_CFG0 = RX_DFELPM_CFG0; // Default: 4'b0110
			this->RX_DFELPM_CFG1 = RX_DFELPM_CFG1; // Default: 1'b0
			this->RX_DFELPM_KLKH_AGC_STUP_EN = RX_DFELPM_KLKH_AGC_STUP_EN; // Default: 1'b1
			this->RX_DFE_AGC_CFG0 = RX_DFE_AGC_CFG0; // Default: 2'b00
			this->RX_DFE_AGC_CFG1 = RX_DFE_AGC_CFG1; // Default: 3'b010
			this->RX_DFE_AGC_CFG2 = RX_DFE_AGC_CFG2; // Default: 4'b0000
			this->RX_DFE_AGC_OVRDEN = RX_DFE_AGC_OVRDEN; // Default: 1'b1
			this->RX_DFE_GAIN_CFG = RX_DFE_GAIN_CFG; // Default: 23'h0020C0
			this->RX_DFE_H2_CFG = RX_DFE_H2_CFG; // Default: 12'b000000000000
			this->RX_DFE_H3_CFG = RX_DFE_H3_CFG; // Default: 12'b000001000000
			this->RX_DFE_H4_CFG = RX_DFE_H4_CFG; // Default: 11'b00011100000
			this->RX_DFE_H5_CFG = RX_DFE_H5_CFG; // Default: 11'b00011100000
			this->RX_DFE_H6_CFG = RX_DFE_H6_CFG; // Default: 11'b00000100000
			this->RX_DFE_H7_CFG = RX_DFE_H7_CFG; // Default: 11'b00000100000
			this->RX_DFE_KL_CFG = RX_DFE_KL_CFG; // Default: 33'b000000000000000000000001100010000
			this->RX_DFE_KL_LPM_KH_CFG0 = RX_DFE_KL_LPM_KH_CFG0; // Default: 2'b01
			this->RX_DFE_KL_LPM_KH_CFG1 = RX_DFE_KL_LPM_KH_CFG1; // Default: 3'b010
			this->RX_DFE_KL_LPM_KH_CFG2 = RX_DFE_KL_LPM_KH_CFG2; // Default: 4'b0010
			this->RX_DFE_KL_LPM_KH_OVRDEN = RX_DFE_KL_LPM_KH_OVRDEN; // Default: 1'b1
			this->RX_DFE_KL_LPM_KL_CFG0 = RX_DFE_KL_LPM_KL_CFG0; // Default: 2'b10
			this->RX_DFE_KL_LPM_KL_CFG1 = RX_DFE_KL_LPM_KL_CFG1; // Default: 3'b010
			this->RX_DFE_KL_LPM_KL_CFG2 = RX_DFE_KL_LPM_KL_CFG2; // Default: 4'b0010
			this->RX_DFE_KL_LPM_KL_OVRDEN = RX_DFE_KL_LPM_KL_OVRDEN; // Default: 1'b1
			this->RX_DFE_LPM_CFG = RX_DFE_LPM_CFG; // Default: 16'h0080
			this->RX_DFE_LPM_HOLD_DURING_EIDLE = RX_DFE_LPM_HOLD_DURING_EIDLE; // Default: 1'b0
			this->RX_DFE_ST_CFG = RX_DFE_ST_CFG; // Default: 54'h00E100000C003F
			this->RX_DFE_UT_CFG = RX_DFE_UT_CFG; // Default: 17'b00011100000000000
			this->RX_DFE_VP_CFG = RX_DFE_VP_CFG; // Default: 17'b00011101010100011
			this->RX_DISPERR_SEQ_MATCH = RX_DISPERR_SEQ_MATCH; // Default: "TRUE"
			this->RX_INT_DATAWIDTH = RX_INT_DATAWIDTH; // Default: 0
			this->RX_OS_CFG = RX_OS_CFG; // Default: 13'b0000010000000
			this->RX_SIG_VALID_DLY = RX_SIG_VALID_DLY; // Default: 10
			this->RX_XCLK_SEL = RX_XCLK_SEL; // Default: "RXREC"
			this->SAS_MAX_COM = SAS_MAX_COM; // Default: 64
			this->SAS_MIN_COM = SAS_MIN_COM; // Default: 36
			this->SATA_BURST_SEQ_LEN = SATA_BURST_SEQ_LEN; // Default: 4'b1111
			this->SATA_BURST_VAL = SATA_BURST_VAL; // Default: 3'b100
			this->SATA_CPLL_CFG = SATA_CPLL_CFG; // Default: "VCO_3000MHZ"
			this->SATA_EIDLE_VAL = SATA_EIDLE_VAL; // Default: 3'b100
			this->SATA_MAX_BURST = SATA_MAX_BURST; // Default: 8
			this->SATA_MAX_INIT = SATA_MAX_INIT; // Default: 21
			this->SATA_MAX_WAKE = SATA_MAX_WAKE; // Default: 7
			this->SATA_MIN_BURST = SATA_MIN_BURST; // Default: 4
			this->SATA_MIN_INIT = SATA_MIN_INIT; // Default: 12
			this->SATA_MIN_WAKE = SATA_MIN_WAKE; // Default: 4
			this->SHOW_REALIGN_COMMA = SHOW_REALIGN_COMMA; // Default: "TRUE"
			this->SIM_CPLLREFCLK_SEL = SIM_CPLLREFCLK_SEL; // Default: 3'b001
			this->SIM_RECEIVER_DETECT_PASS = SIM_RECEIVER_DETECT_PASS; // Default: "TRUE"
			this->SIM_RESET_SPEEDUP = SIM_RESET_SPEEDUP; // Default: "TRUE"
			this->SIM_TX_EIDLE_DRIVE_LEVEL = SIM_TX_EIDLE_DRIVE_LEVEL; // Default: "X"
			this->SIM_VERSION = SIM_VERSION; // Default: "1.1"
			this->TERM_RCAL_CFG = TERM_RCAL_CFG; // Default: 15'b100001000010000
			this->TERM_RCAL_OVRD = TERM_RCAL_OVRD; // Default: 3'b000
			this->TRANS_TIME_RATE = TRANS_TIME_RATE; // Default: 8'h0E
			this->TST_RSV = TST_RSV; // Default: 32'h00000000
			this->TXBUF_EN = TXBUF_EN; // Default: "TRUE"
			this->TXBUF_RESET_ON_RATE_CHANGE = TXBUF_RESET_ON_RATE_CHANGE; // Default: "FALSE"
			this->TXDLY_CFG = TXDLY_CFG; // Default: 16'h001F
			this->TXDLY_LCFG = TXDLY_LCFG; // Default: 9'h030
			this->TXDLY_TAP_CFG = TXDLY_TAP_CFG; // Default: 16'h0000
			this->TXGEARBOX_EN = TXGEARBOX_EN; // Default: "FALSE"
			this->TXOOB_CFG = TXOOB_CFG; // Default: 1'b0
			this->TXOUT_DIV = TXOUT_DIV; // Default: 2
			this->TXPCSRESET_TIME = TXPCSRESET_TIME; // Default: 5'b00001
			this->TXPHDLY_CFG = TXPHDLY_CFG; // Default: 24'h084020
			this->TXPH_CFG = TXPH_CFG; // Default: 16'h0780
			this->TXPH_MONITOR_SEL = TXPH_MONITOR_SEL; // Default: 5'b00000
			this->TXPI_CFG0 = TXPI_CFG0; // Default: 2'b00
			this->TXPI_CFG1 = TXPI_CFG1; // Default: 2'b00
			this->TXPI_CFG2 = TXPI_CFG2; // Default: 2'b00
			this->TXPI_CFG3 = TXPI_CFG3; // Default: 1'b0
			this->TXPI_CFG4 = TXPI_CFG4; // Default: 1'b0
			this->TXPI_CFG5 = TXPI_CFG5; // Default: 3'b100
			this->TXPI_GREY_SEL = TXPI_GREY_SEL; // Default: 1'b0
			this->TXPI_INVSTROBE_SEL = TXPI_INVSTROBE_SEL; // Default: 1'b0
			this->TXPI_PPMCLK_SEL = TXPI_PPMCLK_SEL; // Default: "TXUSRCLK2"
			this->TXPI_PPM_CFG = TXPI_PPM_CFG; // Default: 8'b00000000
			this->TXPI_SYNFREQ_PPM = TXPI_SYNFREQ_PPM; // Default: 3'b000
			this->TXPMARESET_TIME = TXPMARESET_TIME; // Default: 5'b00001
			this->TXSYNC_MULTILANE = TXSYNC_MULTILANE; // Default: 1'b0
			this->TXSYNC_OVRD = TXSYNC_OVRD; // Default: 1'b0
			this->TXSYNC_SKIP_DA = TXSYNC_SKIP_DA; // Default: 1'b0
			this->TX_CLK25_DIV = TX_CLK25_DIV; // Default: 7
			this->TX_CLKMUX_PD = TX_CLKMUX_PD; // Default: 1'b1
			this->TX_DATA_WIDTH = TX_DATA_WIDTH; // Default: 20
			this->TX_DEEMPH0 = TX_DEEMPH0; // Default: 6'b000000
			this->TX_DEEMPH1 = TX_DEEMPH1; // Default: 6'b000000
			this->TX_DRIVE_MODE = TX_DRIVE_MODE; // Default: "DIRECT"
			this->TX_EIDLE_ASSERT_DELAY = TX_EIDLE_ASSERT_DELAY; // Default: 3'b110
			this->TX_EIDLE_DEASSERT_DELAY = TX_EIDLE_DEASSERT_DELAY; // Default: 3'b100
			this->TX_INT_DATAWIDTH = TX_INT_DATAWIDTH; // Default: 0
			this->TX_LOOPBACK_DRIVE_HIZ = TX_LOOPBACK_DRIVE_HIZ; // Default: "FALSE"
			this->TX_MAINCURSOR_SEL = TX_MAINCURSOR_SEL; // Default: 1'b0
			this->TX_MARGIN_FULL_0 = TX_MARGIN_FULL_0; // Default: 7'b1001110
			this->TX_MARGIN_FULL_1 = TX_MARGIN_FULL_1; // Default: 7'b1001001
			this->TX_MARGIN_FULL_2 = TX_MARGIN_FULL_2; // Default: 7'b1000101
			this->TX_MARGIN_FULL_3 = TX_MARGIN_FULL_3; // Default: 7'b1000010
			this->TX_MARGIN_FULL_4 = TX_MARGIN_FULL_4; // Default: 7'b1000000
			this->TX_MARGIN_LOW_0 = TX_MARGIN_LOW_0; // Default: 7'b1000110
			this->TX_MARGIN_LOW_1 = TX_MARGIN_LOW_1; // Default: 7'b1000100
			this->TX_MARGIN_LOW_2 = TX_MARGIN_LOW_2; // Default: 7'b1000010
			this->TX_MARGIN_LOW_3 = TX_MARGIN_LOW_3; // Default: 7'b1000000
			this->TX_MARGIN_LOW_4 = TX_MARGIN_LOW_4; // Default: 7'b1000000
			this->TX_QPI_STATUS_EN = TX_QPI_STATUS_EN; // Default: 1'b0
			this->TX_RXDETECT_CFG = TX_RXDETECT_CFG; // Default: 14'h1832
			this->TX_RXDETECT_PRECHARGE_TIME = TX_RXDETECT_PRECHARGE_TIME; // Default: 17'h00000
			this->TX_RXDETECT_REF = TX_RXDETECT_REF; // Default: 3'b100
			this->TX_XCLK_SEL = TX_XCLK_SEL; // Default: "TXUSR"
			this->UCODEER_CLR = UCODEER_CLR; // Default: 1'b0
			this->USE_PCS_CLK_PHASE_SEL = USE_PCS_CLK_PHASE_SEL; // Default: 1'b0
			//Verilog Ports in definition order:
			this->CPLLFBCLKLOST = CPLLFBCLKLOST; // net ID: CPLLFBCLKLOST lsb: 0  msb: 0 OUTPUT
			this->CPLLLOCK = CPLLLOCK; // net ID: CPLLLOCK lsb: 0  msb: 0 OUTPUT
			this->CPLLREFCLKLOST = CPLLREFCLKLOST; // net ID: CPLLREFCLKLOST lsb: 0  msb: 0 OUTPUT
			this->DMONITOROUT = DMONITOROUT; // net ID: DMONITOROUT lsb: 0  msb: 0 OUTPUT
			this->DRPDO = DRPDO; // net ID: DRPDO lsb: 0  msb: 0 OUTPUT
			this->DRPRDY = DRPRDY; // net ID: DRPRDY lsb: 0  msb: 0 OUTPUT
			this->EYESCANDATAERROR = EYESCANDATAERROR; // net ID: EYESCANDATAERROR lsb: 0  msb: 0 OUTPUT
			this->GTHTXN = GTHTXN; // net ID: GTHTXN lsb: 0  msb: 0 OUTPUT
			this->GTHTXP = GTHTXP; // net ID: GTHTXP lsb: 0  msb: 0 OUTPUT
			this->GTREFCLKMONITOR = GTREFCLKMONITOR; // net ID: GTREFCLKMONITOR lsb: 0  msb: 0 OUTPUT
			this->PCSRSVDOUT = PCSRSVDOUT; // net ID: PCSRSVDOUT lsb: 0  msb: 0 OUTPUT
			this->PHYSTATUS = PHYSTATUS; // net ID: PHYSTATUS lsb: 0  msb: 0 OUTPUT
			this->RSOSINTDONE = RSOSINTDONE; // net ID: RSOSINTDONE lsb: 0  msb: 0 OUTPUT
			this->RXBUFSTATUS = RXBUFSTATUS; // net ID: RXBUFSTATUS lsb: 0  msb: 0 OUTPUT
			this->RXBYTEISALIGNED = RXBYTEISALIGNED; // net ID: RXBYTEISALIGNED lsb: 0  msb: 0 OUTPUT
			this->RXBYTEREALIGN = RXBYTEREALIGN; // net ID: RXBYTEREALIGN lsb: 0  msb: 0 OUTPUT
			this->RXCDRLOCK = RXCDRLOCK; // net ID: RXCDRLOCK lsb: 0  msb: 0 OUTPUT
			this->RXCHANBONDSEQ = RXCHANBONDSEQ; // net ID: RXCHANBONDSEQ lsb: 0  msb: 0 OUTPUT
			this->RXCHANISALIGNED = RXCHANISALIGNED; // net ID: RXCHANISALIGNED lsb: 0  msb: 0 OUTPUT
			this->RXCHANREALIGN = RXCHANREALIGN; // net ID: RXCHANREALIGN lsb: 0  msb: 0 OUTPUT
			this->RXCHARISCOMMA = RXCHARISCOMMA; // net ID: RXCHARISCOMMA lsb: 0  msb: 0 OUTPUT
			this->RXCHARISK = RXCHARISK; // net ID: RXCHARISK lsb: 0  msb: 0 OUTPUT
			this->RXCHBONDO = RXCHBONDO; // net ID: RXCHBONDO lsb: 0  msb: 0 OUTPUT
			this->RXCLKCORCNT = RXCLKCORCNT; // net ID: RXCLKCORCNT lsb: 0  msb: 0 OUTPUT
			this->RXCOMINITDET = RXCOMINITDET; // net ID: RXCOMINITDET lsb: 0  msb: 0 OUTPUT
			this->RXCOMMADET = RXCOMMADET; // net ID: RXCOMMADET lsb: 0  msb: 0 OUTPUT
			this->RXCOMSASDET = RXCOMSASDET; // net ID: RXCOMSASDET lsb: 0  msb: 0 OUTPUT
			this->RXCOMWAKEDET = RXCOMWAKEDET; // net ID: RXCOMWAKEDET lsb: 0  msb: 0 OUTPUT
			this->RXDATA = RXDATA; // net ID: RXDATA lsb: 0  msb: 0 OUTPUT
			this->RXDATAVALID = RXDATAVALID; // net ID: RXDATAVALID lsb: 0  msb: 0 OUTPUT
			this->RXDFESLIDETAPSTARTED = RXDFESLIDETAPSTARTED; // net ID: RXDFESLIDETAPSTARTED lsb: 0  msb: 0 OUTPUT
			this->RXDFESLIDETAPSTROBEDONE = RXDFESLIDETAPSTROBEDONE; // net ID: RXDFESLIDETAPSTROBEDONE lsb: 0  msb: 0 OUTPUT
			this->RXDFESLIDETAPSTROBESTARTED = RXDFESLIDETAPSTROBESTARTED; // net ID: RXDFESLIDETAPSTROBESTARTED lsb: 0  msb: 0 OUTPUT
			this->RXDFESTADAPTDONE = RXDFESTADAPTDONE; // net ID: RXDFESTADAPTDONE lsb: 0  msb: 0 OUTPUT
			this->RXDISPERR = RXDISPERR; // net ID: RXDISPERR lsb: 0  msb: 0 OUTPUT
			this->RXDLYSRESETDONE = RXDLYSRESETDONE; // net ID: RXDLYSRESETDONE lsb: 0  msb: 0 OUTPUT
			this->RXELECIDLE = RXELECIDLE; // net ID: RXELECIDLE lsb: 0  msb: 0 OUTPUT
			this->RXHEADER = RXHEADER; // net ID: RXHEADER lsb: 0  msb: 0 OUTPUT
			this->RXHEADERVALID = RXHEADERVALID; // net ID: RXHEADERVALID lsb: 0  msb: 0 OUTPUT
			this->RXMONITOROUT = RXMONITOROUT; // net ID: RXMONITOROUT lsb: 0  msb: 0 OUTPUT
			this->RXNOTINTABLE = RXNOTINTABLE; // net ID: RXNOTINTABLE lsb: 0  msb: 0 OUTPUT
			this->RXOSINTSTARTED = RXOSINTSTARTED; // net ID: RXOSINTSTARTED lsb: 0  msb: 0 OUTPUT
			this->RXOSINTSTROBEDONE = RXOSINTSTROBEDONE; // net ID: RXOSINTSTROBEDONE lsb: 0  msb: 0 OUTPUT
			this->RXOSINTSTROBESTARTED = RXOSINTSTROBESTARTED; // net ID: RXOSINTSTROBESTARTED lsb: 0  msb: 0 OUTPUT
			this->RXOUTCLK = RXOUTCLK; // net ID: RXOUTCLK lsb: 0  msb: 0 OUTPUT
			this->RXOUTCLKFABRIC = RXOUTCLKFABRIC; // net ID: RXOUTCLKFABRIC lsb: 0  msb: 0 OUTPUT
			this->RXOUTCLKPCS = RXOUTCLKPCS; // net ID: RXOUTCLKPCS lsb: 0  msb: 0 OUTPUT
			this->RXPHALIGNDONE = RXPHALIGNDONE; // net ID: RXPHALIGNDONE lsb: 0  msb: 0 OUTPUT
			this->RXPHMONITOR = RXPHMONITOR; // net ID: RXPHMONITOR lsb: 0  msb: 0 OUTPUT
			this->RXPHSLIPMONITOR = RXPHSLIPMONITOR; // net ID: RXPHSLIPMONITOR lsb: 0  msb: 0 OUTPUT
			this->RXPMARESETDONE = RXPMARESETDONE; // net ID: RXPMARESETDONE lsb: 0  msb: 0 OUTPUT
			this->RXPRBSERR = RXPRBSERR; // net ID: RXPRBSERR lsb: 0  msb: 0 OUTPUT
			this->RXQPISENN = RXQPISENN; // net ID: RXQPISENN lsb: 0  msb: 0 OUTPUT
			this->RXQPISENP = RXQPISENP; // net ID: RXQPISENP lsb: 0  msb: 0 OUTPUT
			this->RXRATEDONE = RXRATEDONE; // net ID: RXRATEDONE lsb: 0  msb: 0 OUTPUT
			this->RXRESETDONE = RXRESETDONE; // net ID: RXRESETDONE lsb: 0  msb: 0 OUTPUT
			this->RXSTARTOFSEQ = RXSTARTOFSEQ; // net ID: RXSTARTOFSEQ lsb: 0  msb: 0 OUTPUT
			this->RXSTATUS = RXSTATUS; // net ID: RXSTATUS lsb: 0  msb: 0 OUTPUT
			this->RXSYNCDONE = RXSYNCDONE; // net ID: RXSYNCDONE lsb: 0  msb: 0 OUTPUT
			this->RXSYNCOUT = RXSYNCOUT; // net ID: RXSYNCOUT lsb: 0  msb: 0 OUTPUT
			this->RXVALID = RXVALID; // net ID: RXVALID lsb: 0  msb: 0 OUTPUT
			this->TXBUFSTATUS = TXBUFSTATUS; // net ID: TXBUFSTATUS lsb: 0  msb: 0 OUTPUT
			this->TXCOMFINISH = TXCOMFINISH; // net ID: TXCOMFINISH lsb: 0  msb: 0 OUTPUT
			this->TXDLYSRESETDONE = TXDLYSRESETDONE; // net ID: TXDLYSRESETDONE lsb: 0  msb: 0 OUTPUT
			this->TXGEARBOXREADY = TXGEARBOXREADY; // net ID: TXGEARBOXREADY lsb: 0  msb: 0 OUTPUT
			this->TXOUTCLK = TXOUTCLK; // net ID: TXOUTCLK lsb: 0  msb: 0 OUTPUT
			this->TXOUTCLKFABRIC = TXOUTCLKFABRIC; // net ID: TXOUTCLKFABRIC lsb: 0  msb: 0 OUTPUT
			this->TXOUTCLKPCS = TXOUTCLKPCS; // net ID: TXOUTCLKPCS lsb: 0  msb: 0 OUTPUT
			this->TXPHALIGNDONE = TXPHALIGNDONE; // net ID: TXPHALIGNDONE lsb: 0  msb: 0 OUTPUT
			this->TXPHINITDONE = TXPHINITDONE; // net ID: TXPHINITDONE lsb: 0  msb: 0 OUTPUT
			this->TXPMARESETDONE = TXPMARESETDONE; // net ID: TXPMARESETDONE lsb: 0  msb: 0 OUTPUT
			this->TXQPISENN = TXQPISENN; // net ID: TXQPISENN lsb: 0  msb: 0 OUTPUT
			this->TXQPISENP = TXQPISENP; // net ID: TXQPISENP lsb: 0  msb: 0 OUTPUT
			this->TXRATEDONE = TXRATEDONE; // net ID: TXRATEDONE lsb: 0  msb: 0 OUTPUT
			this->TXRESETDONE = TXRESETDONE; // net ID: TXRESETDONE lsb: 0  msb: 0 OUTPUT
			this->TXSYNCDONE = TXSYNCDONE; // net ID: TXSYNCDONE lsb: 0  msb: 0 OUTPUT
			this->TXSYNCOUT = TXSYNCOUT; // net ID: TXSYNCOUT lsb: 0  msb: 0 OUTPUT
			this->CFGRESET = CFGRESET; // net ID: CFGRESET lsb: 0  msb: 0 INPUT
			this->CLKRSVD0 = CLKRSVD0; // net ID: CLKRSVD0 lsb: 0  msb: 0 INPUT
			this->CLKRSVD1 = CLKRSVD1; // net ID: CLKRSVD1 lsb: 0  msb: 0 INPUT
			this->CPLLLOCKDETCLK = CPLLLOCKDETCLK; // net ID: CPLLLOCKDETCLK lsb: 0  msb: 0 INPUT
			this->CPLLLOCKEN = CPLLLOCKEN; // net ID: CPLLLOCKEN lsb: 0  msb: 0 INPUT
			this->CPLLPD = CPLLPD; // net ID: CPLLPD lsb: 0  msb: 0 INPUT
			this->CPLLREFCLKSEL = CPLLREFCLKSEL; // net ID: CPLLREFCLKSEL lsb: 0  msb: 2 INPUT
			this->CPLLRESET = CPLLRESET; // net ID: CPLLRESET lsb: 0  msb: 0 INPUT
			this->DMONFIFORESET = DMONFIFORESET; // net ID: DMONFIFORESET lsb: 0  msb: 0 INPUT
			this->DMONITORCLK = DMONITORCLK; // net ID: DMONITORCLK lsb: 0  msb: 0 INPUT
			this->DRPADDR = DRPADDR; // net ID: DRPADDR lsb: 0  msb: 8 INPUT
			this->DRPCLK = DRPCLK; // net ID: DRPCLK lsb: 0  msb: 0 INPUT
			this->DRPDI = DRPDI; // net ID: DRPDI lsb: 0  msb: 15 INPUT
			this->DRPEN = DRPEN; // net ID: DRPEN lsb: 0  msb: 0 INPUT
			this->DRPWE = DRPWE; // net ID: DRPWE lsb: 0  msb: 0 INPUT
			this->EYESCANMODE = EYESCANMODE; // net ID: EYESCANMODE lsb: 0  msb: 0 INPUT
			this->EYESCANRESET = EYESCANRESET; // net ID: EYESCANRESET lsb: 0  msb: 0 INPUT
			this->EYESCANTRIGGER = EYESCANTRIGGER; // net ID: EYESCANTRIGGER lsb: 0  msb: 0 INPUT
			this->GTGREFCLK = GTGREFCLK; // net ID: GTGREFCLK lsb: 0  msb: 0 INPUT
			this->GTHRXN = GTHRXN; // net ID: GTHRXN lsb: 0  msb: 0 INPUT
			this->GTHRXP = GTHRXP; // net ID: GTHRXP lsb: 0  msb: 0 INPUT
			this->GTNORTHREFCLK0 = GTNORTHREFCLK0; // net ID: GTNORTHREFCLK0 lsb: 0  msb: 0 INPUT
			this->GTNORTHREFCLK1 = GTNORTHREFCLK1; // net ID: GTNORTHREFCLK1 lsb: 0  msb: 0 INPUT
			this->GTREFCLK0 = GTREFCLK0; // net ID: GTREFCLK0 lsb: 0  msb: 0 INPUT
			this->GTREFCLK1 = GTREFCLK1; // net ID: GTREFCLK1 lsb: 0  msb: 0 INPUT
			this->GTRESETSEL = GTRESETSEL; // net ID: GTRESETSEL lsb: 0  msb: 0 INPUT
			this->GTRSVD = GTRSVD; // net ID: GTRSVD lsb: 0  msb: 15 INPUT
			this->GTRXRESET = GTRXRESET; // net ID: GTRXRESET lsb: 0  msb: 0 INPUT
			this->GTSOUTHREFCLK0 = GTSOUTHREFCLK0; // net ID: GTSOUTHREFCLK0 lsb: 0  msb: 0 INPUT
			this->GTSOUTHREFCLK1 = GTSOUTHREFCLK1; // net ID: GTSOUTHREFCLK1 lsb: 0  msb: 0 INPUT
			this->GTTXRESET = GTTXRESET; // net ID: GTTXRESET lsb: 0  msb: 0 INPUT
			this->LOOPBACK = LOOPBACK; // net ID: LOOPBACK lsb: 0  msb: 2 INPUT
			this->PCSRSVDIN = PCSRSVDIN; // net ID: PCSRSVDIN lsb: 0  msb: 15 INPUT
			this->PCSRSVDIN2 = PCSRSVDIN2; // net ID: PCSRSVDIN2 lsb: 0  msb: 4 INPUT
			this->PMARSVDIN = PMARSVDIN; // net ID: PMARSVDIN lsb: 0  msb: 4 INPUT
			this->QPLLCLK = QPLLCLK; // net ID: QPLLCLK lsb: 0  msb: 0 INPUT
			this->QPLLREFCLK = QPLLREFCLK; // net ID: QPLLREFCLK lsb: 0  msb: 0 INPUT
			this->RESETOVRD = RESETOVRD; // net ID: RESETOVRD lsb: 0  msb: 0 INPUT
			this->RX8B10BEN = RX8B10BEN; // net ID: RX8B10BEN lsb: 0  msb: 0 INPUT
			this->RXADAPTSELTEST = RXADAPTSELTEST; // net ID: RXADAPTSELTEST lsb: 0  msb: 13 INPUT
			this->RXBUFRESET = RXBUFRESET; // net ID: RXBUFRESET lsb: 0  msb: 0 INPUT
			this->RXCDRFREQRESET = RXCDRFREQRESET; // net ID: RXCDRFREQRESET lsb: 0  msb: 0 INPUT
			this->RXCDRHOLD = RXCDRHOLD; // net ID: RXCDRHOLD lsb: 0  msb: 0 INPUT
			this->RXCDROVRDEN = RXCDROVRDEN; // net ID: RXCDROVRDEN lsb: 0  msb: 0 INPUT
			this->RXCDRRESET = RXCDRRESET; // net ID: RXCDRRESET lsb: 0  msb: 0 INPUT
			this->RXCDRRESETRSV = RXCDRRESETRSV; // net ID: RXCDRRESETRSV lsb: 0  msb: 0 INPUT
			this->RXCHBONDEN = RXCHBONDEN; // net ID: RXCHBONDEN lsb: 0  msb: 0 INPUT
			this->RXCHBONDI = RXCHBONDI; // net ID: RXCHBONDI lsb: 0  msb: 4 INPUT
			this->RXCHBONDLEVEL = RXCHBONDLEVEL; // net ID: RXCHBONDLEVEL lsb: 0  msb: 2 INPUT
			this->RXCHBONDMASTER = RXCHBONDMASTER; // net ID: RXCHBONDMASTER lsb: 0  msb: 0 INPUT
			this->RXCHBONDSLAVE = RXCHBONDSLAVE; // net ID: RXCHBONDSLAVE lsb: 0  msb: 0 INPUT
			this->RXCOMMADETEN = RXCOMMADETEN; // net ID: RXCOMMADETEN lsb: 0  msb: 0 INPUT
			this->RXDDIEN = RXDDIEN; // net ID: RXDDIEN lsb: 0  msb: 0 INPUT
			this->RXDFEAGCHOLD = RXDFEAGCHOLD; // net ID: RXDFEAGCHOLD lsb: 0  msb: 0 INPUT
			this->RXDFEAGCOVRDEN = RXDFEAGCOVRDEN; // net ID: RXDFEAGCOVRDEN lsb: 0  msb: 0 INPUT
			this->RXDFEAGCTRL = RXDFEAGCTRL; // net ID: RXDFEAGCTRL lsb: 0  msb: 4 INPUT
			this->RXDFECM1EN = RXDFECM1EN; // net ID: RXDFECM1EN lsb: 0  msb: 0 INPUT
			this->RXDFELFHOLD = RXDFELFHOLD; // net ID: RXDFELFHOLD lsb: 0  msb: 0 INPUT
			this->RXDFELFOVRDEN = RXDFELFOVRDEN; // net ID: RXDFELFOVRDEN lsb: 0  msb: 0 INPUT
			this->RXDFELPMRESET = RXDFELPMRESET; // net ID: RXDFELPMRESET lsb: 0  msb: 0 INPUT
			this->RXDFESLIDETAP = RXDFESLIDETAP; // net ID: RXDFESLIDETAP lsb: 0  msb: 4 INPUT
			this->RXDFESLIDETAPADAPTEN = RXDFESLIDETAPADAPTEN; // net ID: RXDFESLIDETAPADAPTEN lsb: 0  msb: 0 INPUT
			this->RXDFESLIDETAPHOLD = RXDFESLIDETAPHOLD; // net ID: RXDFESLIDETAPHOLD lsb: 0  msb: 0 INPUT
			this->RXDFESLIDETAPID = RXDFESLIDETAPID; // net ID: RXDFESLIDETAPID lsb: 0  msb: 5 INPUT
			this->RXDFESLIDETAPINITOVRDEN = RXDFESLIDETAPINITOVRDEN; // net ID: RXDFESLIDETAPINITOVRDEN lsb: 0  msb: 0 INPUT
			this->RXDFESLIDETAPONLYADAPTEN = RXDFESLIDETAPONLYADAPTEN; // net ID: RXDFESLIDETAPONLYADAPTEN lsb: 0  msb: 0 INPUT
			this->RXDFESLIDETAPOVRDEN = RXDFESLIDETAPOVRDEN; // net ID: RXDFESLIDETAPOVRDEN lsb: 0  msb: 0 INPUT
			this->RXDFESLIDETAPSTROBE = RXDFESLIDETAPSTROBE; // net ID: RXDFESLIDETAPSTROBE lsb: 0  msb: 0 INPUT
			this->RXDFETAP2HOLD = RXDFETAP2HOLD; // net ID: RXDFETAP2HOLD lsb: 0  msb: 0 INPUT
			this->RXDFETAP2OVRDEN = RXDFETAP2OVRDEN; // net ID: RXDFETAP2OVRDEN lsb: 0  msb: 0 INPUT
			this->RXDFETAP3HOLD = RXDFETAP3HOLD; // net ID: RXDFETAP3HOLD lsb: 0  msb: 0 INPUT
			this->RXDFETAP3OVRDEN = RXDFETAP3OVRDEN; // net ID: RXDFETAP3OVRDEN lsb: 0  msb: 0 INPUT
			this->RXDFETAP4HOLD = RXDFETAP4HOLD; // net ID: RXDFETAP4HOLD lsb: 0  msb: 0 INPUT
			this->RXDFETAP4OVRDEN = RXDFETAP4OVRDEN; // net ID: RXDFETAP4OVRDEN lsb: 0  msb: 0 INPUT
			this->RXDFETAP5HOLD = RXDFETAP5HOLD; // net ID: RXDFETAP5HOLD lsb: 0  msb: 0 INPUT
			this->RXDFETAP5OVRDEN = RXDFETAP5OVRDEN; // net ID: RXDFETAP5OVRDEN lsb: 0  msb: 0 INPUT
			this->RXDFETAP6HOLD = RXDFETAP6HOLD; // net ID: RXDFETAP6HOLD lsb: 0  msb: 0 INPUT
			this->RXDFETAP6OVRDEN = RXDFETAP6OVRDEN; // net ID: RXDFETAP6OVRDEN lsb: 0  msb: 0 INPUT
			this->RXDFETAP7HOLD = RXDFETAP7HOLD; // net ID: RXDFETAP7HOLD lsb: 0  msb: 0 INPUT
			this->RXDFETAP7OVRDEN = RXDFETAP7OVRDEN; // net ID: RXDFETAP7OVRDEN lsb: 0  msb: 0 INPUT
			this->RXDFEUTHOLD = RXDFEUTHOLD; // net ID: RXDFEUTHOLD lsb: 0  msb: 0 INPUT
			this->RXDFEUTOVRDEN = RXDFEUTOVRDEN; // net ID: RXDFEUTOVRDEN lsb: 0  msb: 0 INPUT
			this->RXDFEVPHOLD = RXDFEVPHOLD; // net ID: RXDFEVPHOLD lsb: 0  msb: 0 INPUT
			this->RXDFEVPOVRDEN = RXDFEVPOVRDEN; // net ID: RXDFEVPOVRDEN lsb: 0  msb: 0 INPUT
			this->RXDFEVSEN = RXDFEVSEN; // net ID: RXDFEVSEN lsb: 0  msb: 0 INPUT
			this->RXDFEXYDEN = RXDFEXYDEN; // net ID: RXDFEXYDEN lsb: 0  msb: 0 INPUT
			this->RXDLYBYPASS = RXDLYBYPASS; // net ID: RXDLYBYPASS lsb: 0  msb: 0 INPUT
			this->RXDLYEN = RXDLYEN; // net ID: RXDLYEN lsb: 0  msb: 0 INPUT
			this->RXDLYOVRDEN = RXDLYOVRDEN; // net ID: RXDLYOVRDEN lsb: 0  msb: 0 INPUT
			this->RXDLYSRESET = RXDLYSRESET; // net ID: RXDLYSRESET lsb: 0  msb: 0 INPUT
			this->RXELECIDLEMODE = RXELECIDLEMODE; // net ID: RXELECIDLEMODE lsb: 0  msb: 1 INPUT
			this->RXGEARBOXSLIP = RXGEARBOXSLIP; // net ID: RXGEARBOXSLIP lsb: 0  msb: 0 INPUT
			this->RXLPMEN = RXLPMEN; // net ID: RXLPMEN lsb: 0  msb: 0 INPUT
			this->RXLPMHFHOLD = RXLPMHFHOLD; // net ID: RXLPMHFHOLD lsb: 0  msb: 0 INPUT
			this->RXLPMHFOVRDEN = RXLPMHFOVRDEN; // net ID: RXLPMHFOVRDEN lsb: 0  msb: 0 INPUT
			this->RXLPMLFHOLD = RXLPMLFHOLD; // net ID: RXLPMLFHOLD lsb: 0  msb: 0 INPUT
			this->RXLPMLFKLOVRDEN = RXLPMLFKLOVRDEN; // net ID: RXLPMLFKLOVRDEN lsb: 0  msb: 0 INPUT
			this->RXMCOMMAALIGNEN = RXMCOMMAALIGNEN; // net ID: RXMCOMMAALIGNEN lsb: 0  msb: 0 INPUT
			this->RXMONITORSEL = RXMONITORSEL; // net ID: RXMONITORSEL lsb: 0  msb: 1 INPUT
			this->RXOOBRESET = RXOOBRESET; // net ID: RXOOBRESET lsb: 0  msb: 0 INPUT
			this->RXOSCALRESET = RXOSCALRESET; // net ID: RXOSCALRESET lsb: 0  msb: 0 INPUT
			this->RXOSHOLD = RXOSHOLD; // net ID: RXOSHOLD lsb: 0  msb: 0 INPUT
			this->RXOSINTCFG = RXOSINTCFG; // net ID: RXOSINTCFG lsb: 0  msb: 3 INPUT
			this->RXOSINTEN = RXOSINTEN; // net ID: RXOSINTEN lsb: 0  msb: 0 INPUT
			this->RXOSINTHOLD = RXOSINTHOLD; // net ID: RXOSINTHOLD lsb: 0  msb: 0 INPUT
			this->RXOSINTID0 = RXOSINTID0; // net ID: RXOSINTID0 lsb: 0  msb: 3 INPUT
			this->RXOSINTNTRLEN = RXOSINTNTRLEN; // net ID: RXOSINTNTRLEN lsb: 0  msb: 0 INPUT
			this->RXOSINTOVRDEN = RXOSINTOVRDEN; // net ID: RXOSINTOVRDEN lsb: 0  msb: 0 INPUT
			this->RXOSINTSTROBE = RXOSINTSTROBE; // net ID: RXOSINTSTROBE lsb: 0  msb: 0 INPUT
			this->RXOSINTTESTOVRDEN = RXOSINTTESTOVRDEN; // net ID: RXOSINTTESTOVRDEN lsb: 0  msb: 0 INPUT
			this->RXOSOVRDEN = RXOSOVRDEN; // net ID: RXOSOVRDEN lsb: 0  msb: 0 INPUT
			this->RXOUTCLKSEL = RXOUTCLKSEL; // net ID: RXOUTCLKSEL lsb: 0  msb: 2 INPUT
			this->RXPCOMMAALIGNEN = RXPCOMMAALIGNEN; // net ID: RXPCOMMAALIGNEN lsb: 0  msb: 0 INPUT
			this->RXPCSRESET = RXPCSRESET; // net ID: RXPCSRESET lsb: 0  msb: 0 INPUT
			this->RXPD = RXPD; // net ID: RXPD lsb: 0  msb: 1 INPUT
			this->RXPHALIGN = RXPHALIGN; // net ID: RXPHALIGN lsb: 0  msb: 0 INPUT
			this->RXPHALIGNEN = RXPHALIGNEN; // net ID: RXPHALIGNEN lsb: 0  msb: 0 INPUT
			this->RXPHDLYPD = RXPHDLYPD; // net ID: RXPHDLYPD lsb: 0  msb: 0 INPUT
			this->RXPHDLYRESET = RXPHDLYRESET; // net ID: RXPHDLYRESET lsb: 0  msb: 0 INPUT
			this->RXPHOVRDEN = RXPHOVRDEN; // net ID: RXPHOVRDEN lsb: 0  msb: 0 INPUT
			this->RXPMARESET = RXPMARESET; // net ID: RXPMARESET lsb: 0  msb: 0 INPUT
			this->RXPOLARITY = RXPOLARITY; // net ID: RXPOLARITY lsb: 0  msb: 0 INPUT
			this->RXPRBSCNTRESET = RXPRBSCNTRESET; // net ID: RXPRBSCNTRESET lsb: 0  msb: 0 INPUT
			this->RXPRBSSEL = RXPRBSSEL; // net ID: RXPRBSSEL lsb: 0  msb: 2 INPUT
			this->RXQPIEN = RXQPIEN; // net ID: RXQPIEN lsb: 0  msb: 0 INPUT
			this->RXRATE = RXRATE; // net ID: RXRATE lsb: 0  msb: 2 INPUT
			this->RXRATEMODE = RXRATEMODE; // net ID: RXRATEMODE lsb: 0  msb: 0 INPUT
			this->RXSLIDE = RXSLIDE; // net ID: RXSLIDE lsb: 0  msb: 0 INPUT
			this->RXSYNCALLIN = RXSYNCALLIN; // net ID: RXSYNCALLIN lsb: 0  msb: 0 INPUT
			this->RXSYNCIN = RXSYNCIN; // net ID: RXSYNCIN lsb: 0  msb: 0 INPUT
			this->RXSYNCMODE = RXSYNCMODE; // net ID: RXSYNCMODE lsb: 0  msb: 0 INPUT
			this->RXSYSCLKSEL = RXSYSCLKSEL; // net ID: RXSYSCLKSEL lsb: 0  msb: 1 INPUT
			this->RXUSERRDY = RXUSERRDY; // net ID: RXUSERRDY lsb: 0  msb: 0 INPUT
			this->RXUSRCLK = RXUSRCLK; // net ID: RXUSRCLK lsb: 0  msb: 0 INPUT
			this->RXUSRCLK2 = RXUSRCLK2; // net ID: RXUSRCLK2 lsb: 0  msb: 0 INPUT
			this->SETERRSTATUS = SETERRSTATUS; // net ID: SETERRSTATUS lsb: 0  msb: 0 INPUT
			this->SIGVALIDCLK = SIGVALIDCLK; // net ID: SIGVALIDCLK lsb: 0  msb: 0 INPUT
			this->TSTIN = TSTIN; // net ID: TSTIN lsb: 0  msb: 19 INPUT
			this->TX8B10BBYPASS = TX8B10BBYPASS; // net ID: TX8B10BBYPASS lsb: 0  msb: 7 INPUT
			this->TX8B10BEN = TX8B10BEN; // net ID: TX8B10BEN lsb: 0  msb: 0 INPUT
			this->TXBUFDIFFCTRL = TXBUFDIFFCTRL; // net ID: TXBUFDIFFCTRL lsb: 0  msb: 2 INPUT
			this->TXCHARDISPMODE = TXCHARDISPMODE; // net ID: TXCHARDISPMODE lsb: 0  msb: 7 INPUT
			this->TXCHARDISPVAL = TXCHARDISPVAL; // net ID: TXCHARDISPVAL lsb: 0  msb: 7 INPUT
			this->TXCHARISK = TXCHARISK; // net ID: TXCHARISK lsb: 0  msb: 7 INPUT
			this->TXCOMINIT = TXCOMINIT; // net ID: TXCOMINIT lsb: 0  msb: 0 INPUT
			this->TXCOMSAS = TXCOMSAS; // net ID: TXCOMSAS lsb: 0  msb: 0 INPUT
			this->TXCOMWAKE = TXCOMWAKE; // net ID: TXCOMWAKE lsb: 0  msb: 0 INPUT
			this->TXDATA = TXDATA; // net ID: TXDATA lsb: 0  msb: 63 INPUT
			this->TXDEEMPH = TXDEEMPH; // net ID: TXDEEMPH lsb: 0  msb: 0 INPUT
			this->TXDETECTRX = TXDETECTRX; // net ID: TXDETECTRX lsb: 0  msb: 0 INPUT
			this->TXDIFFCTRL = TXDIFFCTRL; // net ID: TXDIFFCTRL lsb: 0  msb: 3 INPUT
			this->TXDIFFPD = TXDIFFPD; // net ID: TXDIFFPD lsb: 0  msb: 0 INPUT
			this->TXDLYBYPASS = TXDLYBYPASS; // net ID: TXDLYBYPASS lsb: 0  msb: 0 INPUT
			this->TXDLYEN = TXDLYEN; // net ID: TXDLYEN lsb: 0  msb: 0 INPUT
			this->TXDLYHOLD = TXDLYHOLD; // net ID: TXDLYHOLD lsb: 0  msb: 0 INPUT
			this->TXDLYOVRDEN = TXDLYOVRDEN; // net ID: TXDLYOVRDEN lsb: 0  msb: 0 INPUT
			this->TXDLYSRESET = TXDLYSRESET; // net ID: TXDLYSRESET lsb: 0  msb: 0 INPUT
			this->TXDLYUPDOWN = TXDLYUPDOWN; // net ID: TXDLYUPDOWN lsb: 0  msb: 0 INPUT
			this->TXELECIDLE = TXELECIDLE; // net ID: TXELECIDLE lsb: 0  msb: 0 INPUT
			this->TXHEADER = TXHEADER; // net ID: TXHEADER lsb: 0  msb: 2 INPUT
			this->TXINHIBIT = TXINHIBIT; // net ID: TXINHIBIT lsb: 0  msb: 0 INPUT
			this->TXMAINCURSOR = TXMAINCURSOR; // net ID: TXMAINCURSOR lsb: 0  msb: 6 INPUT
			this->TXMARGIN = TXMARGIN; // net ID: TXMARGIN lsb: 0  msb: 2 INPUT
			this->TXOUTCLKSEL = TXOUTCLKSEL; // net ID: TXOUTCLKSEL lsb: 0  msb: 2 INPUT
			this->TXPCSRESET = TXPCSRESET; // net ID: TXPCSRESET lsb: 0  msb: 0 INPUT
			this->TXPD = TXPD; // net ID: TXPD lsb: 0  msb: 1 INPUT
			this->TXPDELECIDLEMODE = TXPDELECIDLEMODE; // net ID: TXPDELECIDLEMODE lsb: 0  msb: 0 INPUT
			this->TXPHALIGN = TXPHALIGN; // net ID: TXPHALIGN lsb: 0  msb: 0 INPUT
			this->TXPHALIGNEN = TXPHALIGNEN; // net ID: TXPHALIGNEN lsb: 0  msb: 0 INPUT
			this->TXPHDLYPD = TXPHDLYPD; // net ID: TXPHDLYPD lsb: 0  msb: 0 INPUT
			this->TXPHDLYRESET = TXPHDLYRESET; // net ID: TXPHDLYRESET lsb: 0  msb: 0 INPUT
			this->TXPHDLYTSTCLK = TXPHDLYTSTCLK; // net ID: TXPHDLYTSTCLK lsb: 0  msb: 0 INPUT
			this->TXPHINIT = TXPHINIT; // net ID: TXPHINIT lsb: 0  msb: 0 INPUT
			this->TXPHOVRDEN = TXPHOVRDEN; // net ID: TXPHOVRDEN lsb: 0  msb: 0 INPUT
			this->TXPIPPMEN = TXPIPPMEN; // net ID: TXPIPPMEN lsb: 0  msb: 0 INPUT
			this->TXPIPPMOVRDEN = TXPIPPMOVRDEN; // net ID: TXPIPPMOVRDEN lsb: 0  msb: 0 INPUT
			this->TXPIPPMPD = TXPIPPMPD; // net ID: TXPIPPMPD lsb: 0  msb: 0 INPUT
			this->TXPIPPMSEL = TXPIPPMSEL; // net ID: TXPIPPMSEL lsb: 0  msb: 0 INPUT
			this->TXPIPPMSTEPSIZE = TXPIPPMSTEPSIZE; // net ID: TXPIPPMSTEPSIZE lsb: 0  msb: 4 INPUT
			this->TXPISOPD = TXPISOPD; // net ID: TXPISOPD lsb: 0  msb: 0 INPUT
			this->TXPMARESET = TXPMARESET; // net ID: TXPMARESET lsb: 0  msb: 0 INPUT
			this->TXPOLARITY = TXPOLARITY; // net ID: TXPOLARITY lsb: 0  msb: 0 INPUT
			this->TXPOSTCURSOR = TXPOSTCURSOR; // net ID: TXPOSTCURSOR lsb: 0  msb: 4 INPUT
			this->TXPOSTCURSORINV = TXPOSTCURSORINV; // net ID: TXPOSTCURSORINV lsb: 0  msb: 0 INPUT
			this->TXPRBSFORCEERR = TXPRBSFORCEERR; // net ID: TXPRBSFORCEERR lsb: 0  msb: 0 INPUT
			this->TXPRBSSEL = TXPRBSSEL; // net ID: TXPRBSSEL lsb: 0  msb: 2 INPUT
			this->TXPRECURSOR = TXPRECURSOR; // net ID: TXPRECURSOR lsb: 0  msb: 4 INPUT
			this->TXPRECURSORINV = TXPRECURSORINV; // net ID: TXPRECURSORINV lsb: 0  msb: 0 INPUT
			this->TXQPIBIASEN = TXQPIBIASEN; // net ID: TXQPIBIASEN lsb: 0  msb: 0 INPUT
			this->TXQPISTRONGPDOWN = TXQPISTRONGPDOWN; // net ID: TXQPISTRONGPDOWN lsb: 0  msb: 0 INPUT
			this->TXQPIWEAKPUP = TXQPIWEAKPUP; // net ID: TXQPIWEAKPUP lsb: 0  msb: 0 INPUT
			this->TXRATE = TXRATE; // net ID: TXRATE lsb: 0  msb: 2 INPUT
			this->TXRATEMODE = TXRATEMODE; // net ID: TXRATEMODE lsb: 0  msb: 0 INPUT
			this->TXSEQUENCE = TXSEQUENCE; // net ID: TXSEQUENCE lsb: 0  msb: 6 INPUT
			this->TXSTARTSEQ = TXSTARTSEQ; // net ID: TXSTARTSEQ lsb: 0  msb: 0 INPUT
			this->TXSWING = TXSWING; // net ID: TXSWING lsb: 0  msb: 0 INPUT
			this->TXSYNCALLIN = TXSYNCALLIN; // net ID: TXSYNCALLIN lsb: 0  msb: 0 INPUT
			this->TXSYNCIN = TXSYNCIN; // net ID: TXSYNCIN lsb: 0  msb: 0 INPUT
			this->TXSYNCMODE = TXSYNCMODE; // net ID: TXSYNCMODE lsb: 0  msb: 0 INPUT
			this->TXSYSCLKSEL = TXSYSCLKSEL; // net ID: TXSYSCLKSEL lsb: 0  msb: 1 INPUT
			this->TXUSERRDY = TXUSERRDY; // net ID: TXUSERRDY lsb: 0  msb: 0 INPUT
			this->TXUSRCLK = TXUSRCLK; // net ID: TXUSRCLK lsb: 0  msb: 0 INPUT
			this->TXUSRCLK2 = TXUSRCLK2; // net ID: TXUSRCLK2 lsb: 0  msb: 0 INPUT
			
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
