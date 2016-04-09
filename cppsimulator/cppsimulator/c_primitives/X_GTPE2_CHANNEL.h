/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_GTPE2_CHANNEL{

		//Verilog Parameters:
		parameter_string_t LOC;
		parameter_int_t ACJTAG_DEBUG_MODE;
		parameter_int_t ACJTAG_MODE;
		parameter_int_t ACJTAG_RESET;
		parameter_int_t ADAPT_CFG0;
		parameter_enum_t ALIGN_COMMA_DOUBLE;
		parameter_int_t ALIGN_COMMA_ENABLE;
		parameter_int_t ALIGN_COMMA_WORD;
		parameter_enum_t ALIGN_MCOMMA_DET;
		parameter_int_t ALIGN_MCOMMA_VALUE;
		parameter_enum_t ALIGN_PCOMMA_DET;
		parameter_int_t ALIGN_PCOMMA_VALUE;
		parameter_string_t CBCC_DATA_SOURCE_SEL;
		parameter_int_t CFOK_CFG;
		parameter_int_t CFOK_CFG2;
		parameter_int_t CFOK_CFG3;
		parameter_int_t CFOK_CFG4;
		parameter_int_t CFOK_CFG5;
		parameter_int_t CFOK_CFG6;
		parameter_enum_t CHAN_BOND_KEEP_ALIGN;
		parameter_int_t CHAN_BOND_MAX_SKEW;
		parameter_int_t CHAN_BOND_SEQ_1_1;
		parameter_int_t CHAN_BOND_SEQ_1_2;
		parameter_int_t CHAN_BOND_SEQ_1_3;
		parameter_int_t CHAN_BOND_SEQ_1_4;
		parameter_int_t CHAN_BOND_SEQ_1_ENABLE;
		parameter_int_t CHAN_BOND_SEQ_2_1;
		parameter_int_t CHAN_BOND_SEQ_2_2;
		parameter_int_t CHAN_BOND_SEQ_2_3;
		parameter_int_t CHAN_BOND_SEQ_2_4;
		parameter_int_t CHAN_BOND_SEQ_2_ENABLE;
		parameter_enum_t CHAN_BOND_SEQ_2_USE;
		parameter_int_t CHAN_BOND_SEQ_LEN;
		parameter_int_t CLK_COMMON_SWING;
		parameter_enum_t CLK_CORRECT_USE;
		parameter_enum_t CLK_COR_KEEP_IDLE;
		parameter_int_t CLK_COR_MAX_LAT;
		parameter_int_t CLK_COR_MIN_LAT;
		parameter_enum_t CLK_COR_PRECEDENCE;
		parameter_int_t CLK_COR_REPEAT_WAIT;
		parameter_int_t CLK_COR_SEQ_1_1;
		parameter_int_t CLK_COR_SEQ_1_2;
		parameter_int_t CLK_COR_SEQ_1_3;
		parameter_int_t CLK_COR_SEQ_1_4;
		parameter_int_t CLK_COR_SEQ_1_ENABLE;
		parameter_int_t CLK_COR_SEQ_2_1;
		parameter_int_t CLK_COR_SEQ_2_2;
		parameter_int_t CLK_COR_SEQ_2_3;
		parameter_int_t CLK_COR_SEQ_2_4;
		parameter_int_t CLK_COR_SEQ_2_ENABLE;
		parameter_enum_t CLK_COR_SEQ_2_USE;
		parameter_int_t CLK_COR_SEQ_LEN;
		parameter_enum_t DEC_MCOMMA_DETECT;
		parameter_enum_t DEC_PCOMMA_DETECT;
		parameter_enum_t DEC_VALID_COMMA_ONLY;
		parameter_int_t DMONITOR_CFG;
		parameter_int_t ES_CLK_PHASE_SEL;
		parameter_int_t ES_CONTROL;
		parameter_enum_t ES_ERRDET_EN;
		parameter_enum_t ES_EYE_SCAN_EN;
		parameter_int_t ES_HORZ_OFFSET;
		parameter_int_t ES_PMA_CFG;
		parameter_int_t ES_PRESCALE;
		parameter_int_t ES_QUALIFIER;
		parameter_int_t ES_QUAL_MASK;
		parameter_int_t ES_SDATA_MASK;
		parameter_int_t ES_VERT_OFFSET;
		parameter_int_t FTS_DESKEW_SEQ_ENABLE;
		parameter_int_t FTS_LANE_DESKEW_CFG;
		parameter_enum_t FTS_LANE_DESKEW_EN;
		parameter_int_t GEARBOX_MODE;
		parameter_int_t LOOPBACK_CFG;
		parameter_int_t OUTREFCLK_SEL_INV;
		parameter_enum_t PCS_PCIE_EN;
		parameter_int_t PCS_RSVD_ATTR;
		parameter_int_t PD_TRANS_TIME_FROM_P2;
		parameter_int_t PD_TRANS_TIME_NONE_P2;
		parameter_int_t PD_TRANS_TIME_TO_P2;
		parameter_int_t PMA_LOOPBACK_CFG;
		parameter_int_t PMA_RSV;
		parameter_int_t PMA_RSV2;
		parameter_int_t PMA_RSV3;
		parameter_int_t PMA_RSV4;
		parameter_int_t PMA_RSV5;
		parameter_int_t PMA_RSV6;
		parameter_int_t PMA_RSV7;
		parameter_int_t RXBUFRESET_TIME;
		parameter_string_t RXBUF_ADDR_MODE;
		parameter_int_t RXBUF_EIDLE_HI_CNT;
		parameter_int_t RXBUF_EIDLE_LO_CNT;
		parameter_enum_t RXBUF_EN;
		parameter_enum_t RXBUF_RESET_ON_CB_CHANGE;
		parameter_enum_t RXBUF_RESET_ON_COMMAALIGN;
		parameter_enum_t RXBUF_RESET_ON_EIDLE;
		parameter_enum_t RXBUF_RESET_ON_RATE_CHANGE;
		parameter_int_t RXBUF_THRESH_OVFLW;
		parameter_enum_t RXBUF_THRESH_OVRD;
		parameter_int_t RXBUF_THRESH_UNDFLW;
		parameter_int_t RXCDRFREQRESET_TIME;
		parameter_int_t RXCDRPHRESET_TIME;
		parameter_int_t RXCDR_CFG;
		parameter_int_t RXCDR_FR_RESET_ON_EIDLE;
		parameter_int_t RXCDR_HOLD_DURING_EIDLE;
		parameter_int_t RXCDR_LOCK_CFG;
		parameter_int_t RXCDR_PH_RESET_ON_EIDLE;
		parameter_int_t RXDLY_CFG;
		parameter_int_t RXDLY_LCFG;
		parameter_int_t RXDLY_TAP_CFG;
		parameter_enum_t RXGEARBOX_EN;
		parameter_int_t RXISCANRESET_TIME;
		parameter_int_t RXLPMRESET_TIME;
		parameter_int_t RXLPM_BIAS_STARTUP_DISABLE;
		parameter_int_t RXLPM_CFG;
		parameter_int_t RXLPM_CFG1;
		parameter_int_t RXLPM_CM_CFG;
		parameter_int_t RXLPM_GC_CFG;
		parameter_int_t RXLPM_GC_CFG2;
		parameter_int_t RXLPM_HF_CFG;
		parameter_int_t RXLPM_HF_CFG2;
		parameter_int_t RXLPM_HF_CFG3;
		parameter_int_t RXLPM_HOLD_DURING_EIDLE;
		parameter_int_t RXLPM_INCM_CFG;
		parameter_int_t RXLPM_IPCM_CFG;
		parameter_int_t RXLPM_LF_CFG;
		parameter_int_t RXLPM_LF_CFG2;
		parameter_int_t RXLPM_OSINT_CFG;
		parameter_int_t RXOOB_CFG;
		parameter_string_t RXOOB_CLK_CFG;
		parameter_int_t RXOSCALRESET_TIME;
		parameter_int_t RXOSCALRESET_TIMEOUT;
		parameter_int_t RXOUT_DIV;
		parameter_int_t RXPCSRESET_TIME;
		parameter_int_t RXPHDLY_CFG;
		parameter_int_t RXPH_CFG;
		parameter_int_t RXPH_MONITOR_SEL;
		parameter_int_t RXPI_CFG0;
		parameter_int_t RXPI_CFG1;
		parameter_int_t RXPI_CFG2;
		parameter_int_t RXPMARESET_TIME;
		parameter_int_t RXPRBS_ERR_LOOPBACK;
		parameter_int_t RXSLIDE_AUTO_WAIT;
		parameter_string_t RXSLIDE_MODE;
		parameter_int_t RXSYNC_MULTILANE;
		parameter_int_t RXSYNC_OVRD;
		parameter_int_t RXSYNC_SKIP_DA;
		parameter_int_t RX_BIAS_CFG;
		parameter_int_t RX_BUFFER_CFG;
		parameter_int_t RX_CLK25_DIV;
		parameter_int_t RX_CLKMUX_EN;
		parameter_int_t RX_CM_SEL;
		parameter_int_t RX_CM_TRIM;
		parameter_int_t RX_DATA_WIDTH;
		parameter_int_t RX_DDI_SEL;
		parameter_int_t RX_DEBUG_CFG;
		parameter_enum_t RX_DEFER_RESET_BUF_EN;
		parameter_enum_t RX_DISPERR_SEQ_MATCH;
		parameter_int_t RX_OS_CFG;
		parameter_int_t RX_SIG_VALID_DLY;
		parameter_string_t RX_XCLK_SEL;
		parameter_int_t SAS_MAX_COM;
		parameter_int_t SAS_MIN_COM;
		parameter_int_t SATA_BURST_SEQ_LEN;
		parameter_int_t SATA_BURST_VAL;
		parameter_int_t SATA_EIDLE_VAL;
		parameter_int_t SATA_MAX_BURST;
		parameter_int_t SATA_MAX_INIT;
		parameter_int_t SATA_MAX_WAKE;
		parameter_int_t SATA_MIN_BURST;
		parameter_int_t SATA_MIN_INIT;
		parameter_int_t SATA_MIN_WAKE;
		parameter_string_t SATA_PLL_CFG;
		parameter_enum_t SHOW_REALIGN_COMMA;
		parameter_enum_t SIM_RECEIVER_DETECT_PASS;
		parameter_enum_t SIM_RESET_SPEEDUP;
		parameter_string_t SIM_TX_EIDLE_DRIVE_LEVEL;
		parameter_string_t SIM_VERSION;
		parameter_int_t TERM_RCAL_CFG;
		parameter_int_t TERM_RCAL_OVRD;
		parameter_int_t TRANS_TIME_RATE;
		parameter_int_t TST_RSV;
		parameter_enum_t TXBUF_EN;
		parameter_enum_t TXBUF_RESET_ON_RATE_CHANGE;
		parameter_int_t TXDLY_CFG;
		parameter_int_t TXDLY_LCFG;
		parameter_int_t TXDLY_TAP_CFG;
		parameter_enum_t TXGEARBOX_EN;
		parameter_int_t TXOOB_CFG;
		parameter_int_t TXOUT_DIV;
		parameter_int_t TXPCSRESET_TIME;
		parameter_int_t TXPHDLY_CFG;
		parameter_int_t TXPH_CFG;
		parameter_int_t TXPH_MONITOR_SEL;
		parameter_int_t TXPI_CFG0;
		parameter_int_t TXPI_CFG1;
		parameter_int_t TXPI_CFG2;
		parameter_int_t TXPI_CFG3;
		parameter_int_t TXPI_CFG4;
		parameter_int_t TXPI_CFG5;
		parameter_int_t TXPI_GREY_SEL;
		parameter_int_t TXPI_INVSTROBE_SEL;
		parameter_string_t TXPI_PPMCLK_SEL;
		parameter_int_t TXPI_PPM_CFG;
		parameter_int_t TXPI_SYNFREQ_PPM;
		parameter_int_t TXPMARESET_TIME;
		parameter_int_t TXSYNC_MULTILANE;
		parameter_int_t TXSYNC_OVRD;
		parameter_int_t TXSYNC_SKIP_DA;
		parameter_int_t TX_CLK25_DIV;
		parameter_int_t TX_CLKMUX_EN;
		parameter_int_t TX_DATA_WIDTH;
		parameter_int_t TX_DEEMPH0;
		parameter_int_t TX_DEEMPH1;
		parameter_string_t TX_DRIVE_MODE;
		parameter_int_t TX_EIDLE_ASSERT_DELAY;
		parameter_int_t TX_EIDLE_DEASSERT_DELAY;
		parameter_enum_t TX_LOOPBACK_DRIVE_HIZ;
		parameter_int_t TX_MAINCURSOR_SEL;
		parameter_int_t TX_MARGIN_FULL_0;
		parameter_int_t TX_MARGIN_FULL_1;
		parameter_int_t TX_MARGIN_FULL_2;
		parameter_int_t TX_MARGIN_FULL_3;
		parameter_int_t TX_MARGIN_FULL_4;
		parameter_int_t TX_MARGIN_LOW_0;
		parameter_int_t TX_MARGIN_LOW_1;
		parameter_int_t TX_MARGIN_LOW_2;
		parameter_int_t TX_MARGIN_LOW_3;
		parameter_int_t TX_MARGIN_LOW_4;
		parameter_int_t TX_PREDRIVER_MODE;
		parameter_int_t TX_RXDETECT_CFG;
		parameter_int_t TX_RXDETECT_REF;
		parameter_string_t TX_XCLK_SEL;
		parameter_int_t UCODEER_CLR;
		parameter_int_t USE_PCS_CLK_PHASE_SEL;
		//Verilog Ports in definition order:
		NetFlow* DMONITOROUT; // OUTPUT
		NetFlow* DRPDO; // OUTPUT
		NetFlow* DRPRDY; // OUTPUT
		NetFlow* EYESCANDATAERROR; // OUTPUT
		NetFlow* GTPTXN; // OUTPUT
		NetFlow* GTPTXP; // OUTPUT
		NetFlow* PCSRSVDOUT; // OUTPUT
		NetFlow* PHYSTATUS; // OUTPUT
		NetFlow* PMARSVDOUT0; // OUTPUT
		NetFlow* PMARSVDOUT1; // OUTPUT
		NetFlow* RXBUFSTATUS; // OUTPUT
		NetFlow* RXBYTEISALIGNED; // OUTPUT
		NetFlow* RXBYTEREALIGN; // OUTPUT
		NetFlow* RXCDRLOCK; // OUTPUT
		NetFlow* RXCHANBONDSEQ; // OUTPUT
		NetFlow* RXCHANISALIGNED; // OUTPUT
		NetFlow* RXCHANREALIGN; // OUTPUT
		NetFlow* RXCHARISCOMMA; // OUTPUT
		NetFlow* RXCHARISK; // OUTPUT
		NetFlow* RXCHBONDO; // OUTPUT
		NetFlow* RXCLKCORCNT; // OUTPUT
		NetFlow* RXCOMINITDET; // OUTPUT
		NetFlow* RXCOMMADET; // OUTPUT
		NetFlow* RXCOMSASDET; // OUTPUT
		NetFlow* RXCOMWAKEDET; // OUTPUT
		NetFlow* RXDATA; // OUTPUT
		NetFlow* RXDATAVALID; // OUTPUT
		NetFlow* RXDISPERR; // OUTPUT
		NetFlow* RXDLYSRESETDONE; // OUTPUT
		NetFlow* RXELECIDLE; // OUTPUT
		NetFlow* RXHEADER; // OUTPUT
		NetFlow* RXHEADERVALID; // OUTPUT
		NetFlow* RXNOTINTABLE; // OUTPUT
		NetFlow* RXOSINTDONE; // OUTPUT
		NetFlow* RXOSINTSTARTED; // OUTPUT
		NetFlow* RXOSINTSTROBEDONE; // OUTPUT
		NetFlow* RXOSINTSTROBESTARTED; // OUTPUT
		NetFlow* RXOUTCLK; // OUTPUT
		NetFlow* RXOUTCLKFABRIC; // OUTPUT
		NetFlow* RXOUTCLKPCS; // OUTPUT
		NetFlow* RXPHALIGNDONE; // OUTPUT
		NetFlow* RXPHMONITOR; // OUTPUT
		NetFlow* RXPHSLIPMONITOR; // OUTPUT
		NetFlow* RXPMARESETDONE; // OUTPUT
		NetFlow* RXPRBSERR; // OUTPUT
		NetFlow* RXRATEDONE; // OUTPUT
		NetFlow* RXRESETDONE; // OUTPUT
		NetFlow* RXSTARTOFSEQ; // OUTPUT
		NetFlow* RXSTATUS; // OUTPUT
		NetFlow* RXSYNCDONE; // OUTPUT
		NetFlow* RXSYNCOUT; // OUTPUT
		NetFlow* RXVALID; // OUTPUT
		NetFlow* TXBUFSTATUS; // OUTPUT
		NetFlow* TXCOMFINISH; // OUTPUT
		NetFlow* TXDLYSRESETDONE; // OUTPUT
		NetFlow* TXGEARBOXREADY; // OUTPUT
		NetFlow* TXOUTCLK; // OUTPUT
		NetFlow* TXOUTCLKFABRIC; // OUTPUT
		NetFlow* TXOUTCLKPCS; // OUTPUT
		NetFlow* TXPHALIGNDONE; // OUTPUT
		NetFlow* TXPHINITDONE; // OUTPUT
		NetFlow* TXPMARESETDONE; // OUTPUT
		NetFlow* TXRATEDONE; // OUTPUT
		NetFlow* TXRESETDONE; // OUTPUT
		NetFlow* TXSYNCDONE; // OUTPUT
		NetFlow* TXSYNCOUT; // OUTPUT
		NetFlow* CFGRESET; // INPUT
		NetFlow* CLKRSVD0; // INPUT
		NetFlow* CLKRSVD1; // INPUT
		NetFlow* DMONFIFORESET; // INPUT
		NetFlow* DMONITORCLK; // INPUT
		NetFlow* DRPADDR; // INPUT
		NetFlow* DRPCLK; // INPUT
		NetFlow* DRPDI; // INPUT
		NetFlow* DRPEN; // INPUT
		NetFlow* DRPWE; // INPUT
		NetFlow* EYESCANMODE; // INPUT
		NetFlow* EYESCANRESET; // INPUT
		NetFlow* EYESCANTRIGGER; // INPUT
		NetFlow* GTPRXN; // INPUT
		NetFlow* GTPRXP; // INPUT
		NetFlow* GTRESETSEL; // INPUT
		NetFlow* GTRSVD; // INPUT
		NetFlow* GTRXRESET; // INPUT
		NetFlow* GTTXRESET; // INPUT
		NetFlow* LOOPBACK; // INPUT
		NetFlow* PCSRSVDIN; // INPUT
		NetFlow* PLL0CLK; // INPUT
		NetFlow* PLL0REFCLK; // INPUT
		NetFlow* PLL1CLK; // INPUT
		NetFlow* PLL1REFCLK; // INPUT
		NetFlow* PMARSVDIN0; // INPUT
		NetFlow* PMARSVDIN1; // INPUT
		NetFlow* PMARSVDIN2; // INPUT
		NetFlow* PMARSVDIN3; // INPUT
		NetFlow* PMARSVDIN4; // INPUT
		NetFlow* RESETOVRD; // INPUT
		NetFlow* RX8B10BEN; // INPUT
		NetFlow* RXADAPTSELTEST; // INPUT
		NetFlow* RXBUFRESET; // INPUT
		NetFlow* RXCDRFREQRESET; // INPUT
		NetFlow* RXCDRHOLD; // INPUT
		NetFlow* RXCDROVRDEN; // INPUT
		NetFlow* RXCDRRESET; // INPUT
		NetFlow* RXCDRRESETRSV; // INPUT
		NetFlow* RXCHBONDEN; // INPUT
		NetFlow* RXCHBONDI; // INPUT
		NetFlow* RXCHBONDLEVEL; // INPUT
		NetFlow* RXCHBONDMASTER; // INPUT
		NetFlow* RXCHBONDSLAVE; // INPUT
		NetFlow* RXCOMMADETEN; // INPUT
		NetFlow* RXDDIEN; // INPUT
		NetFlow* RXDFEXYDEN; // INPUT
		NetFlow* RXDLYBYPASS; // INPUT
		NetFlow* RXDLYEN; // INPUT
		NetFlow* RXDLYOVRDEN; // INPUT
		NetFlow* RXDLYSRESET; // INPUT
		NetFlow* RXELECIDLEMODE; // INPUT
		NetFlow* RXGEARBOXSLIP; // INPUT
		NetFlow* RXLPMHFHOLD; // INPUT
		NetFlow* RXLPMHFOVRDEN; // INPUT
		NetFlow* RXLPMLFHOLD; // INPUT
		NetFlow* RXLPMLFOVRDEN; // INPUT
		NetFlow* RXLPMOSINTNTRLEN; // INPUT
		NetFlow* RXLPMRESET; // INPUT
		NetFlow* RXMCOMMAALIGNEN; // INPUT
		NetFlow* RXOOBRESET; // INPUT
		NetFlow* RXOSCALRESET; // INPUT
		NetFlow* RXOSHOLD; // INPUT
		NetFlow* RXOSINTCFG; // INPUT
		NetFlow* RXOSINTEN; // INPUT
		NetFlow* RXOSINTHOLD; // INPUT
		NetFlow* RXOSINTID0; // INPUT
		NetFlow* RXOSINTNTRLEN; // INPUT
		NetFlow* RXOSINTOVRDEN; // INPUT
		NetFlow* RXOSINTPD; // INPUT
		NetFlow* RXOSINTSTROBE; // INPUT
		NetFlow* RXOSINTTESTOVRDEN; // INPUT
		NetFlow* RXOSOVRDEN; // INPUT
		NetFlow* RXOUTCLKSEL; // INPUT
		NetFlow* RXPCOMMAALIGNEN; // INPUT
		NetFlow* RXPCSRESET; // INPUT
		NetFlow* RXPD; // INPUT
		NetFlow* RXPHALIGN; // INPUT
		NetFlow* RXPHALIGNEN; // INPUT
		NetFlow* RXPHDLYPD; // INPUT
		NetFlow* RXPHDLYRESET; // INPUT
		NetFlow* RXPHOVRDEN; // INPUT
		NetFlow* RXPMARESET; // INPUT
		NetFlow* RXPOLARITY; // INPUT
		NetFlow* RXPRBSCNTRESET; // INPUT
		NetFlow* RXPRBSSEL; // INPUT
		NetFlow* RXRATE; // INPUT
		NetFlow* RXRATEMODE; // INPUT
		NetFlow* RXSLIDE; // INPUT
		NetFlow* RXSYNCALLIN; // INPUT
		NetFlow* RXSYNCIN; // INPUT
		NetFlow* RXSYNCMODE; // INPUT
		NetFlow* RXSYSCLKSEL; // INPUT
		NetFlow* RXUSERRDY; // INPUT
		NetFlow* RXUSRCLK; // INPUT
		NetFlow* RXUSRCLK2; // INPUT
		NetFlow* SETERRSTATUS; // INPUT
		NetFlow* SIGVALIDCLK; // INPUT
		NetFlow* TSTIN; // INPUT
		NetFlow* TX8B10BBYPASS; // INPUT
		NetFlow* TX8B10BEN; // INPUT
		NetFlow* TXBUFDIFFCTRL; // INPUT
		NetFlow* TXCHARDISPMODE; // INPUT
		NetFlow* TXCHARDISPVAL; // INPUT
		NetFlow* TXCHARISK; // INPUT
		NetFlow* TXCOMINIT; // INPUT
		NetFlow* TXCOMSAS; // INPUT
		NetFlow* TXCOMWAKE; // INPUT
		NetFlow* TXDATA; // INPUT
		NetFlow* TXDEEMPH; // INPUT
		NetFlow* TXDETECTRX; // INPUT
		NetFlow* TXDIFFCTRL; // INPUT
		NetFlow* TXDIFFPD; // INPUT
		NetFlow* TXDLYBYPASS; // INPUT
		NetFlow* TXDLYEN; // INPUT
		NetFlow* TXDLYHOLD; // INPUT
		NetFlow* TXDLYOVRDEN; // INPUT
		NetFlow* TXDLYSRESET; // INPUT
		NetFlow* TXDLYUPDOWN; // INPUT
		NetFlow* TXELECIDLE; // INPUT
		NetFlow* TXHEADER; // INPUT
		NetFlow* TXINHIBIT; // INPUT
		NetFlow* TXMAINCURSOR; // INPUT
		NetFlow* TXMARGIN; // INPUT
		NetFlow* TXOUTCLKSEL; // INPUT
		NetFlow* TXPCSRESET; // INPUT
		NetFlow* TXPD; // INPUT
		NetFlow* TXPDELECIDLEMODE; // INPUT
		NetFlow* TXPHALIGN; // INPUT
		NetFlow* TXPHALIGNEN; // INPUT
		NetFlow* TXPHDLYPD; // INPUT
		NetFlow* TXPHDLYRESET; // INPUT
		NetFlow* TXPHDLYTSTCLK; // INPUT
		NetFlow* TXPHINIT; // INPUT
		NetFlow* TXPHOVRDEN; // INPUT
		NetFlow* TXPIPPMEN; // INPUT
		NetFlow* TXPIPPMOVRDEN; // INPUT
		NetFlow* TXPIPPMPD; // INPUT
		NetFlow* TXPIPPMSEL; // INPUT
		NetFlow* TXPIPPMSTEPSIZE; // INPUT
		NetFlow* TXPISOPD; // INPUT
		NetFlow* TXPMARESET; // INPUT
		NetFlow* TXPOLARITY; // INPUT
		NetFlow* TXPOSTCURSOR; // INPUT
		NetFlow* TXPOSTCURSORINV; // INPUT
		NetFlow* TXPRBSFORCEERR; // INPUT
		NetFlow* TXPRBSSEL; // INPUT
		NetFlow* TXPRECURSOR; // INPUT
		NetFlow* TXPRECURSORINV; // INPUT
		NetFlow* TXRATE; // INPUT
		NetFlow* TXRATEMODE; // INPUT
		NetFlow* TXSEQUENCE; // INPUT
		NetFlow* TXSTARTSEQ; // INPUT
		NetFlow* TXSWING; // INPUT
		NetFlow* TXSYNCALLIN; // INPUT
		NetFlow* TXSYNCIN; // INPUT
		NetFlow* TXSYNCMODE; // INPUT
		NetFlow* TXSYSCLKSEL; // INPUT
		NetFlow* TXUSERRDY; // INPUT
		NetFlow* TXUSRCLK; // INPUT
		NetFlow* TXUSRCLK2; // INPUT
		
	
		X_GTPE2_CHANNEL(
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_int_t ACJTAG_DEBUG_MODE, // Default: 1'b0
			parameter_int_t ACJTAG_MODE, // Default: 1'b0
			parameter_int_t ACJTAG_RESET, // Default: 1'b0
			parameter_int_t ADAPT_CFG0, // Default: 20'b00000000000000000000
			parameter_enum_t ALIGN_COMMA_DOUBLE, // Default: "FALSE"
			parameter_int_t ALIGN_COMMA_ENABLE, // Default: 10'b0001111111
			parameter_int_t ALIGN_COMMA_WORD, // Default: 1
			parameter_enum_t ALIGN_MCOMMA_DET, // Default: "TRUE"
			parameter_int_t ALIGN_MCOMMA_VALUE, // Default: 10'b1010000011
			parameter_enum_t ALIGN_PCOMMA_DET, // Default: "TRUE"
			parameter_int_t ALIGN_PCOMMA_VALUE, // Default: 10'b0101111100
			parameter_string_t CBCC_DATA_SOURCE_SEL, // Default: "DECODED"
			parameter_int_t CFOK_CFG, // Default: 43'b1001001000000000000000001000000111010000000
			parameter_int_t CFOK_CFG2, // Default: 7'b0100000
			parameter_int_t CFOK_CFG3, // Default: 7'b0100000
			parameter_int_t CFOK_CFG4, // Default: 1'b0
			parameter_int_t CFOK_CFG5, // Default: 2'b00
			parameter_int_t CFOK_CFG6, // Default: 4'b0000
			parameter_enum_t CHAN_BOND_KEEP_ALIGN, // Default: "FALSE"
			parameter_int_t CHAN_BOND_MAX_SKEW, // Default: 7
			parameter_int_t CHAN_BOND_SEQ_1_1, // Default: 10'b0101111100
			parameter_int_t CHAN_BOND_SEQ_1_2, // Default: 10'b0000000000
			parameter_int_t CHAN_BOND_SEQ_1_3, // Default: 10'b0000000000
			parameter_int_t CHAN_BOND_SEQ_1_4, // Default: 10'b0000000000
			parameter_int_t CHAN_BOND_SEQ_1_ENABLE, // Default: 4'b1111
			parameter_int_t CHAN_BOND_SEQ_2_1, // Default: 10'b0100000000
			parameter_int_t CHAN_BOND_SEQ_2_2, // Default: 10'b0100000000
			parameter_int_t CHAN_BOND_SEQ_2_3, // Default: 10'b0100000000
			parameter_int_t CHAN_BOND_SEQ_2_4, // Default: 10'b0100000000
			parameter_int_t CHAN_BOND_SEQ_2_ENABLE, // Default: 4'b1111
			parameter_enum_t CHAN_BOND_SEQ_2_USE, // Default: "FALSE"
			parameter_int_t CHAN_BOND_SEQ_LEN, // Default: 1
			parameter_int_t CLK_COMMON_SWING, // Default: 1'b0
			parameter_enum_t CLK_CORRECT_USE, // Default: "TRUE"
			parameter_enum_t CLK_COR_KEEP_IDLE, // Default: "FALSE"
			parameter_int_t CLK_COR_MAX_LAT, // Default: 20
			parameter_int_t CLK_COR_MIN_LAT, // Default: 18
			parameter_enum_t CLK_COR_PRECEDENCE, // Default: "TRUE"
			parameter_int_t CLK_COR_REPEAT_WAIT, // Default: 0
			parameter_int_t CLK_COR_SEQ_1_1, // Default: 10'b0100011100
			parameter_int_t CLK_COR_SEQ_1_2, // Default: 10'b0000000000
			parameter_int_t CLK_COR_SEQ_1_3, // Default: 10'b0000000000
			parameter_int_t CLK_COR_SEQ_1_4, // Default: 10'b0000000000
			parameter_int_t CLK_COR_SEQ_1_ENABLE, // Default: 4'b1111
			parameter_int_t CLK_COR_SEQ_2_1, // Default: 10'b0100000000
			parameter_int_t CLK_COR_SEQ_2_2, // Default: 10'b0100000000
			parameter_int_t CLK_COR_SEQ_2_3, // Default: 10'b0100000000
			parameter_int_t CLK_COR_SEQ_2_4, // Default: 10'b0100000000
			parameter_int_t CLK_COR_SEQ_2_ENABLE, // Default: 4'b1111
			parameter_enum_t CLK_COR_SEQ_2_USE, // Default: "FALSE"
			parameter_int_t CLK_COR_SEQ_LEN, // Default: 1
			parameter_enum_t DEC_MCOMMA_DETECT, // Default: "TRUE"
			parameter_enum_t DEC_PCOMMA_DETECT, // Default: "TRUE"
			parameter_enum_t DEC_VALID_COMMA_ONLY, // Default: "TRUE"
			parameter_int_t DMONITOR_CFG, // Default: 24'h000A00
			parameter_int_t ES_CLK_PHASE_SEL, // Default: 1'b0
			parameter_int_t ES_CONTROL, // Default: 6'b000000
			parameter_enum_t ES_ERRDET_EN, // Default: "FALSE"
			parameter_enum_t ES_EYE_SCAN_EN, // Default: "FALSE"
			parameter_int_t ES_HORZ_OFFSET, // Default: 12'h010
			parameter_int_t ES_PMA_CFG, // Default: 10'b0000000000
			parameter_int_t ES_PRESCALE, // Default: 5'b00000
			parameter_int_t ES_QUALIFIER, // Default: 80'h00000000000000000000
			parameter_int_t ES_QUAL_MASK, // Default: 80'h00000000000000000000
			parameter_int_t ES_SDATA_MASK, // Default: 80'h00000000000000000000
			parameter_int_t ES_VERT_OFFSET, // Default: 9'b000000000
			parameter_int_t FTS_DESKEW_SEQ_ENABLE, // Default: 4'b1111
			parameter_int_t FTS_LANE_DESKEW_CFG, // Default: 4'b1111
			parameter_enum_t FTS_LANE_DESKEW_EN, // Default: "FALSE"
			parameter_int_t GEARBOX_MODE, // Default: 3'b000
			parameter_int_t LOOPBACK_CFG, // Default: 1'b0
			parameter_int_t OUTREFCLK_SEL_INV, // Default: 2'b11
			parameter_enum_t PCS_PCIE_EN, // Default: "FALSE"
			parameter_int_t PCS_RSVD_ATTR, // Default: 48'h000000000000
			parameter_int_t PD_TRANS_TIME_FROM_P2, // Default: 12'h03C
			parameter_int_t PD_TRANS_TIME_NONE_P2, // Default: 8'h19
			parameter_int_t PD_TRANS_TIME_TO_P2, // Default: 8'h64
			parameter_int_t PMA_LOOPBACK_CFG, // Default: 1'b0
			parameter_int_t PMA_RSV, // Default: 32'h00000333
			parameter_int_t PMA_RSV2, // Default: 32'h00002050
			parameter_int_t PMA_RSV3, // Default: 2'b00
			parameter_int_t PMA_RSV4, // Default: 4'b0000
			parameter_int_t PMA_RSV5, // Default: 1'b0
			parameter_int_t PMA_RSV6, // Default: 1'b0
			parameter_int_t PMA_RSV7, // Default: 1'b0
			parameter_int_t RXBUFRESET_TIME, // Default: 5'b00001
			parameter_string_t RXBUF_ADDR_MODE, // Default: "FULL"
			parameter_int_t RXBUF_EIDLE_HI_CNT, // Default: 4'b1000
			parameter_int_t RXBUF_EIDLE_LO_CNT, // Default: 4'b0000
			parameter_enum_t RXBUF_EN, // Default: "TRUE"
			parameter_enum_t RXBUF_RESET_ON_CB_CHANGE, // Default: "TRUE"
			parameter_enum_t RXBUF_RESET_ON_COMMAALIGN, // Default: "FALSE"
			parameter_enum_t RXBUF_RESET_ON_EIDLE, // Default: "FALSE"
			parameter_enum_t RXBUF_RESET_ON_RATE_CHANGE, // Default: "TRUE"
			parameter_int_t RXBUF_THRESH_OVFLW, // Default: 61
			parameter_enum_t RXBUF_THRESH_OVRD, // Default: "FALSE"
			parameter_int_t RXBUF_THRESH_UNDFLW, // Default: 4
			parameter_int_t RXCDRFREQRESET_TIME, // Default: 5'b00001
			parameter_int_t RXCDRPHRESET_TIME, // Default: 5'b00001
			parameter_int_t RXCDR_CFG, // Default: 83'h0000107FE406001041010
			parameter_int_t RXCDR_FR_RESET_ON_EIDLE, // Default: 1'b0
			parameter_int_t RXCDR_HOLD_DURING_EIDLE, // Default: 1'b0
			parameter_int_t RXCDR_LOCK_CFG, // Default: 6'b001001
			parameter_int_t RXCDR_PH_RESET_ON_EIDLE, // Default: 1'b0
			parameter_int_t RXDLY_CFG, // Default: 16'h0010
			parameter_int_t RXDLY_LCFG, // Default: 9'h020
			parameter_int_t RXDLY_TAP_CFG, // Default: 16'h0000
			parameter_enum_t RXGEARBOX_EN, // Default: "FALSE"
			parameter_int_t RXISCANRESET_TIME, // Default: 5'b00001
			parameter_int_t RXLPMRESET_TIME, // Default: 7'b0001111
			parameter_int_t RXLPM_BIAS_STARTUP_DISABLE, // Default: 1'b0
			parameter_int_t RXLPM_CFG, // Default: 4'b0110
			parameter_int_t RXLPM_CFG1, // Default: 1'b0
			parameter_int_t RXLPM_CM_CFG, // Default: 1'b0
			parameter_int_t RXLPM_GC_CFG, // Default: 9'b111100010
			parameter_int_t RXLPM_GC_CFG2, // Default: 3'b001
			parameter_int_t RXLPM_HF_CFG, // Default: 14'b00001111110000
			parameter_int_t RXLPM_HF_CFG2, // Default: 5'b01010
			parameter_int_t RXLPM_HF_CFG3, // Default: 4'b0000
			parameter_int_t RXLPM_HOLD_DURING_EIDLE, // Default: 1'b0
			parameter_int_t RXLPM_INCM_CFG, // Default: 1'b0
			parameter_int_t RXLPM_IPCM_CFG, // Default: 1'b0
			parameter_int_t RXLPM_LF_CFG, // Default: 18'b000000001111110000
			parameter_int_t RXLPM_LF_CFG2, // Default: 5'b01010
			parameter_int_t RXLPM_OSINT_CFG, // Default: 3'b100
			parameter_int_t RXOOB_CFG, // Default: 7'b0000110
			parameter_string_t RXOOB_CLK_CFG, // Default: "PMA"
			parameter_int_t RXOSCALRESET_TIME, // Default: 5'b00011
			parameter_int_t RXOSCALRESET_TIMEOUT, // Default: 5'b00000
			parameter_int_t RXOUT_DIV, // Default: 2
			parameter_int_t RXPCSRESET_TIME, // Default: 5'b00001
			parameter_int_t RXPHDLY_CFG, // Default: 24'h084000
			parameter_int_t RXPH_CFG, // Default: 24'hC00002
			parameter_int_t RXPH_MONITOR_SEL, // Default: 5'b00000
			parameter_int_t RXPI_CFG0, // Default: 3'b000
			parameter_int_t RXPI_CFG1, // Default: 1'b0
			parameter_int_t RXPI_CFG2, // Default: 1'b0
			parameter_int_t RXPMARESET_TIME, // Default: 5'b00011
			parameter_int_t RXPRBS_ERR_LOOPBACK, // Default: 1'b0
			parameter_int_t RXSLIDE_AUTO_WAIT, // Default: 7
			parameter_string_t RXSLIDE_MODE, // Default: "OFF"
			parameter_int_t RXSYNC_MULTILANE, // Default: 1'b0
			parameter_int_t RXSYNC_OVRD, // Default: 1'b0
			parameter_int_t RXSYNC_SKIP_DA, // Default: 1'b0
			parameter_int_t RX_BIAS_CFG, // Default: 16'b0000111100110011
			parameter_int_t RX_BUFFER_CFG, // Default: 6'b000000
			parameter_int_t RX_CLK25_DIV, // Default: 7
			parameter_int_t RX_CLKMUX_EN, // Default: 1'b1
			parameter_int_t RX_CM_SEL, // Default: 2'b11
			parameter_int_t RX_CM_TRIM, // Default: 4'b0100
			parameter_int_t RX_DATA_WIDTH, // Default: 20
			parameter_int_t RX_DDI_SEL, // Default: 6'b000000
			parameter_int_t RX_DEBUG_CFG, // Default: 14'b00000000000000
			parameter_enum_t RX_DEFER_RESET_BUF_EN, // Default: "TRUE"
			parameter_enum_t RX_DISPERR_SEQ_MATCH, // Default: "TRUE"
			parameter_int_t RX_OS_CFG, // Default: 13'b0001111110000
			parameter_int_t RX_SIG_VALID_DLY, // Default: 10
			parameter_string_t RX_XCLK_SEL, // Default: "RXREC"
			parameter_int_t SAS_MAX_COM, // Default: 64
			parameter_int_t SAS_MIN_COM, // Default: 36
			parameter_int_t SATA_BURST_SEQ_LEN, // Default: 4'b1111
			parameter_int_t SATA_BURST_VAL, // Default: 3'b100
			parameter_int_t SATA_EIDLE_VAL, // Default: 3'b100
			parameter_int_t SATA_MAX_BURST, // Default: 8
			parameter_int_t SATA_MAX_INIT, // Default: 21
			parameter_int_t SATA_MAX_WAKE, // Default: 7
			parameter_int_t SATA_MIN_BURST, // Default: 4
			parameter_int_t SATA_MIN_INIT, // Default: 12
			parameter_int_t SATA_MIN_WAKE, // Default: 4
			parameter_string_t SATA_PLL_CFG, // Default: "VCO_3000MHZ"
			parameter_enum_t SHOW_REALIGN_COMMA, // Default: "TRUE"
			parameter_enum_t SIM_RECEIVER_DETECT_PASS, // Default: "TRUE"
			parameter_enum_t SIM_RESET_SPEEDUP, // Default: "TRUE"
			parameter_string_t SIM_TX_EIDLE_DRIVE_LEVEL, // Default: "X"
			parameter_string_t SIM_VERSION, // Default: "1.0"
			parameter_int_t TERM_RCAL_CFG, // Default: 15'b100001000010000
			parameter_int_t TERM_RCAL_OVRD, // Default: 3'b000
			parameter_int_t TRANS_TIME_RATE, // Default: 8'h0E
			parameter_int_t TST_RSV, // Default: 32'h00000000
			parameter_enum_t TXBUF_EN, // Default: "TRUE"
			parameter_enum_t TXBUF_RESET_ON_RATE_CHANGE, // Default: "FALSE"
			parameter_int_t TXDLY_CFG, // Default: 16'h0010
			parameter_int_t TXDLY_LCFG, // Default: 9'h020
			parameter_int_t TXDLY_TAP_CFG, // Default: 16'h0000
			parameter_enum_t TXGEARBOX_EN, // Default: "FALSE"
			parameter_int_t TXOOB_CFG, // Default: 1'b0
			parameter_int_t TXOUT_DIV, // Default: 2
			parameter_int_t TXPCSRESET_TIME, // Default: 5'b00001
			parameter_int_t TXPHDLY_CFG, // Default: 24'h084000
			parameter_int_t TXPH_CFG, // Default: 16'h0400
			parameter_int_t TXPH_MONITOR_SEL, // Default: 5'b00000
			parameter_int_t TXPI_CFG0, // Default: 2'b00
			parameter_int_t TXPI_CFG1, // Default: 2'b00
			parameter_int_t TXPI_CFG2, // Default: 2'b00
			parameter_int_t TXPI_CFG3, // Default: 1'b0
			parameter_int_t TXPI_CFG4, // Default: 1'b0
			parameter_int_t TXPI_CFG5, // Default: 3'b000
			parameter_int_t TXPI_GREY_SEL, // Default: 1'b0
			parameter_int_t TXPI_INVSTROBE_SEL, // Default: 1'b0
			parameter_string_t TXPI_PPMCLK_SEL, // Default: "TXUSRCLK2"
			parameter_int_t TXPI_PPM_CFG, // Default: 8'b00000000
			parameter_int_t TXPI_SYNFREQ_PPM, // Default: 3'b000
			parameter_int_t TXPMARESET_TIME, // Default: 5'b00001
			parameter_int_t TXSYNC_MULTILANE, // Default: 1'b0
			parameter_int_t TXSYNC_OVRD, // Default: 1'b0
			parameter_int_t TXSYNC_SKIP_DA, // Default: 1'b0
			parameter_int_t TX_CLK25_DIV, // Default: 7
			parameter_int_t TX_CLKMUX_EN, // Default: 1'b1
			parameter_int_t TX_DATA_WIDTH, // Default: 20
			parameter_int_t TX_DEEMPH0, // Default: 6'b000000
			parameter_int_t TX_DEEMPH1, // Default: 6'b000000
			parameter_string_t TX_DRIVE_MODE, // Default: "DIRECT"
			parameter_int_t TX_EIDLE_ASSERT_DELAY, // Default: 3'b110
			parameter_int_t TX_EIDLE_DEASSERT_DELAY, // Default: 3'b100
			parameter_enum_t TX_LOOPBACK_DRIVE_HIZ, // Default: "FALSE"
			parameter_int_t TX_MAINCURSOR_SEL, // Default: 1'b0
			parameter_int_t TX_MARGIN_FULL_0, // Default: 7'b1001110
			parameter_int_t TX_MARGIN_FULL_1, // Default: 7'b1001001
			parameter_int_t TX_MARGIN_FULL_2, // Default: 7'b1000101
			parameter_int_t TX_MARGIN_FULL_3, // Default: 7'b1000010
			parameter_int_t TX_MARGIN_FULL_4, // Default: 7'b1000000
			parameter_int_t TX_MARGIN_LOW_0, // Default: 7'b1000110
			parameter_int_t TX_MARGIN_LOW_1, // Default: 7'b1000100
			parameter_int_t TX_MARGIN_LOW_2, // Default: 7'b1000010
			parameter_int_t TX_MARGIN_LOW_3, // Default: 7'b1000000
			parameter_int_t TX_MARGIN_LOW_4, // Default: 7'b1000000
			parameter_int_t TX_PREDRIVER_MODE, // Default: 1'b0
			parameter_int_t TX_RXDETECT_CFG, // Default: 14'h1832
			parameter_int_t TX_RXDETECT_REF, // Default: 3'b100
			parameter_string_t TX_XCLK_SEL, // Default: "TXUSR"
			parameter_int_t UCODEER_CLR, // Default: 1'b0
			parameter_int_t USE_PCS_CLK_PHASE_SEL, // Default: 1'b0
			//Verilog Ports in definition order:
			NetFlow* DMONITOROUT, // OUTPUT
			NetFlow* DRPDO, // OUTPUT
			NetFlow* DRPRDY, // OUTPUT
			NetFlow* EYESCANDATAERROR, // OUTPUT
			NetFlow* GTPTXN, // OUTPUT
			NetFlow* GTPTXP, // OUTPUT
			NetFlow* PCSRSVDOUT, // OUTPUT
			NetFlow* PHYSTATUS, // OUTPUT
			NetFlow* PMARSVDOUT0, // OUTPUT
			NetFlow* PMARSVDOUT1, // OUTPUT
			NetFlow* RXBUFSTATUS, // OUTPUT
			NetFlow* RXBYTEISALIGNED, // OUTPUT
			NetFlow* RXBYTEREALIGN, // OUTPUT
			NetFlow* RXCDRLOCK, // OUTPUT
			NetFlow* RXCHANBONDSEQ, // OUTPUT
			NetFlow* RXCHANISALIGNED, // OUTPUT
			NetFlow* RXCHANREALIGN, // OUTPUT
			NetFlow* RXCHARISCOMMA, // OUTPUT
			NetFlow* RXCHARISK, // OUTPUT
			NetFlow* RXCHBONDO, // OUTPUT
			NetFlow* RXCLKCORCNT, // OUTPUT
			NetFlow* RXCOMINITDET, // OUTPUT
			NetFlow* RXCOMMADET, // OUTPUT
			NetFlow* RXCOMSASDET, // OUTPUT
			NetFlow* RXCOMWAKEDET, // OUTPUT
			NetFlow* RXDATA, // OUTPUT
			NetFlow* RXDATAVALID, // OUTPUT
			NetFlow* RXDISPERR, // OUTPUT
			NetFlow* RXDLYSRESETDONE, // OUTPUT
			NetFlow* RXELECIDLE, // OUTPUT
			NetFlow* RXHEADER, // OUTPUT
			NetFlow* RXHEADERVALID, // OUTPUT
			NetFlow* RXNOTINTABLE, // OUTPUT
			NetFlow* RXOSINTDONE, // OUTPUT
			NetFlow* RXOSINTSTARTED, // OUTPUT
			NetFlow* RXOSINTSTROBEDONE, // OUTPUT
			NetFlow* RXOSINTSTROBESTARTED, // OUTPUT
			NetFlow* RXOUTCLK, // OUTPUT
			NetFlow* RXOUTCLKFABRIC, // OUTPUT
			NetFlow* RXOUTCLKPCS, // OUTPUT
			NetFlow* RXPHALIGNDONE, // OUTPUT
			NetFlow* RXPHMONITOR, // OUTPUT
			NetFlow* RXPHSLIPMONITOR, // OUTPUT
			NetFlow* RXPMARESETDONE, // OUTPUT
			NetFlow* RXPRBSERR, // OUTPUT
			NetFlow* RXRATEDONE, // OUTPUT
			NetFlow* RXRESETDONE, // OUTPUT
			NetFlow* RXSTARTOFSEQ, // OUTPUT
			NetFlow* RXSTATUS, // OUTPUT
			NetFlow* RXSYNCDONE, // OUTPUT
			NetFlow* RXSYNCOUT, // OUTPUT
			NetFlow* RXVALID, // OUTPUT
			NetFlow* TXBUFSTATUS, // OUTPUT
			NetFlow* TXCOMFINISH, // OUTPUT
			NetFlow* TXDLYSRESETDONE, // OUTPUT
			NetFlow* TXGEARBOXREADY, // OUTPUT
			NetFlow* TXOUTCLK, // OUTPUT
			NetFlow* TXOUTCLKFABRIC, // OUTPUT
			NetFlow* TXOUTCLKPCS, // OUTPUT
			NetFlow* TXPHALIGNDONE, // OUTPUT
			NetFlow* TXPHINITDONE, // OUTPUT
			NetFlow* TXPMARESETDONE, // OUTPUT
			NetFlow* TXRATEDONE, // OUTPUT
			NetFlow* TXRESETDONE, // OUTPUT
			NetFlow* TXSYNCDONE, // OUTPUT
			NetFlow* TXSYNCOUT, // OUTPUT
			NetFlow* CFGRESET, // INPUT
			NetFlow* CLKRSVD0, // INPUT
			NetFlow* CLKRSVD1, // INPUT
			NetFlow* DMONFIFORESET, // INPUT
			NetFlow* DMONITORCLK, // INPUT
			NetFlow* DRPADDR, // INPUT
			NetFlow* DRPCLK, // INPUT
			NetFlow* DRPDI, // INPUT
			NetFlow* DRPEN, // INPUT
			NetFlow* DRPWE, // INPUT
			NetFlow* EYESCANMODE, // INPUT
			NetFlow* EYESCANRESET, // INPUT
			NetFlow* EYESCANTRIGGER, // INPUT
			NetFlow* GTPRXN, // INPUT
			NetFlow* GTPRXP, // INPUT
			NetFlow* GTRESETSEL, // INPUT
			NetFlow* GTRSVD, // INPUT
			NetFlow* GTRXRESET, // INPUT
			NetFlow* GTTXRESET, // INPUT
			NetFlow* LOOPBACK, // INPUT
			NetFlow* PCSRSVDIN, // INPUT
			NetFlow* PLL0CLK, // INPUT
			NetFlow* PLL0REFCLK, // INPUT
			NetFlow* PLL1CLK, // INPUT
			NetFlow* PLL1REFCLK, // INPUT
			NetFlow* PMARSVDIN0, // INPUT
			NetFlow* PMARSVDIN1, // INPUT
			NetFlow* PMARSVDIN2, // INPUT
			NetFlow* PMARSVDIN3, // INPUT
			NetFlow* PMARSVDIN4, // INPUT
			NetFlow* RESETOVRD, // INPUT
			NetFlow* RX8B10BEN, // INPUT
			NetFlow* RXADAPTSELTEST, // INPUT
			NetFlow* RXBUFRESET, // INPUT
			NetFlow* RXCDRFREQRESET, // INPUT
			NetFlow* RXCDRHOLD, // INPUT
			NetFlow* RXCDROVRDEN, // INPUT
			NetFlow* RXCDRRESET, // INPUT
			NetFlow* RXCDRRESETRSV, // INPUT
			NetFlow* RXCHBONDEN, // INPUT
			NetFlow* RXCHBONDI, // INPUT
			NetFlow* RXCHBONDLEVEL, // INPUT
			NetFlow* RXCHBONDMASTER, // INPUT
			NetFlow* RXCHBONDSLAVE, // INPUT
			NetFlow* RXCOMMADETEN, // INPUT
			NetFlow* RXDDIEN, // INPUT
			NetFlow* RXDFEXYDEN, // INPUT
			NetFlow* RXDLYBYPASS, // INPUT
			NetFlow* RXDLYEN, // INPUT
			NetFlow* RXDLYOVRDEN, // INPUT
			NetFlow* RXDLYSRESET, // INPUT
			NetFlow* RXELECIDLEMODE, // INPUT
			NetFlow* RXGEARBOXSLIP, // INPUT
			NetFlow* RXLPMHFHOLD, // INPUT
			NetFlow* RXLPMHFOVRDEN, // INPUT
			NetFlow* RXLPMLFHOLD, // INPUT
			NetFlow* RXLPMLFOVRDEN, // INPUT
			NetFlow* RXLPMOSINTNTRLEN, // INPUT
			NetFlow* RXLPMRESET, // INPUT
			NetFlow* RXMCOMMAALIGNEN, // INPUT
			NetFlow* RXOOBRESET, // INPUT
			NetFlow* RXOSCALRESET, // INPUT
			NetFlow* RXOSHOLD, // INPUT
			NetFlow* RXOSINTCFG, // INPUT
			NetFlow* RXOSINTEN, // INPUT
			NetFlow* RXOSINTHOLD, // INPUT
			NetFlow* RXOSINTID0, // INPUT
			NetFlow* RXOSINTNTRLEN, // INPUT
			NetFlow* RXOSINTOVRDEN, // INPUT
			NetFlow* RXOSINTPD, // INPUT
			NetFlow* RXOSINTSTROBE, // INPUT
			NetFlow* RXOSINTTESTOVRDEN, // INPUT
			NetFlow* RXOSOVRDEN, // INPUT
			NetFlow* RXOUTCLKSEL, // INPUT
			NetFlow* RXPCOMMAALIGNEN, // INPUT
			NetFlow* RXPCSRESET, // INPUT
			NetFlow* RXPD, // INPUT
			NetFlow* RXPHALIGN, // INPUT
			NetFlow* RXPHALIGNEN, // INPUT
			NetFlow* RXPHDLYPD, // INPUT
			NetFlow* RXPHDLYRESET, // INPUT
			NetFlow* RXPHOVRDEN, // INPUT
			NetFlow* RXPMARESET, // INPUT
			NetFlow* RXPOLARITY, // INPUT
			NetFlow* RXPRBSCNTRESET, // INPUT
			NetFlow* RXPRBSSEL, // INPUT
			NetFlow* RXRATE, // INPUT
			NetFlow* RXRATEMODE, // INPUT
			NetFlow* RXSLIDE, // INPUT
			NetFlow* RXSYNCALLIN, // INPUT
			NetFlow* RXSYNCIN, // INPUT
			NetFlow* RXSYNCMODE, // INPUT
			NetFlow* RXSYSCLKSEL, // INPUT
			NetFlow* RXUSERRDY, // INPUT
			NetFlow* RXUSRCLK, // INPUT
			NetFlow* RXUSRCLK2, // INPUT
			NetFlow* SETERRSTATUS, // INPUT
			NetFlow* SIGVALIDCLK, // INPUT
			NetFlow* TSTIN, // INPUT
			NetFlow* TX8B10BBYPASS, // INPUT
			NetFlow* TX8B10BEN, // INPUT
			NetFlow* TXBUFDIFFCTRL, // INPUT
			NetFlow* TXCHARDISPMODE, // INPUT
			NetFlow* TXCHARDISPVAL, // INPUT
			NetFlow* TXCHARISK, // INPUT
			NetFlow* TXCOMINIT, // INPUT
			NetFlow* TXCOMSAS, // INPUT
			NetFlow* TXCOMWAKE, // INPUT
			NetFlow* TXDATA, // INPUT
			NetFlow* TXDEEMPH, // INPUT
			NetFlow* TXDETECTRX, // INPUT
			NetFlow* TXDIFFCTRL, // INPUT
			NetFlow* TXDIFFPD, // INPUT
			NetFlow* TXDLYBYPASS, // INPUT
			NetFlow* TXDLYEN, // INPUT
			NetFlow* TXDLYHOLD, // INPUT
			NetFlow* TXDLYOVRDEN, // INPUT
			NetFlow* TXDLYSRESET, // INPUT
			NetFlow* TXDLYUPDOWN, // INPUT
			NetFlow* TXELECIDLE, // INPUT
			NetFlow* TXHEADER, // INPUT
			NetFlow* TXINHIBIT, // INPUT
			NetFlow* TXMAINCURSOR, // INPUT
			NetFlow* TXMARGIN, // INPUT
			NetFlow* TXOUTCLKSEL, // INPUT
			NetFlow* TXPCSRESET, // INPUT
			NetFlow* TXPD, // INPUT
			NetFlow* TXPDELECIDLEMODE, // INPUT
			NetFlow* TXPHALIGN, // INPUT
			NetFlow* TXPHALIGNEN, // INPUT
			NetFlow* TXPHDLYPD, // INPUT
			NetFlow* TXPHDLYRESET, // INPUT
			NetFlow* TXPHDLYTSTCLK, // INPUT
			NetFlow* TXPHINIT, // INPUT
			NetFlow* TXPHOVRDEN, // INPUT
			NetFlow* TXPIPPMEN, // INPUT
			NetFlow* TXPIPPMOVRDEN, // INPUT
			NetFlow* TXPIPPMPD, // INPUT
			NetFlow* TXPIPPMSEL, // INPUT
			NetFlow* TXPIPPMSTEPSIZE, // INPUT
			NetFlow* TXPISOPD, // INPUT
			NetFlow* TXPMARESET, // INPUT
			NetFlow* TXPOLARITY, // INPUT
			NetFlow* TXPOSTCURSOR, // INPUT
			NetFlow* TXPOSTCURSORINV, // INPUT
			NetFlow* TXPRBSFORCEERR, // INPUT
			NetFlow* TXPRBSSEL, // INPUT
			NetFlow* TXPRECURSOR, // INPUT
			NetFlow* TXPRECURSORINV, // INPUT
			NetFlow* TXRATE, // INPUT
			NetFlow* TXRATEMODE, // INPUT
			NetFlow* TXSEQUENCE, // INPUT
			NetFlow* TXSTARTSEQ, // INPUT
			NetFlow* TXSWING, // INPUT
			NetFlow* TXSYNCALLIN, // INPUT
			NetFlow* TXSYNCIN, // INPUT
			NetFlow* TXSYNCMODE, // INPUT
			NetFlow* TXSYSCLKSEL, // INPUT
			NetFlow* TXUSERRDY, // INPUT
			NetFlow* TXUSRCLK, // INPUT
			NetFlow* TXUSRCLK2 // INPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->LOC = LOC; // Default: "UNPLACED"
			this->ACJTAG_DEBUG_MODE = ACJTAG_DEBUG_MODE; // Default: 1'b0
			this->ACJTAG_MODE = ACJTAG_MODE; // Default: 1'b0
			this->ACJTAG_RESET = ACJTAG_RESET; // Default: 1'b0
			this->ADAPT_CFG0 = ADAPT_CFG0; // Default: 20'b00000000000000000000
			this->ALIGN_COMMA_DOUBLE = ALIGN_COMMA_DOUBLE; // Default: "FALSE"
			this->ALIGN_COMMA_ENABLE = ALIGN_COMMA_ENABLE; // Default: 10'b0001111111
			this->ALIGN_COMMA_WORD = ALIGN_COMMA_WORD; // Default: 1
			this->ALIGN_MCOMMA_DET = ALIGN_MCOMMA_DET; // Default: "TRUE"
			this->ALIGN_MCOMMA_VALUE = ALIGN_MCOMMA_VALUE; // Default: 10'b1010000011
			this->ALIGN_PCOMMA_DET = ALIGN_PCOMMA_DET; // Default: "TRUE"
			this->ALIGN_PCOMMA_VALUE = ALIGN_PCOMMA_VALUE; // Default: 10'b0101111100
			this->CBCC_DATA_SOURCE_SEL = CBCC_DATA_SOURCE_SEL; // Default: "DECODED"
			this->CFOK_CFG = CFOK_CFG; // Default: 43'b1001001000000000000000001000000111010000000
			this->CFOK_CFG2 = CFOK_CFG2; // Default: 7'b0100000
			this->CFOK_CFG3 = CFOK_CFG3; // Default: 7'b0100000
			this->CFOK_CFG4 = CFOK_CFG4; // Default: 1'b0
			this->CFOK_CFG5 = CFOK_CFG5; // Default: 2'b00
			this->CFOK_CFG6 = CFOK_CFG6; // Default: 4'b0000
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
			this->CLK_COMMON_SWING = CLK_COMMON_SWING; // Default: 1'b0
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
			this->DEC_MCOMMA_DETECT = DEC_MCOMMA_DETECT; // Default: "TRUE"
			this->DEC_PCOMMA_DETECT = DEC_PCOMMA_DETECT; // Default: "TRUE"
			this->DEC_VALID_COMMA_ONLY = DEC_VALID_COMMA_ONLY; // Default: "TRUE"
			this->DMONITOR_CFG = DMONITOR_CFG; // Default: 24'h000A00
			this->ES_CLK_PHASE_SEL = ES_CLK_PHASE_SEL; // Default: 1'b0
			this->ES_CONTROL = ES_CONTROL; // Default: 6'b000000
			this->ES_ERRDET_EN = ES_ERRDET_EN; // Default: "FALSE"
			this->ES_EYE_SCAN_EN = ES_EYE_SCAN_EN; // Default: "FALSE"
			this->ES_HORZ_OFFSET = ES_HORZ_OFFSET; // Default: 12'h010
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
			this->PMA_LOOPBACK_CFG = PMA_LOOPBACK_CFG; // Default: 1'b0
			this->PMA_RSV = PMA_RSV; // Default: 32'h00000333
			this->PMA_RSV2 = PMA_RSV2; // Default: 32'h00002050
			this->PMA_RSV3 = PMA_RSV3; // Default: 2'b00
			this->PMA_RSV4 = PMA_RSV4; // Default: 4'b0000
			this->PMA_RSV5 = PMA_RSV5; // Default: 1'b0
			this->PMA_RSV6 = PMA_RSV6; // Default: 1'b0
			this->PMA_RSV7 = PMA_RSV7; // Default: 1'b0
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
			this->RXCDR_CFG = RXCDR_CFG; // Default: 83'h0000107FE406001041010
			this->RXCDR_FR_RESET_ON_EIDLE = RXCDR_FR_RESET_ON_EIDLE; // Default: 1'b0
			this->RXCDR_HOLD_DURING_EIDLE = RXCDR_HOLD_DURING_EIDLE; // Default: 1'b0
			this->RXCDR_LOCK_CFG = RXCDR_LOCK_CFG; // Default: 6'b001001
			this->RXCDR_PH_RESET_ON_EIDLE = RXCDR_PH_RESET_ON_EIDLE; // Default: 1'b0
			this->RXDLY_CFG = RXDLY_CFG; // Default: 16'h0010
			this->RXDLY_LCFG = RXDLY_LCFG; // Default: 9'h020
			this->RXDLY_TAP_CFG = RXDLY_TAP_CFG; // Default: 16'h0000
			this->RXGEARBOX_EN = RXGEARBOX_EN; // Default: "FALSE"
			this->RXISCANRESET_TIME = RXISCANRESET_TIME; // Default: 5'b00001
			this->RXLPMRESET_TIME = RXLPMRESET_TIME; // Default: 7'b0001111
			this->RXLPM_BIAS_STARTUP_DISABLE = RXLPM_BIAS_STARTUP_DISABLE; // Default: 1'b0
			this->RXLPM_CFG = RXLPM_CFG; // Default: 4'b0110
			this->RXLPM_CFG1 = RXLPM_CFG1; // Default: 1'b0
			this->RXLPM_CM_CFG = RXLPM_CM_CFG; // Default: 1'b0
			this->RXLPM_GC_CFG = RXLPM_GC_CFG; // Default: 9'b111100010
			this->RXLPM_GC_CFG2 = RXLPM_GC_CFG2; // Default: 3'b001
			this->RXLPM_HF_CFG = RXLPM_HF_CFG; // Default: 14'b00001111110000
			this->RXLPM_HF_CFG2 = RXLPM_HF_CFG2; // Default: 5'b01010
			this->RXLPM_HF_CFG3 = RXLPM_HF_CFG3; // Default: 4'b0000
			this->RXLPM_HOLD_DURING_EIDLE = RXLPM_HOLD_DURING_EIDLE; // Default: 1'b0
			this->RXLPM_INCM_CFG = RXLPM_INCM_CFG; // Default: 1'b0
			this->RXLPM_IPCM_CFG = RXLPM_IPCM_CFG; // Default: 1'b0
			this->RXLPM_LF_CFG = RXLPM_LF_CFG; // Default: 18'b000000001111110000
			this->RXLPM_LF_CFG2 = RXLPM_LF_CFG2; // Default: 5'b01010
			this->RXLPM_OSINT_CFG = RXLPM_OSINT_CFG; // Default: 3'b100
			this->RXOOB_CFG = RXOOB_CFG; // Default: 7'b0000110
			this->RXOOB_CLK_CFG = RXOOB_CLK_CFG; // Default: "PMA"
			this->RXOSCALRESET_TIME = RXOSCALRESET_TIME; // Default: 5'b00011
			this->RXOSCALRESET_TIMEOUT = RXOSCALRESET_TIMEOUT; // Default: 5'b00000
			this->RXOUT_DIV = RXOUT_DIV; // Default: 2
			this->RXPCSRESET_TIME = RXPCSRESET_TIME; // Default: 5'b00001
			this->RXPHDLY_CFG = RXPHDLY_CFG; // Default: 24'h084000
			this->RXPH_CFG = RXPH_CFG; // Default: 24'hC00002
			this->RXPH_MONITOR_SEL = RXPH_MONITOR_SEL; // Default: 5'b00000
			this->RXPI_CFG0 = RXPI_CFG0; // Default: 3'b000
			this->RXPI_CFG1 = RXPI_CFG1; // Default: 1'b0
			this->RXPI_CFG2 = RXPI_CFG2; // Default: 1'b0
			this->RXPMARESET_TIME = RXPMARESET_TIME; // Default: 5'b00011
			this->RXPRBS_ERR_LOOPBACK = RXPRBS_ERR_LOOPBACK; // Default: 1'b0
			this->RXSLIDE_AUTO_WAIT = RXSLIDE_AUTO_WAIT; // Default: 7
			this->RXSLIDE_MODE = RXSLIDE_MODE; // Default: "OFF"
			this->RXSYNC_MULTILANE = RXSYNC_MULTILANE; // Default: 1'b0
			this->RXSYNC_OVRD = RXSYNC_OVRD; // Default: 1'b0
			this->RXSYNC_SKIP_DA = RXSYNC_SKIP_DA; // Default: 1'b0
			this->RX_BIAS_CFG = RX_BIAS_CFG; // Default: 16'b0000111100110011
			this->RX_BUFFER_CFG = RX_BUFFER_CFG; // Default: 6'b000000
			this->RX_CLK25_DIV = RX_CLK25_DIV; // Default: 7
			this->RX_CLKMUX_EN = RX_CLKMUX_EN; // Default: 1'b1
			this->RX_CM_SEL = RX_CM_SEL; // Default: 2'b11
			this->RX_CM_TRIM = RX_CM_TRIM; // Default: 4'b0100
			this->RX_DATA_WIDTH = RX_DATA_WIDTH; // Default: 20
			this->RX_DDI_SEL = RX_DDI_SEL; // Default: 6'b000000
			this->RX_DEBUG_CFG = RX_DEBUG_CFG; // Default: 14'b00000000000000
			this->RX_DEFER_RESET_BUF_EN = RX_DEFER_RESET_BUF_EN; // Default: "TRUE"
			this->RX_DISPERR_SEQ_MATCH = RX_DISPERR_SEQ_MATCH; // Default: "TRUE"
			this->RX_OS_CFG = RX_OS_CFG; // Default: 13'b0001111110000
			this->RX_SIG_VALID_DLY = RX_SIG_VALID_DLY; // Default: 10
			this->RX_XCLK_SEL = RX_XCLK_SEL; // Default: "RXREC"
			this->SAS_MAX_COM = SAS_MAX_COM; // Default: 64
			this->SAS_MIN_COM = SAS_MIN_COM; // Default: 36
			this->SATA_BURST_SEQ_LEN = SATA_BURST_SEQ_LEN; // Default: 4'b1111
			this->SATA_BURST_VAL = SATA_BURST_VAL; // Default: 3'b100
			this->SATA_EIDLE_VAL = SATA_EIDLE_VAL; // Default: 3'b100
			this->SATA_MAX_BURST = SATA_MAX_BURST; // Default: 8
			this->SATA_MAX_INIT = SATA_MAX_INIT; // Default: 21
			this->SATA_MAX_WAKE = SATA_MAX_WAKE; // Default: 7
			this->SATA_MIN_BURST = SATA_MIN_BURST; // Default: 4
			this->SATA_MIN_INIT = SATA_MIN_INIT; // Default: 12
			this->SATA_MIN_WAKE = SATA_MIN_WAKE; // Default: 4
			this->SATA_PLL_CFG = SATA_PLL_CFG; // Default: "VCO_3000MHZ"
			this->SHOW_REALIGN_COMMA = SHOW_REALIGN_COMMA; // Default: "TRUE"
			this->SIM_RECEIVER_DETECT_PASS = SIM_RECEIVER_DETECT_PASS; // Default: "TRUE"
			this->SIM_RESET_SPEEDUP = SIM_RESET_SPEEDUP; // Default: "TRUE"
			this->SIM_TX_EIDLE_DRIVE_LEVEL = SIM_TX_EIDLE_DRIVE_LEVEL; // Default: "X"
			this->SIM_VERSION = SIM_VERSION; // Default: "1.0"
			this->TERM_RCAL_CFG = TERM_RCAL_CFG; // Default: 15'b100001000010000
			this->TERM_RCAL_OVRD = TERM_RCAL_OVRD; // Default: 3'b000
			this->TRANS_TIME_RATE = TRANS_TIME_RATE; // Default: 8'h0E
			this->TST_RSV = TST_RSV; // Default: 32'h00000000
			this->TXBUF_EN = TXBUF_EN; // Default: "TRUE"
			this->TXBUF_RESET_ON_RATE_CHANGE = TXBUF_RESET_ON_RATE_CHANGE; // Default: "FALSE"
			this->TXDLY_CFG = TXDLY_CFG; // Default: 16'h0010
			this->TXDLY_LCFG = TXDLY_LCFG; // Default: 9'h020
			this->TXDLY_TAP_CFG = TXDLY_TAP_CFG; // Default: 16'h0000
			this->TXGEARBOX_EN = TXGEARBOX_EN; // Default: "FALSE"
			this->TXOOB_CFG = TXOOB_CFG; // Default: 1'b0
			this->TXOUT_DIV = TXOUT_DIV; // Default: 2
			this->TXPCSRESET_TIME = TXPCSRESET_TIME; // Default: 5'b00001
			this->TXPHDLY_CFG = TXPHDLY_CFG; // Default: 24'h084000
			this->TXPH_CFG = TXPH_CFG; // Default: 16'h0400
			this->TXPH_MONITOR_SEL = TXPH_MONITOR_SEL; // Default: 5'b00000
			this->TXPI_CFG0 = TXPI_CFG0; // Default: 2'b00
			this->TXPI_CFG1 = TXPI_CFG1; // Default: 2'b00
			this->TXPI_CFG2 = TXPI_CFG2; // Default: 2'b00
			this->TXPI_CFG3 = TXPI_CFG3; // Default: 1'b0
			this->TXPI_CFG4 = TXPI_CFG4; // Default: 1'b0
			this->TXPI_CFG5 = TXPI_CFG5; // Default: 3'b000
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
			this->TX_CLKMUX_EN = TX_CLKMUX_EN; // Default: 1'b1
			this->TX_DATA_WIDTH = TX_DATA_WIDTH; // Default: 20
			this->TX_DEEMPH0 = TX_DEEMPH0; // Default: 6'b000000
			this->TX_DEEMPH1 = TX_DEEMPH1; // Default: 6'b000000
			this->TX_DRIVE_MODE = TX_DRIVE_MODE; // Default: "DIRECT"
			this->TX_EIDLE_ASSERT_DELAY = TX_EIDLE_ASSERT_DELAY; // Default: 3'b110
			this->TX_EIDLE_DEASSERT_DELAY = TX_EIDLE_DEASSERT_DELAY; // Default: 3'b100
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
			this->TX_PREDRIVER_MODE = TX_PREDRIVER_MODE; // Default: 1'b0
			this->TX_RXDETECT_CFG = TX_RXDETECT_CFG; // Default: 14'h1832
			this->TX_RXDETECT_REF = TX_RXDETECT_REF; // Default: 3'b100
			this->TX_XCLK_SEL = TX_XCLK_SEL; // Default: "TXUSR"
			this->UCODEER_CLR = UCODEER_CLR; // Default: 1'b0
			this->USE_PCS_CLK_PHASE_SEL = USE_PCS_CLK_PHASE_SEL; // Default: 1'b0
			//Verilog Ports in definition order:
			this->DMONITOROUT = DMONITOROUT; // OUTPUT
			this->DRPDO = DRPDO; // OUTPUT
			this->DRPRDY = DRPRDY; // OUTPUT
			this->EYESCANDATAERROR = EYESCANDATAERROR; // OUTPUT
			this->GTPTXN = GTPTXN; // OUTPUT
			this->GTPTXP = GTPTXP; // OUTPUT
			this->PCSRSVDOUT = PCSRSVDOUT; // OUTPUT
			this->PHYSTATUS = PHYSTATUS; // OUTPUT
			this->PMARSVDOUT0 = PMARSVDOUT0; // OUTPUT
			this->PMARSVDOUT1 = PMARSVDOUT1; // OUTPUT
			this->RXBUFSTATUS = RXBUFSTATUS; // OUTPUT
			this->RXBYTEISALIGNED = RXBYTEISALIGNED; // OUTPUT
			this->RXBYTEREALIGN = RXBYTEREALIGN; // OUTPUT
			this->RXCDRLOCK = RXCDRLOCK; // OUTPUT
			this->RXCHANBONDSEQ = RXCHANBONDSEQ; // OUTPUT
			this->RXCHANISALIGNED = RXCHANISALIGNED; // OUTPUT
			this->RXCHANREALIGN = RXCHANREALIGN; // OUTPUT
			this->RXCHARISCOMMA = RXCHARISCOMMA; // OUTPUT
			this->RXCHARISK = RXCHARISK; // OUTPUT
			this->RXCHBONDO = RXCHBONDO; // OUTPUT
			this->RXCLKCORCNT = RXCLKCORCNT; // OUTPUT
			this->RXCOMINITDET = RXCOMINITDET; // OUTPUT
			this->RXCOMMADET = RXCOMMADET; // OUTPUT
			this->RXCOMSASDET = RXCOMSASDET; // OUTPUT
			this->RXCOMWAKEDET = RXCOMWAKEDET; // OUTPUT
			this->RXDATA = RXDATA; // OUTPUT
			this->RXDATAVALID = RXDATAVALID; // OUTPUT
			this->RXDISPERR = RXDISPERR; // OUTPUT
			this->RXDLYSRESETDONE = RXDLYSRESETDONE; // OUTPUT
			this->RXELECIDLE = RXELECIDLE; // OUTPUT
			this->RXHEADER = RXHEADER; // OUTPUT
			this->RXHEADERVALID = RXHEADERVALID; // OUTPUT
			this->RXNOTINTABLE = RXNOTINTABLE; // OUTPUT
			this->RXOSINTDONE = RXOSINTDONE; // OUTPUT
			this->RXOSINTSTARTED = RXOSINTSTARTED; // OUTPUT
			this->RXOSINTSTROBEDONE = RXOSINTSTROBEDONE; // OUTPUT
			this->RXOSINTSTROBESTARTED = RXOSINTSTROBESTARTED; // OUTPUT
			this->RXOUTCLK = RXOUTCLK; // OUTPUT
			this->RXOUTCLKFABRIC = RXOUTCLKFABRIC; // OUTPUT
			this->RXOUTCLKPCS = RXOUTCLKPCS; // OUTPUT
			this->RXPHALIGNDONE = RXPHALIGNDONE; // OUTPUT
			this->RXPHMONITOR = RXPHMONITOR; // OUTPUT
			this->RXPHSLIPMONITOR = RXPHSLIPMONITOR; // OUTPUT
			this->RXPMARESETDONE = RXPMARESETDONE; // OUTPUT
			this->RXPRBSERR = RXPRBSERR; // OUTPUT
			this->RXRATEDONE = RXRATEDONE; // OUTPUT
			this->RXRESETDONE = RXRESETDONE; // OUTPUT
			this->RXSTARTOFSEQ = RXSTARTOFSEQ; // OUTPUT
			this->RXSTATUS = RXSTATUS; // OUTPUT
			this->RXSYNCDONE = RXSYNCDONE; // OUTPUT
			this->RXSYNCOUT = RXSYNCOUT; // OUTPUT
			this->RXVALID = RXVALID; // OUTPUT
			this->TXBUFSTATUS = TXBUFSTATUS; // OUTPUT
			this->TXCOMFINISH = TXCOMFINISH; // OUTPUT
			this->TXDLYSRESETDONE = TXDLYSRESETDONE; // OUTPUT
			this->TXGEARBOXREADY = TXGEARBOXREADY; // OUTPUT
			this->TXOUTCLK = TXOUTCLK; // OUTPUT
			this->TXOUTCLKFABRIC = TXOUTCLKFABRIC; // OUTPUT
			this->TXOUTCLKPCS = TXOUTCLKPCS; // OUTPUT
			this->TXPHALIGNDONE = TXPHALIGNDONE; // OUTPUT
			this->TXPHINITDONE = TXPHINITDONE; // OUTPUT
			this->TXPMARESETDONE = TXPMARESETDONE; // OUTPUT
			this->TXRATEDONE = TXRATEDONE; // OUTPUT
			this->TXRESETDONE = TXRESETDONE; // OUTPUT
			this->TXSYNCDONE = TXSYNCDONE; // OUTPUT
			this->TXSYNCOUT = TXSYNCOUT; // OUTPUT
			this->CFGRESET = CFGRESET; // INPUT
			this->CLKRSVD0 = CLKRSVD0; // INPUT
			this->CLKRSVD1 = CLKRSVD1; // INPUT
			this->DMONFIFORESET = DMONFIFORESET; // INPUT
			this->DMONITORCLK = DMONITORCLK; // INPUT
			this->DRPADDR = DRPADDR; // INPUT
			this->DRPCLK = DRPCLK; // INPUT
			this->DRPDI = DRPDI; // INPUT
			this->DRPEN = DRPEN; // INPUT
			this->DRPWE = DRPWE; // INPUT
			this->EYESCANMODE = EYESCANMODE; // INPUT
			this->EYESCANRESET = EYESCANRESET; // INPUT
			this->EYESCANTRIGGER = EYESCANTRIGGER; // INPUT
			this->GTPRXN = GTPRXN; // INPUT
			this->GTPRXP = GTPRXP; // INPUT
			this->GTRESETSEL = GTRESETSEL; // INPUT
			this->GTRSVD = GTRSVD; // INPUT
			this->GTRXRESET = GTRXRESET; // INPUT
			this->GTTXRESET = GTTXRESET; // INPUT
			this->LOOPBACK = LOOPBACK; // INPUT
			this->PCSRSVDIN = PCSRSVDIN; // INPUT
			this->PLL0CLK = PLL0CLK; // INPUT
			this->PLL0REFCLK = PLL0REFCLK; // INPUT
			this->PLL1CLK = PLL1CLK; // INPUT
			this->PLL1REFCLK = PLL1REFCLK; // INPUT
			this->PMARSVDIN0 = PMARSVDIN0; // INPUT
			this->PMARSVDIN1 = PMARSVDIN1; // INPUT
			this->PMARSVDIN2 = PMARSVDIN2; // INPUT
			this->PMARSVDIN3 = PMARSVDIN3; // INPUT
			this->PMARSVDIN4 = PMARSVDIN4; // INPUT
			this->RESETOVRD = RESETOVRD; // INPUT
			this->RX8B10BEN = RX8B10BEN; // INPUT
			this->RXADAPTSELTEST = RXADAPTSELTEST; // INPUT
			this->RXBUFRESET = RXBUFRESET; // INPUT
			this->RXCDRFREQRESET = RXCDRFREQRESET; // INPUT
			this->RXCDRHOLD = RXCDRHOLD; // INPUT
			this->RXCDROVRDEN = RXCDROVRDEN; // INPUT
			this->RXCDRRESET = RXCDRRESET; // INPUT
			this->RXCDRRESETRSV = RXCDRRESETRSV; // INPUT
			this->RXCHBONDEN = RXCHBONDEN; // INPUT
			this->RXCHBONDI = RXCHBONDI; // INPUT
			this->RXCHBONDLEVEL = RXCHBONDLEVEL; // INPUT
			this->RXCHBONDMASTER = RXCHBONDMASTER; // INPUT
			this->RXCHBONDSLAVE = RXCHBONDSLAVE; // INPUT
			this->RXCOMMADETEN = RXCOMMADETEN; // INPUT
			this->RXDDIEN = RXDDIEN; // INPUT
			this->RXDFEXYDEN = RXDFEXYDEN; // INPUT
			this->RXDLYBYPASS = RXDLYBYPASS; // INPUT
			this->RXDLYEN = RXDLYEN; // INPUT
			this->RXDLYOVRDEN = RXDLYOVRDEN; // INPUT
			this->RXDLYSRESET = RXDLYSRESET; // INPUT
			this->RXELECIDLEMODE = RXELECIDLEMODE; // INPUT
			this->RXGEARBOXSLIP = RXGEARBOXSLIP; // INPUT
			this->RXLPMHFHOLD = RXLPMHFHOLD; // INPUT
			this->RXLPMHFOVRDEN = RXLPMHFOVRDEN; // INPUT
			this->RXLPMLFHOLD = RXLPMLFHOLD; // INPUT
			this->RXLPMLFOVRDEN = RXLPMLFOVRDEN; // INPUT
			this->RXLPMOSINTNTRLEN = RXLPMOSINTNTRLEN; // INPUT
			this->RXLPMRESET = RXLPMRESET; // INPUT
			this->RXMCOMMAALIGNEN = RXMCOMMAALIGNEN; // INPUT
			this->RXOOBRESET = RXOOBRESET; // INPUT
			this->RXOSCALRESET = RXOSCALRESET; // INPUT
			this->RXOSHOLD = RXOSHOLD; // INPUT
			this->RXOSINTCFG = RXOSINTCFG; // INPUT
			this->RXOSINTEN = RXOSINTEN; // INPUT
			this->RXOSINTHOLD = RXOSINTHOLD; // INPUT
			this->RXOSINTID0 = RXOSINTID0; // INPUT
			this->RXOSINTNTRLEN = RXOSINTNTRLEN; // INPUT
			this->RXOSINTOVRDEN = RXOSINTOVRDEN; // INPUT
			this->RXOSINTPD = RXOSINTPD; // INPUT
			this->RXOSINTSTROBE = RXOSINTSTROBE; // INPUT
			this->RXOSINTTESTOVRDEN = RXOSINTTESTOVRDEN; // INPUT
			this->RXOSOVRDEN = RXOSOVRDEN; // INPUT
			this->RXOUTCLKSEL = RXOUTCLKSEL; // INPUT
			this->RXPCOMMAALIGNEN = RXPCOMMAALIGNEN; // INPUT
			this->RXPCSRESET = RXPCSRESET; // INPUT
			this->RXPD = RXPD; // INPUT
			this->RXPHALIGN = RXPHALIGN; // INPUT
			this->RXPHALIGNEN = RXPHALIGNEN; // INPUT
			this->RXPHDLYPD = RXPHDLYPD; // INPUT
			this->RXPHDLYRESET = RXPHDLYRESET; // INPUT
			this->RXPHOVRDEN = RXPHOVRDEN; // INPUT
			this->RXPMARESET = RXPMARESET; // INPUT
			this->RXPOLARITY = RXPOLARITY; // INPUT
			this->RXPRBSCNTRESET = RXPRBSCNTRESET; // INPUT
			this->RXPRBSSEL = RXPRBSSEL; // INPUT
			this->RXRATE = RXRATE; // INPUT
			this->RXRATEMODE = RXRATEMODE; // INPUT
			this->RXSLIDE = RXSLIDE; // INPUT
			this->RXSYNCALLIN = RXSYNCALLIN; // INPUT
			this->RXSYNCIN = RXSYNCIN; // INPUT
			this->RXSYNCMODE = RXSYNCMODE; // INPUT
			this->RXSYSCLKSEL = RXSYSCLKSEL; // INPUT
			this->RXUSERRDY = RXUSERRDY; // INPUT
			this->RXUSRCLK = RXUSRCLK; // INPUT
			this->RXUSRCLK2 = RXUSRCLK2; // INPUT
			this->SETERRSTATUS = SETERRSTATUS; // INPUT
			this->SIGVALIDCLK = SIGVALIDCLK; // INPUT
			this->TSTIN = TSTIN; // INPUT
			this->TX8B10BBYPASS = TX8B10BBYPASS; // INPUT
			this->TX8B10BEN = TX8B10BEN; // INPUT
			this->TXBUFDIFFCTRL = TXBUFDIFFCTRL; // INPUT
			this->TXCHARDISPMODE = TXCHARDISPMODE; // INPUT
			this->TXCHARDISPVAL = TXCHARDISPVAL; // INPUT
			this->TXCHARISK = TXCHARISK; // INPUT
			this->TXCOMINIT = TXCOMINIT; // INPUT
			this->TXCOMSAS = TXCOMSAS; // INPUT
			this->TXCOMWAKE = TXCOMWAKE; // INPUT
			this->TXDATA = TXDATA; // INPUT
			this->TXDEEMPH = TXDEEMPH; // INPUT
			this->TXDETECTRX = TXDETECTRX; // INPUT
			this->TXDIFFCTRL = TXDIFFCTRL; // INPUT
			this->TXDIFFPD = TXDIFFPD; // INPUT
			this->TXDLYBYPASS = TXDLYBYPASS; // INPUT
			this->TXDLYEN = TXDLYEN; // INPUT
			this->TXDLYHOLD = TXDLYHOLD; // INPUT
			this->TXDLYOVRDEN = TXDLYOVRDEN; // INPUT
			this->TXDLYSRESET = TXDLYSRESET; // INPUT
			this->TXDLYUPDOWN = TXDLYUPDOWN; // INPUT
			this->TXELECIDLE = TXELECIDLE; // INPUT
			this->TXHEADER = TXHEADER; // INPUT
			this->TXINHIBIT = TXINHIBIT; // INPUT
			this->TXMAINCURSOR = TXMAINCURSOR; // INPUT
			this->TXMARGIN = TXMARGIN; // INPUT
			this->TXOUTCLKSEL = TXOUTCLKSEL; // INPUT
			this->TXPCSRESET = TXPCSRESET; // INPUT
			this->TXPD = TXPD; // INPUT
			this->TXPDELECIDLEMODE = TXPDELECIDLEMODE; // INPUT
			this->TXPHALIGN = TXPHALIGN; // INPUT
			this->TXPHALIGNEN = TXPHALIGNEN; // INPUT
			this->TXPHDLYPD = TXPHDLYPD; // INPUT
			this->TXPHDLYRESET = TXPHDLYRESET; // INPUT
			this->TXPHDLYTSTCLK = TXPHDLYTSTCLK; // INPUT
			this->TXPHINIT = TXPHINIT; // INPUT
			this->TXPHOVRDEN = TXPHOVRDEN; // INPUT
			this->TXPIPPMEN = TXPIPPMEN; // INPUT
			this->TXPIPPMOVRDEN = TXPIPPMOVRDEN; // INPUT
			this->TXPIPPMPD = TXPIPPMPD; // INPUT
			this->TXPIPPMSEL = TXPIPPMSEL; // INPUT
			this->TXPIPPMSTEPSIZE = TXPIPPMSTEPSIZE; // INPUT
			this->TXPISOPD = TXPISOPD; // INPUT
			this->TXPMARESET = TXPMARESET; // INPUT
			this->TXPOLARITY = TXPOLARITY; // INPUT
			this->TXPOSTCURSOR = TXPOSTCURSOR; // INPUT
			this->TXPOSTCURSORINV = TXPOSTCURSORINV; // INPUT
			this->TXPRBSFORCEERR = TXPRBSFORCEERR; // INPUT
			this->TXPRBSSEL = TXPRBSSEL; // INPUT
			this->TXPRECURSOR = TXPRECURSOR; // INPUT
			this->TXPRECURSORINV = TXPRECURSORINV; // INPUT
			this->TXRATE = TXRATE; // INPUT
			this->TXRATEMODE = TXRATEMODE; // INPUT
			this->TXSEQUENCE = TXSEQUENCE; // INPUT
			this->TXSTARTSEQ = TXSTARTSEQ; // INPUT
			this->TXSWING = TXSWING; // INPUT
			this->TXSYNCALLIN = TXSYNCALLIN; // INPUT
			this->TXSYNCIN = TXSYNCIN; // INPUT
			this->TXSYNCMODE = TXSYNCMODE; // INPUT
			this->TXSYSCLKSEL = TXSYSCLKSEL; // INPUT
			this->TXUSERRDY = TXUSERRDY; // INPUT
			this->TXUSRCLK = TXUSRCLK; // INPUT
			this->TXUSRCLK2 = TXUSRCLK2; // INPUT
		
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
