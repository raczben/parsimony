/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_GTPE2_CHANNEL_H
#define X_GTPE2_CHANNEL_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_GTPE2_CHANNEL: public Primitive{

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
		NetFlow* DMONITOROUT_A14_B; // net ID: DMONITOROUT lsb: 0  msb: 14 OUTPUT
		NetFlow* DMONITOROUT_A13_B; // net ID: DMONITOROUT lsb: 0  msb: 14 OUTPUT
		NetFlow* DMONITOROUT_A12_B; // net ID: DMONITOROUT lsb: 0  msb: 14 OUTPUT
		NetFlow* DMONITOROUT_A11_B; // net ID: DMONITOROUT lsb: 0  msb: 14 OUTPUT
		NetFlow* DMONITOROUT_A10_B; // net ID: DMONITOROUT lsb: 0  msb: 14 OUTPUT
		NetFlow* DMONITOROUT_A9_B; // net ID: DMONITOROUT lsb: 0  msb: 14 OUTPUT
		NetFlow* DMONITOROUT_A8_B; // net ID: DMONITOROUT lsb: 0  msb: 14 OUTPUT
		NetFlow* DMONITOROUT_A7_B; // net ID: DMONITOROUT lsb: 0  msb: 14 OUTPUT
		NetFlow* DMONITOROUT_A6_B; // net ID: DMONITOROUT lsb: 0  msb: 14 OUTPUT
		NetFlow* DMONITOROUT_A5_B; // net ID: DMONITOROUT lsb: 0  msb: 14 OUTPUT
		NetFlow* DMONITOROUT_A4_B; // net ID: DMONITOROUT lsb: 0  msb: 14 OUTPUT
		NetFlow* DMONITOROUT_A3_B; // net ID: DMONITOROUT lsb: 0  msb: 14 OUTPUT
		NetFlow* DMONITOROUT_A2_B; // net ID: DMONITOROUT lsb: 0  msb: 14 OUTPUT
		NetFlow* DMONITOROUT_A1_B; // net ID: DMONITOROUT lsb: 0  msb: 14 OUTPUT
		NetFlow* DMONITOROUT_A0_B; // net ID: DMONITOROUT lsb: 0  msb: 14 OUTPUT
		NetFlow* DRPDO_A15_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
		NetFlow* DRPDO_A14_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
		NetFlow* DRPDO_A13_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
		NetFlow* DRPDO_A12_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
		NetFlow* DRPDO_A11_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
		NetFlow* DRPDO_A10_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
		NetFlow* DRPDO_A9_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
		NetFlow* DRPDO_A8_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
		NetFlow* DRPDO_A7_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
		NetFlow* DRPDO_A6_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
		NetFlow* DRPDO_A5_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
		NetFlow* DRPDO_A4_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
		NetFlow* DRPDO_A3_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
		NetFlow* DRPDO_A2_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
		NetFlow* DRPDO_A1_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
		NetFlow* DRPDO_A0_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
		NetFlow* DRPRDY_A0_B; // net ID: DRPRDY lsb: 0  msb: 0 OUTPUT
		NetFlow* EYESCANDATAERROR_A0_B; // net ID: EYESCANDATAERROR lsb: 0  msb: 0 OUTPUT
		NetFlow* GTPTXN_A0_B; // net ID: GTPTXN lsb: 0  msb: 0 OUTPUT
		NetFlow* GTPTXP_A0_B; // net ID: GTPTXP lsb: 0  msb: 0 OUTPUT
		NetFlow* PCSRSVDOUT_A15_B; // net ID: PCSRSVDOUT lsb: 0  msb: 15 OUTPUT
		NetFlow* PCSRSVDOUT_A14_B; // net ID: PCSRSVDOUT lsb: 0  msb: 15 OUTPUT
		NetFlow* PCSRSVDOUT_A13_B; // net ID: PCSRSVDOUT lsb: 0  msb: 15 OUTPUT
		NetFlow* PCSRSVDOUT_A12_B; // net ID: PCSRSVDOUT lsb: 0  msb: 15 OUTPUT
		NetFlow* PCSRSVDOUT_A11_B; // net ID: PCSRSVDOUT lsb: 0  msb: 15 OUTPUT
		NetFlow* PCSRSVDOUT_A10_B; // net ID: PCSRSVDOUT lsb: 0  msb: 15 OUTPUT
		NetFlow* PCSRSVDOUT_A9_B; // net ID: PCSRSVDOUT lsb: 0  msb: 15 OUTPUT
		NetFlow* PCSRSVDOUT_A8_B; // net ID: PCSRSVDOUT lsb: 0  msb: 15 OUTPUT
		NetFlow* PCSRSVDOUT_A7_B; // net ID: PCSRSVDOUT lsb: 0  msb: 15 OUTPUT
		NetFlow* PCSRSVDOUT_A6_B; // net ID: PCSRSVDOUT lsb: 0  msb: 15 OUTPUT
		NetFlow* PCSRSVDOUT_A5_B; // net ID: PCSRSVDOUT lsb: 0  msb: 15 OUTPUT
		NetFlow* PCSRSVDOUT_A4_B; // net ID: PCSRSVDOUT lsb: 0  msb: 15 OUTPUT
		NetFlow* PCSRSVDOUT_A3_B; // net ID: PCSRSVDOUT lsb: 0  msb: 15 OUTPUT
		NetFlow* PCSRSVDOUT_A2_B; // net ID: PCSRSVDOUT lsb: 0  msb: 15 OUTPUT
		NetFlow* PCSRSVDOUT_A1_B; // net ID: PCSRSVDOUT lsb: 0  msb: 15 OUTPUT
		NetFlow* PCSRSVDOUT_A0_B; // net ID: PCSRSVDOUT lsb: 0  msb: 15 OUTPUT
		NetFlow* PHYSTATUS_A0_B; // net ID: PHYSTATUS lsb: 0  msb: 0 OUTPUT
		NetFlow* PMARSVDOUT0_A0_B; // net ID: PMARSVDOUT0 lsb: 0  msb: 0 OUTPUT
		NetFlow* PMARSVDOUT1_A0_B; // net ID: PMARSVDOUT1 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXBUFSTATUS_A2_B; // net ID: RXBUFSTATUS lsb: 0  msb: 2 OUTPUT
		NetFlow* RXBUFSTATUS_A1_B; // net ID: RXBUFSTATUS lsb: 0  msb: 2 OUTPUT
		NetFlow* RXBUFSTATUS_A0_B; // net ID: RXBUFSTATUS lsb: 0  msb: 2 OUTPUT
		NetFlow* RXBYTEISALIGNED_A0_B; // net ID: RXBYTEISALIGNED lsb: 0  msb: 0 OUTPUT
		NetFlow* RXBYTEREALIGN_A0_B; // net ID: RXBYTEREALIGN lsb: 0  msb: 0 OUTPUT
		NetFlow* RXCDRLOCK_A0_B; // net ID: RXCDRLOCK lsb: 0  msb: 0 OUTPUT
		NetFlow* RXCHANBONDSEQ_A0_B; // net ID: RXCHANBONDSEQ lsb: 0  msb: 0 OUTPUT
		NetFlow* RXCHANISALIGNED_A0_B; // net ID: RXCHANISALIGNED lsb: 0  msb: 0 OUTPUT
		NetFlow* RXCHANREALIGN_A0_B; // net ID: RXCHANREALIGN lsb: 0  msb: 0 OUTPUT
		NetFlow* RXCHARISCOMMA_A3_B; // net ID: RXCHARISCOMMA lsb: 0  msb: 3 OUTPUT
		NetFlow* RXCHARISCOMMA_A2_B; // net ID: RXCHARISCOMMA lsb: 0  msb: 3 OUTPUT
		NetFlow* RXCHARISCOMMA_A1_B; // net ID: RXCHARISCOMMA lsb: 0  msb: 3 OUTPUT
		NetFlow* RXCHARISCOMMA_A0_B; // net ID: RXCHARISCOMMA lsb: 0  msb: 3 OUTPUT
		NetFlow* RXCHARISK_A3_B; // net ID: RXCHARISK lsb: 0  msb: 3 OUTPUT
		NetFlow* RXCHARISK_A2_B; // net ID: RXCHARISK lsb: 0  msb: 3 OUTPUT
		NetFlow* RXCHARISK_A1_B; // net ID: RXCHARISK lsb: 0  msb: 3 OUTPUT
		NetFlow* RXCHARISK_A0_B; // net ID: RXCHARISK lsb: 0  msb: 3 OUTPUT
		NetFlow* RXCHBONDO_A3_B; // net ID: RXCHBONDO lsb: 0  msb: 3 OUTPUT
		NetFlow* RXCHBONDO_A2_B; // net ID: RXCHBONDO lsb: 0  msb: 3 OUTPUT
		NetFlow* RXCHBONDO_A1_B; // net ID: RXCHBONDO lsb: 0  msb: 3 OUTPUT
		NetFlow* RXCHBONDO_A0_B; // net ID: RXCHBONDO lsb: 0  msb: 3 OUTPUT
		NetFlow* RXCLKCORCNT_A1_B; // net ID: RXCLKCORCNT lsb: 0  msb: 1 OUTPUT
		NetFlow* RXCLKCORCNT_A0_B; // net ID: RXCLKCORCNT lsb: 0  msb: 1 OUTPUT
		NetFlow* RXCOMINITDET_A0_B; // net ID: RXCOMINITDET lsb: 0  msb: 0 OUTPUT
		NetFlow* RXCOMMADET_A0_B; // net ID: RXCOMMADET lsb: 0  msb: 0 OUTPUT
		NetFlow* RXCOMSASDET_A0_B; // net ID: RXCOMSASDET lsb: 0  msb: 0 OUTPUT
		NetFlow* RXCOMWAKEDET_A0_B; // net ID: RXCOMWAKEDET lsb: 0  msb: 0 OUTPUT
		NetFlow* RXDATA_A31_B; // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA_A30_B; // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA_A29_B; // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA_A28_B; // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA_A27_B; // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA_A26_B; // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA_A25_B; // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA_A24_B; // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA_A23_B; // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA_A22_B; // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA_A21_B; // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA_A20_B; // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA_A19_B; // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA_A18_B; // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA_A17_B; // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA_A16_B; // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA_A15_B; // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA_A14_B; // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA_A13_B; // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA_A12_B; // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA_A11_B; // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA_A10_B; // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA_A9_B; // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA_A8_B; // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA_A7_B; // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA_A6_B; // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA_A5_B; // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA_A4_B; // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA_A3_B; // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA_A2_B; // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA_A1_B; // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATA_A0_B; // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
		NetFlow* RXDATAVALID_A1_B; // net ID: RXDATAVALID lsb: 0  msb: 1 OUTPUT
		NetFlow* RXDATAVALID_A0_B; // net ID: RXDATAVALID lsb: 0  msb: 1 OUTPUT
		NetFlow* RXDISPERR_A3_B; // net ID: RXDISPERR lsb: 0  msb: 3 OUTPUT
		NetFlow* RXDISPERR_A2_B; // net ID: RXDISPERR lsb: 0  msb: 3 OUTPUT
		NetFlow* RXDISPERR_A1_B; // net ID: RXDISPERR lsb: 0  msb: 3 OUTPUT
		NetFlow* RXDISPERR_A0_B; // net ID: RXDISPERR lsb: 0  msb: 3 OUTPUT
		NetFlow* RXDLYSRESETDONE_A0_B; // net ID: RXDLYSRESETDONE lsb: 0  msb: 0 OUTPUT
		NetFlow* RXELECIDLE_A0_B; // net ID: RXELECIDLE lsb: 0  msb: 0 OUTPUT
		NetFlow* RXHEADER_A2_B; // net ID: RXHEADER lsb: 0  msb: 2 OUTPUT
		NetFlow* RXHEADER_A1_B; // net ID: RXHEADER lsb: 0  msb: 2 OUTPUT
		NetFlow* RXHEADER_A0_B; // net ID: RXHEADER lsb: 0  msb: 2 OUTPUT
		NetFlow* RXHEADERVALID_A0_B; // net ID: RXHEADERVALID lsb: 0  msb: 0 OUTPUT
		NetFlow* RXNOTINTABLE_A3_B; // net ID: RXNOTINTABLE lsb: 0  msb: 3 OUTPUT
		NetFlow* RXNOTINTABLE_A2_B; // net ID: RXNOTINTABLE lsb: 0  msb: 3 OUTPUT
		NetFlow* RXNOTINTABLE_A1_B; // net ID: RXNOTINTABLE lsb: 0  msb: 3 OUTPUT
		NetFlow* RXNOTINTABLE_A0_B; // net ID: RXNOTINTABLE lsb: 0  msb: 3 OUTPUT
		NetFlow* RXOSINTDONE_A0_B; // net ID: RXOSINTDONE lsb: 0  msb: 0 OUTPUT
		NetFlow* RXOSINTSTARTED_A0_B; // net ID: RXOSINTSTARTED lsb: 0  msb: 0 OUTPUT
		NetFlow* RXOSINTSTROBEDONE_A0_B; // net ID: RXOSINTSTROBEDONE lsb: 0  msb: 0 OUTPUT
		NetFlow* RXOSINTSTROBESTARTED_A0_B; // net ID: RXOSINTSTROBESTARTED lsb: 0  msb: 0 OUTPUT
		NetFlow* RXOUTCLK_A0_B; // net ID: RXOUTCLK lsb: 0  msb: 0 OUTPUT
		NetFlow* RXOUTCLKFABRIC_A0_B; // net ID: RXOUTCLKFABRIC lsb: 0  msb: 0 OUTPUT
		NetFlow* RXOUTCLKPCS_A0_B; // net ID: RXOUTCLKPCS lsb: 0  msb: 0 OUTPUT
		NetFlow* RXPHALIGNDONE_A0_B; // net ID: RXPHALIGNDONE lsb: 0  msb: 0 OUTPUT
		NetFlow* RXPHMONITOR_A4_B; // net ID: RXPHMONITOR lsb: 0  msb: 4 OUTPUT
		NetFlow* RXPHMONITOR_A3_B; // net ID: RXPHMONITOR lsb: 0  msb: 4 OUTPUT
		NetFlow* RXPHMONITOR_A2_B; // net ID: RXPHMONITOR lsb: 0  msb: 4 OUTPUT
		NetFlow* RXPHMONITOR_A1_B; // net ID: RXPHMONITOR lsb: 0  msb: 4 OUTPUT
		NetFlow* RXPHMONITOR_A0_B; // net ID: RXPHMONITOR lsb: 0  msb: 4 OUTPUT
		NetFlow* RXPHSLIPMONITOR_A4_B; // net ID: RXPHSLIPMONITOR lsb: 0  msb: 4 OUTPUT
		NetFlow* RXPHSLIPMONITOR_A3_B; // net ID: RXPHSLIPMONITOR lsb: 0  msb: 4 OUTPUT
		NetFlow* RXPHSLIPMONITOR_A2_B; // net ID: RXPHSLIPMONITOR lsb: 0  msb: 4 OUTPUT
		NetFlow* RXPHSLIPMONITOR_A1_B; // net ID: RXPHSLIPMONITOR lsb: 0  msb: 4 OUTPUT
		NetFlow* RXPHSLIPMONITOR_A0_B; // net ID: RXPHSLIPMONITOR lsb: 0  msb: 4 OUTPUT
		NetFlow* RXPMARESETDONE_A0_B; // net ID: RXPMARESETDONE lsb: 0  msb: 0 OUTPUT
		NetFlow* RXPRBSERR_A0_B; // net ID: RXPRBSERR lsb: 0  msb: 0 OUTPUT
		NetFlow* RXRATEDONE_A0_B; // net ID: RXRATEDONE lsb: 0  msb: 0 OUTPUT
		NetFlow* RXRESETDONE_A0_B; // net ID: RXRESETDONE lsb: 0  msb: 0 OUTPUT
		NetFlow* RXSTARTOFSEQ_A1_B; // net ID: RXSTARTOFSEQ lsb: 0  msb: 1 OUTPUT
		NetFlow* RXSTARTOFSEQ_A0_B; // net ID: RXSTARTOFSEQ lsb: 0  msb: 1 OUTPUT
		NetFlow* RXSTATUS_A2_B; // net ID: RXSTATUS lsb: 0  msb: 2 OUTPUT
		NetFlow* RXSTATUS_A1_B; // net ID: RXSTATUS lsb: 0  msb: 2 OUTPUT
		NetFlow* RXSTATUS_A0_B; // net ID: RXSTATUS lsb: 0  msb: 2 OUTPUT
		NetFlow* RXSYNCDONE_A0_B; // net ID: RXSYNCDONE lsb: 0  msb: 0 OUTPUT
		NetFlow* RXSYNCOUT_A0_B; // net ID: RXSYNCOUT lsb: 0  msb: 0 OUTPUT
		NetFlow* RXVALID_A0_B; // net ID: RXVALID lsb: 0  msb: 0 OUTPUT
		NetFlow* TXBUFSTATUS_A1_B; // net ID: TXBUFSTATUS lsb: 0  msb: 1 OUTPUT
		NetFlow* TXBUFSTATUS_A0_B; // net ID: TXBUFSTATUS lsb: 0  msb: 1 OUTPUT
		NetFlow* TXCOMFINISH_A0_B; // net ID: TXCOMFINISH lsb: 0  msb: 0 OUTPUT
		NetFlow* TXDLYSRESETDONE_A0_B; // net ID: TXDLYSRESETDONE lsb: 0  msb: 0 OUTPUT
		NetFlow* TXGEARBOXREADY_A0_B; // net ID: TXGEARBOXREADY lsb: 0  msb: 0 OUTPUT
		NetFlow* TXOUTCLK_A0_B; // net ID: TXOUTCLK lsb: 0  msb: 0 OUTPUT
		NetFlow* TXOUTCLKFABRIC_A0_B; // net ID: TXOUTCLKFABRIC lsb: 0  msb: 0 OUTPUT
		NetFlow* TXOUTCLKPCS_A0_B; // net ID: TXOUTCLKPCS lsb: 0  msb: 0 OUTPUT
		NetFlow* TXPHALIGNDONE_A0_B; // net ID: TXPHALIGNDONE lsb: 0  msb: 0 OUTPUT
		NetFlow* TXPHINITDONE_A0_B; // net ID: TXPHINITDONE lsb: 0  msb: 0 OUTPUT
		NetFlow* TXPMARESETDONE_A0_B; // net ID: TXPMARESETDONE lsb: 0  msb: 0 OUTPUT
		NetFlow* TXRATEDONE_A0_B; // net ID: TXRATEDONE lsb: 0  msb: 0 OUTPUT
		NetFlow* TXRESETDONE_A0_B; // net ID: TXRESETDONE lsb: 0  msb: 0 OUTPUT
		NetFlow* TXSYNCDONE_A0_B; // net ID: TXSYNCDONE lsb: 0  msb: 0 OUTPUT
		NetFlow* TXSYNCOUT_A0_B; // net ID: TXSYNCOUT lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGRESET_A0_B; // net ID: CFGRESET lsb: 0  msb: 0 INPUT
		NetFlow* CLKRSVD0_A0_B; // net ID: CLKRSVD0 lsb: 0  msb: 0 INPUT
		NetFlow* CLKRSVD1_A0_B; // net ID: CLKRSVD1 lsb: 0  msb: 0 INPUT
		NetFlow* DMONFIFORESET_A0_B; // net ID: DMONFIFORESET lsb: 0  msb: 0 INPUT
		NetFlow* DMONITORCLK_A0_B; // net ID: DMONITORCLK lsb: 0  msb: 0 INPUT
		NetFlow* DRPADDR_A8_B; // net ID: DRPADDR lsb: 0  msb: 8 INPUT
		NetFlow* DRPADDR_A7_B; // net ID: DRPADDR lsb: 0  msb: 8 INPUT
		NetFlow* DRPADDR_A6_B; // net ID: DRPADDR lsb: 0  msb: 8 INPUT
		NetFlow* DRPADDR_A5_B; // net ID: DRPADDR lsb: 0  msb: 8 INPUT
		NetFlow* DRPADDR_A4_B; // net ID: DRPADDR lsb: 0  msb: 8 INPUT
		NetFlow* DRPADDR_A3_B; // net ID: DRPADDR lsb: 0  msb: 8 INPUT
		NetFlow* DRPADDR_A2_B; // net ID: DRPADDR lsb: 0  msb: 8 INPUT
		NetFlow* DRPADDR_A1_B; // net ID: DRPADDR lsb: 0  msb: 8 INPUT
		NetFlow* DRPADDR_A0_B; // net ID: DRPADDR lsb: 0  msb: 8 INPUT
		NetFlow* DRPCLK_A0_B; // net ID: DRPCLK lsb: 0  msb: 0 INPUT
		NetFlow* DRPDI_A15_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
		NetFlow* DRPDI_A14_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
		NetFlow* DRPDI_A13_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
		NetFlow* DRPDI_A12_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
		NetFlow* DRPDI_A11_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
		NetFlow* DRPDI_A10_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
		NetFlow* DRPDI_A9_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
		NetFlow* DRPDI_A8_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
		NetFlow* DRPDI_A7_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
		NetFlow* DRPDI_A6_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
		NetFlow* DRPDI_A5_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
		NetFlow* DRPDI_A4_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
		NetFlow* DRPDI_A3_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
		NetFlow* DRPDI_A2_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
		NetFlow* DRPDI_A1_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
		NetFlow* DRPDI_A0_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
		NetFlow* DRPEN_A0_B; // net ID: DRPEN lsb: 0  msb: 0 INPUT
		NetFlow* DRPWE_A0_B; // net ID: DRPWE lsb: 0  msb: 0 INPUT
		NetFlow* EYESCANMODE_A0_B; // net ID: EYESCANMODE lsb: 0  msb: 0 INPUT
		NetFlow* EYESCANRESET_A0_B; // net ID: EYESCANRESET lsb: 0  msb: 0 INPUT
		NetFlow* EYESCANTRIGGER_A0_B; // net ID: EYESCANTRIGGER lsb: 0  msb: 0 INPUT
		NetFlow* GTPRXN_A0_B; // net ID: GTPRXN lsb: 0  msb: 0 INPUT
		NetFlow* GTPRXP_A0_B; // net ID: GTPRXP lsb: 0  msb: 0 INPUT
		NetFlow* GTRESETSEL_A0_B; // net ID: GTRESETSEL lsb: 0  msb: 0 INPUT
		NetFlow* GTRSVD_A15_B; // net ID: GTRSVD lsb: 0  msb: 15 INPUT
		NetFlow* GTRSVD_A14_B; // net ID: GTRSVD lsb: 0  msb: 15 INPUT
		NetFlow* GTRSVD_A13_B; // net ID: GTRSVD lsb: 0  msb: 15 INPUT
		NetFlow* GTRSVD_A12_B; // net ID: GTRSVD lsb: 0  msb: 15 INPUT
		NetFlow* GTRSVD_A11_B; // net ID: GTRSVD lsb: 0  msb: 15 INPUT
		NetFlow* GTRSVD_A10_B; // net ID: GTRSVD lsb: 0  msb: 15 INPUT
		NetFlow* GTRSVD_A9_B; // net ID: GTRSVD lsb: 0  msb: 15 INPUT
		NetFlow* GTRSVD_A8_B; // net ID: GTRSVD lsb: 0  msb: 15 INPUT
		NetFlow* GTRSVD_A7_B; // net ID: GTRSVD lsb: 0  msb: 15 INPUT
		NetFlow* GTRSVD_A6_B; // net ID: GTRSVD lsb: 0  msb: 15 INPUT
		NetFlow* GTRSVD_A5_B; // net ID: GTRSVD lsb: 0  msb: 15 INPUT
		NetFlow* GTRSVD_A4_B; // net ID: GTRSVD lsb: 0  msb: 15 INPUT
		NetFlow* GTRSVD_A3_B; // net ID: GTRSVD lsb: 0  msb: 15 INPUT
		NetFlow* GTRSVD_A2_B; // net ID: GTRSVD lsb: 0  msb: 15 INPUT
		NetFlow* GTRSVD_A1_B; // net ID: GTRSVD lsb: 0  msb: 15 INPUT
		NetFlow* GTRSVD_A0_B; // net ID: GTRSVD lsb: 0  msb: 15 INPUT
		NetFlow* GTRXRESET_A0_B; // net ID: GTRXRESET lsb: 0  msb: 0 INPUT
		NetFlow* GTTXRESET_A0_B; // net ID: GTTXRESET lsb: 0  msb: 0 INPUT
		NetFlow* LOOPBACK_A2_B; // net ID: LOOPBACK lsb: 0  msb: 2 INPUT
		NetFlow* LOOPBACK_A1_B; // net ID: LOOPBACK lsb: 0  msb: 2 INPUT
		NetFlow* LOOPBACK_A0_B; // net ID: LOOPBACK lsb: 0  msb: 2 INPUT
		NetFlow* PCSRSVDIN_A15_B; // net ID: PCSRSVDIN lsb: 0  msb: 15 INPUT
		NetFlow* PCSRSVDIN_A14_B; // net ID: PCSRSVDIN lsb: 0  msb: 15 INPUT
		NetFlow* PCSRSVDIN_A13_B; // net ID: PCSRSVDIN lsb: 0  msb: 15 INPUT
		NetFlow* PCSRSVDIN_A12_B; // net ID: PCSRSVDIN lsb: 0  msb: 15 INPUT
		NetFlow* PCSRSVDIN_A11_B; // net ID: PCSRSVDIN lsb: 0  msb: 15 INPUT
		NetFlow* PCSRSVDIN_A10_B; // net ID: PCSRSVDIN lsb: 0  msb: 15 INPUT
		NetFlow* PCSRSVDIN_A9_B; // net ID: PCSRSVDIN lsb: 0  msb: 15 INPUT
		NetFlow* PCSRSVDIN_A8_B; // net ID: PCSRSVDIN lsb: 0  msb: 15 INPUT
		NetFlow* PCSRSVDIN_A7_B; // net ID: PCSRSVDIN lsb: 0  msb: 15 INPUT
		NetFlow* PCSRSVDIN_A6_B; // net ID: PCSRSVDIN lsb: 0  msb: 15 INPUT
		NetFlow* PCSRSVDIN_A5_B; // net ID: PCSRSVDIN lsb: 0  msb: 15 INPUT
		NetFlow* PCSRSVDIN_A4_B; // net ID: PCSRSVDIN lsb: 0  msb: 15 INPUT
		NetFlow* PCSRSVDIN_A3_B; // net ID: PCSRSVDIN lsb: 0  msb: 15 INPUT
		NetFlow* PCSRSVDIN_A2_B; // net ID: PCSRSVDIN lsb: 0  msb: 15 INPUT
		NetFlow* PCSRSVDIN_A1_B; // net ID: PCSRSVDIN lsb: 0  msb: 15 INPUT
		NetFlow* PCSRSVDIN_A0_B; // net ID: PCSRSVDIN lsb: 0  msb: 15 INPUT
		NetFlow* PLL0CLK_A0_B; // net ID: PLL0CLK lsb: 0  msb: 0 INPUT
		NetFlow* PLL0REFCLK_A0_B; // net ID: PLL0REFCLK lsb: 0  msb: 0 INPUT
		NetFlow* PLL1CLK_A0_B; // net ID: PLL1CLK lsb: 0  msb: 0 INPUT
		NetFlow* PLL1REFCLK_A0_B; // net ID: PLL1REFCLK lsb: 0  msb: 0 INPUT
		NetFlow* PMARSVDIN0_A0_B; // net ID: PMARSVDIN0 lsb: 0  msb: 0 INPUT
		NetFlow* PMARSVDIN1_A0_B; // net ID: PMARSVDIN1 lsb: 0  msb: 0 INPUT
		NetFlow* PMARSVDIN2_A0_B; // net ID: PMARSVDIN2 lsb: 0  msb: 0 INPUT
		NetFlow* PMARSVDIN3_A0_B; // net ID: PMARSVDIN3 lsb: 0  msb: 0 INPUT
		NetFlow* PMARSVDIN4_A0_B; // net ID: PMARSVDIN4 lsb: 0  msb: 0 INPUT
		NetFlow* RESETOVRD_A0_B; // net ID: RESETOVRD lsb: 0  msb: 0 INPUT
		NetFlow* RX8B10BEN_A0_B; // net ID: RX8B10BEN lsb: 0  msb: 0 INPUT
		NetFlow* RXADAPTSELTEST_A13_B; // net ID: RXADAPTSELTEST lsb: 0  msb: 13 INPUT
		NetFlow* RXADAPTSELTEST_A12_B; // net ID: RXADAPTSELTEST lsb: 0  msb: 13 INPUT
		NetFlow* RXADAPTSELTEST_A11_B; // net ID: RXADAPTSELTEST lsb: 0  msb: 13 INPUT
		NetFlow* RXADAPTSELTEST_A10_B; // net ID: RXADAPTSELTEST lsb: 0  msb: 13 INPUT
		NetFlow* RXADAPTSELTEST_A9_B; // net ID: RXADAPTSELTEST lsb: 0  msb: 13 INPUT
		NetFlow* RXADAPTSELTEST_A8_B; // net ID: RXADAPTSELTEST lsb: 0  msb: 13 INPUT
		NetFlow* RXADAPTSELTEST_A7_B; // net ID: RXADAPTSELTEST lsb: 0  msb: 13 INPUT
		NetFlow* RXADAPTSELTEST_A6_B; // net ID: RXADAPTSELTEST lsb: 0  msb: 13 INPUT
		NetFlow* RXADAPTSELTEST_A5_B; // net ID: RXADAPTSELTEST lsb: 0  msb: 13 INPUT
		NetFlow* RXADAPTSELTEST_A4_B; // net ID: RXADAPTSELTEST lsb: 0  msb: 13 INPUT
		NetFlow* RXADAPTSELTEST_A3_B; // net ID: RXADAPTSELTEST lsb: 0  msb: 13 INPUT
		NetFlow* RXADAPTSELTEST_A2_B; // net ID: RXADAPTSELTEST lsb: 0  msb: 13 INPUT
		NetFlow* RXADAPTSELTEST_A1_B; // net ID: RXADAPTSELTEST lsb: 0  msb: 13 INPUT
		NetFlow* RXADAPTSELTEST_A0_B; // net ID: RXADAPTSELTEST lsb: 0  msb: 13 INPUT
		NetFlow* RXBUFRESET_A0_B; // net ID: RXBUFRESET lsb: 0  msb: 0 INPUT
		NetFlow* RXCDRFREQRESET_A0_B; // net ID: RXCDRFREQRESET lsb: 0  msb: 0 INPUT
		NetFlow* RXCDRHOLD_A0_B; // net ID: RXCDRHOLD lsb: 0  msb: 0 INPUT
		NetFlow* RXCDROVRDEN_A0_B; // net ID: RXCDROVRDEN lsb: 0  msb: 0 INPUT
		NetFlow* RXCDRRESET_A0_B; // net ID: RXCDRRESET lsb: 0  msb: 0 INPUT
		NetFlow* RXCDRRESETRSV_A0_B; // net ID: RXCDRRESETRSV lsb: 0  msb: 0 INPUT
		NetFlow* RXCHBONDEN_A0_B; // net ID: RXCHBONDEN lsb: 0  msb: 0 INPUT
		NetFlow* RXCHBONDI_A3_B; // net ID: RXCHBONDI lsb: 0  msb: 3 INPUT
		NetFlow* RXCHBONDI_A2_B; // net ID: RXCHBONDI lsb: 0  msb: 3 INPUT
		NetFlow* RXCHBONDI_A1_B; // net ID: RXCHBONDI lsb: 0  msb: 3 INPUT
		NetFlow* RXCHBONDI_A0_B; // net ID: RXCHBONDI lsb: 0  msb: 3 INPUT
		NetFlow* RXCHBONDLEVEL_A2_B; // net ID: RXCHBONDLEVEL lsb: 0  msb: 2 INPUT
		NetFlow* RXCHBONDLEVEL_A1_B; // net ID: RXCHBONDLEVEL lsb: 0  msb: 2 INPUT
		NetFlow* RXCHBONDLEVEL_A0_B; // net ID: RXCHBONDLEVEL lsb: 0  msb: 2 INPUT
		NetFlow* RXCHBONDMASTER_A0_B; // net ID: RXCHBONDMASTER lsb: 0  msb: 0 INPUT
		NetFlow* RXCHBONDSLAVE_A0_B; // net ID: RXCHBONDSLAVE lsb: 0  msb: 0 INPUT
		NetFlow* RXCOMMADETEN_A0_B; // net ID: RXCOMMADETEN lsb: 0  msb: 0 INPUT
		NetFlow* RXDDIEN_A0_B; // net ID: RXDDIEN lsb: 0  msb: 0 INPUT
		NetFlow* RXDFEXYDEN_A0_B; // net ID: RXDFEXYDEN lsb: 0  msb: 0 INPUT
		NetFlow* RXDLYBYPASS_A0_B; // net ID: RXDLYBYPASS lsb: 0  msb: 0 INPUT
		NetFlow* RXDLYEN_A0_B; // net ID: RXDLYEN lsb: 0  msb: 0 INPUT
		NetFlow* RXDLYOVRDEN_A0_B; // net ID: RXDLYOVRDEN lsb: 0  msb: 0 INPUT
		NetFlow* RXDLYSRESET_A0_B; // net ID: RXDLYSRESET lsb: 0  msb: 0 INPUT
		NetFlow* RXELECIDLEMODE_A1_B; // net ID: RXELECIDLEMODE lsb: 0  msb: 1 INPUT
		NetFlow* RXELECIDLEMODE_A0_B; // net ID: RXELECIDLEMODE lsb: 0  msb: 1 INPUT
		NetFlow* RXGEARBOXSLIP_A0_B; // net ID: RXGEARBOXSLIP lsb: 0  msb: 0 INPUT
		NetFlow* RXLPMHFHOLD_A0_B; // net ID: RXLPMHFHOLD lsb: 0  msb: 0 INPUT
		NetFlow* RXLPMHFOVRDEN_A0_B; // net ID: RXLPMHFOVRDEN lsb: 0  msb: 0 INPUT
		NetFlow* RXLPMLFHOLD_A0_B; // net ID: RXLPMLFHOLD lsb: 0  msb: 0 INPUT
		NetFlow* RXLPMLFOVRDEN_A0_B; // net ID: RXLPMLFOVRDEN lsb: 0  msb: 0 INPUT
		NetFlow* RXLPMOSINTNTRLEN_A0_B; // net ID: RXLPMOSINTNTRLEN lsb: 0  msb: 0 INPUT
		NetFlow* RXLPMRESET_A0_B; // net ID: RXLPMRESET lsb: 0  msb: 0 INPUT
		NetFlow* RXMCOMMAALIGNEN_A0_B; // net ID: RXMCOMMAALIGNEN lsb: 0  msb: 0 INPUT
		NetFlow* RXOOBRESET_A0_B; // net ID: RXOOBRESET lsb: 0  msb: 0 INPUT
		NetFlow* RXOSCALRESET_A0_B; // net ID: RXOSCALRESET lsb: 0  msb: 0 INPUT
		NetFlow* RXOSHOLD_A0_B; // net ID: RXOSHOLD lsb: 0  msb: 0 INPUT
		NetFlow* RXOSINTCFG_A3_B; // net ID: RXOSINTCFG lsb: 0  msb: 3 INPUT
		NetFlow* RXOSINTCFG_A2_B; // net ID: RXOSINTCFG lsb: 0  msb: 3 INPUT
		NetFlow* RXOSINTCFG_A1_B; // net ID: RXOSINTCFG lsb: 0  msb: 3 INPUT
		NetFlow* RXOSINTCFG_A0_B; // net ID: RXOSINTCFG lsb: 0  msb: 3 INPUT
		NetFlow* RXOSINTEN_A0_B; // net ID: RXOSINTEN lsb: 0  msb: 0 INPUT
		NetFlow* RXOSINTHOLD_A0_B; // net ID: RXOSINTHOLD lsb: 0  msb: 0 INPUT
		NetFlow* RXOSINTID0_A3_B; // net ID: RXOSINTID0 lsb: 0  msb: 3 INPUT
		NetFlow* RXOSINTID0_A2_B; // net ID: RXOSINTID0 lsb: 0  msb: 3 INPUT
		NetFlow* RXOSINTID0_A1_B; // net ID: RXOSINTID0 lsb: 0  msb: 3 INPUT
		NetFlow* RXOSINTID0_A0_B; // net ID: RXOSINTID0 lsb: 0  msb: 3 INPUT
		NetFlow* RXOSINTNTRLEN_A0_B; // net ID: RXOSINTNTRLEN lsb: 0  msb: 0 INPUT
		NetFlow* RXOSINTOVRDEN_A0_B; // net ID: RXOSINTOVRDEN lsb: 0  msb: 0 INPUT
		NetFlow* RXOSINTPD_A0_B; // net ID: RXOSINTPD lsb: 0  msb: 0 INPUT
		NetFlow* RXOSINTSTROBE_A0_B; // net ID: RXOSINTSTROBE lsb: 0  msb: 0 INPUT
		NetFlow* RXOSINTTESTOVRDEN_A0_B; // net ID: RXOSINTTESTOVRDEN lsb: 0  msb: 0 INPUT
		NetFlow* RXOSOVRDEN_A0_B; // net ID: RXOSOVRDEN lsb: 0  msb: 0 INPUT
		NetFlow* RXOUTCLKSEL_A2_B; // net ID: RXOUTCLKSEL lsb: 0  msb: 2 INPUT
		NetFlow* RXOUTCLKSEL_A1_B; // net ID: RXOUTCLKSEL lsb: 0  msb: 2 INPUT
		NetFlow* RXOUTCLKSEL_A0_B; // net ID: RXOUTCLKSEL lsb: 0  msb: 2 INPUT
		NetFlow* RXPCOMMAALIGNEN_A0_B; // net ID: RXPCOMMAALIGNEN lsb: 0  msb: 0 INPUT
		NetFlow* RXPCSRESET_A0_B; // net ID: RXPCSRESET lsb: 0  msb: 0 INPUT
		NetFlow* RXPD_A1_B; // net ID: RXPD lsb: 0  msb: 1 INPUT
		NetFlow* RXPD_A0_B; // net ID: RXPD lsb: 0  msb: 1 INPUT
		NetFlow* RXPHALIGN_A0_B; // net ID: RXPHALIGN lsb: 0  msb: 0 INPUT
		NetFlow* RXPHALIGNEN_A0_B; // net ID: RXPHALIGNEN lsb: 0  msb: 0 INPUT
		NetFlow* RXPHDLYPD_A0_B; // net ID: RXPHDLYPD lsb: 0  msb: 0 INPUT
		NetFlow* RXPHDLYRESET_A0_B; // net ID: RXPHDLYRESET lsb: 0  msb: 0 INPUT
		NetFlow* RXPHOVRDEN_A0_B; // net ID: RXPHOVRDEN lsb: 0  msb: 0 INPUT
		NetFlow* RXPMARESET_A0_B; // net ID: RXPMARESET lsb: 0  msb: 0 INPUT
		NetFlow* RXPOLARITY_A0_B; // net ID: RXPOLARITY lsb: 0  msb: 0 INPUT
		NetFlow* RXPRBSCNTRESET_A0_B; // net ID: RXPRBSCNTRESET lsb: 0  msb: 0 INPUT
		NetFlow* RXPRBSSEL_A2_B; // net ID: RXPRBSSEL lsb: 0  msb: 2 INPUT
		NetFlow* RXPRBSSEL_A1_B; // net ID: RXPRBSSEL lsb: 0  msb: 2 INPUT
		NetFlow* RXPRBSSEL_A0_B; // net ID: RXPRBSSEL lsb: 0  msb: 2 INPUT
		NetFlow* RXRATE_A2_B; // net ID: RXRATE lsb: 0  msb: 2 INPUT
		NetFlow* RXRATE_A1_B; // net ID: RXRATE lsb: 0  msb: 2 INPUT
		NetFlow* RXRATE_A0_B; // net ID: RXRATE lsb: 0  msb: 2 INPUT
		NetFlow* RXRATEMODE_A0_B; // net ID: RXRATEMODE lsb: 0  msb: 0 INPUT
		NetFlow* RXSLIDE_A0_B; // net ID: RXSLIDE lsb: 0  msb: 0 INPUT
		NetFlow* RXSYNCALLIN_A0_B; // net ID: RXSYNCALLIN lsb: 0  msb: 0 INPUT
		NetFlow* RXSYNCIN_A0_B; // net ID: RXSYNCIN lsb: 0  msb: 0 INPUT
		NetFlow* RXSYNCMODE_A0_B; // net ID: RXSYNCMODE lsb: 0  msb: 0 INPUT
		NetFlow* RXSYSCLKSEL_A1_B; // net ID: RXSYSCLKSEL lsb: 0  msb: 1 INPUT
		NetFlow* RXSYSCLKSEL_A0_B; // net ID: RXSYSCLKSEL lsb: 0  msb: 1 INPUT
		NetFlow* RXUSERRDY_A0_B; // net ID: RXUSERRDY lsb: 0  msb: 0 INPUT
		NetFlow* RXUSRCLK_A0_B; // net ID: RXUSRCLK lsb: 0  msb: 0 INPUT
		NetFlow* RXUSRCLK2_A0_B; // net ID: RXUSRCLK2 lsb: 0  msb: 0 INPUT
		NetFlow* SETERRSTATUS_A0_B; // net ID: SETERRSTATUS lsb: 0  msb: 0 INPUT
		NetFlow* SIGVALIDCLK_A0_B; // net ID: SIGVALIDCLK lsb: 0  msb: 0 INPUT
		NetFlow* TSTIN_A19_B; // net ID: TSTIN lsb: 0  msb: 19 INPUT
		NetFlow* TSTIN_A18_B; // net ID: TSTIN lsb: 0  msb: 19 INPUT
		NetFlow* TSTIN_A17_B; // net ID: TSTIN lsb: 0  msb: 19 INPUT
		NetFlow* TSTIN_A16_B; // net ID: TSTIN lsb: 0  msb: 19 INPUT
		NetFlow* TSTIN_A15_B; // net ID: TSTIN lsb: 0  msb: 19 INPUT
		NetFlow* TSTIN_A14_B; // net ID: TSTIN lsb: 0  msb: 19 INPUT
		NetFlow* TSTIN_A13_B; // net ID: TSTIN lsb: 0  msb: 19 INPUT
		NetFlow* TSTIN_A12_B; // net ID: TSTIN lsb: 0  msb: 19 INPUT
		NetFlow* TSTIN_A11_B; // net ID: TSTIN lsb: 0  msb: 19 INPUT
		NetFlow* TSTIN_A10_B; // net ID: TSTIN lsb: 0  msb: 19 INPUT
		NetFlow* TSTIN_A9_B; // net ID: TSTIN lsb: 0  msb: 19 INPUT
		NetFlow* TSTIN_A8_B; // net ID: TSTIN lsb: 0  msb: 19 INPUT
		NetFlow* TSTIN_A7_B; // net ID: TSTIN lsb: 0  msb: 19 INPUT
		NetFlow* TSTIN_A6_B; // net ID: TSTIN lsb: 0  msb: 19 INPUT
		NetFlow* TSTIN_A5_B; // net ID: TSTIN lsb: 0  msb: 19 INPUT
		NetFlow* TSTIN_A4_B; // net ID: TSTIN lsb: 0  msb: 19 INPUT
		NetFlow* TSTIN_A3_B; // net ID: TSTIN lsb: 0  msb: 19 INPUT
		NetFlow* TSTIN_A2_B; // net ID: TSTIN lsb: 0  msb: 19 INPUT
		NetFlow* TSTIN_A1_B; // net ID: TSTIN lsb: 0  msb: 19 INPUT
		NetFlow* TSTIN_A0_B; // net ID: TSTIN lsb: 0  msb: 19 INPUT
		NetFlow* TX8B10BBYPASS_A3_B; // net ID: TX8B10BBYPASS lsb: 0  msb: 3 INPUT
		NetFlow* TX8B10BBYPASS_A2_B; // net ID: TX8B10BBYPASS lsb: 0  msb: 3 INPUT
		NetFlow* TX8B10BBYPASS_A1_B; // net ID: TX8B10BBYPASS lsb: 0  msb: 3 INPUT
		NetFlow* TX8B10BBYPASS_A0_B; // net ID: TX8B10BBYPASS lsb: 0  msb: 3 INPUT
		NetFlow* TX8B10BEN_A0_B; // net ID: TX8B10BEN lsb: 0  msb: 0 INPUT
		NetFlow* TXBUFDIFFCTRL_A2_B; // net ID: TXBUFDIFFCTRL lsb: 0  msb: 2 INPUT
		NetFlow* TXBUFDIFFCTRL_A1_B; // net ID: TXBUFDIFFCTRL lsb: 0  msb: 2 INPUT
		NetFlow* TXBUFDIFFCTRL_A0_B; // net ID: TXBUFDIFFCTRL lsb: 0  msb: 2 INPUT
		NetFlow* TXCHARDISPMODE_A3_B; // net ID: TXCHARDISPMODE lsb: 0  msb: 3 INPUT
		NetFlow* TXCHARDISPMODE_A2_B; // net ID: TXCHARDISPMODE lsb: 0  msb: 3 INPUT
		NetFlow* TXCHARDISPMODE_A1_B; // net ID: TXCHARDISPMODE lsb: 0  msb: 3 INPUT
		NetFlow* TXCHARDISPMODE_A0_B; // net ID: TXCHARDISPMODE lsb: 0  msb: 3 INPUT
		NetFlow* TXCHARDISPVAL_A3_B; // net ID: TXCHARDISPVAL lsb: 0  msb: 3 INPUT
		NetFlow* TXCHARDISPVAL_A2_B; // net ID: TXCHARDISPVAL lsb: 0  msb: 3 INPUT
		NetFlow* TXCHARDISPVAL_A1_B; // net ID: TXCHARDISPVAL lsb: 0  msb: 3 INPUT
		NetFlow* TXCHARDISPVAL_A0_B; // net ID: TXCHARDISPVAL lsb: 0  msb: 3 INPUT
		NetFlow* TXCHARISK_A3_B; // net ID: TXCHARISK lsb: 0  msb: 3 INPUT
		NetFlow* TXCHARISK_A2_B; // net ID: TXCHARISK lsb: 0  msb: 3 INPUT
		NetFlow* TXCHARISK_A1_B; // net ID: TXCHARISK lsb: 0  msb: 3 INPUT
		NetFlow* TXCHARISK_A0_B; // net ID: TXCHARISK lsb: 0  msb: 3 INPUT
		NetFlow* TXCOMINIT_A0_B; // net ID: TXCOMINIT lsb: 0  msb: 0 INPUT
		NetFlow* TXCOMSAS_A0_B; // net ID: TXCOMSAS lsb: 0  msb: 0 INPUT
		NetFlow* TXCOMWAKE_A0_B; // net ID: TXCOMWAKE lsb: 0  msb: 0 INPUT
		NetFlow* TXDATA_A31_B; // net ID: TXDATA lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA_A30_B; // net ID: TXDATA lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA_A29_B; // net ID: TXDATA lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA_A28_B; // net ID: TXDATA lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA_A27_B; // net ID: TXDATA lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA_A26_B; // net ID: TXDATA lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA_A25_B; // net ID: TXDATA lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA_A24_B; // net ID: TXDATA lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA_A23_B; // net ID: TXDATA lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA_A22_B; // net ID: TXDATA lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA_A21_B; // net ID: TXDATA lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA_A20_B; // net ID: TXDATA lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA_A19_B; // net ID: TXDATA lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA_A18_B; // net ID: TXDATA lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA_A17_B; // net ID: TXDATA lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA_A16_B; // net ID: TXDATA lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA_A15_B; // net ID: TXDATA lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA_A14_B; // net ID: TXDATA lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA_A13_B; // net ID: TXDATA lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA_A12_B; // net ID: TXDATA lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA_A11_B; // net ID: TXDATA lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA_A10_B; // net ID: TXDATA lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA_A9_B; // net ID: TXDATA lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA_A8_B; // net ID: TXDATA lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA_A7_B; // net ID: TXDATA lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA_A6_B; // net ID: TXDATA lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA_A5_B; // net ID: TXDATA lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA_A4_B; // net ID: TXDATA lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA_A3_B; // net ID: TXDATA lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA_A2_B; // net ID: TXDATA lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA_A1_B; // net ID: TXDATA lsb: 0  msb: 31 INPUT
		NetFlow* TXDATA_A0_B; // net ID: TXDATA lsb: 0  msb: 31 INPUT
		NetFlow* TXDEEMPH_A0_B; // net ID: TXDEEMPH lsb: 0  msb: 0 INPUT
		NetFlow* TXDETECTRX_A0_B; // net ID: TXDETECTRX lsb: 0  msb: 0 INPUT
		NetFlow* TXDIFFCTRL_A3_B; // net ID: TXDIFFCTRL lsb: 0  msb: 3 INPUT
		NetFlow* TXDIFFCTRL_A2_B; // net ID: TXDIFFCTRL lsb: 0  msb: 3 INPUT
		NetFlow* TXDIFFCTRL_A1_B; // net ID: TXDIFFCTRL lsb: 0  msb: 3 INPUT
		NetFlow* TXDIFFCTRL_A0_B; // net ID: TXDIFFCTRL lsb: 0  msb: 3 INPUT
		NetFlow* TXDIFFPD_A0_B; // net ID: TXDIFFPD lsb: 0  msb: 0 INPUT
		NetFlow* TXDLYBYPASS_A0_B; // net ID: TXDLYBYPASS lsb: 0  msb: 0 INPUT
		NetFlow* TXDLYEN_A0_B; // net ID: TXDLYEN lsb: 0  msb: 0 INPUT
		NetFlow* TXDLYHOLD_A0_B; // net ID: TXDLYHOLD lsb: 0  msb: 0 INPUT
		NetFlow* TXDLYOVRDEN_A0_B; // net ID: TXDLYOVRDEN lsb: 0  msb: 0 INPUT
		NetFlow* TXDLYSRESET_A0_B; // net ID: TXDLYSRESET lsb: 0  msb: 0 INPUT
		NetFlow* TXDLYUPDOWN_A0_B; // net ID: TXDLYUPDOWN lsb: 0  msb: 0 INPUT
		NetFlow* TXELECIDLE_A0_B; // net ID: TXELECIDLE lsb: 0  msb: 0 INPUT
		NetFlow* TXHEADER_A2_B; // net ID: TXHEADER lsb: 0  msb: 2 INPUT
		NetFlow* TXHEADER_A1_B; // net ID: TXHEADER lsb: 0  msb: 2 INPUT
		NetFlow* TXHEADER_A0_B; // net ID: TXHEADER lsb: 0  msb: 2 INPUT
		NetFlow* TXINHIBIT_A0_B; // net ID: TXINHIBIT lsb: 0  msb: 0 INPUT
		NetFlow* TXMAINCURSOR_A6_B; // net ID: TXMAINCURSOR lsb: 0  msb: 6 INPUT
		NetFlow* TXMAINCURSOR_A5_B; // net ID: TXMAINCURSOR lsb: 0  msb: 6 INPUT
		NetFlow* TXMAINCURSOR_A4_B; // net ID: TXMAINCURSOR lsb: 0  msb: 6 INPUT
		NetFlow* TXMAINCURSOR_A3_B; // net ID: TXMAINCURSOR lsb: 0  msb: 6 INPUT
		NetFlow* TXMAINCURSOR_A2_B; // net ID: TXMAINCURSOR lsb: 0  msb: 6 INPUT
		NetFlow* TXMAINCURSOR_A1_B; // net ID: TXMAINCURSOR lsb: 0  msb: 6 INPUT
		NetFlow* TXMAINCURSOR_A0_B; // net ID: TXMAINCURSOR lsb: 0  msb: 6 INPUT
		NetFlow* TXMARGIN_A2_B; // net ID: TXMARGIN lsb: 0  msb: 2 INPUT
		NetFlow* TXMARGIN_A1_B; // net ID: TXMARGIN lsb: 0  msb: 2 INPUT
		NetFlow* TXMARGIN_A0_B; // net ID: TXMARGIN lsb: 0  msb: 2 INPUT
		NetFlow* TXOUTCLKSEL_A2_B; // net ID: TXOUTCLKSEL lsb: 0  msb: 2 INPUT
		NetFlow* TXOUTCLKSEL_A1_B; // net ID: TXOUTCLKSEL lsb: 0  msb: 2 INPUT
		NetFlow* TXOUTCLKSEL_A0_B; // net ID: TXOUTCLKSEL lsb: 0  msb: 2 INPUT
		NetFlow* TXPCSRESET_A0_B; // net ID: TXPCSRESET lsb: 0  msb: 0 INPUT
		NetFlow* TXPD_A1_B; // net ID: TXPD lsb: 0  msb: 1 INPUT
		NetFlow* TXPD_A0_B; // net ID: TXPD lsb: 0  msb: 1 INPUT
		NetFlow* TXPDELECIDLEMODE_A0_B; // net ID: TXPDELECIDLEMODE lsb: 0  msb: 0 INPUT
		NetFlow* TXPHALIGN_A0_B; // net ID: TXPHALIGN lsb: 0  msb: 0 INPUT
		NetFlow* TXPHALIGNEN_A0_B; // net ID: TXPHALIGNEN lsb: 0  msb: 0 INPUT
		NetFlow* TXPHDLYPD_A0_B; // net ID: TXPHDLYPD lsb: 0  msb: 0 INPUT
		NetFlow* TXPHDLYRESET_A0_B; // net ID: TXPHDLYRESET lsb: 0  msb: 0 INPUT
		NetFlow* TXPHDLYTSTCLK_A0_B; // net ID: TXPHDLYTSTCLK lsb: 0  msb: 0 INPUT
		NetFlow* TXPHINIT_A0_B; // net ID: TXPHINIT lsb: 0  msb: 0 INPUT
		NetFlow* TXPHOVRDEN_A0_B; // net ID: TXPHOVRDEN lsb: 0  msb: 0 INPUT
		NetFlow* TXPIPPMEN_A0_B; // net ID: TXPIPPMEN lsb: 0  msb: 0 INPUT
		NetFlow* TXPIPPMOVRDEN_A0_B; // net ID: TXPIPPMOVRDEN lsb: 0  msb: 0 INPUT
		NetFlow* TXPIPPMPD_A0_B; // net ID: TXPIPPMPD lsb: 0  msb: 0 INPUT
		NetFlow* TXPIPPMSEL_A0_B; // net ID: TXPIPPMSEL lsb: 0  msb: 0 INPUT
		NetFlow* TXPIPPMSTEPSIZE_A4_B; // net ID: TXPIPPMSTEPSIZE lsb: 0  msb: 4 INPUT
		NetFlow* TXPIPPMSTEPSIZE_A3_B; // net ID: TXPIPPMSTEPSIZE lsb: 0  msb: 4 INPUT
		NetFlow* TXPIPPMSTEPSIZE_A2_B; // net ID: TXPIPPMSTEPSIZE lsb: 0  msb: 4 INPUT
		NetFlow* TXPIPPMSTEPSIZE_A1_B; // net ID: TXPIPPMSTEPSIZE lsb: 0  msb: 4 INPUT
		NetFlow* TXPIPPMSTEPSIZE_A0_B; // net ID: TXPIPPMSTEPSIZE lsb: 0  msb: 4 INPUT
		NetFlow* TXPISOPD_A0_B; // net ID: TXPISOPD lsb: 0  msb: 0 INPUT
		NetFlow* TXPMARESET_A0_B; // net ID: TXPMARESET lsb: 0  msb: 0 INPUT
		NetFlow* TXPOLARITY_A0_B; // net ID: TXPOLARITY lsb: 0  msb: 0 INPUT
		NetFlow* TXPOSTCURSOR_A4_B; // net ID: TXPOSTCURSOR lsb: 0  msb: 4 INPUT
		NetFlow* TXPOSTCURSOR_A3_B; // net ID: TXPOSTCURSOR lsb: 0  msb: 4 INPUT
		NetFlow* TXPOSTCURSOR_A2_B; // net ID: TXPOSTCURSOR lsb: 0  msb: 4 INPUT
		NetFlow* TXPOSTCURSOR_A1_B; // net ID: TXPOSTCURSOR lsb: 0  msb: 4 INPUT
		NetFlow* TXPOSTCURSOR_A0_B; // net ID: TXPOSTCURSOR lsb: 0  msb: 4 INPUT
		NetFlow* TXPOSTCURSORINV_A0_B; // net ID: TXPOSTCURSORINV lsb: 0  msb: 0 INPUT
		NetFlow* TXPRBSFORCEERR_A0_B; // net ID: TXPRBSFORCEERR lsb: 0  msb: 0 INPUT
		NetFlow* TXPRBSSEL_A2_B; // net ID: TXPRBSSEL lsb: 0  msb: 2 INPUT
		NetFlow* TXPRBSSEL_A1_B; // net ID: TXPRBSSEL lsb: 0  msb: 2 INPUT
		NetFlow* TXPRBSSEL_A0_B; // net ID: TXPRBSSEL lsb: 0  msb: 2 INPUT
		NetFlow* TXPRECURSOR_A4_B; // net ID: TXPRECURSOR lsb: 0  msb: 4 INPUT
		NetFlow* TXPRECURSOR_A3_B; // net ID: TXPRECURSOR lsb: 0  msb: 4 INPUT
		NetFlow* TXPRECURSOR_A2_B; // net ID: TXPRECURSOR lsb: 0  msb: 4 INPUT
		NetFlow* TXPRECURSOR_A1_B; // net ID: TXPRECURSOR lsb: 0  msb: 4 INPUT
		NetFlow* TXPRECURSOR_A0_B; // net ID: TXPRECURSOR lsb: 0  msb: 4 INPUT
		NetFlow* TXPRECURSORINV_A0_B; // net ID: TXPRECURSORINV lsb: 0  msb: 0 INPUT
		NetFlow* TXRATE_A2_B; // net ID: TXRATE lsb: 0  msb: 2 INPUT
		NetFlow* TXRATE_A1_B; // net ID: TXRATE lsb: 0  msb: 2 INPUT
		NetFlow* TXRATE_A0_B; // net ID: TXRATE lsb: 0  msb: 2 INPUT
		NetFlow* TXRATEMODE_A0_B; // net ID: TXRATEMODE lsb: 0  msb: 0 INPUT
		NetFlow* TXSEQUENCE_A6_B; // net ID: TXSEQUENCE lsb: 0  msb: 6 INPUT
		NetFlow* TXSEQUENCE_A5_B; // net ID: TXSEQUENCE lsb: 0  msb: 6 INPUT
		NetFlow* TXSEQUENCE_A4_B; // net ID: TXSEQUENCE lsb: 0  msb: 6 INPUT
		NetFlow* TXSEQUENCE_A3_B; // net ID: TXSEQUENCE lsb: 0  msb: 6 INPUT
		NetFlow* TXSEQUENCE_A2_B; // net ID: TXSEQUENCE lsb: 0  msb: 6 INPUT
		NetFlow* TXSEQUENCE_A1_B; // net ID: TXSEQUENCE lsb: 0  msb: 6 INPUT
		NetFlow* TXSEQUENCE_A0_B; // net ID: TXSEQUENCE lsb: 0  msb: 6 INPUT
		NetFlow* TXSTARTSEQ_A0_B; // net ID: TXSTARTSEQ lsb: 0  msb: 0 INPUT
		NetFlow* TXSWING_A0_B; // net ID: TXSWING lsb: 0  msb: 0 INPUT
		NetFlow* TXSYNCALLIN_A0_B; // net ID: TXSYNCALLIN lsb: 0  msb: 0 INPUT
		NetFlow* TXSYNCIN_A0_B; // net ID: TXSYNCIN lsb: 0  msb: 0 INPUT
		NetFlow* TXSYNCMODE_A0_B; // net ID: TXSYNCMODE lsb: 0  msb: 0 INPUT
		NetFlow* TXSYSCLKSEL_A1_B; // net ID: TXSYSCLKSEL lsb: 0  msb: 1 INPUT
		NetFlow* TXSYSCLKSEL_A0_B; // net ID: TXSYSCLKSEL lsb: 0  msb: 1 INPUT
		NetFlow* TXUSERRDY_A0_B; // net ID: TXUSERRDY lsb: 0  msb: 0 INPUT
		NetFlow* TXUSRCLK_A0_B; // net ID: TXUSRCLK lsb: 0  msb: 0 INPUT
		NetFlow* TXUSRCLK2_A0_B; // net ID: TXUSRCLK2 lsb: 0  msb: 0 INPUT
		
		public: X_GTPE2_CHANNEL(
			const char * name,
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
			NetFlow* DMONITOROUT_A14_B, // net ID: DMONITOROUT lsb: 0  msb: 14 OUTPUT
			NetFlow* DMONITOROUT_A13_B, // net ID: DMONITOROUT lsb: 0  msb: 14 OUTPUT
			NetFlow* DMONITOROUT_A12_B, // net ID: DMONITOROUT lsb: 0  msb: 14 OUTPUT
			NetFlow* DMONITOROUT_A11_B, // net ID: DMONITOROUT lsb: 0  msb: 14 OUTPUT
			NetFlow* DMONITOROUT_A10_B, // net ID: DMONITOROUT lsb: 0  msb: 14 OUTPUT
			NetFlow* DMONITOROUT_A9_B, // net ID: DMONITOROUT lsb: 0  msb: 14 OUTPUT
			NetFlow* DMONITOROUT_A8_B, // net ID: DMONITOROUT lsb: 0  msb: 14 OUTPUT
			NetFlow* DMONITOROUT_A7_B, // net ID: DMONITOROUT lsb: 0  msb: 14 OUTPUT
			NetFlow* DMONITOROUT_A6_B, // net ID: DMONITOROUT lsb: 0  msb: 14 OUTPUT
			NetFlow* DMONITOROUT_A5_B, // net ID: DMONITOROUT lsb: 0  msb: 14 OUTPUT
			NetFlow* DMONITOROUT_A4_B, // net ID: DMONITOROUT lsb: 0  msb: 14 OUTPUT
			NetFlow* DMONITOROUT_A3_B, // net ID: DMONITOROUT lsb: 0  msb: 14 OUTPUT
			NetFlow* DMONITOROUT_A2_B, // net ID: DMONITOROUT lsb: 0  msb: 14 OUTPUT
			NetFlow* DMONITOROUT_A1_B, // net ID: DMONITOROUT lsb: 0  msb: 14 OUTPUT
			NetFlow* DMONITOROUT_A0_B, // net ID: DMONITOROUT lsb: 0  msb: 14 OUTPUT
			NetFlow* DRPDO_A15_B, // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			NetFlow* DRPDO_A14_B, // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			NetFlow* DRPDO_A13_B, // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			NetFlow* DRPDO_A12_B, // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			NetFlow* DRPDO_A11_B, // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			NetFlow* DRPDO_A10_B, // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			NetFlow* DRPDO_A9_B, // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			NetFlow* DRPDO_A8_B, // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			NetFlow* DRPDO_A7_B, // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			NetFlow* DRPDO_A6_B, // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			NetFlow* DRPDO_A5_B, // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			NetFlow* DRPDO_A4_B, // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			NetFlow* DRPDO_A3_B, // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			NetFlow* DRPDO_A2_B, // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			NetFlow* DRPDO_A1_B, // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			NetFlow* DRPDO_A0_B, // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			NetFlow* DRPRDY_A0_B, // net ID: DRPRDY lsb: 0  msb: 0 OUTPUT
			NetFlow* EYESCANDATAERROR_A0_B, // net ID: EYESCANDATAERROR lsb: 0  msb: 0 OUTPUT
			NetFlow* GTPTXN_A0_B, // net ID: GTPTXN lsb: 0  msb: 0 OUTPUT
			NetFlow* GTPTXP_A0_B, // net ID: GTPTXP lsb: 0  msb: 0 OUTPUT
			NetFlow* PCSRSVDOUT_A15_B, // net ID: PCSRSVDOUT lsb: 0  msb: 15 OUTPUT
			NetFlow* PCSRSVDOUT_A14_B, // net ID: PCSRSVDOUT lsb: 0  msb: 15 OUTPUT
			NetFlow* PCSRSVDOUT_A13_B, // net ID: PCSRSVDOUT lsb: 0  msb: 15 OUTPUT
			NetFlow* PCSRSVDOUT_A12_B, // net ID: PCSRSVDOUT lsb: 0  msb: 15 OUTPUT
			NetFlow* PCSRSVDOUT_A11_B, // net ID: PCSRSVDOUT lsb: 0  msb: 15 OUTPUT
			NetFlow* PCSRSVDOUT_A10_B, // net ID: PCSRSVDOUT lsb: 0  msb: 15 OUTPUT
			NetFlow* PCSRSVDOUT_A9_B, // net ID: PCSRSVDOUT lsb: 0  msb: 15 OUTPUT
			NetFlow* PCSRSVDOUT_A8_B, // net ID: PCSRSVDOUT lsb: 0  msb: 15 OUTPUT
			NetFlow* PCSRSVDOUT_A7_B, // net ID: PCSRSVDOUT lsb: 0  msb: 15 OUTPUT
			NetFlow* PCSRSVDOUT_A6_B, // net ID: PCSRSVDOUT lsb: 0  msb: 15 OUTPUT
			NetFlow* PCSRSVDOUT_A5_B, // net ID: PCSRSVDOUT lsb: 0  msb: 15 OUTPUT
			NetFlow* PCSRSVDOUT_A4_B, // net ID: PCSRSVDOUT lsb: 0  msb: 15 OUTPUT
			NetFlow* PCSRSVDOUT_A3_B, // net ID: PCSRSVDOUT lsb: 0  msb: 15 OUTPUT
			NetFlow* PCSRSVDOUT_A2_B, // net ID: PCSRSVDOUT lsb: 0  msb: 15 OUTPUT
			NetFlow* PCSRSVDOUT_A1_B, // net ID: PCSRSVDOUT lsb: 0  msb: 15 OUTPUT
			NetFlow* PCSRSVDOUT_A0_B, // net ID: PCSRSVDOUT lsb: 0  msb: 15 OUTPUT
			NetFlow* PHYSTATUS_A0_B, // net ID: PHYSTATUS lsb: 0  msb: 0 OUTPUT
			NetFlow* PMARSVDOUT0_A0_B, // net ID: PMARSVDOUT0 lsb: 0  msb: 0 OUTPUT
			NetFlow* PMARSVDOUT1_A0_B, // net ID: PMARSVDOUT1 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXBUFSTATUS_A2_B, // net ID: RXBUFSTATUS lsb: 0  msb: 2 OUTPUT
			NetFlow* RXBUFSTATUS_A1_B, // net ID: RXBUFSTATUS lsb: 0  msb: 2 OUTPUT
			NetFlow* RXBUFSTATUS_A0_B, // net ID: RXBUFSTATUS lsb: 0  msb: 2 OUTPUT
			NetFlow* RXBYTEISALIGNED_A0_B, // net ID: RXBYTEISALIGNED lsb: 0  msb: 0 OUTPUT
			NetFlow* RXBYTEREALIGN_A0_B, // net ID: RXBYTEREALIGN lsb: 0  msb: 0 OUTPUT
			NetFlow* RXCDRLOCK_A0_B, // net ID: RXCDRLOCK lsb: 0  msb: 0 OUTPUT
			NetFlow* RXCHANBONDSEQ_A0_B, // net ID: RXCHANBONDSEQ lsb: 0  msb: 0 OUTPUT
			NetFlow* RXCHANISALIGNED_A0_B, // net ID: RXCHANISALIGNED lsb: 0  msb: 0 OUTPUT
			NetFlow* RXCHANREALIGN_A0_B, // net ID: RXCHANREALIGN lsb: 0  msb: 0 OUTPUT
			NetFlow* RXCHARISCOMMA_A3_B, // net ID: RXCHARISCOMMA lsb: 0  msb: 3 OUTPUT
			NetFlow* RXCHARISCOMMA_A2_B, // net ID: RXCHARISCOMMA lsb: 0  msb: 3 OUTPUT
			NetFlow* RXCHARISCOMMA_A1_B, // net ID: RXCHARISCOMMA lsb: 0  msb: 3 OUTPUT
			NetFlow* RXCHARISCOMMA_A0_B, // net ID: RXCHARISCOMMA lsb: 0  msb: 3 OUTPUT
			NetFlow* RXCHARISK_A3_B, // net ID: RXCHARISK lsb: 0  msb: 3 OUTPUT
			NetFlow* RXCHARISK_A2_B, // net ID: RXCHARISK lsb: 0  msb: 3 OUTPUT
			NetFlow* RXCHARISK_A1_B, // net ID: RXCHARISK lsb: 0  msb: 3 OUTPUT
			NetFlow* RXCHARISK_A0_B, // net ID: RXCHARISK lsb: 0  msb: 3 OUTPUT
			NetFlow* RXCHBONDO_A3_B, // net ID: RXCHBONDO lsb: 0  msb: 3 OUTPUT
			NetFlow* RXCHBONDO_A2_B, // net ID: RXCHBONDO lsb: 0  msb: 3 OUTPUT
			NetFlow* RXCHBONDO_A1_B, // net ID: RXCHBONDO lsb: 0  msb: 3 OUTPUT
			NetFlow* RXCHBONDO_A0_B, // net ID: RXCHBONDO lsb: 0  msb: 3 OUTPUT
			NetFlow* RXCLKCORCNT_A1_B, // net ID: RXCLKCORCNT lsb: 0  msb: 1 OUTPUT
			NetFlow* RXCLKCORCNT_A0_B, // net ID: RXCLKCORCNT lsb: 0  msb: 1 OUTPUT
			NetFlow* RXCOMINITDET_A0_B, // net ID: RXCOMINITDET lsb: 0  msb: 0 OUTPUT
			NetFlow* RXCOMMADET_A0_B, // net ID: RXCOMMADET lsb: 0  msb: 0 OUTPUT
			NetFlow* RXCOMSASDET_A0_B, // net ID: RXCOMSASDET lsb: 0  msb: 0 OUTPUT
			NetFlow* RXCOMWAKEDET_A0_B, // net ID: RXCOMWAKEDET lsb: 0  msb: 0 OUTPUT
			NetFlow* RXDATA_A31_B, // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA_A30_B, // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA_A29_B, // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA_A28_B, // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA_A27_B, // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA_A26_B, // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA_A25_B, // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA_A24_B, // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA_A23_B, // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA_A22_B, // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA_A21_B, // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA_A20_B, // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA_A19_B, // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA_A18_B, // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA_A17_B, // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA_A16_B, // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA_A15_B, // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA_A14_B, // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA_A13_B, // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA_A12_B, // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA_A11_B, // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA_A10_B, // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA_A9_B, // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA_A8_B, // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA_A7_B, // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA_A6_B, // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA_A5_B, // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA_A4_B, // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA_A3_B, // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA_A2_B, // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA_A1_B, // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATA_A0_B, // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
			NetFlow* RXDATAVALID_A1_B, // net ID: RXDATAVALID lsb: 0  msb: 1 OUTPUT
			NetFlow* RXDATAVALID_A0_B, // net ID: RXDATAVALID lsb: 0  msb: 1 OUTPUT
			NetFlow* RXDISPERR_A3_B, // net ID: RXDISPERR lsb: 0  msb: 3 OUTPUT
			NetFlow* RXDISPERR_A2_B, // net ID: RXDISPERR lsb: 0  msb: 3 OUTPUT
			NetFlow* RXDISPERR_A1_B, // net ID: RXDISPERR lsb: 0  msb: 3 OUTPUT
			NetFlow* RXDISPERR_A0_B, // net ID: RXDISPERR lsb: 0  msb: 3 OUTPUT
			NetFlow* RXDLYSRESETDONE_A0_B, // net ID: RXDLYSRESETDONE lsb: 0  msb: 0 OUTPUT
			NetFlow* RXELECIDLE_A0_B, // net ID: RXELECIDLE lsb: 0  msb: 0 OUTPUT
			NetFlow* RXHEADER_A2_B, // net ID: RXHEADER lsb: 0  msb: 2 OUTPUT
			NetFlow* RXHEADER_A1_B, // net ID: RXHEADER lsb: 0  msb: 2 OUTPUT
			NetFlow* RXHEADER_A0_B, // net ID: RXHEADER lsb: 0  msb: 2 OUTPUT
			NetFlow* RXHEADERVALID_A0_B, // net ID: RXHEADERVALID lsb: 0  msb: 0 OUTPUT
			NetFlow* RXNOTINTABLE_A3_B, // net ID: RXNOTINTABLE lsb: 0  msb: 3 OUTPUT
			NetFlow* RXNOTINTABLE_A2_B, // net ID: RXNOTINTABLE lsb: 0  msb: 3 OUTPUT
			NetFlow* RXNOTINTABLE_A1_B, // net ID: RXNOTINTABLE lsb: 0  msb: 3 OUTPUT
			NetFlow* RXNOTINTABLE_A0_B, // net ID: RXNOTINTABLE lsb: 0  msb: 3 OUTPUT
			NetFlow* RXOSINTDONE_A0_B, // net ID: RXOSINTDONE lsb: 0  msb: 0 OUTPUT
			NetFlow* RXOSINTSTARTED_A0_B, // net ID: RXOSINTSTARTED lsb: 0  msb: 0 OUTPUT
			NetFlow* RXOSINTSTROBEDONE_A0_B, // net ID: RXOSINTSTROBEDONE lsb: 0  msb: 0 OUTPUT
			NetFlow* RXOSINTSTROBESTARTED_A0_B, // net ID: RXOSINTSTROBESTARTED lsb: 0  msb: 0 OUTPUT
			NetFlow* RXOUTCLK_A0_B, // net ID: RXOUTCLK lsb: 0  msb: 0 OUTPUT
			NetFlow* RXOUTCLKFABRIC_A0_B, // net ID: RXOUTCLKFABRIC lsb: 0  msb: 0 OUTPUT
			NetFlow* RXOUTCLKPCS_A0_B, // net ID: RXOUTCLKPCS lsb: 0  msb: 0 OUTPUT
			NetFlow* RXPHALIGNDONE_A0_B, // net ID: RXPHALIGNDONE lsb: 0  msb: 0 OUTPUT
			NetFlow* RXPHMONITOR_A4_B, // net ID: RXPHMONITOR lsb: 0  msb: 4 OUTPUT
			NetFlow* RXPHMONITOR_A3_B, // net ID: RXPHMONITOR lsb: 0  msb: 4 OUTPUT
			NetFlow* RXPHMONITOR_A2_B, // net ID: RXPHMONITOR lsb: 0  msb: 4 OUTPUT
			NetFlow* RXPHMONITOR_A1_B, // net ID: RXPHMONITOR lsb: 0  msb: 4 OUTPUT
			NetFlow* RXPHMONITOR_A0_B, // net ID: RXPHMONITOR lsb: 0  msb: 4 OUTPUT
			NetFlow* RXPHSLIPMONITOR_A4_B, // net ID: RXPHSLIPMONITOR lsb: 0  msb: 4 OUTPUT
			NetFlow* RXPHSLIPMONITOR_A3_B, // net ID: RXPHSLIPMONITOR lsb: 0  msb: 4 OUTPUT
			NetFlow* RXPHSLIPMONITOR_A2_B, // net ID: RXPHSLIPMONITOR lsb: 0  msb: 4 OUTPUT
			NetFlow* RXPHSLIPMONITOR_A1_B, // net ID: RXPHSLIPMONITOR lsb: 0  msb: 4 OUTPUT
			NetFlow* RXPHSLIPMONITOR_A0_B, // net ID: RXPHSLIPMONITOR lsb: 0  msb: 4 OUTPUT
			NetFlow* RXPMARESETDONE_A0_B, // net ID: RXPMARESETDONE lsb: 0  msb: 0 OUTPUT
			NetFlow* RXPRBSERR_A0_B, // net ID: RXPRBSERR lsb: 0  msb: 0 OUTPUT
			NetFlow* RXRATEDONE_A0_B, // net ID: RXRATEDONE lsb: 0  msb: 0 OUTPUT
			NetFlow* RXRESETDONE_A0_B, // net ID: RXRESETDONE lsb: 0  msb: 0 OUTPUT
			NetFlow* RXSTARTOFSEQ_A1_B, // net ID: RXSTARTOFSEQ lsb: 0  msb: 1 OUTPUT
			NetFlow* RXSTARTOFSEQ_A0_B, // net ID: RXSTARTOFSEQ lsb: 0  msb: 1 OUTPUT
			NetFlow* RXSTATUS_A2_B, // net ID: RXSTATUS lsb: 0  msb: 2 OUTPUT
			NetFlow* RXSTATUS_A1_B, // net ID: RXSTATUS lsb: 0  msb: 2 OUTPUT
			NetFlow* RXSTATUS_A0_B, // net ID: RXSTATUS lsb: 0  msb: 2 OUTPUT
			NetFlow* RXSYNCDONE_A0_B, // net ID: RXSYNCDONE lsb: 0  msb: 0 OUTPUT
			NetFlow* RXSYNCOUT_A0_B, // net ID: RXSYNCOUT lsb: 0  msb: 0 OUTPUT
			NetFlow* RXVALID_A0_B, // net ID: RXVALID lsb: 0  msb: 0 OUTPUT
			NetFlow* TXBUFSTATUS_A1_B, // net ID: TXBUFSTATUS lsb: 0  msb: 1 OUTPUT
			NetFlow* TXBUFSTATUS_A0_B, // net ID: TXBUFSTATUS lsb: 0  msb: 1 OUTPUT
			NetFlow* TXCOMFINISH_A0_B, // net ID: TXCOMFINISH lsb: 0  msb: 0 OUTPUT
			NetFlow* TXDLYSRESETDONE_A0_B, // net ID: TXDLYSRESETDONE lsb: 0  msb: 0 OUTPUT
			NetFlow* TXGEARBOXREADY_A0_B, // net ID: TXGEARBOXREADY lsb: 0  msb: 0 OUTPUT
			NetFlow* TXOUTCLK_A0_B, // net ID: TXOUTCLK lsb: 0  msb: 0 OUTPUT
			NetFlow* TXOUTCLKFABRIC_A0_B, // net ID: TXOUTCLKFABRIC lsb: 0  msb: 0 OUTPUT
			NetFlow* TXOUTCLKPCS_A0_B, // net ID: TXOUTCLKPCS lsb: 0  msb: 0 OUTPUT
			NetFlow* TXPHALIGNDONE_A0_B, // net ID: TXPHALIGNDONE lsb: 0  msb: 0 OUTPUT
			NetFlow* TXPHINITDONE_A0_B, // net ID: TXPHINITDONE lsb: 0  msb: 0 OUTPUT
			NetFlow* TXPMARESETDONE_A0_B, // net ID: TXPMARESETDONE lsb: 0  msb: 0 OUTPUT
			NetFlow* TXRATEDONE_A0_B, // net ID: TXRATEDONE lsb: 0  msb: 0 OUTPUT
			NetFlow* TXRESETDONE_A0_B, // net ID: TXRESETDONE lsb: 0  msb: 0 OUTPUT
			NetFlow* TXSYNCDONE_A0_B, // net ID: TXSYNCDONE lsb: 0  msb: 0 OUTPUT
			NetFlow* TXSYNCOUT_A0_B, // net ID: TXSYNCOUT lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGRESET_A0_B, // net ID: CFGRESET lsb: 0  msb: 0 INPUT
			NetFlow* CLKRSVD0_A0_B, // net ID: CLKRSVD0 lsb: 0  msb: 0 INPUT
			NetFlow* CLKRSVD1_A0_B, // net ID: CLKRSVD1 lsb: 0  msb: 0 INPUT
			NetFlow* DMONFIFORESET_A0_B, // net ID: DMONFIFORESET lsb: 0  msb: 0 INPUT
			NetFlow* DMONITORCLK_A0_B, // net ID: DMONITORCLK lsb: 0  msb: 0 INPUT
			NetFlow* DRPADDR_A8_B, // net ID: DRPADDR lsb: 0  msb: 8 INPUT
			NetFlow* DRPADDR_A7_B, // net ID: DRPADDR lsb: 0  msb: 8 INPUT
			NetFlow* DRPADDR_A6_B, // net ID: DRPADDR lsb: 0  msb: 8 INPUT
			NetFlow* DRPADDR_A5_B, // net ID: DRPADDR lsb: 0  msb: 8 INPUT
			NetFlow* DRPADDR_A4_B, // net ID: DRPADDR lsb: 0  msb: 8 INPUT
			NetFlow* DRPADDR_A3_B, // net ID: DRPADDR lsb: 0  msb: 8 INPUT
			NetFlow* DRPADDR_A2_B, // net ID: DRPADDR lsb: 0  msb: 8 INPUT
			NetFlow* DRPADDR_A1_B, // net ID: DRPADDR lsb: 0  msb: 8 INPUT
			NetFlow* DRPADDR_A0_B, // net ID: DRPADDR lsb: 0  msb: 8 INPUT
			NetFlow* DRPCLK_A0_B, // net ID: DRPCLK lsb: 0  msb: 0 INPUT
			NetFlow* DRPDI_A15_B, // net ID: DRPDI lsb: 0  msb: 15 INPUT
			NetFlow* DRPDI_A14_B, // net ID: DRPDI lsb: 0  msb: 15 INPUT
			NetFlow* DRPDI_A13_B, // net ID: DRPDI lsb: 0  msb: 15 INPUT
			NetFlow* DRPDI_A12_B, // net ID: DRPDI lsb: 0  msb: 15 INPUT
			NetFlow* DRPDI_A11_B, // net ID: DRPDI lsb: 0  msb: 15 INPUT
			NetFlow* DRPDI_A10_B, // net ID: DRPDI lsb: 0  msb: 15 INPUT
			NetFlow* DRPDI_A9_B, // net ID: DRPDI lsb: 0  msb: 15 INPUT
			NetFlow* DRPDI_A8_B, // net ID: DRPDI lsb: 0  msb: 15 INPUT
			NetFlow* DRPDI_A7_B, // net ID: DRPDI lsb: 0  msb: 15 INPUT
			NetFlow* DRPDI_A6_B, // net ID: DRPDI lsb: 0  msb: 15 INPUT
			NetFlow* DRPDI_A5_B, // net ID: DRPDI lsb: 0  msb: 15 INPUT
			NetFlow* DRPDI_A4_B, // net ID: DRPDI lsb: 0  msb: 15 INPUT
			NetFlow* DRPDI_A3_B, // net ID: DRPDI lsb: 0  msb: 15 INPUT
			NetFlow* DRPDI_A2_B, // net ID: DRPDI lsb: 0  msb: 15 INPUT
			NetFlow* DRPDI_A1_B, // net ID: DRPDI lsb: 0  msb: 15 INPUT
			NetFlow* DRPDI_A0_B, // net ID: DRPDI lsb: 0  msb: 15 INPUT
			NetFlow* DRPEN_A0_B, // net ID: DRPEN lsb: 0  msb: 0 INPUT
			NetFlow* DRPWE_A0_B, // net ID: DRPWE lsb: 0  msb: 0 INPUT
			NetFlow* EYESCANMODE_A0_B, // net ID: EYESCANMODE lsb: 0  msb: 0 INPUT
			NetFlow* EYESCANRESET_A0_B, // net ID: EYESCANRESET lsb: 0  msb: 0 INPUT
			NetFlow* EYESCANTRIGGER_A0_B, // net ID: EYESCANTRIGGER lsb: 0  msb: 0 INPUT
			NetFlow* GTPRXN_A0_B, // net ID: GTPRXN lsb: 0  msb: 0 INPUT
			NetFlow* GTPRXP_A0_B, // net ID: GTPRXP lsb: 0  msb: 0 INPUT
			NetFlow* GTRESETSEL_A0_B, // net ID: GTRESETSEL lsb: 0  msb: 0 INPUT
			NetFlow* GTRSVD_A15_B, // net ID: GTRSVD lsb: 0  msb: 15 INPUT
			NetFlow* GTRSVD_A14_B, // net ID: GTRSVD lsb: 0  msb: 15 INPUT
			NetFlow* GTRSVD_A13_B, // net ID: GTRSVD lsb: 0  msb: 15 INPUT
			NetFlow* GTRSVD_A12_B, // net ID: GTRSVD lsb: 0  msb: 15 INPUT
			NetFlow* GTRSVD_A11_B, // net ID: GTRSVD lsb: 0  msb: 15 INPUT
			NetFlow* GTRSVD_A10_B, // net ID: GTRSVD lsb: 0  msb: 15 INPUT
			NetFlow* GTRSVD_A9_B, // net ID: GTRSVD lsb: 0  msb: 15 INPUT
			NetFlow* GTRSVD_A8_B, // net ID: GTRSVD lsb: 0  msb: 15 INPUT
			NetFlow* GTRSVD_A7_B, // net ID: GTRSVD lsb: 0  msb: 15 INPUT
			NetFlow* GTRSVD_A6_B, // net ID: GTRSVD lsb: 0  msb: 15 INPUT
			NetFlow* GTRSVD_A5_B, // net ID: GTRSVD lsb: 0  msb: 15 INPUT
			NetFlow* GTRSVD_A4_B, // net ID: GTRSVD lsb: 0  msb: 15 INPUT
			NetFlow* GTRSVD_A3_B, // net ID: GTRSVD lsb: 0  msb: 15 INPUT
			NetFlow* GTRSVD_A2_B, // net ID: GTRSVD lsb: 0  msb: 15 INPUT
			NetFlow* GTRSVD_A1_B, // net ID: GTRSVD lsb: 0  msb: 15 INPUT
			NetFlow* GTRSVD_A0_B, // net ID: GTRSVD lsb: 0  msb: 15 INPUT
			NetFlow* GTRXRESET_A0_B, // net ID: GTRXRESET lsb: 0  msb: 0 INPUT
			NetFlow* GTTXRESET_A0_B, // net ID: GTTXRESET lsb: 0  msb: 0 INPUT
			NetFlow* LOOPBACK_A2_B, // net ID: LOOPBACK lsb: 0  msb: 2 INPUT
			NetFlow* LOOPBACK_A1_B, // net ID: LOOPBACK lsb: 0  msb: 2 INPUT
			NetFlow* LOOPBACK_A0_B, // net ID: LOOPBACK lsb: 0  msb: 2 INPUT
			NetFlow* PCSRSVDIN_A15_B, // net ID: PCSRSVDIN lsb: 0  msb: 15 INPUT
			NetFlow* PCSRSVDIN_A14_B, // net ID: PCSRSVDIN lsb: 0  msb: 15 INPUT
			NetFlow* PCSRSVDIN_A13_B, // net ID: PCSRSVDIN lsb: 0  msb: 15 INPUT
			NetFlow* PCSRSVDIN_A12_B, // net ID: PCSRSVDIN lsb: 0  msb: 15 INPUT
			NetFlow* PCSRSVDIN_A11_B, // net ID: PCSRSVDIN lsb: 0  msb: 15 INPUT
			NetFlow* PCSRSVDIN_A10_B, // net ID: PCSRSVDIN lsb: 0  msb: 15 INPUT
			NetFlow* PCSRSVDIN_A9_B, // net ID: PCSRSVDIN lsb: 0  msb: 15 INPUT
			NetFlow* PCSRSVDIN_A8_B, // net ID: PCSRSVDIN lsb: 0  msb: 15 INPUT
			NetFlow* PCSRSVDIN_A7_B, // net ID: PCSRSVDIN lsb: 0  msb: 15 INPUT
			NetFlow* PCSRSVDIN_A6_B, // net ID: PCSRSVDIN lsb: 0  msb: 15 INPUT
			NetFlow* PCSRSVDIN_A5_B, // net ID: PCSRSVDIN lsb: 0  msb: 15 INPUT
			NetFlow* PCSRSVDIN_A4_B, // net ID: PCSRSVDIN lsb: 0  msb: 15 INPUT
			NetFlow* PCSRSVDIN_A3_B, // net ID: PCSRSVDIN lsb: 0  msb: 15 INPUT
			NetFlow* PCSRSVDIN_A2_B, // net ID: PCSRSVDIN lsb: 0  msb: 15 INPUT
			NetFlow* PCSRSVDIN_A1_B, // net ID: PCSRSVDIN lsb: 0  msb: 15 INPUT
			NetFlow* PCSRSVDIN_A0_B, // net ID: PCSRSVDIN lsb: 0  msb: 15 INPUT
			NetFlow* PLL0CLK_A0_B, // net ID: PLL0CLK lsb: 0  msb: 0 INPUT
			NetFlow* PLL0REFCLK_A0_B, // net ID: PLL0REFCLK lsb: 0  msb: 0 INPUT
			NetFlow* PLL1CLK_A0_B, // net ID: PLL1CLK lsb: 0  msb: 0 INPUT
			NetFlow* PLL1REFCLK_A0_B, // net ID: PLL1REFCLK lsb: 0  msb: 0 INPUT
			NetFlow* PMARSVDIN0_A0_B, // net ID: PMARSVDIN0 lsb: 0  msb: 0 INPUT
			NetFlow* PMARSVDIN1_A0_B, // net ID: PMARSVDIN1 lsb: 0  msb: 0 INPUT
			NetFlow* PMARSVDIN2_A0_B, // net ID: PMARSVDIN2 lsb: 0  msb: 0 INPUT
			NetFlow* PMARSVDIN3_A0_B, // net ID: PMARSVDIN3 lsb: 0  msb: 0 INPUT
			NetFlow* PMARSVDIN4_A0_B, // net ID: PMARSVDIN4 lsb: 0  msb: 0 INPUT
			NetFlow* RESETOVRD_A0_B, // net ID: RESETOVRD lsb: 0  msb: 0 INPUT
			NetFlow* RX8B10BEN_A0_B, // net ID: RX8B10BEN lsb: 0  msb: 0 INPUT
			NetFlow* RXADAPTSELTEST_A13_B, // net ID: RXADAPTSELTEST lsb: 0  msb: 13 INPUT
			NetFlow* RXADAPTSELTEST_A12_B, // net ID: RXADAPTSELTEST lsb: 0  msb: 13 INPUT
			NetFlow* RXADAPTSELTEST_A11_B, // net ID: RXADAPTSELTEST lsb: 0  msb: 13 INPUT
			NetFlow* RXADAPTSELTEST_A10_B, // net ID: RXADAPTSELTEST lsb: 0  msb: 13 INPUT
			NetFlow* RXADAPTSELTEST_A9_B, // net ID: RXADAPTSELTEST lsb: 0  msb: 13 INPUT
			NetFlow* RXADAPTSELTEST_A8_B, // net ID: RXADAPTSELTEST lsb: 0  msb: 13 INPUT
			NetFlow* RXADAPTSELTEST_A7_B, // net ID: RXADAPTSELTEST lsb: 0  msb: 13 INPUT
			NetFlow* RXADAPTSELTEST_A6_B, // net ID: RXADAPTSELTEST lsb: 0  msb: 13 INPUT
			NetFlow* RXADAPTSELTEST_A5_B, // net ID: RXADAPTSELTEST lsb: 0  msb: 13 INPUT
			NetFlow* RXADAPTSELTEST_A4_B, // net ID: RXADAPTSELTEST lsb: 0  msb: 13 INPUT
			NetFlow* RXADAPTSELTEST_A3_B, // net ID: RXADAPTSELTEST lsb: 0  msb: 13 INPUT
			NetFlow* RXADAPTSELTEST_A2_B, // net ID: RXADAPTSELTEST lsb: 0  msb: 13 INPUT
			NetFlow* RXADAPTSELTEST_A1_B, // net ID: RXADAPTSELTEST lsb: 0  msb: 13 INPUT
			NetFlow* RXADAPTSELTEST_A0_B, // net ID: RXADAPTSELTEST lsb: 0  msb: 13 INPUT
			NetFlow* RXBUFRESET_A0_B, // net ID: RXBUFRESET lsb: 0  msb: 0 INPUT
			NetFlow* RXCDRFREQRESET_A0_B, // net ID: RXCDRFREQRESET lsb: 0  msb: 0 INPUT
			NetFlow* RXCDRHOLD_A0_B, // net ID: RXCDRHOLD lsb: 0  msb: 0 INPUT
			NetFlow* RXCDROVRDEN_A0_B, // net ID: RXCDROVRDEN lsb: 0  msb: 0 INPUT
			NetFlow* RXCDRRESET_A0_B, // net ID: RXCDRRESET lsb: 0  msb: 0 INPUT
			NetFlow* RXCDRRESETRSV_A0_B, // net ID: RXCDRRESETRSV lsb: 0  msb: 0 INPUT
			NetFlow* RXCHBONDEN_A0_B, // net ID: RXCHBONDEN lsb: 0  msb: 0 INPUT
			NetFlow* RXCHBONDI_A3_B, // net ID: RXCHBONDI lsb: 0  msb: 3 INPUT
			NetFlow* RXCHBONDI_A2_B, // net ID: RXCHBONDI lsb: 0  msb: 3 INPUT
			NetFlow* RXCHBONDI_A1_B, // net ID: RXCHBONDI lsb: 0  msb: 3 INPUT
			NetFlow* RXCHBONDI_A0_B, // net ID: RXCHBONDI lsb: 0  msb: 3 INPUT
			NetFlow* RXCHBONDLEVEL_A2_B, // net ID: RXCHBONDLEVEL lsb: 0  msb: 2 INPUT
			NetFlow* RXCHBONDLEVEL_A1_B, // net ID: RXCHBONDLEVEL lsb: 0  msb: 2 INPUT
			NetFlow* RXCHBONDLEVEL_A0_B, // net ID: RXCHBONDLEVEL lsb: 0  msb: 2 INPUT
			NetFlow* RXCHBONDMASTER_A0_B, // net ID: RXCHBONDMASTER lsb: 0  msb: 0 INPUT
			NetFlow* RXCHBONDSLAVE_A0_B, // net ID: RXCHBONDSLAVE lsb: 0  msb: 0 INPUT
			NetFlow* RXCOMMADETEN_A0_B, // net ID: RXCOMMADETEN lsb: 0  msb: 0 INPUT
			NetFlow* RXDDIEN_A0_B, // net ID: RXDDIEN lsb: 0  msb: 0 INPUT
			NetFlow* RXDFEXYDEN_A0_B, // net ID: RXDFEXYDEN lsb: 0  msb: 0 INPUT
			NetFlow* RXDLYBYPASS_A0_B, // net ID: RXDLYBYPASS lsb: 0  msb: 0 INPUT
			NetFlow* RXDLYEN_A0_B, // net ID: RXDLYEN lsb: 0  msb: 0 INPUT
			NetFlow* RXDLYOVRDEN_A0_B, // net ID: RXDLYOVRDEN lsb: 0  msb: 0 INPUT
			NetFlow* RXDLYSRESET_A0_B, // net ID: RXDLYSRESET lsb: 0  msb: 0 INPUT
			NetFlow* RXELECIDLEMODE_A1_B, // net ID: RXELECIDLEMODE lsb: 0  msb: 1 INPUT
			NetFlow* RXELECIDLEMODE_A0_B, // net ID: RXELECIDLEMODE lsb: 0  msb: 1 INPUT
			NetFlow* RXGEARBOXSLIP_A0_B, // net ID: RXGEARBOXSLIP lsb: 0  msb: 0 INPUT
			NetFlow* RXLPMHFHOLD_A0_B, // net ID: RXLPMHFHOLD lsb: 0  msb: 0 INPUT
			NetFlow* RXLPMHFOVRDEN_A0_B, // net ID: RXLPMHFOVRDEN lsb: 0  msb: 0 INPUT
			NetFlow* RXLPMLFHOLD_A0_B, // net ID: RXLPMLFHOLD lsb: 0  msb: 0 INPUT
			NetFlow* RXLPMLFOVRDEN_A0_B, // net ID: RXLPMLFOVRDEN lsb: 0  msb: 0 INPUT
			NetFlow* RXLPMOSINTNTRLEN_A0_B, // net ID: RXLPMOSINTNTRLEN lsb: 0  msb: 0 INPUT
			NetFlow* RXLPMRESET_A0_B, // net ID: RXLPMRESET lsb: 0  msb: 0 INPUT
			NetFlow* RXMCOMMAALIGNEN_A0_B, // net ID: RXMCOMMAALIGNEN lsb: 0  msb: 0 INPUT
			NetFlow* RXOOBRESET_A0_B, // net ID: RXOOBRESET lsb: 0  msb: 0 INPUT
			NetFlow* RXOSCALRESET_A0_B, // net ID: RXOSCALRESET lsb: 0  msb: 0 INPUT
			NetFlow* RXOSHOLD_A0_B, // net ID: RXOSHOLD lsb: 0  msb: 0 INPUT
			NetFlow* RXOSINTCFG_A3_B, // net ID: RXOSINTCFG lsb: 0  msb: 3 INPUT
			NetFlow* RXOSINTCFG_A2_B, // net ID: RXOSINTCFG lsb: 0  msb: 3 INPUT
			NetFlow* RXOSINTCFG_A1_B, // net ID: RXOSINTCFG lsb: 0  msb: 3 INPUT
			NetFlow* RXOSINTCFG_A0_B, // net ID: RXOSINTCFG lsb: 0  msb: 3 INPUT
			NetFlow* RXOSINTEN_A0_B, // net ID: RXOSINTEN lsb: 0  msb: 0 INPUT
			NetFlow* RXOSINTHOLD_A0_B, // net ID: RXOSINTHOLD lsb: 0  msb: 0 INPUT
			NetFlow* RXOSINTID0_A3_B, // net ID: RXOSINTID0 lsb: 0  msb: 3 INPUT
			NetFlow* RXOSINTID0_A2_B, // net ID: RXOSINTID0 lsb: 0  msb: 3 INPUT
			NetFlow* RXOSINTID0_A1_B, // net ID: RXOSINTID0 lsb: 0  msb: 3 INPUT
			NetFlow* RXOSINTID0_A0_B, // net ID: RXOSINTID0 lsb: 0  msb: 3 INPUT
			NetFlow* RXOSINTNTRLEN_A0_B, // net ID: RXOSINTNTRLEN lsb: 0  msb: 0 INPUT
			NetFlow* RXOSINTOVRDEN_A0_B, // net ID: RXOSINTOVRDEN lsb: 0  msb: 0 INPUT
			NetFlow* RXOSINTPD_A0_B, // net ID: RXOSINTPD lsb: 0  msb: 0 INPUT
			NetFlow* RXOSINTSTROBE_A0_B, // net ID: RXOSINTSTROBE lsb: 0  msb: 0 INPUT
			NetFlow* RXOSINTTESTOVRDEN_A0_B, // net ID: RXOSINTTESTOVRDEN lsb: 0  msb: 0 INPUT
			NetFlow* RXOSOVRDEN_A0_B, // net ID: RXOSOVRDEN lsb: 0  msb: 0 INPUT
			NetFlow* RXOUTCLKSEL_A2_B, // net ID: RXOUTCLKSEL lsb: 0  msb: 2 INPUT
			NetFlow* RXOUTCLKSEL_A1_B, // net ID: RXOUTCLKSEL lsb: 0  msb: 2 INPUT
			NetFlow* RXOUTCLKSEL_A0_B, // net ID: RXOUTCLKSEL lsb: 0  msb: 2 INPUT
			NetFlow* RXPCOMMAALIGNEN_A0_B, // net ID: RXPCOMMAALIGNEN lsb: 0  msb: 0 INPUT
			NetFlow* RXPCSRESET_A0_B, // net ID: RXPCSRESET lsb: 0  msb: 0 INPUT
			NetFlow* RXPD_A1_B, // net ID: RXPD lsb: 0  msb: 1 INPUT
			NetFlow* RXPD_A0_B, // net ID: RXPD lsb: 0  msb: 1 INPUT
			NetFlow* RXPHALIGN_A0_B, // net ID: RXPHALIGN lsb: 0  msb: 0 INPUT
			NetFlow* RXPHALIGNEN_A0_B, // net ID: RXPHALIGNEN lsb: 0  msb: 0 INPUT
			NetFlow* RXPHDLYPD_A0_B, // net ID: RXPHDLYPD lsb: 0  msb: 0 INPUT
			NetFlow* RXPHDLYRESET_A0_B, // net ID: RXPHDLYRESET lsb: 0  msb: 0 INPUT
			NetFlow* RXPHOVRDEN_A0_B, // net ID: RXPHOVRDEN lsb: 0  msb: 0 INPUT
			NetFlow* RXPMARESET_A0_B, // net ID: RXPMARESET lsb: 0  msb: 0 INPUT
			NetFlow* RXPOLARITY_A0_B, // net ID: RXPOLARITY lsb: 0  msb: 0 INPUT
			NetFlow* RXPRBSCNTRESET_A0_B, // net ID: RXPRBSCNTRESET lsb: 0  msb: 0 INPUT
			NetFlow* RXPRBSSEL_A2_B, // net ID: RXPRBSSEL lsb: 0  msb: 2 INPUT
			NetFlow* RXPRBSSEL_A1_B, // net ID: RXPRBSSEL lsb: 0  msb: 2 INPUT
			NetFlow* RXPRBSSEL_A0_B, // net ID: RXPRBSSEL lsb: 0  msb: 2 INPUT
			NetFlow* RXRATE_A2_B, // net ID: RXRATE lsb: 0  msb: 2 INPUT
			NetFlow* RXRATE_A1_B, // net ID: RXRATE lsb: 0  msb: 2 INPUT
			NetFlow* RXRATE_A0_B, // net ID: RXRATE lsb: 0  msb: 2 INPUT
			NetFlow* RXRATEMODE_A0_B, // net ID: RXRATEMODE lsb: 0  msb: 0 INPUT
			NetFlow* RXSLIDE_A0_B, // net ID: RXSLIDE lsb: 0  msb: 0 INPUT
			NetFlow* RXSYNCALLIN_A0_B, // net ID: RXSYNCALLIN lsb: 0  msb: 0 INPUT
			NetFlow* RXSYNCIN_A0_B, // net ID: RXSYNCIN lsb: 0  msb: 0 INPUT
			NetFlow* RXSYNCMODE_A0_B, // net ID: RXSYNCMODE lsb: 0  msb: 0 INPUT
			NetFlow* RXSYSCLKSEL_A1_B, // net ID: RXSYSCLKSEL lsb: 0  msb: 1 INPUT
			NetFlow* RXSYSCLKSEL_A0_B, // net ID: RXSYSCLKSEL lsb: 0  msb: 1 INPUT
			NetFlow* RXUSERRDY_A0_B, // net ID: RXUSERRDY lsb: 0  msb: 0 INPUT
			NetFlow* RXUSRCLK_A0_B, // net ID: RXUSRCLK lsb: 0  msb: 0 INPUT
			NetFlow* RXUSRCLK2_A0_B, // net ID: RXUSRCLK2 lsb: 0  msb: 0 INPUT
			NetFlow* SETERRSTATUS_A0_B, // net ID: SETERRSTATUS lsb: 0  msb: 0 INPUT
			NetFlow* SIGVALIDCLK_A0_B, // net ID: SIGVALIDCLK lsb: 0  msb: 0 INPUT
			NetFlow* TSTIN_A19_B, // net ID: TSTIN lsb: 0  msb: 19 INPUT
			NetFlow* TSTIN_A18_B, // net ID: TSTIN lsb: 0  msb: 19 INPUT
			NetFlow* TSTIN_A17_B, // net ID: TSTIN lsb: 0  msb: 19 INPUT
			NetFlow* TSTIN_A16_B, // net ID: TSTIN lsb: 0  msb: 19 INPUT
			NetFlow* TSTIN_A15_B, // net ID: TSTIN lsb: 0  msb: 19 INPUT
			NetFlow* TSTIN_A14_B, // net ID: TSTIN lsb: 0  msb: 19 INPUT
			NetFlow* TSTIN_A13_B, // net ID: TSTIN lsb: 0  msb: 19 INPUT
			NetFlow* TSTIN_A12_B, // net ID: TSTIN lsb: 0  msb: 19 INPUT
			NetFlow* TSTIN_A11_B, // net ID: TSTIN lsb: 0  msb: 19 INPUT
			NetFlow* TSTIN_A10_B, // net ID: TSTIN lsb: 0  msb: 19 INPUT
			NetFlow* TSTIN_A9_B, // net ID: TSTIN lsb: 0  msb: 19 INPUT
			NetFlow* TSTIN_A8_B, // net ID: TSTIN lsb: 0  msb: 19 INPUT
			NetFlow* TSTIN_A7_B, // net ID: TSTIN lsb: 0  msb: 19 INPUT
			NetFlow* TSTIN_A6_B, // net ID: TSTIN lsb: 0  msb: 19 INPUT
			NetFlow* TSTIN_A5_B, // net ID: TSTIN lsb: 0  msb: 19 INPUT
			NetFlow* TSTIN_A4_B, // net ID: TSTIN lsb: 0  msb: 19 INPUT
			NetFlow* TSTIN_A3_B, // net ID: TSTIN lsb: 0  msb: 19 INPUT
			NetFlow* TSTIN_A2_B, // net ID: TSTIN lsb: 0  msb: 19 INPUT
			NetFlow* TSTIN_A1_B, // net ID: TSTIN lsb: 0  msb: 19 INPUT
			NetFlow* TSTIN_A0_B, // net ID: TSTIN lsb: 0  msb: 19 INPUT
			NetFlow* TX8B10BBYPASS_A3_B, // net ID: TX8B10BBYPASS lsb: 0  msb: 3 INPUT
			NetFlow* TX8B10BBYPASS_A2_B, // net ID: TX8B10BBYPASS lsb: 0  msb: 3 INPUT
			NetFlow* TX8B10BBYPASS_A1_B, // net ID: TX8B10BBYPASS lsb: 0  msb: 3 INPUT
			NetFlow* TX8B10BBYPASS_A0_B, // net ID: TX8B10BBYPASS lsb: 0  msb: 3 INPUT
			NetFlow* TX8B10BEN_A0_B, // net ID: TX8B10BEN lsb: 0  msb: 0 INPUT
			NetFlow* TXBUFDIFFCTRL_A2_B, // net ID: TXBUFDIFFCTRL lsb: 0  msb: 2 INPUT
			NetFlow* TXBUFDIFFCTRL_A1_B, // net ID: TXBUFDIFFCTRL lsb: 0  msb: 2 INPUT
			NetFlow* TXBUFDIFFCTRL_A0_B, // net ID: TXBUFDIFFCTRL lsb: 0  msb: 2 INPUT
			NetFlow* TXCHARDISPMODE_A3_B, // net ID: TXCHARDISPMODE lsb: 0  msb: 3 INPUT
			NetFlow* TXCHARDISPMODE_A2_B, // net ID: TXCHARDISPMODE lsb: 0  msb: 3 INPUT
			NetFlow* TXCHARDISPMODE_A1_B, // net ID: TXCHARDISPMODE lsb: 0  msb: 3 INPUT
			NetFlow* TXCHARDISPMODE_A0_B, // net ID: TXCHARDISPMODE lsb: 0  msb: 3 INPUT
			NetFlow* TXCHARDISPVAL_A3_B, // net ID: TXCHARDISPVAL lsb: 0  msb: 3 INPUT
			NetFlow* TXCHARDISPVAL_A2_B, // net ID: TXCHARDISPVAL lsb: 0  msb: 3 INPUT
			NetFlow* TXCHARDISPVAL_A1_B, // net ID: TXCHARDISPVAL lsb: 0  msb: 3 INPUT
			NetFlow* TXCHARDISPVAL_A0_B, // net ID: TXCHARDISPVAL lsb: 0  msb: 3 INPUT
			NetFlow* TXCHARISK_A3_B, // net ID: TXCHARISK lsb: 0  msb: 3 INPUT
			NetFlow* TXCHARISK_A2_B, // net ID: TXCHARISK lsb: 0  msb: 3 INPUT
			NetFlow* TXCHARISK_A1_B, // net ID: TXCHARISK lsb: 0  msb: 3 INPUT
			NetFlow* TXCHARISK_A0_B, // net ID: TXCHARISK lsb: 0  msb: 3 INPUT
			NetFlow* TXCOMINIT_A0_B, // net ID: TXCOMINIT lsb: 0  msb: 0 INPUT
			NetFlow* TXCOMSAS_A0_B, // net ID: TXCOMSAS lsb: 0  msb: 0 INPUT
			NetFlow* TXCOMWAKE_A0_B, // net ID: TXCOMWAKE lsb: 0  msb: 0 INPUT
			NetFlow* TXDATA_A31_B, // net ID: TXDATA lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA_A30_B, // net ID: TXDATA lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA_A29_B, // net ID: TXDATA lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA_A28_B, // net ID: TXDATA lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA_A27_B, // net ID: TXDATA lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA_A26_B, // net ID: TXDATA lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA_A25_B, // net ID: TXDATA lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA_A24_B, // net ID: TXDATA lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA_A23_B, // net ID: TXDATA lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA_A22_B, // net ID: TXDATA lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA_A21_B, // net ID: TXDATA lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA_A20_B, // net ID: TXDATA lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA_A19_B, // net ID: TXDATA lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA_A18_B, // net ID: TXDATA lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA_A17_B, // net ID: TXDATA lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA_A16_B, // net ID: TXDATA lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA_A15_B, // net ID: TXDATA lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA_A14_B, // net ID: TXDATA lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA_A13_B, // net ID: TXDATA lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA_A12_B, // net ID: TXDATA lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA_A11_B, // net ID: TXDATA lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA_A10_B, // net ID: TXDATA lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA_A9_B, // net ID: TXDATA lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA_A8_B, // net ID: TXDATA lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA_A7_B, // net ID: TXDATA lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA_A6_B, // net ID: TXDATA lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA_A5_B, // net ID: TXDATA lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA_A4_B, // net ID: TXDATA lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA_A3_B, // net ID: TXDATA lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA_A2_B, // net ID: TXDATA lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA_A1_B, // net ID: TXDATA lsb: 0  msb: 31 INPUT
			NetFlow* TXDATA_A0_B, // net ID: TXDATA lsb: 0  msb: 31 INPUT
			NetFlow* TXDEEMPH_A0_B, // net ID: TXDEEMPH lsb: 0  msb: 0 INPUT
			NetFlow* TXDETECTRX_A0_B, // net ID: TXDETECTRX lsb: 0  msb: 0 INPUT
			NetFlow* TXDIFFCTRL_A3_B, // net ID: TXDIFFCTRL lsb: 0  msb: 3 INPUT
			NetFlow* TXDIFFCTRL_A2_B, // net ID: TXDIFFCTRL lsb: 0  msb: 3 INPUT
			NetFlow* TXDIFFCTRL_A1_B, // net ID: TXDIFFCTRL lsb: 0  msb: 3 INPUT
			NetFlow* TXDIFFCTRL_A0_B, // net ID: TXDIFFCTRL lsb: 0  msb: 3 INPUT
			NetFlow* TXDIFFPD_A0_B, // net ID: TXDIFFPD lsb: 0  msb: 0 INPUT
			NetFlow* TXDLYBYPASS_A0_B, // net ID: TXDLYBYPASS lsb: 0  msb: 0 INPUT
			NetFlow* TXDLYEN_A0_B, // net ID: TXDLYEN lsb: 0  msb: 0 INPUT
			NetFlow* TXDLYHOLD_A0_B, // net ID: TXDLYHOLD lsb: 0  msb: 0 INPUT
			NetFlow* TXDLYOVRDEN_A0_B, // net ID: TXDLYOVRDEN lsb: 0  msb: 0 INPUT
			NetFlow* TXDLYSRESET_A0_B, // net ID: TXDLYSRESET lsb: 0  msb: 0 INPUT
			NetFlow* TXDLYUPDOWN_A0_B, // net ID: TXDLYUPDOWN lsb: 0  msb: 0 INPUT
			NetFlow* TXELECIDLE_A0_B, // net ID: TXELECIDLE lsb: 0  msb: 0 INPUT
			NetFlow* TXHEADER_A2_B, // net ID: TXHEADER lsb: 0  msb: 2 INPUT
			NetFlow* TXHEADER_A1_B, // net ID: TXHEADER lsb: 0  msb: 2 INPUT
			NetFlow* TXHEADER_A0_B, // net ID: TXHEADER lsb: 0  msb: 2 INPUT
			NetFlow* TXINHIBIT_A0_B, // net ID: TXINHIBIT lsb: 0  msb: 0 INPUT
			NetFlow* TXMAINCURSOR_A6_B, // net ID: TXMAINCURSOR lsb: 0  msb: 6 INPUT
			NetFlow* TXMAINCURSOR_A5_B, // net ID: TXMAINCURSOR lsb: 0  msb: 6 INPUT
			NetFlow* TXMAINCURSOR_A4_B, // net ID: TXMAINCURSOR lsb: 0  msb: 6 INPUT
			NetFlow* TXMAINCURSOR_A3_B, // net ID: TXMAINCURSOR lsb: 0  msb: 6 INPUT
			NetFlow* TXMAINCURSOR_A2_B, // net ID: TXMAINCURSOR lsb: 0  msb: 6 INPUT
			NetFlow* TXMAINCURSOR_A1_B, // net ID: TXMAINCURSOR lsb: 0  msb: 6 INPUT
			NetFlow* TXMAINCURSOR_A0_B, // net ID: TXMAINCURSOR lsb: 0  msb: 6 INPUT
			NetFlow* TXMARGIN_A2_B, // net ID: TXMARGIN lsb: 0  msb: 2 INPUT
			NetFlow* TXMARGIN_A1_B, // net ID: TXMARGIN lsb: 0  msb: 2 INPUT
			NetFlow* TXMARGIN_A0_B, // net ID: TXMARGIN lsb: 0  msb: 2 INPUT
			NetFlow* TXOUTCLKSEL_A2_B, // net ID: TXOUTCLKSEL lsb: 0  msb: 2 INPUT
			NetFlow* TXOUTCLKSEL_A1_B, // net ID: TXOUTCLKSEL lsb: 0  msb: 2 INPUT
			NetFlow* TXOUTCLKSEL_A0_B, // net ID: TXOUTCLKSEL lsb: 0  msb: 2 INPUT
			NetFlow* TXPCSRESET_A0_B, // net ID: TXPCSRESET lsb: 0  msb: 0 INPUT
			NetFlow* TXPD_A1_B, // net ID: TXPD lsb: 0  msb: 1 INPUT
			NetFlow* TXPD_A0_B, // net ID: TXPD lsb: 0  msb: 1 INPUT
			NetFlow* TXPDELECIDLEMODE_A0_B, // net ID: TXPDELECIDLEMODE lsb: 0  msb: 0 INPUT
			NetFlow* TXPHALIGN_A0_B, // net ID: TXPHALIGN lsb: 0  msb: 0 INPUT
			NetFlow* TXPHALIGNEN_A0_B, // net ID: TXPHALIGNEN lsb: 0  msb: 0 INPUT
			NetFlow* TXPHDLYPD_A0_B, // net ID: TXPHDLYPD lsb: 0  msb: 0 INPUT
			NetFlow* TXPHDLYRESET_A0_B, // net ID: TXPHDLYRESET lsb: 0  msb: 0 INPUT
			NetFlow* TXPHDLYTSTCLK_A0_B, // net ID: TXPHDLYTSTCLK lsb: 0  msb: 0 INPUT
			NetFlow* TXPHINIT_A0_B, // net ID: TXPHINIT lsb: 0  msb: 0 INPUT
			NetFlow* TXPHOVRDEN_A0_B, // net ID: TXPHOVRDEN lsb: 0  msb: 0 INPUT
			NetFlow* TXPIPPMEN_A0_B, // net ID: TXPIPPMEN lsb: 0  msb: 0 INPUT
			NetFlow* TXPIPPMOVRDEN_A0_B, // net ID: TXPIPPMOVRDEN lsb: 0  msb: 0 INPUT
			NetFlow* TXPIPPMPD_A0_B, // net ID: TXPIPPMPD lsb: 0  msb: 0 INPUT
			NetFlow* TXPIPPMSEL_A0_B, // net ID: TXPIPPMSEL lsb: 0  msb: 0 INPUT
			NetFlow* TXPIPPMSTEPSIZE_A4_B, // net ID: TXPIPPMSTEPSIZE lsb: 0  msb: 4 INPUT
			NetFlow* TXPIPPMSTEPSIZE_A3_B, // net ID: TXPIPPMSTEPSIZE lsb: 0  msb: 4 INPUT
			NetFlow* TXPIPPMSTEPSIZE_A2_B, // net ID: TXPIPPMSTEPSIZE lsb: 0  msb: 4 INPUT
			NetFlow* TXPIPPMSTEPSIZE_A1_B, // net ID: TXPIPPMSTEPSIZE lsb: 0  msb: 4 INPUT
			NetFlow* TXPIPPMSTEPSIZE_A0_B, // net ID: TXPIPPMSTEPSIZE lsb: 0  msb: 4 INPUT
			NetFlow* TXPISOPD_A0_B, // net ID: TXPISOPD lsb: 0  msb: 0 INPUT
			NetFlow* TXPMARESET_A0_B, // net ID: TXPMARESET lsb: 0  msb: 0 INPUT
			NetFlow* TXPOLARITY_A0_B, // net ID: TXPOLARITY lsb: 0  msb: 0 INPUT
			NetFlow* TXPOSTCURSOR_A4_B, // net ID: TXPOSTCURSOR lsb: 0  msb: 4 INPUT
			NetFlow* TXPOSTCURSOR_A3_B, // net ID: TXPOSTCURSOR lsb: 0  msb: 4 INPUT
			NetFlow* TXPOSTCURSOR_A2_B, // net ID: TXPOSTCURSOR lsb: 0  msb: 4 INPUT
			NetFlow* TXPOSTCURSOR_A1_B, // net ID: TXPOSTCURSOR lsb: 0  msb: 4 INPUT
			NetFlow* TXPOSTCURSOR_A0_B, // net ID: TXPOSTCURSOR lsb: 0  msb: 4 INPUT
			NetFlow* TXPOSTCURSORINV_A0_B, // net ID: TXPOSTCURSORINV lsb: 0  msb: 0 INPUT
			NetFlow* TXPRBSFORCEERR_A0_B, // net ID: TXPRBSFORCEERR lsb: 0  msb: 0 INPUT
			NetFlow* TXPRBSSEL_A2_B, // net ID: TXPRBSSEL lsb: 0  msb: 2 INPUT
			NetFlow* TXPRBSSEL_A1_B, // net ID: TXPRBSSEL lsb: 0  msb: 2 INPUT
			NetFlow* TXPRBSSEL_A0_B, // net ID: TXPRBSSEL lsb: 0  msb: 2 INPUT
			NetFlow* TXPRECURSOR_A4_B, // net ID: TXPRECURSOR lsb: 0  msb: 4 INPUT
			NetFlow* TXPRECURSOR_A3_B, // net ID: TXPRECURSOR lsb: 0  msb: 4 INPUT
			NetFlow* TXPRECURSOR_A2_B, // net ID: TXPRECURSOR lsb: 0  msb: 4 INPUT
			NetFlow* TXPRECURSOR_A1_B, // net ID: TXPRECURSOR lsb: 0  msb: 4 INPUT
			NetFlow* TXPRECURSOR_A0_B, // net ID: TXPRECURSOR lsb: 0  msb: 4 INPUT
			NetFlow* TXPRECURSORINV_A0_B, // net ID: TXPRECURSORINV lsb: 0  msb: 0 INPUT
			NetFlow* TXRATE_A2_B, // net ID: TXRATE lsb: 0  msb: 2 INPUT
			NetFlow* TXRATE_A1_B, // net ID: TXRATE lsb: 0  msb: 2 INPUT
			NetFlow* TXRATE_A0_B, // net ID: TXRATE lsb: 0  msb: 2 INPUT
			NetFlow* TXRATEMODE_A0_B, // net ID: TXRATEMODE lsb: 0  msb: 0 INPUT
			NetFlow* TXSEQUENCE_A6_B, // net ID: TXSEQUENCE lsb: 0  msb: 6 INPUT
			NetFlow* TXSEQUENCE_A5_B, // net ID: TXSEQUENCE lsb: 0  msb: 6 INPUT
			NetFlow* TXSEQUENCE_A4_B, // net ID: TXSEQUENCE lsb: 0  msb: 6 INPUT
			NetFlow* TXSEQUENCE_A3_B, // net ID: TXSEQUENCE lsb: 0  msb: 6 INPUT
			NetFlow* TXSEQUENCE_A2_B, // net ID: TXSEQUENCE lsb: 0  msb: 6 INPUT
			NetFlow* TXSEQUENCE_A1_B, // net ID: TXSEQUENCE lsb: 0  msb: 6 INPUT
			NetFlow* TXSEQUENCE_A0_B, // net ID: TXSEQUENCE lsb: 0  msb: 6 INPUT
			NetFlow* TXSTARTSEQ_A0_B, // net ID: TXSTARTSEQ lsb: 0  msb: 0 INPUT
			NetFlow* TXSWING_A0_B, // net ID: TXSWING lsb: 0  msb: 0 INPUT
			NetFlow* TXSYNCALLIN_A0_B, // net ID: TXSYNCALLIN lsb: 0  msb: 0 INPUT
			NetFlow* TXSYNCIN_A0_B, // net ID: TXSYNCIN lsb: 0  msb: 0 INPUT
			NetFlow* TXSYNCMODE_A0_B, // net ID: TXSYNCMODE lsb: 0  msb: 0 INPUT
			NetFlow* TXSYSCLKSEL_A1_B, // net ID: TXSYSCLKSEL lsb: 0  msb: 1 INPUT
			NetFlow* TXSYSCLKSEL_A0_B, // net ID: TXSYSCLKSEL lsb: 0  msb: 1 INPUT
			NetFlow* TXUSERRDY_A0_B, // net ID: TXUSERRDY lsb: 0  msb: 0 INPUT
			NetFlow* TXUSRCLK_A0_B, // net ID: TXUSRCLK lsb: 0  msb: 0 INPUT
			NetFlow* TXUSRCLK2_A0_B // net ID: TXUSRCLK2 lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
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
			this->DMONITOROUT_A14_B = DMONITOROUT_A14_B; // net ID: DMONITOROUT lsb: 0  msb: 14 OUTPUT
			this->DMONITOROUT_A13_B = DMONITOROUT_A13_B; // net ID: DMONITOROUT lsb: 0  msb: 14 OUTPUT
			this->DMONITOROUT_A12_B = DMONITOROUT_A12_B; // net ID: DMONITOROUT lsb: 0  msb: 14 OUTPUT
			this->DMONITOROUT_A11_B = DMONITOROUT_A11_B; // net ID: DMONITOROUT lsb: 0  msb: 14 OUTPUT
			this->DMONITOROUT_A10_B = DMONITOROUT_A10_B; // net ID: DMONITOROUT lsb: 0  msb: 14 OUTPUT
			this->DMONITOROUT_A9_B = DMONITOROUT_A9_B; // net ID: DMONITOROUT lsb: 0  msb: 14 OUTPUT
			this->DMONITOROUT_A8_B = DMONITOROUT_A8_B; // net ID: DMONITOROUT lsb: 0  msb: 14 OUTPUT
			this->DMONITOROUT_A7_B = DMONITOROUT_A7_B; // net ID: DMONITOROUT lsb: 0  msb: 14 OUTPUT
			this->DMONITOROUT_A6_B = DMONITOROUT_A6_B; // net ID: DMONITOROUT lsb: 0  msb: 14 OUTPUT
			this->DMONITOROUT_A5_B = DMONITOROUT_A5_B; // net ID: DMONITOROUT lsb: 0  msb: 14 OUTPUT
			this->DMONITOROUT_A4_B = DMONITOROUT_A4_B; // net ID: DMONITOROUT lsb: 0  msb: 14 OUTPUT
			this->DMONITOROUT_A3_B = DMONITOROUT_A3_B; // net ID: DMONITOROUT lsb: 0  msb: 14 OUTPUT
			this->DMONITOROUT_A2_B = DMONITOROUT_A2_B; // net ID: DMONITOROUT lsb: 0  msb: 14 OUTPUT
			this->DMONITOROUT_A1_B = DMONITOROUT_A1_B; // net ID: DMONITOROUT lsb: 0  msb: 14 OUTPUT
			this->DMONITOROUT_A0_B = DMONITOROUT_A0_B; // net ID: DMONITOROUT lsb: 0  msb: 14 OUTPUT
			this->DRPDO_A15_B = DRPDO_A15_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			this->DRPDO_A14_B = DRPDO_A14_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			this->DRPDO_A13_B = DRPDO_A13_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			this->DRPDO_A12_B = DRPDO_A12_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			this->DRPDO_A11_B = DRPDO_A11_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			this->DRPDO_A10_B = DRPDO_A10_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			this->DRPDO_A9_B = DRPDO_A9_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			this->DRPDO_A8_B = DRPDO_A8_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			this->DRPDO_A7_B = DRPDO_A7_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			this->DRPDO_A6_B = DRPDO_A6_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			this->DRPDO_A5_B = DRPDO_A5_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			this->DRPDO_A4_B = DRPDO_A4_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			this->DRPDO_A3_B = DRPDO_A3_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			this->DRPDO_A2_B = DRPDO_A2_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			this->DRPDO_A1_B = DRPDO_A1_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			this->DRPDO_A0_B = DRPDO_A0_B; // net ID: DRPDO lsb: 0  msb: 15 OUTPUT
			this->DRPRDY_A0_B = DRPRDY_A0_B; // net ID: DRPRDY lsb: 0  msb: 0 OUTPUT
			this->EYESCANDATAERROR_A0_B = EYESCANDATAERROR_A0_B; // net ID: EYESCANDATAERROR lsb: 0  msb: 0 OUTPUT
			this->GTPTXN_A0_B = GTPTXN_A0_B; // net ID: GTPTXN lsb: 0  msb: 0 OUTPUT
			this->GTPTXP_A0_B = GTPTXP_A0_B; // net ID: GTPTXP lsb: 0  msb: 0 OUTPUT
			this->PCSRSVDOUT_A15_B = PCSRSVDOUT_A15_B; // net ID: PCSRSVDOUT lsb: 0  msb: 15 OUTPUT
			this->PCSRSVDOUT_A14_B = PCSRSVDOUT_A14_B; // net ID: PCSRSVDOUT lsb: 0  msb: 15 OUTPUT
			this->PCSRSVDOUT_A13_B = PCSRSVDOUT_A13_B; // net ID: PCSRSVDOUT lsb: 0  msb: 15 OUTPUT
			this->PCSRSVDOUT_A12_B = PCSRSVDOUT_A12_B; // net ID: PCSRSVDOUT lsb: 0  msb: 15 OUTPUT
			this->PCSRSVDOUT_A11_B = PCSRSVDOUT_A11_B; // net ID: PCSRSVDOUT lsb: 0  msb: 15 OUTPUT
			this->PCSRSVDOUT_A10_B = PCSRSVDOUT_A10_B; // net ID: PCSRSVDOUT lsb: 0  msb: 15 OUTPUT
			this->PCSRSVDOUT_A9_B = PCSRSVDOUT_A9_B; // net ID: PCSRSVDOUT lsb: 0  msb: 15 OUTPUT
			this->PCSRSVDOUT_A8_B = PCSRSVDOUT_A8_B; // net ID: PCSRSVDOUT lsb: 0  msb: 15 OUTPUT
			this->PCSRSVDOUT_A7_B = PCSRSVDOUT_A7_B; // net ID: PCSRSVDOUT lsb: 0  msb: 15 OUTPUT
			this->PCSRSVDOUT_A6_B = PCSRSVDOUT_A6_B; // net ID: PCSRSVDOUT lsb: 0  msb: 15 OUTPUT
			this->PCSRSVDOUT_A5_B = PCSRSVDOUT_A5_B; // net ID: PCSRSVDOUT lsb: 0  msb: 15 OUTPUT
			this->PCSRSVDOUT_A4_B = PCSRSVDOUT_A4_B; // net ID: PCSRSVDOUT lsb: 0  msb: 15 OUTPUT
			this->PCSRSVDOUT_A3_B = PCSRSVDOUT_A3_B; // net ID: PCSRSVDOUT lsb: 0  msb: 15 OUTPUT
			this->PCSRSVDOUT_A2_B = PCSRSVDOUT_A2_B; // net ID: PCSRSVDOUT lsb: 0  msb: 15 OUTPUT
			this->PCSRSVDOUT_A1_B = PCSRSVDOUT_A1_B; // net ID: PCSRSVDOUT lsb: 0  msb: 15 OUTPUT
			this->PCSRSVDOUT_A0_B = PCSRSVDOUT_A0_B; // net ID: PCSRSVDOUT lsb: 0  msb: 15 OUTPUT
			this->PHYSTATUS_A0_B = PHYSTATUS_A0_B; // net ID: PHYSTATUS lsb: 0  msb: 0 OUTPUT
			this->PMARSVDOUT0_A0_B = PMARSVDOUT0_A0_B; // net ID: PMARSVDOUT0 lsb: 0  msb: 0 OUTPUT
			this->PMARSVDOUT1_A0_B = PMARSVDOUT1_A0_B; // net ID: PMARSVDOUT1 lsb: 0  msb: 0 OUTPUT
			this->RXBUFSTATUS_A2_B = RXBUFSTATUS_A2_B; // net ID: RXBUFSTATUS lsb: 0  msb: 2 OUTPUT
			this->RXBUFSTATUS_A1_B = RXBUFSTATUS_A1_B; // net ID: RXBUFSTATUS lsb: 0  msb: 2 OUTPUT
			this->RXBUFSTATUS_A0_B = RXBUFSTATUS_A0_B; // net ID: RXBUFSTATUS lsb: 0  msb: 2 OUTPUT
			this->RXBYTEISALIGNED_A0_B = RXBYTEISALIGNED_A0_B; // net ID: RXBYTEISALIGNED lsb: 0  msb: 0 OUTPUT
			this->RXBYTEREALIGN_A0_B = RXBYTEREALIGN_A0_B; // net ID: RXBYTEREALIGN lsb: 0  msb: 0 OUTPUT
			this->RXCDRLOCK_A0_B = RXCDRLOCK_A0_B; // net ID: RXCDRLOCK lsb: 0  msb: 0 OUTPUT
			this->RXCHANBONDSEQ_A0_B = RXCHANBONDSEQ_A0_B; // net ID: RXCHANBONDSEQ lsb: 0  msb: 0 OUTPUT
			this->RXCHANISALIGNED_A0_B = RXCHANISALIGNED_A0_B; // net ID: RXCHANISALIGNED lsb: 0  msb: 0 OUTPUT
			this->RXCHANREALIGN_A0_B = RXCHANREALIGN_A0_B; // net ID: RXCHANREALIGN lsb: 0  msb: 0 OUTPUT
			this->RXCHARISCOMMA_A3_B = RXCHARISCOMMA_A3_B; // net ID: RXCHARISCOMMA lsb: 0  msb: 3 OUTPUT
			this->RXCHARISCOMMA_A2_B = RXCHARISCOMMA_A2_B; // net ID: RXCHARISCOMMA lsb: 0  msb: 3 OUTPUT
			this->RXCHARISCOMMA_A1_B = RXCHARISCOMMA_A1_B; // net ID: RXCHARISCOMMA lsb: 0  msb: 3 OUTPUT
			this->RXCHARISCOMMA_A0_B = RXCHARISCOMMA_A0_B; // net ID: RXCHARISCOMMA lsb: 0  msb: 3 OUTPUT
			this->RXCHARISK_A3_B = RXCHARISK_A3_B; // net ID: RXCHARISK lsb: 0  msb: 3 OUTPUT
			this->RXCHARISK_A2_B = RXCHARISK_A2_B; // net ID: RXCHARISK lsb: 0  msb: 3 OUTPUT
			this->RXCHARISK_A1_B = RXCHARISK_A1_B; // net ID: RXCHARISK lsb: 0  msb: 3 OUTPUT
			this->RXCHARISK_A0_B = RXCHARISK_A0_B; // net ID: RXCHARISK lsb: 0  msb: 3 OUTPUT
			this->RXCHBONDO_A3_B = RXCHBONDO_A3_B; // net ID: RXCHBONDO lsb: 0  msb: 3 OUTPUT
			this->RXCHBONDO_A2_B = RXCHBONDO_A2_B; // net ID: RXCHBONDO lsb: 0  msb: 3 OUTPUT
			this->RXCHBONDO_A1_B = RXCHBONDO_A1_B; // net ID: RXCHBONDO lsb: 0  msb: 3 OUTPUT
			this->RXCHBONDO_A0_B = RXCHBONDO_A0_B; // net ID: RXCHBONDO lsb: 0  msb: 3 OUTPUT
			this->RXCLKCORCNT_A1_B = RXCLKCORCNT_A1_B; // net ID: RXCLKCORCNT lsb: 0  msb: 1 OUTPUT
			this->RXCLKCORCNT_A0_B = RXCLKCORCNT_A0_B; // net ID: RXCLKCORCNT lsb: 0  msb: 1 OUTPUT
			this->RXCOMINITDET_A0_B = RXCOMINITDET_A0_B; // net ID: RXCOMINITDET lsb: 0  msb: 0 OUTPUT
			this->RXCOMMADET_A0_B = RXCOMMADET_A0_B; // net ID: RXCOMMADET lsb: 0  msb: 0 OUTPUT
			this->RXCOMSASDET_A0_B = RXCOMSASDET_A0_B; // net ID: RXCOMSASDET lsb: 0  msb: 0 OUTPUT
			this->RXCOMWAKEDET_A0_B = RXCOMWAKEDET_A0_B; // net ID: RXCOMWAKEDET lsb: 0  msb: 0 OUTPUT
			this->RXDATA_A31_B = RXDATA_A31_B; // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
			this->RXDATA_A30_B = RXDATA_A30_B; // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
			this->RXDATA_A29_B = RXDATA_A29_B; // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
			this->RXDATA_A28_B = RXDATA_A28_B; // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
			this->RXDATA_A27_B = RXDATA_A27_B; // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
			this->RXDATA_A26_B = RXDATA_A26_B; // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
			this->RXDATA_A25_B = RXDATA_A25_B; // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
			this->RXDATA_A24_B = RXDATA_A24_B; // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
			this->RXDATA_A23_B = RXDATA_A23_B; // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
			this->RXDATA_A22_B = RXDATA_A22_B; // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
			this->RXDATA_A21_B = RXDATA_A21_B; // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
			this->RXDATA_A20_B = RXDATA_A20_B; // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
			this->RXDATA_A19_B = RXDATA_A19_B; // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
			this->RXDATA_A18_B = RXDATA_A18_B; // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
			this->RXDATA_A17_B = RXDATA_A17_B; // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
			this->RXDATA_A16_B = RXDATA_A16_B; // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
			this->RXDATA_A15_B = RXDATA_A15_B; // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
			this->RXDATA_A14_B = RXDATA_A14_B; // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
			this->RXDATA_A13_B = RXDATA_A13_B; // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
			this->RXDATA_A12_B = RXDATA_A12_B; // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
			this->RXDATA_A11_B = RXDATA_A11_B; // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
			this->RXDATA_A10_B = RXDATA_A10_B; // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
			this->RXDATA_A9_B = RXDATA_A9_B; // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
			this->RXDATA_A8_B = RXDATA_A8_B; // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
			this->RXDATA_A7_B = RXDATA_A7_B; // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
			this->RXDATA_A6_B = RXDATA_A6_B; // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
			this->RXDATA_A5_B = RXDATA_A5_B; // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
			this->RXDATA_A4_B = RXDATA_A4_B; // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
			this->RXDATA_A3_B = RXDATA_A3_B; // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
			this->RXDATA_A2_B = RXDATA_A2_B; // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
			this->RXDATA_A1_B = RXDATA_A1_B; // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
			this->RXDATA_A0_B = RXDATA_A0_B; // net ID: RXDATA lsb: 0  msb: 31 OUTPUT
			this->RXDATAVALID_A1_B = RXDATAVALID_A1_B; // net ID: RXDATAVALID lsb: 0  msb: 1 OUTPUT
			this->RXDATAVALID_A0_B = RXDATAVALID_A0_B; // net ID: RXDATAVALID lsb: 0  msb: 1 OUTPUT
			this->RXDISPERR_A3_B = RXDISPERR_A3_B; // net ID: RXDISPERR lsb: 0  msb: 3 OUTPUT
			this->RXDISPERR_A2_B = RXDISPERR_A2_B; // net ID: RXDISPERR lsb: 0  msb: 3 OUTPUT
			this->RXDISPERR_A1_B = RXDISPERR_A1_B; // net ID: RXDISPERR lsb: 0  msb: 3 OUTPUT
			this->RXDISPERR_A0_B = RXDISPERR_A0_B; // net ID: RXDISPERR lsb: 0  msb: 3 OUTPUT
			this->RXDLYSRESETDONE_A0_B = RXDLYSRESETDONE_A0_B; // net ID: RXDLYSRESETDONE lsb: 0  msb: 0 OUTPUT
			this->RXELECIDLE_A0_B = RXELECIDLE_A0_B; // net ID: RXELECIDLE lsb: 0  msb: 0 OUTPUT
			this->RXHEADER_A2_B = RXHEADER_A2_B; // net ID: RXHEADER lsb: 0  msb: 2 OUTPUT
			this->RXHEADER_A1_B = RXHEADER_A1_B; // net ID: RXHEADER lsb: 0  msb: 2 OUTPUT
			this->RXHEADER_A0_B = RXHEADER_A0_B; // net ID: RXHEADER lsb: 0  msb: 2 OUTPUT
			this->RXHEADERVALID_A0_B = RXHEADERVALID_A0_B; // net ID: RXHEADERVALID lsb: 0  msb: 0 OUTPUT
			this->RXNOTINTABLE_A3_B = RXNOTINTABLE_A3_B; // net ID: RXNOTINTABLE lsb: 0  msb: 3 OUTPUT
			this->RXNOTINTABLE_A2_B = RXNOTINTABLE_A2_B; // net ID: RXNOTINTABLE lsb: 0  msb: 3 OUTPUT
			this->RXNOTINTABLE_A1_B = RXNOTINTABLE_A1_B; // net ID: RXNOTINTABLE lsb: 0  msb: 3 OUTPUT
			this->RXNOTINTABLE_A0_B = RXNOTINTABLE_A0_B; // net ID: RXNOTINTABLE lsb: 0  msb: 3 OUTPUT
			this->RXOSINTDONE_A0_B = RXOSINTDONE_A0_B; // net ID: RXOSINTDONE lsb: 0  msb: 0 OUTPUT
			this->RXOSINTSTARTED_A0_B = RXOSINTSTARTED_A0_B; // net ID: RXOSINTSTARTED lsb: 0  msb: 0 OUTPUT
			this->RXOSINTSTROBEDONE_A0_B = RXOSINTSTROBEDONE_A0_B; // net ID: RXOSINTSTROBEDONE lsb: 0  msb: 0 OUTPUT
			this->RXOSINTSTROBESTARTED_A0_B = RXOSINTSTROBESTARTED_A0_B; // net ID: RXOSINTSTROBESTARTED lsb: 0  msb: 0 OUTPUT
			this->RXOUTCLK_A0_B = RXOUTCLK_A0_B; // net ID: RXOUTCLK lsb: 0  msb: 0 OUTPUT
			this->RXOUTCLKFABRIC_A0_B = RXOUTCLKFABRIC_A0_B; // net ID: RXOUTCLKFABRIC lsb: 0  msb: 0 OUTPUT
			this->RXOUTCLKPCS_A0_B = RXOUTCLKPCS_A0_B; // net ID: RXOUTCLKPCS lsb: 0  msb: 0 OUTPUT
			this->RXPHALIGNDONE_A0_B = RXPHALIGNDONE_A0_B; // net ID: RXPHALIGNDONE lsb: 0  msb: 0 OUTPUT
			this->RXPHMONITOR_A4_B = RXPHMONITOR_A4_B; // net ID: RXPHMONITOR lsb: 0  msb: 4 OUTPUT
			this->RXPHMONITOR_A3_B = RXPHMONITOR_A3_B; // net ID: RXPHMONITOR lsb: 0  msb: 4 OUTPUT
			this->RXPHMONITOR_A2_B = RXPHMONITOR_A2_B; // net ID: RXPHMONITOR lsb: 0  msb: 4 OUTPUT
			this->RXPHMONITOR_A1_B = RXPHMONITOR_A1_B; // net ID: RXPHMONITOR lsb: 0  msb: 4 OUTPUT
			this->RXPHMONITOR_A0_B = RXPHMONITOR_A0_B; // net ID: RXPHMONITOR lsb: 0  msb: 4 OUTPUT
			this->RXPHSLIPMONITOR_A4_B = RXPHSLIPMONITOR_A4_B; // net ID: RXPHSLIPMONITOR lsb: 0  msb: 4 OUTPUT
			this->RXPHSLIPMONITOR_A3_B = RXPHSLIPMONITOR_A3_B; // net ID: RXPHSLIPMONITOR lsb: 0  msb: 4 OUTPUT
			this->RXPHSLIPMONITOR_A2_B = RXPHSLIPMONITOR_A2_B; // net ID: RXPHSLIPMONITOR lsb: 0  msb: 4 OUTPUT
			this->RXPHSLIPMONITOR_A1_B = RXPHSLIPMONITOR_A1_B; // net ID: RXPHSLIPMONITOR lsb: 0  msb: 4 OUTPUT
			this->RXPHSLIPMONITOR_A0_B = RXPHSLIPMONITOR_A0_B; // net ID: RXPHSLIPMONITOR lsb: 0  msb: 4 OUTPUT
			this->RXPMARESETDONE_A0_B = RXPMARESETDONE_A0_B; // net ID: RXPMARESETDONE lsb: 0  msb: 0 OUTPUT
			this->RXPRBSERR_A0_B = RXPRBSERR_A0_B; // net ID: RXPRBSERR lsb: 0  msb: 0 OUTPUT
			this->RXRATEDONE_A0_B = RXRATEDONE_A0_B; // net ID: RXRATEDONE lsb: 0  msb: 0 OUTPUT
			this->RXRESETDONE_A0_B = RXRESETDONE_A0_B; // net ID: RXRESETDONE lsb: 0  msb: 0 OUTPUT
			this->RXSTARTOFSEQ_A1_B = RXSTARTOFSEQ_A1_B; // net ID: RXSTARTOFSEQ lsb: 0  msb: 1 OUTPUT
			this->RXSTARTOFSEQ_A0_B = RXSTARTOFSEQ_A0_B; // net ID: RXSTARTOFSEQ lsb: 0  msb: 1 OUTPUT
			this->RXSTATUS_A2_B = RXSTATUS_A2_B; // net ID: RXSTATUS lsb: 0  msb: 2 OUTPUT
			this->RXSTATUS_A1_B = RXSTATUS_A1_B; // net ID: RXSTATUS lsb: 0  msb: 2 OUTPUT
			this->RXSTATUS_A0_B = RXSTATUS_A0_B; // net ID: RXSTATUS lsb: 0  msb: 2 OUTPUT
			this->RXSYNCDONE_A0_B = RXSYNCDONE_A0_B; // net ID: RXSYNCDONE lsb: 0  msb: 0 OUTPUT
			this->RXSYNCOUT_A0_B = RXSYNCOUT_A0_B; // net ID: RXSYNCOUT lsb: 0  msb: 0 OUTPUT
			this->RXVALID_A0_B = RXVALID_A0_B; // net ID: RXVALID lsb: 0  msb: 0 OUTPUT
			this->TXBUFSTATUS_A1_B = TXBUFSTATUS_A1_B; // net ID: TXBUFSTATUS lsb: 0  msb: 1 OUTPUT
			this->TXBUFSTATUS_A0_B = TXBUFSTATUS_A0_B; // net ID: TXBUFSTATUS lsb: 0  msb: 1 OUTPUT
			this->TXCOMFINISH_A0_B = TXCOMFINISH_A0_B; // net ID: TXCOMFINISH lsb: 0  msb: 0 OUTPUT
			this->TXDLYSRESETDONE_A0_B = TXDLYSRESETDONE_A0_B; // net ID: TXDLYSRESETDONE lsb: 0  msb: 0 OUTPUT
			this->TXGEARBOXREADY_A0_B = TXGEARBOXREADY_A0_B; // net ID: TXGEARBOXREADY lsb: 0  msb: 0 OUTPUT
			this->TXOUTCLK_A0_B = TXOUTCLK_A0_B; // net ID: TXOUTCLK lsb: 0  msb: 0 OUTPUT
			this->TXOUTCLKFABRIC_A0_B = TXOUTCLKFABRIC_A0_B; // net ID: TXOUTCLKFABRIC lsb: 0  msb: 0 OUTPUT
			this->TXOUTCLKPCS_A0_B = TXOUTCLKPCS_A0_B; // net ID: TXOUTCLKPCS lsb: 0  msb: 0 OUTPUT
			this->TXPHALIGNDONE_A0_B = TXPHALIGNDONE_A0_B; // net ID: TXPHALIGNDONE lsb: 0  msb: 0 OUTPUT
			this->TXPHINITDONE_A0_B = TXPHINITDONE_A0_B; // net ID: TXPHINITDONE lsb: 0  msb: 0 OUTPUT
			this->TXPMARESETDONE_A0_B = TXPMARESETDONE_A0_B; // net ID: TXPMARESETDONE lsb: 0  msb: 0 OUTPUT
			this->TXRATEDONE_A0_B = TXRATEDONE_A0_B; // net ID: TXRATEDONE lsb: 0  msb: 0 OUTPUT
			this->TXRESETDONE_A0_B = TXRESETDONE_A0_B; // net ID: TXRESETDONE lsb: 0  msb: 0 OUTPUT
			this->TXSYNCDONE_A0_B = TXSYNCDONE_A0_B; // net ID: TXSYNCDONE lsb: 0  msb: 0 OUTPUT
			this->TXSYNCOUT_A0_B = TXSYNCOUT_A0_B; // net ID: TXSYNCOUT lsb: 0  msb: 0 OUTPUT
			this->CFGRESET_A0_B = CFGRESET_A0_B; // net ID: CFGRESET lsb: 0  msb: 0 INPUT
			this->CLKRSVD0_A0_B = CLKRSVD0_A0_B; // net ID: CLKRSVD0 lsb: 0  msb: 0 INPUT
			this->CLKRSVD1_A0_B = CLKRSVD1_A0_B; // net ID: CLKRSVD1 lsb: 0  msb: 0 INPUT
			this->DMONFIFORESET_A0_B = DMONFIFORESET_A0_B; // net ID: DMONFIFORESET lsb: 0  msb: 0 INPUT
			this->DMONITORCLK_A0_B = DMONITORCLK_A0_B; // net ID: DMONITORCLK lsb: 0  msb: 0 INPUT
			this->DRPADDR_A8_B = DRPADDR_A8_B; // net ID: DRPADDR lsb: 0  msb: 8 INPUT
			this->DRPADDR_A7_B = DRPADDR_A7_B; // net ID: DRPADDR lsb: 0  msb: 8 INPUT
			this->DRPADDR_A6_B = DRPADDR_A6_B; // net ID: DRPADDR lsb: 0  msb: 8 INPUT
			this->DRPADDR_A5_B = DRPADDR_A5_B; // net ID: DRPADDR lsb: 0  msb: 8 INPUT
			this->DRPADDR_A4_B = DRPADDR_A4_B; // net ID: DRPADDR lsb: 0  msb: 8 INPUT
			this->DRPADDR_A3_B = DRPADDR_A3_B; // net ID: DRPADDR lsb: 0  msb: 8 INPUT
			this->DRPADDR_A2_B = DRPADDR_A2_B; // net ID: DRPADDR lsb: 0  msb: 8 INPUT
			this->DRPADDR_A1_B = DRPADDR_A1_B; // net ID: DRPADDR lsb: 0  msb: 8 INPUT
			this->DRPADDR_A0_B = DRPADDR_A0_B; // net ID: DRPADDR lsb: 0  msb: 8 INPUT
			this->DRPCLK_A0_B = DRPCLK_A0_B; // net ID: DRPCLK lsb: 0  msb: 0 INPUT
			this->DRPDI_A15_B = DRPDI_A15_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
			this->DRPDI_A14_B = DRPDI_A14_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
			this->DRPDI_A13_B = DRPDI_A13_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
			this->DRPDI_A12_B = DRPDI_A12_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
			this->DRPDI_A11_B = DRPDI_A11_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
			this->DRPDI_A10_B = DRPDI_A10_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
			this->DRPDI_A9_B = DRPDI_A9_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
			this->DRPDI_A8_B = DRPDI_A8_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
			this->DRPDI_A7_B = DRPDI_A7_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
			this->DRPDI_A6_B = DRPDI_A6_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
			this->DRPDI_A5_B = DRPDI_A5_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
			this->DRPDI_A4_B = DRPDI_A4_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
			this->DRPDI_A3_B = DRPDI_A3_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
			this->DRPDI_A2_B = DRPDI_A2_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
			this->DRPDI_A1_B = DRPDI_A1_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
			this->DRPDI_A0_B = DRPDI_A0_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
			this->DRPEN_A0_B = DRPEN_A0_B; // net ID: DRPEN lsb: 0  msb: 0 INPUT
			this->DRPWE_A0_B = DRPWE_A0_B; // net ID: DRPWE lsb: 0  msb: 0 INPUT
			this->EYESCANMODE_A0_B = EYESCANMODE_A0_B; // net ID: EYESCANMODE lsb: 0  msb: 0 INPUT
			this->EYESCANRESET_A0_B = EYESCANRESET_A0_B; // net ID: EYESCANRESET lsb: 0  msb: 0 INPUT
			this->EYESCANTRIGGER_A0_B = EYESCANTRIGGER_A0_B; // net ID: EYESCANTRIGGER lsb: 0  msb: 0 INPUT
			this->GTPRXN_A0_B = GTPRXN_A0_B; // net ID: GTPRXN lsb: 0  msb: 0 INPUT
			this->GTPRXP_A0_B = GTPRXP_A0_B; // net ID: GTPRXP lsb: 0  msb: 0 INPUT
			this->GTRESETSEL_A0_B = GTRESETSEL_A0_B; // net ID: GTRESETSEL lsb: 0  msb: 0 INPUT
			this->GTRSVD_A15_B = GTRSVD_A15_B; // net ID: GTRSVD lsb: 0  msb: 15 INPUT
			this->GTRSVD_A14_B = GTRSVD_A14_B; // net ID: GTRSVD lsb: 0  msb: 15 INPUT
			this->GTRSVD_A13_B = GTRSVD_A13_B; // net ID: GTRSVD lsb: 0  msb: 15 INPUT
			this->GTRSVD_A12_B = GTRSVD_A12_B; // net ID: GTRSVD lsb: 0  msb: 15 INPUT
			this->GTRSVD_A11_B = GTRSVD_A11_B; // net ID: GTRSVD lsb: 0  msb: 15 INPUT
			this->GTRSVD_A10_B = GTRSVD_A10_B; // net ID: GTRSVD lsb: 0  msb: 15 INPUT
			this->GTRSVD_A9_B = GTRSVD_A9_B; // net ID: GTRSVD lsb: 0  msb: 15 INPUT
			this->GTRSVD_A8_B = GTRSVD_A8_B; // net ID: GTRSVD lsb: 0  msb: 15 INPUT
			this->GTRSVD_A7_B = GTRSVD_A7_B; // net ID: GTRSVD lsb: 0  msb: 15 INPUT
			this->GTRSVD_A6_B = GTRSVD_A6_B; // net ID: GTRSVD lsb: 0  msb: 15 INPUT
			this->GTRSVD_A5_B = GTRSVD_A5_B; // net ID: GTRSVD lsb: 0  msb: 15 INPUT
			this->GTRSVD_A4_B = GTRSVD_A4_B; // net ID: GTRSVD lsb: 0  msb: 15 INPUT
			this->GTRSVD_A3_B = GTRSVD_A3_B; // net ID: GTRSVD lsb: 0  msb: 15 INPUT
			this->GTRSVD_A2_B = GTRSVD_A2_B; // net ID: GTRSVD lsb: 0  msb: 15 INPUT
			this->GTRSVD_A1_B = GTRSVD_A1_B; // net ID: GTRSVD lsb: 0  msb: 15 INPUT
			this->GTRSVD_A0_B = GTRSVD_A0_B; // net ID: GTRSVD lsb: 0  msb: 15 INPUT
			this->GTRXRESET_A0_B = GTRXRESET_A0_B; // net ID: GTRXRESET lsb: 0  msb: 0 INPUT
			this->GTTXRESET_A0_B = GTTXRESET_A0_B; // net ID: GTTXRESET lsb: 0  msb: 0 INPUT
			this->LOOPBACK_A2_B = LOOPBACK_A2_B; // net ID: LOOPBACK lsb: 0  msb: 2 INPUT
			this->LOOPBACK_A1_B = LOOPBACK_A1_B; // net ID: LOOPBACK lsb: 0  msb: 2 INPUT
			this->LOOPBACK_A0_B = LOOPBACK_A0_B; // net ID: LOOPBACK lsb: 0  msb: 2 INPUT
			this->PCSRSVDIN_A15_B = PCSRSVDIN_A15_B; // net ID: PCSRSVDIN lsb: 0  msb: 15 INPUT
			this->PCSRSVDIN_A14_B = PCSRSVDIN_A14_B; // net ID: PCSRSVDIN lsb: 0  msb: 15 INPUT
			this->PCSRSVDIN_A13_B = PCSRSVDIN_A13_B; // net ID: PCSRSVDIN lsb: 0  msb: 15 INPUT
			this->PCSRSVDIN_A12_B = PCSRSVDIN_A12_B; // net ID: PCSRSVDIN lsb: 0  msb: 15 INPUT
			this->PCSRSVDIN_A11_B = PCSRSVDIN_A11_B; // net ID: PCSRSVDIN lsb: 0  msb: 15 INPUT
			this->PCSRSVDIN_A10_B = PCSRSVDIN_A10_B; // net ID: PCSRSVDIN lsb: 0  msb: 15 INPUT
			this->PCSRSVDIN_A9_B = PCSRSVDIN_A9_B; // net ID: PCSRSVDIN lsb: 0  msb: 15 INPUT
			this->PCSRSVDIN_A8_B = PCSRSVDIN_A8_B; // net ID: PCSRSVDIN lsb: 0  msb: 15 INPUT
			this->PCSRSVDIN_A7_B = PCSRSVDIN_A7_B; // net ID: PCSRSVDIN lsb: 0  msb: 15 INPUT
			this->PCSRSVDIN_A6_B = PCSRSVDIN_A6_B; // net ID: PCSRSVDIN lsb: 0  msb: 15 INPUT
			this->PCSRSVDIN_A5_B = PCSRSVDIN_A5_B; // net ID: PCSRSVDIN lsb: 0  msb: 15 INPUT
			this->PCSRSVDIN_A4_B = PCSRSVDIN_A4_B; // net ID: PCSRSVDIN lsb: 0  msb: 15 INPUT
			this->PCSRSVDIN_A3_B = PCSRSVDIN_A3_B; // net ID: PCSRSVDIN lsb: 0  msb: 15 INPUT
			this->PCSRSVDIN_A2_B = PCSRSVDIN_A2_B; // net ID: PCSRSVDIN lsb: 0  msb: 15 INPUT
			this->PCSRSVDIN_A1_B = PCSRSVDIN_A1_B; // net ID: PCSRSVDIN lsb: 0  msb: 15 INPUT
			this->PCSRSVDIN_A0_B = PCSRSVDIN_A0_B; // net ID: PCSRSVDIN lsb: 0  msb: 15 INPUT
			this->PLL0CLK_A0_B = PLL0CLK_A0_B; // net ID: PLL0CLK lsb: 0  msb: 0 INPUT
			this->PLL0REFCLK_A0_B = PLL0REFCLK_A0_B; // net ID: PLL0REFCLK lsb: 0  msb: 0 INPUT
			this->PLL1CLK_A0_B = PLL1CLK_A0_B; // net ID: PLL1CLK lsb: 0  msb: 0 INPUT
			this->PLL1REFCLK_A0_B = PLL1REFCLK_A0_B; // net ID: PLL1REFCLK lsb: 0  msb: 0 INPUT
			this->PMARSVDIN0_A0_B = PMARSVDIN0_A0_B; // net ID: PMARSVDIN0 lsb: 0  msb: 0 INPUT
			this->PMARSVDIN1_A0_B = PMARSVDIN1_A0_B; // net ID: PMARSVDIN1 lsb: 0  msb: 0 INPUT
			this->PMARSVDIN2_A0_B = PMARSVDIN2_A0_B; // net ID: PMARSVDIN2 lsb: 0  msb: 0 INPUT
			this->PMARSVDIN3_A0_B = PMARSVDIN3_A0_B; // net ID: PMARSVDIN3 lsb: 0  msb: 0 INPUT
			this->PMARSVDIN4_A0_B = PMARSVDIN4_A0_B; // net ID: PMARSVDIN4 lsb: 0  msb: 0 INPUT
			this->RESETOVRD_A0_B = RESETOVRD_A0_B; // net ID: RESETOVRD lsb: 0  msb: 0 INPUT
			this->RX8B10BEN_A0_B = RX8B10BEN_A0_B; // net ID: RX8B10BEN lsb: 0  msb: 0 INPUT
			this->RXADAPTSELTEST_A13_B = RXADAPTSELTEST_A13_B; // net ID: RXADAPTSELTEST lsb: 0  msb: 13 INPUT
			this->RXADAPTSELTEST_A12_B = RXADAPTSELTEST_A12_B; // net ID: RXADAPTSELTEST lsb: 0  msb: 13 INPUT
			this->RXADAPTSELTEST_A11_B = RXADAPTSELTEST_A11_B; // net ID: RXADAPTSELTEST lsb: 0  msb: 13 INPUT
			this->RXADAPTSELTEST_A10_B = RXADAPTSELTEST_A10_B; // net ID: RXADAPTSELTEST lsb: 0  msb: 13 INPUT
			this->RXADAPTSELTEST_A9_B = RXADAPTSELTEST_A9_B; // net ID: RXADAPTSELTEST lsb: 0  msb: 13 INPUT
			this->RXADAPTSELTEST_A8_B = RXADAPTSELTEST_A8_B; // net ID: RXADAPTSELTEST lsb: 0  msb: 13 INPUT
			this->RXADAPTSELTEST_A7_B = RXADAPTSELTEST_A7_B; // net ID: RXADAPTSELTEST lsb: 0  msb: 13 INPUT
			this->RXADAPTSELTEST_A6_B = RXADAPTSELTEST_A6_B; // net ID: RXADAPTSELTEST lsb: 0  msb: 13 INPUT
			this->RXADAPTSELTEST_A5_B = RXADAPTSELTEST_A5_B; // net ID: RXADAPTSELTEST lsb: 0  msb: 13 INPUT
			this->RXADAPTSELTEST_A4_B = RXADAPTSELTEST_A4_B; // net ID: RXADAPTSELTEST lsb: 0  msb: 13 INPUT
			this->RXADAPTSELTEST_A3_B = RXADAPTSELTEST_A3_B; // net ID: RXADAPTSELTEST lsb: 0  msb: 13 INPUT
			this->RXADAPTSELTEST_A2_B = RXADAPTSELTEST_A2_B; // net ID: RXADAPTSELTEST lsb: 0  msb: 13 INPUT
			this->RXADAPTSELTEST_A1_B = RXADAPTSELTEST_A1_B; // net ID: RXADAPTSELTEST lsb: 0  msb: 13 INPUT
			this->RXADAPTSELTEST_A0_B = RXADAPTSELTEST_A0_B; // net ID: RXADAPTSELTEST lsb: 0  msb: 13 INPUT
			this->RXBUFRESET_A0_B = RXBUFRESET_A0_B; // net ID: RXBUFRESET lsb: 0  msb: 0 INPUT
			this->RXCDRFREQRESET_A0_B = RXCDRFREQRESET_A0_B; // net ID: RXCDRFREQRESET lsb: 0  msb: 0 INPUT
			this->RXCDRHOLD_A0_B = RXCDRHOLD_A0_B; // net ID: RXCDRHOLD lsb: 0  msb: 0 INPUT
			this->RXCDROVRDEN_A0_B = RXCDROVRDEN_A0_B; // net ID: RXCDROVRDEN lsb: 0  msb: 0 INPUT
			this->RXCDRRESET_A0_B = RXCDRRESET_A0_B; // net ID: RXCDRRESET lsb: 0  msb: 0 INPUT
			this->RXCDRRESETRSV_A0_B = RXCDRRESETRSV_A0_B; // net ID: RXCDRRESETRSV lsb: 0  msb: 0 INPUT
			this->RXCHBONDEN_A0_B = RXCHBONDEN_A0_B; // net ID: RXCHBONDEN lsb: 0  msb: 0 INPUT
			this->RXCHBONDI_A3_B = RXCHBONDI_A3_B; // net ID: RXCHBONDI lsb: 0  msb: 3 INPUT
			this->RXCHBONDI_A2_B = RXCHBONDI_A2_B; // net ID: RXCHBONDI lsb: 0  msb: 3 INPUT
			this->RXCHBONDI_A1_B = RXCHBONDI_A1_B; // net ID: RXCHBONDI lsb: 0  msb: 3 INPUT
			this->RXCHBONDI_A0_B = RXCHBONDI_A0_B; // net ID: RXCHBONDI lsb: 0  msb: 3 INPUT
			this->RXCHBONDLEVEL_A2_B = RXCHBONDLEVEL_A2_B; // net ID: RXCHBONDLEVEL lsb: 0  msb: 2 INPUT
			this->RXCHBONDLEVEL_A1_B = RXCHBONDLEVEL_A1_B; // net ID: RXCHBONDLEVEL lsb: 0  msb: 2 INPUT
			this->RXCHBONDLEVEL_A0_B = RXCHBONDLEVEL_A0_B; // net ID: RXCHBONDLEVEL lsb: 0  msb: 2 INPUT
			this->RXCHBONDMASTER_A0_B = RXCHBONDMASTER_A0_B; // net ID: RXCHBONDMASTER lsb: 0  msb: 0 INPUT
			this->RXCHBONDSLAVE_A0_B = RXCHBONDSLAVE_A0_B; // net ID: RXCHBONDSLAVE lsb: 0  msb: 0 INPUT
			this->RXCOMMADETEN_A0_B = RXCOMMADETEN_A0_B; // net ID: RXCOMMADETEN lsb: 0  msb: 0 INPUT
			this->RXDDIEN_A0_B = RXDDIEN_A0_B; // net ID: RXDDIEN lsb: 0  msb: 0 INPUT
			this->RXDFEXYDEN_A0_B = RXDFEXYDEN_A0_B; // net ID: RXDFEXYDEN lsb: 0  msb: 0 INPUT
			this->RXDLYBYPASS_A0_B = RXDLYBYPASS_A0_B; // net ID: RXDLYBYPASS lsb: 0  msb: 0 INPUT
			this->RXDLYEN_A0_B = RXDLYEN_A0_B; // net ID: RXDLYEN lsb: 0  msb: 0 INPUT
			this->RXDLYOVRDEN_A0_B = RXDLYOVRDEN_A0_B; // net ID: RXDLYOVRDEN lsb: 0  msb: 0 INPUT
			this->RXDLYSRESET_A0_B = RXDLYSRESET_A0_B; // net ID: RXDLYSRESET lsb: 0  msb: 0 INPUT
			this->RXELECIDLEMODE_A1_B = RXELECIDLEMODE_A1_B; // net ID: RXELECIDLEMODE lsb: 0  msb: 1 INPUT
			this->RXELECIDLEMODE_A0_B = RXELECIDLEMODE_A0_B; // net ID: RXELECIDLEMODE lsb: 0  msb: 1 INPUT
			this->RXGEARBOXSLIP_A0_B = RXGEARBOXSLIP_A0_B; // net ID: RXGEARBOXSLIP lsb: 0  msb: 0 INPUT
			this->RXLPMHFHOLD_A0_B = RXLPMHFHOLD_A0_B; // net ID: RXLPMHFHOLD lsb: 0  msb: 0 INPUT
			this->RXLPMHFOVRDEN_A0_B = RXLPMHFOVRDEN_A0_B; // net ID: RXLPMHFOVRDEN lsb: 0  msb: 0 INPUT
			this->RXLPMLFHOLD_A0_B = RXLPMLFHOLD_A0_B; // net ID: RXLPMLFHOLD lsb: 0  msb: 0 INPUT
			this->RXLPMLFOVRDEN_A0_B = RXLPMLFOVRDEN_A0_B; // net ID: RXLPMLFOVRDEN lsb: 0  msb: 0 INPUT
			this->RXLPMOSINTNTRLEN_A0_B = RXLPMOSINTNTRLEN_A0_B; // net ID: RXLPMOSINTNTRLEN lsb: 0  msb: 0 INPUT
			this->RXLPMRESET_A0_B = RXLPMRESET_A0_B; // net ID: RXLPMRESET lsb: 0  msb: 0 INPUT
			this->RXMCOMMAALIGNEN_A0_B = RXMCOMMAALIGNEN_A0_B; // net ID: RXMCOMMAALIGNEN lsb: 0  msb: 0 INPUT
			this->RXOOBRESET_A0_B = RXOOBRESET_A0_B; // net ID: RXOOBRESET lsb: 0  msb: 0 INPUT
			this->RXOSCALRESET_A0_B = RXOSCALRESET_A0_B; // net ID: RXOSCALRESET lsb: 0  msb: 0 INPUT
			this->RXOSHOLD_A0_B = RXOSHOLD_A0_B; // net ID: RXOSHOLD lsb: 0  msb: 0 INPUT
			this->RXOSINTCFG_A3_B = RXOSINTCFG_A3_B; // net ID: RXOSINTCFG lsb: 0  msb: 3 INPUT
			this->RXOSINTCFG_A2_B = RXOSINTCFG_A2_B; // net ID: RXOSINTCFG lsb: 0  msb: 3 INPUT
			this->RXOSINTCFG_A1_B = RXOSINTCFG_A1_B; // net ID: RXOSINTCFG lsb: 0  msb: 3 INPUT
			this->RXOSINTCFG_A0_B = RXOSINTCFG_A0_B; // net ID: RXOSINTCFG lsb: 0  msb: 3 INPUT
			this->RXOSINTEN_A0_B = RXOSINTEN_A0_B; // net ID: RXOSINTEN lsb: 0  msb: 0 INPUT
			this->RXOSINTHOLD_A0_B = RXOSINTHOLD_A0_B; // net ID: RXOSINTHOLD lsb: 0  msb: 0 INPUT
			this->RXOSINTID0_A3_B = RXOSINTID0_A3_B; // net ID: RXOSINTID0 lsb: 0  msb: 3 INPUT
			this->RXOSINTID0_A2_B = RXOSINTID0_A2_B; // net ID: RXOSINTID0 lsb: 0  msb: 3 INPUT
			this->RXOSINTID0_A1_B = RXOSINTID0_A1_B; // net ID: RXOSINTID0 lsb: 0  msb: 3 INPUT
			this->RXOSINTID0_A0_B = RXOSINTID0_A0_B; // net ID: RXOSINTID0 lsb: 0  msb: 3 INPUT
			this->RXOSINTNTRLEN_A0_B = RXOSINTNTRLEN_A0_B; // net ID: RXOSINTNTRLEN lsb: 0  msb: 0 INPUT
			this->RXOSINTOVRDEN_A0_B = RXOSINTOVRDEN_A0_B; // net ID: RXOSINTOVRDEN lsb: 0  msb: 0 INPUT
			this->RXOSINTPD_A0_B = RXOSINTPD_A0_B; // net ID: RXOSINTPD lsb: 0  msb: 0 INPUT
			this->RXOSINTSTROBE_A0_B = RXOSINTSTROBE_A0_B; // net ID: RXOSINTSTROBE lsb: 0  msb: 0 INPUT
			this->RXOSINTTESTOVRDEN_A0_B = RXOSINTTESTOVRDEN_A0_B; // net ID: RXOSINTTESTOVRDEN lsb: 0  msb: 0 INPUT
			this->RXOSOVRDEN_A0_B = RXOSOVRDEN_A0_B; // net ID: RXOSOVRDEN lsb: 0  msb: 0 INPUT
			this->RXOUTCLKSEL_A2_B = RXOUTCLKSEL_A2_B; // net ID: RXOUTCLKSEL lsb: 0  msb: 2 INPUT
			this->RXOUTCLKSEL_A1_B = RXOUTCLKSEL_A1_B; // net ID: RXOUTCLKSEL lsb: 0  msb: 2 INPUT
			this->RXOUTCLKSEL_A0_B = RXOUTCLKSEL_A0_B; // net ID: RXOUTCLKSEL lsb: 0  msb: 2 INPUT
			this->RXPCOMMAALIGNEN_A0_B = RXPCOMMAALIGNEN_A0_B; // net ID: RXPCOMMAALIGNEN lsb: 0  msb: 0 INPUT
			this->RXPCSRESET_A0_B = RXPCSRESET_A0_B; // net ID: RXPCSRESET lsb: 0  msb: 0 INPUT
			this->RXPD_A1_B = RXPD_A1_B; // net ID: RXPD lsb: 0  msb: 1 INPUT
			this->RXPD_A0_B = RXPD_A0_B; // net ID: RXPD lsb: 0  msb: 1 INPUT
			this->RXPHALIGN_A0_B = RXPHALIGN_A0_B; // net ID: RXPHALIGN lsb: 0  msb: 0 INPUT
			this->RXPHALIGNEN_A0_B = RXPHALIGNEN_A0_B; // net ID: RXPHALIGNEN lsb: 0  msb: 0 INPUT
			this->RXPHDLYPD_A0_B = RXPHDLYPD_A0_B; // net ID: RXPHDLYPD lsb: 0  msb: 0 INPUT
			this->RXPHDLYRESET_A0_B = RXPHDLYRESET_A0_B; // net ID: RXPHDLYRESET lsb: 0  msb: 0 INPUT
			this->RXPHOVRDEN_A0_B = RXPHOVRDEN_A0_B; // net ID: RXPHOVRDEN lsb: 0  msb: 0 INPUT
			this->RXPMARESET_A0_B = RXPMARESET_A0_B; // net ID: RXPMARESET lsb: 0  msb: 0 INPUT
			this->RXPOLARITY_A0_B = RXPOLARITY_A0_B; // net ID: RXPOLARITY lsb: 0  msb: 0 INPUT
			this->RXPRBSCNTRESET_A0_B = RXPRBSCNTRESET_A0_B; // net ID: RXPRBSCNTRESET lsb: 0  msb: 0 INPUT
			this->RXPRBSSEL_A2_B = RXPRBSSEL_A2_B; // net ID: RXPRBSSEL lsb: 0  msb: 2 INPUT
			this->RXPRBSSEL_A1_B = RXPRBSSEL_A1_B; // net ID: RXPRBSSEL lsb: 0  msb: 2 INPUT
			this->RXPRBSSEL_A0_B = RXPRBSSEL_A0_B; // net ID: RXPRBSSEL lsb: 0  msb: 2 INPUT
			this->RXRATE_A2_B = RXRATE_A2_B; // net ID: RXRATE lsb: 0  msb: 2 INPUT
			this->RXRATE_A1_B = RXRATE_A1_B; // net ID: RXRATE lsb: 0  msb: 2 INPUT
			this->RXRATE_A0_B = RXRATE_A0_B; // net ID: RXRATE lsb: 0  msb: 2 INPUT
			this->RXRATEMODE_A0_B = RXRATEMODE_A0_B; // net ID: RXRATEMODE lsb: 0  msb: 0 INPUT
			this->RXSLIDE_A0_B = RXSLIDE_A0_B; // net ID: RXSLIDE lsb: 0  msb: 0 INPUT
			this->RXSYNCALLIN_A0_B = RXSYNCALLIN_A0_B; // net ID: RXSYNCALLIN lsb: 0  msb: 0 INPUT
			this->RXSYNCIN_A0_B = RXSYNCIN_A0_B; // net ID: RXSYNCIN lsb: 0  msb: 0 INPUT
			this->RXSYNCMODE_A0_B = RXSYNCMODE_A0_B; // net ID: RXSYNCMODE lsb: 0  msb: 0 INPUT
			this->RXSYSCLKSEL_A1_B = RXSYSCLKSEL_A1_B; // net ID: RXSYSCLKSEL lsb: 0  msb: 1 INPUT
			this->RXSYSCLKSEL_A0_B = RXSYSCLKSEL_A0_B; // net ID: RXSYSCLKSEL lsb: 0  msb: 1 INPUT
			this->RXUSERRDY_A0_B = RXUSERRDY_A0_B; // net ID: RXUSERRDY lsb: 0  msb: 0 INPUT
			this->RXUSRCLK_A0_B = RXUSRCLK_A0_B; // net ID: RXUSRCLK lsb: 0  msb: 0 INPUT
			this->RXUSRCLK2_A0_B = RXUSRCLK2_A0_B; // net ID: RXUSRCLK2 lsb: 0  msb: 0 INPUT
			this->SETERRSTATUS_A0_B = SETERRSTATUS_A0_B; // net ID: SETERRSTATUS lsb: 0  msb: 0 INPUT
			this->SIGVALIDCLK_A0_B = SIGVALIDCLK_A0_B; // net ID: SIGVALIDCLK lsb: 0  msb: 0 INPUT
			this->TSTIN_A19_B = TSTIN_A19_B; // net ID: TSTIN lsb: 0  msb: 19 INPUT
			this->TSTIN_A18_B = TSTIN_A18_B; // net ID: TSTIN lsb: 0  msb: 19 INPUT
			this->TSTIN_A17_B = TSTIN_A17_B; // net ID: TSTIN lsb: 0  msb: 19 INPUT
			this->TSTIN_A16_B = TSTIN_A16_B; // net ID: TSTIN lsb: 0  msb: 19 INPUT
			this->TSTIN_A15_B = TSTIN_A15_B; // net ID: TSTIN lsb: 0  msb: 19 INPUT
			this->TSTIN_A14_B = TSTIN_A14_B; // net ID: TSTIN lsb: 0  msb: 19 INPUT
			this->TSTIN_A13_B = TSTIN_A13_B; // net ID: TSTIN lsb: 0  msb: 19 INPUT
			this->TSTIN_A12_B = TSTIN_A12_B; // net ID: TSTIN lsb: 0  msb: 19 INPUT
			this->TSTIN_A11_B = TSTIN_A11_B; // net ID: TSTIN lsb: 0  msb: 19 INPUT
			this->TSTIN_A10_B = TSTIN_A10_B; // net ID: TSTIN lsb: 0  msb: 19 INPUT
			this->TSTIN_A9_B = TSTIN_A9_B; // net ID: TSTIN lsb: 0  msb: 19 INPUT
			this->TSTIN_A8_B = TSTIN_A8_B; // net ID: TSTIN lsb: 0  msb: 19 INPUT
			this->TSTIN_A7_B = TSTIN_A7_B; // net ID: TSTIN lsb: 0  msb: 19 INPUT
			this->TSTIN_A6_B = TSTIN_A6_B; // net ID: TSTIN lsb: 0  msb: 19 INPUT
			this->TSTIN_A5_B = TSTIN_A5_B; // net ID: TSTIN lsb: 0  msb: 19 INPUT
			this->TSTIN_A4_B = TSTIN_A4_B; // net ID: TSTIN lsb: 0  msb: 19 INPUT
			this->TSTIN_A3_B = TSTIN_A3_B; // net ID: TSTIN lsb: 0  msb: 19 INPUT
			this->TSTIN_A2_B = TSTIN_A2_B; // net ID: TSTIN lsb: 0  msb: 19 INPUT
			this->TSTIN_A1_B = TSTIN_A1_B; // net ID: TSTIN lsb: 0  msb: 19 INPUT
			this->TSTIN_A0_B = TSTIN_A0_B; // net ID: TSTIN lsb: 0  msb: 19 INPUT
			this->TX8B10BBYPASS_A3_B = TX8B10BBYPASS_A3_B; // net ID: TX8B10BBYPASS lsb: 0  msb: 3 INPUT
			this->TX8B10BBYPASS_A2_B = TX8B10BBYPASS_A2_B; // net ID: TX8B10BBYPASS lsb: 0  msb: 3 INPUT
			this->TX8B10BBYPASS_A1_B = TX8B10BBYPASS_A1_B; // net ID: TX8B10BBYPASS lsb: 0  msb: 3 INPUT
			this->TX8B10BBYPASS_A0_B = TX8B10BBYPASS_A0_B; // net ID: TX8B10BBYPASS lsb: 0  msb: 3 INPUT
			this->TX8B10BEN_A0_B = TX8B10BEN_A0_B; // net ID: TX8B10BEN lsb: 0  msb: 0 INPUT
			this->TXBUFDIFFCTRL_A2_B = TXBUFDIFFCTRL_A2_B; // net ID: TXBUFDIFFCTRL lsb: 0  msb: 2 INPUT
			this->TXBUFDIFFCTRL_A1_B = TXBUFDIFFCTRL_A1_B; // net ID: TXBUFDIFFCTRL lsb: 0  msb: 2 INPUT
			this->TXBUFDIFFCTRL_A0_B = TXBUFDIFFCTRL_A0_B; // net ID: TXBUFDIFFCTRL lsb: 0  msb: 2 INPUT
			this->TXCHARDISPMODE_A3_B = TXCHARDISPMODE_A3_B; // net ID: TXCHARDISPMODE lsb: 0  msb: 3 INPUT
			this->TXCHARDISPMODE_A2_B = TXCHARDISPMODE_A2_B; // net ID: TXCHARDISPMODE lsb: 0  msb: 3 INPUT
			this->TXCHARDISPMODE_A1_B = TXCHARDISPMODE_A1_B; // net ID: TXCHARDISPMODE lsb: 0  msb: 3 INPUT
			this->TXCHARDISPMODE_A0_B = TXCHARDISPMODE_A0_B; // net ID: TXCHARDISPMODE lsb: 0  msb: 3 INPUT
			this->TXCHARDISPVAL_A3_B = TXCHARDISPVAL_A3_B; // net ID: TXCHARDISPVAL lsb: 0  msb: 3 INPUT
			this->TXCHARDISPVAL_A2_B = TXCHARDISPVAL_A2_B; // net ID: TXCHARDISPVAL lsb: 0  msb: 3 INPUT
			this->TXCHARDISPVAL_A1_B = TXCHARDISPVAL_A1_B; // net ID: TXCHARDISPVAL lsb: 0  msb: 3 INPUT
			this->TXCHARDISPVAL_A0_B = TXCHARDISPVAL_A0_B; // net ID: TXCHARDISPVAL lsb: 0  msb: 3 INPUT
			this->TXCHARISK_A3_B = TXCHARISK_A3_B; // net ID: TXCHARISK lsb: 0  msb: 3 INPUT
			this->TXCHARISK_A2_B = TXCHARISK_A2_B; // net ID: TXCHARISK lsb: 0  msb: 3 INPUT
			this->TXCHARISK_A1_B = TXCHARISK_A1_B; // net ID: TXCHARISK lsb: 0  msb: 3 INPUT
			this->TXCHARISK_A0_B = TXCHARISK_A0_B; // net ID: TXCHARISK lsb: 0  msb: 3 INPUT
			this->TXCOMINIT_A0_B = TXCOMINIT_A0_B; // net ID: TXCOMINIT lsb: 0  msb: 0 INPUT
			this->TXCOMSAS_A0_B = TXCOMSAS_A0_B; // net ID: TXCOMSAS lsb: 0  msb: 0 INPUT
			this->TXCOMWAKE_A0_B = TXCOMWAKE_A0_B; // net ID: TXCOMWAKE lsb: 0  msb: 0 INPUT
			this->TXDATA_A31_B = TXDATA_A31_B; // net ID: TXDATA lsb: 0  msb: 31 INPUT
			this->TXDATA_A30_B = TXDATA_A30_B; // net ID: TXDATA lsb: 0  msb: 31 INPUT
			this->TXDATA_A29_B = TXDATA_A29_B; // net ID: TXDATA lsb: 0  msb: 31 INPUT
			this->TXDATA_A28_B = TXDATA_A28_B; // net ID: TXDATA lsb: 0  msb: 31 INPUT
			this->TXDATA_A27_B = TXDATA_A27_B; // net ID: TXDATA lsb: 0  msb: 31 INPUT
			this->TXDATA_A26_B = TXDATA_A26_B; // net ID: TXDATA lsb: 0  msb: 31 INPUT
			this->TXDATA_A25_B = TXDATA_A25_B; // net ID: TXDATA lsb: 0  msb: 31 INPUT
			this->TXDATA_A24_B = TXDATA_A24_B; // net ID: TXDATA lsb: 0  msb: 31 INPUT
			this->TXDATA_A23_B = TXDATA_A23_B; // net ID: TXDATA lsb: 0  msb: 31 INPUT
			this->TXDATA_A22_B = TXDATA_A22_B; // net ID: TXDATA lsb: 0  msb: 31 INPUT
			this->TXDATA_A21_B = TXDATA_A21_B; // net ID: TXDATA lsb: 0  msb: 31 INPUT
			this->TXDATA_A20_B = TXDATA_A20_B; // net ID: TXDATA lsb: 0  msb: 31 INPUT
			this->TXDATA_A19_B = TXDATA_A19_B; // net ID: TXDATA lsb: 0  msb: 31 INPUT
			this->TXDATA_A18_B = TXDATA_A18_B; // net ID: TXDATA lsb: 0  msb: 31 INPUT
			this->TXDATA_A17_B = TXDATA_A17_B; // net ID: TXDATA lsb: 0  msb: 31 INPUT
			this->TXDATA_A16_B = TXDATA_A16_B; // net ID: TXDATA lsb: 0  msb: 31 INPUT
			this->TXDATA_A15_B = TXDATA_A15_B; // net ID: TXDATA lsb: 0  msb: 31 INPUT
			this->TXDATA_A14_B = TXDATA_A14_B; // net ID: TXDATA lsb: 0  msb: 31 INPUT
			this->TXDATA_A13_B = TXDATA_A13_B; // net ID: TXDATA lsb: 0  msb: 31 INPUT
			this->TXDATA_A12_B = TXDATA_A12_B; // net ID: TXDATA lsb: 0  msb: 31 INPUT
			this->TXDATA_A11_B = TXDATA_A11_B; // net ID: TXDATA lsb: 0  msb: 31 INPUT
			this->TXDATA_A10_B = TXDATA_A10_B; // net ID: TXDATA lsb: 0  msb: 31 INPUT
			this->TXDATA_A9_B = TXDATA_A9_B; // net ID: TXDATA lsb: 0  msb: 31 INPUT
			this->TXDATA_A8_B = TXDATA_A8_B; // net ID: TXDATA lsb: 0  msb: 31 INPUT
			this->TXDATA_A7_B = TXDATA_A7_B; // net ID: TXDATA lsb: 0  msb: 31 INPUT
			this->TXDATA_A6_B = TXDATA_A6_B; // net ID: TXDATA lsb: 0  msb: 31 INPUT
			this->TXDATA_A5_B = TXDATA_A5_B; // net ID: TXDATA lsb: 0  msb: 31 INPUT
			this->TXDATA_A4_B = TXDATA_A4_B; // net ID: TXDATA lsb: 0  msb: 31 INPUT
			this->TXDATA_A3_B = TXDATA_A3_B; // net ID: TXDATA lsb: 0  msb: 31 INPUT
			this->TXDATA_A2_B = TXDATA_A2_B; // net ID: TXDATA lsb: 0  msb: 31 INPUT
			this->TXDATA_A1_B = TXDATA_A1_B; // net ID: TXDATA lsb: 0  msb: 31 INPUT
			this->TXDATA_A0_B = TXDATA_A0_B; // net ID: TXDATA lsb: 0  msb: 31 INPUT
			this->TXDEEMPH_A0_B = TXDEEMPH_A0_B; // net ID: TXDEEMPH lsb: 0  msb: 0 INPUT
			this->TXDETECTRX_A0_B = TXDETECTRX_A0_B; // net ID: TXDETECTRX lsb: 0  msb: 0 INPUT
			this->TXDIFFCTRL_A3_B = TXDIFFCTRL_A3_B; // net ID: TXDIFFCTRL lsb: 0  msb: 3 INPUT
			this->TXDIFFCTRL_A2_B = TXDIFFCTRL_A2_B; // net ID: TXDIFFCTRL lsb: 0  msb: 3 INPUT
			this->TXDIFFCTRL_A1_B = TXDIFFCTRL_A1_B; // net ID: TXDIFFCTRL lsb: 0  msb: 3 INPUT
			this->TXDIFFCTRL_A0_B = TXDIFFCTRL_A0_B; // net ID: TXDIFFCTRL lsb: 0  msb: 3 INPUT
			this->TXDIFFPD_A0_B = TXDIFFPD_A0_B; // net ID: TXDIFFPD lsb: 0  msb: 0 INPUT
			this->TXDLYBYPASS_A0_B = TXDLYBYPASS_A0_B; // net ID: TXDLYBYPASS lsb: 0  msb: 0 INPUT
			this->TXDLYEN_A0_B = TXDLYEN_A0_B; // net ID: TXDLYEN lsb: 0  msb: 0 INPUT
			this->TXDLYHOLD_A0_B = TXDLYHOLD_A0_B; // net ID: TXDLYHOLD lsb: 0  msb: 0 INPUT
			this->TXDLYOVRDEN_A0_B = TXDLYOVRDEN_A0_B; // net ID: TXDLYOVRDEN lsb: 0  msb: 0 INPUT
			this->TXDLYSRESET_A0_B = TXDLYSRESET_A0_B; // net ID: TXDLYSRESET lsb: 0  msb: 0 INPUT
			this->TXDLYUPDOWN_A0_B = TXDLYUPDOWN_A0_B; // net ID: TXDLYUPDOWN lsb: 0  msb: 0 INPUT
			this->TXELECIDLE_A0_B = TXELECIDLE_A0_B; // net ID: TXELECIDLE lsb: 0  msb: 0 INPUT
			this->TXHEADER_A2_B = TXHEADER_A2_B; // net ID: TXHEADER lsb: 0  msb: 2 INPUT
			this->TXHEADER_A1_B = TXHEADER_A1_B; // net ID: TXHEADER lsb: 0  msb: 2 INPUT
			this->TXHEADER_A0_B = TXHEADER_A0_B; // net ID: TXHEADER lsb: 0  msb: 2 INPUT
			this->TXINHIBIT_A0_B = TXINHIBIT_A0_B; // net ID: TXINHIBIT lsb: 0  msb: 0 INPUT
			this->TXMAINCURSOR_A6_B = TXMAINCURSOR_A6_B; // net ID: TXMAINCURSOR lsb: 0  msb: 6 INPUT
			this->TXMAINCURSOR_A5_B = TXMAINCURSOR_A5_B; // net ID: TXMAINCURSOR lsb: 0  msb: 6 INPUT
			this->TXMAINCURSOR_A4_B = TXMAINCURSOR_A4_B; // net ID: TXMAINCURSOR lsb: 0  msb: 6 INPUT
			this->TXMAINCURSOR_A3_B = TXMAINCURSOR_A3_B; // net ID: TXMAINCURSOR lsb: 0  msb: 6 INPUT
			this->TXMAINCURSOR_A2_B = TXMAINCURSOR_A2_B; // net ID: TXMAINCURSOR lsb: 0  msb: 6 INPUT
			this->TXMAINCURSOR_A1_B = TXMAINCURSOR_A1_B; // net ID: TXMAINCURSOR lsb: 0  msb: 6 INPUT
			this->TXMAINCURSOR_A0_B = TXMAINCURSOR_A0_B; // net ID: TXMAINCURSOR lsb: 0  msb: 6 INPUT
			this->TXMARGIN_A2_B = TXMARGIN_A2_B; // net ID: TXMARGIN lsb: 0  msb: 2 INPUT
			this->TXMARGIN_A1_B = TXMARGIN_A1_B; // net ID: TXMARGIN lsb: 0  msb: 2 INPUT
			this->TXMARGIN_A0_B = TXMARGIN_A0_B; // net ID: TXMARGIN lsb: 0  msb: 2 INPUT
			this->TXOUTCLKSEL_A2_B = TXOUTCLKSEL_A2_B; // net ID: TXOUTCLKSEL lsb: 0  msb: 2 INPUT
			this->TXOUTCLKSEL_A1_B = TXOUTCLKSEL_A1_B; // net ID: TXOUTCLKSEL lsb: 0  msb: 2 INPUT
			this->TXOUTCLKSEL_A0_B = TXOUTCLKSEL_A0_B; // net ID: TXOUTCLKSEL lsb: 0  msb: 2 INPUT
			this->TXPCSRESET_A0_B = TXPCSRESET_A0_B; // net ID: TXPCSRESET lsb: 0  msb: 0 INPUT
			this->TXPD_A1_B = TXPD_A1_B; // net ID: TXPD lsb: 0  msb: 1 INPUT
			this->TXPD_A0_B = TXPD_A0_B; // net ID: TXPD lsb: 0  msb: 1 INPUT
			this->TXPDELECIDLEMODE_A0_B = TXPDELECIDLEMODE_A0_B; // net ID: TXPDELECIDLEMODE lsb: 0  msb: 0 INPUT
			this->TXPHALIGN_A0_B = TXPHALIGN_A0_B; // net ID: TXPHALIGN lsb: 0  msb: 0 INPUT
			this->TXPHALIGNEN_A0_B = TXPHALIGNEN_A0_B; // net ID: TXPHALIGNEN lsb: 0  msb: 0 INPUT
			this->TXPHDLYPD_A0_B = TXPHDLYPD_A0_B; // net ID: TXPHDLYPD lsb: 0  msb: 0 INPUT
			this->TXPHDLYRESET_A0_B = TXPHDLYRESET_A0_B; // net ID: TXPHDLYRESET lsb: 0  msb: 0 INPUT
			this->TXPHDLYTSTCLK_A0_B = TXPHDLYTSTCLK_A0_B; // net ID: TXPHDLYTSTCLK lsb: 0  msb: 0 INPUT
			this->TXPHINIT_A0_B = TXPHINIT_A0_B; // net ID: TXPHINIT lsb: 0  msb: 0 INPUT
			this->TXPHOVRDEN_A0_B = TXPHOVRDEN_A0_B; // net ID: TXPHOVRDEN lsb: 0  msb: 0 INPUT
			this->TXPIPPMEN_A0_B = TXPIPPMEN_A0_B; // net ID: TXPIPPMEN lsb: 0  msb: 0 INPUT
			this->TXPIPPMOVRDEN_A0_B = TXPIPPMOVRDEN_A0_B; // net ID: TXPIPPMOVRDEN lsb: 0  msb: 0 INPUT
			this->TXPIPPMPD_A0_B = TXPIPPMPD_A0_B; // net ID: TXPIPPMPD lsb: 0  msb: 0 INPUT
			this->TXPIPPMSEL_A0_B = TXPIPPMSEL_A0_B; // net ID: TXPIPPMSEL lsb: 0  msb: 0 INPUT
			this->TXPIPPMSTEPSIZE_A4_B = TXPIPPMSTEPSIZE_A4_B; // net ID: TXPIPPMSTEPSIZE lsb: 0  msb: 4 INPUT
			this->TXPIPPMSTEPSIZE_A3_B = TXPIPPMSTEPSIZE_A3_B; // net ID: TXPIPPMSTEPSIZE lsb: 0  msb: 4 INPUT
			this->TXPIPPMSTEPSIZE_A2_B = TXPIPPMSTEPSIZE_A2_B; // net ID: TXPIPPMSTEPSIZE lsb: 0  msb: 4 INPUT
			this->TXPIPPMSTEPSIZE_A1_B = TXPIPPMSTEPSIZE_A1_B; // net ID: TXPIPPMSTEPSIZE lsb: 0  msb: 4 INPUT
			this->TXPIPPMSTEPSIZE_A0_B = TXPIPPMSTEPSIZE_A0_B; // net ID: TXPIPPMSTEPSIZE lsb: 0  msb: 4 INPUT
			this->TXPISOPD_A0_B = TXPISOPD_A0_B; // net ID: TXPISOPD lsb: 0  msb: 0 INPUT
			this->TXPMARESET_A0_B = TXPMARESET_A0_B; // net ID: TXPMARESET lsb: 0  msb: 0 INPUT
			this->TXPOLARITY_A0_B = TXPOLARITY_A0_B; // net ID: TXPOLARITY lsb: 0  msb: 0 INPUT
			this->TXPOSTCURSOR_A4_B = TXPOSTCURSOR_A4_B; // net ID: TXPOSTCURSOR lsb: 0  msb: 4 INPUT
			this->TXPOSTCURSOR_A3_B = TXPOSTCURSOR_A3_B; // net ID: TXPOSTCURSOR lsb: 0  msb: 4 INPUT
			this->TXPOSTCURSOR_A2_B = TXPOSTCURSOR_A2_B; // net ID: TXPOSTCURSOR lsb: 0  msb: 4 INPUT
			this->TXPOSTCURSOR_A1_B = TXPOSTCURSOR_A1_B; // net ID: TXPOSTCURSOR lsb: 0  msb: 4 INPUT
			this->TXPOSTCURSOR_A0_B = TXPOSTCURSOR_A0_B; // net ID: TXPOSTCURSOR lsb: 0  msb: 4 INPUT
			this->TXPOSTCURSORINV_A0_B = TXPOSTCURSORINV_A0_B; // net ID: TXPOSTCURSORINV lsb: 0  msb: 0 INPUT
			this->TXPRBSFORCEERR_A0_B = TXPRBSFORCEERR_A0_B; // net ID: TXPRBSFORCEERR lsb: 0  msb: 0 INPUT
			this->TXPRBSSEL_A2_B = TXPRBSSEL_A2_B; // net ID: TXPRBSSEL lsb: 0  msb: 2 INPUT
			this->TXPRBSSEL_A1_B = TXPRBSSEL_A1_B; // net ID: TXPRBSSEL lsb: 0  msb: 2 INPUT
			this->TXPRBSSEL_A0_B = TXPRBSSEL_A0_B; // net ID: TXPRBSSEL lsb: 0  msb: 2 INPUT
			this->TXPRECURSOR_A4_B = TXPRECURSOR_A4_B; // net ID: TXPRECURSOR lsb: 0  msb: 4 INPUT
			this->TXPRECURSOR_A3_B = TXPRECURSOR_A3_B; // net ID: TXPRECURSOR lsb: 0  msb: 4 INPUT
			this->TXPRECURSOR_A2_B = TXPRECURSOR_A2_B; // net ID: TXPRECURSOR lsb: 0  msb: 4 INPUT
			this->TXPRECURSOR_A1_B = TXPRECURSOR_A1_B; // net ID: TXPRECURSOR lsb: 0  msb: 4 INPUT
			this->TXPRECURSOR_A0_B = TXPRECURSOR_A0_B; // net ID: TXPRECURSOR lsb: 0  msb: 4 INPUT
			this->TXPRECURSORINV_A0_B = TXPRECURSORINV_A0_B; // net ID: TXPRECURSORINV lsb: 0  msb: 0 INPUT
			this->TXRATE_A2_B = TXRATE_A2_B; // net ID: TXRATE lsb: 0  msb: 2 INPUT
			this->TXRATE_A1_B = TXRATE_A1_B; // net ID: TXRATE lsb: 0  msb: 2 INPUT
			this->TXRATE_A0_B = TXRATE_A0_B; // net ID: TXRATE lsb: 0  msb: 2 INPUT
			this->TXRATEMODE_A0_B = TXRATEMODE_A0_B; // net ID: TXRATEMODE lsb: 0  msb: 0 INPUT
			this->TXSEQUENCE_A6_B = TXSEQUENCE_A6_B; // net ID: TXSEQUENCE lsb: 0  msb: 6 INPUT
			this->TXSEQUENCE_A5_B = TXSEQUENCE_A5_B; // net ID: TXSEQUENCE lsb: 0  msb: 6 INPUT
			this->TXSEQUENCE_A4_B = TXSEQUENCE_A4_B; // net ID: TXSEQUENCE lsb: 0  msb: 6 INPUT
			this->TXSEQUENCE_A3_B = TXSEQUENCE_A3_B; // net ID: TXSEQUENCE lsb: 0  msb: 6 INPUT
			this->TXSEQUENCE_A2_B = TXSEQUENCE_A2_B; // net ID: TXSEQUENCE lsb: 0  msb: 6 INPUT
			this->TXSEQUENCE_A1_B = TXSEQUENCE_A1_B; // net ID: TXSEQUENCE lsb: 0  msb: 6 INPUT
			this->TXSEQUENCE_A0_B = TXSEQUENCE_A0_B; // net ID: TXSEQUENCE lsb: 0  msb: 6 INPUT
			this->TXSTARTSEQ_A0_B = TXSTARTSEQ_A0_B; // net ID: TXSTARTSEQ lsb: 0  msb: 0 INPUT
			this->TXSWING_A0_B = TXSWING_A0_B; // net ID: TXSWING lsb: 0  msb: 0 INPUT
			this->TXSYNCALLIN_A0_B = TXSYNCALLIN_A0_B; // net ID: TXSYNCALLIN lsb: 0  msb: 0 INPUT
			this->TXSYNCIN_A0_B = TXSYNCIN_A0_B; // net ID: TXSYNCIN lsb: 0  msb: 0 INPUT
			this->TXSYNCMODE_A0_B = TXSYNCMODE_A0_B; // net ID: TXSYNCMODE lsb: 0  msb: 0 INPUT
			this->TXSYSCLKSEL_A1_B = TXSYSCLKSEL_A1_B; // net ID: TXSYSCLKSEL lsb: 0  msb: 1 INPUT
			this->TXSYSCLKSEL_A0_B = TXSYSCLKSEL_A0_B; // net ID: TXSYSCLKSEL lsb: 0  msb: 1 INPUT
			this->TXUSERRDY_A0_B = TXUSERRDY_A0_B; // net ID: TXUSERRDY lsb: 0  msb: 0 INPUT
			this->TXUSRCLK_A0_B = TXUSRCLK_A0_B; // net ID: TXUSRCLK lsb: 0  msb: 0 INPUT
			this->TXUSRCLK2_A0_B = TXUSRCLK2_A0_B; // net ID: TXUSRCLK2 lsb: 0  msb: 0 INPUT
			
			register_wait_on_event_nets();
			
		}
		
		void register_wait_on_event_nets(){
		// TODO
		}
		
		void calculate(simtime_t time){
		// TODO
		}
		};
		
}
#endif // X_GTPE2_CHANNEL_H
