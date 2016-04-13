/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_GTXE1: public Primitive{

		//Verilog Parameters:
		parameter_string_t LOC;
		parameter_enum_t AC_CAP_DIS;
		parameter_string_t ALIGN_COMMA_WORD;
		parameter_string_t BGTEST_CFG;
		parameter_string_t BIAS_CFG;
		parameter_string_t CDR_PH_ADJ_TIME;
		parameter_string_t CHAN_BOND_1_MAX_SKEW;
		parameter_string_t CHAN_BOND_2_MAX_SKEW;
		parameter_enum_t CHAN_BOND_KEEP_ALIGN;
		parameter_string_t CHAN_BOND_SEQ_1_1;
		parameter_string_t CHAN_BOND_SEQ_1_2;
		parameter_string_t CHAN_BOND_SEQ_1_3;
		parameter_string_t CHAN_BOND_SEQ_1_4;
		parameter_string_t CHAN_BOND_SEQ_1_ENABLE;
		parameter_string_t CHAN_BOND_SEQ_2_1;
		parameter_string_t CHAN_BOND_SEQ_2_2;
		parameter_string_t CHAN_BOND_SEQ_2_3;
		parameter_string_t CHAN_BOND_SEQ_2_4;
		parameter_string_t CHAN_BOND_SEQ_2_CFG;
		parameter_string_t CHAN_BOND_SEQ_2_ENABLE;
		parameter_enum_t CHAN_BOND_SEQ_2_USE;
		parameter_string_t CHAN_BOND_SEQ_LEN;
		parameter_enum_t CLK_CORRECT_USE;
		parameter_string_t CLK_COR_ADJ_LEN;
		parameter_string_t CLK_COR_DET_LEN;
		parameter_enum_t CLK_COR_INSERT_IDLE_FLAG;
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
		parameter_string_t CM_TRIM;
		parameter_string_t COMMA_10B_ENABLE;
		parameter_enum_t COMMA_DOUBLE;
		parameter_string_t COM_BURST_VAL;
		parameter_enum_t DEC_MCOMMA_DETECT;
		parameter_enum_t DEC_PCOMMA_DETECT;
		parameter_enum_t DEC_VALID_COMMA_ONLY;
		parameter_string_t DFE_CAL_TIME;
		parameter_string_t DFE_CFG;
		parameter_string_t GEARBOX_ENDEC;
		parameter_enum_t GEN_RXUSRCLK;
		parameter_enum_t GEN_TXUSRCLK;
		parameter_enum_t GTX_CFG_PWRUP;
		parameter_string_t MCOMMA_10B_VALUE;
		parameter_enum_t MCOMMA_DETECT;
		parameter_string_t OOBDETECT_THRESHOLD;
		parameter_enum_t PCI_EXPRESS_MODE;
		parameter_string_t PCOMMA_10B_VALUE;
		parameter_enum_t PCOMMA_DETECT;
		parameter_enum_t PMA_CAS_CLK_EN;
		parameter_string_t PMA_CDR_SCAN;
		parameter_string_t PMA_CFG;
		parameter_string_t PMA_RXSYNC_CFG;
		parameter_string_t PMA_RX_CFG;
		parameter_string_t PMA_TX_CFG;
		parameter_string_t POWER_SAVE;
		parameter_enum_t RCV_TERM_GND;
		parameter_enum_t RCV_TERM_VTTRX;
		parameter_enum_t RXGEARBOX_USE;
		parameter_string_t RXPLL_COM_CFG;
		parameter_string_t RXPLL_CP_CFG;
		parameter_string_t RXPLL_DIVSEL45_FB;
		parameter_string_t RXPLL_DIVSEL_FB;
		parameter_string_t RXPLL_DIVSEL_OUT;
		parameter_string_t RXPLL_DIVSEL_REF;
		parameter_string_t RXPLL_LKDET_CFG;
		parameter_string_t RXPRBSERR_LOOPBACK;
		parameter_string_t RXRECCLK_CTRL;
		parameter_string_t RXRECCLK_DLY;
		parameter_string_t RXUSRCLK_DLY;
		parameter_enum_t RX_BUFFER_USE;
		parameter_string_t RX_CLK25_DIVIDER;
		parameter_string_t RX_DATA_WIDTH;
		parameter_enum_t RX_DECODE_SEQ_MATCH;
		parameter_string_t RX_DLYALIGN_CTRINC;
		parameter_string_t RX_DLYALIGN_EDGESET;
		parameter_string_t RX_DLYALIGN_LPFINC;
		parameter_string_t RX_DLYALIGN_MONSEL;
		parameter_string_t RX_DLYALIGN_OVRDSETTING;
		parameter_enum_t RX_EN_IDLE_HOLD_CDR;
		parameter_enum_t RX_EN_IDLE_HOLD_DFE;
		parameter_enum_t RX_EN_IDLE_RESET_BUF;
		parameter_enum_t RX_EN_IDLE_RESET_FR;
		parameter_enum_t RX_EN_IDLE_RESET_PH;
		parameter_enum_t RX_EN_MODE_RESET_BUF;
		parameter_enum_t RX_EN_RATE_RESET_BUF;
		parameter_enum_t RX_EN_REALIGN_RESET_BUF;
		parameter_enum_t RX_EN_REALIGN_RESET_BUF2;
		parameter_string_t RX_EYE_OFFSET;
		parameter_string_t RX_EYE_SCANMODE;
		parameter_string_t RX_FIFO_ADDR_MODE;
		parameter_string_t RX_IDLE_HI_CNT;
		parameter_string_t RX_IDLE_LO_CNT;
		parameter_enum_t RX_LOSS_OF_SYNC_FSM;
		parameter_string_t RX_LOS_INVALID_INCR;
		parameter_string_t RX_LOS_THRESHOLD;
		parameter_enum_t RX_OVERSAMPLE_MODE;
		parameter_string_t RX_SLIDE_AUTO_WAIT;
		parameter_string_t RX_SLIDE_MODE;
		parameter_string_t RX_XCLK_SEL;
		parameter_string_t SAS_MAX_COMSAS;
		parameter_string_t SAS_MIN_COMSAS;
		parameter_string_t SATA_BURST_VAL;
		parameter_string_t SATA_IDLE_VAL;
		parameter_string_t SATA_MAX_BURST;
		parameter_string_t SATA_MAX_INIT;
		parameter_string_t SATA_MAX_WAKE;
		parameter_string_t SATA_MIN_BURST;
		parameter_string_t SATA_MIN_INIT;
		parameter_string_t SATA_MIN_WAKE;
		parameter_enum_t SHOW_REALIGN_COMMA;
		parameter_string_t SIM_GTXRESET_SPEEDUP;
		parameter_enum_t SIM_RECEIVER_DETECT_PASS;
		parameter_string_t SIM_RXREFCLK_SOURCE;
		parameter_string_t SIM_TXREFCLK_SOURCE;
		parameter_string_t SIM_TX_ELEC_IDLE_LEVEL;
		parameter_string_t SIM_VERSION;
		parameter_string_t TERMINATION_CTRL;
		parameter_enum_t TERMINATION_OVRD;
		parameter_string_t TRANS_TIME_FROM_P2;
		parameter_string_t TRANS_TIME_NON_P2;
		parameter_string_t TRANS_TIME_RATE;
		parameter_string_t TRANS_TIME_TO_P2;
		parameter_string_t TST_ATTR;
		parameter_enum_t TXDRIVE_LOOPBACK_HIZ;
		parameter_enum_t TXDRIVE_LOOPBACK_PD;
		parameter_enum_t TXGEARBOX_USE;
		parameter_string_t TXOUTCLK_CTRL;
		parameter_string_t TXOUTCLK_DLY;
		parameter_string_t TXPLL_COM_CFG;
		parameter_string_t TXPLL_CP_CFG;
		parameter_string_t TXPLL_DIVSEL45_FB;
		parameter_string_t TXPLL_DIVSEL_FB;
		parameter_string_t TXPLL_DIVSEL_OUT;
		parameter_string_t TXPLL_DIVSEL_REF;
		parameter_string_t TXPLL_LKDET_CFG;
		parameter_string_t TXPLL_SATA;
		parameter_enum_t TX_BUFFER_USE;
		parameter_string_t TX_BYTECLK_CFG;
		parameter_string_t TX_CLK25_DIVIDER;
		parameter_string_t TX_CLK_SOURCE;
		parameter_string_t TX_DATA_WIDTH;
		parameter_string_t TX_DEEMPH_0;
		parameter_string_t TX_DEEMPH_1;
		parameter_string_t TX_DETECT_RX_CFG;
		parameter_string_t TX_DLYALIGN_CTRINC;
		parameter_string_t TX_DLYALIGN_LPFINC;
		parameter_string_t TX_DLYALIGN_MONSEL;
		parameter_string_t TX_DLYALIGN_OVRDSETTING;
		parameter_string_t TX_DRIVE_MODE;
		parameter_enum_t TX_EN_RATE_RESET_BUF;
		parameter_string_t TX_IDLE_ASSERT_DELAY;
		parameter_string_t TX_IDLE_DEASSERT_DELAY;
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
		parameter_enum_t TX_OVERSAMPLE_MODE;
		parameter_string_t TX_PMADATA_OPT;
		parameter_string_t TX_TDCC_CFG;
		parameter_string_t TX_USRCLK_CFG;
		parameter_string_t TX_XCLK_SEL;
		//Verilog Ports in definition order:
		NetFlow* COMFINISH; // net ID: COMFINISH lsb: 0  msb: 0 OUTPUT
		NetFlow* COMINITDET; // net ID: COMINITDET lsb: 0  msb: 0 OUTPUT
		NetFlow* COMSASDET; // net ID: COMSASDET lsb: 0  msb: 0 OUTPUT
		NetFlow* COMWAKEDET; // net ID: COMWAKEDET lsb: 0  msb: 0 OUTPUT
		NetFlow* DFECLKDLYADJMON; // net ID: DFECLKDLYADJMON lsb: 0  msb: 0 OUTPUT
		NetFlow* DFEEYEDACMON; // net ID: DFEEYEDACMON lsb: 0  msb: 0 OUTPUT
		NetFlow* DFESENSCAL; // net ID: DFESENSCAL lsb: 0  msb: 0 OUTPUT
		NetFlow* DFETAP1MONITOR; // net ID: DFETAP1MONITOR lsb: 0  msb: 0 OUTPUT
		NetFlow* DFETAP2MONITOR; // net ID: DFETAP2MONITOR lsb: 0  msb: 0 OUTPUT
		NetFlow* DFETAP3MONITOR; // net ID: DFETAP3MONITOR lsb: 0  msb: 0 OUTPUT
		NetFlow* DFETAP4MONITOR; // net ID: DFETAP4MONITOR lsb: 0  msb: 0 OUTPUT
		NetFlow* DRDY; // net ID: DRDY lsb: 0  msb: 0 OUTPUT
		NetFlow* DRPDO; // net ID: DRPDO lsb: 0  msb: 0 OUTPUT
		NetFlow* MGTREFCLKFAB; // net ID: MGTREFCLKFAB lsb: 0  msb: 0 OUTPUT
		NetFlow* PHYSTATUS; // net ID: PHYSTATUS lsb: 0  msb: 0 OUTPUT
		NetFlow* RXBUFSTATUS; // net ID: RXBUFSTATUS lsb: 0  msb: 0 OUTPUT
		NetFlow* RXBYTEISALIGNED; // net ID: RXBYTEISALIGNED lsb: 0  msb: 0 OUTPUT
		NetFlow* RXBYTEREALIGN; // net ID: RXBYTEREALIGN lsb: 0  msb: 0 OUTPUT
		NetFlow* RXCHANBONDSEQ; // net ID: RXCHANBONDSEQ lsb: 0  msb: 0 OUTPUT
		NetFlow* RXCHANISALIGNED; // net ID: RXCHANISALIGNED lsb: 0  msb: 0 OUTPUT
		NetFlow* RXCHANREALIGN; // net ID: RXCHANREALIGN lsb: 0  msb: 0 OUTPUT
		NetFlow* RXCHARISCOMMA; // net ID: RXCHARISCOMMA lsb: 0  msb: 0 OUTPUT
		NetFlow* RXCHARISK; // net ID: RXCHARISK lsb: 0  msb: 0 OUTPUT
		NetFlow* RXCHBONDO; // net ID: RXCHBONDO lsb: 0  msb: 0 OUTPUT
		NetFlow* RXCLKCORCNT; // net ID: RXCLKCORCNT lsb: 0  msb: 0 OUTPUT
		NetFlow* RXCOMMADET; // net ID: RXCOMMADET lsb: 0  msb: 0 OUTPUT
		NetFlow* RXDATA; // net ID: RXDATA lsb: 0  msb: 0 OUTPUT
		NetFlow* RXDATAVALID; // net ID: RXDATAVALID lsb: 0  msb: 0 OUTPUT
		NetFlow* RXDISPERR; // net ID: RXDISPERR lsb: 0  msb: 0 OUTPUT
		NetFlow* RXDLYALIGNMONITOR; // net ID: RXDLYALIGNMONITOR lsb: 0  msb: 0 OUTPUT
		NetFlow* RXELECIDLE; // net ID: RXELECIDLE lsb: 0  msb: 0 OUTPUT
		NetFlow* RXHEADER; // net ID: RXHEADER lsb: 0  msb: 0 OUTPUT
		NetFlow* RXHEADERVALID; // net ID: RXHEADERVALID lsb: 0  msb: 0 OUTPUT
		NetFlow* RXLOSSOFSYNC; // net ID: RXLOSSOFSYNC lsb: 0  msb: 0 OUTPUT
		NetFlow* RXNOTINTABLE; // net ID: RXNOTINTABLE lsb: 0  msb: 0 OUTPUT
		NetFlow* RXOVERSAMPLEERR; // net ID: RXOVERSAMPLEERR lsb: 0  msb: 0 OUTPUT
		NetFlow* RXPLLLKDET; // net ID: RXPLLLKDET lsb: 0  msb: 0 OUTPUT
		NetFlow* RXPRBSERR; // net ID: RXPRBSERR lsb: 0  msb: 0 OUTPUT
		NetFlow* RXRATEDONE; // net ID: RXRATEDONE lsb: 0  msb: 0 OUTPUT
		NetFlow* RXRECCLK; // net ID: RXRECCLK lsb: 0  msb: 0 OUTPUT
		NetFlow* RXRECCLKPCS; // net ID: RXRECCLKPCS lsb: 0  msb: 0 OUTPUT
		NetFlow* RXRESETDONE; // net ID: RXRESETDONE lsb: 0  msb: 0 OUTPUT
		NetFlow* RXRUNDISP; // net ID: RXRUNDISP lsb: 0  msb: 0 OUTPUT
		NetFlow* RXSTARTOFSEQ; // net ID: RXSTARTOFSEQ lsb: 0  msb: 0 OUTPUT
		NetFlow* RXSTATUS; // net ID: RXSTATUS lsb: 0  msb: 0 OUTPUT
		NetFlow* RXVALID; // net ID: RXVALID lsb: 0  msb: 0 OUTPUT
		NetFlow* TSTOUT; // net ID: TSTOUT lsb: 0  msb: 0 OUTPUT
		NetFlow* TXBUFSTATUS; // net ID: TXBUFSTATUS lsb: 0  msb: 0 OUTPUT
		NetFlow* TXDLYALIGNMONITOR; // net ID: TXDLYALIGNMONITOR lsb: 0  msb: 0 OUTPUT
		NetFlow* TXGEARBOXREADY; // net ID: TXGEARBOXREADY lsb: 0  msb: 0 OUTPUT
		NetFlow* TXKERR; // net ID: TXKERR lsb: 0  msb: 0 OUTPUT
		NetFlow* TXN; // net ID: TXN lsb: 0  msb: 0 OUTPUT
		NetFlow* TXOUTCLK; // net ID: TXOUTCLK lsb: 0  msb: 0 OUTPUT
		NetFlow* TXOUTCLKPCS; // net ID: TXOUTCLKPCS lsb: 0  msb: 0 OUTPUT
		NetFlow* TXP; // net ID: TXP lsb: 0  msb: 0 OUTPUT
		NetFlow* TXPLLLKDET; // net ID: TXPLLLKDET lsb: 0  msb: 0 OUTPUT
		NetFlow* TXRATEDONE; // net ID: TXRATEDONE lsb: 0  msb: 0 OUTPUT
		NetFlow* TXRESETDONE; // net ID: TXRESETDONE lsb: 0  msb: 0 OUTPUT
		NetFlow* TXRUNDISP; // net ID: TXRUNDISP lsb: 0  msb: 0 OUTPUT
		NetFlow* DADDR; // net ID: DADDR lsb: 0  msb: 7 INPUT
		NetFlow* DCLK; // net ID: DCLK lsb: 0  msb: 0 INPUT
		NetFlow* DEN; // net ID: DEN lsb: 0  msb: 0 INPUT
		NetFlow* DFECLKDLYADJ; // net ID: DFECLKDLYADJ lsb: 0  msb: 5 INPUT
		NetFlow* DFEDLYOVRD; // net ID: DFEDLYOVRD lsb: 0  msb: 0 INPUT
		NetFlow* DFETAP1; // net ID: DFETAP1 lsb: 0  msb: 4 INPUT
		NetFlow* DFETAP2; // net ID: DFETAP2 lsb: 0  msb: 4 INPUT
		NetFlow* DFETAP3; // net ID: DFETAP3 lsb: 0  msb: 3 INPUT
		NetFlow* DFETAP4; // net ID: DFETAP4 lsb: 0  msb: 3 INPUT
		NetFlow* DFETAPOVRD; // net ID: DFETAPOVRD lsb: 0  msb: 0 INPUT
		NetFlow* DI; // net ID: DI lsb: 0  msb: 15 INPUT
		NetFlow* DWE; // net ID: DWE lsb: 0  msb: 0 INPUT
		NetFlow* GATERXELECIDLE; // net ID: GATERXELECIDLE lsb: 0  msb: 0 INPUT
		NetFlow* GREFCLKRX; // net ID: GREFCLKRX lsb: 0  msb: 0 INPUT
		NetFlow* GREFCLKTX; // net ID: GREFCLKTX lsb: 0  msb: 0 INPUT
		NetFlow* GTXRXRESET; // net ID: GTXRXRESET lsb: 0  msb: 0 INPUT
		NetFlow* GTXTEST; // net ID: GTXTEST lsb: 0  msb: 12 INPUT
		NetFlow* GTXTXRESET; // net ID: GTXTXRESET lsb: 0  msb: 0 INPUT
		NetFlow* IGNORESIGDET; // net ID: IGNORESIGDET lsb: 0  msb: 0 INPUT
		NetFlow* LOOPBACK; // net ID: LOOPBACK lsb: 0  msb: 2 INPUT
		NetFlow* MGTREFCLKRX; // net ID: MGTREFCLKRX lsb: 0  msb: 1 INPUT
		NetFlow* MGTREFCLKTX; // net ID: MGTREFCLKTX lsb: 0  msb: 1 INPUT
		NetFlow* NORTHREFCLKRX; // net ID: NORTHREFCLKRX lsb: 0  msb: 1 INPUT
		NetFlow* NORTHREFCLKTX; // net ID: NORTHREFCLKTX lsb: 0  msb: 1 INPUT
		NetFlow* PERFCLKRX; // net ID: PERFCLKRX lsb: 0  msb: 0 INPUT
		NetFlow* PERFCLKTX; // net ID: PERFCLKTX lsb: 0  msb: 0 INPUT
		NetFlow* PLLRXRESET; // net ID: PLLRXRESET lsb: 0  msb: 0 INPUT
		NetFlow* PLLTXRESET; // net ID: PLLTXRESET lsb: 0  msb: 0 INPUT
		NetFlow* PRBSCNTRESET; // net ID: PRBSCNTRESET lsb: 0  msb: 0 INPUT
		NetFlow* RXBUFRESET; // net ID: RXBUFRESET lsb: 0  msb: 0 INPUT
		NetFlow* RXCDRRESET; // net ID: RXCDRRESET lsb: 0  msb: 0 INPUT
		NetFlow* RXCHBONDI; // net ID: RXCHBONDI lsb: 0  msb: 3 INPUT
		NetFlow* RXCHBONDLEVEL; // net ID: RXCHBONDLEVEL lsb: 0  msb: 2 INPUT
		NetFlow* RXCHBONDMASTER; // net ID: RXCHBONDMASTER lsb: 0  msb: 0 INPUT
		NetFlow* RXCHBONDSLAVE; // net ID: RXCHBONDSLAVE lsb: 0  msb: 0 INPUT
		NetFlow* RXCOMMADETUSE; // net ID: RXCOMMADETUSE lsb: 0  msb: 0 INPUT
		NetFlow* RXDEC8B10BUSE; // net ID: RXDEC8B10BUSE lsb: 0  msb: 0 INPUT
		NetFlow* RXDLYALIGNDISABLE; // net ID: RXDLYALIGNDISABLE lsb: 0  msb: 0 INPUT
		NetFlow* RXDLYALIGNMONENB; // net ID: RXDLYALIGNMONENB lsb: 0  msb: 0 INPUT
		NetFlow* RXDLYALIGNOVERRIDE; // net ID: RXDLYALIGNOVERRIDE lsb: 0  msb: 0 INPUT
		NetFlow* RXDLYALIGNRESET; // net ID: RXDLYALIGNRESET lsb: 0  msb: 0 INPUT
		NetFlow* RXDLYALIGNSWPPRECURB; // net ID: RXDLYALIGNSWPPRECURB lsb: 0  msb: 0 INPUT
		NetFlow* RXDLYALIGNUPDSW; // net ID: RXDLYALIGNUPDSW lsb: 0  msb: 0 INPUT
		NetFlow* RXENCHANSYNC; // net ID: RXENCHANSYNC lsb: 0  msb: 0 INPUT
		NetFlow* RXENMCOMMAALIGN; // net ID: RXENMCOMMAALIGN lsb: 0  msb: 0 INPUT
		NetFlow* RXENPCOMMAALIGN; // net ID: RXENPCOMMAALIGN lsb: 0  msb: 0 INPUT
		NetFlow* RXENPMAPHASEALIGN; // net ID: RXENPMAPHASEALIGN lsb: 0  msb: 0 INPUT
		NetFlow* RXENPRBSTST; // net ID: RXENPRBSTST lsb: 0  msb: 2 INPUT
		NetFlow* RXENSAMPLEALIGN; // net ID: RXENSAMPLEALIGN lsb: 0  msb: 0 INPUT
		NetFlow* RXEQMIX; // net ID: RXEQMIX lsb: 0  msb: 9 INPUT
		NetFlow* RXGEARBOXSLIP; // net ID: RXGEARBOXSLIP lsb: 0  msb: 0 INPUT
		NetFlow* RXN; // net ID: RXN lsb: 0  msb: 0 INPUT
		NetFlow* RXP; // net ID: RXP lsb: 0  msb: 0 INPUT
		NetFlow* RXPLLLKDETEN; // net ID: RXPLLLKDETEN lsb: 0  msb: 0 INPUT
		NetFlow* RXPLLPOWERDOWN; // net ID: RXPLLPOWERDOWN lsb: 0  msb: 0 INPUT
		NetFlow* RXPLLREFSELDY; // net ID: RXPLLREFSELDY lsb: 0  msb: 2 INPUT
		NetFlow* RXPMASETPHASE; // net ID: RXPMASETPHASE lsb: 0  msb: 0 INPUT
		NetFlow* RXPOLARITY; // net ID: RXPOLARITY lsb: 0  msb: 0 INPUT
		NetFlow* RXPOWERDOWN; // net ID: RXPOWERDOWN lsb: 0  msb: 1 INPUT
		NetFlow* RXRATE; // net ID: RXRATE lsb: 0  msb: 1 INPUT
		NetFlow* RXRESET; // net ID: RXRESET lsb: 0  msb: 0 INPUT
		NetFlow* RXSLIDE; // net ID: RXSLIDE lsb: 0  msb: 0 INPUT
		NetFlow* RXUSRCLK; // net ID: RXUSRCLK lsb: 0  msb: 0 INPUT
		NetFlow* RXUSRCLK2; // net ID: RXUSRCLK2 lsb: 0  msb: 0 INPUT
		NetFlow* SOUTHREFCLKRX; // net ID: SOUTHREFCLKRX lsb: 0  msb: 1 INPUT
		NetFlow* SOUTHREFCLKTX; // net ID: SOUTHREFCLKTX lsb: 0  msb: 1 INPUT
		NetFlow* TSTCLK0; // net ID: TSTCLK0 lsb: 0  msb: 0 INPUT
		NetFlow* TSTCLK1; // net ID: TSTCLK1 lsb: 0  msb: 0 INPUT
		NetFlow* TSTIN; // net ID: TSTIN lsb: 0  msb: 19 INPUT
		NetFlow* TXBUFDIFFCTRL; // net ID: TXBUFDIFFCTRL lsb: 0  msb: 2 INPUT
		NetFlow* TXBYPASS8B10B; // net ID: TXBYPASS8B10B lsb: 0  msb: 3 INPUT
		NetFlow* TXCHARDISPMODE; // net ID: TXCHARDISPMODE lsb: 0  msb: 3 INPUT
		NetFlow* TXCHARDISPVAL; // net ID: TXCHARDISPVAL lsb: 0  msb: 3 INPUT
		NetFlow* TXCHARISK; // net ID: TXCHARISK lsb: 0  msb: 3 INPUT
		NetFlow* TXCOMINIT; // net ID: TXCOMINIT lsb: 0  msb: 0 INPUT
		NetFlow* TXCOMSAS; // net ID: TXCOMSAS lsb: 0  msb: 0 INPUT
		NetFlow* TXCOMWAKE; // net ID: TXCOMWAKE lsb: 0  msb: 0 INPUT
		NetFlow* TXDATA; // net ID: TXDATA lsb: 0  msb: 31 INPUT
		NetFlow* TXDEEMPH; // net ID: TXDEEMPH lsb: 0  msb: 0 INPUT
		NetFlow* TXDETECTRX; // net ID: TXDETECTRX lsb: 0  msb: 0 INPUT
		NetFlow* TXDIFFCTRL; // net ID: TXDIFFCTRL lsb: 0  msb: 3 INPUT
		NetFlow* TXDLYALIGNDISABLE; // net ID: TXDLYALIGNDISABLE lsb: 0  msb: 0 INPUT
		NetFlow* TXDLYALIGNMONENB; // net ID: TXDLYALIGNMONENB lsb: 0  msb: 0 INPUT
		NetFlow* TXDLYALIGNOVERRIDE; // net ID: TXDLYALIGNOVERRIDE lsb: 0  msb: 0 INPUT
		NetFlow* TXDLYALIGNRESET; // net ID: TXDLYALIGNRESET lsb: 0  msb: 0 INPUT
		NetFlow* TXDLYALIGNUPDSW; // net ID: TXDLYALIGNUPDSW lsb: 0  msb: 0 INPUT
		NetFlow* TXELECIDLE; // net ID: TXELECIDLE lsb: 0  msb: 0 INPUT
		NetFlow* TXENC8B10BUSE; // net ID: TXENC8B10BUSE lsb: 0  msb: 0 INPUT
		NetFlow* TXENPMAPHASEALIGN; // net ID: TXENPMAPHASEALIGN lsb: 0  msb: 0 INPUT
		NetFlow* TXENPRBSTST; // net ID: TXENPRBSTST lsb: 0  msb: 2 INPUT
		NetFlow* TXHEADER; // net ID: TXHEADER lsb: 0  msb: 2 INPUT
		NetFlow* TXINHIBIT; // net ID: TXINHIBIT lsb: 0  msb: 0 INPUT
		NetFlow* TXMARGIN; // net ID: TXMARGIN lsb: 0  msb: 2 INPUT
		NetFlow* TXPDOWNASYNCH; // net ID: TXPDOWNASYNCH lsb: 0  msb: 0 INPUT
		NetFlow* TXPLLLKDETEN; // net ID: TXPLLLKDETEN lsb: 0  msb: 0 INPUT
		NetFlow* TXPLLPOWERDOWN; // net ID: TXPLLPOWERDOWN lsb: 0  msb: 0 INPUT
		NetFlow* TXPLLREFSELDY; // net ID: TXPLLREFSELDY lsb: 0  msb: 2 INPUT
		NetFlow* TXPMASETPHASE; // net ID: TXPMASETPHASE lsb: 0  msb: 0 INPUT
		NetFlow* TXPOLARITY; // net ID: TXPOLARITY lsb: 0  msb: 0 INPUT
		NetFlow* TXPOSTEMPHASIS; // net ID: TXPOSTEMPHASIS lsb: 0  msb: 4 INPUT
		NetFlow* TXPOWERDOWN; // net ID: TXPOWERDOWN lsb: 0  msb: 1 INPUT
		NetFlow* TXPRBSFORCEERR; // net ID: TXPRBSFORCEERR lsb: 0  msb: 0 INPUT
		NetFlow* TXPREEMPHASIS; // net ID: TXPREEMPHASIS lsb: 0  msb: 3 INPUT
		NetFlow* TXRATE; // net ID: TXRATE lsb: 0  msb: 1 INPUT
		NetFlow* TXRESET; // net ID: TXRESET lsb: 0  msb: 0 INPUT
		NetFlow* TXSEQUENCE; // net ID: TXSEQUENCE lsb: 0  msb: 6 INPUT
		NetFlow* TXSTARTSEQ; // net ID: TXSTARTSEQ lsb: 0  msb: 0 INPUT
		NetFlow* TXSWING; // net ID: TXSWING lsb: 0  msb: 0 INPUT
		NetFlow* TXUSRCLK; // net ID: TXUSRCLK lsb: 0  msb: 0 INPUT
		NetFlow* TXUSRCLK2; // net ID: TXUSRCLK2 lsb: 0  msb: 0 INPUT
		NetFlow* USRCODEERR; // net ID: USRCODEERR lsb: 0  msb: 0 INPUT
		
		X_GTXE1(
			const char * name,
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_enum_t AC_CAP_DIS, // Default: "TRUE"
			parameter_string_t ALIGN_COMMA_WORD, // Default: 1
			parameter_string_t BGTEST_CFG, // Default: 2'b00
			parameter_string_t BIAS_CFG, // Default: 17'h00000
			parameter_string_t CDR_PH_ADJ_TIME, // Default: 5'b10100
			parameter_string_t CHAN_BOND_1_MAX_SKEW, // Default: 7
			parameter_string_t CHAN_BOND_2_MAX_SKEW, // Default: 1
			parameter_enum_t CHAN_BOND_KEEP_ALIGN, // Default: "FALSE"
			parameter_string_t CHAN_BOND_SEQ_1_1, // Default: 10'b0101111100
			parameter_string_t CHAN_BOND_SEQ_1_2, // Default: 10'b0001001010
			parameter_string_t CHAN_BOND_SEQ_1_3, // Default: 10'b0001001010
			parameter_string_t CHAN_BOND_SEQ_1_4, // Default: 10'b0110111100
			parameter_string_t CHAN_BOND_SEQ_1_ENABLE, // Default: 4'b1111
			parameter_string_t CHAN_BOND_SEQ_2_1, // Default: 10'b0100111100
			parameter_string_t CHAN_BOND_SEQ_2_2, // Default: 10'b0100111100
			parameter_string_t CHAN_BOND_SEQ_2_3, // Default: 10'b0110111100
			parameter_string_t CHAN_BOND_SEQ_2_4, // Default: 10'b0100111100
			parameter_string_t CHAN_BOND_SEQ_2_CFG, // Default: 5'b00000
			parameter_string_t CHAN_BOND_SEQ_2_ENABLE, // Default: 4'b1111
			parameter_enum_t CHAN_BOND_SEQ_2_USE, // Default: "FALSE"
			parameter_string_t CHAN_BOND_SEQ_LEN, // Default: 1
			parameter_enum_t CLK_CORRECT_USE, // Default: "TRUE"
			parameter_string_t CLK_COR_ADJ_LEN, // Default: 1
			parameter_string_t CLK_COR_DET_LEN, // Default: 1
			parameter_enum_t CLK_COR_INSERT_IDLE_FLAG, // Default: "FALSE"
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
			parameter_string_t CLK_COR_SEQ_2_1, // Default: 10'b0000000000
			parameter_string_t CLK_COR_SEQ_2_2, // Default: 10'b0000000000
			parameter_string_t CLK_COR_SEQ_2_3, // Default: 10'b0000000000
			parameter_string_t CLK_COR_SEQ_2_4, // Default: 10'b0000000000
			parameter_string_t CLK_COR_SEQ_2_ENABLE, // Default: 4'b1111
			parameter_enum_t CLK_COR_SEQ_2_USE, // Default: "FALSE"
			parameter_string_t CM_TRIM, // Default: 2'b01
			parameter_string_t COMMA_10B_ENABLE, // Default: 10'b1111111111
			parameter_enum_t COMMA_DOUBLE, // Default: "FALSE"
			parameter_string_t COM_BURST_VAL, // Default: 4'b1111
			parameter_enum_t DEC_MCOMMA_DETECT, // Default: "TRUE"
			parameter_enum_t DEC_PCOMMA_DETECT, // Default: "TRUE"
			parameter_enum_t DEC_VALID_COMMA_ONLY, // Default: "TRUE"
			parameter_string_t DFE_CAL_TIME, // Default: 5'b01100
			parameter_string_t DFE_CFG, // Default: 8'b00011011
			parameter_string_t GEARBOX_ENDEC, // Default: 3'b000
			parameter_enum_t GEN_RXUSRCLK, // Default: "TRUE"
			parameter_enum_t GEN_TXUSRCLK, // Default: "TRUE"
			parameter_enum_t GTX_CFG_PWRUP, // Default: "TRUE"
			parameter_string_t MCOMMA_10B_VALUE, // Default: 10'b1010000011
			parameter_enum_t MCOMMA_DETECT, // Default: "TRUE"
			parameter_string_t OOBDETECT_THRESHOLD, // Default: 3'b011
			parameter_enum_t PCI_EXPRESS_MODE, // Default: "FALSE"
			parameter_string_t PCOMMA_10B_VALUE, // Default: 10'b0101111100
			parameter_enum_t PCOMMA_DETECT, // Default: "TRUE"
			parameter_enum_t PMA_CAS_CLK_EN, // Default: "FALSE"
			parameter_string_t PMA_CDR_SCAN, // Default: 27'h640404C
			parameter_string_t PMA_CFG, // Default: 76'h0040000040000000003
			parameter_string_t PMA_RXSYNC_CFG, // Default: 7'h00
			parameter_string_t PMA_RX_CFG, // Default: 25'h05CE048
			parameter_string_t PMA_TX_CFG, // Default: 20'h00082
			parameter_string_t POWER_SAVE, // Default: 10'b0000110100
			parameter_enum_t RCV_TERM_GND, // Default: "FALSE"
			parameter_enum_t RCV_TERM_VTTRX, // Default: "TRUE"
			parameter_enum_t RXGEARBOX_USE, // Default: "FALSE"
			parameter_string_t RXPLL_COM_CFG, // Default: 24'h21680A
			parameter_string_t RXPLL_CP_CFG, // Default: 8'h00
			parameter_string_t RXPLL_DIVSEL45_FB, // Default: 5
			parameter_string_t RXPLL_DIVSEL_FB, // Default: 2
			parameter_string_t RXPLL_DIVSEL_OUT, // Default: 1
			parameter_string_t RXPLL_DIVSEL_REF, // Default: 1
			parameter_string_t RXPLL_LKDET_CFG, // Default: 3'b111
			parameter_string_t RXPRBSERR_LOOPBACK, // Default: 1'b0
			parameter_string_t RXRECCLK_CTRL, // Default: "RXRECCLKPCS"
			parameter_string_t RXRECCLK_DLY, // Default: 10'b0000000000
			parameter_string_t RXUSRCLK_DLY, // Default: 16'h0000
			parameter_enum_t RX_BUFFER_USE, // Default: "TRUE"
			parameter_string_t RX_CLK25_DIVIDER, // Default: 6
			parameter_string_t RX_DATA_WIDTH, // Default: 20
			parameter_enum_t RX_DECODE_SEQ_MATCH, // Default: "TRUE"
			parameter_string_t RX_DLYALIGN_CTRINC, // Default: 4'b0100
			parameter_string_t RX_DLYALIGN_EDGESET, // Default: 5'b00110
			parameter_string_t RX_DLYALIGN_LPFINC, // Default: 4'b0111
			parameter_string_t RX_DLYALIGN_MONSEL, // Default: 3'b000
			parameter_string_t RX_DLYALIGN_OVRDSETTING, // Default: 8'b00000000
			parameter_enum_t RX_EN_IDLE_HOLD_CDR, // Default: "FALSE"
			parameter_enum_t RX_EN_IDLE_HOLD_DFE, // Default: "TRUE"
			parameter_enum_t RX_EN_IDLE_RESET_BUF, // Default: "TRUE"
			parameter_enum_t RX_EN_IDLE_RESET_FR, // Default: "TRUE"
			parameter_enum_t RX_EN_IDLE_RESET_PH, // Default: "TRUE"
			parameter_enum_t RX_EN_MODE_RESET_BUF, // Default: "TRUE"
			parameter_enum_t RX_EN_RATE_RESET_BUF, // Default: "TRUE"
			parameter_enum_t RX_EN_REALIGN_RESET_BUF, // Default: "FALSE"
			parameter_enum_t RX_EN_REALIGN_RESET_BUF2, // Default: "FALSE"
			parameter_string_t RX_EYE_OFFSET, // Default: 8'h4C
			parameter_string_t RX_EYE_SCANMODE, // Default: 2'b00
			parameter_string_t RX_FIFO_ADDR_MODE, // Default: "FULL"
			parameter_string_t RX_IDLE_HI_CNT, // Default: 4'b1000
			parameter_string_t RX_IDLE_LO_CNT, // Default: 4'b0000
			parameter_enum_t RX_LOSS_OF_SYNC_FSM, // Default: "FALSE"
			parameter_string_t RX_LOS_INVALID_INCR, // Default: 1
			parameter_string_t RX_LOS_THRESHOLD, // Default: 4
			parameter_enum_t RX_OVERSAMPLE_MODE, // Default: "FALSE"
			parameter_string_t RX_SLIDE_AUTO_WAIT, // Default: 5
			parameter_string_t RX_SLIDE_MODE, // Default: "OFF"
			parameter_string_t RX_XCLK_SEL, // Default: "RXREC"
			parameter_string_t SAS_MAX_COMSAS, // Default: 52
			parameter_string_t SAS_MIN_COMSAS, // Default: 40
			parameter_string_t SATA_BURST_VAL, // Default: 3'b100
			parameter_string_t SATA_IDLE_VAL, // Default: 3'b100
			parameter_string_t SATA_MAX_BURST, // Default: 7
			parameter_string_t SATA_MAX_INIT, // Default: 22
			parameter_string_t SATA_MAX_WAKE, // Default: 7
			parameter_string_t SATA_MIN_BURST, // Default: 4
			parameter_string_t SATA_MIN_INIT, // Default: 12
			parameter_string_t SATA_MIN_WAKE, // Default: 4
			parameter_enum_t SHOW_REALIGN_COMMA, // Default: "TRUE"
			parameter_string_t SIM_GTXRESET_SPEEDUP, // Default: 1
			parameter_enum_t SIM_RECEIVER_DETECT_PASS, // Default: "TRUE"
			parameter_string_t SIM_RXREFCLK_SOURCE, // Default: 3'b000
			parameter_string_t SIM_TXREFCLK_SOURCE, // Default: 3'b000
			parameter_string_t SIM_TX_ELEC_IDLE_LEVEL, // Default: "X"
			parameter_string_t SIM_VERSION, // Default: "2.0"
			parameter_string_t TERMINATION_CTRL, // Default: 5'b10100
			parameter_enum_t TERMINATION_OVRD, // Default: "FALSE"
			parameter_string_t TRANS_TIME_FROM_P2, // Default: 12'h03C
			parameter_string_t TRANS_TIME_NON_P2, // Default: 8'h19
			parameter_string_t TRANS_TIME_RATE, // Default: 8'h0E
			parameter_string_t TRANS_TIME_TO_P2, // Default: 10'h064
			parameter_string_t TST_ATTR, // Default: 32'h00000000
			parameter_enum_t TXDRIVE_LOOPBACK_HIZ, // Default: "FALSE"
			parameter_enum_t TXDRIVE_LOOPBACK_PD, // Default: "FALSE"
			parameter_enum_t TXGEARBOX_USE, // Default: "FALSE"
			parameter_string_t TXOUTCLK_CTRL, // Default: "TXOUTCLKPCS"
			parameter_string_t TXOUTCLK_DLY, // Default: 10'b0000000000
			parameter_string_t TXPLL_COM_CFG, // Default: 24'h21680A
			parameter_string_t TXPLL_CP_CFG, // Default: 8'h00
			parameter_string_t TXPLL_DIVSEL45_FB, // Default: 5
			parameter_string_t TXPLL_DIVSEL_FB, // Default: 2
			parameter_string_t TXPLL_DIVSEL_OUT, // Default: 1
			parameter_string_t TXPLL_DIVSEL_REF, // Default: 1
			parameter_string_t TXPLL_LKDET_CFG, // Default: 3'b111
			parameter_string_t TXPLL_SATA, // Default: 2'b00
			parameter_enum_t TX_BUFFER_USE, // Default: "TRUE"
			parameter_string_t TX_BYTECLK_CFG, // Default: 6'h00
			parameter_string_t TX_CLK25_DIVIDER, // Default: 6
			parameter_string_t TX_CLK_SOURCE, // Default: "RXPLL"
			parameter_string_t TX_DATA_WIDTH, // Default: 20
			parameter_string_t TX_DEEMPH_0, // Default: 5'b11010
			parameter_string_t TX_DEEMPH_1, // Default: 5'b10000
			parameter_string_t TX_DETECT_RX_CFG, // Default: 14'h1832
			parameter_string_t TX_DLYALIGN_CTRINC, // Default: 4'b0100
			parameter_string_t TX_DLYALIGN_LPFINC, // Default: 4'b0110
			parameter_string_t TX_DLYALIGN_MONSEL, // Default: 3'b000
			parameter_string_t TX_DLYALIGN_OVRDSETTING, // Default: 8'b10000000
			parameter_string_t TX_DRIVE_MODE, // Default: "DIRECT"
			parameter_enum_t TX_EN_RATE_RESET_BUF, // Default: "TRUE"
			parameter_string_t TX_IDLE_ASSERT_DELAY, // Default: 3'b100
			parameter_string_t TX_IDLE_DEASSERT_DELAY, // Default: 3'b010
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
			parameter_enum_t TX_OVERSAMPLE_MODE, // Default: "FALSE"
			parameter_string_t TX_PMADATA_OPT, // Default: 1'b0
			parameter_string_t TX_TDCC_CFG, // Default: 2'b11
			parameter_string_t TX_USRCLK_CFG, // Default: 6'h00
			parameter_string_t TX_XCLK_SEL, // Default: "TXUSR"
			//Verilog Ports in definition order:
			NetFlow* COMFINISH, // net ID: COMFINISH lsb: 0  msb: 0 OUTPUT
			NetFlow* COMINITDET, // net ID: COMINITDET lsb: 0  msb: 0 OUTPUT
			NetFlow* COMSASDET, // net ID: COMSASDET lsb: 0  msb: 0 OUTPUT
			NetFlow* COMWAKEDET, // net ID: COMWAKEDET lsb: 0  msb: 0 OUTPUT
			NetFlow* DFECLKDLYADJMON, // net ID: DFECLKDLYADJMON lsb: 0  msb: 0 OUTPUT
			NetFlow* DFEEYEDACMON, // net ID: DFEEYEDACMON lsb: 0  msb: 0 OUTPUT
			NetFlow* DFESENSCAL, // net ID: DFESENSCAL lsb: 0  msb: 0 OUTPUT
			NetFlow* DFETAP1MONITOR, // net ID: DFETAP1MONITOR lsb: 0  msb: 0 OUTPUT
			NetFlow* DFETAP2MONITOR, // net ID: DFETAP2MONITOR lsb: 0  msb: 0 OUTPUT
			NetFlow* DFETAP3MONITOR, // net ID: DFETAP3MONITOR lsb: 0  msb: 0 OUTPUT
			NetFlow* DFETAP4MONITOR, // net ID: DFETAP4MONITOR lsb: 0  msb: 0 OUTPUT
			NetFlow* DRDY, // net ID: DRDY lsb: 0  msb: 0 OUTPUT
			NetFlow* DRPDO, // net ID: DRPDO lsb: 0  msb: 0 OUTPUT
			NetFlow* MGTREFCLKFAB, // net ID: MGTREFCLKFAB lsb: 0  msb: 0 OUTPUT
			NetFlow* PHYSTATUS, // net ID: PHYSTATUS lsb: 0  msb: 0 OUTPUT
			NetFlow* RXBUFSTATUS, // net ID: RXBUFSTATUS lsb: 0  msb: 0 OUTPUT
			NetFlow* RXBYTEISALIGNED, // net ID: RXBYTEISALIGNED lsb: 0  msb: 0 OUTPUT
			NetFlow* RXBYTEREALIGN, // net ID: RXBYTEREALIGN lsb: 0  msb: 0 OUTPUT
			NetFlow* RXCHANBONDSEQ, // net ID: RXCHANBONDSEQ lsb: 0  msb: 0 OUTPUT
			NetFlow* RXCHANISALIGNED, // net ID: RXCHANISALIGNED lsb: 0  msb: 0 OUTPUT
			NetFlow* RXCHANREALIGN, // net ID: RXCHANREALIGN lsb: 0  msb: 0 OUTPUT
			NetFlow* RXCHARISCOMMA, // net ID: RXCHARISCOMMA lsb: 0  msb: 0 OUTPUT
			NetFlow* RXCHARISK, // net ID: RXCHARISK lsb: 0  msb: 0 OUTPUT
			NetFlow* RXCHBONDO, // net ID: RXCHBONDO lsb: 0  msb: 0 OUTPUT
			NetFlow* RXCLKCORCNT, // net ID: RXCLKCORCNT lsb: 0  msb: 0 OUTPUT
			NetFlow* RXCOMMADET, // net ID: RXCOMMADET lsb: 0  msb: 0 OUTPUT
			NetFlow* RXDATA, // net ID: RXDATA lsb: 0  msb: 0 OUTPUT
			NetFlow* RXDATAVALID, // net ID: RXDATAVALID lsb: 0  msb: 0 OUTPUT
			NetFlow* RXDISPERR, // net ID: RXDISPERR lsb: 0  msb: 0 OUTPUT
			NetFlow* RXDLYALIGNMONITOR, // net ID: RXDLYALIGNMONITOR lsb: 0  msb: 0 OUTPUT
			NetFlow* RXELECIDLE, // net ID: RXELECIDLE lsb: 0  msb: 0 OUTPUT
			NetFlow* RXHEADER, // net ID: RXHEADER lsb: 0  msb: 0 OUTPUT
			NetFlow* RXHEADERVALID, // net ID: RXHEADERVALID lsb: 0  msb: 0 OUTPUT
			NetFlow* RXLOSSOFSYNC, // net ID: RXLOSSOFSYNC lsb: 0  msb: 0 OUTPUT
			NetFlow* RXNOTINTABLE, // net ID: RXNOTINTABLE lsb: 0  msb: 0 OUTPUT
			NetFlow* RXOVERSAMPLEERR, // net ID: RXOVERSAMPLEERR lsb: 0  msb: 0 OUTPUT
			NetFlow* RXPLLLKDET, // net ID: RXPLLLKDET lsb: 0  msb: 0 OUTPUT
			NetFlow* RXPRBSERR, // net ID: RXPRBSERR lsb: 0  msb: 0 OUTPUT
			NetFlow* RXRATEDONE, // net ID: RXRATEDONE lsb: 0  msb: 0 OUTPUT
			NetFlow* RXRECCLK, // net ID: RXRECCLK lsb: 0  msb: 0 OUTPUT
			NetFlow* RXRECCLKPCS, // net ID: RXRECCLKPCS lsb: 0  msb: 0 OUTPUT
			NetFlow* RXRESETDONE, // net ID: RXRESETDONE lsb: 0  msb: 0 OUTPUT
			NetFlow* RXRUNDISP, // net ID: RXRUNDISP lsb: 0  msb: 0 OUTPUT
			NetFlow* RXSTARTOFSEQ, // net ID: RXSTARTOFSEQ lsb: 0  msb: 0 OUTPUT
			NetFlow* RXSTATUS, // net ID: RXSTATUS lsb: 0  msb: 0 OUTPUT
			NetFlow* RXVALID, // net ID: RXVALID lsb: 0  msb: 0 OUTPUT
			NetFlow* TSTOUT, // net ID: TSTOUT lsb: 0  msb: 0 OUTPUT
			NetFlow* TXBUFSTATUS, // net ID: TXBUFSTATUS lsb: 0  msb: 0 OUTPUT
			NetFlow* TXDLYALIGNMONITOR, // net ID: TXDLYALIGNMONITOR lsb: 0  msb: 0 OUTPUT
			NetFlow* TXGEARBOXREADY, // net ID: TXGEARBOXREADY lsb: 0  msb: 0 OUTPUT
			NetFlow* TXKERR, // net ID: TXKERR lsb: 0  msb: 0 OUTPUT
			NetFlow* TXN, // net ID: TXN lsb: 0  msb: 0 OUTPUT
			NetFlow* TXOUTCLK, // net ID: TXOUTCLK lsb: 0  msb: 0 OUTPUT
			NetFlow* TXOUTCLKPCS, // net ID: TXOUTCLKPCS lsb: 0  msb: 0 OUTPUT
			NetFlow* TXP, // net ID: TXP lsb: 0  msb: 0 OUTPUT
			NetFlow* TXPLLLKDET, // net ID: TXPLLLKDET lsb: 0  msb: 0 OUTPUT
			NetFlow* TXRATEDONE, // net ID: TXRATEDONE lsb: 0  msb: 0 OUTPUT
			NetFlow* TXRESETDONE, // net ID: TXRESETDONE lsb: 0  msb: 0 OUTPUT
			NetFlow* TXRUNDISP, // net ID: TXRUNDISP lsb: 0  msb: 0 OUTPUT
			NetFlow* DADDR, // net ID: DADDR lsb: 0  msb: 7 INPUT
			NetFlow* DCLK, // net ID: DCLK lsb: 0  msb: 0 INPUT
			NetFlow* DEN, // net ID: DEN lsb: 0  msb: 0 INPUT
			NetFlow* DFECLKDLYADJ, // net ID: DFECLKDLYADJ lsb: 0  msb: 5 INPUT
			NetFlow* DFEDLYOVRD, // net ID: DFEDLYOVRD lsb: 0  msb: 0 INPUT
			NetFlow* DFETAP1, // net ID: DFETAP1 lsb: 0  msb: 4 INPUT
			NetFlow* DFETAP2, // net ID: DFETAP2 lsb: 0  msb: 4 INPUT
			NetFlow* DFETAP3, // net ID: DFETAP3 lsb: 0  msb: 3 INPUT
			NetFlow* DFETAP4, // net ID: DFETAP4 lsb: 0  msb: 3 INPUT
			NetFlow* DFETAPOVRD, // net ID: DFETAPOVRD lsb: 0  msb: 0 INPUT
			NetFlow* DI, // net ID: DI lsb: 0  msb: 15 INPUT
			NetFlow* DWE, // net ID: DWE lsb: 0  msb: 0 INPUT
			NetFlow* GATERXELECIDLE, // net ID: GATERXELECIDLE lsb: 0  msb: 0 INPUT
			NetFlow* GREFCLKRX, // net ID: GREFCLKRX lsb: 0  msb: 0 INPUT
			NetFlow* GREFCLKTX, // net ID: GREFCLKTX lsb: 0  msb: 0 INPUT
			NetFlow* GTXRXRESET, // net ID: GTXRXRESET lsb: 0  msb: 0 INPUT
			NetFlow* GTXTEST, // net ID: GTXTEST lsb: 0  msb: 12 INPUT
			NetFlow* GTXTXRESET, // net ID: GTXTXRESET lsb: 0  msb: 0 INPUT
			NetFlow* IGNORESIGDET, // net ID: IGNORESIGDET lsb: 0  msb: 0 INPUT
			NetFlow* LOOPBACK, // net ID: LOOPBACK lsb: 0  msb: 2 INPUT
			NetFlow* MGTREFCLKRX, // net ID: MGTREFCLKRX lsb: 0  msb: 1 INPUT
			NetFlow* MGTREFCLKTX, // net ID: MGTREFCLKTX lsb: 0  msb: 1 INPUT
			NetFlow* NORTHREFCLKRX, // net ID: NORTHREFCLKRX lsb: 0  msb: 1 INPUT
			NetFlow* NORTHREFCLKTX, // net ID: NORTHREFCLKTX lsb: 0  msb: 1 INPUT
			NetFlow* PERFCLKRX, // net ID: PERFCLKRX lsb: 0  msb: 0 INPUT
			NetFlow* PERFCLKTX, // net ID: PERFCLKTX lsb: 0  msb: 0 INPUT
			NetFlow* PLLRXRESET, // net ID: PLLRXRESET lsb: 0  msb: 0 INPUT
			NetFlow* PLLTXRESET, // net ID: PLLTXRESET lsb: 0  msb: 0 INPUT
			NetFlow* PRBSCNTRESET, // net ID: PRBSCNTRESET lsb: 0  msb: 0 INPUT
			NetFlow* RXBUFRESET, // net ID: RXBUFRESET lsb: 0  msb: 0 INPUT
			NetFlow* RXCDRRESET, // net ID: RXCDRRESET lsb: 0  msb: 0 INPUT
			NetFlow* RXCHBONDI, // net ID: RXCHBONDI lsb: 0  msb: 3 INPUT
			NetFlow* RXCHBONDLEVEL, // net ID: RXCHBONDLEVEL lsb: 0  msb: 2 INPUT
			NetFlow* RXCHBONDMASTER, // net ID: RXCHBONDMASTER lsb: 0  msb: 0 INPUT
			NetFlow* RXCHBONDSLAVE, // net ID: RXCHBONDSLAVE lsb: 0  msb: 0 INPUT
			NetFlow* RXCOMMADETUSE, // net ID: RXCOMMADETUSE lsb: 0  msb: 0 INPUT
			NetFlow* RXDEC8B10BUSE, // net ID: RXDEC8B10BUSE lsb: 0  msb: 0 INPUT
			NetFlow* RXDLYALIGNDISABLE, // net ID: RXDLYALIGNDISABLE lsb: 0  msb: 0 INPUT
			NetFlow* RXDLYALIGNMONENB, // net ID: RXDLYALIGNMONENB lsb: 0  msb: 0 INPUT
			NetFlow* RXDLYALIGNOVERRIDE, // net ID: RXDLYALIGNOVERRIDE lsb: 0  msb: 0 INPUT
			NetFlow* RXDLYALIGNRESET, // net ID: RXDLYALIGNRESET lsb: 0  msb: 0 INPUT
			NetFlow* RXDLYALIGNSWPPRECURB, // net ID: RXDLYALIGNSWPPRECURB lsb: 0  msb: 0 INPUT
			NetFlow* RXDLYALIGNUPDSW, // net ID: RXDLYALIGNUPDSW lsb: 0  msb: 0 INPUT
			NetFlow* RXENCHANSYNC, // net ID: RXENCHANSYNC lsb: 0  msb: 0 INPUT
			NetFlow* RXENMCOMMAALIGN, // net ID: RXENMCOMMAALIGN lsb: 0  msb: 0 INPUT
			NetFlow* RXENPCOMMAALIGN, // net ID: RXENPCOMMAALIGN lsb: 0  msb: 0 INPUT
			NetFlow* RXENPMAPHASEALIGN, // net ID: RXENPMAPHASEALIGN lsb: 0  msb: 0 INPUT
			NetFlow* RXENPRBSTST, // net ID: RXENPRBSTST lsb: 0  msb: 2 INPUT
			NetFlow* RXENSAMPLEALIGN, // net ID: RXENSAMPLEALIGN lsb: 0  msb: 0 INPUT
			NetFlow* RXEQMIX, // net ID: RXEQMIX lsb: 0  msb: 9 INPUT
			NetFlow* RXGEARBOXSLIP, // net ID: RXGEARBOXSLIP lsb: 0  msb: 0 INPUT
			NetFlow* RXN, // net ID: RXN lsb: 0  msb: 0 INPUT
			NetFlow* RXP, // net ID: RXP lsb: 0  msb: 0 INPUT
			NetFlow* RXPLLLKDETEN, // net ID: RXPLLLKDETEN lsb: 0  msb: 0 INPUT
			NetFlow* RXPLLPOWERDOWN, // net ID: RXPLLPOWERDOWN lsb: 0  msb: 0 INPUT
			NetFlow* RXPLLREFSELDY, // net ID: RXPLLREFSELDY lsb: 0  msb: 2 INPUT
			NetFlow* RXPMASETPHASE, // net ID: RXPMASETPHASE lsb: 0  msb: 0 INPUT
			NetFlow* RXPOLARITY, // net ID: RXPOLARITY lsb: 0  msb: 0 INPUT
			NetFlow* RXPOWERDOWN, // net ID: RXPOWERDOWN lsb: 0  msb: 1 INPUT
			NetFlow* RXRATE, // net ID: RXRATE lsb: 0  msb: 1 INPUT
			NetFlow* RXRESET, // net ID: RXRESET lsb: 0  msb: 0 INPUT
			NetFlow* RXSLIDE, // net ID: RXSLIDE lsb: 0  msb: 0 INPUT
			NetFlow* RXUSRCLK, // net ID: RXUSRCLK lsb: 0  msb: 0 INPUT
			NetFlow* RXUSRCLK2, // net ID: RXUSRCLK2 lsb: 0  msb: 0 INPUT
			NetFlow* SOUTHREFCLKRX, // net ID: SOUTHREFCLKRX lsb: 0  msb: 1 INPUT
			NetFlow* SOUTHREFCLKTX, // net ID: SOUTHREFCLKTX lsb: 0  msb: 1 INPUT
			NetFlow* TSTCLK0, // net ID: TSTCLK0 lsb: 0  msb: 0 INPUT
			NetFlow* TSTCLK1, // net ID: TSTCLK1 lsb: 0  msb: 0 INPUT
			NetFlow* TSTIN, // net ID: TSTIN lsb: 0  msb: 19 INPUT
			NetFlow* TXBUFDIFFCTRL, // net ID: TXBUFDIFFCTRL lsb: 0  msb: 2 INPUT
			NetFlow* TXBYPASS8B10B, // net ID: TXBYPASS8B10B lsb: 0  msb: 3 INPUT
			NetFlow* TXCHARDISPMODE, // net ID: TXCHARDISPMODE lsb: 0  msb: 3 INPUT
			NetFlow* TXCHARDISPVAL, // net ID: TXCHARDISPVAL lsb: 0  msb: 3 INPUT
			NetFlow* TXCHARISK, // net ID: TXCHARISK lsb: 0  msb: 3 INPUT
			NetFlow* TXCOMINIT, // net ID: TXCOMINIT lsb: 0  msb: 0 INPUT
			NetFlow* TXCOMSAS, // net ID: TXCOMSAS lsb: 0  msb: 0 INPUT
			NetFlow* TXCOMWAKE, // net ID: TXCOMWAKE lsb: 0  msb: 0 INPUT
			NetFlow* TXDATA, // net ID: TXDATA lsb: 0  msb: 31 INPUT
			NetFlow* TXDEEMPH, // net ID: TXDEEMPH lsb: 0  msb: 0 INPUT
			NetFlow* TXDETECTRX, // net ID: TXDETECTRX lsb: 0  msb: 0 INPUT
			NetFlow* TXDIFFCTRL, // net ID: TXDIFFCTRL lsb: 0  msb: 3 INPUT
			NetFlow* TXDLYALIGNDISABLE, // net ID: TXDLYALIGNDISABLE lsb: 0  msb: 0 INPUT
			NetFlow* TXDLYALIGNMONENB, // net ID: TXDLYALIGNMONENB lsb: 0  msb: 0 INPUT
			NetFlow* TXDLYALIGNOVERRIDE, // net ID: TXDLYALIGNOVERRIDE lsb: 0  msb: 0 INPUT
			NetFlow* TXDLYALIGNRESET, // net ID: TXDLYALIGNRESET lsb: 0  msb: 0 INPUT
			NetFlow* TXDLYALIGNUPDSW, // net ID: TXDLYALIGNUPDSW lsb: 0  msb: 0 INPUT
			NetFlow* TXELECIDLE, // net ID: TXELECIDLE lsb: 0  msb: 0 INPUT
			NetFlow* TXENC8B10BUSE, // net ID: TXENC8B10BUSE lsb: 0  msb: 0 INPUT
			NetFlow* TXENPMAPHASEALIGN, // net ID: TXENPMAPHASEALIGN lsb: 0  msb: 0 INPUT
			NetFlow* TXENPRBSTST, // net ID: TXENPRBSTST lsb: 0  msb: 2 INPUT
			NetFlow* TXHEADER, // net ID: TXHEADER lsb: 0  msb: 2 INPUT
			NetFlow* TXINHIBIT, // net ID: TXINHIBIT lsb: 0  msb: 0 INPUT
			NetFlow* TXMARGIN, // net ID: TXMARGIN lsb: 0  msb: 2 INPUT
			NetFlow* TXPDOWNASYNCH, // net ID: TXPDOWNASYNCH lsb: 0  msb: 0 INPUT
			NetFlow* TXPLLLKDETEN, // net ID: TXPLLLKDETEN lsb: 0  msb: 0 INPUT
			NetFlow* TXPLLPOWERDOWN, // net ID: TXPLLPOWERDOWN lsb: 0  msb: 0 INPUT
			NetFlow* TXPLLREFSELDY, // net ID: TXPLLREFSELDY lsb: 0  msb: 2 INPUT
			NetFlow* TXPMASETPHASE, // net ID: TXPMASETPHASE lsb: 0  msb: 0 INPUT
			NetFlow* TXPOLARITY, // net ID: TXPOLARITY lsb: 0  msb: 0 INPUT
			NetFlow* TXPOSTEMPHASIS, // net ID: TXPOSTEMPHASIS lsb: 0  msb: 4 INPUT
			NetFlow* TXPOWERDOWN, // net ID: TXPOWERDOWN lsb: 0  msb: 1 INPUT
			NetFlow* TXPRBSFORCEERR, // net ID: TXPRBSFORCEERR lsb: 0  msb: 0 INPUT
			NetFlow* TXPREEMPHASIS, // net ID: TXPREEMPHASIS lsb: 0  msb: 3 INPUT
			NetFlow* TXRATE, // net ID: TXRATE lsb: 0  msb: 1 INPUT
			NetFlow* TXRESET, // net ID: TXRESET lsb: 0  msb: 0 INPUT
			NetFlow* TXSEQUENCE, // net ID: TXSEQUENCE lsb: 0  msb: 6 INPUT
			NetFlow* TXSTARTSEQ, // net ID: TXSTARTSEQ lsb: 0  msb: 0 INPUT
			NetFlow* TXSWING, // net ID: TXSWING lsb: 0  msb: 0 INPUT
			NetFlow* TXUSRCLK, // net ID: TXUSRCLK lsb: 0  msb: 0 INPUT
			NetFlow* TXUSRCLK2, // net ID: TXUSRCLK2 lsb: 0  msb: 0 INPUT
			NetFlow* USRCODEERR // net ID: USRCODEERR lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
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
			this->COMFINISH = COMFINISH; // net ID: COMFINISH lsb: 0  msb: 0 OUTPUT
			this->COMINITDET = COMINITDET; // net ID: COMINITDET lsb: 0  msb: 0 OUTPUT
			this->COMSASDET = COMSASDET; // net ID: COMSASDET lsb: 0  msb: 0 OUTPUT
			this->COMWAKEDET = COMWAKEDET; // net ID: COMWAKEDET lsb: 0  msb: 0 OUTPUT
			this->DFECLKDLYADJMON = DFECLKDLYADJMON; // net ID: DFECLKDLYADJMON lsb: 0  msb: 0 OUTPUT
			this->DFEEYEDACMON = DFEEYEDACMON; // net ID: DFEEYEDACMON lsb: 0  msb: 0 OUTPUT
			this->DFESENSCAL = DFESENSCAL; // net ID: DFESENSCAL lsb: 0  msb: 0 OUTPUT
			this->DFETAP1MONITOR = DFETAP1MONITOR; // net ID: DFETAP1MONITOR lsb: 0  msb: 0 OUTPUT
			this->DFETAP2MONITOR = DFETAP2MONITOR; // net ID: DFETAP2MONITOR lsb: 0  msb: 0 OUTPUT
			this->DFETAP3MONITOR = DFETAP3MONITOR; // net ID: DFETAP3MONITOR lsb: 0  msb: 0 OUTPUT
			this->DFETAP4MONITOR = DFETAP4MONITOR; // net ID: DFETAP4MONITOR lsb: 0  msb: 0 OUTPUT
			this->DRDY = DRDY; // net ID: DRDY lsb: 0  msb: 0 OUTPUT
			this->DRPDO = DRPDO; // net ID: DRPDO lsb: 0  msb: 0 OUTPUT
			this->MGTREFCLKFAB = MGTREFCLKFAB; // net ID: MGTREFCLKFAB lsb: 0  msb: 0 OUTPUT
			this->PHYSTATUS = PHYSTATUS; // net ID: PHYSTATUS lsb: 0  msb: 0 OUTPUT
			this->RXBUFSTATUS = RXBUFSTATUS; // net ID: RXBUFSTATUS lsb: 0  msb: 0 OUTPUT
			this->RXBYTEISALIGNED = RXBYTEISALIGNED; // net ID: RXBYTEISALIGNED lsb: 0  msb: 0 OUTPUT
			this->RXBYTEREALIGN = RXBYTEREALIGN; // net ID: RXBYTEREALIGN lsb: 0  msb: 0 OUTPUT
			this->RXCHANBONDSEQ = RXCHANBONDSEQ; // net ID: RXCHANBONDSEQ lsb: 0  msb: 0 OUTPUT
			this->RXCHANISALIGNED = RXCHANISALIGNED; // net ID: RXCHANISALIGNED lsb: 0  msb: 0 OUTPUT
			this->RXCHANREALIGN = RXCHANREALIGN; // net ID: RXCHANREALIGN lsb: 0  msb: 0 OUTPUT
			this->RXCHARISCOMMA = RXCHARISCOMMA; // net ID: RXCHARISCOMMA lsb: 0  msb: 0 OUTPUT
			this->RXCHARISK = RXCHARISK; // net ID: RXCHARISK lsb: 0  msb: 0 OUTPUT
			this->RXCHBONDO = RXCHBONDO; // net ID: RXCHBONDO lsb: 0  msb: 0 OUTPUT
			this->RXCLKCORCNT = RXCLKCORCNT; // net ID: RXCLKCORCNT lsb: 0  msb: 0 OUTPUT
			this->RXCOMMADET = RXCOMMADET; // net ID: RXCOMMADET lsb: 0  msb: 0 OUTPUT
			this->RXDATA = RXDATA; // net ID: RXDATA lsb: 0  msb: 0 OUTPUT
			this->RXDATAVALID = RXDATAVALID; // net ID: RXDATAVALID lsb: 0  msb: 0 OUTPUT
			this->RXDISPERR = RXDISPERR; // net ID: RXDISPERR lsb: 0  msb: 0 OUTPUT
			this->RXDLYALIGNMONITOR = RXDLYALIGNMONITOR; // net ID: RXDLYALIGNMONITOR lsb: 0  msb: 0 OUTPUT
			this->RXELECIDLE = RXELECIDLE; // net ID: RXELECIDLE lsb: 0  msb: 0 OUTPUT
			this->RXHEADER = RXHEADER; // net ID: RXHEADER lsb: 0  msb: 0 OUTPUT
			this->RXHEADERVALID = RXHEADERVALID; // net ID: RXHEADERVALID lsb: 0  msb: 0 OUTPUT
			this->RXLOSSOFSYNC = RXLOSSOFSYNC; // net ID: RXLOSSOFSYNC lsb: 0  msb: 0 OUTPUT
			this->RXNOTINTABLE = RXNOTINTABLE; // net ID: RXNOTINTABLE lsb: 0  msb: 0 OUTPUT
			this->RXOVERSAMPLEERR = RXOVERSAMPLEERR; // net ID: RXOVERSAMPLEERR lsb: 0  msb: 0 OUTPUT
			this->RXPLLLKDET = RXPLLLKDET; // net ID: RXPLLLKDET lsb: 0  msb: 0 OUTPUT
			this->RXPRBSERR = RXPRBSERR; // net ID: RXPRBSERR lsb: 0  msb: 0 OUTPUT
			this->RXRATEDONE = RXRATEDONE; // net ID: RXRATEDONE lsb: 0  msb: 0 OUTPUT
			this->RXRECCLK = RXRECCLK; // net ID: RXRECCLK lsb: 0  msb: 0 OUTPUT
			this->RXRECCLKPCS = RXRECCLKPCS; // net ID: RXRECCLKPCS lsb: 0  msb: 0 OUTPUT
			this->RXRESETDONE = RXRESETDONE; // net ID: RXRESETDONE lsb: 0  msb: 0 OUTPUT
			this->RXRUNDISP = RXRUNDISP; // net ID: RXRUNDISP lsb: 0  msb: 0 OUTPUT
			this->RXSTARTOFSEQ = RXSTARTOFSEQ; // net ID: RXSTARTOFSEQ lsb: 0  msb: 0 OUTPUT
			this->RXSTATUS = RXSTATUS; // net ID: RXSTATUS lsb: 0  msb: 0 OUTPUT
			this->RXVALID = RXVALID; // net ID: RXVALID lsb: 0  msb: 0 OUTPUT
			this->TSTOUT = TSTOUT; // net ID: TSTOUT lsb: 0  msb: 0 OUTPUT
			this->TXBUFSTATUS = TXBUFSTATUS; // net ID: TXBUFSTATUS lsb: 0  msb: 0 OUTPUT
			this->TXDLYALIGNMONITOR = TXDLYALIGNMONITOR; // net ID: TXDLYALIGNMONITOR lsb: 0  msb: 0 OUTPUT
			this->TXGEARBOXREADY = TXGEARBOXREADY; // net ID: TXGEARBOXREADY lsb: 0  msb: 0 OUTPUT
			this->TXKERR = TXKERR; // net ID: TXKERR lsb: 0  msb: 0 OUTPUT
			this->TXN = TXN; // net ID: TXN lsb: 0  msb: 0 OUTPUT
			this->TXOUTCLK = TXOUTCLK; // net ID: TXOUTCLK lsb: 0  msb: 0 OUTPUT
			this->TXOUTCLKPCS = TXOUTCLKPCS; // net ID: TXOUTCLKPCS lsb: 0  msb: 0 OUTPUT
			this->TXP = TXP; // net ID: TXP lsb: 0  msb: 0 OUTPUT
			this->TXPLLLKDET = TXPLLLKDET; // net ID: TXPLLLKDET lsb: 0  msb: 0 OUTPUT
			this->TXRATEDONE = TXRATEDONE; // net ID: TXRATEDONE lsb: 0  msb: 0 OUTPUT
			this->TXRESETDONE = TXRESETDONE; // net ID: TXRESETDONE lsb: 0  msb: 0 OUTPUT
			this->TXRUNDISP = TXRUNDISP; // net ID: TXRUNDISP lsb: 0  msb: 0 OUTPUT
			this->DADDR = DADDR; // net ID: DADDR lsb: 0  msb: 7 INPUT
			this->DCLK = DCLK; // net ID: DCLK lsb: 0  msb: 0 INPUT
			this->DEN = DEN; // net ID: DEN lsb: 0  msb: 0 INPUT
			this->DFECLKDLYADJ = DFECLKDLYADJ; // net ID: DFECLKDLYADJ lsb: 0  msb: 5 INPUT
			this->DFEDLYOVRD = DFEDLYOVRD; // net ID: DFEDLYOVRD lsb: 0  msb: 0 INPUT
			this->DFETAP1 = DFETAP1; // net ID: DFETAP1 lsb: 0  msb: 4 INPUT
			this->DFETAP2 = DFETAP2; // net ID: DFETAP2 lsb: 0  msb: 4 INPUT
			this->DFETAP3 = DFETAP3; // net ID: DFETAP3 lsb: 0  msb: 3 INPUT
			this->DFETAP4 = DFETAP4; // net ID: DFETAP4 lsb: 0  msb: 3 INPUT
			this->DFETAPOVRD = DFETAPOVRD; // net ID: DFETAPOVRD lsb: 0  msb: 0 INPUT
			this->DI = DI; // net ID: DI lsb: 0  msb: 15 INPUT
			this->DWE = DWE; // net ID: DWE lsb: 0  msb: 0 INPUT
			this->GATERXELECIDLE = GATERXELECIDLE; // net ID: GATERXELECIDLE lsb: 0  msb: 0 INPUT
			this->GREFCLKRX = GREFCLKRX; // net ID: GREFCLKRX lsb: 0  msb: 0 INPUT
			this->GREFCLKTX = GREFCLKTX; // net ID: GREFCLKTX lsb: 0  msb: 0 INPUT
			this->GTXRXRESET = GTXRXRESET; // net ID: GTXRXRESET lsb: 0  msb: 0 INPUT
			this->GTXTEST = GTXTEST; // net ID: GTXTEST lsb: 0  msb: 12 INPUT
			this->GTXTXRESET = GTXTXRESET; // net ID: GTXTXRESET lsb: 0  msb: 0 INPUT
			this->IGNORESIGDET = IGNORESIGDET; // net ID: IGNORESIGDET lsb: 0  msb: 0 INPUT
			this->LOOPBACK = LOOPBACK; // net ID: LOOPBACK lsb: 0  msb: 2 INPUT
			this->MGTREFCLKRX = MGTREFCLKRX; // net ID: MGTREFCLKRX lsb: 0  msb: 1 INPUT
			this->MGTREFCLKTX = MGTREFCLKTX; // net ID: MGTREFCLKTX lsb: 0  msb: 1 INPUT
			this->NORTHREFCLKRX = NORTHREFCLKRX; // net ID: NORTHREFCLKRX lsb: 0  msb: 1 INPUT
			this->NORTHREFCLKTX = NORTHREFCLKTX; // net ID: NORTHREFCLKTX lsb: 0  msb: 1 INPUT
			this->PERFCLKRX = PERFCLKRX; // net ID: PERFCLKRX lsb: 0  msb: 0 INPUT
			this->PERFCLKTX = PERFCLKTX; // net ID: PERFCLKTX lsb: 0  msb: 0 INPUT
			this->PLLRXRESET = PLLRXRESET; // net ID: PLLRXRESET lsb: 0  msb: 0 INPUT
			this->PLLTXRESET = PLLTXRESET; // net ID: PLLTXRESET lsb: 0  msb: 0 INPUT
			this->PRBSCNTRESET = PRBSCNTRESET; // net ID: PRBSCNTRESET lsb: 0  msb: 0 INPUT
			this->RXBUFRESET = RXBUFRESET; // net ID: RXBUFRESET lsb: 0  msb: 0 INPUT
			this->RXCDRRESET = RXCDRRESET; // net ID: RXCDRRESET lsb: 0  msb: 0 INPUT
			this->RXCHBONDI = RXCHBONDI; // net ID: RXCHBONDI lsb: 0  msb: 3 INPUT
			this->RXCHBONDLEVEL = RXCHBONDLEVEL; // net ID: RXCHBONDLEVEL lsb: 0  msb: 2 INPUT
			this->RXCHBONDMASTER = RXCHBONDMASTER; // net ID: RXCHBONDMASTER lsb: 0  msb: 0 INPUT
			this->RXCHBONDSLAVE = RXCHBONDSLAVE; // net ID: RXCHBONDSLAVE lsb: 0  msb: 0 INPUT
			this->RXCOMMADETUSE = RXCOMMADETUSE; // net ID: RXCOMMADETUSE lsb: 0  msb: 0 INPUT
			this->RXDEC8B10BUSE = RXDEC8B10BUSE; // net ID: RXDEC8B10BUSE lsb: 0  msb: 0 INPUT
			this->RXDLYALIGNDISABLE = RXDLYALIGNDISABLE; // net ID: RXDLYALIGNDISABLE lsb: 0  msb: 0 INPUT
			this->RXDLYALIGNMONENB = RXDLYALIGNMONENB; // net ID: RXDLYALIGNMONENB lsb: 0  msb: 0 INPUT
			this->RXDLYALIGNOVERRIDE = RXDLYALIGNOVERRIDE; // net ID: RXDLYALIGNOVERRIDE lsb: 0  msb: 0 INPUT
			this->RXDLYALIGNRESET = RXDLYALIGNRESET; // net ID: RXDLYALIGNRESET lsb: 0  msb: 0 INPUT
			this->RXDLYALIGNSWPPRECURB = RXDLYALIGNSWPPRECURB; // net ID: RXDLYALIGNSWPPRECURB lsb: 0  msb: 0 INPUT
			this->RXDLYALIGNUPDSW = RXDLYALIGNUPDSW; // net ID: RXDLYALIGNUPDSW lsb: 0  msb: 0 INPUT
			this->RXENCHANSYNC = RXENCHANSYNC; // net ID: RXENCHANSYNC lsb: 0  msb: 0 INPUT
			this->RXENMCOMMAALIGN = RXENMCOMMAALIGN; // net ID: RXENMCOMMAALIGN lsb: 0  msb: 0 INPUT
			this->RXENPCOMMAALIGN = RXENPCOMMAALIGN; // net ID: RXENPCOMMAALIGN lsb: 0  msb: 0 INPUT
			this->RXENPMAPHASEALIGN = RXENPMAPHASEALIGN; // net ID: RXENPMAPHASEALIGN lsb: 0  msb: 0 INPUT
			this->RXENPRBSTST = RXENPRBSTST; // net ID: RXENPRBSTST lsb: 0  msb: 2 INPUT
			this->RXENSAMPLEALIGN = RXENSAMPLEALIGN; // net ID: RXENSAMPLEALIGN lsb: 0  msb: 0 INPUT
			this->RXEQMIX = RXEQMIX; // net ID: RXEQMIX lsb: 0  msb: 9 INPUT
			this->RXGEARBOXSLIP = RXGEARBOXSLIP; // net ID: RXGEARBOXSLIP lsb: 0  msb: 0 INPUT
			this->RXN = RXN; // net ID: RXN lsb: 0  msb: 0 INPUT
			this->RXP = RXP; // net ID: RXP lsb: 0  msb: 0 INPUT
			this->RXPLLLKDETEN = RXPLLLKDETEN; // net ID: RXPLLLKDETEN lsb: 0  msb: 0 INPUT
			this->RXPLLPOWERDOWN = RXPLLPOWERDOWN; // net ID: RXPLLPOWERDOWN lsb: 0  msb: 0 INPUT
			this->RXPLLREFSELDY = RXPLLREFSELDY; // net ID: RXPLLREFSELDY lsb: 0  msb: 2 INPUT
			this->RXPMASETPHASE = RXPMASETPHASE; // net ID: RXPMASETPHASE lsb: 0  msb: 0 INPUT
			this->RXPOLARITY = RXPOLARITY; // net ID: RXPOLARITY lsb: 0  msb: 0 INPUT
			this->RXPOWERDOWN = RXPOWERDOWN; // net ID: RXPOWERDOWN lsb: 0  msb: 1 INPUT
			this->RXRATE = RXRATE; // net ID: RXRATE lsb: 0  msb: 1 INPUT
			this->RXRESET = RXRESET; // net ID: RXRESET lsb: 0  msb: 0 INPUT
			this->RXSLIDE = RXSLIDE; // net ID: RXSLIDE lsb: 0  msb: 0 INPUT
			this->RXUSRCLK = RXUSRCLK; // net ID: RXUSRCLK lsb: 0  msb: 0 INPUT
			this->RXUSRCLK2 = RXUSRCLK2; // net ID: RXUSRCLK2 lsb: 0  msb: 0 INPUT
			this->SOUTHREFCLKRX = SOUTHREFCLKRX; // net ID: SOUTHREFCLKRX lsb: 0  msb: 1 INPUT
			this->SOUTHREFCLKTX = SOUTHREFCLKTX; // net ID: SOUTHREFCLKTX lsb: 0  msb: 1 INPUT
			this->TSTCLK0 = TSTCLK0; // net ID: TSTCLK0 lsb: 0  msb: 0 INPUT
			this->TSTCLK1 = TSTCLK1; // net ID: TSTCLK1 lsb: 0  msb: 0 INPUT
			this->TSTIN = TSTIN; // net ID: TSTIN lsb: 0  msb: 19 INPUT
			this->TXBUFDIFFCTRL = TXBUFDIFFCTRL; // net ID: TXBUFDIFFCTRL lsb: 0  msb: 2 INPUT
			this->TXBYPASS8B10B = TXBYPASS8B10B; // net ID: TXBYPASS8B10B lsb: 0  msb: 3 INPUT
			this->TXCHARDISPMODE = TXCHARDISPMODE; // net ID: TXCHARDISPMODE lsb: 0  msb: 3 INPUT
			this->TXCHARDISPVAL = TXCHARDISPVAL; // net ID: TXCHARDISPVAL lsb: 0  msb: 3 INPUT
			this->TXCHARISK = TXCHARISK; // net ID: TXCHARISK lsb: 0  msb: 3 INPUT
			this->TXCOMINIT = TXCOMINIT; // net ID: TXCOMINIT lsb: 0  msb: 0 INPUT
			this->TXCOMSAS = TXCOMSAS; // net ID: TXCOMSAS lsb: 0  msb: 0 INPUT
			this->TXCOMWAKE = TXCOMWAKE; // net ID: TXCOMWAKE lsb: 0  msb: 0 INPUT
			this->TXDATA = TXDATA; // net ID: TXDATA lsb: 0  msb: 31 INPUT
			this->TXDEEMPH = TXDEEMPH; // net ID: TXDEEMPH lsb: 0  msb: 0 INPUT
			this->TXDETECTRX = TXDETECTRX; // net ID: TXDETECTRX lsb: 0  msb: 0 INPUT
			this->TXDIFFCTRL = TXDIFFCTRL; // net ID: TXDIFFCTRL lsb: 0  msb: 3 INPUT
			this->TXDLYALIGNDISABLE = TXDLYALIGNDISABLE; // net ID: TXDLYALIGNDISABLE lsb: 0  msb: 0 INPUT
			this->TXDLYALIGNMONENB = TXDLYALIGNMONENB; // net ID: TXDLYALIGNMONENB lsb: 0  msb: 0 INPUT
			this->TXDLYALIGNOVERRIDE = TXDLYALIGNOVERRIDE; // net ID: TXDLYALIGNOVERRIDE lsb: 0  msb: 0 INPUT
			this->TXDLYALIGNRESET = TXDLYALIGNRESET; // net ID: TXDLYALIGNRESET lsb: 0  msb: 0 INPUT
			this->TXDLYALIGNUPDSW = TXDLYALIGNUPDSW; // net ID: TXDLYALIGNUPDSW lsb: 0  msb: 0 INPUT
			this->TXELECIDLE = TXELECIDLE; // net ID: TXELECIDLE lsb: 0  msb: 0 INPUT
			this->TXENC8B10BUSE = TXENC8B10BUSE; // net ID: TXENC8B10BUSE lsb: 0  msb: 0 INPUT
			this->TXENPMAPHASEALIGN = TXENPMAPHASEALIGN; // net ID: TXENPMAPHASEALIGN lsb: 0  msb: 0 INPUT
			this->TXENPRBSTST = TXENPRBSTST; // net ID: TXENPRBSTST lsb: 0  msb: 2 INPUT
			this->TXHEADER = TXHEADER; // net ID: TXHEADER lsb: 0  msb: 2 INPUT
			this->TXINHIBIT = TXINHIBIT; // net ID: TXINHIBIT lsb: 0  msb: 0 INPUT
			this->TXMARGIN = TXMARGIN; // net ID: TXMARGIN lsb: 0  msb: 2 INPUT
			this->TXPDOWNASYNCH = TXPDOWNASYNCH; // net ID: TXPDOWNASYNCH lsb: 0  msb: 0 INPUT
			this->TXPLLLKDETEN = TXPLLLKDETEN; // net ID: TXPLLLKDETEN lsb: 0  msb: 0 INPUT
			this->TXPLLPOWERDOWN = TXPLLPOWERDOWN; // net ID: TXPLLPOWERDOWN lsb: 0  msb: 0 INPUT
			this->TXPLLREFSELDY = TXPLLREFSELDY; // net ID: TXPLLREFSELDY lsb: 0  msb: 2 INPUT
			this->TXPMASETPHASE = TXPMASETPHASE; // net ID: TXPMASETPHASE lsb: 0  msb: 0 INPUT
			this->TXPOLARITY = TXPOLARITY; // net ID: TXPOLARITY lsb: 0  msb: 0 INPUT
			this->TXPOSTEMPHASIS = TXPOSTEMPHASIS; // net ID: TXPOSTEMPHASIS lsb: 0  msb: 4 INPUT
			this->TXPOWERDOWN = TXPOWERDOWN; // net ID: TXPOWERDOWN lsb: 0  msb: 1 INPUT
			this->TXPRBSFORCEERR = TXPRBSFORCEERR; // net ID: TXPRBSFORCEERR lsb: 0  msb: 0 INPUT
			this->TXPREEMPHASIS = TXPREEMPHASIS; // net ID: TXPREEMPHASIS lsb: 0  msb: 3 INPUT
			this->TXRATE = TXRATE; // net ID: TXRATE lsb: 0  msb: 1 INPUT
			this->TXRESET = TXRESET; // net ID: TXRESET lsb: 0  msb: 0 INPUT
			this->TXSEQUENCE = TXSEQUENCE; // net ID: TXSEQUENCE lsb: 0  msb: 6 INPUT
			this->TXSTARTSEQ = TXSTARTSEQ; // net ID: TXSTARTSEQ lsb: 0  msb: 0 INPUT
			this->TXSWING = TXSWING; // net ID: TXSWING lsb: 0  msb: 0 INPUT
			this->TXUSRCLK = TXUSRCLK; // net ID: TXUSRCLK lsb: 0  msb: 0 INPUT
			this->TXUSRCLK2 = TXUSRCLK2; // net ID: TXUSRCLK2 lsb: 0  msb: 0 INPUT
			this->USRCODEERR = USRCODEERR; // net ID: USRCODEERR lsb: 0  msb: 0 INPUT
			
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
