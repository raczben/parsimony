/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_GTXE1_H
#define X_GTXE1_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_GTXE1: public Primitive{

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
		NetFlow* COMFINISH_A0_B; // net ID: COMFINISH lsb: 0  msb: 0 OUTPUT
		NetFlow* COMINITDET_A0_B; // net ID: COMINITDET lsb: 0  msb: 0 OUTPUT
		NetFlow* COMSASDET_A0_B; // net ID: COMSASDET lsb: 0  msb: 0 OUTPUT
		NetFlow* COMWAKEDET_A0_B; // net ID: COMWAKEDET lsb: 0  msb: 0 OUTPUT
		NetFlow* DFECLKDLYADJMON_A5_B; // net ID: DFECLKDLYADJMON lsb: 0  msb: 5 OUTPUT
		NetFlow* DFECLKDLYADJMON_A4_B; // net ID: DFECLKDLYADJMON lsb: 0  msb: 5 OUTPUT
		NetFlow* DFECLKDLYADJMON_A3_B; // net ID: DFECLKDLYADJMON lsb: 0  msb: 5 OUTPUT
		NetFlow* DFECLKDLYADJMON_A2_B; // net ID: DFECLKDLYADJMON lsb: 0  msb: 5 OUTPUT
		NetFlow* DFECLKDLYADJMON_A1_B; // net ID: DFECLKDLYADJMON lsb: 0  msb: 5 OUTPUT
		NetFlow* DFECLKDLYADJMON_A0_B; // net ID: DFECLKDLYADJMON lsb: 0  msb: 5 OUTPUT
		NetFlow* DFEEYEDACMON_A4_B; // net ID: DFEEYEDACMON lsb: 0  msb: 4 OUTPUT
		NetFlow* DFEEYEDACMON_A3_B; // net ID: DFEEYEDACMON lsb: 0  msb: 4 OUTPUT
		NetFlow* DFEEYEDACMON_A2_B; // net ID: DFEEYEDACMON lsb: 0  msb: 4 OUTPUT
		NetFlow* DFEEYEDACMON_A1_B; // net ID: DFEEYEDACMON lsb: 0  msb: 4 OUTPUT
		NetFlow* DFEEYEDACMON_A0_B; // net ID: DFEEYEDACMON lsb: 0  msb: 4 OUTPUT
		NetFlow* DFESENSCAL_A2_B; // net ID: DFESENSCAL lsb: 0  msb: 2 OUTPUT
		NetFlow* DFESENSCAL_A1_B; // net ID: DFESENSCAL lsb: 0  msb: 2 OUTPUT
		NetFlow* DFESENSCAL_A0_B; // net ID: DFESENSCAL lsb: 0  msb: 2 OUTPUT
		NetFlow* DFETAP1MONITOR_A4_B; // net ID: DFETAP1MONITOR lsb: 0  msb: 4 OUTPUT
		NetFlow* DFETAP1MONITOR_A3_B; // net ID: DFETAP1MONITOR lsb: 0  msb: 4 OUTPUT
		NetFlow* DFETAP1MONITOR_A2_B; // net ID: DFETAP1MONITOR lsb: 0  msb: 4 OUTPUT
		NetFlow* DFETAP1MONITOR_A1_B; // net ID: DFETAP1MONITOR lsb: 0  msb: 4 OUTPUT
		NetFlow* DFETAP1MONITOR_A0_B; // net ID: DFETAP1MONITOR lsb: 0  msb: 4 OUTPUT
		NetFlow* DFETAP2MONITOR_A4_B; // net ID: DFETAP2MONITOR lsb: 0  msb: 4 OUTPUT
		NetFlow* DFETAP2MONITOR_A3_B; // net ID: DFETAP2MONITOR lsb: 0  msb: 4 OUTPUT
		NetFlow* DFETAP2MONITOR_A2_B; // net ID: DFETAP2MONITOR lsb: 0  msb: 4 OUTPUT
		NetFlow* DFETAP2MONITOR_A1_B; // net ID: DFETAP2MONITOR lsb: 0  msb: 4 OUTPUT
		NetFlow* DFETAP2MONITOR_A0_B; // net ID: DFETAP2MONITOR lsb: 0  msb: 4 OUTPUT
		NetFlow* DFETAP3MONITOR_A3_B; // net ID: DFETAP3MONITOR lsb: 0  msb: 3 OUTPUT
		NetFlow* DFETAP3MONITOR_A2_B; // net ID: DFETAP3MONITOR lsb: 0  msb: 3 OUTPUT
		NetFlow* DFETAP3MONITOR_A1_B; // net ID: DFETAP3MONITOR lsb: 0  msb: 3 OUTPUT
		NetFlow* DFETAP3MONITOR_A0_B; // net ID: DFETAP3MONITOR lsb: 0  msb: 3 OUTPUT
		NetFlow* DFETAP4MONITOR_A3_B; // net ID: DFETAP4MONITOR lsb: 0  msb: 3 OUTPUT
		NetFlow* DFETAP4MONITOR_A2_B; // net ID: DFETAP4MONITOR lsb: 0  msb: 3 OUTPUT
		NetFlow* DFETAP4MONITOR_A1_B; // net ID: DFETAP4MONITOR lsb: 0  msb: 3 OUTPUT
		NetFlow* DFETAP4MONITOR_A0_B; // net ID: DFETAP4MONITOR lsb: 0  msb: 3 OUTPUT
		NetFlow* DRDY_A0_B; // net ID: DRDY lsb: 0  msb: 0 OUTPUT
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
		NetFlow* MGTREFCLKFAB_A1_B; // net ID: MGTREFCLKFAB lsb: 0  msb: 1 OUTPUT
		NetFlow* MGTREFCLKFAB_A0_B; // net ID: MGTREFCLKFAB lsb: 0  msb: 1 OUTPUT
		NetFlow* PHYSTATUS_A0_B; // net ID: PHYSTATUS lsb: 0  msb: 0 OUTPUT
		NetFlow* RXBUFSTATUS_A2_B; // net ID: RXBUFSTATUS lsb: 0  msb: 2 OUTPUT
		NetFlow* RXBUFSTATUS_A1_B; // net ID: RXBUFSTATUS lsb: 0  msb: 2 OUTPUT
		NetFlow* RXBUFSTATUS_A0_B; // net ID: RXBUFSTATUS lsb: 0  msb: 2 OUTPUT
		NetFlow* RXBYTEISALIGNED_A0_B; // net ID: RXBYTEISALIGNED lsb: 0  msb: 0 OUTPUT
		NetFlow* RXBYTEREALIGN_A0_B; // net ID: RXBYTEREALIGN lsb: 0  msb: 0 OUTPUT
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
		NetFlow* RXCLKCORCNT_A2_B; // net ID: RXCLKCORCNT lsb: 0  msb: 2 OUTPUT
		NetFlow* RXCLKCORCNT_A1_B; // net ID: RXCLKCORCNT lsb: 0  msb: 2 OUTPUT
		NetFlow* RXCLKCORCNT_A0_B; // net ID: RXCLKCORCNT lsb: 0  msb: 2 OUTPUT
		NetFlow* RXCOMMADET_A0_B; // net ID: RXCOMMADET lsb: 0  msb: 0 OUTPUT
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
		NetFlow* RXDATAVALID_A0_B; // net ID: RXDATAVALID lsb: 0  msb: 0 OUTPUT
		NetFlow* RXDISPERR_A3_B; // net ID: RXDISPERR lsb: 0  msb: 3 OUTPUT
		NetFlow* RXDISPERR_A2_B; // net ID: RXDISPERR lsb: 0  msb: 3 OUTPUT
		NetFlow* RXDISPERR_A1_B; // net ID: RXDISPERR lsb: 0  msb: 3 OUTPUT
		NetFlow* RXDISPERR_A0_B; // net ID: RXDISPERR lsb: 0  msb: 3 OUTPUT
		NetFlow* RXDLYALIGNMONITOR_A7_B; // net ID: RXDLYALIGNMONITOR lsb: 0  msb: 7 OUTPUT
		NetFlow* RXDLYALIGNMONITOR_A6_B; // net ID: RXDLYALIGNMONITOR lsb: 0  msb: 7 OUTPUT
		NetFlow* RXDLYALIGNMONITOR_A5_B; // net ID: RXDLYALIGNMONITOR lsb: 0  msb: 7 OUTPUT
		NetFlow* RXDLYALIGNMONITOR_A4_B; // net ID: RXDLYALIGNMONITOR lsb: 0  msb: 7 OUTPUT
		NetFlow* RXDLYALIGNMONITOR_A3_B; // net ID: RXDLYALIGNMONITOR lsb: 0  msb: 7 OUTPUT
		NetFlow* RXDLYALIGNMONITOR_A2_B; // net ID: RXDLYALIGNMONITOR lsb: 0  msb: 7 OUTPUT
		NetFlow* RXDLYALIGNMONITOR_A1_B; // net ID: RXDLYALIGNMONITOR lsb: 0  msb: 7 OUTPUT
		NetFlow* RXDLYALIGNMONITOR_A0_B; // net ID: RXDLYALIGNMONITOR lsb: 0  msb: 7 OUTPUT
		NetFlow* RXELECIDLE_A0_B; // net ID: RXELECIDLE lsb: 0  msb: 0 OUTPUT
		NetFlow* RXHEADER_A2_B; // net ID: RXHEADER lsb: 0  msb: 2 OUTPUT
		NetFlow* RXHEADER_A1_B; // net ID: RXHEADER lsb: 0  msb: 2 OUTPUT
		NetFlow* RXHEADER_A0_B; // net ID: RXHEADER lsb: 0  msb: 2 OUTPUT
		NetFlow* RXHEADERVALID_A0_B; // net ID: RXHEADERVALID lsb: 0  msb: 0 OUTPUT
		NetFlow* RXLOSSOFSYNC_A1_B; // net ID: RXLOSSOFSYNC lsb: 0  msb: 1 OUTPUT
		NetFlow* RXLOSSOFSYNC_A0_B; // net ID: RXLOSSOFSYNC lsb: 0  msb: 1 OUTPUT
		NetFlow* RXNOTINTABLE_A3_B; // net ID: RXNOTINTABLE lsb: 0  msb: 3 OUTPUT
		NetFlow* RXNOTINTABLE_A2_B; // net ID: RXNOTINTABLE lsb: 0  msb: 3 OUTPUT
		NetFlow* RXNOTINTABLE_A1_B; // net ID: RXNOTINTABLE lsb: 0  msb: 3 OUTPUT
		NetFlow* RXNOTINTABLE_A0_B; // net ID: RXNOTINTABLE lsb: 0  msb: 3 OUTPUT
		NetFlow* RXOVERSAMPLEERR_A0_B; // net ID: RXOVERSAMPLEERR lsb: 0  msb: 0 OUTPUT
		NetFlow* RXPLLLKDET_A0_B; // net ID: RXPLLLKDET lsb: 0  msb: 0 OUTPUT
		NetFlow* RXPRBSERR_A0_B; // net ID: RXPRBSERR lsb: 0  msb: 0 OUTPUT
		NetFlow* RXRATEDONE_A0_B; // net ID: RXRATEDONE lsb: 0  msb: 0 OUTPUT
		NetFlow* RXRECCLK_A0_B; // net ID: RXRECCLK lsb: 0  msb: 0 OUTPUT
		NetFlow* RXRECCLKPCS_A0_B; // net ID: RXRECCLKPCS lsb: 0  msb: 0 OUTPUT
		NetFlow* RXRESETDONE_A0_B; // net ID: RXRESETDONE lsb: 0  msb: 0 OUTPUT
		NetFlow* RXRUNDISP_A3_B; // net ID: RXRUNDISP lsb: 0  msb: 3 OUTPUT
		NetFlow* RXRUNDISP_A2_B; // net ID: RXRUNDISP lsb: 0  msb: 3 OUTPUT
		NetFlow* RXRUNDISP_A1_B; // net ID: RXRUNDISP lsb: 0  msb: 3 OUTPUT
		NetFlow* RXRUNDISP_A0_B; // net ID: RXRUNDISP lsb: 0  msb: 3 OUTPUT
		NetFlow* RXSTARTOFSEQ_A0_B; // net ID: RXSTARTOFSEQ lsb: 0  msb: 0 OUTPUT
		NetFlow* RXSTATUS_A2_B; // net ID: RXSTATUS lsb: 0  msb: 2 OUTPUT
		NetFlow* RXSTATUS_A1_B; // net ID: RXSTATUS lsb: 0  msb: 2 OUTPUT
		NetFlow* RXSTATUS_A0_B; // net ID: RXSTATUS lsb: 0  msb: 2 OUTPUT
		NetFlow* RXVALID_A0_B; // net ID: RXVALID lsb: 0  msb: 0 OUTPUT
		NetFlow* TSTOUT_A9_B; // net ID: TSTOUT lsb: 0  msb: 9 OUTPUT
		NetFlow* TSTOUT_A8_B; // net ID: TSTOUT lsb: 0  msb: 9 OUTPUT
		NetFlow* TSTOUT_A7_B; // net ID: TSTOUT lsb: 0  msb: 9 OUTPUT
		NetFlow* TSTOUT_A6_B; // net ID: TSTOUT lsb: 0  msb: 9 OUTPUT
		NetFlow* TSTOUT_A5_B; // net ID: TSTOUT lsb: 0  msb: 9 OUTPUT
		NetFlow* TSTOUT_A4_B; // net ID: TSTOUT lsb: 0  msb: 9 OUTPUT
		NetFlow* TSTOUT_A3_B; // net ID: TSTOUT lsb: 0  msb: 9 OUTPUT
		NetFlow* TSTOUT_A2_B; // net ID: TSTOUT lsb: 0  msb: 9 OUTPUT
		NetFlow* TSTOUT_A1_B; // net ID: TSTOUT lsb: 0  msb: 9 OUTPUT
		NetFlow* TSTOUT_A0_B; // net ID: TSTOUT lsb: 0  msb: 9 OUTPUT
		NetFlow* TXBUFSTATUS_A1_B; // net ID: TXBUFSTATUS lsb: 0  msb: 1 OUTPUT
		NetFlow* TXBUFSTATUS_A0_B; // net ID: TXBUFSTATUS lsb: 0  msb: 1 OUTPUT
		NetFlow* TXDLYALIGNMONITOR_A7_B; // net ID: TXDLYALIGNMONITOR lsb: 0  msb: 7 OUTPUT
		NetFlow* TXDLYALIGNMONITOR_A6_B; // net ID: TXDLYALIGNMONITOR lsb: 0  msb: 7 OUTPUT
		NetFlow* TXDLYALIGNMONITOR_A5_B; // net ID: TXDLYALIGNMONITOR lsb: 0  msb: 7 OUTPUT
		NetFlow* TXDLYALIGNMONITOR_A4_B; // net ID: TXDLYALIGNMONITOR lsb: 0  msb: 7 OUTPUT
		NetFlow* TXDLYALIGNMONITOR_A3_B; // net ID: TXDLYALIGNMONITOR lsb: 0  msb: 7 OUTPUT
		NetFlow* TXDLYALIGNMONITOR_A2_B; // net ID: TXDLYALIGNMONITOR lsb: 0  msb: 7 OUTPUT
		NetFlow* TXDLYALIGNMONITOR_A1_B; // net ID: TXDLYALIGNMONITOR lsb: 0  msb: 7 OUTPUT
		NetFlow* TXDLYALIGNMONITOR_A0_B; // net ID: TXDLYALIGNMONITOR lsb: 0  msb: 7 OUTPUT
		NetFlow* TXGEARBOXREADY_A0_B; // net ID: TXGEARBOXREADY lsb: 0  msb: 0 OUTPUT
		NetFlow* TXKERR_A3_B; // net ID: TXKERR lsb: 0  msb: 3 OUTPUT
		NetFlow* TXKERR_A2_B; // net ID: TXKERR lsb: 0  msb: 3 OUTPUT
		NetFlow* TXKERR_A1_B; // net ID: TXKERR lsb: 0  msb: 3 OUTPUT
		NetFlow* TXKERR_A0_B; // net ID: TXKERR lsb: 0  msb: 3 OUTPUT
		NetFlow* TXN_A0_B; // net ID: TXN lsb: 0  msb: 0 OUTPUT
		NetFlow* TXOUTCLK_A0_B; // net ID: TXOUTCLK lsb: 0  msb: 0 OUTPUT
		NetFlow* TXOUTCLKPCS_A0_B; // net ID: TXOUTCLKPCS lsb: 0  msb: 0 OUTPUT
		NetFlow* TXP_A0_B; // net ID: TXP lsb: 0  msb: 0 OUTPUT
		NetFlow* TXPLLLKDET_A0_B; // net ID: TXPLLLKDET lsb: 0  msb: 0 OUTPUT
		NetFlow* TXRATEDONE_A0_B; // net ID: TXRATEDONE lsb: 0  msb: 0 OUTPUT
		NetFlow* TXRESETDONE_A0_B; // net ID: TXRESETDONE lsb: 0  msb: 0 OUTPUT
		NetFlow* TXRUNDISP_A3_B; // net ID: TXRUNDISP lsb: 0  msb: 3 OUTPUT
		NetFlow* TXRUNDISP_A2_B; // net ID: TXRUNDISP lsb: 0  msb: 3 OUTPUT
		NetFlow* TXRUNDISP_A1_B; // net ID: TXRUNDISP lsb: 0  msb: 3 OUTPUT
		NetFlow* TXRUNDISP_A0_B; // net ID: TXRUNDISP lsb: 0  msb: 3 OUTPUT
		NetFlow* DADDR_A7_B; // net ID: DADDR lsb: 0  msb: 7 INPUT
		NetFlow* DADDR_A6_B; // net ID: DADDR lsb: 0  msb: 7 INPUT
		NetFlow* DADDR_A5_B; // net ID: DADDR lsb: 0  msb: 7 INPUT
		NetFlow* DADDR_A4_B; // net ID: DADDR lsb: 0  msb: 7 INPUT
		NetFlow* DADDR_A3_B; // net ID: DADDR lsb: 0  msb: 7 INPUT
		NetFlow* DADDR_A2_B; // net ID: DADDR lsb: 0  msb: 7 INPUT
		NetFlow* DADDR_A1_B; // net ID: DADDR lsb: 0  msb: 7 INPUT
		NetFlow* DADDR_A0_B; // net ID: DADDR lsb: 0  msb: 7 INPUT
		NetFlow* DCLK_A0_B; // net ID: DCLK lsb: 0  msb: 0 INPUT
		NetFlow* DEN_A0_B; // net ID: DEN lsb: 0  msb: 0 INPUT
		NetFlow* DFECLKDLYADJ_A5_B; // net ID: DFECLKDLYADJ lsb: 0  msb: 5 INPUT
		NetFlow* DFECLKDLYADJ_A4_B; // net ID: DFECLKDLYADJ lsb: 0  msb: 5 INPUT
		NetFlow* DFECLKDLYADJ_A3_B; // net ID: DFECLKDLYADJ lsb: 0  msb: 5 INPUT
		NetFlow* DFECLKDLYADJ_A2_B; // net ID: DFECLKDLYADJ lsb: 0  msb: 5 INPUT
		NetFlow* DFECLKDLYADJ_A1_B; // net ID: DFECLKDLYADJ lsb: 0  msb: 5 INPUT
		NetFlow* DFECLKDLYADJ_A0_B; // net ID: DFECLKDLYADJ lsb: 0  msb: 5 INPUT
		NetFlow* DFEDLYOVRD_A0_B; // net ID: DFEDLYOVRD lsb: 0  msb: 0 INPUT
		NetFlow* DFETAP1_A4_B; // net ID: DFETAP1 lsb: 0  msb: 4 INPUT
		NetFlow* DFETAP1_A3_B; // net ID: DFETAP1 lsb: 0  msb: 4 INPUT
		NetFlow* DFETAP1_A2_B; // net ID: DFETAP1 lsb: 0  msb: 4 INPUT
		NetFlow* DFETAP1_A1_B; // net ID: DFETAP1 lsb: 0  msb: 4 INPUT
		NetFlow* DFETAP1_A0_B; // net ID: DFETAP1 lsb: 0  msb: 4 INPUT
		NetFlow* DFETAP2_A4_B; // net ID: DFETAP2 lsb: 0  msb: 4 INPUT
		NetFlow* DFETAP2_A3_B; // net ID: DFETAP2 lsb: 0  msb: 4 INPUT
		NetFlow* DFETAP2_A2_B; // net ID: DFETAP2 lsb: 0  msb: 4 INPUT
		NetFlow* DFETAP2_A1_B; // net ID: DFETAP2 lsb: 0  msb: 4 INPUT
		NetFlow* DFETAP2_A0_B; // net ID: DFETAP2 lsb: 0  msb: 4 INPUT
		NetFlow* DFETAP3_A3_B; // net ID: DFETAP3 lsb: 0  msb: 3 INPUT
		NetFlow* DFETAP3_A2_B; // net ID: DFETAP3 lsb: 0  msb: 3 INPUT
		NetFlow* DFETAP3_A1_B; // net ID: DFETAP3 lsb: 0  msb: 3 INPUT
		NetFlow* DFETAP3_A0_B; // net ID: DFETAP3 lsb: 0  msb: 3 INPUT
		NetFlow* DFETAP4_A3_B; // net ID: DFETAP4 lsb: 0  msb: 3 INPUT
		NetFlow* DFETAP4_A2_B; // net ID: DFETAP4 lsb: 0  msb: 3 INPUT
		NetFlow* DFETAP4_A1_B; // net ID: DFETAP4 lsb: 0  msb: 3 INPUT
		NetFlow* DFETAP4_A0_B; // net ID: DFETAP4 lsb: 0  msb: 3 INPUT
		NetFlow* DFETAPOVRD_A0_B; // net ID: DFETAPOVRD lsb: 0  msb: 0 INPUT
		NetFlow* DI_A15_B; // net ID: DI lsb: 0  msb: 15 INPUT
		NetFlow* DI_A14_B; // net ID: DI lsb: 0  msb: 15 INPUT
		NetFlow* DI_A13_B; // net ID: DI lsb: 0  msb: 15 INPUT
		NetFlow* DI_A12_B; // net ID: DI lsb: 0  msb: 15 INPUT
		NetFlow* DI_A11_B; // net ID: DI lsb: 0  msb: 15 INPUT
		NetFlow* DI_A10_B; // net ID: DI lsb: 0  msb: 15 INPUT
		NetFlow* DI_A9_B; // net ID: DI lsb: 0  msb: 15 INPUT
		NetFlow* DI_A8_B; // net ID: DI lsb: 0  msb: 15 INPUT
		NetFlow* DI_A7_B; // net ID: DI lsb: 0  msb: 15 INPUT
		NetFlow* DI_A6_B; // net ID: DI lsb: 0  msb: 15 INPUT
		NetFlow* DI_A5_B; // net ID: DI lsb: 0  msb: 15 INPUT
		NetFlow* DI_A4_B; // net ID: DI lsb: 0  msb: 15 INPUT
		NetFlow* DI_A3_B; // net ID: DI lsb: 0  msb: 15 INPUT
		NetFlow* DI_A2_B; // net ID: DI lsb: 0  msb: 15 INPUT
		NetFlow* DI_A1_B; // net ID: DI lsb: 0  msb: 15 INPUT
		NetFlow* DI_A0_B; // net ID: DI lsb: 0  msb: 15 INPUT
		NetFlow* DWE_A0_B; // net ID: DWE lsb: 0  msb: 0 INPUT
		NetFlow* GATERXELECIDLE_A0_B; // net ID: GATERXELECIDLE lsb: 0  msb: 0 INPUT
		NetFlow* GREFCLKRX_A0_B; // net ID: GREFCLKRX lsb: 0  msb: 0 INPUT
		NetFlow* GREFCLKTX_A0_B; // net ID: GREFCLKTX lsb: 0  msb: 0 INPUT
		NetFlow* GTXRXRESET_A0_B; // net ID: GTXRXRESET lsb: 0  msb: 0 INPUT
		NetFlow* GTXTEST_A12_B; // net ID: GTXTEST lsb: 0  msb: 12 INPUT
		NetFlow* GTXTEST_A11_B; // net ID: GTXTEST lsb: 0  msb: 12 INPUT
		NetFlow* GTXTEST_A10_B; // net ID: GTXTEST lsb: 0  msb: 12 INPUT
		NetFlow* GTXTEST_A9_B; // net ID: GTXTEST lsb: 0  msb: 12 INPUT
		NetFlow* GTXTEST_A8_B; // net ID: GTXTEST lsb: 0  msb: 12 INPUT
		NetFlow* GTXTEST_A7_B; // net ID: GTXTEST lsb: 0  msb: 12 INPUT
		NetFlow* GTXTEST_A6_B; // net ID: GTXTEST lsb: 0  msb: 12 INPUT
		NetFlow* GTXTEST_A5_B; // net ID: GTXTEST lsb: 0  msb: 12 INPUT
		NetFlow* GTXTEST_A4_B; // net ID: GTXTEST lsb: 0  msb: 12 INPUT
		NetFlow* GTXTEST_A3_B; // net ID: GTXTEST lsb: 0  msb: 12 INPUT
		NetFlow* GTXTEST_A2_B; // net ID: GTXTEST lsb: 0  msb: 12 INPUT
		NetFlow* GTXTEST_A1_B; // net ID: GTXTEST lsb: 0  msb: 12 INPUT
		NetFlow* GTXTEST_A0_B; // net ID: GTXTEST lsb: 0  msb: 12 INPUT
		NetFlow* GTXTXRESET_A0_B; // net ID: GTXTXRESET lsb: 0  msb: 0 INPUT
		NetFlow* IGNORESIGDET_A0_B; // net ID: IGNORESIGDET lsb: 0  msb: 0 INPUT
		NetFlow* LOOPBACK_A2_B; // net ID: LOOPBACK lsb: 0  msb: 2 INPUT
		NetFlow* LOOPBACK_A1_B; // net ID: LOOPBACK lsb: 0  msb: 2 INPUT
		NetFlow* LOOPBACK_A0_B; // net ID: LOOPBACK lsb: 0  msb: 2 INPUT
		NetFlow* MGTREFCLKRX_A1_B; // net ID: MGTREFCLKRX lsb: 0  msb: 1 INPUT
		NetFlow* MGTREFCLKRX_A0_B; // net ID: MGTREFCLKRX lsb: 0  msb: 1 INPUT
		NetFlow* MGTREFCLKTX_A1_B; // net ID: MGTREFCLKTX lsb: 0  msb: 1 INPUT
		NetFlow* MGTREFCLKTX_A0_B; // net ID: MGTREFCLKTX lsb: 0  msb: 1 INPUT
		NetFlow* NORTHREFCLKRX_A1_B; // net ID: NORTHREFCLKRX lsb: 0  msb: 1 INPUT
		NetFlow* NORTHREFCLKRX_A0_B; // net ID: NORTHREFCLKRX lsb: 0  msb: 1 INPUT
		NetFlow* NORTHREFCLKTX_A1_B; // net ID: NORTHREFCLKTX lsb: 0  msb: 1 INPUT
		NetFlow* NORTHREFCLKTX_A0_B; // net ID: NORTHREFCLKTX lsb: 0  msb: 1 INPUT
		NetFlow* PERFCLKRX_A0_B; // net ID: PERFCLKRX lsb: 0  msb: 0 INPUT
		NetFlow* PERFCLKTX_A0_B; // net ID: PERFCLKTX lsb: 0  msb: 0 INPUT
		NetFlow* PLLRXRESET_A0_B; // net ID: PLLRXRESET lsb: 0  msb: 0 INPUT
		NetFlow* PLLTXRESET_A0_B; // net ID: PLLTXRESET lsb: 0  msb: 0 INPUT
		NetFlow* PRBSCNTRESET_A0_B; // net ID: PRBSCNTRESET lsb: 0  msb: 0 INPUT
		NetFlow* RXBUFRESET_A0_B; // net ID: RXBUFRESET lsb: 0  msb: 0 INPUT
		NetFlow* RXCDRRESET_A0_B; // net ID: RXCDRRESET lsb: 0  msb: 0 INPUT
		NetFlow* RXCHBONDI_A3_B; // net ID: RXCHBONDI lsb: 0  msb: 3 INPUT
		NetFlow* RXCHBONDI_A2_B; // net ID: RXCHBONDI lsb: 0  msb: 3 INPUT
		NetFlow* RXCHBONDI_A1_B; // net ID: RXCHBONDI lsb: 0  msb: 3 INPUT
		NetFlow* RXCHBONDI_A0_B; // net ID: RXCHBONDI lsb: 0  msb: 3 INPUT
		NetFlow* RXCHBONDLEVEL_A2_B; // net ID: RXCHBONDLEVEL lsb: 0  msb: 2 INPUT
		NetFlow* RXCHBONDLEVEL_A1_B; // net ID: RXCHBONDLEVEL lsb: 0  msb: 2 INPUT
		NetFlow* RXCHBONDLEVEL_A0_B; // net ID: RXCHBONDLEVEL lsb: 0  msb: 2 INPUT
		NetFlow* RXCHBONDMASTER_A0_B; // net ID: RXCHBONDMASTER lsb: 0  msb: 0 INPUT
		NetFlow* RXCHBONDSLAVE_A0_B; // net ID: RXCHBONDSLAVE lsb: 0  msb: 0 INPUT
		NetFlow* RXCOMMADETUSE_A0_B; // net ID: RXCOMMADETUSE lsb: 0  msb: 0 INPUT
		NetFlow* RXDEC8B10BUSE_A0_B; // net ID: RXDEC8B10BUSE lsb: 0  msb: 0 INPUT
		NetFlow* RXDLYALIGNDISABLE_A0_B; // net ID: RXDLYALIGNDISABLE lsb: 0  msb: 0 INPUT
		NetFlow* RXDLYALIGNMONENB_A0_B; // net ID: RXDLYALIGNMONENB lsb: 0  msb: 0 INPUT
		NetFlow* RXDLYALIGNOVERRIDE_A0_B; // net ID: RXDLYALIGNOVERRIDE lsb: 0  msb: 0 INPUT
		NetFlow* RXDLYALIGNRESET_A0_B; // net ID: RXDLYALIGNRESET lsb: 0  msb: 0 INPUT
		NetFlow* RXDLYALIGNSWPPRECURB_A0_B; // net ID: RXDLYALIGNSWPPRECURB lsb: 0  msb: 0 INPUT
		NetFlow* RXDLYALIGNUPDSW_A0_B; // net ID: RXDLYALIGNUPDSW lsb: 0  msb: 0 INPUT
		NetFlow* RXENCHANSYNC_A0_B; // net ID: RXENCHANSYNC lsb: 0  msb: 0 INPUT
		NetFlow* RXENMCOMMAALIGN_A0_B; // net ID: RXENMCOMMAALIGN lsb: 0  msb: 0 INPUT
		NetFlow* RXENPCOMMAALIGN_A0_B; // net ID: RXENPCOMMAALIGN lsb: 0  msb: 0 INPUT
		NetFlow* RXENPMAPHASEALIGN_A0_B; // net ID: RXENPMAPHASEALIGN lsb: 0  msb: 0 INPUT
		NetFlow* RXENPRBSTST_A2_B; // net ID: RXENPRBSTST lsb: 0  msb: 2 INPUT
		NetFlow* RXENPRBSTST_A1_B; // net ID: RXENPRBSTST lsb: 0  msb: 2 INPUT
		NetFlow* RXENPRBSTST_A0_B; // net ID: RXENPRBSTST lsb: 0  msb: 2 INPUT
		NetFlow* RXENSAMPLEALIGN_A0_B; // net ID: RXENSAMPLEALIGN lsb: 0  msb: 0 INPUT
		NetFlow* RXEQMIX_A9_B; // net ID: RXEQMIX lsb: 0  msb: 9 INPUT
		NetFlow* RXEQMIX_A8_B; // net ID: RXEQMIX lsb: 0  msb: 9 INPUT
		NetFlow* RXEQMIX_A7_B; // net ID: RXEQMIX lsb: 0  msb: 9 INPUT
		NetFlow* RXEQMIX_A6_B; // net ID: RXEQMIX lsb: 0  msb: 9 INPUT
		NetFlow* RXEQMIX_A5_B; // net ID: RXEQMIX lsb: 0  msb: 9 INPUT
		NetFlow* RXEQMIX_A4_B; // net ID: RXEQMIX lsb: 0  msb: 9 INPUT
		NetFlow* RXEQMIX_A3_B; // net ID: RXEQMIX lsb: 0  msb: 9 INPUT
		NetFlow* RXEQMIX_A2_B; // net ID: RXEQMIX lsb: 0  msb: 9 INPUT
		NetFlow* RXEQMIX_A1_B; // net ID: RXEQMIX lsb: 0  msb: 9 INPUT
		NetFlow* RXEQMIX_A0_B; // net ID: RXEQMIX lsb: 0  msb: 9 INPUT
		NetFlow* RXGEARBOXSLIP_A0_B; // net ID: RXGEARBOXSLIP lsb: 0  msb: 0 INPUT
		NetFlow* RXN_A0_B; // net ID: RXN lsb: 0  msb: 0 INPUT
		NetFlow* RXP_A0_B; // net ID: RXP lsb: 0  msb: 0 INPUT
		NetFlow* RXPLLLKDETEN_A0_B; // net ID: RXPLLLKDETEN lsb: 0  msb: 0 INPUT
		NetFlow* RXPLLPOWERDOWN_A0_B; // net ID: RXPLLPOWERDOWN lsb: 0  msb: 0 INPUT
		NetFlow* RXPLLREFSELDY_A2_B; // net ID: RXPLLREFSELDY lsb: 0  msb: 2 INPUT
		NetFlow* RXPLLREFSELDY_A1_B; // net ID: RXPLLREFSELDY lsb: 0  msb: 2 INPUT
		NetFlow* RXPLLREFSELDY_A0_B; // net ID: RXPLLREFSELDY lsb: 0  msb: 2 INPUT
		NetFlow* RXPMASETPHASE_A0_B; // net ID: RXPMASETPHASE lsb: 0  msb: 0 INPUT
		NetFlow* RXPOLARITY_A0_B; // net ID: RXPOLARITY lsb: 0  msb: 0 INPUT
		NetFlow* RXPOWERDOWN_A1_B; // net ID: RXPOWERDOWN lsb: 0  msb: 1 INPUT
		NetFlow* RXPOWERDOWN_A0_B; // net ID: RXPOWERDOWN lsb: 0  msb: 1 INPUT
		NetFlow* RXRATE_A1_B; // net ID: RXRATE lsb: 0  msb: 1 INPUT
		NetFlow* RXRATE_A0_B; // net ID: RXRATE lsb: 0  msb: 1 INPUT
		NetFlow* RXRESET_A0_B; // net ID: RXRESET lsb: 0  msb: 0 INPUT
		NetFlow* RXSLIDE_A0_B; // net ID: RXSLIDE lsb: 0  msb: 0 INPUT
		NetFlow* RXUSRCLK_A0_B; // net ID: RXUSRCLK lsb: 0  msb: 0 INPUT
		NetFlow* RXUSRCLK2_A0_B; // net ID: RXUSRCLK2 lsb: 0  msb: 0 INPUT
		NetFlow* SOUTHREFCLKRX_A1_B; // net ID: SOUTHREFCLKRX lsb: 0  msb: 1 INPUT
		NetFlow* SOUTHREFCLKRX_A0_B; // net ID: SOUTHREFCLKRX lsb: 0  msb: 1 INPUT
		NetFlow* SOUTHREFCLKTX_A1_B; // net ID: SOUTHREFCLKTX lsb: 0  msb: 1 INPUT
		NetFlow* SOUTHREFCLKTX_A0_B; // net ID: SOUTHREFCLKTX lsb: 0  msb: 1 INPUT
		NetFlow* TSTCLK0_A0_B; // net ID: TSTCLK0 lsb: 0  msb: 0 INPUT
		NetFlow* TSTCLK1_A0_B; // net ID: TSTCLK1 lsb: 0  msb: 0 INPUT
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
		NetFlow* TXBUFDIFFCTRL_A2_B; // net ID: TXBUFDIFFCTRL lsb: 0  msb: 2 INPUT
		NetFlow* TXBUFDIFFCTRL_A1_B; // net ID: TXBUFDIFFCTRL lsb: 0  msb: 2 INPUT
		NetFlow* TXBUFDIFFCTRL_A0_B; // net ID: TXBUFDIFFCTRL lsb: 0  msb: 2 INPUT
		NetFlow* TXBYPASS8B10B_A3_B; // net ID: TXBYPASS8B10B lsb: 0  msb: 3 INPUT
		NetFlow* TXBYPASS8B10B_A2_B; // net ID: TXBYPASS8B10B lsb: 0  msb: 3 INPUT
		NetFlow* TXBYPASS8B10B_A1_B; // net ID: TXBYPASS8B10B lsb: 0  msb: 3 INPUT
		NetFlow* TXBYPASS8B10B_A0_B; // net ID: TXBYPASS8B10B lsb: 0  msb: 3 INPUT
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
		NetFlow* TXDLYALIGNDISABLE_A0_B; // net ID: TXDLYALIGNDISABLE lsb: 0  msb: 0 INPUT
		NetFlow* TXDLYALIGNMONENB_A0_B; // net ID: TXDLYALIGNMONENB lsb: 0  msb: 0 INPUT
		NetFlow* TXDLYALIGNOVERRIDE_A0_B; // net ID: TXDLYALIGNOVERRIDE lsb: 0  msb: 0 INPUT
		NetFlow* TXDLYALIGNRESET_A0_B; // net ID: TXDLYALIGNRESET lsb: 0  msb: 0 INPUT
		NetFlow* TXDLYALIGNUPDSW_A0_B; // net ID: TXDLYALIGNUPDSW lsb: 0  msb: 0 INPUT
		NetFlow* TXELECIDLE_A0_B; // net ID: TXELECIDLE lsb: 0  msb: 0 INPUT
		NetFlow* TXENC8B10BUSE_A0_B; // net ID: TXENC8B10BUSE lsb: 0  msb: 0 INPUT
		NetFlow* TXENPMAPHASEALIGN_A0_B; // net ID: TXENPMAPHASEALIGN lsb: 0  msb: 0 INPUT
		NetFlow* TXENPRBSTST_A2_B; // net ID: TXENPRBSTST lsb: 0  msb: 2 INPUT
		NetFlow* TXENPRBSTST_A1_B; // net ID: TXENPRBSTST lsb: 0  msb: 2 INPUT
		NetFlow* TXENPRBSTST_A0_B; // net ID: TXENPRBSTST lsb: 0  msb: 2 INPUT
		NetFlow* TXHEADER_A2_B; // net ID: TXHEADER lsb: 0  msb: 2 INPUT
		NetFlow* TXHEADER_A1_B; // net ID: TXHEADER lsb: 0  msb: 2 INPUT
		NetFlow* TXHEADER_A0_B; // net ID: TXHEADER lsb: 0  msb: 2 INPUT
		NetFlow* TXINHIBIT_A0_B; // net ID: TXINHIBIT lsb: 0  msb: 0 INPUT
		NetFlow* TXMARGIN_A2_B; // net ID: TXMARGIN lsb: 0  msb: 2 INPUT
		NetFlow* TXMARGIN_A1_B; // net ID: TXMARGIN lsb: 0  msb: 2 INPUT
		NetFlow* TXMARGIN_A0_B; // net ID: TXMARGIN lsb: 0  msb: 2 INPUT
		NetFlow* TXPDOWNASYNCH_A0_B; // net ID: TXPDOWNASYNCH lsb: 0  msb: 0 INPUT
		NetFlow* TXPLLLKDETEN_A0_B; // net ID: TXPLLLKDETEN lsb: 0  msb: 0 INPUT
		NetFlow* TXPLLPOWERDOWN_A0_B; // net ID: TXPLLPOWERDOWN lsb: 0  msb: 0 INPUT
		NetFlow* TXPLLREFSELDY_A2_B; // net ID: TXPLLREFSELDY lsb: 0  msb: 2 INPUT
		NetFlow* TXPLLREFSELDY_A1_B; // net ID: TXPLLREFSELDY lsb: 0  msb: 2 INPUT
		NetFlow* TXPLLREFSELDY_A0_B; // net ID: TXPLLREFSELDY lsb: 0  msb: 2 INPUT
		NetFlow* TXPMASETPHASE_A0_B; // net ID: TXPMASETPHASE lsb: 0  msb: 0 INPUT
		NetFlow* TXPOLARITY_A0_B; // net ID: TXPOLARITY lsb: 0  msb: 0 INPUT
		NetFlow* TXPOSTEMPHASIS_A4_B; // net ID: TXPOSTEMPHASIS lsb: 0  msb: 4 INPUT
		NetFlow* TXPOSTEMPHASIS_A3_B; // net ID: TXPOSTEMPHASIS lsb: 0  msb: 4 INPUT
		NetFlow* TXPOSTEMPHASIS_A2_B; // net ID: TXPOSTEMPHASIS lsb: 0  msb: 4 INPUT
		NetFlow* TXPOSTEMPHASIS_A1_B; // net ID: TXPOSTEMPHASIS lsb: 0  msb: 4 INPUT
		NetFlow* TXPOSTEMPHASIS_A0_B; // net ID: TXPOSTEMPHASIS lsb: 0  msb: 4 INPUT
		NetFlow* TXPOWERDOWN_A1_B; // net ID: TXPOWERDOWN lsb: 0  msb: 1 INPUT
		NetFlow* TXPOWERDOWN_A0_B; // net ID: TXPOWERDOWN lsb: 0  msb: 1 INPUT
		NetFlow* TXPRBSFORCEERR_A0_B; // net ID: TXPRBSFORCEERR lsb: 0  msb: 0 INPUT
		NetFlow* TXPREEMPHASIS_A3_B; // net ID: TXPREEMPHASIS lsb: 0  msb: 3 INPUT
		NetFlow* TXPREEMPHASIS_A2_B; // net ID: TXPREEMPHASIS lsb: 0  msb: 3 INPUT
		NetFlow* TXPREEMPHASIS_A1_B; // net ID: TXPREEMPHASIS lsb: 0  msb: 3 INPUT
		NetFlow* TXPREEMPHASIS_A0_B; // net ID: TXPREEMPHASIS lsb: 0  msb: 3 INPUT
		NetFlow* TXRATE_A1_B; // net ID: TXRATE lsb: 0  msb: 1 INPUT
		NetFlow* TXRATE_A0_B; // net ID: TXRATE lsb: 0  msb: 1 INPUT
		NetFlow* TXRESET_A0_B; // net ID: TXRESET lsb: 0  msb: 0 INPUT
		NetFlow* TXSEQUENCE_A6_B; // net ID: TXSEQUENCE lsb: 0  msb: 6 INPUT
		NetFlow* TXSEQUENCE_A5_B; // net ID: TXSEQUENCE lsb: 0  msb: 6 INPUT
		NetFlow* TXSEQUENCE_A4_B; // net ID: TXSEQUENCE lsb: 0  msb: 6 INPUT
		NetFlow* TXSEQUENCE_A3_B; // net ID: TXSEQUENCE lsb: 0  msb: 6 INPUT
		NetFlow* TXSEQUENCE_A2_B; // net ID: TXSEQUENCE lsb: 0  msb: 6 INPUT
		NetFlow* TXSEQUENCE_A1_B; // net ID: TXSEQUENCE lsb: 0  msb: 6 INPUT
		NetFlow* TXSEQUENCE_A0_B; // net ID: TXSEQUENCE lsb: 0  msb: 6 INPUT
		NetFlow* TXSTARTSEQ_A0_B; // net ID: TXSTARTSEQ lsb: 0  msb: 0 INPUT
		NetFlow* TXSWING_A0_B; // net ID: TXSWING lsb: 0  msb: 0 INPUT
		NetFlow* TXUSRCLK_A0_B; // net ID: TXUSRCLK lsb: 0  msb: 0 INPUT
		NetFlow* TXUSRCLK2_A0_B; // net ID: TXUSRCLK2 lsb: 0  msb: 0 INPUT
		NetFlow* USRCODEERR_A0_B; // net ID: USRCODEERR lsb: 0  msb: 0 INPUT
		
		public: X_GTXE1(
			const char * name,
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
			NetFlow* COMFINISH_A0_B, // net ID: COMFINISH lsb: 0  msb: 0 OUTPUT
			NetFlow* COMINITDET_A0_B, // net ID: COMINITDET lsb: 0  msb: 0 OUTPUT
			NetFlow* COMSASDET_A0_B, // net ID: COMSASDET lsb: 0  msb: 0 OUTPUT
			NetFlow* COMWAKEDET_A0_B, // net ID: COMWAKEDET lsb: 0  msb: 0 OUTPUT
			NetFlow* DFECLKDLYADJMON_A5_B, // net ID: DFECLKDLYADJMON lsb: 0  msb: 5 OUTPUT
			NetFlow* DFECLKDLYADJMON_A4_B, // net ID: DFECLKDLYADJMON lsb: 0  msb: 5 OUTPUT
			NetFlow* DFECLKDLYADJMON_A3_B, // net ID: DFECLKDLYADJMON lsb: 0  msb: 5 OUTPUT
			NetFlow* DFECLKDLYADJMON_A2_B, // net ID: DFECLKDLYADJMON lsb: 0  msb: 5 OUTPUT
			NetFlow* DFECLKDLYADJMON_A1_B, // net ID: DFECLKDLYADJMON lsb: 0  msb: 5 OUTPUT
			NetFlow* DFECLKDLYADJMON_A0_B, // net ID: DFECLKDLYADJMON lsb: 0  msb: 5 OUTPUT
			NetFlow* DFEEYEDACMON_A4_B, // net ID: DFEEYEDACMON lsb: 0  msb: 4 OUTPUT
			NetFlow* DFEEYEDACMON_A3_B, // net ID: DFEEYEDACMON lsb: 0  msb: 4 OUTPUT
			NetFlow* DFEEYEDACMON_A2_B, // net ID: DFEEYEDACMON lsb: 0  msb: 4 OUTPUT
			NetFlow* DFEEYEDACMON_A1_B, // net ID: DFEEYEDACMON lsb: 0  msb: 4 OUTPUT
			NetFlow* DFEEYEDACMON_A0_B, // net ID: DFEEYEDACMON lsb: 0  msb: 4 OUTPUT
			NetFlow* DFESENSCAL_A2_B, // net ID: DFESENSCAL lsb: 0  msb: 2 OUTPUT
			NetFlow* DFESENSCAL_A1_B, // net ID: DFESENSCAL lsb: 0  msb: 2 OUTPUT
			NetFlow* DFESENSCAL_A0_B, // net ID: DFESENSCAL lsb: 0  msb: 2 OUTPUT
			NetFlow* DFETAP1MONITOR_A4_B, // net ID: DFETAP1MONITOR lsb: 0  msb: 4 OUTPUT
			NetFlow* DFETAP1MONITOR_A3_B, // net ID: DFETAP1MONITOR lsb: 0  msb: 4 OUTPUT
			NetFlow* DFETAP1MONITOR_A2_B, // net ID: DFETAP1MONITOR lsb: 0  msb: 4 OUTPUT
			NetFlow* DFETAP1MONITOR_A1_B, // net ID: DFETAP1MONITOR lsb: 0  msb: 4 OUTPUT
			NetFlow* DFETAP1MONITOR_A0_B, // net ID: DFETAP1MONITOR lsb: 0  msb: 4 OUTPUT
			NetFlow* DFETAP2MONITOR_A4_B, // net ID: DFETAP2MONITOR lsb: 0  msb: 4 OUTPUT
			NetFlow* DFETAP2MONITOR_A3_B, // net ID: DFETAP2MONITOR lsb: 0  msb: 4 OUTPUT
			NetFlow* DFETAP2MONITOR_A2_B, // net ID: DFETAP2MONITOR lsb: 0  msb: 4 OUTPUT
			NetFlow* DFETAP2MONITOR_A1_B, // net ID: DFETAP2MONITOR lsb: 0  msb: 4 OUTPUT
			NetFlow* DFETAP2MONITOR_A0_B, // net ID: DFETAP2MONITOR lsb: 0  msb: 4 OUTPUT
			NetFlow* DFETAP3MONITOR_A3_B, // net ID: DFETAP3MONITOR lsb: 0  msb: 3 OUTPUT
			NetFlow* DFETAP3MONITOR_A2_B, // net ID: DFETAP3MONITOR lsb: 0  msb: 3 OUTPUT
			NetFlow* DFETAP3MONITOR_A1_B, // net ID: DFETAP3MONITOR lsb: 0  msb: 3 OUTPUT
			NetFlow* DFETAP3MONITOR_A0_B, // net ID: DFETAP3MONITOR lsb: 0  msb: 3 OUTPUT
			NetFlow* DFETAP4MONITOR_A3_B, // net ID: DFETAP4MONITOR lsb: 0  msb: 3 OUTPUT
			NetFlow* DFETAP4MONITOR_A2_B, // net ID: DFETAP4MONITOR lsb: 0  msb: 3 OUTPUT
			NetFlow* DFETAP4MONITOR_A1_B, // net ID: DFETAP4MONITOR lsb: 0  msb: 3 OUTPUT
			NetFlow* DFETAP4MONITOR_A0_B, // net ID: DFETAP4MONITOR lsb: 0  msb: 3 OUTPUT
			NetFlow* DRDY_A0_B, // net ID: DRDY lsb: 0  msb: 0 OUTPUT
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
			NetFlow* MGTREFCLKFAB_A1_B, // net ID: MGTREFCLKFAB lsb: 0  msb: 1 OUTPUT
			NetFlow* MGTREFCLKFAB_A0_B, // net ID: MGTREFCLKFAB lsb: 0  msb: 1 OUTPUT
			NetFlow* PHYSTATUS_A0_B, // net ID: PHYSTATUS lsb: 0  msb: 0 OUTPUT
			NetFlow* RXBUFSTATUS_A2_B, // net ID: RXBUFSTATUS lsb: 0  msb: 2 OUTPUT
			NetFlow* RXBUFSTATUS_A1_B, // net ID: RXBUFSTATUS lsb: 0  msb: 2 OUTPUT
			NetFlow* RXBUFSTATUS_A0_B, // net ID: RXBUFSTATUS lsb: 0  msb: 2 OUTPUT
			NetFlow* RXBYTEISALIGNED_A0_B, // net ID: RXBYTEISALIGNED lsb: 0  msb: 0 OUTPUT
			NetFlow* RXBYTEREALIGN_A0_B, // net ID: RXBYTEREALIGN lsb: 0  msb: 0 OUTPUT
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
			NetFlow* RXCLKCORCNT_A2_B, // net ID: RXCLKCORCNT lsb: 0  msb: 2 OUTPUT
			NetFlow* RXCLKCORCNT_A1_B, // net ID: RXCLKCORCNT lsb: 0  msb: 2 OUTPUT
			NetFlow* RXCLKCORCNT_A0_B, // net ID: RXCLKCORCNT lsb: 0  msb: 2 OUTPUT
			NetFlow* RXCOMMADET_A0_B, // net ID: RXCOMMADET lsb: 0  msb: 0 OUTPUT
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
			NetFlow* RXDATAVALID_A0_B, // net ID: RXDATAVALID lsb: 0  msb: 0 OUTPUT
			NetFlow* RXDISPERR_A3_B, // net ID: RXDISPERR lsb: 0  msb: 3 OUTPUT
			NetFlow* RXDISPERR_A2_B, // net ID: RXDISPERR lsb: 0  msb: 3 OUTPUT
			NetFlow* RXDISPERR_A1_B, // net ID: RXDISPERR lsb: 0  msb: 3 OUTPUT
			NetFlow* RXDISPERR_A0_B, // net ID: RXDISPERR lsb: 0  msb: 3 OUTPUT
			NetFlow* RXDLYALIGNMONITOR_A7_B, // net ID: RXDLYALIGNMONITOR lsb: 0  msb: 7 OUTPUT
			NetFlow* RXDLYALIGNMONITOR_A6_B, // net ID: RXDLYALIGNMONITOR lsb: 0  msb: 7 OUTPUT
			NetFlow* RXDLYALIGNMONITOR_A5_B, // net ID: RXDLYALIGNMONITOR lsb: 0  msb: 7 OUTPUT
			NetFlow* RXDLYALIGNMONITOR_A4_B, // net ID: RXDLYALIGNMONITOR lsb: 0  msb: 7 OUTPUT
			NetFlow* RXDLYALIGNMONITOR_A3_B, // net ID: RXDLYALIGNMONITOR lsb: 0  msb: 7 OUTPUT
			NetFlow* RXDLYALIGNMONITOR_A2_B, // net ID: RXDLYALIGNMONITOR lsb: 0  msb: 7 OUTPUT
			NetFlow* RXDLYALIGNMONITOR_A1_B, // net ID: RXDLYALIGNMONITOR lsb: 0  msb: 7 OUTPUT
			NetFlow* RXDLYALIGNMONITOR_A0_B, // net ID: RXDLYALIGNMONITOR lsb: 0  msb: 7 OUTPUT
			NetFlow* RXELECIDLE_A0_B, // net ID: RXELECIDLE lsb: 0  msb: 0 OUTPUT
			NetFlow* RXHEADER_A2_B, // net ID: RXHEADER lsb: 0  msb: 2 OUTPUT
			NetFlow* RXHEADER_A1_B, // net ID: RXHEADER lsb: 0  msb: 2 OUTPUT
			NetFlow* RXHEADER_A0_B, // net ID: RXHEADER lsb: 0  msb: 2 OUTPUT
			NetFlow* RXHEADERVALID_A0_B, // net ID: RXHEADERVALID lsb: 0  msb: 0 OUTPUT
			NetFlow* RXLOSSOFSYNC_A1_B, // net ID: RXLOSSOFSYNC lsb: 0  msb: 1 OUTPUT
			NetFlow* RXLOSSOFSYNC_A0_B, // net ID: RXLOSSOFSYNC lsb: 0  msb: 1 OUTPUT
			NetFlow* RXNOTINTABLE_A3_B, // net ID: RXNOTINTABLE lsb: 0  msb: 3 OUTPUT
			NetFlow* RXNOTINTABLE_A2_B, // net ID: RXNOTINTABLE lsb: 0  msb: 3 OUTPUT
			NetFlow* RXNOTINTABLE_A1_B, // net ID: RXNOTINTABLE lsb: 0  msb: 3 OUTPUT
			NetFlow* RXNOTINTABLE_A0_B, // net ID: RXNOTINTABLE lsb: 0  msb: 3 OUTPUT
			NetFlow* RXOVERSAMPLEERR_A0_B, // net ID: RXOVERSAMPLEERR lsb: 0  msb: 0 OUTPUT
			NetFlow* RXPLLLKDET_A0_B, // net ID: RXPLLLKDET lsb: 0  msb: 0 OUTPUT
			NetFlow* RXPRBSERR_A0_B, // net ID: RXPRBSERR lsb: 0  msb: 0 OUTPUT
			NetFlow* RXRATEDONE_A0_B, // net ID: RXRATEDONE lsb: 0  msb: 0 OUTPUT
			NetFlow* RXRECCLK_A0_B, // net ID: RXRECCLK lsb: 0  msb: 0 OUTPUT
			NetFlow* RXRECCLKPCS_A0_B, // net ID: RXRECCLKPCS lsb: 0  msb: 0 OUTPUT
			NetFlow* RXRESETDONE_A0_B, // net ID: RXRESETDONE lsb: 0  msb: 0 OUTPUT
			NetFlow* RXRUNDISP_A3_B, // net ID: RXRUNDISP lsb: 0  msb: 3 OUTPUT
			NetFlow* RXRUNDISP_A2_B, // net ID: RXRUNDISP lsb: 0  msb: 3 OUTPUT
			NetFlow* RXRUNDISP_A1_B, // net ID: RXRUNDISP lsb: 0  msb: 3 OUTPUT
			NetFlow* RXRUNDISP_A0_B, // net ID: RXRUNDISP lsb: 0  msb: 3 OUTPUT
			NetFlow* RXSTARTOFSEQ_A0_B, // net ID: RXSTARTOFSEQ lsb: 0  msb: 0 OUTPUT
			NetFlow* RXSTATUS_A2_B, // net ID: RXSTATUS lsb: 0  msb: 2 OUTPUT
			NetFlow* RXSTATUS_A1_B, // net ID: RXSTATUS lsb: 0  msb: 2 OUTPUT
			NetFlow* RXSTATUS_A0_B, // net ID: RXSTATUS lsb: 0  msb: 2 OUTPUT
			NetFlow* RXVALID_A0_B, // net ID: RXVALID lsb: 0  msb: 0 OUTPUT
			NetFlow* TSTOUT_A9_B, // net ID: TSTOUT lsb: 0  msb: 9 OUTPUT
			NetFlow* TSTOUT_A8_B, // net ID: TSTOUT lsb: 0  msb: 9 OUTPUT
			NetFlow* TSTOUT_A7_B, // net ID: TSTOUT lsb: 0  msb: 9 OUTPUT
			NetFlow* TSTOUT_A6_B, // net ID: TSTOUT lsb: 0  msb: 9 OUTPUT
			NetFlow* TSTOUT_A5_B, // net ID: TSTOUT lsb: 0  msb: 9 OUTPUT
			NetFlow* TSTOUT_A4_B, // net ID: TSTOUT lsb: 0  msb: 9 OUTPUT
			NetFlow* TSTOUT_A3_B, // net ID: TSTOUT lsb: 0  msb: 9 OUTPUT
			NetFlow* TSTOUT_A2_B, // net ID: TSTOUT lsb: 0  msb: 9 OUTPUT
			NetFlow* TSTOUT_A1_B, // net ID: TSTOUT lsb: 0  msb: 9 OUTPUT
			NetFlow* TSTOUT_A0_B, // net ID: TSTOUT lsb: 0  msb: 9 OUTPUT
			NetFlow* TXBUFSTATUS_A1_B, // net ID: TXBUFSTATUS lsb: 0  msb: 1 OUTPUT
			NetFlow* TXBUFSTATUS_A0_B, // net ID: TXBUFSTATUS lsb: 0  msb: 1 OUTPUT
			NetFlow* TXDLYALIGNMONITOR_A7_B, // net ID: TXDLYALIGNMONITOR lsb: 0  msb: 7 OUTPUT
			NetFlow* TXDLYALIGNMONITOR_A6_B, // net ID: TXDLYALIGNMONITOR lsb: 0  msb: 7 OUTPUT
			NetFlow* TXDLYALIGNMONITOR_A5_B, // net ID: TXDLYALIGNMONITOR lsb: 0  msb: 7 OUTPUT
			NetFlow* TXDLYALIGNMONITOR_A4_B, // net ID: TXDLYALIGNMONITOR lsb: 0  msb: 7 OUTPUT
			NetFlow* TXDLYALIGNMONITOR_A3_B, // net ID: TXDLYALIGNMONITOR lsb: 0  msb: 7 OUTPUT
			NetFlow* TXDLYALIGNMONITOR_A2_B, // net ID: TXDLYALIGNMONITOR lsb: 0  msb: 7 OUTPUT
			NetFlow* TXDLYALIGNMONITOR_A1_B, // net ID: TXDLYALIGNMONITOR lsb: 0  msb: 7 OUTPUT
			NetFlow* TXDLYALIGNMONITOR_A0_B, // net ID: TXDLYALIGNMONITOR lsb: 0  msb: 7 OUTPUT
			NetFlow* TXGEARBOXREADY_A0_B, // net ID: TXGEARBOXREADY lsb: 0  msb: 0 OUTPUT
			NetFlow* TXKERR_A3_B, // net ID: TXKERR lsb: 0  msb: 3 OUTPUT
			NetFlow* TXKERR_A2_B, // net ID: TXKERR lsb: 0  msb: 3 OUTPUT
			NetFlow* TXKERR_A1_B, // net ID: TXKERR lsb: 0  msb: 3 OUTPUT
			NetFlow* TXKERR_A0_B, // net ID: TXKERR lsb: 0  msb: 3 OUTPUT
			NetFlow* TXN_A0_B, // net ID: TXN lsb: 0  msb: 0 OUTPUT
			NetFlow* TXOUTCLK_A0_B, // net ID: TXOUTCLK lsb: 0  msb: 0 OUTPUT
			NetFlow* TXOUTCLKPCS_A0_B, // net ID: TXOUTCLKPCS lsb: 0  msb: 0 OUTPUT
			NetFlow* TXP_A0_B, // net ID: TXP lsb: 0  msb: 0 OUTPUT
			NetFlow* TXPLLLKDET_A0_B, // net ID: TXPLLLKDET lsb: 0  msb: 0 OUTPUT
			NetFlow* TXRATEDONE_A0_B, // net ID: TXRATEDONE lsb: 0  msb: 0 OUTPUT
			NetFlow* TXRESETDONE_A0_B, // net ID: TXRESETDONE lsb: 0  msb: 0 OUTPUT
			NetFlow* TXRUNDISP_A3_B, // net ID: TXRUNDISP lsb: 0  msb: 3 OUTPUT
			NetFlow* TXRUNDISP_A2_B, // net ID: TXRUNDISP lsb: 0  msb: 3 OUTPUT
			NetFlow* TXRUNDISP_A1_B, // net ID: TXRUNDISP lsb: 0  msb: 3 OUTPUT
			NetFlow* TXRUNDISP_A0_B, // net ID: TXRUNDISP lsb: 0  msb: 3 OUTPUT
			NetFlow* DADDR_A7_B, // net ID: DADDR lsb: 0  msb: 7 INPUT
			NetFlow* DADDR_A6_B, // net ID: DADDR lsb: 0  msb: 7 INPUT
			NetFlow* DADDR_A5_B, // net ID: DADDR lsb: 0  msb: 7 INPUT
			NetFlow* DADDR_A4_B, // net ID: DADDR lsb: 0  msb: 7 INPUT
			NetFlow* DADDR_A3_B, // net ID: DADDR lsb: 0  msb: 7 INPUT
			NetFlow* DADDR_A2_B, // net ID: DADDR lsb: 0  msb: 7 INPUT
			NetFlow* DADDR_A1_B, // net ID: DADDR lsb: 0  msb: 7 INPUT
			NetFlow* DADDR_A0_B, // net ID: DADDR lsb: 0  msb: 7 INPUT
			NetFlow* DCLK_A0_B, // net ID: DCLK lsb: 0  msb: 0 INPUT
			NetFlow* DEN_A0_B, // net ID: DEN lsb: 0  msb: 0 INPUT
			NetFlow* DFECLKDLYADJ_A5_B, // net ID: DFECLKDLYADJ lsb: 0  msb: 5 INPUT
			NetFlow* DFECLKDLYADJ_A4_B, // net ID: DFECLKDLYADJ lsb: 0  msb: 5 INPUT
			NetFlow* DFECLKDLYADJ_A3_B, // net ID: DFECLKDLYADJ lsb: 0  msb: 5 INPUT
			NetFlow* DFECLKDLYADJ_A2_B, // net ID: DFECLKDLYADJ lsb: 0  msb: 5 INPUT
			NetFlow* DFECLKDLYADJ_A1_B, // net ID: DFECLKDLYADJ lsb: 0  msb: 5 INPUT
			NetFlow* DFECLKDLYADJ_A0_B, // net ID: DFECLKDLYADJ lsb: 0  msb: 5 INPUT
			NetFlow* DFEDLYOVRD_A0_B, // net ID: DFEDLYOVRD lsb: 0  msb: 0 INPUT
			NetFlow* DFETAP1_A4_B, // net ID: DFETAP1 lsb: 0  msb: 4 INPUT
			NetFlow* DFETAP1_A3_B, // net ID: DFETAP1 lsb: 0  msb: 4 INPUT
			NetFlow* DFETAP1_A2_B, // net ID: DFETAP1 lsb: 0  msb: 4 INPUT
			NetFlow* DFETAP1_A1_B, // net ID: DFETAP1 lsb: 0  msb: 4 INPUT
			NetFlow* DFETAP1_A0_B, // net ID: DFETAP1 lsb: 0  msb: 4 INPUT
			NetFlow* DFETAP2_A4_B, // net ID: DFETAP2 lsb: 0  msb: 4 INPUT
			NetFlow* DFETAP2_A3_B, // net ID: DFETAP2 lsb: 0  msb: 4 INPUT
			NetFlow* DFETAP2_A2_B, // net ID: DFETAP2 lsb: 0  msb: 4 INPUT
			NetFlow* DFETAP2_A1_B, // net ID: DFETAP2 lsb: 0  msb: 4 INPUT
			NetFlow* DFETAP2_A0_B, // net ID: DFETAP2 lsb: 0  msb: 4 INPUT
			NetFlow* DFETAP3_A3_B, // net ID: DFETAP3 lsb: 0  msb: 3 INPUT
			NetFlow* DFETAP3_A2_B, // net ID: DFETAP3 lsb: 0  msb: 3 INPUT
			NetFlow* DFETAP3_A1_B, // net ID: DFETAP3 lsb: 0  msb: 3 INPUT
			NetFlow* DFETAP3_A0_B, // net ID: DFETAP3 lsb: 0  msb: 3 INPUT
			NetFlow* DFETAP4_A3_B, // net ID: DFETAP4 lsb: 0  msb: 3 INPUT
			NetFlow* DFETAP4_A2_B, // net ID: DFETAP4 lsb: 0  msb: 3 INPUT
			NetFlow* DFETAP4_A1_B, // net ID: DFETAP4 lsb: 0  msb: 3 INPUT
			NetFlow* DFETAP4_A0_B, // net ID: DFETAP4 lsb: 0  msb: 3 INPUT
			NetFlow* DFETAPOVRD_A0_B, // net ID: DFETAPOVRD lsb: 0  msb: 0 INPUT
			NetFlow* DI_A15_B, // net ID: DI lsb: 0  msb: 15 INPUT
			NetFlow* DI_A14_B, // net ID: DI lsb: 0  msb: 15 INPUT
			NetFlow* DI_A13_B, // net ID: DI lsb: 0  msb: 15 INPUT
			NetFlow* DI_A12_B, // net ID: DI lsb: 0  msb: 15 INPUT
			NetFlow* DI_A11_B, // net ID: DI lsb: 0  msb: 15 INPUT
			NetFlow* DI_A10_B, // net ID: DI lsb: 0  msb: 15 INPUT
			NetFlow* DI_A9_B, // net ID: DI lsb: 0  msb: 15 INPUT
			NetFlow* DI_A8_B, // net ID: DI lsb: 0  msb: 15 INPUT
			NetFlow* DI_A7_B, // net ID: DI lsb: 0  msb: 15 INPUT
			NetFlow* DI_A6_B, // net ID: DI lsb: 0  msb: 15 INPUT
			NetFlow* DI_A5_B, // net ID: DI lsb: 0  msb: 15 INPUT
			NetFlow* DI_A4_B, // net ID: DI lsb: 0  msb: 15 INPUT
			NetFlow* DI_A3_B, // net ID: DI lsb: 0  msb: 15 INPUT
			NetFlow* DI_A2_B, // net ID: DI lsb: 0  msb: 15 INPUT
			NetFlow* DI_A1_B, // net ID: DI lsb: 0  msb: 15 INPUT
			NetFlow* DI_A0_B, // net ID: DI lsb: 0  msb: 15 INPUT
			NetFlow* DWE_A0_B, // net ID: DWE lsb: 0  msb: 0 INPUT
			NetFlow* GATERXELECIDLE_A0_B, // net ID: GATERXELECIDLE lsb: 0  msb: 0 INPUT
			NetFlow* GREFCLKRX_A0_B, // net ID: GREFCLKRX lsb: 0  msb: 0 INPUT
			NetFlow* GREFCLKTX_A0_B, // net ID: GREFCLKTX lsb: 0  msb: 0 INPUT
			NetFlow* GTXRXRESET_A0_B, // net ID: GTXRXRESET lsb: 0  msb: 0 INPUT
			NetFlow* GTXTEST_A12_B, // net ID: GTXTEST lsb: 0  msb: 12 INPUT
			NetFlow* GTXTEST_A11_B, // net ID: GTXTEST lsb: 0  msb: 12 INPUT
			NetFlow* GTXTEST_A10_B, // net ID: GTXTEST lsb: 0  msb: 12 INPUT
			NetFlow* GTXTEST_A9_B, // net ID: GTXTEST lsb: 0  msb: 12 INPUT
			NetFlow* GTXTEST_A8_B, // net ID: GTXTEST lsb: 0  msb: 12 INPUT
			NetFlow* GTXTEST_A7_B, // net ID: GTXTEST lsb: 0  msb: 12 INPUT
			NetFlow* GTXTEST_A6_B, // net ID: GTXTEST lsb: 0  msb: 12 INPUT
			NetFlow* GTXTEST_A5_B, // net ID: GTXTEST lsb: 0  msb: 12 INPUT
			NetFlow* GTXTEST_A4_B, // net ID: GTXTEST lsb: 0  msb: 12 INPUT
			NetFlow* GTXTEST_A3_B, // net ID: GTXTEST lsb: 0  msb: 12 INPUT
			NetFlow* GTXTEST_A2_B, // net ID: GTXTEST lsb: 0  msb: 12 INPUT
			NetFlow* GTXTEST_A1_B, // net ID: GTXTEST lsb: 0  msb: 12 INPUT
			NetFlow* GTXTEST_A0_B, // net ID: GTXTEST lsb: 0  msb: 12 INPUT
			NetFlow* GTXTXRESET_A0_B, // net ID: GTXTXRESET lsb: 0  msb: 0 INPUT
			NetFlow* IGNORESIGDET_A0_B, // net ID: IGNORESIGDET lsb: 0  msb: 0 INPUT
			NetFlow* LOOPBACK_A2_B, // net ID: LOOPBACK lsb: 0  msb: 2 INPUT
			NetFlow* LOOPBACK_A1_B, // net ID: LOOPBACK lsb: 0  msb: 2 INPUT
			NetFlow* LOOPBACK_A0_B, // net ID: LOOPBACK lsb: 0  msb: 2 INPUT
			NetFlow* MGTREFCLKRX_A1_B, // net ID: MGTREFCLKRX lsb: 0  msb: 1 INPUT
			NetFlow* MGTREFCLKRX_A0_B, // net ID: MGTREFCLKRX lsb: 0  msb: 1 INPUT
			NetFlow* MGTREFCLKTX_A1_B, // net ID: MGTREFCLKTX lsb: 0  msb: 1 INPUT
			NetFlow* MGTREFCLKTX_A0_B, // net ID: MGTREFCLKTX lsb: 0  msb: 1 INPUT
			NetFlow* NORTHREFCLKRX_A1_B, // net ID: NORTHREFCLKRX lsb: 0  msb: 1 INPUT
			NetFlow* NORTHREFCLKRX_A0_B, // net ID: NORTHREFCLKRX lsb: 0  msb: 1 INPUT
			NetFlow* NORTHREFCLKTX_A1_B, // net ID: NORTHREFCLKTX lsb: 0  msb: 1 INPUT
			NetFlow* NORTHREFCLKTX_A0_B, // net ID: NORTHREFCLKTX lsb: 0  msb: 1 INPUT
			NetFlow* PERFCLKRX_A0_B, // net ID: PERFCLKRX lsb: 0  msb: 0 INPUT
			NetFlow* PERFCLKTX_A0_B, // net ID: PERFCLKTX lsb: 0  msb: 0 INPUT
			NetFlow* PLLRXRESET_A0_B, // net ID: PLLRXRESET lsb: 0  msb: 0 INPUT
			NetFlow* PLLTXRESET_A0_B, // net ID: PLLTXRESET lsb: 0  msb: 0 INPUT
			NetFlow* PRBSCNTRESET_A0_B, // net ID: PRBSCNTRESET lsb: 0  msb: 0 INPUT
			NetFlow* RXBUFRESET_A0_B, // net ID: RXBUFRESET lsb: 0  msb: 0 INPUT
			NetFlow* RXCDRRESET_A0_B, // net ID: RXCDRRESET lsb: 0  msb: 0 INPUT
			NetFlow* RXCHBONDI_A3_B, // net ID: RXCHBONDI lsb: 0  msb: 3 INPUT
			NetFlow* RXCHBONDI_A2_B, // net ID: RXCHBONDI lsb: 0  msb: 3 INPUT
			NetFlow* RXCHBONDI_A1_B, // net ID: RXCHBONDI lsb: 0  msb: 3 INPUT
			NetFlow* RXCHBONDI_A0_B, // net ID: RXCHBONDI lsb: 0  msb: 3 INPUT
			NetFlow* RXCHBONDLEVEL_A2_B, // net ID: RXCHBONDLEVEL lsb: 0  msb: 2 INPUT
			NetFlow* RXCHBONDLEVEL_A1_B, // net ID: RXCHBONDLEVEL lsb: 0  msb: 2 INPUT
			NetFlow* RXCHBONDLEVEL_A0_B, // net ID: RXCHBONDLEVEL lsb: 0  msb: 2 INPUT
			NetFlow* RXCHBONDMASTER_A0_B, // net ID: RXCHBONDMASTER lsb: 0  msb: 0 INPUT
			NetFlow* RXCHBONDSLAVE_A0_B, // net ID: RXCHBONDSLAVE lsb: 0  msb: 0 INPUT
			NetFlow* RXCOMMADETUSE_A0_B, // net ID: RXCOMMADETUSE lsb: 0  msb: 0 INPUT
			NetFlow* RXDEC8B10BUSE_A0_B, // net ID: RXDEC8B10BUSE lsb: 0  msb: 0 INPUT
			NetFlow* RXDLYALIGNDISABLE_A0_B, // net ID: RXDLYALIGNDISABLE lsb: 0  msb: 0 INPUT
			NetFlow* RXDLYALIGNMONENB_A0_B, // net ID: RXDLYALIGNMONENB lsb: 0  msb: 0 INPUT
			NetFlow* RXDLYALIGNOVERRIDE_A0_B, // net ID: RXDLYALIGNOVERRIDE lsb: 0  msb: 0 INPUT
			NetFlow* RXDLYALIGNRESET_A0_B, // net ID: RXDLYALIGNRESET lsb: 0  msb: 0 INPUT
			NetFlow* RXDLYALIGNSWPPRECURB_A0_B, // net ID: RXDLYALIGNSWPPRECURB lsb: 0  msb: 0 INPUT
			NetFlow* RXDLYALIGNUPDSW_A0_B, // net ID: RXDLYALIGNUPDSW lsb: 0  msb: 0 INPUT
			NetFlow* RXENCHANSYNC_A0_B, // net ID: RXENCHANSYNC lsb: 0  msb: 0 INPUT
			NetFlow* RXENMCOMMAALIGN_A0_B, // net ID: RXENMCOMMAALIGN lsb: 0  msb: 0 INPUT
			NetFlow* RXENPCOMMAALIGN_A0_B, // net ID: RXENPCOMMAALIGN lsb: 0  msb: 0 INPUT
			NetFlow* RXENPMAPHASEALIGN_A0_B, // net ID: RXENPMAPHASEALIGN lsb: 0  msb: 0 INPUT
			NetFlow* RXENPRBSTST_A2_B, // net ID: RXENPRBSTST lsb: 0  msb: 2 INPUT
			NetFlow* RXENPRBSTST_A1_B, // net ID: RXENPRBSTST lsb: 0  msb: 2 INPUT
			NetFlow* RXENPRBSTST_A0_B, // net ID: RXENPRBSTST lsb: 0  msb: 2 INPUT
			NetFlow* RXENSAMPLEALIGN_A0_B, // net ID: RXENSAMPLEALIGN lsb: 0  msb: 0 INPUT
			NetFlow* RXEQMIX_A9_B, // net ID: RXEQMIX lsb: 0  msb: 9 INPUT
			NetFlow* RXEQMIX_A8_B, // net ID: RXEQMIX lsb: 0  msb: 9 INPUT
			NetFlow* RXEQMIX_A7_B, // net ID: RXEQMIX lsb: 0  msb: 9 INPUT
			NetFlow* RXEQMIX_A6_B, // net ID: RXEQMIX lsb: 0  msb: 9 INPUT
			NetFlow* RXEQMIX_A5_B, // net ID: RXEQMIX lsb: 0  msb: 9 INPUT
			NetFlow* RXEQMIX_A4_B, // net ID: RXEQMIX lsb: 0  msb: 9 INPUT
			NetFlow* RXEQMIX_A3_B, // net ID: RXEQMIX lsb: 0  msb: 9 INPUT
			NetFlow* RXEQMIX_A2_B, // net ID: RXEQMIX lsb: 0  msb: 9 INPUT
			NetFlow* RXEQMIX_A1_B, // net ID: RXEQMIX lsb: 0  msb: 9 INPUT
			NetFlow* RXEQMIX_A0_B, // net ID: RXEQMIX lsb: 0  msb: 9 INPUT
			NetFlow* RXGEARBOXSLIP_A0_B, // net ID: RXGEARBOXSLIP lsb: 0  msb: 0 INPUT
			NetFlow* RXN_A0_B, // net ID: RXN lsb: 0  msb: 0 INPUT
			NetFlow* RXP_A0_B, // net ID: RXP lsb: 0  msb: 0 INPUT
			NetFlow* RXPLLLKDETEN_A0_B, // net ID: RXPLLLKDETEN lsb: 0  msb: 0 INPUT
			NetFlow* RXPLLPOWERDOWN_A0_B, // net ID: RXPLLPOWERDOWN lsb: 0  msb: 0 INPUT
			NetFlow* RXPLLREFSELDY_A2_B, // net ID: RXPLLREFSELDY lsb: 0  msb: 2 INPUT
			NetFlow* RXPLLREFSELDY_A1_B, // net ID: RXPLLREFSELDY lsb: 0  msb: 2 INPUT
			NetFlow* RXPLLREFSELDY_A0_B, // net ID: RXPLLREFSELDY lsb: 0  msb: 2 INPUT
			NetFlow* RXPMASETPHASE_A0_B, // net ID: RXPMASETPHASE lsb: 0  msb: 0 INPUT
			NetFlow* RXPOLARITY_A0_B, // net ID: RXPOLARITY lsb: 0  msb: 0 INPUT
			NetFlow* RXPOWERDOWN_A1_B, // net ID: RXPOWERDOWN lsb: 0  msb: 1 INPUT
			NetFlow* RXPOWERDOWN_A0_B, // net ID: RXPOWERDOWN lsb: 0  msb: 1 INPUT
			NetFlow* RXRATE_A1_B, // net ID: RXRATE lsb: 0  msb: 1 INPUT
			NetFlow* RXRATE_A0_B, // net ID: RXRATE lsb: 0  msb: 1 INPUT
			NetFlow* RXRESET_A0_B, // net ID: RXRESET lsb: 0  msb: 0 INPUT
			NetFlow* RXSLIDE_A0_B, // net ID: RXSLIDE lsb: 0  msb: 0 INPUT
			NetFlow* RXUSRCLK_A0_B, // net ID: RXUSRCLK lsb: 0  msb: 0 INPUT
			NetFlow* RXUSRCLK2_A0_B, // net ID: RXUSRCLK2 lsb: 0  msb: 0 INPUT
			NetFlow* SOUTHREFCLKRX_A1_B, // net ID: SOUTHREFCLKRX lsb: 0  msb: 1 INPUT
			NetFlow* SOUTHREFCLKRX_A0_B, // net ID: SOUTHREFCLKRX lsb: 0  msb: 1 INPUT
			NetFlow* SOUTHREFCLKTX_A1_B, // net ID: SOUTHREFCLKTX lsb: 0  msb: 1 INPUT
			NetFlow* SOUTHREFCLKTX_A0_B, // net ID: SOUTHREFCLKTX lsb: 0  msb: 1 INPUT
			NetFlow* TSTCLK0_A0_B, // net ID: TSTCLK0 lsb: 0  msb: 0 INPUT
			NetFlow* TSTCLK1_A0_B, // net ID: TSTCLK1 lsb: 0  msb: 0 INPUT
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
			NetFlow* TXBUFDIFFCTRL_A2_B, // net ID: TXBUFDIFFCTRL lsb: 0  msb: 2 INPUT
			NetFlow* TXBUFDIFFCTRL_A1_B, // net ID: TXBUFDIFFCTRL lsb: 0  msb: 2 INPUT
			NetFlow* TXBUFDIFFCTRL_A0_B, // net ID: TXBUFDIFFCTRL lsb: 0  msb: 2 INPUT
			NetFlow* TXBYPASS8B10B_A3_B, // net ID: TXBYPASS8B10B lsb: 0  msb: 3 INPUT
			NetFlow* TXBYPASS8B10B_A2_B, // net ID: TXBYPASS8B10B lsb: 0  msb: 3 INPUT
			NetFlow* TXBYPASS8B10B_A1_B, // net ID: TXBYPASS8B10B lsb: 0  msb: 3 INPUT
			NetFlow* TXBYPASS8B10B_A0_B, // net ID: TXBYPASS8B10B lsb: 0  msb: 3 INPUT
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
			NetFlow* TXDLYALIGNDISABLE_A0_B, // net ID: TXDLYALIGNDISABLE lsb: 0  msb: 0 INPUT
			NetFlow* TXDLYALIGNMONENB_A0_B, // net ID: TXDLYALIGNMONENB lsb: 0  msb: 0 INPUT
			NetFlow* TXDLYALIGNOVERRIDE_A0_B, // net ID: TXDLYALIGNOVERRIDE lsb: 0  msb: 0 INPUT
			NetFlow* TXDLYALIGNRESET_A0_B, // net ID: TXDLYALIGNRESET lsb: 0  msb: 0 INPUT
			NetFlow* TXDLYALIGNUPDSW_A0_B, // net ID: TXDLYALIGNUPDSW lsb: 0  msb: 0 INPUT
			NetFlow* TXELECIDLE_A0_B, // net ID: TXELECIDLE lsb: 0  msb: 0 INPUT
			NetFlow* TXENC8B10BUSE_A0_B, // net ID: TXENC8B10BUSE lsb: 0  msb: 0 INPUT
			NetFlow* TXENPMAPHASEALIGN_A0_B, // net ID: TXENPMAPHASEALIGN lsb: 0  msb: 0 INPUT
			NetFlow* TXENPRBSTST_A2_B, // net ID: TXENPRBSTST lsb: 0  msb: 2 INPUT
			NetFlow* TXENPRBSTST_A1_B, // net ID: TXENPRBSTST lsb: 0  msb: 2 INPUT
			NetFlow* TXENPRBSTST_A0_B, // net ID: TXENPRBSTST lsb: 0  msb: 2 INPUT
			NetFlow* TXHEADER_A2_B, // net ID: TXHEADER lsb: 0  msb: 2 INPUT
			NetFlow* TXHEADER_A1_B, // net ID: TXHEADER lsb: 0  msb: 2 INPUT
			NetFlow* TXHEADER_A0_B, // net ID: TXHEADER lsb: 0  msb: 2 INPUT
			NetFlow* TXINHIBIT_A0_B, // net ID: TXINHIBIT lsb: 0  msb: 0 INPUT
			NetFlow* TXMARGIN_A2_B, // net ID: TXMARGIN lsb: 0  msb: 2 INPUT
			NetFlow* TXMARGIN_A1_B, // net ID: TXMARGIN lsb: 0  msb: 2 INPUT
			NetFlow* TXMARGIN_A0_B, // net ID: TXMARGIN lsb: 0  msb: 2 INPUT
			NetFlow* TXPDOWNASYNCH_A0_B, // net ID: TXPDOWNASYNCH lsb: 0  msb: 0 INPUT
			NetFlow* TXPLLLKDETEN_A0_B, // net ID: TXPLLLKDETEN lsb: 0  msb: 0 INPUT
			NetFlow* TXPLLPOWERDOWN_A0_B, // net ID: TXPLLPOWERDOWN lsb: 0  msb: 0 INPUT
			NetFlow* TXPLLREFSELDY_A2_B, // net ID: TXPLLREFSELDY lsb: 0  msb: 2 INPUT
			NetFlow* TXPLLREFSELDY_A1_B, // net ID: TXPLLREFSELDY lsb: 0  msb: 2 INPUT
			NetFlow* TXPLLREFSELDY_A0_B, // net ID: TXPLLREFSELDY lsb: 0  msb: 2 INPUT
			NetFlow* TXPMASETPHASE_A0_B, // net ID: TXPMASETPHASE lsb: 0  msb: 0 INPUT
			NetFlow* TXPOLARITY_A0_B, // net ID: TXPOLARITY lsb: 0  msb: 0 INPUT
			NetFlow* TXPOSTEMPHASIS_A4_B, // net ID: TXPOSTEMPHASIS lsb: 0  msb: 4 INPUT
			NetFlow* TXPOSTEMPHASIS_A3_B, // net ID: TXPOSTEMPHASIS lsb: 0  msb: 4 INPUT
			NetFlow* TXPOSTEMPHASIS_A2_B, // net ID: TXPOSTEMPHASIS lsb: 0  msb: 4 INPUT
			NetFlow* TXPOSTEMPHASIS_A1_B, // net ID: TXPOSTEMPHASIS lsb: 0  msb: 4 INPUT
			NetFlow* TXPOSTEMPHASIS_A0_B, // net ID: TXPOSTEMPHASIS lsb: 0  msb: 4 INPUT
			NetFlow* TXPOWERDOWN_A1_B, // net ID: TXPOWERDOWN lsb: 0  msb: 1 INPUT
			NetFlow* TXPOWERDOWN_A0_B, // net ID: TXPOWERDOWN lsb: 0  msb: 1 INPUT
			NetFlow* TXPRBSFORCEERR_A0_B, // net ID: TXPRBSFORCEERR lsb: 0  msb: 0 INPUT
			NetFlow* TXPREEMPHASIS_A3_B, // net ID: TXPREEMPHASIS lsb: 0  msb: 3 INPUT
			NetFlow* TXPREEMPHASIS_A2_B, // net ID: TXPREEMPHASIS lsb: 0  msb: 3 INPUT
			NetFlow* TXPREEMPHASIS_A1_B, // net ID: TXPREEMPHASIS lsb: 0  msb: 3 INPUT
			NetFlow* TXPREEMPHASIS_A0_B, // net ID: TXPREEMPHASIS lsb: 0  msb: 3 INPUT
			NetFlow* TXRATE_A1_B, // net ID: TXRATE lsb: 0  msb: 1 INPUT
			NetFlow* TXRATE_A0_B, // net ID: TXRATE lsb: 0  msb: 1 INPUT
			NetFlow* TXRESET_A0_B, // net ID: TXRESET lsb: 0  msb: 0 INPUT
			NetFlow* TXSEQUENCE_A6_B, // net ID: TXSEQUENCE lsb: 0  msb: 6 INPUT
			NetFlow* TXSEQUENCE_A5_B, // net ID: TXSEQUENCE lsb: 0  msb: 6 INPUT
			NetFlow* TXSEQUENCE_A4_B, // net ID: TXSEQUENCE lsb: 0  msb: 6 INPUT
			NetFlow* TXSEQUENCE_A3_B, // net ID: TXSEQUENCE lsb: 0  msb: 6 INPUT
			NetFlow* TXSEQUENCE_A2_B, // net ID: TXSEQUENCE lsb: 0  msb: 6 INPUT
			NetFlow* TXSEQUENCE_A1_B, // net ID: TXSEQUENCE lsb: 0  msb: 6 INPUT
			NetFlow* TXSEQUENCE_A0_B, // net ID: TXSEQUENCE lsb: 0  msb: 6 INPUT
			NetFlow* TXSTARTSEQ_A0_B, // net ID: TXSTARTSEQ lsb: 0  msb: 0 INPUT
			NetFlow* TXSWING_A0_B, // net ID: TXSWING lsb: 0  msb: 0 INPUT
			NetFlow* TXUSRCLK_A0_B, // net ID: TXUSRCLK lsb: 0  msb: 0 INPUT
			NetFlow* TXUSRCLK2_A0_B, // net ID: TXUSRCLK2 lsb: 0  msb: 0 INPUT
			NetFlow* USRCODEERR_A0_B // net ID: USRCODEERR lsb: 0  msb: 0 INPUT
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
			this->COMFINISH_A0_B = COMFINISH_A0_B; // net ID: COMFINISH lsb: 0  msb: 0 OUTPUT
			this->COMINITDET_A0_B = COMINITDET_A0_B; // net ID: COMINITDET lsb: 0  msb: 0 OUTPUT
			this->COMSASDET_A0_B = COMSASDET_A0_B; // net ID: COMSASDET lsb: 0  msb: 0 OUTPUT
			this->COMWAKEDET_A0_B = COMWAKEDET_A0_B; // net ID: COMWAKEDET lsb: 0  msb: 0 OUTPUT
			this->DFECLKDLYADJMON_A5_B = DFECLKDLYADJMON_A5_B; // net ID: DFECLKDLYADJMON lsb: 0  msb: 5 OUTPUT
			this->DFECLKDLYADJMON_A4_B = DFECLKDLYADJMON_A4_B; // net ID: DFECLKDLYADJMON lsb: 0  msb: 5 OUTPUT
			this->DFECLKDLYADJMON_A3_B = DFECLKDLYADJMON_A3_B; // net ID: DFECLKDLYADJMON lsb: 0  msb: 5 OUTPUT
			this->DFECLKDLYADJMON_A2_B = DFECLKDLYADJMON_A2_B; // net ID: DFECLKDLYADJMON lsb: 0  msb: 5 OUTPUT
			this->DFECLKDLYADJMON_A1_B = DFECLKDLYADJMON_A1_B; // net ID: DFECLKDLYADJMON lsb: 0  msb: 5 OUTPUT
			this->DFECLKDLYADJMON_A0_B = DFECLKDLYADJMON_A0_B; // net ID: DFECLKDLYADJMON lsb: 0  msb: 5 OUTPUT
			this->DFEEYEDACMON_A4_B = DFEEYEDACMON_A4_B; // net ID: DFEEYEDACMON lsb: 0  msb: 4 OUTPUT
			this->DFEEYEDACMON_A3_B = DFEEYEDACMON_A3_B; // net ID: DFEEYEDACMON lsb: 0  msb: 4 OUTPUT
			this->DFEEYEDACMON_A2_B = DFEEYEDACMON_A2_B; // net ID: DFEEYEDACMON lsb: 0  msb: 4 OUTPUT
			this->DFEEYEDACMON_A1_B = DFEEYEDACMON_A1_B; // net ID: DFEEYEDACMON lsb: 0  msb: 4 OUTPUT
			this->DFEEYEDACMON_A0_B = DFEEYEDACMON_A0_B; // net ID: DFEEYEDACMON lsb: 0  msb: 4 OUTPUT
			this->DFESENSCAL_A2_B = DFESENSCAL_A2_B; // net ID: DFESENSCAL lsb: 0  msb: 2 OUTPUT
			this->DFESENSCAL_A1_B = DFESENSCAL_A1_B; // net ID: DFESENSCAL lsb: 0  msb: 2 OUTPUT
			this->DFESENSCAL_A0_B = DFESENSCAL_A0_B; // net ID: DFESENSCAL lsb: 0  msb: 2 OUTPUT
			this->DFETAP1MONITOR_A4_B = DFETAP1MONITOR_A4_B; // net ID: DFETAP1MONITOR lsb: 0  msb: 4 OUTPUT
			this->DFETAP1MONITOR_A3_B = DFETAP1MONITOR_A3_B; // net ID: DFETAP1MONITOR lsb: 0  msb: 4 OUTPUT
			this->DFETAP1MONITOR_A2_B = DFETAP1MONITOR_A2_B; // net ID: DFETAP1MONITOR lsb: 0  msb: 4 OUTPUT
			this->DFETAP1MONITOR_A1_B = DFETAP1MONITOR_A1_B; // net ID: DFETAP1MONITOR lsb: 0  msb: 4 OUTPUT
			this->DFETAP1MONITOR_A0_B = DFETAP1MONITOR_A0_B; // net ID: DFETAP1MONITOR lsb: 0  msb: 4 OUTPUT
			this->DFETAP2MONITOR_A4_B = DFETAP2MONITOR_A4_B; // net ID: DFETAP2MONITOR lsb: 0  msb: 4 OUTPUT
			this->DFETAP2MONITOR_A3_B = DFETAP2MONITOR_A3_B; // net ID: DFETAP2MONITOR lsb: 0  msb: 4 OUTPUT
			this->DFETAP2MONITOR_A2_B = DFETAP2MONITOR_A2_B; // net ID: DFETAP2MONITOR lsb: 0  msb: 4 OUTPUT
			this->DFETAP2MONITOR_A1_B = DFETAP2MONITOR_A1_B; // net ID: DFETAP2MONITOR lsb: 0  msb: 4 OUTPUT
			this->DFETAP2MONITOR_A0_B = DFETAP2MONITOR_A0_B; // net ID: DFETAP2MONITOR lsb: 0  msb: 4 OUTPUT
			this->DFETAP3MONITOR_A3_B = DFETAP3MONITOR_A3_B; // net ID: DFETAP3MONITOR lsb: 0  msb: 3 OUTPUT
			this->DFETAP3MONITOR_A2_B = DFETAP3MONITOR_A2_B; // net ID: DFETAP3MONITOR lsb: 0  msb: 3 OUTPUT
			this->DFETAP3MONITOR_A1_B = DFETAP3MONITOR_A1_B; // net ID: DFETAP3MONITOR lsb: 0  msb: 3 OUTPUT
			this->DFETAP3MONITOR_A0_B = DFETAP3MONITOR_A0_B; // net ID: DFETAP3MONITOR lsb: 0  msb: 3 OUTPUT
			this->DFETAP4MONITOR_A3_B = DFETAP4MONITOR_A3_B; // net ID: DFETAP4MONITOR lsb: 0  msb: 3 OUTPUT
			this->DFETAP4MONITOR_A2_B = DFETAP4MONITOR_A2_B; // net ID: DFETAP4MONITOR lsb: 0  msb: 3 OUTPUT
			this->DFETAP4MONITOR_A1_B = DFETAP4MONITOR_A1_B; // net ID: DFETAP4MONITOR lsb: 0  msb: 3 OUTPUT
			this->DFETAP4MONITOR_A0_B = DFETAP4MONITOR_A0_B; // net ID: DFETAP4MONITOR lsb: 0  msb: 3 OUTPUT
			this->DRDY_A0_B = DRDY_A0_B; // net ID: DRDY lsb: 0  msb: 0 OUTPUT
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
			this->MGTREFCLKFAB_A1_B = MGTREFCLKFAB_A1_B; // net ID: MGTREFCLKFAB lsb: 0  msb: 1 OUTPUT
			this->MGTREFCLKFAB_A0_B = MGTREFCLKFAB_A0_B; // net ID: MGTREFCLKFAB lsb: 0  msb: 1 OUTPUT
			this->PHYSTATUS_A0_B = PHYSTATUS_A0_B; // net ID: PHYSTATUS lsb: 0  msb: 0 OUTPUT
			this->RXBUFSTATUS_A2_B = RXBUFSTATUS_A2_B; // net ID: RXBUFSTATUS lsb: 0  msb: 2 OUTPUT
			this->RXBUFSTATUS_A1_B = RXBUFSTATUS_A1_B; // net ID: RXBUFSTATUS lsb: 0  msb: 2 OUTPUT
			this->RXBUFSTATUS_A0_B = RXBUFSTATUS_A0_B; // net ID: RXBUFSTATUS lsb: 0  msb: 2 OUTPUT
			this->RXBYTEISALIGNED_A0_B = RXBYTEISALIGNED_A0_B; // net ID: RXBYTEISALIGNED lsb: 0  msb: 0 OUTPUT
			this->RXBYTEREALIGN_A0_B = RXBYTEREALIGN_A0_B; // net ID: RXBYTEREALIGN lsb: 0  msb: 0 OUTPUT
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
			this->RXCLKCORCNT_A2_B = RXCLKCORCNT_A2_B; // net ID: RXCLKCORCNT lsb: 0  msb: 2 OUTPUT
			this->RXCLKCORCNT_A1_B = RXCLKCORCNT_A1_B; // net ID: RXCLKCORCNT lsb: 0  msb: 2 OUTPUT
			this->RXCLKCORCNT_A0_B = RXCLKCORCNT_A0_B; // net ID: RXCLKCORCNT lsb: 0  msb: 2 OUTPUT
			this->RXCOMMADET_A0_B = RXCOMMADET_A0_B; // net ID: RXCOMMADET lsb: 0  msb: 0 OUTPUT
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
			this->RXDATAVALID_A0_B = RXDATAVALID_A0_B; // net ID: RXDATAVALID lsb: 0  msb: 0 OUTPUT
			this->RXDISPERR_A3_B = RXDISPERR_A3_B; // net ID: RXDISPERR lsb: 0  msb: 3 OUTPUT
			this->RXDISPERR_A2_B = RXDISPERR_A2_B; // net ID: RXDISPERR lsb: 0  msb: 3 OUTPUT
			this->RXDISPERR_A1_B = RXDISPERR_A1_B; // net ID: RXDISPERR lsb: 0  msb: 3 OUTPUT
			this->RXDISPERR_A0_B = RXDISPERR_A0_B; // net ID: RXDISPERR lsb: 0  msb: 3 OUTPUT
			this->RXDLYALIGNMONITOR_A7_B = RXDLYALIGNMONITOR_A7_B; // net ID: RXDLYALIGNMONITOR lsb: 0  msb: 7 OUTPUT
			this->RXDLYALIGNMONITOR_A6_B = RXDLYALIGNMONITOR_A6_B; // net ID: RXDLYALIGNMONITOR lsb: 0  msb: 7 OUTPUT
			this->RXDLYALIGNMONITOR_A5_B = RXDLYALIGNMONITOR_A5_B; // net ID: RXDLYALIGNMONITOR lsb: 0  msb: 7 OUTPUT
			this->RXDLYALIGNMONITOR_A4_B = RXDLYALIGNMONITOR_A4_B; // net ID: RXDLYALIGNMONITOR lsb: 0  msb: 7 OUTPUT
			this->RXDLYALIGNMONITOR_A3_B = RXDLYALIGNMONITOR_A3_B; // net ID: RXDLYALIGNMONITOR lsb: 0  msb: 7 OUTPUT
			this->RXDLYALIGNMONITOR_A2_B = RXDLYALIGNMONITOR_A2_B; // net ID: RXDLYALIGNMONITOR lsb: 0  msb: 7 OUTPUT
			this->RXDLYALIGNMONITOR_A1_B = RXDLYALIGNMONITOR_A1_B; // net ID: RXDLYALIGNMONITOR lsb: 0  msb: 7 OUTPUT
			this->RXDLYALIGNMONITOR_A0_B = RXDLYALIGNMONITOR_A0_B; // net ID: RXDLYALIGNMONITOR lsb: 0  msb: 7 OUTPUT
			this->RXELECIDLE_A0_B = RXELECIDLE_A0_B; // net ID: RXELECIDLE lsb: 0  msb: 0 OUTPUT
			this->RXHEADER_A2_B = RXHEADER_A2_B; // net ID: RXHEADER lsb: 0  msb: 2 OUTPUT
			this->RXHEADER_A1_B = RXHEADER_A1_B; // net ID: RXHEADER lsb: 0  msb: 2 OUTPUT
			this->RXHEADER_A0_B = RXHEADER_A0_B; // net ID: RXHEADER lsb: 0  msb: 2 OUTPUT
			this->RXHEADERVALID_A0_B = RXHEADERVALID_A0_B; // net ID: RXHEADERVALID lsb: 0  msb: 0 OUTPUT
			this->RXLOSSOFSYNC_A1_B = RXLOSSOFSYNC_A1_B; // net ID: RXLOSSOFSYNC lsb: 0  msb: 1 OUTPUT
			this->RXLOSSOFSYNC_A0_B = RXLOSSOFSYNC_A0_B; // net ID: RXLOSSOFSYNC lsb: 0  msb: 1 OUTPUT
			this->RXNOTINTABLE_A3_B = RXNOTINTABLE_A3_B; // net ID: RXNOTINTABLE lsb: 0  msb: 3 OUTPUT
			this->RXNOTINTABLE_A2_B = RXNOTINTABLE_A2_B; // net ID: RXNOTINTABLE lsb: 0  msb: 3 OUTPUT
			this->RXNOTINTABLE_A1_B = RXNOTINTABLE_A1_B; // net ID: RXNOTINTABLE lsb: 0  msb: 3 OUTPUT
			this->RXNOTINTABLE_A0_B = RXNOTINTABLE_A0_B; // net ID: RXNOTINTABLE lsb: 0  msb: 3 OUTPUT
			this->RXOVERSAMPLEERR_A0_B = RXOVERSAMPLEERR_A0_B; // net ID: RXOVERSAMPLEERR lsb: 0  msb: 0 OUTPUT
			this->RXPLLLKDET_A0_B = RXPLLLKDET_A0_B; // net ID: RXPLLLKDET lsb: 0  msb: 0 OUTPUT
			this->RXPRBSERR_A0_B = RXPRBSERR_A0_B; // net ID: RXPRBSERR lsb: 0  msb: 0 OUTPUT
			this->RXRATEDONE_A0_B = RXRATEDONE_A0_B; // net ID: RXRATEDONE lsb: 0  msb: 0 OUTPUT
			this->RXRECCLK_A0_B = RXRECCLK_A0_B; // net ID: RXRECCLK lsb: 0  msb: 0 OUTPUT
			this->RXRECCLKPCS_A0_B = RXRECCLKPCS_A0_B; // net ID: RXRECCLKPCS lsb: 0  msb: 0 OUTPUT
			this->RXRESETDONE_A0_B = RXRESETDONE_A0_B; // net ID: RXRESETDONE lsb: 0  msb: 0 OUTPUT
			this->RXRUNDISP_A3_B = RXRUNDISP_A3_B; // net ID: RXRUNDISP lsb: 0  msb: 3 OUTPUT
			this->RXRUNDISP_A2_B = RXRUNDISP_A2_B; // net ID: RXRUNDISP lsb: 0  msb: 3 OUTPUT
			this->RXRUNDISP_A1_B = RXRUNDISP_A1_B; // net ID: RXRUNDISP lsb: 0  msb: 3 OUTPUT
			this->RXRUNDISP_A0_B = RXRUNDISP_A0_B; // net ID: RXRUNDISP lsb: 0  msb: 3 OUTPUT
			this->RXSTARTOFSEQ_A0_B = RXSTARTOFSEQ_A0_B; // net ID: RXSTARTOFSEQ lsb: 0  msb: 0 OUTPUT
			this->RXSTATUS_A2_B = RXSTATUS_A2_B; // net ID: RXSTATUS lsb: 0  msb: 2 OUTPUT
			this->RXSTATUS_A1_B = RXSTATUS_A1_B; // net ID: RXSTATUS lsb: 0  msb: 2 OUTPUT
			this->RXSTATUS_A0_B = RXSTATUS_A0_B; // net ID: RXSTATUS lsb: 0  msb: 2 OUTPUT
			this->RXVALID_A0_B = RXVALID_A0_B; // net ID: RXVALID lsb: 0  msb: 0 OUTPUT
			this->TSTOUT_A9_B = TSTOUT_A9_B; // net ID: TSTOUT lsb: 0  msb: 9 OUTPUT
			this->TSTOUT_A8_B = TSTOUT_A8_B; // net ID: TSTOUT lsb: 0  msb: 9 OUTPUT
			this->TSTOUT_A7_B = TSTOUT_A7_B; // net ID: TSTOUT lsb: 0  msb: 9 OUTPUT
			this->TSTOUT_A6_B = TSTOUT_A6_B; // net ID: TSTOUT lsb: 0  msb: 9 OUTPUT
			this->TSTOUT_A5_B = TSTOUT_A5_B; // net ID: TSTOUT lsb: 0  msb: 9 OUTPUT
			this->TSTOUT_A4_B = TSTOUT_A4_B; // net ID: TSTOUT lsb: 0  msb: 9 OUTPUT
			this->TSTOUT_A3_B = TSTOUT_A3_B; // net ID: TSTOUT lsb: 0  msb: 9 OUTPUT
			this->TSTOUT_A2_B = TSTOUT_A2_B; // net ID: TSTOUT lsb: 0  msb: 9 OUTPUT
			this->TSTOUT_A1_B = TSTOUT_A1_B; // net ID: TSTOUT lsb: 0  msb: 9 OUTPUT
			this->TSTOUT_A0_B = TSTOUT_A0_B; // net ID: TSTOUT lsb: 0  msb: 9 OUTPUT
			this->TXBUFSTATUS_A1_B = TXBUFSTATUS_A1_B; // net ID: TXBUFSTATUS lsb: 0  msb: 1 OUTPUT
			this->TXBUFSTATUS_A0_B = TXBUFSTATUS_A0_B; // net ID: TXBUFSTATUS lsb: 0  msb: 1 OUTPUT
			this->TXDLYALIGNMONITOR_A7_B = TXDLYALIGNMONITOR_A7_B; // net ID: TXDLYALIGNMONITOR lsb: 0  msb: 7 OUTPUT
			this->TXDLYALIGNMONITOR_A6_B = TXDLYALIGNMONITOR_A6_B; // net ID: TXDLYALIGNMONITOR lsb: 0  msb: 7 OUTPUT
			this->TXDLYALIGNMONITOR_A5_B = TXDLYALIGNMONITOR_A5_B; // net ID: TXDLYALIGNMONITOR lsb: 0  msb: 7 OUTPUT
			this->TXDLYALIGNMONITOR_A4_B = TXDLYALIGNMONITOR_A4_B; // net ID: TXDLYALIGNMONITOR lsb: 0  msb: 7 OUTPUT
			this->TXDLYALIGNMONITOR_A3_B = TXDLYALIGNMONITOR_A3_B; // net ID: TXDLYALIGNMONITOR lsb: 0  msb: 7 OUTPUT
			this->TXDLYALIGNMONITOR_A2_B = TXDLYALIGNMONITOR_A2_B; // net ID: TXDLYALIGNMONITOR lsb: 0  msb: 7 OUTPUT
			this->TXDLYALIGNMONITOR_A1_B = TXDLYALIGNMONITOR_A1_B; // net ID: TXDLYALIGNMONITOR lsb: 0  msb: 7 OUTPUT
			this->TXDLYALIGNMONITOR_A0_B = TXDLYALIGNMONITOR_A0_B; // net ID: TXDLYALIGNMONITOR lsb: 0  msb: 7 OUTPUT
			this->TXGEARBOXREADY_A0_B = TXGEARBOXREADY_A0_B; // net ID: TXGEARBOXREADY lsb: 0  msb: 0 OUTPUT
			this->TXKERR_A3_B = TXKERR_A3_B; // net ID: TXKERR lsb: 0  msb: 3 OUTPUT
			this->TXKERR_A2_B = TXKERR_A2_B; // net ID: TXKERR lsb: 0  msb: 3 OUTPUT
			this->TXKERR_A1_B = TXKERR_A1_B; // net ID: TXKERR lsb: 0  msb: 3 OUTPUT
			this->TXKERR_A0_B = TXKERR_A0_B; // net ID: TXKERR lsb: 0  msb: 3 OUTPUT
			this->TXN_A0_B = TXN_A0_B; // net ID: TXN lsb: 0  msb: 0 OUTPUT
			this->TXOUTCLK_A0_B = TXOUTCLK_A0_B; // net ID: TXOUTCLK lsb: 0  msb: 0 OUTPUT
			this->TXOUTCLKPCS_A0_B = TXOUTCLKPCS_A0_B; // net ID: TXOUTCLKPCS lsb: 0  msb: 0 OUTPUT
			this->TXP_A0_B = TXP_A0_B; // net ID: TXP lsb: 0  msb: 0 OUTPUT
			this->TXPLLLKDET_A0_B = TXPLLLKDET_A0_B; // net ID: TXPLLLKDET lsb: 0  msb: 0 OUTPUT
			this->TXRATEDONE_A0_B = TXRATEDONE_A0_B; // net ID: TXRATEDONE lsb: 0  msb: 0 OUTPUT
			this->TXRESETDONE_A0_B = TXRESETDONE_A0_B; // net ID: TXRESETDONE lsb: 0  msb: 0 OUTPUT
			this->TXRUNDISP_A3_B = TXRUNDISP_A3_B; // net ID: TXRUNDISP lsb: 0  msb: 3 OUTPUT
			this->TXRUNDISP_A2_B = TXRUNDISP_A2_B; // net ID: TXRUNDISP lsb: 0  msb: 3 OUTPUT
			this->TXRUNDISP_A1_B = TXRUNDISP_A1_B; // net ID: TXRUNDISP lsb: 0  msb: 3 OUTPUT
			this->TXRUNDISP_A0_B = TXRUNDISP_A0_B; // net ID: TXRUNDISP lsb: 0  msb: 3 OUTPUT
			this->DADDR_A7_B = DADDR_A7_B; // net ID: DADDR lsb: 0  msb: 7 INPUT
			this->DADDR_A6_B = DADDR_A6_B; // net ID: DADDR lsb: 0  msb: 7 INPUT
			this->DADDR_A5_B = DADDR_A5_B; // net ID: DADDR lsb: 0  msb: 7 INPUT
			this->DADDR_A4_B = DADDR_A4_B; // net ID: DADDR lsb: 0  msb: 7 INPUT
			this->DADDR_A3_B = DADDR_A3_B; // net ID: DADDR lsb: 0  msb: 7 INPUT
			this->DADDR_A2_B = DADDR_A2_B; // net ID: DADDR lsb: 0  msb: 7 INPUT
			this->DADDR_A1_B = DADDR_A1_B; // net ID: DADDR lsb: 0  msb: 7 INPUT
			this->DADDR_A0_B = DADDR_A0_B; // net ID: DADDR lsb: 0  msb: 7 INPUT
			this->DCLK_A0_B = DCLK_A0_B; // net ID: DCLK lsb: 0  msb: 0 INPUT
			this->DEN_A0_B = DEN_A0_B; // net ID: DEN lsb: 0  msb: 0 INPUT
			this->DFECLKDLYADJ_A5_B = DFECLKDLYADJ_A5_B; // net ID: DFECLKDLYADJ lsb: 0  msb: 5 INPUT
			this->DFECLKDLYADJ_A4_B = DFECLKDLYADJ_A4_B; // net ID: DFECLKDLYADJ lsb: 0  msb: 5 INPUT
			this->DFECLKDLYADJ_A3_B = DFECLKDLYADJ_A3_B; // net ID: DFECLKDLYADJ lsb: 0  msb: 5 INPUT
			this->DFECLKDLYADJ_A2_B = DFECLKDLYADJ_A2_B; // net ID: DFECLKDLYADJ lsb: 0  msb: 5 INPUT
			this->DFECLKDLYADJ_A1_B = DFECLKDLYADJ_A1_B; // net ID: DFECLKDLYADJ lsb: 0  msb: 5 INPUT
			this->DFECLKDLYADJ_A0_B = DFECLKDLYADJ_A0_B; // net ID: DFECLKDLYADJ lsb: 0  msb: 5 INPUT
			this->DFEDLYOVRD_A0_B = DFEDLYOVRD_A0_B; // net ID: DFEDLYOVRD lsb: 0  msb: 0 INPUT
			this->DFETAP1_A4_B = DFETAP1_A4_B; // net ID: DFETAP1 lsb: 0  msb: 4 INPUT
			this->DFETAP1_A3_B = DFETAP1_A3_B; // net ID: DFETAP1 lsb: 0  msb: 4 INPUT
			this->DFETAP1_A2_B = DFETAP1_A2_B; // net ID: DFETAP1 lsb: 0  msb: 4 INPUT
			this->DFETAP1_A1_B = DFETAP1_A1_B; // net ID: DFETAP1 lsb: 0  msb: 4 INPUT
			this->DFETAP1_A0_B = DFETAP1_A0_B; // net ID: DFETAP1 lsb: 0  msb: 4 INPUT
			this->DFETAP2_A4_B = DFETAP2_A4_B; // net ID: DFETAP2 lsb: 0  msb: 4 INPUT
			this->DFETAP2_A3_B = DFETAP2_A3_B; // net ID: DFETAP2 lsb: 0  msb: 4 INPUT
			this->DFETAP2_A2_B = DFETAP2_A2_B; // net ID: DFETAP2 lsb: 0  msb: 4 INPUT
			this->DFETAP2_A1_B = DFETAP2_A1_B; // net ID: DFETAP2 lsb: 0  msb: 4 INPUT
			this->DFETAP2_A0_B = DFETAP2_A0_B; // net ID: DFETAP2 lsb: 0  msb: 4 INPUT
			this->DFETAP3_A3_B = DFETAP3_A3_B; // net ID: DFETAP3 lsb: 0  msb: 3 INPUT
			this->DFETAP3_A2_B = DFETAP3_A2_B; // net ID: DFETAP3 lsb: 0  msb: 3 INPUT
			this->DFETAP3_A1_B = DFETAP3_A1_B; // net ID: DFETAP3 lsb: 0  msb: 3 INPUT
			this->DFETAP3_A0_B = DFETAP3_A0_B; // net ID: DFETAP3 lsb: 0  msb: 3 INPUT
			this->DFETAP4_A3_B = DFETAP4_A3_B; // net ID: DFETAP4 lsb: 0  msb: 3 INPUT
			this->DFETAP4_A2_B = DFETAP4_A2_B; // net ID: DFETAP4 lsb: 0  msb: 3 INPUT
			this->DFETAP4_A1_B = DFETAP4_A1_B; // net ID: DFETAP4 lsb: 0  msb: 3 INPUT
			this->DFETAP4_A0_B = DFETAP4_A0_B; // net ID: DFETAP4 lsb: 0  msb: 3 INPUT
			this->DFETAPOVRD_A0_B = DFETAPOVRD_A0_B; // net ID: DFETAPOVRD lsb: 0  msb: 0 INPUT
			this->DI_A15_B = DI_A15_B; // net ID: DI lsb: 0  msb: 15 INPUT
			this->DI_A14_B = DI_A14_B; // net ID: DI lsb: 0  msb: 15 INPUT
			this->DI_A13_B = DI_A13_B; // net ID: DI lsb: 0  msb: 15 INPUT
			this->DI_A12_B = DI_A12_B; // net ID: DI lsb: 0  msb: 15 INPUT
			this->DI_A11_B = DI_A11_B; // net ID: DI lsb: 0  msb: 15 INPUT
			this->DI_A10_B = DI_A10_B; // net ID: DI lsb: 0  msb: 15 INPUT
			this->DI_A9_B = DI_A9_B; // net ID: DI lsb: 0  msb: 15 INPUT
			this->DI_A8_B = DI_A8_B; // net ID: DI lsb: 0  msb: 15 INPUT
			this->DI_A7_B = DI_A7_B; // net ID: DI lsb: 0  msb: 15 INPUT
			this->DI_A6_B = DI_A6_B; // net ID: DI lsb: 0  msb: 15 INPUT
			this->DI_A5_B = DI_A5_B; // net ID: DI lsb: 0  msb: 15 INPUT
			this->DI_A4_B = DI_A4_B; // net ID: DI lsb: 0  msb: 15 INPUT
			this->DI_A3_B = DI_A3_B; // net ID: DI lsb: 0  msb: 15 INPUT
			this->DI_A2_B = DI_A2_B; // net ID: DI lsb: 0  msb: 15 INPUT
			this->DI_A1_B = DI_A1_B; // net ID: DI lsb: 0  msb: 15 INPUT
			this->DI_A0_B = DI_A0_B; // net ID: DI lsb: 0  msb: 15 INPUT
			this->DWE_A0_B = DWE_A0_B; // net ID: DWE lsb: 0  msb: 0 INPUT
			this->GATERXELECIDLE_A0_B = GATERXELECIDLE_A0_B; // net ID: GATERXELECIDLE lsb: 0  msb: 0 INPUT
			this->GREFCLKRX_A0_B = GREFCLKRX_A0_B; // net ID: GREFCLKRX lsb: 0  msb: 0 INPUT
			this->GREFCLKTX_A0_B = GREFCLKTX_A0_B; // net ID: GREFCLKTX lsb: 0  msb: 0 INPUT
			this->GTXRXRESET_A0_B = GTXRXRESET_A0_B; // net ID: GTXRXRESET lsb: 0  msb: 0 INPUT
			this->GTXTEST_A12_B = GTXTEST_A12_B; // net ID: GTXTEST lsb: 0  msb: 12 INPUT
			this->GTXTEST_A11_B = GTXTEST_A11_B; // net ID: GTXTEST lsb: 0  msb: 12 INPUT
			this->GTXTEST_A10_B = GTXTEST_A10_B; // net ID: GTXTEST lsb: 0  msb: 12 INPUT
			this->GTXTEST_A9_B = GTXTEST_A9_B; // net ID: GTXTEST lsb: 0  msb: 12 INPUT
			this->GTXTEST_A8_B = GTXTEST_A8_B; // net ID: GTXTEST lsb: 0  msb: 12 INPUT
			this->GTXTEST_A7_B = GTXTEST_A7_B; // net ID: GTXTEST lsb: 0  msb: 12 INPUT
			this->GTXTEST_A6_B = GTXTEST_A6_B; // net ID: GTXTEST lsb: 0  msb: 12 INPUT
			this->GTXTEST_A5_B = GTXTEST_A5_B; // net ID: GTXTEST lsb: 0  msb: 12 INPUT
			this->GTXTEST_A4_B = GTXTEST_A4_B; // net ID: GTXTEST lsb: 0  msb: 12 INPUT
			this->GTXTEST_A3_B = GTXTEST_A3_B; // net ID: GTXTEST lsb: 0  msb: 12 INPUT
			this->GTXTEST_A2_B = GTXTEST_A2_B; // net ID: GTXTEST lsb: 0  msb: 12 INPUT
			this->GTXTEST_A1_B = GTXTEST_A1_B; // net ID: GTXTEST lsb: 0  msb: 12 INPUT
			this->GTXTEST_A0_B = GTXTEST_A0_B; // net ID: GTXTEST lsb: 0  msb: 12 INPUT
			this->GTXTXRESET_A0_B = GTXTXRESET_A0_B; // net ID: GTXTXRESET lsb: 0  msb: 0 INPUT
			this->IGNORESIGDET_A0_B = IGNORESIGDET_A0_B; // net ID: IGNORESIGDET lsb: 0  msb: 0 INPUT
			this->LOOPBACK_A2_B = LOOPBACK_A2_B; // net ID: LOOPBACK lsb: 0  msb: 2 INPUT
			this->LOOPBACK_A1_B = LOOPBACK_A1_B; // net ID: LOOPBACK lsb: 0  msb: 2 INPUT
			this->LOOPBACK_A0_B = LOOPBACK_A0_B; // net ID: LOOPBACK lsb: 0  msb: 2 INPUT
			this->MGTREFCLKRX_A1_B = MGTREFCLKRX_A1_B; // net ID: MGTREFCLKRX lsb: 0  msb: 1 INPUT
			this->MGTREFCLKRX_A0_B = MGTREFCLKRX_A0_B; // net ID: MGTREFCLKRX lsb: 0  msb: 1 INPUT
			this->MGTREFCLKTX_A1_B = MGTREFCLKTX_A1_B; // net ID: MGTREFCLKTX lsb: 0  msb: 1 INPUT
			this->MGTREFCLKTX_A0_B = MGTREFCLKTX_A0_B; // net ID: MGTREFCLKTX lsb: 0  msb: 1 INPUT
			this->NORTHREFCLKRX_A1_B = NORTHREFCLKRX_A1_B; // net ID: NORTHREFCLKRX lsb: 0  msb: 1 INPUT
			this->NORTHREFCLKRX_A0_B = NORTHREFCLKRX_A0_B; // net ID: NORTHREFCLKRX lsb: 0  msb: 1 INPUT
			this->NORTHREFCLKTX_A1_B = NORTHREFCLKTX_A1_B; // net ID: NORTHREFCLKTX lsb: 0  msb: 1 INPUT
			this->NORTHREFCLKTX_A0_B = NORTHREFCLKTX_A0_B; // net ID: NORTHREFCLKTX lsb: 0  msb: 1 INPUT
			this->PERFCLKRX_A0_B = PERFCLKRX_A0_B; // net ID: PERFCLKRX lsb: 0  msb: 0 INPUT
			this->PERFCLKTX_A0_B = PERFCLKTX_A0_B; // net ID: PERFCLKTX lsb: 0  msb: 0 INPUT
			this->PLLRXRESET_A0_B = PLLRXRESET_A0_B; // net ID: PLLRXRESET lsb: 0  msb: 0 INPUT
			this->PLLTXRESET_A0_B = PLLTXRESET_A0_B; // net ID: PLLTXRESET lsb: 0  msb: 0 INPUT
			this->PRBSCNTRESET_A0_B = PRBSCNTRESET_A0_B; // net ID: PRBSCNTRESET lsb: 0  msb: 0 INPUT
			this->RXBUFRESET_A0_B = RXBUFRESET_A0_B; // net ID: RXBUFRESET lsb: 0  msb: 0 INPUT
			this->RXCDRRESET_A0_B = RXCDRRESET_A0_B; // net ID: RXCDRRESET lsb: 0  msb: 0 INPUT
			this->RXCHBONDI_A3_B = RXCHBONDI_A3_B; // net ID: RXCHBONDI lsb: 0  msb: 3 INPUT
			this->RXCHBONDI_A2_B = RXCHBONDI_A2_B; // net ID: RXCHBONDI lsb: 0  msb: 3 INPUT
			this->RXCHBONDI_A1_B = RXCHBONDI_A1_B; // net ID: RXCHBONDI lsb: 0  msb: 3 INPUT
			this->RXCHBONDI_A0_B = RXCHBONDI_A0_B; // net ID: RXCHBONDI lsb: 0  msb: 3 INPUT
			this->RXCHBONDLEVEL_A2_B = RXCHBONDLEVEL_A2_B; // net ID: RXCHBONDLEVEL lsb: 0  msb: 2 INPUT
			this->RXCHBONDLEVEL_A1_B = RXCHBONDLEVEL_A1_B; // net ID: RXCHBONDLEVEL lsb: 0  msb: 2 INPUT
			this->RXCHBONDLEVEL_A0_B = RXCHBONDLEVEL_A0_B; // net ID: RXCHBONDLEVEL lsb: 0  msb: 2 INPUT
			this->RXCHBONDMASTER_A0_B = RXCHBONDMASTER_A0_B; // net ID: RXCHBONDMASTER lsb: 0  msb: 0 INPUT
			this->RXCHBONDSLAVE_A0_B = RXCHBONDSLAVE_A0_B; // net ID: RXCHBONDSLAVE lsb: 0  msb: 0 INPUT
			this->RXCOMMADETUSE_A0_B = RXCOMMADETUSE_A0_B; // net ID: RXCOMMADETUSE lsb: 0  msb: 0 INPUT
			this->RXDEC8B10BUSE_A0_B = RXDEC8B10BUSE_A0_B; // net ID: RXDEC8B10BUSE lsb: 0  msb: 0 INPUT
			this->RXDLYALIGNDISABLE_A0_B = RXDLYALIGNDISABLE_A0_B; // net ID: RXDLYALIGNDISABLE lsb: 0  msb: 0 INPUT
			this->RXDLYALIGNMONENB_A0_B = RXDLYALIGNMONENB_A0_B; // net ID: RXDLYALIGNMONENB lsb: 0  msb: 0 INPUT
			this->RXDLYALIGNOVERRIDE_A0_B = RXDLYALIGNOVERRIDE_A0_B; // net ID: RXDLYALIGNOVERRIDE lsb: 0  msb: 0 INPUT
			this->RXDLYALIGNRESET_A0_B = RXDLYALIGNRESET_A0_B; // net ID: RXDLYALIGNRESET lsb: 0  msb: 0 INPUT
			this->RXDLYALIGNSWPPRECURB_A0_B = RXDLYALIGNSWPPRECURB_A0_B; // net ID: RXDLYALIGNSWPPRECURB lsb: 0  msb: 0 INPUT
			this->RXDLYALIGNUPDSW_A0_B = RXDLYALIGNUPDSW_A0_B; // net ID: RXDLYALIGNUPDSW lsb: 0  msb: 0 INPUT
			this->RXENCHANSYNC_A0_B = RXENCHANSYNC_A0_B; // net ID: RXENCHANSYNC lsb: 0  msb: 0 INPUT
			this->RXENMCOMMAALIGN_A0_B = RXENMCOMMAALIGN_A0_B; // net ID: RXENMCOMMAALIGN lsb: 0  msb: 0 INPUT
			this->RXENPCOMMAALIGN_A0_B = RXENPCOMMAALIGN_A0_B; // net ID: RXENPCOMMAALIGN lsb: 0  msb: 0 INPUT
			this->RXENPMAPHASEALIGN_A0_B = RXENPMAPHASEALIGN_A0_B; // net ID: RXENPMAPHASEALIGN lsb: 0  msb: 0 INPUT
			this->RXENPRBSTST_A2_B = RXENPRBSTST_A2_B; // net ID: RXENPRBSTST lsb: 0  msb: 2 INPUT
			this->RXENPRBSTST_A1_B = RXENPRBSTST_A1_B; // net ID: RXENPRBSTST lsb: 0  msb: 2 INPUT
			this->RXENPRBSTST_A0_B = RXENPRBSTST_A0_B; // net ID: RXENPRBSTST lsb: 0  msb: 2 INPUT
			this->RXENSAMPLEALIGN_A0_B = RXENSAMPLEALIGN_A0_B; // net ID: RXENSAMPLEALIGN lsb: 0  msb: 0 INPUT
			this->RXEQMIX_A9_B = RXEQMIX_A9_B; // net ID: RXEQMIX lsb: 0  msb: 9 INPUT
			this->RXEQMIX_A8_B = RXEQMIX_A8_B; // net ID: RXEQMIX lsb: 0  msb: 9 INPUT
			this->RXEQMIX_A7_B = RXEQMIX_A7_B; // net ID: RXEQMIX lsb: 0  msb: 9 INPUT
			this->RXEQMIX_A6_B = RXEQMIX_A6_B; // net ID: RXEQMIX lsb: 0  msb: 9 INPUT
			this->RXEQMIX_A5_B = RXEQMIX_A5_B; // net ID: RXEQMIX lsb: 0  msb: 9 INPUT
			this->RXEQMIX_A4_B = RXEQMIX_A4_B; // net ID: RXEQMIX lsb: 0  msb: 9 INPUT
			this->RXEQMIX_A3_B = RXEQMIX_A3_B; // net ID: RXEQMIX lsb: 0  msb: 9 INPUT
			this->RXEQMIX_A2_B = RXEQMIX_A2_B; // net ID: RXEQMIX lsb: 0  msb: 9 INPUT
			this->RXEQMIX_A1_B = RXEQMIX_A1_B; // net ID: RXEQMIX lsb: 0  msb: 9 INPUT
			this->RXEQMIX_A0_B = RXEQMIX_A0_B; // net ID: RXEQMIX lsb: 0  msb: 9 INPUT
			this->RXGEARBOXSLIP_A0_B = RXGEARBOXSLIP_A0_B; // net ID: RXGEARBOXSLIP lsb: 0  msb: 0 INPUT
			this->RXN_A0_B = RXN_A0_B; // net ID: RXN lsb: 0  msb: 0 INPUT
			this->RXP_A0_B = RXP_A0_B; // net ID: RXP lsb: 0  msb: 0 INPUT
			this->RXPLLLKDETEN_A0_B = RXPLLLKDETEN_A0_B; // net ID: RXPLLLKDETEN lsb: 0  msb: 0 INPUT
			this->RXPLLPOWERDOWN_A0_B = RXPLLPOWERDOWN_A0_B; // net ID: RXPLLPOWERDOWN lsb: 0  msb: 0 INPUT
			this->RXPLLREFSELDY_A2_B = RXPLLREFSELDY_A2_B; // net ID: RXPLLREFSELDY lsb: 0  msb: 2 INPUT
			this->RXPLLREFSELDY_A1_B = RXPLLREFSELDY_A1_B; // net ID: RXPLLREFSELDY lsb: 0  msb: 2 INPUT
			this->RXPLLREFSELDY_A0_B = RXPLLREFSELDY_A0_B; // net ID: RXPLLREFSELDY lsb: 0  msb: 2 INPUT
			this->RXPMASETPHASE_A0_B = RXPMASETPHASE_A0_B; // net ID: RXPMASETPHASE lsb: 0  msb: 0 INPUT
			this->RXPOLARITY_A0_B = RXPOLARITY_A0_B; // net ID: RXPOLARITY lsb: 0  msb: 0 INPUT
			this->RXPOWERDOWN_A1_B = RXPOWERDOWN_A1_B; // net ID: RXPOWERDOWN lsb: 0  msb: 1 INPUT
			this->RXPOWERDOWN_A0_B = RXPOWERDOWN_A0_B; // net ID: RXPOWERDOWN lsb: 0  msb: 1 INPUT
			this->RXRATE_A1_B = RXRATE_A1_B; // net ID: RXRATE lsb: 0  msb: 1 INPUT
			this->RXRATE_A0_B = RXRATE_A0_B; // net ID: RXRATE lsb: 0  msb: 1 INPUT
			this->RXRESET_A0_B = RXRESET_A0_B; // net ID: RXRESET lsb: 0  msb: 0 INPUT
			this->RXSLIDE_A0_B = RXSLIDE_A0_B; // net ID: RXSLIDE lsb: 0  msb: 0 INPUT
			this->RXUSRCLK_A0_B = RXUSRCLK_A0_B; // net ID: RXUSRCLK lsb: 0  msb: 0 INPUT
			this->RXUSRCLK2_A0_B = RXUSRCLK2_A0_B; // net ID: RXUSRCLK2 lsb: 0  msb: 0 INPUT
			this->SOUTHREFCLKRX_A1_B = SOUTHREFCLKRX_A1_B; // net ID: SOUTHREFCLKRX lsb: 0  msb: 1 INPUT
			this->SOUTHREFCLKRX_A0_B = SOUTHREFCLKRX_A0_B; // net ID: SOUTHREFCLKRX lsb: 0  msb: 1 INPUT
			this->SOUTHREFCLKTX_A1_B = SOUTHREFCLKTX_A1_B; // net ID: SOUTHREFCLKTX lsb: 0  msb: 1 INPUT
			this->SOUTHREFCLKTX_A0_B = SOUTHREFCLKTX_A0_B; // net ID: SOUTHREFCLKTX lsb: 0  msb: 1 INPUT
			this->TSTCLK0_A0_B = TSTCLK0_A0_B; // net ID: TSTCLK0 lsb: 0  msb: 0 INPUT
			this->TSTCLK1_A0_B = TSTCLK1_A0_B; // net ID: TSTCLK1 lsb: 0  msb: 0 INPUT
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
			this->TXBUFDIFFCTRL_A2_B = TXBUFDIFFCTRL_A2_B; // net ID: TXBUFDIFFCTRL lsb: 0  msb: 2 INPUT
			this->TXBUFDIFFCTRL_A1_B = TXBUFDIFFCTRL_A1_B; // net ID: TXBUFDIFFCTRL lsb: 0  msb: 2 INPUT
			this->TXBUFDIFFCTRL_A0_B = TXBUFDIFFCTRL_A0_B; // net ID: TXBUFDIFFCTRL lsb: 0  msb: 2 INPUT
			this->TXBYPASS8B10B_A3_B = TXBYPASS8B10B_A3_B; // net ID: TXBYPASS8B10B lsb: 0  msb: 3 INPUT
			this->TXBYPASS8B10B_A2_B = TXBYPASS8B10B_A2_B; // net ID: TXBYPASS8B10B lsb: 0  msb: 3 INPUT
			this->TXBYPASS8B10B_A1_B = TXBYPASS8B10B_A1_B; // net ID: TXBYPASS8B10B lsb: 0  msb: 3 INPUT
			this->TXBYPASS8B10B_A0_B = TXBYPASS8B10B_A0_B; // net ID: TXBYPASS8B10B lsb: 0  msb: 3 INPUT
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
			this->TXDLYALIGNDISABLE_A0_B = TXDLYALIGNDISABLE_A0_B; // net ID: TXDLYALIGNDISABLE lsb: 0  msb: 0 INPUT
			this->TXDLYALIGNMONENB_A0_B = TXDLYALIGNMONENB_A0_B; // net ID: TXDLYALIGNMONENB lsb: 0  msb: 0 INPUT
			this->TXDLYALIGNOVERRIDE_A0_B = TXDLYALIGNOVERRIDE_A0_B; // net ID: TXDLYALIGNOVERRIDE lsb: 0  msb: 0 INPUT
			this->TXDLYALIGNRESET_A0_B = TXDLYALIGNRESET_A0_B; // net ID: TXDLYALIGNRESET lsb: 0  msb: 0 INPUT
			this->TXDLYALIGNUPDSW_A0_B = TXDLYALIGNUPDSW_A0_B; // net ID: TXDLYALIGNUPDSW lsb: 0  msb: 0 INPUT
			this->TXELECIDLE_A0_B = TXELECIDLE_A0_B; // net ID: TXELECIDLE lsb: 0  msb: 0 INPUT
			this->TXENC8B10BUSE_A0_B = TXENC8B10BUSE_A0_B; // net ID: TXENC8B10BUSE lsb: 0  msb: 0 INPUT
			this->TXENPMAPHASEALIGN_A0_B = TXENPMAPHASEALIGN_A0_B; // net ID: TXENPMAPHASEALIGN lsb: 0  msb: 0 INPUT
			this->TXENPRBSTST_A2_B = TXENPRBSTST_A2_B; // net ID: TXENPRBSTST lsb: 0  msb: 2 INPUT
			this->TXENPRBSTST_A1_B = TXENPRBSTST_A1_B; // net ID: TXENPRBSTST lsb: 0  msb: 2 INPUT
			this->TXENPRBSTST_A0_B = TXENPRBSTST_A0_B; // net ID: TXENPRBSTST lsb: 0  msb: 2 INPUT
			this->TXHEADER_A2_B = TXHEADER_A2_B; // net ID: TXHEADER lsb: 0  msb: 2 INPUT
			this->TXHEADER_A1_B = TXHEADER_A1_B; // net ID: TXHEADER lsb: 0  msb: 2 INPUT
			this->TXHEADER_A0_B = TXHEADER_A0_B; // net ID: TXHEADER lsb: 0  msb: 2 INPUT
			this->TXINHIBIT_A0_B = TXINHIBIT_A0_B; // net ID: TXINHIBIT lsb: 0  msb: 0 INPUT
			this->TXMARGIN_A2_B = TXMARGIN_A2_B; // net ID: TXMARGIN lsb: 0  msb: 2 INPUT
			this->TXMARGIN_A1_B = TXMARGIN_A1_B; // net ID: TXMARGIN lsb: 0  msb: 2 INPUT
			this->TXMARGIN_A0_B = TXMARGIN_A0_B; // net ID: TXMARGIN lsb: 0  msb: 2 INPUT
			this->TXPDOWNASYNCH_A0_B = TXPDOWNASYNCH_A0_B; // net ID: TXPDOWNASYNCH lsb: 0  msb: 0 INPUT
			this->TXPLLLKDETEN_A0_B = TXPLLLKDETEN_A0_B; // net ID: TXPLLLKDETEN lsb: 0  msb: 0 INPUT
			this->TXPLLPOWERDOWN_A0_B = TXPLLPOWERDOWN_A0_B; // net ID: TXPLLPOWERDOWN lsb: 0  msb: 0 INPUT
			this->TXPLLREFSELDY_A2_B = TXPLLREFSELDY_A2_B; // net ID: TXPLLREFSELDY lsb: 0  msb: 2 INPUT
			this->TXPLLREFSELDY_A1_B = TXPLLREFSELDY_A1_B; // net ID: TXPLLREFSELDY lsb: 0  msb: 2 INPUT
			this->TXPLLREFSELDY_A0_B = TXPLLREFSELDY_A0_B; // net ID: TXPLLREFSELDY lsb: 0  msb: 2 INPUT
			this->TXPMASETPHASE_A0_B = TXPMASETPHASE_A0_B; // net ID: TXPMASETPHASE lsb: 0  msb: 0 INPUT
			this->TXPOLARITY_A0_B = TXPOLARITY_A0_B; // net ID: TXPOLARITY lsb: 0  msb: 0 INPUT
			this->TXPOSTEMPHASIS_A4_B = TXPOSTEMPHASIS_A4_B; // net ID: TXPOSTEMPHASIS lsb: 0  msb: 4 INPUT
			this->TXPOSTEMPHASIS_A3_B = TXPOSTEMPHASIS_A3_B; // net ID: TXPOSTEMPHASIS lsb: 0  msb: 4 INPUT
			this->TXPOSTEMPHASIS_A2_B = TXPOSTEMPHASIS_A2_B; // net ID: TXPOSTEMPHASIS lsb: 0  msb: 4 INPUT
			this->TXPOSTEMPHASIS_A1_B = TXPOSTEMPHASIS_A1_B; // net ID: TXPOSTEMPHASIS lsb: 0  msb: 4 INPUT
			this->TXPOSTEMPHASIS_A0_B = TXPOSTEMPHASIS_A0_B; // net ID: TXPOSTEMPHASIS lsb: 0  msb: 4 INPUT
			this->TXPOWERDOWN_A1_B = TXPOWERDOWN_A1_B; // net ID: TXPOWERDOWN lsb: 0  msb: 1 INPUT
			this->TXPOWERDOWN_A0_B = TXPOWERDOWN_A0_B; // net ID: TXPOWERDOWN lsb: 0  msb: 1 INPUT
			this->TXPRBSFORCEERR_A0_B = TXPRBSFORCEERR_A0_B; // net ID: TXPRBSFORCEERR lsb: 0  msb: 0 INPUT
			this->TXPREEMPHASIS_A3_B = TXPREEMPHASIS_A3_B; // net ID: TXPREEMPHASIS lsb: 0  msb: 3 INPUT
			this->TXPREEMPHASIS_A2_B = TXPREEMPHASIS_A2_B; // net ID: TXPREEMPHASIS lsb: 0  msb: 3 INPUT
			this->TXPREEMPHASIS_A1_B = TXPREEMPHASIS_A1_B; // net ID: TXPREEMPHASIS lsb: 0  msb: 3 INPUT
			this->TXPREEMPHASIS_A0_B = TXPREEMPHASIS_A0_B; // net ID: TXPREEMPHASIS lsb: 0  msb: 3 INPUT
			this->TXRATE_A1_B = TXRATE_A1_B; // net ID: TXRATE lsb: 0  msb: 1 INPUT
			this->TXRATE_A0_B = TXRATE_A0_B; // net ID: TXRATE lsb: 0  msb: 1 INPUT
			this->TXRESET_A0_B = TXRESET_A0_B; // net ID: TXRESET lsb: 0  msb: 0 INPUT
			this->TXSEQUENCE_A6_B = TXSEQUENCE_A6_B; // net ID: TXSEQUENCE lsb: 0  msb: 6 INPUT
			this->TXSEQUENCE_A5_B = TXSEQUENCE_A5_B; // net ID: TXSEQUENCE lsb: 0  msb: 6 INPUT
			this->TXSEQUENCE_A4_B = TXSEQUENCE_A4_B; // net ID: TXSEQUENCE lsb: 0  msb: 6 INPUT
			this->TXSEQUENCE_A3_B = TXSEQUENCE_A3_B; // net ID: TXSEQUENCE lsb: 0  msb: 6 INPUT
			this->TXSEQUENCE_A2_B = TXSEQUENCE_A2_B; // net ID: TXSEQUENCE lsb: 0  msb: 6 INPUT
			this->TXSEQUENCE_A1_B = TXSEQUENCE_A1_B; // net ID: TXSEQUENCE lsb: 0  msb: 6 INPUT
			this->TXSEQUENCE_A0_B = TXSEQUENCE_A0_B; // net ID: TXSEQUENCE lsb: 0  msb: 6 INPUT
			this->TXSTARTSEQ_A0_B = TXSTARTSEQ_A0_B; // net ID: TXSTARTSEQ lsb: 0  msb: 0 INPUT
			this->TXSWING_A0_B = TXSWING_A0_B; // net ID: TXSWING lsb: 0  msb: 0 INPUT
			this->TXUSRCLK_A0_B = TXUSRCLK_A0_B; // net ID: TXUSRCLK lsb: 0  msb: 0 INPUT
			this->TXUSRCLK2_A0_B = TXUSRCLK2_A0_B; // net ID: TXUSRCLK2 lsb: 0  msb: 0 INPUT
			this->USRCODEERR_A0_B = USRCODEERR_A0_B; // net ID: USRCODEERR lsb: 0  msb: 0 INPUT
			
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
#endif // X_GTXE1_H
