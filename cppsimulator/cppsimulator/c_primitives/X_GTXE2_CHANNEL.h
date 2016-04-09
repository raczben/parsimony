/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_GTXE2_CHANNEL{

		//Verilog Parameters:
		parameter_string_t LOC;
		parameter_enum_t ALIGN_COMMA_DOUBLE;
		parameter_int_t ALIGN_COMMA_ENABLE;
		parameter_int_t ALIGN_COMMA_WORD;
		parameter_enum_t ALIGN_MCOMMA_DET;
		parameter_int_t ALIGN_MCOMMA_VALUE;
		parameter_enum_t ALIGN_PCOMMA_DET;
		parameter_int_t ALIGN_PCOMMA_VALUE;
		parameter_string_t CBCC_DATA_SOURCE_SEL;
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
		parameter_int_t CPLL_CFG;
		parameter_int_t CPLL_FBDIV;
		parameter_int_t CPLL_FBDIV_45;
		parameter_int_t CPLL_INIT_CFG;
		parameter_int_t CPLL_LOCK_CFG;
		parameter_int_t CPLL_REFCLK_DIV;
		parameter_enum_t DEC_MCOMMA_DETECT;
		parameter_enum_t DEC_PCOMMA_DETECT;
		parameter_enum_t DEC_VALID_COMMA_ONLY;
		parameter_int_t DMONITOR_CFG;
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
		parameter_int_t OUTREFCLK_SEL_INV;
		parameter_enum_t PCS_PCIE_EN;
		parameter_int_t PCS_RSVD_ATTR;
		parameter_int_t PD_TRANS_TIME_FROM_P2;
		parameter_int_t PD_TRANS_TIME_NONE_P2;
		parameter_int_t PD_TRANS_TIME_TO_P2;
		parameter_int_t PMA_RSV;
		parameter_int_t PMA_RSV2;
		parameter_int_t PMA_RSV3;
		parameter_int_t PMA_RSV4;
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
		parameter_int_t RXDFELPMRESET_TIME;
		parameter_int_t RXDLY_CFG;
		parameter_int_t RXDLY_LCFG;
		parameter_int_t RXDLY_TAP_CFG;
		parameter_enum_t RXGEARBOX_EN;
		parameter_int_t RXISCANRESET_TIME;
		parameter_int_t RXLPM_HF_CFG;
		parameter_int_t RXLPM_LF_CFG;
		parameter_int_t RXOOB_CFG;
		parameter_int_t RXOUT_DIV;
		parameter_int_t RXPCSRESET_TIME;
		parameter_int_t RXPHDLY_CFG;
		parameter_int_t RXPH_CFG;
		parameter_int_t RXPH_MONITOR_SEL;
		parameter_int_t RXPMARESET_TIME;
		parameter_int_t RXPRBS_ERR_LOOPBACK;
		parameter_int_t RXSLIDE_AUTO_WAIT;
		parameter_string_t RXSLIDE_MODE;
		parameter_int_t RX_BIAS_CFG;
		parameter_int_t RX_BUFFER_CFG;
		parameter_int_t RX_CLK25_DIV;
		parameter_int_t RX_CLKMUX_PD;
		parameter_int_t RX_CM_SEL;
		parameter_int_t RX_CM_TRIM;
		parameter_int_t RX_DATA_WIDTH;
		parameter_int_t RX_DDI_SEL;
		parameter_int_t RX_DEBUG_CFG;
		parameter_enum_t RX_DEFER_RESET_BUF_EN;
		parameter_int_t RX_DFE_GAIN_CFG;
		parameter_int_t RX_DFE_H2_CFG;
		parameter_int_t RX_DFE_H3_CFG;
		parameter_int_t RX_DFE_H4_CFG;
		parameter_int_t RX_DFE_H5_CFG;
		parameter_int_t RX_DFE_KL_CFG;
		parameter_int_t RX_DFE_KL_CFG2;
		parameter_int_t RX_DFE_LPM_CFG;
		parameter_int_t RX_DFE_LPM_HOLD_DURING_EIDLE;
		parameter_int_t RX_DFE_UT_CFG;
		parameter_int_t RX_DFE_VP_CFG;
		parameter_int_t RX_DFE_XYD_CFG;
		parameter_enum_t RX_DISPERR_SEQ_MATCH;
		parameter_int_t RX_INT_DATAWIDTH;
		parameter_int_t RX_OS_CFG;
		parameter_int_t RX_SIG_VALID_DLY;
		parameter_string_t RX_XCLK_SEL;
		parameter_int_t SAS_MAX_COM;
		parameter_int_t SAS_MIN_COM;
		parameter_int_t SATA_BURST_SEQ_LEN;
		parameter_int_t SATA_BURST_VAL;
		parameter_string_t SATA_CPLL_CFG;
		parameter_int_t SATA_EIDLE_VAL;
		parameter_int_t SATA_MAX_BURST;
		parameter_int_t SATA_MAX_INIT;
		parameter_int_t SATA_MAX_WAKE;
		parameter_int_t SATA_MIN_BURST;
		parameter_int_t SATA_MIN_INIT;
		parameter_int_t SATA_MIN_WAKE;
		parameter_enum_t SHOW_REALIGN_COMMA;
		parameter_int_t SIM_CPLLREFCLK_SEL;
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
		parameter_int_t TXOUT_DIV;
		parameter_int_t TXPCSRESET_TIME;
		parameter_int_t TXPHDLY_CFG;
		parameter_int_t TXPH_CFG;
		parameter_int_t TXPH_MONITOR_SEL;
		parameter_int_t TXPMARESET_TIME;
		parameter_int_t TX_CLK25_DIV;
		parameter_int_t TX_CLKMUX_PD;
		parameter_int_t TX_DATA_WIDTH;
		parameter_int_t TX_DEEMPH0;
		parameter_int_t TX_DEEMPH1;
		parameter_string_t TX_DRIVE_MODE;
		parameter_int_t TX_EIDLE_ASSERT_DELAY;
		parameter_int_t TX_EIDLE_DEASSERT_DELAY;
		parameter_int_t TX_INT_DATAWIDTH;
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
		parameter_int_t TX_QPI_STATUS_EN;
		parameter_int_t TX_RXDETECT_CFG;
		parameter_int_t TX_RXDETECT_REF;
		parameter_string_t TX_XCLK_SEL;
		parameter_int_t UCODEER_CLR;
		//Verilog Ports in definition order:
		NetFlow* CPLLFBCLKLOST; // OUTPUT
		NetFlow* CPLLLOCK; // OUTPUT
		NetFlow* CPLLREFCLKLOST; // OUTPUT
		NetFlow* DMONITOROUT; // OUTPUT
		NetFlow* DRPDO; // OUTPUT
		NetFlow* DRPRDY; // OUTPUT
		NetFlow* EYESCANDATAERROR; // OUTPUT
		NetFlow* GTREFCLKMONITOR; // OUTPUT
		NetFlow* GTXTXN; // OUTPUT
		NetFlow* GTXTXP; // OUTPUT
		NetFlow* PCSRSVDOUT; // OUTPUT
		NetFlow* PHYSTATUS; // OUTPUT
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
		NetFlow* RXMONITOROUT; // OUTPUT
		NetFlow* RXNOTINTABLE; // OUTPUT
		NetFlow* RXOUTCLK; // OUTPUT
		NetFlow* RXOUTCLKFABRIC; // OUTPUT
		NetFlow* RXOUTCLKPCS; // OUTPUT
		NetFlow* RXPHALIGNDONE; // OUTPUT
		NetFlow* RXPHMONITOR; // OUTPUT
		NetFlow* RXPHSLIPMONITOR; // OUTPUT
		NetFlow* RXPRBSERR; // OUTPUT
		NetFlow* RXQPISENN; // OUTPUT
		NetFlow* RXQPISENP; // OUTPUT
		NetFlow* RXRATEDONE; // OUTPUT
		NetFlow* RXRESETDONE; // OUTPUT
		NetFlow* RXSTARTOFSEQ; // OUTPUT
		NetFlow* RXSTATUS; // OUTPUT
		NetFlow* RXVALID; // OUTPUT
		NetFlow* TSTOUT; // OUTPUT
		NetFlow* TXBUFSTATUS; // OUTPUT
		NetFlow* TXCOMFINISH; // OUTPUT
		NetFlow* TXDLYSRESETDONE; // OUTPUT
		NetFlow* TXGEARBOXREADY; // OUTPUT
		NetFlow* TXOUTCLK; // OUTPUT
		NetFlow* TXOUTCLKFABRIC; // OUTPUT
		NetFlow* TXOUTCLKPCS; // OUTPUT
		NetFlow* TXPHALIGNDONE; // OUTPUT
		NetFlow* TXPHINITDONE; // OUTPUT
		NetFlow* TXQPISENN; // OUTPUT
		NetFlow* TXQPISENP; // OUTPUT
		NetFlow* TXRATEDONE; // OUTPUT
		NetFlow* TXRESETDONE; // OUTPUT
		NetFlow* CFGRESET; // INPUT
		NetFlow* CLKRSVD; // INPUT
		NetFlow* CPLLLOCKDETCLK; // INPUT
		NetFlow* CPLLLOCKEN; // INPUT
		NetFlow* CPLLPD; // INPUT
		NetFlow* CPLLREFCLKSEL; // INPUT
		NetFlow* CPLLRESET; // INPUT
		NetFlow* DRPADDR; // INPUT
		NetFlow* DRPCLK; // INPUT
		NetFlow* DRPDI; // INPUT
		NetFlow* DRPEN; // INPUT
		NetFlow* DRPWE; // INPUT
		NetFlow* EYESCANMODE; // INPUT
		NetFlow* EYESCANRESET; // INPUT
		NetFlow* EYESCANTRIGGER; // INPUT
		NetFlow* GTGREFCLK; // INPUT
		NetFlow* GTNORTHREFCLK0; // INPUT
		NetFlow* GTNORTHREFCLK1; // INPUT
		NetFlow* GTREFCLK0; // INPUT
		NetFlow* GTREFCLK1; // INPUT
		NetFlow* GTRESETSEL; // INPUT
		NetFlow* GTRSVD; // INPUT
		NetFlow* GTRXRESET; // INPUT
		NetFlow* GTSOUTHREFCLK0; // INPUT
		NetFlow* GTSOUTHREFCLK1; // INPUT
		NetFlow* GTTXRESET; // INPUT
		NetFlow* GTXRXN; // INPUT
		NetFlow* GTXRXP; // INPUT
		NetFlow* LOOPBACK; // INPUT
		NetFlow* PCSRSVDIN; // INPUT
		NetFlow* PCSRSVDIN2; // INPUT
		NetFlow* PMARSVDIN; // INPUT
		NetFlow* PMARSVDIN2; // INPUT
		NetFlow* QPLLCLK; // INPUT
		NetFlow* QPLLREFCLK; // INPUT
		NetFlow* RESETOVRD; // INPUT
		NetFlow* RX8B10BEN; // INPUT
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
		NetFlow* RXDFEAGCHOLD; // INPUT
		NetFlow* RXDFEAGCOVRDEN; // INPUT
		NetFlow* RXDFECM1EN; // INPUT
		NetFlow* RXDFELFHOLD; // INPUT
		NetFlow* RXDFELFOVRDEN; // INPUT
		NetFlow* RXDFELPMRESET; // INPUT
		NetFlow* RXDFETAP2HOLD; // INPUT
		NetFlow* RXDFETAP2OVRDEN; // INPUT
		NetFlow* RXDFETAP3HOLD; // INPUT
		NetFlow* RXDFETAP3OVRDEN; // INPUT
		NetFlow* RXDFETAP4HOLD; // INPUT
		NetFlow* RXDFETAP4OVRDEN; // INPUT
		NetFlow* RXDFETAP5HOLD; // INPUT
		NetFlow* RXDFETAP5OVRDEN; // INPUT
		NetFlow* RXDFEUTHOLD; // INPUT
		NetFlow* RXDFEUTOVRDEN; // INPUT
		NetFlow* RXDFEVPHOLD; // INPUT
		NetFlow* RXDFEVPOVRDEN; // INPUT
		NetFlow* RXDFEVSEN; // INPUT
		NetFlow* RXDFEXYDEN; // INPUT
		NetFlow* RXDFEXYDHOLD; // INPUT
		NetFlow* RXDFEXYDOVRDEN; // INPUT
		NetFlow* RXDLYBYPASS; // INPUT
		NetFlow* RXDLYEN; // INPUT
		NetFlow* RXDLYOVRDEN; // INPUT
		NetFlow* RXDLYSRESET; // INPUT
		NetFlow* RXELECIDLEMODE; // INPUT
		NetFlow* RXGEARBOXSLIP; // INPUT
		NetFlow* RXLPMEN; // INPUT
		NetFlow* RXLPMHFHOLD; // INPUT
		NetFlow* RXLPMHFOVRDEN; // INPUT
		NetFlow* RXLPMLFHOLD; // INPUT
		NetFlow* RXLPMLFKLOVRDEN; // INPUT
		NetFlow* RXMCOMMAALIGNEN; // INPUT
		NetFlow* RXMONITORSEL; // INPUT
		NetFlow* RXOOBRESET; // INPUT
		NetFlow* RXOSHOLD; // INPUT
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
		NetFlow* RXQPIEN; // INPUT
		NetFlow* RXRATE; // INPUT
		NetFlow* RXSLIDE; // INPUT
		NetFlow* RXSYSCLKSEL; // INPUT
		NetFlow* RXUSERRDY; // INPUT
		NetFlow* RXUSRCLK; // INPUT
		NetFlow* RXUSRCLK2; // INPUT
		NetFlow* SETERRSTATUS; // INPUT
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
		NetFlow* TXPISOPD; // INPUT
		NetFlow* TXPMARESET; // INPUT
		NetFlow* TXPOLARITY; // INPUT
		NetFlow* TXPOSTCURSOR; // INPUT
		NetFlow* TXPOSTCURSORINV; // INPUT
		NetFlow* TXPRBSFORCEERR; // INPUT
		NetFlow* TXPRBSSEL; // INPUT
		NetFlow* TXPRECURSOR; // INPUT
		NetFlow* TXPRECURSORINV; // INPUT
		NetFlow* TXQPIBIASEN; // INPUT
		NetFlow* TXQPISTRONGPDOWN; // INPUT
		NetFlow* TXQPIWEAKPUP; // INPUT
		NetFlow* TXRATE; // INPUT
		NetFlow* TXSEQUENCE; // INPUT
		NetFlow* TXSTARTSEQ; // INPUT
		NetFlow* TXSWING; // INPUT
		NetFlow* TXSYSCLKSEL; // INPUT
		NetFlow* TXUSERRDY; // INPUT
		NetFlow* TXUSRCLK; // INPUT
		NetFlow* TXUSRCLK2; // INPUT
		
	
		X_GTXE2_CHANNEL(
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_enum_t ALIGN_COMMA_DOUBLE, // Default: "FALSE"
			parameter_int_t ALIGN_COMMA_ENABLE, // Default: 10'b0001111111
			parameter_int_t ALIGN_COMMA_WORD, // Default: 1
			parameter_enum_t ALIGN_MCOMMA_DET, // Default: "TRUE"
			parameter_int_t ALIGN_MCOMMA_VALUE, // Default: 10'b1010000011
			parameter_enum_t ALIGN_PCOMMA_DET, // Default: "TRUE"
			parameter_int_t ALIGN_PCOMMA_VALUE, // Default: 10'b0101111100
			parameter_string_t CBCC_DATA_SOURCE_SEL, // Default: "DECODED"
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
			parameter_int_t CPLL_CFG, // Default: 24'hB007D8
			parameter_int_t CPLL_FBDIV, // Default: 4
			parameter_int_t CPLL_FBDIV_45, // Default: 5
			parameter_int_t CPLL_INIT_CFG, // Default: 24'h00001E
			parameter_int_t CPLL_LOCK_CFG, // Default: 16'h01E8
			parameter_int_t CPLL_REFCLK_DIV, // Default: 1
			parameter_enum_t DEC_MCOMMA_DETECT, // Default: "TRUE"
			parameter_enum_t DEC_PCOMMA_DETECT, // Default: "TRUE"
			parameter_enum_t DEC_VALID_COMMA_ONLY, // Default: "TRUE"
			parameter_int_t DMONITOR_CFG, // Default: 24'h000A00
			parameter_int_t ES_CONTROL, // Default: 6'b000000
			parameter_enum_t ES_ERRDET_EN, // Default: "FALSE"
			parameter_enum_t ES_EYE_SCAN_EN, // Default: "FALSE"
			parameter_int_t ES_HORZ_OFFSET, // Default: 12'h000
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
			parameter_int_t OUTREFCLK_SEL_INV, // Default: 2'b11
			parameter_enum_t PCS_PCIE_EN, // Default: "FALSE"
			parameter_int_t PCS_RSVD_ATTR, // Default: 48'h000000000000
			parameter_int_t PD_TRANS_TIME_FROM_P2, // Default: 12'h03C
			parameter_int_t PD_TRANS_TIME_NONE_P2, // Default: 8'h19
			parameter_int_t PD_TRANS_TIME_TO_P2, // Default: 8'h64
			parameter_int_t PMA_RSV, // Default: 32'h00000000
			parameter_int_t PMA_RSV2, // Default: 16'h2050
			parameter_int_t PMA_RSV3, // Default: 2'b00
			parameter_int_t PMA_RSV4, // Default: 32'h00000000
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
			parameter_int_t RXCDR_CFG, // Default: 72'h0B000023FF20400020
			parameter_int_t RXCDR_FR_RESET_ON_EIDLE, // Default: 1'b0
			parameter_int_t RXCDR_HOLD_DURING_EIDLE, // Default: 1'b0
			parameter_int_t RXCDR_LOCK_CFG, // Default: 6'b010101
			parameter_int_t RXCDR_PH_RESET_ON_EIDLE, // Default: 1'b0
			parameter_int_t RXDFELPMRESET_TIME, // Default: 7'b0001111
			parameter_int_t RXDLY_CFG, // Default: 16'h001F
			parameter_int_t RXDLY_LCFG, // Default: 9'h030
			parameter_int_t RXDLY_TAP_CFG, // Default: 16'h0000
			parameter_enum_t RXGEARBOX_EN, // Default: "FALSE"
			parameter_int_t RXISCANRESET_TIME, // Default: 5'b00001
			parameter_int_t RXLPM_HF_CFG, // Default: 14'b00000011110000
			parameter_int_t RXLPM_LF_CFG, // Default: 14'b00000011110000
			parameter_int_t RXOOB_CFG, // Default: 7'b0000110
			parameter_int_t RXOUT_DIV, // Default: 2
			parameter_int_t RXPCSRESET_TIME, // Default: 5'b00001
			parameter_int_t RXPHDLY_CFG, // Default: 24'h084020
			parameter_int_t RXPH_CFG, // Default: 24'h000000
			parameter_int_t RXPH_MONITOR_SEL, // Default: 5'b00000
			parameter_int_t RXPMARESET_TIME, // Default: 5'b00011
			parameter_int_t RXPRBS_ERR_LOOPBACK, // Default: 1'b0
			parameter_int_t RXSLIDE_AUTO_WAIT, // Default: 7
			parameter_string_t RXSLIDE_MODE, // Default: "OFF"
			parameter_int_t RX_BIAS_CFG, // Default: 12'b000000000000
			parameter_int_t RX_BUFFER_CFG, // Default: 6'b000000
			parameter_int_t RX_CLK25_DIV, // Default: 7
			parameter_int_t RX_CLKMUX_PD, // Default: 1'b1
			parameter_int_t RX_CM_SEL, // Default: 2'b11
			parameter_int_t RX_CM_TRIM, // Default: 3'b100
			parameter_int_t RX_DATA_WIDTH, // Default: 20
			parameter_int_t RX_DDI_SEL, // Default: 6'b000000
			parameter_int_t RX_DEBUG_CFG, // Default: 12'b000000000000
			parameter_enum_t RX_DEFER_RESET_BUF_EN, // Default: "TRUE"
			parameter_int_t RX_DFE_GAIN_CFG, // Default: 23'h180E0F
			parameter_int_t RX_DFE_H2_CFG, // Default: 12'b000111100000
			parameter_int_t RX_DFE_H3_CFG, // Default: 12'b000111100000
			parameter_int_t RX_DFE_H4_CFG, // Default: 11'b00011110000
			parameter_int_t RX_DFE_H5_CFG, // Default: 11'b00011110000
			parameter_int_t RX_DFE_KL_CFG, // Default: 13'b0001111110000
			parameter_int_t RX_DFE_KL_CFG2, // Default: 32'h3008E56A
			parameter_int_t RX_DFE_LPM_CFG, // Default: 16'h0904
			parameter_int_t RX_DFE_LPM_HOLD_DURING_EIDLE, // Default: 1'b0
			parameter_int_t RX_DFE_UT_CFG, // Default: 17'b00111111000000000
			parameter_int_t RX_DFE_VP_CFG, // Default: 17'b00011111100000000
			parameter_int_t RX_DFE_XYD_CFG, // Default: 13'b0000000010000
			parameter_enum_t RX_DISPERR_SEQ_MATCH, // Default: "TRUE"
			parameter_int_t RX_INT_DATAWIDTH, // Default: 0
			parameter_int_t RX_OS_CFG, // Default: 13'b0001111110000
			parameter_int_t RX_SIG_VALID_DLY, // Default: 10
			parameter_string_t RX_XCLK_SEL, // Default: "RXREC"
			parameter_int_t SAS_MAX_COM, // Default: 64
			parameter_int_t SAS_MIN_COM, // Default: 36
			parameter_int_t SATA_BURST_SEQ_LEN, // Default: 4'b1111
			parameter_int_t SATA_BURST_VAL, // Default: 3'b100
			parameter_string_t SATA_CPLL_CFG, // Default: "VCO_3000MHZ"
			parameter_int_t SATA_EIDLE_VAL, // Default: 3'b100
			parameter_int_t SATA_MAX_BURST, // Default: 8
			parameter_int_t SATA_MAX_INIT, // Default: 21
			parameter_int_t SATA_MAX_WAKE, // Default: 7
			parameter_int_t SATA_MIN_BURST, // Default: 4
			parameter_int_t SATA_MIN_INIT, // Default: 12
			parameter_int_t SATA_MIN_WAKE, // Default: 4
			parameter_enum_t SHOW_REALIGN_COMMA, // Default: "TRUE"
			parameter_int_t SIM_CPLLREFCLK_SEL, // Default: 3'b001
			parameter_enum_t SIM_RECEIVER_DETECT_PASS, // Default: "TRUE"
			parameter_enum_t SIM_RESET_SPEEDUP, // Default: "TRUE"
			parameter_string_t SIM_TX_EIDLE_DRIVE_LEVEL, // Default: "X"
			parameter_string_t SIM_VERSION, // Default: "4.0"
			parameter_int_t TERM_RCAL_CFG, // Default: 5'b10000
			parameter_int_t TERM_RCAL_OVRD, // Default: 1'b0
			parameter_int_t TRANS_TIME_RATE, // Default: 8'h0E
			parameter_int_t TST_RSV, // Default: 32'h00000000
			parameter_enum_t TXBUF_EN, // Default: "TRUE"
			parameter_enum_t TXBUF_RESET_ON_RATE_CHANGE, // Default: "FALSE"
			parameter_int_t TXDLY_CFG, // Default: 16'h001F
			parameter_int_t TXDLY_LCFG, // Default: 9'h030
			parameter_int_t TXDLY_TAP_CFG, // Default: 16'h0000
			parameter_enum_t TXGEARBOX_EN, // Default: "FALSE"
			parameter_int_t TXOUT_DIV, // Default: 2
			parameter_int_t TXPCSRESET_TIME, // Default: 5'b00001
			parameter_int_t TXPHDLY_CFG, // Default: 24'h084020
			parameter_int_t TXPH_CFG, // Default: 16'h0780
			parameter_int_t TXPH_MONITOR_SEL, // Default: 5'b00000
			parameter_int_t TXPMARESET_TIME, // Default: 5'b00001
			parameter_int_t TX_CLK25_DIV, // Default: 7
			parameter_int_t TX_CLKMUX_PD, // Default: 1'b1
			parameter_int_t TX_DATA_WIDTH, // Default: 20
			parameter_int_t TX_DEEMPH0, // Default: 5'b00000
			parameter_int_t TX_DEEMPH1, // Default: 5'b00000
			parameter_string_t TX_DRIVE_MODE, // Default: "DIRECT"
			parameter_int_t TX_EIDLE_ASSERT_DELAY, // Default: 3'b110
			parameter_int_t TX_EIDLE_DEASSERT_DELAY, // Default: 3'b100
			parameter_int_t TX_INT_DATAWIDTH, // Default: 0
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
			parameter_int_t TX_QPI_STATUS_EN, // Default: 1'b0
			parameter_int_t TX_RXDETECT_CFG, // Default: 14'h1832
			parameter_int_t TX_RXDETECT_REF, // Default: 3'b100
			parameter_string_t TX_XCLK_SEL, // Default: "TXUSR"
			parameter_int_t UCODEER_CLR, // Default: 1'b0
			//Verilog Ports in definition order:
			NetFlow* CPLLFBCLKLOST, // OUTPUT
			NetFlow* CPLLLOCK, // OUTPUT
			NetFlow* CPLLREFCLKLOST, // OUTPUT
			NetFlow* DMONITOROUT, // OUTPUT
			NetFlow* DRPDO, // OUTPUT
			NetFlow* DRPRDY, // OUTPUT
			NetFlow* EYESCANDATAERROR, // OUTPUT
			NetFlow* GTREFCLKMONITOR, // OUTPUT
			NetFlow* GTXTXN, // OUTPUT
			NetFlow* GTXTXP, // OUTPUT
			NetFlow* PCSRSVDOUT, // OUTPUT
			NetFlow* PHYSTATUS, // OUTPUT
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
			NetFlow* RXMONITOROUT, // OUTPUT
			NetFlow* RXNOTINTABLE, // OUTPUT
			NetFlow* RXOUTCLK, // OUTPUT
			NetFlow* RXOUTCLKFABRIC, // OUTPUT
			NetFlow* RXOUTCLKPCS, // OUTPUT
			NetFlow* RXPHALIGNDONE, // OUTPUT
			NetFlow* RXPHMONITOR, // OUTPUT
			NetFlow* RXPHSLIPMONITOR, // OUTPUT
			NetFlow* RXPRBSERR, // OUTPUT
			NetFlow* RXQPISENN, // OUTPUT
			NetFlow* RXQPISENP, // OUTPUT
			NetFlow* RXRATEDONE, // OUTPUT
			NetFlow* RXRESETDONE, // OUTPUT
			NetFlow* RXSTARTOFSEQ, // OUTPUT
			NetFlow* RXSTATUS, // OUTPUT
			NetFlow* RXVALID, // OUTPUT
			NetFlow* TSTOUT, // OUTPUT
			NetFlow* TXBUFSTATUS, // OUTPUT
			NetFlow* TXCOMFINISH, // OUTPUT
			NetFlow* TXDLYSRESETDONE, // OUTPUT
			NetFlow* TXGEARBOXREADY, // OUTPUT
			NetFlow* TXOUTCLK, // OUTPUT
			NetFlow* TXOUTCLKFABRIC, // OUTPUT
			NetFlow* TXOUTCLKPCS, // OUTPUT
			NetFlow* TXPHALIGNDONE, // OUTPUT
			NetFlow* TXPHINITDONE, // OUTPUT
			NetFlow* TXQPISENN, // OUTPUT
			NetFlow* TXQPISENP, // OUTPUT
			NetFlow* TXRATEDONE, // OUTPUT
			NetFlow* TXRESETDONE, // OUTPUT
			NetFlow* CFGRESET, // INPUT
			NetFlow* CLKRSVD, // INPUT
			NetFlow* CPLLLOCKDETCLK, // INPUT
			NetFlow* CPLLLOCKEN, // INPUT
			NetFlow* CPLLPD, // INPUT
			NetFlow* CPLLREFCLKSEL, // INPUT
			NetFlow* CPLLRESET, // INPUT
			NetFlow* DRPADDR, // INPUT
			NetFlow* DRPCLK, // INPUT
			NetFlow* DRPDI, // INPUT
			NetFlow* DRPEN, // INPUT
			NetFlow* DRPWE, // INPUT
			NetFlow* EYESCANMODE, // INPUT
			NetFlow* EYESCANRESET, // INPUT
			NetFlow* EYESCANTRIGGER, // INPUT
			NetFlow* GTGREFCLK, // INPUT
			NetFlow* GTNORTHREFCLK0, // INPUT
			NetFlow* GTNORTHREFCLK1, // INPUT
			NetFlow* GTREFCLK0, // INPUT
			NetFlow* GTREFCLK1, // INPUT
			NetFlow* GTRESETSEL, // INPUT
			NetFlow* GTRSVD, // INPUT
			NetFlow* GTRXRESET, // INPUT
			NetFlow* GTSOUTHREFCLK0, // INPUT
			NetFlow* GTSOUTHREFCLK1, // INPUT
			NetFlow* GTTXRESET, // INPUT
			NetFlow* GTXRXN, // INPUT
			NetFlow* GTXRXP, // INPUT
			NetFlow* LOOPBACK, // INPUT
			NetFlow* PCSRSVDIN, // INPUT
			NetFlow* PCSRSVDIN2, // INPUT
			NetFlow* PMARSVDIN, // INPUT
			NetFlow* PMARSVDIN2, // INPUT
			NetFlow* QPLLCLK, // INPUT
			NetFlow* QPLLREFCLK, // INPUT
			NetFlow* RESETOVRD, // INPUT
			NetFlow* RX8B10BEN, // INPUT
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
			NetFlow* RXDFEAGCHOLD, // INPUT
			NetFlow* RXDFEAGCOVRDEN, // INPUT
			NetFlow* RXDFECM1EN, // INPUT
			NetFlow* RXDFELFHOLD, // INPUT
			NetFlow* RXDFELFOVRDEN, // INPUT
			NetFlow* RXDFELPMRESET, // INPUT
			NetFlow* RXDFETAP2HOLD, // INPUT
			NetFlow* RXDFETAP2OVRDEN, // INPUT
			NetFlow* RXDFETAP3HOLD, // INPUT
			NetFlow* RXDFETAP3OVRDEN, // INPUT
			NetFlow* RXDFETAP4HOLD, // INPUT
			NetFlow* RXDFETAP4OVRDEN, // INPUT
			NetFlow* RXDFETAP5HOLD, // INPUT
			NetFlow* RXDFETAP5OVRDEN, // INPUT
			NetFlow* RXDFEUTHOLD, // INPUT
			NetFlow* RXDFEUTOVRDEN, // INPUT
			NetFlow* RXDFEVPHOLD, // INPUT
			NetFlow* RXDFEVPOVRDEN, // INPUT
			NetFlow* RXDFEVSEN, // INPUT
			NetFlow* RXDFEXYDEN, // INPUT
			NetFlow* RXDFEXYDHOLD, // INPUT
			NetFlow* RXDFEXYDOVRDEN, // INPUT
			NetFlow* RXDLYBYPASS, // INPUT
			NetFlow* RXDLYEN, // INPUT
			NetFlow* RXDLYOVRDEN, // INPUT
			NetFlow* RXDLYSRESET, // INPUT
			NetFlow* RXELECIDLEMODE, // INPUT
			NetFlow* RXGEARBOXSLIP, // INPUT
			NetFlow* RXLPMEN, // INPUT
			NetFlow* RXLPMHFHOLD, // INPUT
			NetFlow* RXLPMHFOVRDEN, // INPUT
			NetFlow* RXLPMLFHOLD, // INPUT
			NetFlow* RXLPMLFKLOVRDEN, // INPUT
			NetFlow* RXMCOMMAALIGNEN, // INPUT
			NetFlow* RXMONITORSEL, // INPUT
			NetFlow* RXOOBRESET, // INPUT
			NetFlow* RXOSHOLD, // INPUT
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
			NetFlow* RXQPIEN, // INPUT
			NetFlow* RXRATE, // INPUT
			NetFlow* RXSLIDE, // INPUT
			NetFlow* RXSYSCLKSEL, // INPUT
			NetFlow* RXUSERRDY, // INPUT
			NetFlow* RXUSRCLK, // INPUT
			NetFlow* RXUSRCLK2, // INPUT
			NetFlow* SETERRSTATUS, // INPUT
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
			NetFlow* TXPISOPD, // INPUT
			NetFlow* TXPMARESET, // INPUT
			NetFlow* TXPOLARITY, // INPUT
			NetFlow* TXPOSTCURSOR, // INPUT
			NetFlow* TXPOSTCURSORINV, // INPUT
			NetFlow* TXPRBSFORCEERR, // INPUT
			NetFlow* TXPRBSSEL, // INPUT
			NetFlow* TXPRECURSOR, // INPUT
			NetFlow* TXPRECURSORINV, // INPUT
			NetFlow* TXQPIBIASEN, // INPUT
			NetFlow* TXQPISTRONGPDOWN, // INPUT
			NetFlow* TXQPIWEAKPUP, // INPUT
			NetFlow* TXRATE, // INPUT
			NetFlow* TXSEQUENCE, // INPUT
			NetFlow* TXSTARTSEQ, // INPUT
			NetFlow* TXSWING, // INPUT
			NetFlow* TXSYSCLKSEL, // INPUT
			NetFlow* TXUSERRDY, // INPUT
			NetFlow* TXUSRCLK, // INPUT
			NetFlow* TXUSRCLK2 // INPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->LOC = LOC; // Default: "UNPLACED"
			this->ALIGN_COMMA_DOUBLE = ALIGN_COMMA_DOUBLE; // Default: "FALSE"
			this->ALIGN_COMMA_ENABLE = ALIGN_COMMA_ENABLE; // Default: 10'b0001111111
			this->ALIGN_COMMA_WORD = ALIGN_COMMA_WORD; // Default: 1
			this->ALIGN_MCOMMA_DET = ALIGN_MCOMMA_DET; // Default: "TRUE"
			this->ALIGN_MCOMMA_VALUE = ALIGN_MCOMMA_VALUE; // Default: 10'b1010000011
			this->ALIGN_PCOMMA_DET = ALIGN_PCOMMA_DET; // Default: "TRUE"
			this->ALIGN_PCOMMA_VALUE = ALIGN_PCOMMA_VALUE; // Default: 10'b0101111100
			this->CBCC_DATA_SOURCE_SEL = CBCC_DATA_SOURCE_SEL; // Default: "DECODED"
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
			this->CPLL_CFG = CPLL_CFG; // Default: 24'hB007D8
			this->CPLL_FBDIV = CPLL_FBDIV; // Default: 4
			this->CPLL_FBDIV_45 = CPLL_FBDIV_45; // Default: 5
			this->CPLL_INIT_CFG = CPLL_INIT_CFG; // Default: 24'h00001E
			this->CPLL_LOCK_CFG = CPLL_LOCK_CFG; // Default: 16'h01E8
			this->CPLL_REFCLK_DIV = CPLL_REFCLK_DIV; // Default: 1
			this->DEC_MCOMMA_DETECT = DEC_MCOMMA_DETECT; // Default: "TRUE"
			this->DEC_PCOMMA_DETECT = DEC_PCOMMA_DETECT; // Default: "TRUE"
			this->DEC_VALID_COMMA_ONLY = DEC_VALID_COMMA_ONLY; // Default: "TRUE"
			this->DMONITOR_CFG = DMONITOR_CFG; // Default: 24'h000A00
			this->ES_CONTROL = ES_CONTROL; // Default: 6'b000000
			this->ES_ERRDET_EN = ES_ERRDET_EN; // Default: "FALSE"
			this->ES_EYE_SCAN_EN = ES_EYE_SCAN_EN; // Default: "FALSE"
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
			this->OUTREFCLK_SEL_INV = OUTREFCLK_SEL_INV; // Default: 2'b11
			this->PCS_PCIE_EN = PCS_PCIE_EN; // Default: "FALSE"
			this->PCS_RSVD_ATTR = PCS_RSVD_ATTR; // Default: 48'h000000000000
			this->PD_TRANS_TIME_FROM_P2 = PD_TRANS_TIME_FROM_P2; // Default: 12'h03C
			this->PD_TRANS_TIME_NONE_P2 = PD_TRANS_TIME_NONE_P2; // Default: 8'h19
			this->PD_TRANS_TIME_TO_P2 = PD_TRANS_TIME_TO_P2; // Default: 8'h64
			this->PMA_RSV = PMA_RSV; // Default: 32'h00000000
			this->PMA_RSV2 = PMA_RSV2; // Default: 16'h2050
			this->PMA_RSV3 = PMA_RSV3; // Default: 2'b00
			this->PMA_RSV4 = PMA_RSV4; // Default: 32'h00000000
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
			this->RXCDR_CFG = RXCDR_CFG; // Default: 72'h0B000023FF20400020
			this->RXCDR_FR_RESET_ON_EIDLE = RXCDR_FR_RESET_ON_EIDLE; // Default: 1'b0
			this->RXCDR_HOLD_DURING_EIDLE = RXCDR_HOLD_DURING_EIDLE; // Default: 1'b0
			this->RXCDR_LOCK_CFG = RXCDR_LOCK_CFG; // Default: 6'b010101
			this->RXCDR_PH_RESET_ON_EIDLE = RXCDR_PH_RESET_ON_EIDLE; // Default: 1'b0
			this->RXDFELPMRESET_TIME = RXDFELPMRESET_TIME; // Default: 7'b0001111
			this->RXDLY_CFG = RXDLY_CFG; // Default: 16'h001F
			this->RXDLY_LCFG = RXDLY_LCFG; // Default: 9'h030
			this->RXDLY_TAP_CFG = RXDLY_TAP_CFG; // Default: 16'h0000
			this->RXGEARBOX_EN = RXGEARBOX_EN; // Default: "FALSE"
			this->RXISCANRESET_TIME = RXISCANRESET_TIME; // Default: 5'b00001
			this->RXLPM_HF_CFG = RXLPM_HF_CFG; // Default: 14'b00000011110000
			this->RXLPM_LF_CFG = RXLPM_LF_CFG; // Default: 14'b00000011110000
			this->RXOOB_CFG = RXOOB_CFG; // Default: 7'b0000110
			this->RXOUT_DIV = RXOUT_DIV; // Default: 2
			this->RXPCSRESET_TIME = RXPCSRESET_TIME; // Default: 5'b00001
			this->RXPHDLY_CFG = RXPHDLY_CFG; // Default: 24'h084020
			this->RXPH_CFG = RXPH_CFG; // Default: 24'h000000
			this->RXPH_MONITOR_SEL = RXPH_MONITOR_SEL; // Default: 5'b00000
			this->RXPMARESET_TIME = RXPMARESET_TIME; // Default: 5'b00011
			this->RXPRBS_ERR_LOOPBACK = RXPRBS_ERR_LOOPBACK; // Default: 1'b0
			this->RXSLIDE_AUTO_WAIT = RXSLIDE_AUTO_WAIT; // Default: 7
			this->RXSLIDE_MODE = RXSLIDE_MODE; // Default: "OFF"
			this->RX_BIAS_CFG = RX_BIAS_CFG; // Default: 12'b000000000000
			this->RX_BUFFER_CFG = RX_BUFFER_CFG; // Default: 6'b000000
			this->RX_CLK25_DIV = RX_CLK25_DIV; // Default: 7
			this->RX_CLKMUX_PD = RX_CLKMUX_PD; // Default: 1'b1
			this->RX_CM_SEL = RX_CM_SEL; // Default: 2'b11
			this->RX_CM_TRIM = RX_CM_TRIM; // Default: 3'b100
			this->RX_DATA_WIDTH = RX_DATA_WIDTH; // Default: 20
			this->RX_DDI_SEL = RX_DDI_SEL; // Default: 6'b000000
			this->RX_DEBUG_CFG = RX_DEBUG_CFG; // Default: 12'b000000000000
			this->RX_DEFER_RESET_BUF_EN = RX_DEFER_RESET_BUF_EN; // Default: "TRUE"
			this->RX_DFE_GAIN_CFG = RX_DFE_GAIN_CFG; // Default: 23'h180E0F
			this->RX_DFE_H2_CFG = RX_DFE_H2_CFG; // Default: 12'b000111100000
			this->RX_DFE_H3_CFG = RX_DFE_H3_CFG; // Default: 12'b000111100000
			this->RX_DFE_H4_CFG = RX_DFE_H4_CFG; // Default: 11'b00011110000
			this->RX_DFE_H5_CFG = RX_DFE_H5_CFG; // Default: 11'b00011110000
			this->RX_DFE_KL_CFG = RX_DFE_KL_CFG; // Default: 13'b0001111110000
			this->RX_DFE_KL_CFG2 = RX_DFE_KL_CFG2; // Default: 32'h3008E56A
			this->RX_DFE_LPM_CFG = RX_DFE_LPM_CFG; // Default: 16'h0904
			this->RX_DFE_LPM_HOLD_DURING_EIDLE = RX_DFE_LPM_HOLD_DURING_EIDLE; // Default: 1'b0
			this->RX_DFE_UT_CFG = RX_DFE_UT_CFG; // Default: 17'b00111111000000000
			this->RX_DFE_VP_CFG = RX_DFE_VP_CFG; // Default: 17'b00011111100000000
			this->RX_DFE_XYD_CFG = RX_DFE_XYD_CFG; // Default: 13'b0000000010000
			this->RX_DISPERR_SEQ_MATCH = RX_DISPERR_SEQ_MATCH; // Default: "TRUE"
			this->RX_INT_DATAWIDTH = RX_INT_DATAWIDTH; // Default: 0
			this->RX_OS_CFG = RX_OS_CFG; // Default: 13'b0001111110000
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
			this->SIM_VERSION = SIM_VERSION; // Default: "4.0"
			this->TERM_RCAL_CFG = TERM_RCAL_CFG; // Default: 5'b10000
			this->TERM_RCAL_OVRD = TERM_RCAL_OVRD; // Default: 1'b0
			this->TRANS_TIME_RATE = TRANS_TIME_RATE; // Default: 8'h0E
			this->TST_RSV = TST_RSV; // Default: 32'h00000000
			this->TXBUF_EN = TXBUF_EN; // Default: "TRUE"
			this->TXBUF_RESET_ON_RATE_CHANGE = TXBUF_RESET_ON_RATE_CHANGE; // Default: "FALSE"
			this->TXDLY_CFG = TXDLY_CFG; // Default: 16'h001F
			this->TXDLY_LCFG = TXDLY_LCFG; // Default: 9'h030
			this->TXDLY_TAP_CFG = TXDLY_TAP_CFG; // Default: 16'h0000
			this->TXGEARBOX_EN = TXGEARBOX_EN; // Default: "FALSE"
			this->TXOUT_DIV = TXOUT_DIV; // Default: 2
			this->TXPCSRESET_TIME = TXPCSRESET_TIME; // Default: 5'b00001
			this->TXPHDLY_CFG = TXPHDLY_CFG; // Default: 24'h084020
			this->TXPH_CFG = TXPH_CFG; // Default: 16'h0780
			this->TXPH_MONITOR_SEL = TXPH_MONITOR_SEL; // Default: 5'b00000
			this->TXPMARESET_TIME = TXPMARESET_TIME; // Default: 5'b00001
			this->TX_CLK25_DIV = TX_CLK25_DIV; // Default: 7
			this->TX_CLKMUX_PD = TX_CLKMUX_PD; // Default: 1'b1
			this->TX_DATA_WIDTH = TX_DATA_WIDTH; // Default: 20
			this->TX_DEEMPH0 = TX_DEEMPH0; // Default: 5'b00000
			this->TX_DEEMPH1 = TX_DEEMPH1; // Default: 5'b00000
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
			this->TX_PREDRIVER_MODE = TX_PREDRIVER_MODE; // Default: 1'b0
			this->TX_QPI_STATUS_EN = TX_QPI_STATUS_EN; // Default: 1'b0
			this->TX_RXDETECT_CFG = TX_RXDETECT_CFG; // Default: 14'h1832
			this->TX_RXDETECT_REF = TX_RXDETECT_REF; // Default: 3'b100
			this->TX_XCLK_SEL = TX_XCLK_SEL; // Default: "TXUSR"
			this->UCODEER_CLR = UCODEER_CLR; // Default: 1'b0
			//Verilog Ports in definition order:
			this->CPLLFBCLKLOST = CPLLFBCLKLOST; // OUTPUT
			this->CPLLLOCK = CPLLLOCK; // OUTPUT
			this->CPLLREFCLKLOST = CPLLREFCLKLOST; // OUTPUT
			this->DMONITOROUT = DMONITOROUT; // OUTPUT
			this->DRPDO = DRPDO; // OUTPUT
			this->DRPRDY = DRPRDY; // OUTPUT
			this->EYESCANDATAERROR = EYESCANDATAERROR; // OUTPUT
			this->GTREFCLKMONITOR = GTREFCLKMONITOR; // OUTPUT
			this->GTXTXN = GTXTXN; // OUTPUT
			this->GTXTXP = GTXTXP; // OUTPUT
			this->PCSRSVDOUT = PCSRSVDOUT; // OUTPUT
			this->PHYSTATUS = PHYSTATUS; // OUTPUT
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
			this->RXMONITOROUT = RXMONITOROUT; // OUTPUT
			this->RXNOTINTABLE = RXNOTINTABLE; // OUTPUT
			this->RXOUTCLK = RXOUTCLK; // OUTPUT
			this->RXOUTCLKFABRIC = RXOUTCLKFABRIC; // OUTPUT
			this->RXOUTCLKPCS = RXOUTCLKPCS; // OUTPUT
			this->RXPHALIGNDONE = RXPHALIGNDONE; // OUTPUT
			this->RXPHMONITOR = RXPHMONITOR; // OUTPUT
			this->RXPHSLIPMONITOR = RXPHSLIPMONITOR; // OUTPUT
			this->RXPRBSERR = RXPRBSERR; // OUTPUT
			this->RXQPISENN = RXQPISENN; // OUTPUT
			this->RXQPISENP = RXQPISENP; // OUTPUT
			this->RXRATEDONE = RXRATEDONE; // OUTPUT
			this->RXRESETDONE = RXRESETDONE; // OUTPUT
			this->RXSTARTOFSEQ = RXSTARTOFSEQ; // OUTPUT
			this->RXSTATUS = RXSTATUS; // OUTPUT
			this->RXVALID = RXVALID; // OUTPUT
			this->TSTOUT = TSTOUT; // OUTPUT
			this->TXBUFSTATUS = TXBUFSTATUS; // OUTPUT
			this->TXCOMFINISH = TXCOMFINISH; // OUTPUT
			this->TXDLYSRESETDONE = TXDLYSRESETDONE; // OUTPUT
			this->TXGEARBOXREADY = TXGEARBOXREADY; // OUTPUT
			this->TXOUTCLK = TXOUTCLK; // OUTPUT
			this->TXOUTCLKFABRIC = TXOUTCLKFABRIC; // OUTPUT
			this->TXOUTCLKPCS = TXOUTCLKPCS; // OUTPUT
			this->TXPHALIGNDONE = TXPHALIGNDONE; // OUTPUT
			this->TXPHINITDONE = TXPHINITDONE; // OUTPUT
			this->TXQPISENN = TXQPISENN; // OUTPUT
			this->TXQPISENP = TXQPISENP; // OUTPUT
			this->TXRATEDONE = TXRATEDONE; // OUTPUT
			this->TXRESETDONE = TXRESETDONE; // OUTPUT
			this->CFGRESET = CFGRESET; // INPUT
			this->CLKRSVD = CLKRSVD; // INPUT
			this->CPLLLOCKDETCLK = CPLLLOCKDETCLK; // INPUT
			this->CPLLLOCKEN = CPLLLOCKEN; // INPUT
			this->CPLLPD = CPLLPD; // INPUT
			this->CPLLREFCLKSEL = CPLLREFCLKSEL; // INPUT
			this->CPLLRESET = CPLLRESET; // INPUT
			this->DRPADDR = DRPADDR; // INPUT
			this->DRPCLK = DRPCLK; // INPUT
			this->DRPDI = DRPDI; // INPUT
			this->DRPEN = DRPEN; // INPUT
			this->DRPWE = DRPWE; // INPUT
			this->EYESCANMODE = EYESCANMODE; // INPUT
			this->EYESCANRESET = EYESCANRESET; // INPUT
			this->EYESCANTRIGGER = EYESCANTRIGGER; // INPUT
			this->GTGREFCLK = GTGREFCLK; // INPUT
			this->GTNORTHREFCLK0 = GTNORTHREFCLK0; // INPUT
			this->GTNORTHREFCLK1 = GTNORTHREFCLK1; // INPUT
			this->GTREFCLK0 = GTREFCLK0; // INPUT
			this->GTREFCLK1 = GTREFCLK1; // INPUT
			this->GTRESETSEL = GTRESETSEL; // INPUT
			this->GTRSVD = GTRSVD; // INPUT
			this->GTRXRESET = GTRXRESET; // INPUT
			this->GTSOUTHREFCLK0 = GTSOUTHREFCLK0; // INPUT
			this->GTSOUTHREFCLK1 = GTSOUTHREFCLK1; // INPUT
			this->GTTXRESET = GTTXRESET; // INPUT
			this->GTXRXN = GTXRXN; // INPUT
			this->GTXRXP = GTXRXP; // INPUT
			this->LOOPBACK = LOOPBACK; // INPUT
			this->PCSRSVDIN = PCSRSVDIN; // INPUT
			this->PCSRSVDIN2 = PCSRSVDIN2; // INPUT
			this->PMARSVDIN = PMARSVDIN; // INPUT
			this->PMARSVDIN2 = PMARSVDIN2; // INPUT
			this->QPLLCLK = QPLLCLK; // INPUT
			this->QPLLREFCLK = QPLLREFCLK; // INPUT
			this->RESETOVRD = RESETOVRD; // INPUT
			this->RX8B10BEN = RX8B10BEN; // INPUT
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
			this->RXDFEAGCHOLD = RXDFEAGCHOLD; // INPUT
			this->RXDFEAGCOVRDEN = RXDFEAGCOVRDEN; // INPUT
			this->RXDFECM1EN = RXDFECM1EN; // INPUT
			this->RXDFELFHOLD = RXDFELFHOLD; // INPUT
			this->RXDFELFOVRDEN = RXDFELFOVRDEN; // INPUT
			this->RXDFELPMRESET = RXDFELPMRESET; // INPUT
			this->RXDFETAP2HOLD = RXDFETAP2HOLD; // INPUT
			this->RXDFETAP2OVRDEN = RXDFETAP2OVRDEN; // INPUT
			this->RXDFETAP3HOLD = RXDFETAP3HOLD; // INPUT
			this->RXDFETAP3OVRDEN = RXDFETAP3OVRDEN; // INPUT
			this->RXDFETAP4HOLD = RXDFETAP4HOLD; // INPUT
			this->RXDFETAP4OVRDEN = RXDFETAP4OVRDEN; // INPUT
			this->RXDFETAP5HOLD = RXDFETAP5HOLD; // INPUT
			this->RXDFETAP5OVRDEN = RXDFETAP5OVRDEN; // INPUT
			this->RXDFEUTHOLD = RXDFEUTHOLD; // INPUT
			this->RXDFEUTOVRDEN = RXDFEUTOVRDEN; // INPUT
			this->RXDFEVPHOLD = RXDFEVPHOLD; // INPUT
			this->RXDFEVPOVRDEN = RXDFEVPOVRDEN; // INPUT
			this->RXDFEVSEN = RXDFEVSEN; // INPUT
			this->RXDFEXYDEN = RXDFEXYDEN; // INPUT
			this->RXDFEXYDHOLD = RXDFEXYDHOLD; // INPUT
			this->RXDFEXYDOVRDEN = RXDFEXYDOVRDEN; // INPUT
			this->RXDLYBYPASS = RXDLYBYPASS; // INPUT
			this->RXDLYEN = RXDLYEN; // INPUT
			this->RXDLYOVRDEN = RXDLYOVRDEN; // INPUT
			this->RXDLYSRESET = RXDLYSRESET; // INPUT
			this->RXELECIDLEMODE = RXELECIDLEMODE; // INPUT
			this->RXGEARBOXSLIP = RXGEARBOXSLIP; // INPUT
			this->RXLPMEN = RXLPMEN; // INPUT
			this->RXLPMHFHOLD = RXLPMHFHOLD; // INPUT
			this->RXLPMHFOVRDEN = RXLPMHFOVRDEN; // INPUT
			this->RXLPMLFHOLD = RXLPMLFHOLD; // INPUT
			this->RXLPMLFKLOVRDEN = RXLPMLFKLOVRDEN; // INPUT
			this->RXMCOMMAALIGNEN = RXMCOMMAALIGNEN; // INPUT
			this->RXMONITORSEL = RXMONITORSEL; // INPUT
			this->RXOOBRESET = RXOOBRESET; // INPUT
			this->RXOSHOLD = RXOSHOLD; // INPUT
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
			this->RXQPIEN = RXQPIEN; // INPUT
			this->RXRATE = RXRATE; // INPUT
			this->RXSLIDE = RXSLIDE; // INPUT
			this->RXSYSCLKSEL = RXSYSCLKSEL; // INPUT
			this->RXUSERRDY = RXUSERRDY; // INPUT
			this->RXUSRCLK = RXUSRCLK; // INPUT
			this->RXUSRCLK2 = RXUSRCLK2; // INPUT
			this->SETERRSTATUS = SETERRSTATUS; // INPUT
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
			this->TXPISOPD = TXPISOPD; // INPUT
			this->TXPMARESET = TXPMARESET; // INPUT
			this->TXPOLARITY = TXPOLARITY; // INPUT
			this->TXPOSTCURSOR = TXPOSTCURSOR; // INPUT
			this->TXPOSTCURSORINV = TXPOSTCURSORINV; // INPUT
			this->TXPRBSFORCEERR = TXPRBSFORCEERR; // INPUT
			this->TXPRBSSEL = TXPRBSSEL; // INPUT
			this->TXPRECURSOR = TXPRECURSOR; // INPUT
			this->TXPRECURSORINV = TXPRECURSORINV; // INPUT
			this->TXQPIBIASEN = TXQPIBIASEN; // INPUT
			this->TXQPISTRONGPDOWN = TXQPISTRONGPDOWN; // INPUT
			this->TXQPIWEAKPUP = TXQPIWEAKPUP; // INPUT
			this->TXRATE = TXRATE; // INPUT
			this->TXSEQUENCE = TXSEQUENCE; // INPUT
			this->TXSTARTSEQ = TXSTARTSEQ; // INPUT
			this->TXSWING = TXSWING; // INPUT
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
