/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_GTXE1{

		//Verilog Parameters:
		parameter_string_t LOC;
		parameter_enum_t AC_CAP_DIS;
		parameter_int_t ALIGN_COMMA_WORD;
		parameter_int_t BGTEST_CFG;
		parameter_int_t BIAS_CFG;
		parameter_int_t CDR_PH_ADJ_TIME;
		parameter_int_t CHAN_BOND_1_MAX_SKEW;
		parameter_int_t CHAN_BOND_2_MAX_SKEW;
		parameter_enum_t CHAN_BOND_KEEP_ALIGN;
		parameter_int_t CHAN_BOND_SEQ_1_1;
		parameter_int_t CHAN_BOND_SEQ_1_2;
		parameter_int_t CHAN_BOND_SEQ_1_3;
		parameter_int_t CHAN_BOND_SEQ_1_4;
		parameter_int_t CHAN_BOND_SEQ_1_ENABLE;
		parameter_int_t CHAN_BOND_SEQ_2_1;
		parameter_int_t CHAN_BOND_SEQ_2_2;
		parameter_int_t CHAN_BOND_SEQ_2_3;
		parameter_int_t CHAN_BOND_SEQ_2_4;
		parameter_int_t CHAN_BOND_SEQ_2_CFG;
		parameter_int_t CHAN_BOND_SEQ_2_ENABLE;
		parameter_enum_t CHAN_BOND_SEQ_2_USE;
		parameter_int_t CHAN_BOND_SEQ_LEN;
		parameter_enum_t CLK_CORRECT_USE;
		parameter_int_t CLK_COR_ADJ_LEN;
		parameter_int_t CLK_COR_DET_LEN;
		parameter_enum_t CLK_COR_INSERT_IDLE_FLAG;
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
		parameter_int_t CM_TRIM;
		parameter_int_t COMMA_10B_ENABLE;
		parameter_enum_t COMMA_DOUBLE;
		parameter_int_t COM_BURST_VAL;
		parameter_enum_t DEC_MCOMMA_DETECT;
		parameter_enum_t DEC_PCOMMA_DETECT;
		parameter_enum_t DEC_VALID_COMMA_ONLY;
		parameter_int_t DFE_CAL_TIME;
		parameter_int_t DFE_CFG;
		parameter_int_t GEARBOX_ENDEC;
		parameter_enum_t GEN_RXUSRCLK;
		parameter_enum_t GEN_TXUSRCLK;
		parameter_enum_t GTX_CFG_PWRUP;
		parameter_int_t MCOMMA_10B_VALUE;
		parameter_enum_t MCOMMA_DETECT;
		parameter_int_t OOBDETECT_THRESHOLD;
		parameter_enum_t PCI_EXPRESS_MODE;
		parameter_int_t PCOMMA_10B_VALUE;
		parameter_enum_t PCOMMA_DETECT;
		parameter_enum_t PMA_CAS_CLK_EN;
		parameter_int_t PMA_CDR_SCAN;
		parameter_int_t PMA_CFG;
		parameter_int_t PMA_RXSYNC_CFG;
		parameter_int_t PMA_RX_CFG;
		parameter_int_t PMA_TX_CFG;
		parameter_int_t POWER_SAVE;
		parameter_enum_t RCV_TERM_GND;
		parameter_enum_t RCV_TERM_VTTRX;
		parameter_enum_t RXGEARBOX_USE;
		parameter_int_t RXPLL_COM_CFG;
		parameter_int_t RXPLL_CP_CFG;
		parameter_int_t RXPLL_DIVSEL45_FB;
		parameter_int_t RXPLL_DIVSEL_FB;
		parameter_int_t RXPLL_DIVSEL_OUT;
		parameter_int_t RXPLL_DIVSEL_REF;
		parameter_int_t RXPLL_LKDET_CFG;
		parameter_int_t RXPRBSERR_LOOPBACK;
		parameter_string_t RXRECCLK_CTRL;
		parameter_int_t RXRECCLK_DLY;
		parameter_int_t RXUSRCLK_DLY;
		parameter_enum_t RX_BUFFER_USE;
		parameter_int_t RX_CLK25_DIVIDER;
		parameter_int_t RX_DATA_WIDTH;
		parameter_enum_t RX_DECODE_SEQ_MATCH;
		parameter_int_t RX_DLYALIGN_CTRINC;
		parameter_int_t RX_DLYALIGN_EDGESET;
		parameter_int_t RX_DLYALIGN_LPFINC;
		parameter_int_t RX_DLYALIGN_MONSEL;
		parameter_int_t RX_DLYALIGN_OVRDSETTING;
		parameter_enum_t RX_EN_IDLE_HOLD_CDR;
		parameter_enum_t RX_EN_IDLE_HOLD_DFE;
		parameter_enum_t RX_EN_IDLE_RESET_BUF;
		parameter_enum_t RX_EN_IDLE_RESET_FR;
		parameter_enum_t RX_EN_IDLE_RESET_PH;
		parameter_enum_t RX_EN_MODE_RESET_BUF;
		parameter_enum_t RX_EN_RATE_RESET_BUF;
		parameter_enum_t RX_EN_REALIGN_RESET_BUF;
		parameter_enum_t RX_EN_REALIGN_RESET_BUF2;
		parameter_int_t RX_EYE_OFFSET;
		parameter_int_t RX_EYE_SCANMODE;
		parameter_string_t RX_FIFO_ADDR_MODE;
		parameter_int_t RX_IDLE_HI_CNT;
		parameter_int_t RX_IDLE_LO_CNT;
		parameter_enum_t RX_LOSS_OF_SYNC_FSM;
		parameter_int_t RX_LOS_INVALID_INCR;
		parameter_int_t RX_LOS_THRESHOLD;
		parameter_enum_t RX_OVERSAMPLE_MODE;
		parameter_int_t RX_SLIDE_AUTO_WAIT;
		parameter_string_t RX_SLIDE_MODE;
		parameter_string_t RX_XCLK_SEL;
		parameter_int_t SAS_MAX_COMSAS;
		parameter_int_t SAS_MIN_COMSAS;
		parameter_int_t SATA_BURST_VAL;
		parameter_int_t SATA_IDLE_VAL;
		parameter_int_t SATA_MAX_BURST;
		parameter_int_t SATA_MAX_INIT;
		parameter_int_t SATA_MAX_WAKE;
		parameter_int_t SATA_MIN_BURST;
		parameter_int_t SATA_MIN_INIT;
		parameter_int_t SATA_MIN_WAKE;
		parameter_enum_t SHOW_REALIGN_COMMA;
		parameter_int_t SIM_GTXRESET_SPEEDUP;
		parameter_enum_t SIM_RECEIVER_DETECT_PASS;
		parameter_int_t SIM_RXREFCLK_SOURCE;
		parameter_int_t SIM_TXREFCLK_SOURCE;
		parameter_string_t SIM_TX_ELEC_IDLE_LEVEL;
		parameter_string_t SIM_VERSION;
		parameter_int_t TERMINATION_CTRL;
		parameter_enum_t TERMINATION_OVRD;
		parameter_int_t TRANS_TIME_FROM_P2;
		parameter_int_t TRANS_TIME_NON_P2;
		parameter_int_t TRANS_TIME_RATE;
		parameter_int_t TRANS_TIME_TO_P2;
		parameter_int_t TST_ATTR;
		parameter_enum_t TXDRIVE_LOOPBACK_HIZ;
		parameter_enum_t TXDRIVE_LOOPBACK_PD;
		parameter_enum_t TXGEARBOX_USE;
		parameter_string_t TXOUTCLK_CTRL;
		parameter_int_t TXOUTCLK_DLY;
		parameter_int_t TXPLL_COM_CFG;
		parameter_int_t TXPLL_CP_CFG;
		parameter_int_t TXPLL_DIVSEL45_FB;
		parameter_int_t TXPLL_DIVSEL_FB;
		parameter_int_t TXPLL_DIVSEL_OUT;
		parameter_int_t TXPLL_DIVSEL_REF;
		parameter_int_t TXPLL_LKDET_CFG;
		parameter_int_t TXPLL_SATA;
		parameter_enum_t TX_BUFFER_USE;
		parameter_int_t TX_BYTECLK_CFG;
		parameter_int_t TX_CLK25_DIVIDER;
		parameter_string_t TX_CLK_SOURCE;
		parameter_int_t TX_DATA_WIDTH;
		parameter_int_t TX_DEEMPH_0;
		parameter_int_t TX_DEEMPH_1;
		parameter_int_t TX_DETECT_RX_CFG;
		parameter_int_t TX_DLYALIGN_CTRINC;
		parameter_int_t TX_DLYALIGN_LPFINC;
		parameter_int_t TX_DLYALIGN_MONSEL;
		parameter_int_t TX_DLYALIGN_OVRDSETTING;
		parameter_string_t TX_DRIVE_MODE;
		parameter_enum_t TX_EN_RATE_RESET_BUF;
		parameter_int_t TX_IDLE_ASSERT_DELAY;
		parameter_int_t TX_IDLE_DEASSERT_DELAY;
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
		parameter_enum_t TX_OVERSAMPLE_MODE;
		parameter_int_t TX_PMADATA_OPT;
		parameter_int_t TX_TDCC_CFG;
		parameter_int_t TX_USRCLK_CFG;
		parameter_string_t TX_XCLK_SEL;
		//Verilog Ports in definition order:
		NetFlow* COMFINISH; // OUTPUT
		NetFlow* COMINITDET; // OUTPUT
		NetFlow* COMSASDET; // OUTPUT
		NetFlow* COMWAKEDET; // OUTPUT
		NetFlow* DFECLKDLYADJMON; // OUTPUT
		NetFlow* DFEEYEDACMON; // OUTPUT
		NetFlow* DFESENSCAL; // OUTPUT
		NetFlow* DFETAP1MONITOR; // OUTPUT
		NetFlow* DFETAP2MONITOR; // OUTPUT
		NetFlow* DFETAP3MONITOR; // OUTPUT
		NetFlow* DFETAP4MONITOR; // OUTPUT
		NetFlow* DRDY; // OUTPUT
		NetFlow* DRPDO; // OUTPUT
		NetFlow* MGTREFCLKFAB; // OUTPUT
		NetFlow* PHYSTATUS; // OUTPUT
		NetFlow* RXBUFSTATUS; // OUTPUT
		NetFlow* RXBYTEISALIGNED; // OUTPUT
		NetFlow* RXBYTEREALIGN; // OUTPUT
		NetFlow* RXCHANBONDSEQ; // OUTPUT
		NetFlow* RXCHANISALIGNED; // OUTPUT
		NetFlow* RXCHANREALIGN; // OUTPUT
		NetFlow* RXCHARISCOMMA; // OUTPUT
		NetFlow* RXCHARISK; // OUTPUT
		NetFlow* RXCHBONDO; // OUTPUT
		NetFlow* RXCLKCORCNT; // OUTPUT
		NetFlow* RXCOMMADET; // OUTPUT
		NetFlow* RXDATA; // OUTPUT
		NetFlow* RXDATAVALID; // OUTPUT
		NetFlow* RXDISPERR; // OUTPUT
		NetFlow* RXDLYALIGNMONITOR; // OUTPUT
		NetFlow* RXELECIDLE; // OUTPUT
		NetFlow* RXHEADER; // OUTPUT
		NetFlow* RXHEADERVALID; // OUTPUT
		NetFlow* RXLOSSOFSYNC; // OUTPUT
		NetFlow* RXNOTINTABLE; // OUTPUT
		NetFlow* RXOVERSAMPLEERR; // OUTPUT
		NetFlow* RXPLLLKDET; // OUTPUT
		NetFlow* RXPRBSERR; // OUTPUT
		NetFlow* RXRATEDONE; // OUTPUT
		NetFlow* RXRECCLK; // OUTPUT
		NetFlow* RXRECCLKPCS; // OUTPUT
		NetFlow* RXRESETDONE; // OUTPUT
		NetFlow* RXRUNDISP; // OUTPUT
		NetFlow* RXSTARTOFSEQ; // OUTPUT
		NetFlow* RXSTATUS; // OUTPUT
		NetFlow* RXVALID; // OUTPUT
		NetFlow* TSTOUT; // OUTPUT
		NetFlow* TXBUFSTATUS; // OUTPUT
		NetFlow* TXDLYALIGNMONITOR; // OUTPUT
		NetFlow* TXGEARBOXREADY; // OUTPUT
		NetFlow* TXKERR; // OUTPUT
		NetFlow* TXN; // OUTPUT
		NetFlow* TXOUTCLK; // OUTPUT
		NetFlow* TXOUTCLKPCS; // OUTPUT
		NetFlow* TXP; // OUTPUT
		NetFlow* TXPLLLKDET; // OUTPUT
		NetFlow* TXRATEDONE; // OUTPUT
		NetFlow* TXRESETDONE; // OUTPUT
		NetFlow* TXRUNDISP; // OUTPUT
		NetFlow* DADDR; // INPUT
		NetFlow* DCLK; // INPUT
		NetFlow* DEN; // INPUT
		NetFlow* DFECLKDLYADJ; // INPUT
		NetFlow* DFEDLYOVRD; // INPUT
		NetFlow* DFETAP1; // INPUT
		NetFlow* DFETAP2; // INPUT
		NetFlow* DFETAP3; // INPUT
		NetFlow* DFETAP4; // INPUT
		NetFlow* DFETAPOVRD; // INPUT
		NetFlow* DI; // INPUT
		NetFlow* DWE; // INPUT
		NetFlow* GATERXELECIDLE; // INPUT
		NetFlow* GREFCLKRX; // INPUT
		NetFlow* GREFCLKTX; // INPUT
		NetFlow* GTXRXRESET; // INPUT
		NetFlow* GTXTEST; // INPUT
		NetFlow* GTXTXRESET; // INPUT
		NetFlow* IGNORESIGDET; // INPUT
		NetFlow* LOOPBACK; // INPUT
		NetFlow* MGTREFCLKRX; // INPUT
		NetFlow* MGTREFCLKTX; // INPUT
		NetFlow* NORTHREFCLKRX; // INPUT
		NetFlow* NORTHREFCLKTX; // INPUT
		NetFlow* PERFCLKRX; // INPUT
		NetFlow* PERFCLKTX; // INPUT
		NetFlow* PLLRXRESET; // INPUT
		NetFlow* PLLTXRESET; // INPUT
		NetFlow* PRBSCNTRESET; // INPUT
		NetFlow* RXBUFRESET; // INPUT
		NetFlow* RXCDRRESET; // INPUT
		NetFlow* RXCHBONDI; // INPUT
		NetFlow* RXCHBONDLEVEL; // INPUT
		NetFlow* RXCHBONDMASTER; // INPUT
		NetFlow* RXCHBONDSLAVE; // INPUT
		NetFlow* RXCOMMADETUSE; // INPUT
		NetFlow* RXDEC8B10BUSE; // INPUT
		NetFlow* RXDLYALIGNDISABLE; // INPUT
		NetFlow* RXDLYALIGNMONENB; // INPUT
		NetFlow* RXDLYALIGNOVERRIDE; // INPUT
		NetFlow* RXDLYALIGNRESET; // INPUT
		NetFlow* RXDLYALIGNSWPPRECURB; // INPUT
		NetFlow* RXDLYALIGNUPDSW; // INPUT
		NetFlow* RXENCHANSYNC; // INPUT
		NetFlow* RXENMCOMMAALIGN; // INPUT
		NetFlow* RXENPCOMMAALIGN; // INPUT
		NetFlow* RXENPMAPHASEALIGN; // INPUT
		NetFlow* RXENPRBSTST; // INPUT
		NetFlow* RXENSAMPLEALIGN; // INPUT
		NetFlow* RXEQMIX; // INPUT
		NetFlow* RXGEARBOXSLIP; // INPUT
		NetFlow* RXN; // INPUT
		NetFlow* RXP; // INPUT
		NetFlow* RXPLLLKDETEN; // INPUT
		NetFlow* RXPLLPOWERDOWN; // INPUT
		NetFlow* RXPLLREFSELDY; // INPUT
		NetFlow* RXPMASETPHASE; // INPUT
		NetFlow* RXPOLARITY; // INPUT
		NetFlow* RXPOWERDOWN; // INPUT
		NetFlow* RXRATE; // INPUT
		NetFlow* RXRESET; // INPUT
		NetFlow* RXSLIDE; // INPUT
		NetFlow* RXUSRCLK; // INPUT
		NetFlow* RXUSRCLK2; // INPUT
		NetFlow* SOUTHREFCLKRX; // INPUT
		NetFlow* SOUTHREFCLKTX; // INPUT
		NetFlow* TSTCLK0; // INPUT
		NetFlow* TSTCLK1; // INPUT
		NetFlow* TSTIN; // INPUT
		NetFlow* TXBUFDIFFCTRL; // INPUT
		NetFlow* TXBYPASS8B10B; // INPUT
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
		NetFlow* TXDLYALIGNDISABLE; // INPUT
		NetFlow* TXDLYALIGNMONENB; // INPUT
		NetFlow* TXDLYALIGNOVERRIDE; // INPUT
		NetFlow* TXDLYALIGNRESET; // INPUT
		NetFlow* TXDLYALIGNUPDSW; // INPUT
		NetFlow* TXELECIDLE; // INPUT
		NetFlow* TXENC8B10BUSE; // INPUT
		NetFlow* TXENPMAPHASEALIGN; // INPUT
		NetFlow* TXENPRBSTST; // INPUT
		NetFlow* TXHEADER; // INPUT
		NetFlow* TXINHIBIT; // INPUT
		NetFlow* TXMARGIN; // INPUT
		NetFlow* TXPDOWNASYNCH; // INPUT
		NetFlow* TXPLLLKDETEN; // INPUT
		NetFlow* TXPLLPOWERDOWN; // INPUT
		NetFlow* TXPLLREFSELDY; // INPUT
		NetFlow* TXPMASETPHASE; // INPUT
		NetFlow* TXPOLARITY; // INPUT
		NetFlow* TXPOSTEMPHASIS; // INPUT
		NetFlow* TXPOWERDOWN; // INPUT
		NetFlow* TXPRBSFORCEERR; // INPUT
		NetFlow* TXPREEMPHASIS; // INPUT
		NetFlow* TXRATE; // INPUT
		NetFlow* TXRESET; // INPUT
		NetFlow* TXSEQUENCE; // INPUT
		NetFlow* TXSTARTSEQ; // INPUT
		NetFlow* TXSWING; // INPUT
		NetFlow* TXUSRCLK; // INPUT
		NetFlow* TXUSRCLK2; // INPUT
		NetFlow* USRCODEERR; // INPUT
		
	
		X_GTXE1(
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_enum_t AC_CAP_DIS, // Default: "TRUE"
			parameter_int_t ALIGN_COMMA_WORD, // Default: 1
			parameter_int_t BGTEST_CFG, // Default: 2'b00
			parameter_int_t BIAS_CFG, // Default: 17'h00000
			parameter_int_t CDR_PH_ADJ_TIME, // Default: 5'b10100
			parameter_int_t CHAN_BOND_1_MAX_SKEW, // Default: 7
			parameter_int_t CHAN_BOND_2_MAX_SKEW, // Default: 1
			parameter_enum_t CHAN_BOND_KEEP_ALIGN, // Default: "FALSE"
			parameter_int_t CHAN_BOND_SEQ_1_1, // Default: 10'b0101111100
			parameter_int_t CHAN_BOND_SEQ_1_2, // Default: 10'b0001001010
			parameter_int_t CHAN_BOND_SEQ_1_3, // Default: 10'b0001001010
			parameter_int_t CHAN_BOND_SEQ_1_4, // Default: 10'b0110111100
			parameter_int_t CHAN_BOND_SEQ_1_ENABLE, // Default: 4'b1111
			parameter_int_t CHAN_BOND_SEQ_2_1, // Default: 10'b0100111100
			parameter_int_t CHAN_BOND_SEQ_2_2, // Default: 10'b0100111100
			parameter_int_t CHAN_BOND_SEQ_2_3, // Default: 10'b0110111100
			parameter_int_t CHAN_BOND_SEQ_2_4, // Default: 10'b0100111100
			parameter_int_t CHAN_BOND_SEQ_2_CFG, // Default: 5'b00000
			parameter_int_t CHAN_BOND_SEQ_2_ENABLE, // Default: 4'b1111
			parameter_enum_t CHAN_BOND_SEQ_2_USE, // Default: "FALSE"
			parameter_int_t CHAN_BOND_SEQ_LEN, // Default: 1
			parameter_enum_t CLK_CORRECT_USE, // Default: "TRUE"
			parameter_int_t CLK_COR_ADJ_LEN, // Default: 1
			parameter_int_t CLK_COR_DET_LEN, // Default: 1
			parameter_enum_t CLK_COR_INSERT_IDLE_FLAG, // Default: "FALSE"
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
			parameter_int_t CLK_COR_SEQ_2_1, // Default: 10'b0000000000
			parameter_int_t CLK_COR_SEQ_2_2, // Default: 10'b0000000000
			parameter_int_t CLK_COR_SEQ_2_3, // Default: 10'b0000000000
			parameter_int_t CLK_COR_SEQ_2_4, // Default: 10'b0000000000
			parameter_int_t CLK_COR_SEQ_2_ENABLE, // Default: 4'b1111
			parameter_enum_t CLK_COR_SEQ_2_USE, // Default: "FALSE"
			parameter_int_t CM_TRIM, // Default: 2'b01
			parameter_int_t COMMA_10B_ENABLE, // Default: 10'b1111111111
			parameter_enum_t COMMA_DOUBLE, // Default: "FALSE"
			parameter_int_t COM_BURST_VAL, // Default: 4'b1111
			parameter_enum_t DEC_MCOMMA_DETECT, // Default: "TRUE"
			parameter_enum_t DEC_PCOMMA_DETECT, // Default: "TRUE"
			parameter_enum_t DEC_VALID_COMMA_ONLY, // Default: "TRUE"
			parameter_int_t DFE_CAL_TIME, // Default: 5'b01100
			parameter_int_t DFE_CFG, // Default: 8'b00011011
			parameter_int_t GEARBOX_ENDEC, // Default: 3'b000
			parameter_enum_t GEN_RXUSRCLK, // Default: "TRUE"
			parameter_enum_t GEN_TXUSRCLK, // Default: "TRUE"
			parameter_enum_t GTX_CFG_PWRUP, // Default: "TRUE"
			parameter_int_t MCOMMA_10B_VALUE, // Default: 10'b1010000011
			parameter_enum_t MCOMMA_DETECT, // Default: "TRUE"
			parameter_int_t OOBDETECT_THRESHOLD, // Default: 3'b011
			parameter_enum_t PCI_EXPRESS_MODE, // Default: "FALSE"
			parameter_int_t PCOMMA_10B_VALUE, // Default: 10'b0101111100
			parameter_enum_t PCOMMA_DETECT, // Default: "TRUE"
			parameter_enum_t PMA_CAS_CLK_EN, // Default: "FALSE"
			parameter_int_t PMA_CDR_SCAN, // Default: 27'h640404C
			parameter_int_t PMA_CFG, // Default: 76'h0040000040000000003
			parameter_int_t PMA_RXSYNC_CFG, // Default: 7'h00
			parameter_int_t PMA_RX_CFG, // Default: 25'h05CE048
			parameter_int_t PMA_TX_CFG, // Default: 20'h00082
			parameter_int_t POWER_SAVE, // Default: 10'b0000110100
			parameter_enum_t RCV_TERM_GND, // Default: "FALSE"
			parameter_enum_t RCV_TERM_VTTRX, // Default: "TRUE"
			parameter_enum_t RXGEARBOX_USE, // Default: "FALSE"
			parameter_int_t RXPLL_COM_CFG, // Default: 24'h21680A
			parameter_int_t RXPLL_CP_CFG, // Default: 8'h00
			parameter_int_t RXPLL_DIVSEL45_FB, // Default: 5
			parameter_int_t RXPLL_DIVSEL_FB, // Default: 2
			parameter_int_t RXPLL_DIVSEL_OUT, // Default: 1
			parameter_int_t RXPLL_DIVSEL_REF, // Default: 1
			parameter_int_t RXPLL_LKDET_CFG, // Default: 3'b111
			parameter_int_t RXPRBSERR_LOOPBACK, // Default: 1'b0
			parameter_string_t RXRECCLK_CTRL, // Default: "RXRECCLKPCS"
			parameter_int_t RXRECCLK_DLY, // Default: 10'b0000000000
			parameter_int_t RXUSRCLK_DLY, // Default: 16'h0000
			parameter_enum_t RX_BUFFER_USE, // Default: "TRUE"
			parameter_int_t RX_CLK25_DIVIDER, // Default: 6
			parameter_int_t RX_DATA_WIDTH, // Default: 20
			parameter_enum_t RX_DECODE_SEQ_MATCH, // Default: "TRUE"
			parameter_int_t RX_DLYALIGN_CTRINC, // Default: 4'b0100
			parameter_int_t RX_DLYALIGN_EDGESET, // Default: 5'b00110
			parameter_int_t RX_DLYALIGN_LPFINC, // Default: 4'b0111
			parameter_int_t RX_DLYALIGN_MONSEL, // Default: 3'b000
			parameter_int_t RX_DLYALIGN_OVRDSETTING, // Default: 8'b00000000
			parameter_enum_t RX_EN_IDLE_HOLD_CDR, // Default: "FALSE"
			parameter_enum_t RX_EN_IDLE_HOLD_DFE, // Default: "TRUE"
			parameter_enum_t RX_EN_IDLE_RESET_BUF, // Default: "TRUE"
			parameter_enum_t RX_EN_IDLE_RESET_FR, // Default: "TRUE"
			parameter_enum_t RX_EN_IDLE_RESET_PH, // Default: "TRUE"
			parameter_enum_t RX_EN_MODE_RESET_BUF, // Default: "TRUE"
			parameter_enum_t RX_EN_RATE_RESET_BUF, // Default: "TRUE"
			parameter_enum_t RX_EN_REALIGN_RESET_BUF, // Default: "FALSE"
			parameter_enum_t RX_EN_REALIGN_RESET_BUF2, // Default: "FALSE"
			parameter_int_t RX_EYE_OFFSET, // Default: 8'h4C
			parameter_int_t RX_EYE_SCANMODE, // Default: 2'b00
			parameter_string_t RX_FIFO_ADDR_MODE, // Default: "FULL"
			parameter_int_t RX_IDLE_HI_CNT, // Default: 4'b1000
			parameter_int_t RX_IDLE_LO_CNT, // Default: 4'b0000
			parameter_enum_t RX_LOSS_OF_SYNC_FSM, // Default: "FALSE"
			parameter_int_t RX_LOS_INVALID_INCR, // Default: 1
			parameter_int_t RX_LOS_THRESHOLD, // Default: 4
			parameter_enum_t RX_OVERSAMPLE_MODE, // Default: "FALSE"
			parameter_int_t RX_SLIDE_AUTO_WAIT, // Default: 5
			parameter_string_t RX_SLIDE_MODE, // Default: "OFF"
			parameter_string_t RX_XCLK_SEL, // Default: "RXREC"
			parameter_int_t SAS_MAX_COMSAS, // Default: 52
			parameter_int_t SAS_MIN_COMSAS, // Default: 40
			parameter_int_t SATA_BURST_VAL, // Default: 3'b100
			parameter_int_t SATA_IDLE_VAL, // Default: 3'b100
			parameter_int_t SATA_MAX_BURST, // Default: 7
			parameter_int_t SATA_MAX_INIT, // Default: 22
			parameter_int_t SATA_MAX_WAKE, // Default: 7
			parameter_int_t SATA_MIN_BURST, // Default: 4
			parameter_int_t SATA_MIN_INIT, // Default: 12
			parameter_int_t SATA_MIN_WAKE, // Default: 4
			parameter_enum_t SHOW_REALIGN_COMMA, // Default: "TRUE"
			parameter_int_t SIM_GTXRESET_SPEEDUP, // Default: 1
			parameter_enum_t SIM_RECEIVER_DETECT_PASS, // Default: "TRUE"
			parameter_int_t SIM_RXREFCLK_SOURCE, // Default: 3'b000
			parameter_int_t SIM_TXREFCLK_SOURCE, // Default: 3'b000
			parameter_string_t SIM_TX_ELEC_IDLE_LEVEL, // Default: "X"
			parameter_string_t SIM_VERSION, // Default: "2.0"
			parameter_int_t TERMINATION_CTRL, // Default: 5'b10100
			parameter_enum_t TERMINATION_OVRD, // Default: "FALSE"
			parameter_int_t TRANS_TIME_FROM_P2, // Default: 12'h03C
			parameter_int_t TRANS_TIME_NON_P2, // Default: 8'h19
			parameter_int_t TRANS_TIME_RATE, // Default: 8'h0E
			parameter_int_t TRANS_TIME_TO_P2, // Default: 10'h064
			parameter_int_t TST_ATTR, // Default: 32'h00000000
			parameter_enum_t TXDRIVE_LOOPBACK_HIZ, // Default: "FALSE"
			parameter_enum_t TXDRIVE_LOOPBACK_PD, // Default: "FALSE"
			parameter_enum_t TXGEARBOX_USE, // Default: "FALSE"
			parameter_string_t TXOUTCLK_CTRL, // Default: "TXOUTCLKPCS"
			parameter_int_t TXOUTCLK_DLY, // Default: 10'b0000000000
			parameter_int_t TXPLL_COM_CFG, // Default: 24'h21680A
			parameter_int_t TXPLL_CP_CFG, // Default: 8'h00
			parameter_int_t TXPLL_DIVSEL45_FB, // Default: 5
			parameter_int_t TXPLL_DIVSEL_FB, // Default: 2
			parameter_int_t TXPLL_DIVSEL_OUT, // Default: 1
			parameter_int_t TXPLL_DIVSEL_REF, // Default: 1
			parameter_int_t TXPLL_LKDET_CFG, // Default: 3'b111
			parameter_int_t TXPLL_SATA, // Default: 2'b00
			parameter_enum_t TX_BUFFER_USE, // Default: "TRUE"
			parameter_int_t TX_BYTECLK_CFG, // Default: 6'h00
			parameter_int_t TX_CLK25_DIVIDER, // Default: 6
			parameter_string_t TX_CLK_SOURCE, // Default: "RXPLL"
			parameter_int_t TX_DATA_WIDTH, // Default: 20
			parameter_int_t TX_DEEMPH_0, // Default: 5'b11010
			parameter_int_t TX_DEEMPH_1, // Default: 5'b10000
			parameter_int_t TX_DETECT_RX_CFG, // Default: 14'h1832
			parameter_int_t TX_DLYALIGN_CTRINC, // Default: 4'b0100
			parameter_int_t TX_DLYALIGN_LPFINC, // Default: 4'b0110
			parameter_int_t TX_DLYALIGN_MONSEL, // Default: 3'b000
			parameter_int_t TX_DLYALIGN_OVRDSETTING, // Default: 8'b10000000
			parameter_string_t TX_DRIVE_MODE, // Default: "DIRECT"
			parameter_enum_t TX_EN_RATE_RESET_BUF, // Default: "TRUE"
			parameter_int_t TX_IDLE_ASSERT_DELAY, // Default: 3'b100
			parameter_int_t TX_IDLE_DEASSERT_DELAY, // Default: 3'b010
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
			parameter_enum_t TX_OVERSAMPLE_MODE, // Default: "FALSE"
			parameter_int_t TX_PMADATA_OPT, // Default: 1'b0
			parameter_int_t TX_TDCC_CFG, // Default: 2'b11
			parameter_int_t TX_USRCLK_CFG, // Default: 6'h00
			parameter_string_t TX_XCLK_SEL, // Default: "TXUSR"
			//Verilog Ports in definition order:
			NetFlow* COMFINISH, // OUTPUT
			NetFlow* COMINITDET, // OUTPUT
			NetFlow* COMSASDET, // OUTPUT
			NetFlow* COMWAKEDET, // OUTPUT
			NetFlow* DFECLKDLYADJMON, // OUTPUT
			NetFlow* DFEEYEDACMON, // OUTPUT
			NetFlow* DFESENSCAL, // OUTPUT
			NetFlow* DFETAP1MONITOR, // OUTPUT
			NetFlow* DFETAP2MONITOR, // OUTPUT
			NetFlow* DFETAP3MONITOR, // OUTPUT
			NetFlow* DFETAP4MONITOR, // OUTPUT
			NetFlow* DRDY, // OUTPUT
			NetFlow* DRPDO, // OUTPUT
			NetFlow* MGTREFCLKFAB, // OUTPUT
			NetFlow* PHYSTATUS, // OUTPUT
			NetFlow* RXBUFSTATUS, // OUTPUT
			NetFlow* RXBYTEISALIGNED, // OUTPUT
			NetFlow* RXBYTEREALIGN, // OUTPUT
			NetFlow* RXCHANBONDSEQ, // OUTPUT
			NetFlow* RXCHANISALIGNED, // OUTPUT
			NetFlow* RXCHANREALIGN, // OUTPUT
			NetFlow* RXCHARISCOMMA, // OUTPUT
			NetFlow* RXCHARISK, // OUTPUT
			NetFlow* RXCHBONDO, // OUTPUT
			NetFlow* RXCLKCORCNT, // OUTPUT
			NetFlow* RXCOMMADET, // OUTPUT
			NetFlow* RXDATA, // OUTPUT
			NetFlow* RXDATAVALID, // OUTPUT
			NetFlow* RXDISPERR, // OUTPUT
			NetFlow* RXDLYALIGNMONITOR, // OUTPUT
			NetFlow* RXELECIDLE, // OUTPUT
			NetFlow* RXHEADER, // OUTPUT
			NetFlow* RXHEADERVALID, // OUTPUT
			NetFlow* RXLOSSOFSYNC, // OUTPUT
			NetFlow* RXNOTINTABLE, // OUTPUT
			NetFlow* RXOVERSAMPLEERR, // OUTPUT
			NetFlow* RXPLLLKDET, // OUTPUT
			NetFlow* RXPRBSERR, // OUTPUT
			NetFlow* RXRATEDONE, // OUTPUT
			NetFlow* RXRECCLK, // OUTPUT
			NetFlow* RXRECCLKPCS, // OUTPUT
			NetFlow* RXRESETDONE, // OUTPUT
			NetFlow* RXRUNDISP, // OUTPUT
			NetFlow* RXSTARTOFSEQ, // OUTPUT
			NetFlow* RXSTATUS, // OUTPUT
			NetFlow* RXVALID, // OUTPUT
			NetFlow* TSTOUT, // OUTPUT
			NetFlow* TXBUFSTATUS, // OUTPUT
			NetFlow* TXDLYALIGNMONITOR, // OUTPUT
			NetFlow* TXGEARBOXREADY, // OUTPUT
			NetFlow* TXKERR, // OUTPUT
			NetFlow* TXN, // OUTPUT
			NetFlow* TXOUTCLK, // OUTPUT
			NetFlow* TXOUTCLKPCS, // OUTPUT
			NetFlow* TXP, // OUTPUT
			NetFlow* TXPLLLKDET, // OUTPUT
			NetFlow* TXRATEDONE, // OUTPUT
			NetFlow* TXRESETDONE, // OUTPUT
			NetFlow* TXRUNDISP, // OUTPUT
			NetFlow* DADDR, // INPUT
			NetFlow* DCLK, // INPUT
			NetFlow* DEN, // INPUT
			NetFlow* DFECLKDLYADJ, // INPUT
			NetFlow* DFEDLYOVRD, // INPUT
			NetFlow* DFETAP1, // INPUT
			NetFlow* DFETAP2, // INPUT
			NetFlow* DFETAP3, // INPUT
			NetFlow* DFETAP4, // INPUT
			NetFlow* DFETAPOVRD, // INPUT
			NetFlow* DI, // INPUT
			NetFlow* DWE, // INPUT
			NetFlow* GATERXELECIDLE, // INPUT
			NetFlow* GREFCLKRX, // INPUT
			NetFlow* GREFCLKTX, // INPUT
			NetFlow* GTXRXRESET, // INPUT
			NetFlow* GTXTEST, // INPUT
			NetFlow* GTXTXRESET, // INPUT
			NetFlow* IGNORESIGDET, // INPUT
			NetFlow* LOOPBACK, // INPUT
			NetFlow* MGTREFCLKRX, // INPUT
			NetFlow* MGTREFCLKTX, // INPUT
			NetFlow* NORTHREFCLKRX, // INPUT
			NetFlow* NORTHREFCLKTX, // INPUT
			NetFlow* PERFCLKRX, // INPUT
			NetFlow* PERFCLKTX, // INPUT
			NetFlow* PLLRXRESET, // INPUT
			NetFlow* PLLTXRESET, // INPUT
			NetFlow* PRBSCNTRESET, // INPUT
			NetFlow* RXBUFRESET, // INPUT
			NetFlow* RXCDRRESET, // INPUT
			NetFlow* RXCHBONDI, // INPUT
			NetFlow* RXCHBONDLEVEL, // INPUT
			NetFlow* RXCHBONDMASTER, // INPUT
			NetFlow* RXCHBONDSLAVE, // INPUT
			NetFlow* RXCOMMADETUSE, // INPUT
			NetFlow* RXDEC8B10BUSE, // INPUT
			NetFlow* RXDLYALIGNDISABLE, // INPUT
			NetFlow* RXDLYALIGNMONENB, // INPUT
			NetFlow* RXDLYALIGNOVERRIDE, // INPUT
			NetFlow* RXDLYALIGNRESET, // INPUT
			NetFlow* RXDLYALIGNSWPPRECURB, // INPUT
			NetFlow* RXDLYALIGNUPDSW, // INPUT
			NetFlow* RXENCHANSYNC, // INPUT
			NetFlow* RXENMCOMMAALIGN, // INPUT
			NetFlow* RXENPCOMMAALIGN, // INPUT
			NetFlow* RXENPMAPHASEALIGN, // INPUT
			NetFlow* RXENPRBSTST, // INPUT
			NetFlow* RXENSAMPLEALIGN, // INPUT
			NetFlow* RXEQMIX, // INPUT
			NetFlow* RXGEARBOXSLIP, // INPUT
			NetFlow* RXN, // INPUT
			NetFlow* RXP, // INPUT
			NetFlow* RXPLLLKDETEN, // INPUT
			NetFlow* RXPLLPOWERDOWN, // INPUT
			NetFlow* RXPLLREFSELDY, // INPUT
			NetFlow* RXPMASETPHASE, // INPUT
			NetFlow* RXPOLARITY, // INPUT
			NetFlow* RXPOWERDOWN, // INPUT
			NetFlow* RXRATE, // INPUT
			NetFlow* RXRESET, // INPUT
			NetFlow* RXSLIDE, // INPUT
			NetFlow* RXUSRCLK, // INPUT
			NetFlow* RXUSRCLK2, // INPUT
			NetFlow* SOUTHREFCLKRX, // INPUT
			NetFlow* SOUTHREFCLKTX, // INPUT
			NetFlow* TSTCLK0, // INPUT
			NetFlow* TSTCLK1, // INPUT
			NetFlow* TSTIN, // INPUT
			NetFlow* TXBUFDIFFCTRL, // INPUT
			NetFlow* TXBYPASS8B10B, // INPUT
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
			NetFlow* TXDLYALIGNDISABLE, // INPUT
			NetFlow* TXDLYALIGNMONENB, // INPUT
			NetFlow* TXDLYALIGNOVERRIDE, // INPUT
			NetFlow* TXDLYALIGNRESET, // INPUT
			NetFlow* TXDLYALIGNUPDSW, // INPUT
			NetFlow* TXELECIDLE, // INPUT
			NetFlow* TXENC8B10BUSE, // INPUT
			NetFlow* TXENPMAPHASEALIGN, // INPUT
			NetFlow* TXENPRBSTST, // INPUT
			NetFlow* TXHEADER, // INPUT
			NetFlow* TXINHIBIT, // INPUT
			NetFlow* TXMARGIN, // INPUT
			NetFlow* TXPDOWNASYNCH, // INPUT
			NetFlow* TXPLLLKDETEN, // INPUT
			NetFlow* TXPLLPOWERDOWN, // INPUT
			NetFlow* TXPLLREFSELDY, // INPUT
			NetFlow* TXPMASETPHASE, // INPUT
			NetFlow* TXPOLARITY, // INPUT
			NetFlow* TXPOSTEMPHASIS, // INPUT
			NetFlow* TXPOWERDOWN, // INPUT
			NetFlow* TXPRBSFORCEERR, // INPUT
			NetFlow* TXPREEMPHASIS, // INPUT
			NetFlow* TXRATE, // INPUT
			NetFlow* TXRESET, // INPUT
			NetFlow* TXSEQUENCE, // INPUT
			NetFlow* TXSTARTSEQ, // INPUT
			NetFlow* TXSWING, // INPUT
			NetFlow* TXUSRCLK, // INPUT
			NetFlow* TXUSRCLK2, // INPUT
			NetFlow* USRCODEERR // INPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->LOC = LOC; // Default: "UNPLACED"
			this->AC_CAP_DIS = AC_CAP_DIS; // Default: "TRUE"
			this->ALIGN_COMMA_WORD = ALIGN_COMMA_WORD; // Default: 1
			this->BGTEST_CFG = BGTEST_CFG; // Default: 2'b00
			this->BIAS_CFG = BIAS_CFG; // Default: 17'h00000
			this->CDR_PH_ADJ_TIME = CDR_PH_ADJ_TIME; // Default: 5'b10100
			this->CHAN_BOND_1_MAX_SKEW = CHAN_BOND_1_MAX_SKEW; // Default: 7
			this->CHAN_BOND_2_MAX_SKEW = CHAN_BOND_2_MAX_SKEW; // Default: 1
			this->CHAN_BOND_KEEP_ALIGN = CHAN_BOND_KEEP_ALIGN; // Default: "FALSE"
			this->CHAN_BOND_SEQ_1_1 = CHAN_BOND_SEQ_1_1; // Default: 10'b0101111100
			this->CHAN_BOND_SEQ_1_2 = CHAN_BOND_SEQ_1_2; // Default: 10'b0001001010
			this->CHAN_BOND_SEQ_1_3 = CHAN_BOND_SEQ_1_3; // Default: 10'b0001001010
			this->CHAN_BOND_SEQ_1_4 = CHAN_BOND_SEQ_1_4; // Default: 10'b0110111100
			this->CHAN_BOND_SEQ_1_ENABLE = CHAN_BOND_SEQ_1_ENABLE; // Default: 4'b1111
			this->CHAN_BOND_SEQ_2_1 = CHAN_BOND_SEQ_2_1; // Default: 10'b0100111100
			this->CHAN_BOND_SEQ_2_2 = CHAN_BOND_SEQ_2_2; // Default: 10'b0100111100
			this->CHAN_BOND_SEQ_2_3 = CHAN_BOND_SEQ_2_3; // Default: 10'b0110111100
			this->CHAN_BOND_SEQ_2_4 = CHAN_BOND_SEQ_2_4; // Default: 10'b0100111100
			this->CHAN_BOND_SEQ_2_CFG = CHAN_BOND_SEQ_2_CFG; // Default: 5'b00000
			this->CHAN_BOND_SEQ_2_ENABLE = CHAN_BOND_SEQ_2_ENABLE; // Default: 4'b1111
			this->CHAN_BOND_SEQ_2_USE = CHAN_BOND_SEQ_2_USE; // Default: "FALSE"
			this->CHAN_BOND_SEQ_LEN = CHAN_BOND_SEQ_LEN; // Default: 1
			this->CLK_CORRECT_USE = CLK_CORRECT_USE; // Default: "TRUE"
			this->CLK_COR_ADJ_LEN = CLK_COR_ADJ_LEN; // Default: 1
			this->CLK_COR_DET_LEN = CLK_COR_DET_LEN; // Default: 1
			this->CLK_COR_INSERT_IDLE_FLAG = CLK_COR_INSERT_IDLE_FLAG; // Default: "FALSE"
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
			this->CLK_COR_SEQ_2_1 = CLK_COR_SEQ_2_1; // Default: 10'b0000000000
			this->CLK_COR_SEQ_2_2 = CLK_COR_SEQ_2_2; // Default: 10'b0000000000
			this->CLK_COR_SEQ_2_3 = CLK_COR_SEQ_2_3; // Default: 10'b0000000000
			this->CLK_COR_SEQ_2_4 = CLK_COR_SEQ_2_4; // Default: 10'b0000000000
			this->CLK_COR_SEQ_2_ENABLE = CLK_COR_SEQ_2_ENABLE; // Default: 4'b1111
			this->CLK_COR_SEQ_2_USE = CLK_COR_SEQ_2_USE; // Default: "FALSE"
			this->CM_TRIM = CM_TRIM; // Default: 2'b01
			this->COMMA_10B_ENABLE = COMMA_10B_ENABLE; // Default: 10'b1111111111
			this->COMMA_DOUBLE = COMMA_DOUBLE; // Default: "FALSE"
			this->COM_BURST_VAL = COM_BURST_VAL; // Default: 4'b1111
			this->DEC_MCOMMA_DETECT = DEC_MCOMMA_DETECT; // Default: "TRUE"
			this->DEC_PCOMMA_DETECT = DEC_PCOMMA_DETECT; // Default: "TRUE"
			this->DEC_VALID_COMMA_ONLY = DEC_VALID_COMMA_ONLY; // Default: "TRUE"
			this->DFE_CAL_TIME = DFE_CAL_TIME; // Default: 5'b01100
			this->DFE_CFG = DFE_CFG; // Default: 8'b00011011
			this->GEARBOX_ENDEC = GEARBOX_ENDEC; // Default: 3'b000
			this->GEN_RXUSRCLK = GEN_RXUSRCLK; // Default: "TRUE"
			this->GEN_TXUSRCLK = GEN_TXUSRCLK; // Default: "TRUE"
			this->GTX_CFG_PWRUP = GTX_CFG_PWRUP; // Default: "TRUE"
			this->MCOMMA_10B_VALUE = MCOMMA_10B_VALUE; // Default: 10'b1010000011
			this->MCOMMA_DETECT = MCOMMA_DETECT; // Default: "TRUE"
			this->OOBDETECT_THRESHOLD = OOBDETECT_THRESHOLD; // Default: 3'b011
			this->PCI_EXPRESS_MODE = PCI_EXPRESS_MODE; // Default: "FALSE"
			this->PCOMMA_10B_VALUE = PCOMMA_10B_VALUE; // Default: 10'b0101111100
			this->PCOMMA_DETECT = PCOMMA_DETECT; // Default: "TRUE"
			this->PMA_CAS_CLK_EN = PMA_CAS_CLK_EN; // Default: "FALSE"
			this->PMA_CDR_SCAN = PMA_CDR_SCAN; // Default: 27'h640404C
			this->PMA_CFG = PMA_CFG; // Default: 76'h0040000040000000003
			this->PMA_RXSYNC_CFG = PMA_RXSYNC_CFG; // Default: 7'h00
			this->PMA_RX_CFG = PMA_RX_CFG; // Default: 25'h05CE048
			this->PMA_TX_CFG = PMA_TX_CFG; // Default: 20'h00082
			this->POWER_SAVE = POWER_SAVE; // Default: 10'b0000110100
			this->RCV_TERM_GND = RCV_TERM_GND; // Default: "FALSE"
			this->RCV_TERM_VTTRX = RCV_TERM_VTTRX; // Default: "TRUE"
			this->RXGEARBOX_USE = RXGEARBOX_USE; // Default: "FALSE"
			this->RXPLL_COM_CFG = RXPLL_COM_CFG; // Default: 24'h21680A
			this->RXPLL_CP_CFG = RXPLL_CP_CFG; // Default: 8'h00
			this->RXPLL_DIVSEL45_FB = RXPLL_DIVSEL45_FB; // Default: 5
			this->RXPLL_DIVSEL_FB = RXPLL_DIVSEL_FB; // Default: 2
			this->RXPLL_DIVSEL_OUT = RXPLL_DIVSEL_OUT; // Default: 1
			this->RXPLL_DIVSEL_REF = RXPLL_DIVSEL_REF; // Default: 1
			this->RXPLL_LKDET_CFG = RXPLL_LKDET_CFG; // Default: 3'b111
			this->RXPRBSERR_LOOPBACK = RXPRBSERR_LOOPBACK; // Default: 1'b0
			this->RXRECCLK_CTRL = RXRECCLK_CTRL; // Default: "RXRECCLKPCS"
			this->RXRECCLK_DLY = RXRECCLK_DLY; // Default: 10'b0000000000
			this->RXUSRCLK_DLY = RXUSRCLK_DLY; // Default: 16'h0000
			this->RX_BUFFER_USE = RX_BUFFER_USE; // Default: "TRUE"
			this->RX_CLK25_DIVIDER = RX_CLK25_DIVIDER; // Default: 6
			this->RX_DATA_WIDTH = RX_DATA_WIDTH; // Default: 20
			this->RX_DECODE_SEQ_MATCH = RX_DECODE_SEQ_MATCH; // Default: "TRUE"
			this->RX_DLYALIGN_CTRINC = RX_DLYALIGN_CTRINC; // Default: 4'b0100
			this->RX_DLYALIGN_EDGESET = RX_DLYALIGN_EDGESET; // Default: 5'b00110
			this->RX_DLYALIGN_LPFINC = RX_DLYALIGN_LPFINC; // Default: 4'b0111
			this->RX_DLYALIGN_MONSEL = RX_DLYALIGN_MONSEL; // Default: 3'b000
			this->RX_DLYALIGN_OVRDSETTING = RX_DLYALIGN_OVRDSETTING; // Default: 8'b00000000
			this->RX_EN_IDLE_HOLD_CDR = RX_EN_IDLE_HOLD_CDR; // Default: "FALSE"
			this->RX_EN_IDLE_HOLD_DFE = RX_EN_IDLE_HOLD_DFE; // Default: "TRUE"
			this->RX_EN_IDLE_RESET_BUF = RX_EN_IDLE_RESET_BUF; // Default: "TRUE"
			this->RX_EN_IDLE_RESET_FR = RX_EN_IDLE_RESET_FR; // Default: "TRUE"
			this->RX_EN_IDLE_RESET_PH = RX_EN_IDLE_RESET_PH; // Default: "TRUE"
			this->RX_EN_MODE_RESET_BUF = RX_EN_MODE_RESET_BUF; // Default: "TRUE"
			this->RX_EN_RATE_RESET_BUF = RX_EN_RATE_RESET_BUF; // Default: "TRUE"
			this->RX_EN_REALIGN_RESET_BUF = RX_EN_REALIGN_RESET_BUF; // Default: "FALSE"
			this->RX_EN_REALIGN_RESET_BUF2 = RX_EN_REALIGN_RESET_BUF2; // Default: "FALSE"
			this->RX_EYE_OFFSET = RX_EYE_OFFSET; // Default: 8'h4C
			this->RX_EYE_SCANMODE = RX_EYE_SCANMODE; // Default: 2'b00
			this->RX_FIFO_ADDR_MODE = RX_FIFO_ADDR_MODE; // Default: "FULL"
			this->RX_IDLE_HI_CNT = RX_IDLE_HI_CNT; // Default: 4'b1000
			this->RX_IDLE_LO_CNT = RX_IDLE_LO_CNT; // Default: 4'b0000
			this->RX_LOSS_OF_SYNC_FSM = RX_LOSS_OF_SYNC_FSM; // Default: "FALSE"
			this->RX_LOS_INVALID_INCR = RX_LOS_INVALID_INCR; // Default: 1
			this->RX_LOS_THRESHOLD = RX_LOS_THRESHOLD; // Default: 4
			this->RX_OVERSAMPLE_MODE = RX_OVERSAMPLE_MODE; // Default: "FALSE"
			this->RX_SLIDE_AUTO_WAIT = RX_SLIDE_AUTO_WAIT; // Default: 5
			this->RX_SLIDE_MODE = RX_SLIDE_MODE; // Default: "OFF"
			this->RX_XCLK_SEL = RX_XCLK_SEL; // Default: "RXREC"
			this->SAS_MAX_COMSAS = SAS_MAX_COMSAS; // Default: 52
			this->SAS_MIN_COMSAS = SAS_MIN_COMSAS; // Default: 40
			this->SATA_BURST_VAL = SATA_BURST_VAL; // Default: 3'b100
			this->SATA_IDLE_VAL = SATA_IDLE_VAL; // Default: 3'b100
			this->SATA_MAX_BURST = SATA_MAX_BURST; // Default: 7
			this->SATA_MAX_INIT = SATA_MAX_INIT; // Default: 22
			this->SATA_MAX_WAKE = SATA_MAX_WAKE; // Default: 7
			this->SATA_MIN_BURST = SATA_MIN_BURST; // Default: 4
			this->SATA_MIN_INIT = SATA_MIN_INIT; // Default: 12
			this->SATA_MIN_WAKE = SATA_MIN_WAKE; // Default: 4
			this->SHOW_REALIGN_COMMA = SHOW_REALIGN_COMMA; // Default: "TRUE"
			this->SIM_GTXRESET_SPEEDUP = SIM_GTXRESET_SPEEDUP; // Default: 1
			this->SIM_RECEIVER_DETECT_PASS = SIM_RECEIVER_DETECT_PASS; // Default: "TRUE"
			this->SIM_RXREFCLK_SOURCE = SIM_RXREFCLK_SOURCE; // Default: 3'b000
			this->SIM_TXREFCLK_SOURCE = SIM_TXREFCLK_SOURCE; // Default: 3'b000
			this->SIM_TX_ELEC_IDLE_LEVEL = SIM_TX_ELEC_IDLE_LEVEL; // Default: "X"
			this->SIM_VERSION = SIM_VERSION; // Default: "2.0"
			this->TERMINATION_CTRL = TERMINATION_CTRL; // Default: 5'b10100
			this->TERMINATION_OVRD = TERMINATION_OVRD; // Default: "FALSE"
			this->TRANS_TIME_FROM_P2 = TRANS_TIME_FROM_P2; // Default: 12'h03C
			this->TRANS_TIME_NON_P2 = TRANS_TIME_NON_P2; // Default: 8'h19
			this->TRANS_TIME_RATE = TRANS_TIME_RATE; // Default: 8'h0E
			this->TRANS_TIME_TO_P2 = TRANS_TIME_TO_P2; // Default: 10'h064
			this->TST_ATTR = TST_ATTR; // Default: 32'h00000000
			this->TXDRIVE_LOOPBACK_HIZ = TXDRIVE_LOOPBACK_HIZ; // Default: "FALSE"
			this->TXDRIVE_LOOPBACK_PD = TXDRIVE_LOOPBACK_PD; // Default: "FALSE"
			this->TXGEARBOX_USE = TXGEARBOX_USE; // Default: "FALSE"
			this->TXOUTCLK_CTRL = TXOUTCLK_CTRL; // Default: "TXOUTCLKPCS"
			this->TXOUTCLK_DLY = TXOUTCLK_DLY; // Default: 10'b0000000000
			this->TXPLL_COM_CFG = TXPLL_COM_CFG; // Default: 24'h21680A
			this->TXPLL_CP_CFG = TXPLL_CP_CFG; // Default: 8'h00
			this->TXPLL_DIVSEL45_FB = TXPLL_DIVSEL45_FB; // Default: 5
			this->TXPLL_DIVSEL_FB = TXPLL_DIVSEL_FB; // Default: 2
			this->TXPLL_DIVSEL_OUT = TXPLL_DIVSEL_OUT; // Default: 1
			this->TXPLL_DIVSEL_REF = TXPLL_DIVSEL_REF; // Default: 1
			this->TXPLL_LKDET_CFG = TXPLL_LKDET_CFG; // Default: 3'b111
			this->TXPLL_SATA = TXPLL_SATA; // Default: 2'b00
			this->TX_BUFFER_USE = TX_BUFFER_USE; // Default: "TRUE"
			this->TX_BYTECLK_CFG = TX_BYTECLK_CFG; // Default: 6'h00
			this->TX_CLK25_DIVIDER = TX_CLK25_DIVIDER; // Default: 6
			this->TX_CLK_SOURCE = TX_CLK_SOURCE; // Default: "RXPLL"
			this->TX_DATA_WIDTH = TX_DATA_WIDTH; // Default: 20
			this->TX_DEEMPH_0 = TX_DEEMPH_0; // Default: 5'b11010
			this->TX_DEEMPH_1 = TX_DEEMPH_1; // Default: 5'b10000
			this->TX_DETECT_RX_CFG = TX_DETECT_RX_CFG; // Default: 14'h1832
			this->TX_DLYALIGN_CTRINC = TX_DLYALIGN_CTRINC; // Default: 4'b0100
			this->TX_DLYALIGN_LPFINC = TX_DLYALIGN_LPFINC; // Default: 4'b0110
			this->TX_DLYALIGN_MONSEL = TX_DLYALIGN_MONSEL; // Default: 3'b000
			this->TX_DLYALIGN_OVRDSETTING = TX_DLYALIGN_OVRDSETTING; // Default: 8'b10000000
			this->TX_DRIVE_MODE = TX_DRIVE_MODE; // Default: "DIRECT"
			this->TX_EN_RATE_RESET_BUF = TX_EN_RATE_RESET_BUF; // Default: "TRUE"
			this->TX_IDLE_ASSERT_DELAY = TX_IDLE_ASSERT_DELAY; // Default: 3'b100
			this->TX_IDLE_DEASSERT_DELAY = TX_IDLE_DEASSERT_DELAY; // Default: 3'b010
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
			this->TX_OVERSAMPLE_MODE = TX_OVERSAMPLE_MODE; // Default: "FALSE"
			this->TX_PMADATA_OPT = TX_PMADATA_OPT; // Default: 1'b0
			this->TX_TDCC_CFG = TX_TDCC_CFG; // Default: 2'b11
			this->TX_USRCLK_CFG = TX_USRCLK_CFG; // Default: 6'h00
			this->TX_XCLK_SEL = TX_XCLK_SEL; // Default: "TXUSR"
			//Verilog Ports in definition order:
			this->COMFINISH = COMFINISH; // OUTPUT
			this->COMINITDET = COMINITDET; // OUTPUT
			this->COMSASDET = COMSASDET; // OUTPUT
			this->COMWAKEDET = COMWAKEDET; // OUTPUT
			this->DFECLKDLYADJMON = DFECLKDLYADJMON; // OUTPUT
			this->DFEEYEDACMON = DFEEYEDACMON; // OUTPUT
			this->DFESENSCAL = DFESENSCAL; // OUTPUT
			this->DFETAP1MONITOR = DFETAP1MONITOR; // OUTPUT
			this->DFETAP2MONITOR = DFETAP2MONITOR; // OUTPUT
			this->DFETAP3MONITOR = DFETAP3MONITOR; // OUTPUT
			this->DFETAP4MONITOR = DFETAP4MONITOR; // OUTPUT
			this->DRDY = DRDY; // OUTPUT
			this->DRPDO = DRPDO; // OUTPUT
			this->MGTREFCLKFAB = MGTREFCLKFAB; // OUTPUT
			this->PHYSTATUS = PHYSTATUS; // OUTPUT
			this->RXBUFSTATUS = RXBUFSTATUS; // OUTPUT
			this->RXBYTEISALIGNED = RXBYTEISALIGNED; // OUTPUT
			this->RXBYTEREALIGN = RXBYTEREALIGN; // OUTPUT
			this->RXCHANBONDSEQ = RXCHANBONDSEQ; // OUTPUT
			this->RXCHANISALIGNED = RXCHANISALIGNED; // OUTPUT
			this->RXCHANREALIGN = RXCHANREALIGN; // OUTPUT
			this->RXCHARISCOMMA = RXCHARISCOMMA; // OUTPUT
			this->RXCHARISK = RXCHARISK; // OUTPUT
			this->RXCHBONDO = RXCHBONDO; // OUTPUT
			this->RXCLKCORCNT = RXCLKCORCNT; // OUTPUT
			this->RXCOMMADET = RXCOMMADET; // OUTPUT
			this->RXDATA = RXDATA; // OUTPUT
			this->RXDATAVALID = RXDATAVALID; // OUTPUT
			this->RXDISPERR = RXDISPERR; // OUTPUT
			this->RXDLYALIGNMONITOR = RXDLYALIGNMONITOR; // OUTPUT
			this->RXELECIDLE = RXELECIDLE; // OUTPUT
			this->RXHEADER = RXHEADER; // OUTPUT
			this->RXHEADERVALID = RXHEADERVALID; // OUTPUT
			this->RXLOSSOFSYNC = RXLOSSOFSYNC; // OUTPUT
			this->RXNOTINTABLE = RXNOTINTABLE; // OUTPUT
			this->RXOVERSAMPLEERR = RXOVERSAMPLEERR; // OUTPUT
			this->RXPLLLKDET = RXPLLLKDET; // OUTPUT
			this->RXPRBSERR = RXPRBSERR; // OUTPUT
			this->RXRATEDONE = RXRATEDONE; // OUTPUT
			this->RXRECCLK = RXRECCLK; // OUTPUT
			this->RXRECCLKPCS = RXRECCLKPCS; // OUTPUT
			this->RXRESETDONE = RXRESETDONE; // OUTPUT
			this->RXRUNDISP = RXRUNDISP; // OUTPUT
			this->RXSTARTOFSEQ = RXSTARTOFSEQ; // OUTPUT
			this->RXSTATUS = RXSTATUS; // OUTPUT
			this->RXVALID = RXVALID; // OUTPUT
			this->TSTOUT = TSTOUT; // OUTPUT
			this->TXBUFSTATUS = TXBUFSTATUS; // OUTPUT
			this->TXDLYALIGNMONITOR = TXDLYALIGNMONITOR; // OUTPUT
			this->TXGEARBOXREADY = TXGEARBOXREADY; // OUTPUT
			this->TXKERR = TXKERR; // OUTPUT
			this->TXN = TXN; // OUTPUT
			this->TXOUTCLK = TXOUTCLK; // OUTPUT
			this->TXOUTCLKPCS = TXOUTCLKPCS; // OUTPUT
			this->TXP = TXP; // OUTPUT
			this->TXPLLLKDET = TXPLLLKDET; // OUTPUT
			this->TXRATEDONE = TXRATEDONE; // OUTPUT
			this->TXRESETDONE = TXRESETDONE; // OUTPUT
			this->TXRUNDISP = TXRUNDISP; // OUTPUT
			this->DADDR = DADDR; // INPUT
			this->DCLK = DCLK; // INPUT
			this->DEN = DEN; // INPUT
			this->DFECLKDLYADJ = DFECLKDLYADJ; // INPUT
			this->DFEDLYOVRD = DFEDLYOVRD; // INPUT
			this->DFETAP1 = DFETAP1; // INPUT
			this->DFETAP2 = DFETAP2; // INPUT
			this->DFETAP3 = DFETAP3; // INPUT
			this->DFETAP4 = DFETAP4; // INPUT
			this->DFETAPOVRD = DFETAPOVRD; // INPUT
			this->DI = DI; // INPUT
			this->DWE = DWE; // INPUT
			this->GATERXELECIDLE = GATERXELECIDLE; // INPUT
			this->GREFCLKRX = GREFCLKRX; // INPUT
			this->GREFCLKTX = GREFCLKTX; // INPUT
			this->GTXRXRESET = GTXRXRESET; // INPUT
			this->GTXTEST = GTXTEST; // INPUT
			this->GTXTXRESET = GTXTXRESET; // INPUT
			this->IGNORESIGDET = IGNORESIGDET; // INPUT
			this->LOOPBACK = LOOPBACK; // INPUT
			this->MGTREFCLKRX = MGTREFCLKRX; // INPUT
			this->MGTREFCLKTX = MGTREFCLKTX; // INPUT
			this->NORTHREFCLKRX = NORTHREFCLKRX; // INPUT
			this->NORTHREFCLKTX = NORTHREFCLKTX; // INPUT
			this->PERFCLKRX = PERFCLKRX; // INPUT
			this->PERFCLKTX = PERFCLKTX; // INPUT
			this->PLLRXRESET = PLLRXRESET; // INPUT
			this->PLLTXRESET = PLLTXRESET; // INPUT
			this->PRBSCNTRESET = PRBSCNTRESET; // INPUT
			this->RXBUFRESET = RXBUFRESET; // INPUT
			this->RXCDRRESET = RXCDRRESET; // INPUT
			this->RXCHBONDI = RXCHBONDI; // INPUT
			this->RXCHBONDLEVEL = RXCHBONDLEVEL; // INPUT
			this->RXCHBONDMASTER = RXCHBONDMASTER; // INPUT
			this->RXCHBONDSLAVE = RXCHBONDSLAVE; // INPUT
			this->RXCOMMADETUSE = RXCOMMADETUSE; // INPUT
			this->RXDEC8B10BUSE = RXDEC8B10BUSE; // INPUT
			this->RXDLYALIGNDISABLE = RXDLYALIGNDISABLE; // INPUT
			this->RXDLYALIGNMONENB = RXDLYALIGNMONENB; // INPUT
			this->RXDLYALIGNOVERRIDE = RXDLYALIGNOVERRIDE; // INPUT
			this->RXDLYALIGNRESET = RXDLYALIGNRESET; // INPUT
			this->RXDLYALIGNSWPPRECURB = RXDLYALIGNSWPPRECURB; // INPUT
			this->RXDLYALIGNUPDSW = RXDLYALIGNUPDSW; // INPUT
			this->RXENCHANSYNC = RXENCHANSYNC; // INPUT
			this->RXENMCOMMAALIGN = RXENMCOMMAALIGN; // INPUT
			this->RXENPCOMMAALIGN = RXENPCOMMAALIGN; // INPUT
			this->RXENPMAPHASEALIGN = RXENPMAPHASEALIGN; // INPUT
			this->RXENPRBSTST = RXENPRBSTST; // INPUT
			this->RXENSAMPLEALIGN = RXENSAMPLEALIGN; // INPUT
			this->RXEQMIX = RXEQMIX; // INPUT
			this->RXGEARBOXSLIP = RXGEARBOXSLIP; // INPUT
			this->RXN = RXN; // INPUT
			this->RXP = RXP; // INPUT
			this->RXPLLLKDETEN = RXPLLLKDETEN; // INPUT
			this->RXPLLPOWERDOWN = RXPLLPOWERDOWN; // INPUT
			this->RXPLLREFSELDY = RXPLLREFSELDY; // INPUT
			this->RXPMASETPHASE = RXPMASETPHASE; // INPUT
			this->RXPOLARITY = RXPOLARITY; // INPUT
			this->RXPOWERDOWN = RXPOWERDOWN; // INPUT
			this->RXRATE = RXRATE; // INPUT
			this->RXRESET = RXRESET; // INPUT
			this->RXSLIDE = RXSLIDE; // INPUT
			this->RXUSRCLK = RXUSRCLK; // INPUT
			this->RXUSRCLK2 = RXUSRCLK2; // INPUT
			this->SOUTHREFCLKRX = SOUTHREFCLKRX; // INPUT
			this->SOUTHREFCLKTX = SOUTHREFCLKTX; // INPUT
			this->TSTCLK0 = TSTCLK0; // INPUT
			this->TSTCLK1 = TSTCLK1; // INPUT
			this->TSTIN = TSTIN; // INPUT
			this->TXBUFDIFFCTRL = TXBUFDIFFCTRL; // INPUT
			this->TXBYPASS8B10B = TXBYPASS8B10B; // INPUT
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
			this->TXDLYALIGNDISABLE = TXDLYALIGNDISABLE; // INPUT
			this->TXDLYALIGNMONENB = TXDLYALIGNMONENB; // INPUT
			this->TXDLYALIGNOVERRIDE = TXDLYALIGNOVERRIDE; // INPUT
			this->TXDLYALIGNRESET = TXDLYALIGNRESET; // INPUT
			this->TXDLYALIGNUPDSW = TXDLYALIGNUPDSW; // INPUT
			this->TXELECIDLE = TXELECIDLE; // INPUT
			this->TXENC8B10BUSE = TXENC8B10BUSE; // INPUT
			this->TXENPMAPHASEALIGN = TXENPMAPHASEALIGN; // INPUT
			this->TXENPRBSTST = TXENPRBSTST; // INPUT
			this->TXHEADER = TXHEADER; // INPUT
			this->TXINHIBIT = TXINHIBIT; // INPUT
			this->TXMARGIN = TXMARGIN; // INPUT
			this->TXPDOWNASYNCH = TXPDOWNASYNCH; // INPUT
			this->TXPLLLKDETEN = TXPLLLKDETEN; // INPUT
			this->TXPLLPOWERDOWN = TXPLLPOWERDOWN; // INPUT
			this->TXPLLREFSELDY = TXPLLREFSELDY; // INPUT
			this->TXPMASETPHASE = TXPMASETPHASE; // INPUT
			this->TXPOLARITY = TXPOLARITY; // INPUT
			this->TXPOSTEMPHASIS = TXPOSTEMPHASIS; // INPUT
			this->TXPOWERDOWN = TXPOWERDOWN; // INPUT
			this->TXPRBSFORCEERR = TXPRBSFORCEERR; // INPUT
			this->TXPREEMPHASIS = TXPREEMPHASIS; // INPUT
			this->TXRATE = TXRATE; // INPUT
			this->TXRESET = TXRESET; // INPUT
			this->TXSEQUENCE = TXSEQUENCE; // INPUT
			this->TXSTARTSEQ = TXSTARTSEQ; // INPUT
			this->TXSWING = TXSWING; // INPUT
			this->TXUSRCLK = TXUSRCLK; // INPUT
			this->TXUSRCLK2 = TXUSRCLK2; // INPUT
			this->USRCODEERR = USRCODEERR; // INPUT
		
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
