/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_GT11_H
#define X_GT11_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_GT11: public Primitive{

		//Verilog Parameters:
		parameter_string_t LOC;
		parameter_enum_t BANDGAPSEL;
		parameter_enum_t BIASRESSEL;
		parameter_enum_t CCCB_ARBITRATOR_DISABLE;
		parameter_string_t CHAN_BOND_MODE;
		parameter_enum_t CHAN_BOND_ONE_SHOT;
		parameter_int_t CHAN_BOND_SEQ_1_1;
		parameter_int_t CHAN_BOND_SEQ_1_2;
		parameter_int_t CHAN_BOND_SEQ_1_3;
		parameter_int_t CHAN_BOND_SEQ_1_4;
		parameter_int_t CHAN_BOND_SEQ_1_MASK;
		parameter_int_t CHAN_BOND_SEQ_2_1;
		parameter_int_t CHAN_BOND_SEQ_2_2;
		parameter_int_t CHAN_BOND_SEQ_2_3;
		parameter_int_t CHAN_BOND_SEQ_2_4;
		parameter_int_t CHAN_BOND_SEQ_2_MASK;
		parameter_enum_t CHAN_BOND_SEQ_2_USE;
		parameter_enum_t CLK_CORRECT_USE;
		parameter_enum_t CLK_COR_8B10B_DE;
		parameter_int_t CLK_COR_SEQ_1_1;
		parameter_int_t CLK_COR_SEQ_1_2;
		parameter_int_t CLK_COR_SEQ_1_3;
		parameter_int_t CLK_COR_SEQ_1_4;
		parameter_int_t CLK_COR_SEQ_1_MASK;
		parameter_int_t CLK_COR_SEQ_2_1;
		parameter_int_t CLK_COR_SEQ_2_2;
		parameter_int_t CLK_COR_SEQ_2_3;
		parameter_int_t CLK_COR_SEQ_2_4;
		parameter_int_t CLK_COR_SEQ_2_MASK;
		parameter_enum_t CLK_COR_SEQ_2_USE;
		parameter_enum_t CLK_COR_SEQ_DROP;
		parameter_enum_t COMMA32;
		parameter_int_t COMMA_10B_MASK;
		parameter_int_t CYCLE_LIMIT_SEL;
		parameter_int_t DCDR_FILTER;
		parameter_enum_t DEC_MCOMMA_DETECT;
		parameter_enum_t DEC_PCOMMA_DETECT;
		parameter_enum_t DEC_VALID_COMMA_ONLY;
		parameter_int_t DIGRX_FWDCLK;
		parameter_enum_t DIGRX_SYNC_MODE;
		parameter_enum_t ENABLE_DCDR;
		parameter_int_t FDET_HYS_CAL;
		parameter_int_t FDET_HYS_SEL;
		parameter_int_t FDET_LCK_CAL;
		parameter_int_t FDET_LCK_SEL;
		parameter_string_t GT11_MODE;
		parameter_int_t IREFBIASMODE;
		parameter_int_t LOOPCAL_WAIT;
		parameter_int_t MCOMMA_32B_VALUE;
		parameter_enum_t MCOMMA_DETECT;
		parameter_enum_t OPPOSITE_SELECT;
		parameter_int_t PCOMMA_32B_VALUE;
		parameter_enum_t PCOMMA_DETECT;
		parameter_enum_t PCS_BIT_SLIP;
		parameter_enum_t PMACLKENABLE;
		parameter_enum_t PMACOREPWRENABLE;
		parameter_int_t PMAIREFTRIM;
		parameter_int_t PMAVBGCTRL;
		parameter_int_t PMAVREFTRIM;
		parameter_enum_t PMA_BIT_SLIP;
		parameter_enum_t POWER_ENABLE;
		parameter_enum_t REPEATER;
		parameter_enum_t RXACTST;
		parameter_int_t RXAFEEQ;
		parameter_enum_t RXAFEPD;
		parameter_enum_t RXAFETST;
		parameter_enum_t RXAPD;
		parameter_int_t RXAREGCTRL;
		parameter_int_t RXASYNCDIVIDE;
		parameter_enum_t RXBY_32;
		parameter_int_t RXCDRLOS;
		parameter_enum_t RXCLK0_FORCE_PMACLK;
		parameter_int_t RXCLKMODE;
		parameter_int_t RXCLMODE;
		parameter_int_t RXCMADJ;
		parameter_enum_t RXCPSEL;
		parameter_enum_t RXCPTST;
		parameter_enum_t RXCRCCLOCKDOUBLE;
		parameter_enum_t RXCRCENABLE;
		parameter_int_t RXCRCINITVAL;
		parameter_enum_t RXCRCINVERTGEN;
		parameter_enum_t RXCRCSAMECLOCK;
		parameter_int_t RXCTRL1;
		parameter_int_t RXCYCLE_LIMIT_SEL;
		parameter_int_t RXDATA_SEL;
		parameter_enum_t RXDCCOUPLE;
		parameter_enum_t RXDIGRESET;
		parameter_enum_t RXDIGRX;
		parameter_int_t RXEQ;
		parameter_string_t RXFDCAL_CLOCK_DIVIDE;
		parameter_int_t RXFDET_HYS_CAL;
		parameter_int_t RXFDET_HYS_SEL;
		parameter_int_t RXFDET_LCK_CAL;
		parameter_int_t RXFDET_LCK_SEL;
		parameter_int_t RXFECONTROL1;
		parameter_int_t RXFECONTROL2;
		parameter_int_t RXFETUNE;
		parameter_enum_t RXLB;
		parameter_int_t RXLKADJ;
		parameter_enum_t RXLKAPD;
		parameter_int_t RXLOOPCAL_WAIT;
		parameter_int_t RXLOOPFILT;
		parameter_int_t RXMODE;
		parameter_enum_t RXPD;
		parameter_enum_t RXPDDTST;
		parameter_string_t RXPMACLKSEL;
		parameter_int_t RXRCPADJ;
		parameter_enum_t RXRCPPD;
		parameter_enum_t RXRECCLK1_USE_SYNC;
		parameter_int_t RXRIBADJ;
		parameter_enum_t RXRPDPD;
		parameter_enum_t RXRSDPD;
		parameter_int_t RXSLOWDOWN_CAL;
		parameter_int_t RXTUNE;
		parameter_int_t RXVCODAC_INIT;
		parameter_enum_t RXVCO_CTRL_ENABLE;
		parameter_enum_t RX_BUFFER_USE;
		parameter_int_t RX_CLOCK_DIVIDER;
		parameter_enum_t SAMPLE_8X;
		parameter_int_t SLOWDOWN_CAL;
		parameter_string_t TXABPMACLKSEL;
		parameter_enum_t TXAPD;
		parameter_enum_t TXAREFBIASSEL;
		parameter_int_t TXASYNCDIVIDE;
		parameter_enum_t TXCLK0_FORCE_PMACLK;
		parameter_int_t TXCLKMODE;
		parameter_int_t TXCLMODE;
		parameter_enum_t TXCPSEL;
		parameter_enum_t TXCRCCLOCKDOUBLE;
		parameter_enum_t TXCRCENABLE;
		parameter_int_t TXCRCINITVAL;
		parameter_enum_t TXCRCINVERTGEN;
		parameter_enum_t TXCRCSAMECLOCK;
		parameter_int_t TXCTRL1;
		parameter_int_t TXDATA_SEL;
		parameter_int_t TXDAT_PRDRV_DAC;
		parameter_int_t TXDAT_TAP_DAC;
		parameter_enum_t TXDIGPD;
		parameter_string_t TXFDCAL_CLOCK_DIVIDE;
		parameter_enum_t TXHIGHSIGNALEN;
		parameter_int_t TXLOOPFILT;
		parameter_enum_t TXLVLSHFTPD;
		parameter_enum_t TXOUTCLK1_USE_SYNC;
		parameter_enum_t TXPD;
		parameter_enum_t TXPHASESEL;
		parameter_int_t TXPOST_PRDRV_DAC;
		parameter_int_t TXPOST_TAP_DAC;
		parameter_enum_t TXPOST_TAP_PD;
		parameter_int_t TXPRE_PRDRV_DAC;
		parameter_int_t TXPRE_TAP_DAC;
		parameter_enum_t TXPRE_TAP_PD;
		parameter_enum_t TXSLEWRATE;
		parameter_int_t TXTERMTRIM;
		parameter_int_t TXTUNE;
		parameter_enum_t TX_BUFFER_USE;
		parameter_int_t TX_CLOCK_DIVIDER;
		parameter_int_t VCODAC_INIT;
		parameter_enum_t VCO_CTRL_ENABLE;
		parameter_int_t VREFBIASMODE;
		parameter_int_t ALIGN_COMMA_WORD;
		parameter_int_t CHAN_BOND_LIMIT;
		parameter_int_t CHAN_BOND_SEQ_LEN;
		parameter_int_t CLK_COR_MAX_LAT;
		parameter_int_t CLK_COR_MIN_LAT;
		parameter_int_t CLK_COR_SEQ_LEN;
		parameter_int_t RXOUTDIV2SEL;
		parameter_int_t RXPLLNDIVSEL;
		parameter_int_t RXUSRDIVISOR;
		parameter_int_t SH_CNT_MAX;
		parameter_int_t SH_INVALID_CNT_MAX;
		parameter_int_t TXOUTDIV2SEL;
		parameter_int_t TXPLLNDIVSEL;
		//Verilog Ports in definition order:
		NetFlow* CHBONDO_A4_B; // net ID: CHBONDO lsb: 0  msb: 4 OUTPUT
		NetFlow* CHBONDO_A3_B; // net ID: CHBONDO lsb: 0  msb: 4 OUTPUT
		NetFlow* CHBONDO_A2_B; // net ID: CHBONDO lsb: 0  msb: 4 OUTPUT
		NetFlow* CHBONDO_A1_B; // net ID: CHBONDO lsb: 0  msb: 4 OUTPUT
		NetFlow* CHBONDO_A0_B; // net ID: CHBONDO lsb: 0  msb: 4 OUTPUT
		NetFlow* COMBUSOUT_A15_B; // net ID: COMBUSOUT lsb: 0  msb: 15 OUTPUT
		NetFlow* COMBUSOUT_A14_B; // net ID: COMBUSOUT lsb: 0  msb: 15 OUTPUT
		NetFlow* COMBUSOUT_A13_B; // net ID: COMBUSOUT lsb: 0  msb: 15 OUTPUT
		NetFlow* COMBUSOUT_A12_B; // net ID: COMBUSOUT lsb: 0  msb: 15 OUTPUT
		NetFlow* COMBUSOUT_A11_B; // net ID: COMBUSOUT lsb: 0  msb: 15 OUTPUT
		NetFlow* COMBUSOUT_A10_B; // net ID: COMBUSOUT lsb: 0  msb: 15 OUTPUT
		NetFlow* COMBUSOUT_A9_B; // net ID: COMBUSOUT lsb: 0  msb: 15 OUTPUT
		NetFlow* COMBUSOUT_A8_B; // net ID: COMBUSOUT lsb: 0  msb: 15 OUTPUT
		NetFlow* COMBUSOUT_A7_B; // net ID: COMBUSOUT lsb: 0  msb: 15 OUTPUT
		NetFlow* COMBUSOUT_A6_B; // net ID: COMBUSOUT lsb: 0  msb: 15 OUTPUT
		NetFlow* COMBUSOUT_A5_B; // net ID: COMBUSOUT lsb: 0  msb: 15 OUTPUT
		NetFlow* COMBUSOUT_A4_B; // net ID: COMBUSOUT lsb: 0  msb: 15 OUTPUT
		NetFlow* COMBUSOUT_A3_B; // net ID: COMBUSOUT lsb: 0  msb: 15 OUTPUT
		NetFlow* COMBUSOUT_A2_B; // net ID: COMBUSOUT lsb: 0  msb: 15 OUTPUT
		NetFlow* COMBUSOUT_A1_B; // net ID: COMBUSOUT lsb: 0  msb: 15 OUTPUT
		NetFlow* COMBUSOUT_A0_B; // net ID: COMBUSOUT lsb: 0  msb: 15 OUTPUT
		NetFlow* DO_A15_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
		NetFlow* DO_A14_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
		NetFlow* DO_A13_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
		NetFlow* DO_A12_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
		NetFlow* DO_A11_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
		NetFlow* DO_A10_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
		NetFlow* DO_A9_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
		NetFlow* DO_A8_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
		NetFlow* DO_A7_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
		NetFlow* DO_A6_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
		NetFlow* DO_A5_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
		NetFlow* DO_A4_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
		NetFlow* DO_A3_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
		NetFlow* DO_A2_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
		NetFlow* DO_A1_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
		NetFlow* DO_A0_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
		NetFlow* DRDY_A0_B; // net ID: DRDY lsb: 0  msb: 0 OUTPUT
		NetFlow* RXBUFERR_A0_B; // net ID: RXBUFERR lsb: 0  msb: 0 OUTPUT
		NetFlow* RXCALFAIL_A0_B; // net ID: RXCALFAIL lsb: 0  msb: 0 OUTPUT
		NetFlow* RXCHARISCOMMA_A7_B; // net ID: RXCHARISCOMMA lsb: 0  msb: 7 OUTPUT
		NetFlow* RXCHARISCOMMA_A6_B; // net ID: RXCHARISCOMMA lsb: 0  msb: 7 OUTPUT
		NetFlow* RXCHARISCOMMA_A5_B; // net ID: RXCHARISCOMMA lsb: 0  msb: 7 OUTPUT
		NetFlow* RXCHARISCOMMA_A4_B; // net ID: RXCHARISCOMMA lsb: 0  msb: 7 OUTPUT
		NetFlow* RXCHARISCOMMA_A3_B; // net ID: RXCHARISCOMMA lsb: 0  msb: 7 OUTPUT
		NetFlow* RXCHARISCOMMA_A2_B; // net ID: RXCHARISCOMMA lsb: 0  msb: 7 OUTPUT
		NetFlow* RXCHARISCOMMA_A1_B; // net ID: RXCHARISCOMMA lsb: 0  msb: 7 OUTPUT
		NetFlow* RXCHARISCOMMA_A0_B; // net ID: RXCHARISCOMMA lsb: 0  msb: 7 OUTPUT
		NetFlow* RXCHARISK_A7_B; // net ID: RXCHARISK lsb: 0  msb: 7 OUTPUT
		NetFlow* RXCHARISK_A6_B; // net ID: RXCHARISK lsb: 0  msb: 7 OUTPUT
		NetFlow* RXCHARISK_A5_B; // net ID: RXCHARISK lsb: 0  msb: 7 OUTPUT
		NetFlow* RXCHARISK_A4_B; // net ID: RXCHARISK lsb: 0  msb: 7 OUTPUT
		NetFlow* RXCHARISK_A3_B; // net ID: RXCHARISK lsb: 0  msb: 7 OUTPUT
		NetFlow* RXCHARISK_A2_B; // net ID: RXCHARISK lsb: 0  msb: 7 OUTPUT
		NetFlow* RXCHARISK_A1_B; // net ID: RXCHARISK lsb: 0  msb: 7 OUTPUT
		NetFlow* RXCHARISK_A0_B; // net ID: RXCHARISK lsb: 0  msb: 7 OUTPUT
		NetFlow* RXCOMMADET_A0_B; // net ID: RXCOMMADET lsb: 0  msb: 0 OUTPUT
		NetFlow* RXCRCOUT_A31_B; // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* RXCRCOUT_A30_B; // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* RXCRCOUT_A29_B; // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* RXCRCOUT_A28_B; // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* RXCRCOUT_A27_B; // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* RXCRCOUT_A26_B; // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* RXCRCOUT_A25_B; // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* RXCRCOUT_A24_B; // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* RXCRCOUT_A23_B; // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* RXCRCOUT_A22_B; // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* RXCRCOUT_A21_B; // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* RXCRCOUT_A20_B; // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* RXCRCOUT_A19_B; // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* RXCRCOUT_A18_B; // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* RXCRCOUT_A17_B; // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* RXCRCOUT_A16_B; // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* RXCRCOUT_A15_B; // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* RXCRCOUT_A14_B; // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* RXCRCOUT_A13_B; // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* RXCRCOUT_A12_B; // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* RXCRCOUT_A11_B; // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* RXCRCOUT_A10_B; // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* RXCRCOUT_A9_B; // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* RXCRCOUT_A8_B; // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* RXCRCOUT_A7_B; // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* RXCRCOUT_A6_B; // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* RXCRCOUT_A5_B; // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* RXCRCOUT_A4_B; // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* RXCRCOUT_A3_B; // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* RXCRCOUT_A2_B; // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* RXCRCOUT_A1_B; // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* RXCRCOUT_A0_B; // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* RXCYCLELIMIT_A0_B; // net ID: RXCYCLELIMIT lsb: 0  msb: 0 OUTPUT
		NetFlow* RXDATA_A63_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA_A62_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA_A61_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA_A60_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA_A59_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA_A58_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA_A57_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA_A56_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA_A55_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA_A54_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA_A53_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA_A52_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA_A51_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA_A50_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA_A49_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA_A48_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA_A47_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA_A46_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA_A45_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA_A44_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA_A43_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA_A42_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA_A41_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA_A40_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA_A39_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA_A38_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA_A37_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA_A36_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA_A35_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA_A34_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA_A33_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA_A32_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA_A31_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA_A30_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA_A29_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA_A28_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA_A27_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA_A26_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA_A25_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA_A24_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA_A23_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA_A22_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA_A21_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA_A20_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA_A19_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA_A18_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA_A17_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA_A16_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA_A15_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA_A14_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA_A13_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA_A12_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA_A11_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA_A10_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA_A9_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA_A8_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA_A7_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA_A6_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA_A5_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA_A4_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA_A3_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA_A2_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA_A1_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDATA_A0_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
		NetFlow* RXDISPERR_A7_B; // net ID: RXDISPERR lsb: 0  msb: 7 OUTPUT
		NetFlow* RXDISPERR_A6_B; // net ID: RXDISPERR lsb: 0  msb: 7 OUTPUT
		NetFlow* RXDISPERR_A5_B; // net ID: RXDISPERR lsb: 0  msb: 7 OUTPUT
		NetFlow* RXDISPERR_A4_B; // net ID: RXDISPERR lsb: 0  msb: 7 OUTPUT
		NetFlow* RXDISPERR_A3_B; // net ID: RXDISPERR lsb: 0  msb: 7 OUTPUT
		NetFlow* RXDISPERR_A2_B; // net ID: RXDISPERR lsb: 0  msb: 7 OUTPUT
		NetFlow* RXDISPERR_A1_B; // net ID: RXDISPERR lsb: 0  msb: 7 OUTPUT
		NetFlow* RXDISPERR_A0_B; // net ID: RXDISPERR lsb: 0  msb: 7 OUTPUT
		NetFlow* RXLOCK_A0_B; // net ID: RXLOCK lsb: 0  msb: 0 OUTPUT
		NetFlow* RXLOSSOFSYNC_A1_B; // net ID: RXLOSSOFSYNC lsb: 0  msb: 1 OUTPUT
		NetFlow* RXLOSSOFSYNC_A0_B; // net ID: RXLOSSOFSYNC lsb: 0  msb: 1 OUTPUT
		NetFlow* RXMCLK_A0_B; // net ID: RXMCLK lsb: 0  msb: 0 OUTPUT
		NetFlow* RXNOTINTABLE_A7_B; // net ID: RXNOTINTABLE lsb: 0  msb: 7 OUTPUT
		NetFlow* RXNOTINTABLE_A6_B; // net ID: RXNOTINTABLE lsb: 0  msb: 7 OUTPUT
		NetFlow* RXNOTINTABLE_A5_B; // net ID: RXNOTINTABLE lsb: 0  msb: 7 OUTPUT
		NetFlow* RXNOTINTABLE_A4_B; // net ID: RXNOTINTABLE lsb: 0  msb: 7 OUTPUT
		NetFlow* RXNOTINTABLE_A3_B; // net ID: RXNOTINTABLE lsb: 0  msb: 7 OUTPUT
		NetFlow* RXNOTINTABLE_A2_B; // net ID: RXNOTINTABLE lsb: 0  msb: 7 OUTPUT
		NetFlow* RXNOTINTABLE_A1_B; // net ID: RXNOTINTABLE lsb: 0  msb: 7 OUTPUT
		NetFlow* RXNOTINTABLE_A0_B; // net ID: RXNOTINTABLE lsb: 0  msb: 7 OUTPUT
		NetFlow* RXPCSHCLKOUT_A0_B; // net ID: RXPCSHCLKOUT lsb: 0  msb: 0 OUTPUT
		NetFlow* RXREALIGN_A0_B; // net ID: RXREALIGN lsb: 0  msb: 0 OUTPUT
		NetFlow* RXRECCLK1_A0_B; // net ID: RXRECCLK1 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXRECCLK2_A0_B; // net ID: RXRECCLK2 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXRUNDISP_A7_B; // net ID: RXRUNDISP lsb: 0  msb: 7 OUTPUT
		NetFlow* RXRUNDISP_A6_B; // net ID: RXRUNDISP lsb: 0  msb: 7 OUTPUT
		NetFlow* RXRUNDISP_A5_B; // net ID: RXRUNDISP lsb: 0  msb: 7 OUTPUT
		NetFlow* RXRUNDISP_A4_B; // net ID: RXRUNDISP lsb: 0  msb: 7 OUTPUT
		NetFlow* RXRUNDISP_A3_B; // net ID: RXRUNDISP lsb: 0  msb: 7 OUTPUT
		NetFlow* RXRUNDISP_A2_B; // net ID: RXRUNDISP lsb: 0  msb: 7 OUTPUT
		NetFlow* RXRUNDISP_A1_B; // net ID: RXRUNDISP lsb: 0  msb: 7 OUTPUT
		NetFlow* RXRUNDISP_A0_B; // net ID: RXRUNDISP lsb: 0  msb: 7 OUTPUT
		NetFlow* RXSIGDET_A0_B; // net ID: RXSIGDET lsb: 0  msb: 0 OUTPUT
		NetFlow* RXSTATUS_A5_B; // net ID: RXSTATUS lsb: 0  msb: 5 OUTPUT
		NetFlow* RXSTATUS_A4_B; // net ID: RXSTATUS lsb: 0  msb: 5 OUTPUT
		NetFlow* RXSTATUS_A3_B; // net ID: RXSTATUS lsb: 0  msb: 5 OUTPUT
		NetFlow* RXSTATUS_A2_B; // net ID: RXSTATUS lsb: 0  msb: 5 OUTPUT
		NetFlow* RXSTATUS_A1_B; // net ID: RXSTATUS lsb: 0  msb: 5 OUTPUT
		NetFlow* RXSTATUS_A0_B; // net ID: RXSTATUS lsb: 0  msb: 5 OUTPUT
		NetFlow* TX1N_A0_B; // net ID: TX1N lsb: 0  msb: 0 OUTPUT
		NetFlow* TX1P_A0_B; // net ID: TX1P lsb: 0  msb: 0 OUTPUT
		NetFlow* TXBUFERR_A0_B; // net ID: TXBUFERR lsb: 0  msb: 0 OUTPUT
		NetFlow* TXCALFAIL_A0_B; // net ID: TXCALFAIL lsb: 0  msb: 0 OUTPUT
		NetFlow* TXCRCOUT_A31_B; // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* TXCRCOUT_A30_B; // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* TXCRCOUT_A29_B; // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* TXCRCOUT_A28_B; // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* TXCRCOUT_A27_B; // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* TXCRCOUT_A26_B; // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* TXCRCOUT_A25_B; // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* TXCRCOUT_A24_B; // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* TXCRCOUT_A23_B; // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* TXCRCOUT_A22_B; // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* TXCRCOUT_A21_B; // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* TXCRCOUT_A20_B; // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* TXCRCOUT_A19_B; // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* TXCRCOUT_A18_B; // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* TXCRCOUT_A17_B; // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* TXCRCOUT_A16_B; // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* TXCRCOUT_A15_B; // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* TXCRCOUT_A14_B; // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* TXCRCOUT_A13_B; // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* TXCRCOUT_A12_B; // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* TXCRCOUT_A11_B; // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* TXCRCOUT_A10_B; // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* TXCRCOUT_A9_B; // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* TXCRCOUT_A8_B; // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* TXCRCOUT_A7_B; // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* TXCRCOUT_A6_B; // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* TXCRCOUT_A5_B; // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* TXCRCOUT_A4_B; // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* TXCRCOUT_A3_B; // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* TXCRCOUT_A2_B; // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* TXCRCOUT_A1_B; // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* TXCRCOUT_A0_B; // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
		NetFlow* TXCYCLELIMIT_A0_B; // net ID: TXCYCLELIMIT lsb: 0  msb: 0 OUTPUT
		NetFlow* TXKERR_A7_B; // net ID: TXKERR lsb: 0  msb: 7 OUTPUT
		NetFlow* TXKERR_A6_B; // net ID: TXKERR lsb: 0  msb: 7 OUTPUT
		NetFlow* TXKERR_A5_B; // net ID: TXKERR lsb: 0  msb: 7 OUTPUT
		NetFlow* TXKERR_A4_B; // net ID: TXKERR lsb: 0  msb: 7 OUTPUT
		NetFlow* TXKERR_A3_B; // net ID: TXKERR lsb: 0  msb: 7 OUTPUT
		NetFlow* TXKERR_A2_B; // net ID: TXKERR lsb: 0  msb: 7 OUTPUT
		NetFlow* TXKERR_A1_B; // net ID: TXKERR lsb: 0  msb: 7 OUTPUT
		NetFlow* TXKERR_A0_B; // net ID: TXKERR lsb: 0  msb: 7 OUTPUT
		NetFlow* TXLOCK_A0_B; // net ID: TXLOCK lsb: 0  msb: 0 OUTPUT
		NetFlow* TXOUTCLK1_A0_B; // net ID: TXOUTCLK1 lsb: 0  msb: 0 OUTPUT
		NetFlow* TXOUTCLK2_A0_B; // net ID: TXOUTCLK2 lsb: 0  msb: 0 OUTPUT
		NetFlow* TXPCSHCLKOUT_A0_B; // net ID: TXPCSHCLKOUT lsb: 0  msb: 0 OUTPUT
		NetFlow* TXRUNDISP_A7_B; // net ID: TXRUNDISP lsb: 0  msb: 7 OUTPUT
		NetFlow* TXRUNDISP_A6_B; // net ID: TXRUNDISP lsb: 0  msb: 7 OUTPUT
		NetFlow* TXRUNDISP_A5_B; // net ID: TXRUNDISP lsb: 0  msb: 7 OUTPUT
		NetFlow* TXRUNDISP_A4_B; // net ID: TXRUNDISP lsb: 0  msb: 7 OUTPUT
		NetFlow* TXRUNDISP_A3_B; // net ID: TXRUNDISP lsb: 0  msb: 7 OUTPUT
		NetFlow* TXRUNDISP_A2_B; // net ID: TXRUNDISP lsb: 0  msb: 7 OUTPUT
		NetFlow* TXRUNDISP_A1_B; // net ID: TXRUNDISP lsb: 0  msb: 7 OUTPUT
		NetFlow* TXRUNDISP_A0_B; // net ID: TXRUNDISP lsb: 0  msb: 7 OUTPUT
		NetFlow* CHBONDI_A4_B; // net ID: CHBONDI lsb: 0  msb: 4 INPUT
		NetFlow* CHBONDI_A3_B; // net ID: CHBONDI lsb: 0  msb: 4 INPUT
		NetFlow* CHBONDI_A2_B; // net ID: CHBONDI lsb: 0  msb: 4 INPUT
		NetFlow* CHBONDI_A1_B; // net ID: CHBONDI lsb: 0  msb: 4 INPUT
		NetFlow* CHBONDI_A0_B; // net ID: CHBONDI lsb: 0  msb: 4 INPUT
		NetFlow* COMBUSIN_A15_B; // net ID: COMBUSIN lsb: 0  msb: 15 INPUT
		NetFlow* COMBUSIN_A14_B; // net ID: COMBUSIN lsb: 0  msb: 15 INPUT
		NetFlow* COMBUSIN_A13_B; // net ID: COMBUSIN lsb: 0  msb: 15 INPUT
		NetFlow* COMBUSIN_A12_B; // net ID: COMBUSIN lsb: 0  msb: 15 INPUT
		NetFlow* COMBUSIN_A11_B; // net ID: COMBUSIN lsb: 0  msb: 15 INPUT
		NetFlow* COMBUSIN_A10_B; // net ID: COMBUSIN lsb: 0  msb: 15 INPUT
		NetFlow* COMBUSIN_A9_B; // net ID: COMBUSIN lsb: 0  msb: 15 INPUT
		NetFlow* COMBUSIN_A8_B; // net ID: COMBUSIN lsb: 0  msb: 15 INPUT
		NetFlow* COMBUSIN_A7_B; // net ID: COMBUSIN lsb: 0  msb: 15 INPUT
		NetFlow* COMBUSIN_A6_B; // net ID: COMBUSIN lsb: 0  msb: 15 INPUT
		NetFlow* COMBUSIN_A5_B; // net ID: COMBUSIN lsb: 0  msb: 15 INPUT
		NetFlow* COMBUSIN_A4_B; // net ID: COMBUSIN lsb: 0  msb: 15 INPUT
		NetFlow* COMBUSIN_A3_B; // net ID: COMBUSIN lsb: 0  msb: 15 INPUT
		NetFlow* COMBUSIN_A2_B; // net ID: COMBUSIN lsb: 0  msb: 15 INPUT
		NetFlow* COMBUSIN_A1_B; // net ID: COMBUSIN lsb: 0  msb: 15 INPUT
		NetFlow* COMBUSIN_A0_B; // net ID: COMBUSIN lsb: 0  msb: 15 INPUT
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
		NetFlow* ENCHANSYNC_A0_B; // net ID: ENCHANSYNC lsb: 0  msb: 0 INPUT
		NetFlow* ENMCOMMAALIGN_A0_B; // net ID: ENMCOMMAALIGN lsb: 0  msb: 0 INPUT
		NetFlow* ENPCOMMAALIGN_A0_B; // net ID: ENPCOMMAALIGN lsb: 0  msb: 0 INPUT
		NetFlow* GREFCLK_A0_B; // net ID: GREFCLK lsb: 0  msb: 0 INPUT
		NetFlow* LOOPBACK_A1_B; // net ID: LOOPBACK lsb: 0  msb: 1 INPUT
		NetFlow* LOOPBACK_A0_B; // net ID: LOOPBACK lsb: 0  msb: 1 INPUT
		NetFlow* POWERDOWN_A0_B; // net ID: POWERDOWN lsb: 0  msb: 0 INPUT
		NetFlow* REFCLK1_A0_B; // net ID: REFCLK1 lsb: 0  msb: 0 INPUT
		NetFlow* REFCLK2_A0_B; // net ID: REFCLK2 lsb: 0  msb: 0 INPUT
		NetFlow* RX1N_A0_B; // net ID: RX1N lsb: 0  msb: 0 INPUT
		NetFlow* RX1P_A0_B; // net ID: RX1P lsb: 0  msb: 0 INPUT
		NetFlow* RXBLOCKSYNC64B66BUSE_A0_B; // net ID: RXBLOCKSYNC64B66BUSE lsb: 0  msb: 0 INPUT
		NetFlow* RXCLKSTABLE_A0_B; // net ID: RXCLKSTABLE lsb: 0  msb: 0 INPUT
		NetFlow* RXCOMMADETUSE_A0_B; // net ID: RXCOMMADETUSE lsb: 0  msb: 0 INPUT
		NetFlow* RXCRCCLK_A0_B; // net ID: RXCRCCLK lsb: 0  msb: 0 INPUT
		NetFlow* RXCRCDATAVALID_A0_B; // net ID: RXCRCDATAVALID lsb: 0  msb: 0 INPUT
		NetFlow* RXCRCDATAWIDTH_A2_B; // net ID: RXCRCDATAWIDTH lsb: 0  msb: 2 INPUT
		NetFlow* RXCRCDATAWIDTH_A1_B; // net ID: RXCRCDATAWIDTH lsb: 0  msb: 2 INPUT
		NetFlow* RXCRCDATAWIDTH_A0_B; // net ID: RXCRCDATAWIDTH lsb: 0  msb: 2 INPUT
		NetFlow* RXCRCIN_A63_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* RXCRCIN_A62_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* RXCRCIN_A61_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* RXCRCIN_A60_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* RXCRCIN_A59_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* RXCRCIN_A58_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* RXCRCIN_A57_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* RXCRCIN_A56_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* RXCRCIN_A55_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* RXCRCIN_A54_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* RXCRCIN_A53_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* RXCRCIN_A52_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* RXCRCIN_A51_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* RXCRCIN_A50_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* RXCRCIN_A49_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* RXCRCIN_A48_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* RXCRCIN_A47_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* RXCRCIN_A46_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* RXCRCIN_A45_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* RXCRCIN_A44_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* RXCRCIN_A43_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* RXCRCIN_A42_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* RXCRCIN_A41_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* RXCRCIN_A40_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* RXCRCIN_A39_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* RXCRCIN_A38_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* RXCRCIN_A37_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* RXCRCIN_A36_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* RXCRCIN_A35_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* RXCRCIN_A34_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* RXCRCIN_A33_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* RXCRCIN_A32_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* RXCRCIN_A31_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* RXCRCIN_A30_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* RXCRCIN_A29_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* RXCRCIN_A28_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* RXCRCIN_A27_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* RXCRCIN_A26_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* RXCRCIN_A25_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* RXCRCIN_A24_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* RXCRCIN_A23_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* RXCRCIN_A22_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* RXCRCIN_A21_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* RXCRCIN_A20_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* RXCRCIN_A19_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* RXCRCIN_A18_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* RXCRCIN_A17_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* RXCRCIN_A16_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* RXCRCIN_A15_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* RXCRCIN_A14_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* RXCRCIN_A13_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* RXCRCIN_A12_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* RXCRCIN_A11_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* RXCRCIN_A10_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* RXCRCIN_A9_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* RXCRCIN_A8_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* RXCRCIN_A7_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* RXCRCIN_A6_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* RXCRCIN_A5_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* RXCRCIN_A4_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* RXCRCIN_A3_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* RXCRCIN_A2_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* RXCRCIN_A1_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* RXCRCIN_A0_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* RXCRCINIT_A0_B; // net ID: RXCRCINIT lsb: 0  msb: 0 INPUT
		NetFlow* RXCRCINTCLK_A0_B; // net ID: RXCRCINTCLK lsb: 0  msb: 0 INPUT
		NetFlow* RXCRCPD_A0_B; // net ID: RXCRCPD lsb: 0  msb: 0 INPUT
		NetFlow* RXCRCRESET_A0_B; // net ID: RXCRCRESET lsb: 0  msb: 0 INPUT
		NetFlow* RXDATAWIDTH_A1_B; // net ID: RXDATAWIDTH lsb: 0  msb: 1 INPUT
		NetFlow* RXDATAWIDTH_A0_B; // net ID: RXDATAWIDTH lsb: 0  msb: 1 INPUT
		NetFlow* RXDEC64B66BUSE_A0_B; // net ID: RXDEC64B66BUSE lsb: 0  msb: 0 INPUT
		NetFlow* RXDEC8B10BUSE_A0_B; // net ID: RXDEC8B10BUSE lsb: 0  msb: 0 INPUT
		NetFlow* RXDESCRAM64B66BUSE_A0_B; // net ID: RXDESCRAM64B66BUSE lsb: 0  msb: 0 INPUT
		NetFlow* RXIGNOREBTF_A0_B; // net ID: RXIGNOREBTF lsb: 0  msb: 0 INPUT
		NetFlow* RXINTDATAWIDTH_A1_B; // net ID: RXINTDATAWIDTH lsb: 0  msb: 1 INPUT
		NetFlow* RXINTDATAWIDTH_A0_B; // net ID: RXINTDATAWIDTH lsb: 0  msb: 1 INPUT
		NetFlow* RXPMARESET_A0_B; // net ID: RXPMARESET lsb: 0  msb: 0 INPUT
		NetFlow* RXPOLARITY_A0_B; // net ID: RXPOLARITY lsb: 0  msb: 0 INPUT
		NetFlow* RXRESET_A0_B; // net ID: RXRESET lsb: 0  msb: 0 INPUT
		NetFlow* RXSLIDE_A0_B; // net ID: RXSLIDE lsb: 0  msb: 0 INPUT
		NetFlow* RXSYNC_A0_B; // net ID: RXSYNC lsb: 0  msb: 0 INPUT
		NetFlow* RXUSRCLK_A0_B; // net ID: RXUSRCLK lsb: 0  msb: 0 INPUT
		NetFlow* RXUSRCLK2_A0_B; // net ID: RXUSRCLK2 lsb: 0  msb: 0 INPUT
		NetFlow* TXBYPASS8B10B_A7_B; // net ID: TXBYPASS8B10B lsb: 0  msb: 7 INPUT
		NetFlow* TXBYPASS8B10B_A6_B; // net ID: TXBYPASS8B10B lsb: 0  msb: 7 INPUT
		NetFlow* TXBYPASS8B10B_A5_B; // net ID: TXBYPASS8B10B lsb: 0  msb: 7 INPUT
		NetFlow* TXBYPASS8B10B_A4_B; // net ID: TXBYPASS8B10B lsb: 0  msb: 7 INPUT
		NetFlow* TXBYPASS8B10B_A3_B; // net ID: TXBYPASS8B10B lsb: 0  msb: 7 INPUT
		NetFlow* TXBYPASS8B10B_A2_B; // net ID: TXBYPASS8B10B lsb: 0  msb: 7 INPUT
		NetFlow* TXBYPASS8B10B_A1_B; // net ID: TXBYPASS8B10B lsb: 0  msb: 7 INPUT
		NetFlow* TXBYPASS8B10B_A0_B; // net ID: TXBYPASS8B10B lsb: 0  msb: 7 INPUT
		NetFlow* TXCHARDISPMODE_A7_B; // net ID: TXCHARDISPMODE lsb: 0  msb: 7 INPUT
		NetFlow* TXCHARDISPMODE_A6_B; // net ID: TXCHARDISPMODE lsb: 0  msb: 7 INPUT
		NetFlow* TXCHARDISPMODE_A5_B; // net ID: TXCHARDISPMODE lsb: 0  msb: 7 INPUT
		NetFlow* TXCHARDISPMODE_A4_B; // net ID: TXCHARDISPMODE lsb: 0  msb: 7 INPUT
		NetFlow* TXCHARDISPMODE_A3_B; // net ID: TXCHARDISPMODE lsb: 0  msb: 7 INPUT
		NetFlow* TXCHARDISPMODE_A2_B; // net ID: TXCHARDISPMODE lsb: 0  msb: 7 INPUT
		NetFlow* TXCHARDISPMODE_A1_B; // net ID: TXCHARDISPMODE lsb: 0  msb: 7 INPUT
		NetFlow* TXCHARDISPMODE_A0_B; // net ID: TXCHARDISPMODE lsb: 0  msb: 7 INPUT
		NetFlow* TXCHARDISPVAL_A7_B; // net ID: TXCHARDISPVAL lsb: 0  msb: 7 INPUT
		NetFlow* TXCHARDISPVAL_A6_B; // net ID: TXCHARDISPVAL lsb: 0  msb: 7 INPUT
		NetFlow* TXCHARDISPVAL_A5_B; // net ID: TXCHARDISPVAL lsb: 0  msb: 7 INPUT
		NetFlow* TXCHARDISPVAL_A4_B; // net ID: TXCHARDISPVAL lsb: 0  msb: 7 INPUT
		NetFlow* TXCHARDISPVAL_A3_B; // net ID: TXCHARDISPVAL lsb: 0  msb: 7 INPUT
		NetFlow* TXCHARDISPVAL_A2_B; // net ID: TXCHARDISPVAL lsb: 0  msb: 7 INPUT
		NetFlow* TXCHARDISPVAL_A1_B; // net ID: TXCHARDISPVAL lsb: 0  msb: 7 INPUT
		NetFlow* TXCHARDISPVAL_A0_B; // net ID: TXCHARDISPVAL lsb: 0  msb: 7 INPUT
		NetFlow* TXCHARISK_A7_B; // net ID: TXCHARISK lsb: 0  msb: 7 INPUT
		NetFlow* TXCHARISK_A6_B; // net ID: TXCHARISK lsb: 0  msb: 7 INPUT
		NetFlow* TXCHARISK_A5_B; // net ID: TXCHARISK lsb: 0  msb: 7 INPUT
		NetFlow* TXCHARISK_A4_B; // net ID: TXCHARISK lsb: 0  msb: 7 INPUT
		NetFlow* TXCHARISK_A3_B; // net ID: TXCHARISK lsb: 0  msb: 7 INPUT
		NetFlow* TXCHARISK_A2_B; // net ID: TXCHARISK lsb: 0  msb: 7 INPUT
		NetFlow* TXCHARISK_A1_B; // net ID: TXCHARISK lsb: 0  msb: 7 INPUT
		NetFlow* TXCHARISK_A0_B; // net ID: TXCHARISK lsb: 0  msb: 7 INPUT
		NetFlow* TXCLKSTABLE_A0_B; // net ID: TXCLKSTABLE lsb: 0  msb: 0 INPUT
		NetFlow* TXCRCCLK_A0_B; // net ID: TXCRCCLK lsb: 0  msb: 0 INPUT
		NetFlow* TXCRCDATAVALID_A0_B; // net ID: TXCRCDATAVALID lsb: 0  msb: 0 INPUT
		NetFlow* TXCRCDATAWIDTH_A2_B; // net ID: TXCRCDATAWIDTH lsb: 0  msb: 2 INPUT
		NetFlow* TXCRCDATAWIDTH_A1_B; // net ID: TXCRCDATAWIDTH lsb: 0  msb: 2 INPUT
		NetFlow* TXCRCDATAWIDTH_A0_B; // net ID: TXCRCDATAWIDTH lsb: 0  msb: 2 INPUT
		NetFlow* TXCRCIN_A63_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* TXCRCIN_A62_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* TXCRCIN_A61_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* TXCRCIN_A60_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* TXCRCIN_A59_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* TXCRCIN_A58_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* TXCRCIN_A57_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* TXCRCIN_A56_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* TXCRCIN_A55_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* TXCRCIN_A54_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* TXCRCIN_A53_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* TXCRCIN_A52_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* TXCRCIN_A51_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* TXCRCIN_A50_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* TXCRCIN_A49_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* TXCRCIN_A48_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* TXCRCIN_A47_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* TXCRCIN_A46_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* TXCRCIN_A45_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* TXCRCIN_A44_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* TXCRCIN_A43_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* TXCRCIN_A42_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* TXCRCIN_A41_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* TXCRCIN_A40_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* TXCRCIN_A39_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* TXCRCIN_A38_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* TXCRCIN_A37_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* TXCRCIN_A36_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* TXCRCIN_A35_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* TXCRCIN_A34_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* TXCRCIN_A33_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* TXCRCIN_A32_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* TXCRCIN_A31_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* TXCRCIN_A30_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* TXCRCIN_A29_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* TXCRCIN_A28_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* TXCRCIN_A27_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* TXCRCIN_A26_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* TXCRCIN_A25_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* TXCRCIN_A24_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* TXCRCIN_A23_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* TXCRCIN_A22_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* TXCRCIN_A21_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* TXCRCIN_A20_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* TXCRCIN_A19_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* TXCRCIN_A18_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* TXCRCIN_A17_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* TXCRCIN_A16_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* TXCRCIN_A15_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* TXCRCIN_A14_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* TXCRCIN_A13_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* TXCRCIN_A12_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* TXCRCIN_A11_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* TXCRCIN_A10_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* TXCRCIN_A9_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* TXCRCIN_A8_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* TXCRCIN_A7_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* TXCRCIN_A6_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* TXCRCIN_A5_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* TXCRCIN_A4_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* TXCRCIN_A3_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* TXCRCIN_A2_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* TXCRCIN_A1_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* TXCRCIN_A0_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* TXCRCINIT_A0_B; // net ID: TXCRCINIT lsb: 0  msb: 0 INPUT
		NetFlow* TXCRCINTCLK_A0_B; // net ID: TXCRCINTCLK lsb: 0  msb: 0 INPUT
		NetFlow* TXCRCPD_A0_B; // net ID: TXCRCPD lsb: 0  msb: 0 INPUT
		NetFlow* TXCRCRESET_A0_B; // net ID: TXCRCRESET lsb: 0  msb: 0 INPUT
		NetFlow* TXDATA_A63_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA_A62_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA_A61_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA_A60_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA_A59_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA_A58_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA_A57_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA_A56_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA_A55_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA_A54_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA_A53_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA_A52_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA_A51_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA_A50_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA_A49_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA_A48_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA_A47_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA_A46_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA_A45_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA_A44_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA_A43_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA_A42_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA_A41_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA_A40_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA_A39_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA_A38_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA_A37_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA_A36_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA_A35_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA_A34_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA_A33_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA_A32_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA_A31_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA_A30_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA_A29_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA_A28_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA_A27_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA_A26_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA_A25_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA_A24_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA_A23_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA_A22_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA_A21_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA_A20_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA_A19_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA_A18_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA_A17_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA_A16_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA_A15_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA_A14_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA_A13_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA_A12_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA_A11_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA_A10_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA_A9_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA_A8_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA_A7_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA_A6_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA_A5_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA_A4_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA_A3_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA_A2_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA_A1_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
		NetFlow* TXDATA_A0_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
		NetFlow* TXDATAWIDTH_A1_B; // net ID: TXDATAWIDTH lsb: 0  msb: 1 INPUT
		NetFlow* TXDATAWIDTH_A0_B; // net ID: TXDATAWIDTH lsb: 0  msb: 1 INPUT
		NetFlow* TXENC64B66BUSE_A0_B; // net ID: TXENC64B66BUSE lsb: 0  msb: 0 INPUT
		NetFlow* TXENC8B10BUSE_A0_B; // net ID: TXENC8B10BUSE lsb: 0  msb: 0 INPUT
		NetFlow* TXENOOB_A0_B; // net ID: TXENOOB lsb: 0  msb: 0 INPUT
		NetFlow* TXGEARBOX64B66BUSE_A0_B; // net ID: TXGEARBOX64B66BUSE lsb: 0  msb: 0 INPUT
		NetFlow* TXINHIBIT_A0_B; // net ID: TXINHIBIT lsb: 0  msb: 0 INPUT
		NetFlow* TXINTDATAWIDTH_A1_B; // net ID: TXINTDATAWIDTH lsb: 0  msb: 1 INPUT
		NetFlow* TXINTDATAWIDTH_A0_B; // net ID: TXINTDATAWIDTH lsb: 0  msb: 1 INPUT
		NetFlow* TXPMARESET_A0_B; // net ID: TXPMARESET lsb: 0  msb: 0 INPUT
		NetFlow* TXPOLARITY_A0_B; // net ID: TXPOLARITY lsb: 0  msb: 0 INPUT
		NetFlow* TXRESET_A0_B; // net ID: TXRESET lsb: 0  msb: 0 INPUT
		NetFlow* TXSCRAM64B66BUSE_A0_B; // net ID: TXSCRAM64B66BUSE lsb: 0  msb: 0 INPUT
		NetFlow* TXSYNC_A0_B; // net ID: TXSYNC lsb: 0  msb: 0 INPUT
		NetFlow* TXUSRCLK_A0_B; // net ID: TXUSRCLK lsb: 0  msb: 0 INPUT
		NetFlow* TXUSRCLK2_A0_B; // net ID: TXUSRCLK2 lsb: 0  msb: 0 INPUT
		
		public: X_GT11(
			const char * name,
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_enum_t BANDGAPSEL, // Default: "FALSE"
			parameter_enum_t BIASRESSEL, // Default: "FALSE"
			parameter_enum_t CCCB_ARBITRATOR_DISABLE, // Default: "FALSE"
			parameter_string_t CHAN_BOND_MODE, // Default: "NONE"
			parameter_enum_t CHAN_BOND_ONE_SHOT, // Default: "FALSE"
			parameter_int_t CHAN_BOND_SEQ_1_1, // Default: 11'b00000000000
			parameter_int_t CHAN_BOND_SEQ_1_2, // Default: 11'b00000000000
			parameter_int_t CHAN_BOND_SEQ_1_3, // Default: 11'b00000000000
			parameter_int_t CHAN_BOND_SEQ_1_4, // Default: 11'b00000000000
			parameter_int_t CHAN_BOND_SEQ_1_MASK, // Default: 4'b1110
			parameter_int_t CHAN_BOND_SEQ_2_1, // Default: 11'b00000000000
			parameter_int_t CHAN_BOND_SEQ_2_2, // Default: 11'b00000000000
			parameter_int_t CHAN_BOND_SEQ_2_3, // Default: 11'b00000000000
			parameter_int_t CHAN_BOND_SEQ_2_4, // Default: 11'b00000000000
			parameter_int_t CHAN_BOND_SEQ_2_MASK, // Default: 4'b1110
			parameter_enum_t CHAN_BOND_SEQ_2_USE, // Default: "FALSE"
			parameter_enum_t CLK_CORRECT_USE, // Default: "FALSE"
			parameter_enum_t CLK_COR_8B10B_DE, // Default: "FALSE"
			parameter_int_t CLK_COR_SEQ_1_1, // Default: 11'b00000000000
			parameter_int_t CLK_COR_SEQ_1_2, // Default: 11'b00000000000
			parameter_int_t CLK_COR_SEQ_1_3, // Default: 11'b00000000000
			parameter_int_t CLK_COR_SEQ_1_4, // Default: 11'b00000000000
			parameter_int_t CLK_COR_SEQ_1_MASK, // Default: 4'b1110
			parameter_int_t CLK_COR_SEQ_2_1, // Default: 11'b00000000000
			parameter_int_t CLK_COR_SEQ_2_2, // Default: 11'b00000000000
			parameter_int_t CLK_COR_SEQ_2_3, // Default: 11'b00000000000
			parameter_int_t CLK_COR_SEQ_2_4, // Default: 11'b00000000000
			parameter_int_t CLK_COR_SEQ_2_MASK, // Default: 4'b1110
			parameter_enum_t CLK_COR_SEQ_2_USE, // Default: "FALSE"
			parameter_enum_t CLK_COR_SEQ_DROP, // Default: "FALSE"
			parameter_enum_t COMMA32, // Default: "FALSE"
			parameter_int_t COMMA_10B_MASK, // Default: 10'h3FF
			parameter_int_t CYCLE_LIMIT_SEL, // Default: 2'b00
			parameter_int_t DCDR_FILTER, // Default: 3'b010
			parameter_enum_t DEC_MCOMMA_DETECT, // Default: "TRUE"
			parameter_enum_t DEC_PCOMMA_DETECT, // Default: "TRUE"
			parameter_enum_t DEC_VALID_COMMA_ONLY, // Default: "TRUE"
			parameter_int_t DIGRX_FWDCLK, // Default: 2'b00
			parameter_enum_t DIGRX_SYNC_MODE, // Default: "FALSE"
			parameter_enum_t ENABLE_DCDR, // Default: "FALSE"
			parameter_int_t FDET_HYS_CAL, // Default: 3'b010
			parameter_int_t FDET_HYS_SEL, // Default: 3'b100
			parameter_int_t FDET_LCK_CAL, // Default: 3'b100
			parameter_int_t FDET_LCK_SEL, // Default: 3'b001
			parameter_string_t GT11_MODE, // Default: "DONT_CARE"
			parameter_int_t IREFBIASMODE, // Default: 2'b11
			parameter_int_t LOOPCAL_WAIT, // Default: 2'b00
			parameter_int_t MCOMMA_32B_VALUE, // Default: 32'h00000000
			parameter_enum_t MCOMMA_DETECT, // Default: "TRUE"
			parameter_enum_t OPPOSITE_SELECT, // Default: "FALSE"
			parameter_int_t PCOMMA_32B_VALUE, // Default: 32'h00000000
			parameter_enum_t PCOMMA_DETECT, // Default: "TRUE"
			parameter_enum_t PCS_BIT_SLIP, // Default: "FALSE"
			parameter_enum_t PMACLKENABLE, // Default: "TRUE"
			parameter_enum_t PMACOREPWRENABLE, // Default: "TRUE"
			parameter_int_t PMAIREFTRIM, // Default: 4'b0111
			parameter_int_t PMAVBGCTRL, // Default: 5'b00000
			parameter_int_t PMAVREFTRIM, // Default: 4'b0111
			parameter_enum_t PMA_BIT_SLIP, // Default: "FALSE"
			parameter_enum_t POWER_ENABLE, // Default: "TRUE"
			parameter_enum_t REPEATER, // Default: "FALSE"
			parameter_enum_t RXACTST, // Default: "FALSE"
			parameter_int_t RXAFEEQ, // Default: 9'b000000000
			parameter_enum_t RXAFEPD, // Default: "FALSE"
			parameter_enum_t RXAFETST, // Default: "FALSE"
			parameter_enum_t RXAPD, // Default: "FALSE"
			parameter_int_t RXAREGCTRL, // Default: 5'b00000
			parameter_int_t RXASYNCDIVIDE, // Default: 2'b11
			parameter_enum_t RXBY_32, // Default: "FALSE"
			parameter_int_t RXCDRLOS, // Default: 6'b000000
			parameter_enum_t RXCLK0_FORCE_PMACLK, // Default: "FALSE"
			parameter_int_t RXCLKMODE, // Default: 6'b110001
			parameter_int_t RXCLMODE, // Default: 2'b00
			parameter_int_t RXCMADJ, // Default: 2'b01
			parameter_enum_t RXCPSEL, // Default: "TRUE"
			parameter_enum_t RXCPTST, // Default: "FALSE"
			parameter_enum_t RXCRCCLOCKDOUBLE, // Default: "FALSE"
			parameter_enum_t RXCRCENABLE, // Default: "FALSE"
			parameter_int_t RXCRCINITVAL, // Default: 32'h00000000
			parameter_enum_t RXCRCINVERTGEN, // Default: "FALSE"
			parameter_enum_t RXCRCSAMECLOCK, // Default: "FALSE"
			parameter_int_t RXCTRL1, // Default: 10'h200
			parameter_int_t RXCYCLE_LIMIT_SEL, // Default: 2'b00
			parameter_int_t RXDATA_SEL, // Default: 2'b00
			parameter_enum_t RXDCCOUPLE, // Default: "FALSE"
			parameter_enum_t RXDIGRESET, // Default: "FALSE"
			parameter_enum_t RXDIGRX, // Default: "FALSE"
			parameter_int_t RXEQ, // Default: 64'h4000000000000000
			parameter_string_t RXFDCAL_CLOCK_DIVIDE, // Default: "NONE"
			parameter_int_t RXFDET_HYS_CAL, // Default: 3'b010
			parameter_int_t RXFDET_HYS_SEL, // Default: 3'b100
			parameter_int_t RXFDET_LCK_CAL, // Default: 3'b100
			parameter_int_t RXFDET_LCK_SEL, // Default: 3'b001
			parameter_int_t RXFECONTROL1, // Default: 2'b00
			parameter_int_t RXFECONTROL2, // Default: 3'b000
			parameter_int_t RXFETUNE, // Default: 2'b01
			parameter_enum_t RXLB, // Default: "FALSE"
			parameter_int_t RXLKADJ, // Default: 5'b00000
			parameter_enum_t RXLKAPD, // Default: "FALSE"
			parameter_int_t RXLOOPCAL_WAIT, // Default: 2'b00
			parameter_int_t RXLOOPFILT, // Default: 4'b0111
			parameter_int_t RXMODE, // Default: 6'b000000
			parameter_enum_t RXPD, // Default: "FALSE"
			parameter_enum_t RXPDDTST, // Default: "TRUE"
			parameter_string_t RXPMACLKSEL, // Default: "REFCLK1"
			parameter_int_t RXRCPADJ, // Default: 3'b011
			parameter_enum_t RXRCPPD, // Default: "FALSE"
			parameter_enum_t RXRECCLK1_USE_SYNC, // Default: "FALSE"
			parameter_int_t RXRIBADJ, // Default: 2'b11
			parameter_enum_t RXRPDPD, // Default: "FALSE"
			parameter_enum_t RXRSDPD, // Default: "FALSE"
			parameter_int_t RXSLOWDOWN_CAL, // Default: 2'b00
			parameter_int_t RXTUNE, // Default: 13'h0000
			parameter_int_t RXVCODAC_INIT, // Default: 10'b1010000000
			parameter_enum_t RXVCO_CTRL_ENABLE, // Default: "FALSE"
			parameter_enum_t RX_BUFFER_USE, // Default: "TRUE"
			parameter_int_t RX_CLOCK_DIVIDER, // Default: 2'b00
			parameter_enum_t SAMPLE_8X, // Default: "FALSE"
			parameter_int_t SLOWDOWN_CAL, // Default: 2'b00
			parameter_string_t TXABPMACLKSEL, // Default: "REFCLK1"
			parameter_enum_t TXAPD, // Default: "FALSE"
			parameter_enum_t TXAREFBIASSEL, // Default: "TRUE"
			parameter_int_t TXASYNCDIVIDE, // Default: 2'b11
			parameter_enum_t TXCLK0_FORCE_PMACLK, // Default: "FALSE"
			parameter_int_t TXCLKMODE, // Default: 4'b1001
			parameter_int_t TXCLMODE, // Default: 2'b00
			parameter_enum_t TXCPSEL, // Default: "TRUE"
			parameter_enum_t TXCRCCLOCKDOUBLE, // Default: "FALSE"
			parameter_enum_t TXCRCENABLE, // Default: "FALSE"
			parameter_int_t TXCRCINITVAL, // Default: 32'h00000000
			parameter_enum_t TXCRCINVERTGEN, // Default: "FALSE"
			parameter_enum_t TXCRCSAMECLOCK, // Default: "FALSE"
			parameter_int_t TXCTRL1, // Default: 10'h200
			parameter_int_t TXDATA_SEL, // Default: 2'b00
			parameter_int_t TXDAT_PRDRV_DAC, // Default: 3'b111
			parameter_int_t TXDAT_TAP_DAC, // Default: 5'b10110
			parameter_enum_t TXDIGPD, // Default: "FALSE"
			parameter_string_t TXFDCAL_CLOCK_DIVIDE, // Default: "NONE"
			parameter_enum_t TXHIGHSIGNALEN, // Default: "TRUE"
			parameter_int_t TXLOOPFILT, // Default: 4'b0111
			parameter_enum_t TXLVLSHFTPD, // Default: "FALSE"
			parameter_enum_t TXOUTCLK1_USE_SYNC, // Default: "FALSE"
			parameter_enum_t TXPD, // Default: "FALSE"
			parameter_enum_t TXPHASESEL, // Default: "FALSE"
			parameter_int_t TXPOST_PRDRV_DAC, // Default: 3'b111
			parameter_int_t TXPOST_TAP_DAC, // Default: 5'b01110
			parameter_enum_t TXPOST_TAP_PD, // Default: "TRUE"
			parameter_int_t TXPRE_PRDRV_DAC, // Default: 3'b111
			parameter_int_t TXPRE_TAP_DAC, // Default: 5'b00000
			parameter_enum_t TXPRE_TAP_PD, // Default: "TRUE"
			parameter_enum_t TXSLEWRATE, // Default: "FALSE"
			parameter_int_t TXTERMTRIM, // Default: 4'b1100
			parameter_int_t TXTUNE, // Default: 13'h0000
			parameter_enum_t TX_BUFFER_USE, // Default: "TRUE"
			parameter_int_t TX_CLOCK_DIVIDER, // Default: 2'b00
			parameter_int_t VCODAC_INIT, // Default: 10'b1010000000
			parameter_enum_t VCO_CTRL_ENABLE, // Default: "FALSE"
			parameter_int_t VREFBIASMODE, // Default: 2'b11
			parameter_int_t ALIGN_COMMA_WORD, // Default: 4
			parameter_int_t CHAN_BOND_LIMIT, // Default: 16
			parameter_int_t CHAN_BOND_SEQ_LEN, // Default: 1
			parameter_int_t CLK_COR_MAX_LAT, // Default: 48
			parameter_int_t CLK_COR_MIN_LAT, // Default: 36
			parameter_int_t CLK_COR_SEQ_LEN, // Default: 1
			parameter_int_t RXOUTDIV2SEL, // Default: 1
			parameter_int_t RXPLLNDIVSEL, // Default: 8
			parameter_int_t RXUSRDIVISOR, // Default: 1
			parameter_int_t SH_CNT_MAX, // Default: 64
			parameter_int_t SH_INVALID_CNT_MAX, // Default: 16
			parameter_int_t TXOUTDIV2SEL, // Default: 1
			parameter_int_t TXPLLNDIVSEL, // Default: 8
			//Verilog Ports in definition order:
			NetFlow* CHBONDO_A4_B, // net ID: CHBONDO lsb: 0  msb: 4 OUTPUT
			NetFlow* CHBONDO_A3_B, // net ID: CHBONDO lsb: 0  msb: 4 OUTPUT
			NetFlow* CHBONDO_A2_B, // net ID: CHBONDO lsb: 0  msb: 4 OUTPUT
			NetFlow* CHBONDO_A1_B, // net ID: CHBONDO lsb: 0  msb: 4 OUTPUT
			NetFlow* CHBONDO_A0_B, // net ID: CHBONDO lsb: 0  msb: 4 OUTPUT
			NetFlow* COMBUSOUT_A15_B, // net ID: COMBUSOUT lsb: 0  msb: 15 OUTPUT
			NetFlow* COMBUSOUT_A14_B, // net ID: COMBUSOUT lsb: 0  msb: 15 OUTPUT
			NetFlow* COMBUSOUT_A13_B, // net ID: COMBUSOUT lsb: 0  msb: 15 OUTPUT
			NetFlow* COMBUSOUT_A12_B, // net ID: COMBUSOUT lsb: 0  msb: 15 OUTPUT
			NetFlow* COMBUSOUT_A11_B, // net ID: COMBUSOUT lsb: 0  msb: 15 OUTPUT
			NetFlow* COMBUSOUT_A10_B, // net ID: COMBUSOUT lsb: 0  msb: 15 OUTPUT
			NetFlow* COMBUSOUT_A9_B, // net ID: COMBUSOUT lsb: 0  msb: 15 OUTPUT
			NetFlow* COMBUSOUT_A8_B, // net ID: COMBUSOUT lsb: 0  msb: 15 OUTPUT
			NetFlow* COMBUSOUT_A7_B, // net ID: COMBUSOUT lsb: 0  msb: 15 OUTPUT
			NetFlow* COMBUSOUT_A6_B, // net ID: COMBUSOUT lsb: 0  msb: 15 OUTPUT
			NetFlow* COMBUSOUT_A5_B, // net ID: COMBUSOUT lsb: 0  msb: 15 OUTPUT
			NetFlow* COMBUSOUT_A4_B, // net ID: COMBUSOUT lsb: 0  msb: 15 OUTPUT
			NetFlow* COMBUSOUT_A3_B, // net ID: COMBUSOUT lsb: 0  msb: 15 OUTPUT
			NetFlow* COMBUSOUT_A2_B, // net ID: COMBUSOUT lsb: 0  msb: 15 OUTPUT
			NetFlow* COMBUSOUT_A1_B, // net ID: COMBUSOUT lsb: 0  msb: 15 OUTPUT
			NetFlow* COMBUSOUT_A0_B, // net ID: COMBUSOUT lsb: 0  msb: 15 OUTPUT
			NetFlow* DO_A15_B, // net ID: DO lsb: 0  msb: 15 OUTPUT
			NetFlow* DO_A14_B, // net ID: DO lsb: 0  msb: 15 OUTPUT
			NetFlow* DO_A13_B, // net ID: DO lsb: 0  msb: 15 OUTPUT
			NetFlow* DO_A12_B, // net ID: DO lsb: 0  msb: 15 OUTPUT
			NetFlow* DO_A11_B, // net ID: DO lsb: 0  msb: 15 OUTPUT
			NetFlow* DO_A10_B, // net ID: DO lsb: 0  msb: 15 OUTPUT
			NetFlow* DO_A9_B, // net ID: DO lsb: 0  msb: 15 OUTPUT
			NetFlow* DO_A8_B, // net ID: DO lsb: 0  msb: 15 OUTPUT
			NetFlow* DO_A7_B, // net ID: DO lsb: 0  msb: 15 OUTPUT
			NetFlow* DO_A6_B, // net ID: DO lsb: 0  msb: 15 OUTPUT
			NetFlow* DO_A5_B, // net ID: DO lsb: 0  msb: 15 OUTPUT
			NetFlow* DO_A4_B, // net ID: DO lsb: 0  msb: 15 OUTPUT
			NetFlow* DO_A3_B, // net ID: DO lsb: 0  msb: 15 OUTPUT
			NetFlow* DO_A2_B, // net ID: DO lsb: 0  msb: 15 OUTPUT
			NetFlow* DO_A1_B, // net ID: DO lsb: 0  msb: 15 OUTPUT
			NetFlow* DO_A0_B, // net ID: DO lsb: 0  msb: 15 OUTPUT
			NetFlow* DRDY_A0_B, // net ID: DRDY lsb: 0  msb: 0 OUTPUT
			NetFlow* RXBUFERR_A0_B, // net ID: RXBUFERR lsb: 0  msb: 0 OUTPUT
			NetFlow* RXCALFAIL_A0_B, // net ID: RXCALFAIL lsb: 0  msb: 0 OUTPUT
			NetFlow* RXCHARISCOMMA_A7_B, // net ID: RXCHARISCOMMA lsb: 0  msb: 7 OUTPUT
			NetFlow* RXCHARISCOMMA_A6_B, // net ID: RXCHARISCOMMA lsb: 0  msb: 7 OUTPUT
			NetFlow* RXCHARISCOMMA_A5_B, // net ID: RXCHARISCOMMA lsb: 0  msb: 7 OUTPUT
			NetFlow* RXCHARISCOMMA_A4_B, // net ID: RXCHARISCOMMA lsb: 0  msb: 7 OUTPUT
			NetFlow* RXCHARISCOMMA_A3_B, // net ID: RXCHARISCOMMA lsb: 0  msb: 7 OUTPUT
			NetFlow* RXCHARISCOMMA_A2_B, // net ID: RXCHARISCOMMA lsb: 0  msb: 7 OUTPUT
			NetFlow* RXCHARISCOMMA_A1_B, // net ID: RXCHARISCOMMA lsb: 0  msb: 7 OUTPUT
			NetFlow* RXCHARISCOMMA_A0_B, // net ID: RXCHARISCOMMA lsb: 0  msb: 7 OUTPUT
			NetFlow* RXCHARISK_A7_B, // net ID: RXCHARISK lsb: 0  msb: 7 OUTPUT
			NetFlow* RXCHARISK_A6_B, // net ID: RXCHARISK lsb: 0  msb: 7 OUTPUT
			NetFlow* RXCHARISK_A5_B, // net ID: RXCHARISK lsb: 0  msb: 7 OUTPUT
			NetFlow* RXCHARISK_A4_B, // net ID: RXCHARISK lsb: 0  msb: 7 OUTPUT
			NetFlow* RXCHARISK_A3_B, // net ID: RXCHARISK lsb: 0  msb: 7 OUTPUT
			NetFlow* RXCHARISK_A2_B, // net ID: RXCHARISK lsb: 0  msb: 7 OUTPUT
			NetFlow* RXCHARISK_A1_B, // net ID: RXCHARISK lsb: 0  msb: 7 OUTPUT
			NetFlow* RXCHARISK_A0_B, // net ID: RXCHARISK lsb: 0  msb: 7 OUTPUT
			NetFlow* RXCOMMADET_A0_B, // net ID: RXCOMMADET lsb: 0  msb: 0 OUTPUT
			NetFlow* RXCRCOUT_A31_B, // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* RXCRCOUT_A30_B, // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* RXCRCOUT_A29_B, // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* RXCRCOUT_A28_B, // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* RXCRCOUT_A27_B, // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* RXCRCOUT_A26_B, // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* RXCRCOUT_A25_B, // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* RXCRCOUT_A24_B, // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* RXCRCOUT_A23_B, // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* RXCRCOUT_A22_B, // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* RXCRCOUT_A21_B, // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* RXCRCOUT_A20_B, // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* RXCRCOUT_A19_B, // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* RXCRCOUT_A18_B, // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* RXCRCOUT_A17_B, // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* RXCRCOUT_A16_B, // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* RXCRCOUT_A15_B, // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* RXCRCOUT_A14_B, // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* RXCRCOUT_A13_B, // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* RXCRCOUT_A12_B, // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* RXCRCOUT_A11_B, // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* RXCRCOUT_A10_B, // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* RXCRCOUT_A9_B, // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* RXCRCOUT_A8_B, // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* RXCRCOUT_A7_B, // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* RXCRCOUT_A6_B, // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* RXCRCOUT_A5_B, // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* RXCRCOUT_A4_B, // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* RXCRCOUT_A3_B, // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* RXCRCOUT_A2_B, // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* RXCRCOUT_A1_B, // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* RXCRCOUT_A0_B, // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* RXCYCLELIMIT_A0_B, // net ID: RXCYCLELIMIT lsb: 0  msb: 0 OUTPUT
			NetFlow* RXDATA_A63_B, // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA_A62_B, // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA_A61_B, // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA_A60_B, // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA_A59_B, // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA_A58_B, // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA_A57_B, // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA_A56_B, // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA_A55_B, // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA_A54_B, // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA_A53_B, // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA_A52_B, // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA_A51_B, // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA_A50_B, // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA_A49_B, // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA_A48_B, // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA_A47_B, // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA_A46_B, // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA_A45_B, // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA_A44_B, // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA_A43_B, // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA_A42_B, // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA_A41_B, // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA_A40_B, // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA_A39_B, // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA_A38_B, // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA_A37_B, // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA_A36_B, // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA_A35_B, // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA_A34_B, // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA_A33_B, // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA_A32_B, // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA_A31_B, // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA_A30_B, // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA_A29_B, // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA_A28_B, // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA_A27_B, // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA_A26_B, // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA_A25_B, // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA_A24_B, // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA_A23_B, // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA_A22_B, // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA_A21_B, // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA_A20_B, // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA_A19_B, // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA_A18_B, // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA_A17_B, // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA_A16_B, // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA_A15_B, // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA_A14_B, // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA_A13_B, // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA_A12_B, // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA_A11_B, // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA_A10_B, // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA_A9_B, // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA_A8_B, // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA_A7_B, // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA_A6_B, // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA_A5_B, // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA_A4_B, // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA_A3_B, // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA_A2_B, // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA_A1_B, // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDATA_A0_B, // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			NetFlow* RXDISPERR_A7_B, // net ID: RXDISPERR lsb: 0  msb: 7 OUTPUT
			NetFlow* RXDISPERR_A6_B, // net ID: RXDISPERR lsb: 0  msb: 7 OUTPUT
			NetFlow* RXDISPERR_A5_B, // net ID: RXDISPERR lsb: 0  msb: 7 OUTPUT
			NetFlow* RXDISPERR_A4_B, // net ID: RXDISPERR lsb: 0  msb: 7 OUTPUT
			NetFlow* RXDISPERR_A3_B, // net ID: RXDISPERR lsb: 0  msb: 7 OUTPUT
			NetFlow* RXDISPERR_A2_B, // net ID: RXDISPERR lsb: 0  msb: 7 OUTPUT
			NetFlow* RXDISPERR_A1_B, // net ID: RXDISPERR lsb: 0  msb: 7 OUTPUT
			NetFlow* RXDISPERR_A0_B, // net ID: RXDISPERR lsb: 0  msb: 7 OUTPUT
			NetFlow* RXLOCK_A0_B, // net ID: RXLOCK lsb: 0  msb: 0 OUTPUT
			NetFlow* RXLOSSOFSYNC_A1_B, // net ID: RXLOSSOFSYNC lsb: 0  msb: 1 OUTPUT
			NetFlow* RXLOSSOFSYNC_A0_B, // net ID: RXLOSSOFSYNC lsb: 0  msb: 1 OUTPUT
			NetFlow* RXMCLK_A0_B, // net ID: RXMCLK lsb: 0  msb: 0 OUTPUT
			NetFlow* RXNOTINTABLE_A7_B, // net ID: RXNOTINTABLE lsb: 0  msb: 7 OUTPUT
			NetFlow* RXNOTINTABLE_A6_B, // net ID: RXNOTINTABLE lsb: 0  msb: 7 OUTPUT
			NetFlow* RXNOTINTABLE_A5_B, // net ID: RXNOTINTABLE lsb: 0  msb: 7 OUTPUT
			NetFlow* RXNOTINTABLE_A4_B, // net ID: RXNOTINTABLE lsb: 0  msb: 7 OUTPUT
			NetFlow* RXNOTINTABLE_A3_B, // net ID: RXNOTINTABLE lsb: 0  msb: 7 OUTPUT
			NetFlow* RXNOTINTABLE_A2_B, // net ID: RXNOTINTABLE lsb: 0  msb: 7 OUTPUT
			NetFlow* RXNOTINTABLE_A1_B, // net ID: RXNOTINTABLE lsb: 0  msb: 7 OUTPUT
			NetFlow* RXNOTINTABLE_A0_B, // net ID: RXNOTINTABLE lsb: 0  msb: 7 OUTPUT
			NetFlow* RXPCSHCLKOUT_A0_B, // net ID: RXPCSHCLKOUT lsb: 0  msb: 0 OUTPUT
			NetFlow* RXREALIGN_A0_B, // net ID: RXREALIGN lsb: 0  msb: 0 OUTPUT
			NetFlow* RXRECCLK1_A0_B, // net ID: RXRECCLK1 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXRECCLK2_A0_B, // net ID: RXRECCLK2 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXRUNDISP_A7_B, // net ID: RXRUNDISP lsb: 0  msb: 7 OUTPUT
			NetFlow* RXRUNDISP_A6_B, // net ID: RXRUNDISP lsb: 0  msb: 7 OUTPUT
			NetFlow* RXRUNDISP_A5_B, // net ID: RXRUNDISP lsb: 0  msb: 7 OUTPUT
			NetFlow* RXRUNDISP_A4_B, // net ID: RXRUNDISP lsb: 0  msb: 7 OUTPUT
			NetFlow* RXRUNDISP_A3_B, // net ID: RXRUNDISP lsb: 0  msb: 7 OUTPUT
			NetFlow* RXRUNDISP_A2_B, // net ID: RXRUNDISP lsb: 0  msb: 7 OUTPUT
			NetFlow* RXRUNDISP_A1_B, // net ID: RXRUNDISP lsb: 0  msb: 7 OUTPUT
			NetFlow* RXRUNDISP_A0_B, // net ID: RXRUNDISP lsb: 0  msb: 7 OUTPUT
			NetFlow* RXSIGDET_A0_B, // net ID: RXSIGDET lsb: 0  msb: 0 OUTPUT
			NetFlow* RXSTATUS_A5_B, // net ID: RXSTATUS lsb: 0  msb: 5 OUTPUT
			NetFlow* RXSTATUS_A4_B, // net ID: RXSTATUS lsb: 0  msb: 5 OUTPUT
			NetFlow* RXSTATUS_A3_B, // net ID: RXSTATUS lsb: 0  msb: 5 OUTPUT
			NetFlow* RXSTATUS_A2_B, // net ID: RXSTATUS lsb: 0  msb: 5 OUTPUT
			NetFlow* RXSTATUS_A1_B, // net ID: RXSTATUS lsb: 0  msb: 5 OUTPUT
			NetFlow* RXSTATUS_A0_B, // net ID: RXSTATUS lsb: 0  msb: 5 OUTPUT
			NetFlow* TX1N_A0_B, // net ID: TX1N lsb: 0  msb: 0 OUTPUT
			NetFlow* TX1P_A0_B, // net ID: TX1P lsb: 0  msb: 0 OUTPUT
			NetFlow* TXBUFERR_A0_B, // net ID: TXBUFERR lsb: 0  msb: 0 OUTPUT
			NetFlow* TXCALFAIL_A0_B, // net ID: TXCALFAIL lsb: 0  msb: 0 OUTPUT
			NetFlow* TXCRCOUT_A31_B, // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* TXCRCOUT_A30_B, // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* TXCRCOUT_A29_B, // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* TXCRCOUT_A28_B, // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* TXCRCOUT_A27_B, // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* TXCRCOUT_A26_B, // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* TXCRCOUT_A25_B, // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* TXCRCOUT_A24_B, // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* TXCRCOUT_A23_B, // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* TXCRCOUT_A22_B, // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* TXCRCOUT_A21_B, // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* TXCRCOUT_A20_B, // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* TXCRCOUT_A19_B, // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* TXCRCOUT_A18_B, // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* TXCRCOUT_A17_B, // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* TXCRCOUT_A16_B, // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* TXCRCOUT_A15_B, // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* TXCRCOUT_A14_B, // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* TXCRCOUT_A13_B, // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* TXCRCOUT_A12_B, // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* TXCRCOUT_A11_B, // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* TXCRCOUT_A10_B, // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* TXCRCOUT_A9_B, // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* TXCRCOUT_A8_B, // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* TXCRCOUT_A7_B, // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* TXCRCOUT_A6_B, // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* TXCRCOUT_A5_B, // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* TXCRCOUT_A4_B, // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* TXCRCOUT_A3_B, // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* TXCRCOUT_A2_B, // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* TXCRCOUT_A1_B, // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* TXCRCOUT_A0_B, // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
			NetFlow* TXCYCLELIMIT_A0_B, // net ID: TXCYCLELIMIT lsb: 0  msb: 0 OUTPUT
			NetFlow* TXKERR_A7_B, // net ID: TXKERR lsb: 0  msb: 7 OUTPUT
			NetFlow* TXKERR_A6_B, // net ID: TXKERR lsb: 0  msb: 7 OUTPUT
			NetFlow* TXKERR_A5_B, // net ID: TXKERR lsb: 0  msb: 7 OUTPUT
			NetFlow* TXKERR_A4_B, // net ID: TXKERR lsb: 0  msb: 7 OUTPUT
			NetFlow* TXKERR_A3_B, // net ID: TXKERR lsb: 0  msb: 7 OUTPUT
			NetFlow* TXKERR_A2_B, // net ID: TXKERR lsb: 0  msb: 7 OUTPUT
			NetFlow* TXKERR_A1_B, // net ID: TXKERR lsb: 0  msb: 7 OUTPUT
			NetFlow* TXKERR_A0_B, // net ID: TXKERR lsb: 0  msb: 7 OUTPUT
			NetFlow* TXLOCK_A0_B, // net ID: TXLOCK lsb: 0  msb: 0 OUTPUT
			NetFlow* TXOUTCLK1_A0_B, // net ID: TXOUTCLK1 lsb: 0  msb: 0 OUTPUT
			NetFlow* TXOUTCLK2_A0_B, // net ID: TXOUTCLK2 lsb: 0  msb: 0 OUTPUT
			NetFlow* TXPCSHCLKOUT_A0_B, // net ID: TXPCSHCLKOUT lsb: 0  msb: 0 OUTPUT
			NetFlow* TXRUNDISP_A7_B, // net ID: TXRUNDISP lsb: 0  msb: 7 OUTPUT
			NetFlow* TXRUNDISP_A6_B, // net ID: TXRUNDISP lsb: 0  msb: 7 OUTPUT
			NetFlow* TXRUNDISP_A5_B, // net ID: TXRUNDISP lsb: 0  msb: 7 OUTPUT
			NetFlow* TXRUNDISP_A4_B, // net ID: TXRUNDISP lsb: 0  msb: 7 OUTPUT
			NetFlow* TXRUNDISP_A3_B, // net ID: TXRUNDISP lsb: 0  msb: 7 OUTPUT
			NetFlow* TXRUNDISP_A2_B, // net ID: TXRUNDISP lsb: 0  msb: 7 OUTPUT
			NetFlow* TXRUNDISP_A1_B, // net ID: TXRUNDISP lsb: 0  msb: 7 OUTPUT
			NetFlow* TXRUNDISP_A0_B, // net ID: TXRUNDISP lsb: 0  msb: 7 OUTPUT
			NetFlow* CHBONDI_A4_B, // net ID: CHBONDI lsb: 0  msb: 4 INPUT
			NetFlow* CHBONDI_A3_B, // net ID: CHBONDI lsb: 0  msb: 4 INPUT
			NetFlow* CHBONDI_A2_B, // net ID: CHBONDI lsb: 0  msb: 4 INPUT
			NetFlow* CHBONDI_A1_B, // net ID: CHBONDI lsb: 0  msb: 4 INPUT
			NetFlow* CHBONDI_A0_B, // net ID: CHBONDI lsb: 0  msb: 4 INPUT
			NetFlow* COMBUSIN_A15_B, // net ID: COMBUSIN lsb: 0  msb: 15 INPUT
			NetFlow* COMBUSIN_A14_B, // net ID: COMBUSIN lsb: 0  msb: 15 INPUT
			NetFlow* COMBUSIN_A13_B, // net ID: COMBUSIN lsb: 0  msb: 15 INPUT
			NetFlow* COMBUSIN_A12_B, // net ID: COMBUSIN lsb: 0  msb: 15 INPUT
			NetFlow* COMBUSIN_A11_B, // net ID: COMBUSIN lsb: 0  msb: 15 INPUT
			NetFlow* COMBUSIN_A10_B, // net ID: COMBUSIN lsb: 0  msb: 15 INPUT
			NetFlow* COMBUSIN_A9_B, // net ID: COMBUSIN lsb: 0  msb: 15 INPUT
			NetFlow* COMBUSIN_A8_B, // net ID: COMBUSIN lsb: 0  msb: 15 INPUT
			NetFlow* COMBUSIN_A7_B, // net ID: COMBUSIN lsb: 0  msb: 15 INPUT
			NetFlow* COMBUSIN_A6_B, // net ID: COMBUSIN lsb: 0  msb: 15 INPUT
			NetFlow* COMBUSIN_A5_B, // net ID: COMBUSIN lsb: 0  msb: 15 INPUT
			NetFlow* COMBUSIN_A4_B, // net ID: COMBUSIN lsb: 0  msb: 15 INPUT
			NetFlow* COMBUSIN_A3_B, // net ID: COMBUSIN lsb: 0  msb: 15 INPUT
			NetFlow* COMBUSIN_A2_B, // net ID: COMBUSIN lsb: 0  msb: 15 INPUT
			NetFlow* COMBUSIN_A1_B, // net ID: COMBUSIN lsb: 0  msb: 15 INPUT
			NetFlow* COMBUSIN_A0_B, // net ID: COMBUSIN lsb: 0  msb: 15 INPUT
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
			NetFlow* ENCHANSYNC_A0_B, // net ID: ENCHANSYNC lsb: 0  msb: 0 INPUT
			NetFlow* ENMCOMMAALIGN_A0_B, // net ID: ENMCOMMAALIGN lsb: 0  msb: 0 INPUT
			NetFlow* ENPCOMMAALIGN_A0_B, // net ID: ENPCOMMAALIGN lsb: 0  msb: 0 INPUT
			NetFlow* GREFCLK_A0_B, // net ID: GREFCLK lsb: 0  msb: 0 INPUT
			NetFlow* LOOPBACK_A1_B, // net ID: LOOPBACK lsb: 0  msb: 1 INPUT
			NetFlow* LOOPBACK_A0_B, // net ID: LOOPBACK lsb: 0  msb: 1 INPUT
			NetFlow* POWERDOWN_A0_B, // net ID: POWERDOWN lsb: 0  msb: 0 INPUT
			NetFlow* REFCLK1_A0_B, // net ID: REFCLK1 lsb: 0  msb: 0 INPUT
			NetFlow* REFCLK2_A0_B, // net ID: REFCLK2 lsb: 0  msb: 0 INPUT
			NetFlow* RX1N_A0_B, // net ID: RX1N lsb: 0  msb: 0 INPUT
			NetFlow* RX1P_A0_B, // net ID: RX1P lsb: 0  msb: 0 INPUT
			NetFlow* RXBLOCKSYNC64B66BUSE_A0_B, // net ID: RXBLOCKSYNC64B66BUSE lsb: 0  msb: 0 INPUT
			NetFlow* RXCLKSTABLE_A0_B, // net ID: RXCLKSTABLE lsb: 0  msb: 0 INPUT
			NetFlow* RXCOMMADETUSE_A0_B, // net ID: RXCOMMADETUSE lsb: 0  msb: 0 INPUT
			NetFlow* RXCRCCLK_A0_B, // net ID: RXCRCCLK lsb: 0  msb: 0 INPUT
			NetFlow* RXCRCDATAVALID_A0_B, // net ID: RXCRCDATAVALID lsb: 0  msb: 0 INPUT
			NetFlow* RXCRCDATAWIDTH_A2_B, // net ID: RXCRCDATAWIDTH lsb: 0  msb: 2 INPUT
			NetFlow* RXCRCDATAWIDTH_A1_B, // net ID: RXCRCDATAWIDTH lsb: 0  msb: 2 INPUT
			NetFlow* RXCRCDATAWIDTH_A0_B, // net ID: RXCRCDATAWIDTH lsb: 0  msb: 2 INPUT
			NetFlow* RXCRCIN_A63_B, // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* RXCRCIN_A62_B, // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* RXCRCIN_A61_B, // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* RXCRCIN_A60_B, // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* RXCRCIN_A59_B, // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* RXCRCIN_A58_B, // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* RXCRCIN_A57_B, // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* RXCRCIN_A56_B, // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* RXCRCIN_A55_B, // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* RXCRCIN_A54_B, // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* RXCRCIN_A53_B, // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* RXCRCIN_A52_B, // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* RXCRCIN_A51_B, // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* RXCRCIN_A50_B, // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* RXCRCIN_A49_B, // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* RXCRCIN_A48_B, // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* RXCRCIN_A47_B, // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* RXCRCIN_A46_B, // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* RXCRCIN_A45_B, // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* RXCRCIN_A44_B, // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* RXCRCIN_A43_B, // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* RXCRCIN_A42_B, // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* RXCRCIN_A41_B, // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* RXCRCIN_A40_B, // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* RXCRCIN_A39_B, // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* RXCRCIN_A38_B, // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* RXCRCIN_A37_B, // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* RXCRCIN_A36_B, // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* RXCRCIN_A35_B, // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* RXCRCIN_A34_B, // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* RXCRCIN_A33_B, // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* RXCRCIN_A32_B, // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* RXCRCIN_A31_B, // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* RXCRCIN_A30_B, // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* RXCRCIN_A29_B, // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* RXCRCIN_A28_B, // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* RXCRCIN_A27_B, // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* RXCRCIN_A26_B, // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* RXCRCIN_A25_B, // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* RXCRCIN_A24_B, // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* RXCRCIN_A23_B, // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* RXCRCIN_A22_B, // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* RXCRCIN_A21_B, // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* RXCRCIN_A20_B, // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* RXCRCIN_A19_B, // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* RXCRCIN_A18_B, // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* RXCRCIN_A17_B, // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* RXCRCIN_A16_B, // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* RXCRCIN_A15_B, // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* RXCRCIN_A14_B, // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* RXCRCIN_A13_B, // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* RXCRCIN_A12_B, // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* RXCRCIN_A11_B, // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* RXCRCIN_A10_B, // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* RXCRCIN_A9_B, // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* RXCRCIN_A8_B, // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* RXCRCIN_A7_B, // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* RXCRCIN_A6_B, // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* RXCRCIN_A5_B, // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* RXCRCIN_A4_B, // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* RXCRCIN_A3_B, // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* RXCRCIN_A2_B, // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* RXCRCIN_A1_B, // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* RXCRCIN_A0_B, // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* RXCRCINIT_A0_B, // net ID: RXCRCINIT lsb: 0  msb: 0 INPUT
			NetFlow* RXCRCINTCLK_A0_B, // net ID: RXCRCINTCLK lsb: 0  msb: 0 INPUT
			NetFlow* RXCRCPD_A0_B, // net ID: RXCRCPD lsb: 0  msb: 0 INPUT
			NetFlow* RXCRCRESET_A0_B, // net ID: RXCRCRESET lsb: 0  msb: 0 INPUT
			NetFlow* RXDATAWIDTH_A1_B, // net ID: RXDATAWIDTH lsb: 0  msb: 1 INPUT
			NetFlow* RXDATAWIDTH_A0_B, // net ID: RXDATAWIDTH lsb: 0  msb: 1 INPUT
			NetFlow* RXDEC64B66BUSE_A0_B, // net ID: RXDEC64B66BUSE lsb: 0  msb: 0 INPUT
			NetFlow* RXDEC8B10BUSE_A0_B, // net ID: RXDEC8B10BUSE lsb: 0  msb: 0 INPUT
			NetFlow* RXDESCRAM64B66BUSE_A0_B, // net ID: RXDESCRAM64B66BUSE lsb: 0  msb: 0 INPUT
			NetFlow* RXIGNOREBTF_A0_B, // net ID: RXIGNOREBTF lsb: 0  msb: 0 INPUT
			NetFlow* RXINTDATAWIDTH_A1_B, // net ID: RXINTDATAWIDTH lsb: 0  msb: 1 INPUT
			NetFlow* RXINTDATAWIDTH_A0_B, // net ID: RXINTDATAWIDTH lsb: 0  msb: 1 INPUT
			NetFlow* RXPMARESET_A0_B, // net ID: RXPMARESET lsb: 0  msb: 0 INPUT
			NetFlow* RXPOLARITY_A0_B, // net ID: RXPOLARITY lsb: 0  msb: 0 INPUT
			NetFlow* RXRESET_A0_B, // net ID: RXRESET lsb: 0  msb: 0 INPUT
			NetFlow* RXSLIDE_A0_B, // net ID: RXSLIDE lsb: 0  msb: 0 INPUT
			NetFlow* RXSYNC_A0_B, // net ID: RXSYNC lsb: 0  msb: 0 INPUT
			NetFlow* RXUSRCLK_A0_B, // net ID: RXUSRCLK lsb: 0  msb: 0 INPUT
			NetFlow* RXUSRCLK2_A0_B, // net ID: RXUSRCLK2 lsb: 0  msb: 0 INPUT
			NetFlow* TXBYPASS8B10B_A7_B, // net ID: TXBYPASS8B10B lsb: 0  msb: 7 INPUT
			NetFlow* TXBYPASS8B10B_A6_B, // net ID: TXBYPASS8B10B lsb: 0  msb: 7 INPUT
			NetFlow* TXBYPASS8B10B_A5_B, // net ID: TXBYPASS8B10B lsb: 0  msb: 7 INPUT
			NetFlow* TXBYPASS8B10B_A4_B, // net ID: TXBYPASS8B10B lsb: 0  msb: 7 INPUT
			NetFlow* TXBYPASS8B10B_A3_B, // net ID: TXBYPASS8B10B lsb: 0  msb: 7 INPUT
			NetFlow* TXBYPASS8B10B_A2_B, // net ID: TXBYPASS8B10B lsb: 0  msb: 7 INPUT
			NetFlow* TXBYPASS8B10B_A1_B, // net ID: TXBYPASS8B10B lsb: 0  msb: 7 INPUT
			NetFlow* TXBYPASS8B10B_A0_B, // net ID: TXBYPASS8B10B lsb: 0  msb: 7 INPUT
			NetFlow* TXCHARDISPMODE_A7_B, // net ID: TXCHARDISPMODE lsb: 0  msb: 7 INPUT
			NetFlow* TXCHARDISPMODE_A6_B, // net ID: TXCHARDISPMODE lsb: 0  msb: 7 INPUT
			NetFlow* TXCHARDISPMODE_A5_B, // net ID: TXCHARDISPMODE lsb: 0  msb: 7 INPUT
			NetFlow* TXCHARDISPMODE_A4_B, // net ID: TXCHARDISPMODE lsb: 0  msb: 7 INPUT
			NetFlow* TXCHARDISPMODE_A3_B, // net ID: TXCHARDISPMODE lsb: 0  msb: 7 INPUT
			NetFlow* TXCHARDISPMODE_A2_B, // net ID: TXCHARDISPMODE lsb: 0  msb: 7 INPUT
			NetFlow* TXCHARDISPMODE_A1_B, // net ID: TXCHARDISPMODE lsb: 0  msb: 7 INPUT
			NetFlow* TXCHARDISPMODE_A0_B, // net ID: TXCHARDISPMODE lsb: 0  msb: 7 INPUT
			NetFlow* TXCHARDISPVAL_A7_B, // net ID: TXCHARDISPVAL lsb: 0  msb: 7 INPUT
			NetFlow* TXCHARDISPVAL_A6_B, // net ID: TXCHARDISPVAL lsb: 0  msb: 7 INPUT
			NetFlow* TXCHARDISPVAL_A5_B, // net ID: TXCHARDISPVAL lsb: 0  msb: 7 INPUT
			NetFlow* TXCHARDISPVAL_A4_B, // net ID: TXCHARDISPVAL lsb: 0  msb: 7 INPUT
			NetFlow* TXCHARDISPVAL_A3_B, // net ID: TXCHARDISPVAL lsb: 0  msb: 7 INPUT
			NetFlow* TXCHARDISPVAL_A2_B, // net ID: TXCHARDISPVAL lsb: 0  msb: 7 INPUT
			NetFlow* TXCHARDISPVAL_A1_B, // net ID: TXCHARDISPVAL lsb: 0  msb: 7 INPUT
			NetFlow* TXCHARDISPVAL_A0_B, // net ID: TXCHARDISPVAL lsb: 0  msb: 7 INPUT
			NetFlow* TXCHARISK_A7_B, // net ID: TXCHARISK lsb: 0  msb: 7 INPUT
			NetFlow* TXCHARISK_A6_B, // net ID: TXCHARISK lsb: 0  msb: 7 INPUT
			NetFlow* TXCHARISK_A5_B, // net ID: TXCHARISK lsb: 0  msb: 7 INPUT
			NetFlow* TXCHARISK_A4_B, // net ID: TXCHARISK lsb: 0  msb: 7 INPUT
			NetFlow* TXCHARISK_A3_B, // net ID: TXCHARISK lsb: 0  msb: 7 INPUT
			NetFlow* TXCHARISK_A2_B, // net ID: TXCHARISK lsb: 0  msb: 7 INPUT
			NetFlow* TXCHARISK_A1_B, // net ID: TXCHARISK lsb: 0  msb: 7 INPUT
			NetFlow* TXCHARISK_A0_B, // net ID: TXCHARISK lsb: 0  msb: 7 INPUT
			NetFlow* TXCLKSTABLE_A0_B, // net ID: TXCLKSTABLE lsb: 0  msb: 0 INPUT
			NetFlow* TXCRCCLK_A0_B, // net ID: TXCRCCLK lsb: 0  msb: 0 INPUT
			NetFlow* TXCRCDATAVALID_A0_B, // net ID: TXCRCDATAVALID lsb: 0  msb: 0 INPUT
			NetFlow* TXCRCDATAWIDTH_A2_B, // net ID: TXCRCDATAWIDTH lsb: 0  msb: 2 INPUT
			NetFlow* TXCRCDATAWIDTH_A1_B, // net ID: TXCRCDATAWIDTH lsb: 0  msb: 2 INPUT
			NetFlow* TXCRCDATAWIDTH_A0_B, // net ID: TXCRCDATAWIDTH lsb: 0  msb: 2 INPUT
			NetFlow* TXCRCIN_A63_B, // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* TXCRCIN_A62_B, // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* TXCRCIN_A61_B, // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* TXCRCIN_A60_B, // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* TXCRCIN_A59_B, // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* TXCRCIN_A58_B, // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* TXCRCIN_A57_B, // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* TXCRCIN_A56_B, // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* TXCRCIN_A55_B, // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* TXCRCIN_A54_B, // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* TXCRCIN_A53_B, // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* TXCRCIN_A52_B, // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* TXCRCIN_A51_B, // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* TXCRCIN_A50_B, // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* TXCRCIN_A49_B, // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* TXCRCIN_A48_B, // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* TXCRCIN_A47_B, // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* TXCRCIN_A46_B, // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* TXCRCIN_A45_B, // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* TXCRCIN_A44_B, // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* TXCRCIN_A43_B, // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* TXCRCIN_A42_B, // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* TXCRCIN_A41_B, // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* TXCRCIN_A40_B, // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* TXCRCIN_A39_B, // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* TXCRCIN_A38_B, // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* TXCRCIN_A37_B, // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* TXCRCIN_A36_B, // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* TXCRCIN_A35_B, // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* TXCRCIN_A34_B, // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* TXCRCIN_A33_B, // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* TXCRCIN_A32_B, // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* TXCRCIN_A31_B, // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* TXCRCIN_A30_B, // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* TXCRCIN_A29_B, // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* TXCRCIN_A28_B, // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* TXCRCIN_A27_B, // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* TXCRCIN_A26_B, // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* TXCRCIN_A25_B, // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* TXCRCIN_A24_B, // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* TXCRCIN_A23_B, // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* TXCRCIN_A22_B, // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* TXCRCIN_A21_B, // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* TXCRCIN_A20_B, // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* TXCRCIN_A19_B, // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* TXCRCIN_A18_B, // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* TXCRCIN_A17_B, // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* TXCRCIN_A16_B, // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* TXCRCIN_A15_B, // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* TXCRCIN_A14_B, // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* TXCRCIN_A13_B, // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* TXCRCIN_A12_B, // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* TXCRCIN_A11_B, // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* TXCRCIN_A10_B, // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* TXCRCIN_A9_B, // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* TXCRCIN_A8_B, // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* TXCRCIN_A7_B, // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* TXCRCIN_A6_B, // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* TXCRCIN_A5_B, // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* TXCRCIN_A4_B, // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* TXCRCIN_A3_B, // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* TXCRCIN_A2_B, // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* TXCRCIN_A1_B, // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* TXCRCIN_A0_B, // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* TXCRCINIT_A0_B, // net ID: TXCRCINIT lsb: 0  msb: 0 INPUT
			NetFlow* TXCRCINTCLK_A0_B, // net ID: TXCRCINTCLK lsb: 0  msb: 0 INPUT
			NetFlow* TXCRCPD_A0_B, // net ID: TXCRCPD lsb: 0  msb: 0 INPUT
			NetFlow* TXCRCRESET_A0_B, // net ID: TXCRCRESET lsb: 0  msb: 0 INPUT
			NetFlow* TXDATA_A63_B, // net ID: TXDATA lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA_A62_B, // net ID: TXDATA lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA_A61_B, // net ID: TXDATA lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA_A60_B, // net ID: TXDATA lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA_A59_B, // net ID: TXDATA lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA_A58_B, // net ID: TXDATA lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA_A57_B, // net ID: TXDATA lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA_A56_B, // net ID: TXDATA lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA_A55_B, // net ID: TXDATA lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA_A54_B, // net ID: TXDATA lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA_A53_B, // net ID: TXDATA lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA_A52_B, // net ID: TXDATA lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA_A51_B, // net ID: TXDATA lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA_A50_B, // net ID: TXDATA lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA_A49_B, // net ID: TXDATA lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA_A48_B, // net ID: TXDATA lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA_A47_B, // net ID: TXDATA lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA_A46_B, // net ID: TXDATA lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA_A45_B, // net ID: TXDATA lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA_A44_B, // net ID: TXDATA lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA_A43_B, // net ID: TXDATA lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA_A42_B, // net ID: TXDATA lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA_A41_B, // net ID: TXDATA lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA_A40_B, // net ID: TXDATA lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA_A39_B, // net ID: TXDATA lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA_A38_B, // net ID: TXDATA lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA_A37_B, // net ID: TXDATA lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA_A36_B, // net ID: TXDATA lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA_A35_B, // net ID: TXDATA lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA_A34_B, // net ID: TXDATA lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA_A33_B, // net ID: TXDATA lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA_A32_B, // net ID: TXDATA lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA_A31_B, // net ID: TXDATA lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA_A30_B, // net ID: TXDATA lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA_A29_B, // net ID: TXDATA lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA_A28_B, // net ID: TXDATA lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA_A27_B, // net ID: TXDATA lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA_A26_B, // net ID: TXDATA lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA_A25_B, // net ID: TXDATA lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA_A24_B, // net ID: TXDATA lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA_A23_B, // net ID: TXDATA lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA_A22_B, // net ID: TXDATA lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA_A21_B, // net ID: TXDATA lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA_A20_B, // net ID: TXDATA lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA_A19_B, // net ID: TXDATA lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA_A18_B, // net ID: TXDATA lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA_A17_B, // net ID: TXDATA lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA_A16_B, // net ID: TXDATA lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA_A15_B, // net ID: TXDATA lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA_A14_B, // net ID: TXDATA lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA_A13_B, // net ID: TXDATA lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA_A12_B, // net ID: TXDATA lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA_A11_B, // net ID: TXDATA lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA_A10_B, // net ID: TXDATA lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA_A9_B, // net ID: TXDATA lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA_A8_B, // net ID: TXDATA lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA_A7_B, // net ID: TXDATA lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA_A6_B, // net ID: TXDATA lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA_A5_B, // net ID: TXDATA lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA_A4_B, // net ID: TXDATA lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA_A3_B, // net ID: TXDATA lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA_A2_B, // net ID: TXDATA lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA_A1_B, // net ID: TXDATA lsb: 0  msb: 63 INPUT
			NetFlow* TXDATA_A0_B, // net ID: TXDATA lsb: 0  msb: 63 INPUT
			NetFlow* TXDATAWIDTH_A1_B, // net ID: TXDATAWIDTH lsb: 0  msb: 1 INPUT
			NetFlow* TXDATAWIDTH_A0_B, // net ID: TXDATAWIDTH lsb: 0  msb: 1 INPUT
			NetFlow* TXENC64B66BUSE_A0_B, // net ID: TXENC64B66BUSE lsb: 0  msb: 0 INPUT
			NetFlow* TXENC8B10BUSE_A0_B, // net ID: TXENC8B10BUSE lsb: 0  msb: 0 INPUT
			NetFlow* TXENOOB_A0_B, // net ID: TXENOOB lsb: 0  msb: 0 INPUT
			NetFlow* TXGEARBOX64B66BUSE_A0_B, // net ID: TXGEARBOX64B66BUSE lsb: 0  msb: 0 INPUT
			NetFlow* TXINHIBIT_A0_B, // net ID: TXINHIBIT lsb: 0  msb: 0 INPUT
			NetFlow* TXINTDATAWIDTH_A1_B, // net ID: TXINTDATAWIDTH lsb: 0  msb: 1 INPUT
			NetFlow* TXINTDATAWIDTH_A0_B, // net ID: TXINTDATAWIDTH lsb: 0  msb: 1 INPUT
			NetFlow* TXPMARESET_A0_B, // net ID: TXPMARESET lsb: 0  msb: 0 INPUT
			NetFlow* TXPOLARITY_A0_B, // net ID: TXPOLARITY lsb: 0  msb: 0 INPUT
			NetFlow* TXRESET_A0_B, // net ID: TXRESET lsb: 0  msb: 0 INPUT
			NetFlow* TXSCRAM64B66BUSE_A0_B, // net ID: TXSCRAM64B66BUSE lsb: 0  msb: 0 INPUT
			NetFlow* TXSYNC_A0_B, // net ID: TXSYNC lsb: 0  msb: 0 INPUT
			NetFlow* TXUSRCLK_A0_B, // net ID: TXUSRCLK lsb: 0  msb: 0 INPUT
			NetFlow* TXUSRCLK2_A0_B // net ID: TXUSRCLK2 lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->LOC = LOC; // Default: "UNPLACED"
			this->BANDGAPSEL = BANDGAPSEL; // Default: "FALSE"
			this->BIASRESSEL = BIASRESSEL; // Default: "FALSE"
			this->CCCB_ARBITRATOR_DISABLE = CCCB_ARBITRATOR_DISABLE; // Default: "FALSE"
			this->CHAN_BOND_MODE = CHAN_BOND_MODE; // Default: "NONE"
			this->CHAN_BOND_ONE_SHOT = CHAN_BOND_ONE_SHOT; // Default: "FALSE"
			this->CHAN_BOND_SEQ_1_1 = CHAN_BOND_SEQ_1_1; // Default: 11'b00000000000
			this->CHAN_BOND_SEQ_1_2 = CHAN_BOND_SEQ_1_2; // Default: 11'b00000000000
			this->CHAN_BOND_SEQ_1_3 = CHAN_BOND_SEQ_1_3; // Default: 11'b00000000000
			this->CHAN_BOND_SEQ_1_4 = CHAN_BOND_SEQ_1_4; // Default: 11'b00000000000
			this->CHAN_BOND_SEQ_1_MASK = CHAN_BOND_SEQ_1_MASK; // Default: 4'b1110
			this->CHAN_BOND_SEQ_2_1 = CHAN_BOND_SEQ_2_1; // Default: 11'b00000000000
			this->CHAN_BOND_SEQ_2_2 = CHAN_BOND_SEQ_2_2; // Default: 11'b00000000000
			this->CHAN_BOND_SEQ_2_3 = CHAN_BOND_SEQ_2_3; // Default: 11'b00000000000
			this->CHAN_BOND_SEQ_2_4 = CHAN_BOND_SEQ_2_4; // Default: 11'b00000000000
			this->CHAN_BOND_SEQ_2_MASK = CHAN_BOND_SEQ_2_MASK; // Default: 4'b1110
			this->CHAN_BOND_SEQ_2_USE = CHAN_BOND_SEQ_2_USE; // Default: "FALSE"
			this->CLK_CORRECT_USE = CLK_CORRECT_USE; // Default: "FALSE"
			this->CLK_COR_8B10B_DE = CLK_COR_8B10B_DE; // Default: "FALSE"
			this->CLK_COR_SEQ_1_1 = CLK_COR_SEQ_1_1; // Default: 11'b00000000000
			this->CLK_COR_SEQ_1_2 = CLK_COR_SEQ_1_2; // Default: 11'b00000000000
			this->CLK_COR_SEQ_1_3 = CLK_COR_SEQ_1_3; // Default: 11'b00000000000
			this->CLK_COR_SEQ_1_4 = CLK_COR_SEQ_1_4; // Default: 11'b00000000000
			this->CLK_COR_SEQ_1_MASK = CLK_COR_SEQ_1_MASK; // Default: 4'b1110
			this->CLK_COR_SEQ_2_1 = CLK_COR_SEQ_2_1; // Default: 11'b00000000000
			this->CLK_COR_SEQ_2_2 = CLK_COR_SEQ_2_2; // Default: 11'b00000000000
			this->CLK_COR_SEQ_2_3 = CLK_COR_SEQ_2_3; // Default: 11'b00000000000
			this->CLK_COR_SEQ_2_4 = CLK_COR_SEQ_2_4; // Default: 11'b00000000000
			this->CLK_COR_SEQ_2_MASK = CLK_COR_SEQ_2_MASK; // Default: 4'b1110
			this->CLK_COR_SEQ_2_USE = CLK_COR_SEQ_2_USE; // Default: "FALSE"
			this->CLK_COR_SEQ_DROP = CLK_COR_SEQ_DROP; // Default: "FALSE"
			this->COMMA32 = COMMA32; // Default: "FALSE"
			this->COMMA_10B_MASK = COMMA_10B_MASK; // Default: 10'h3FF
			this->CYCLE_LIMIT_SEL = CYCLE_LIMIT_SEL; // Default: 2'b00
			this->DCDR_FILTER = DCDR_FILTER; // Default: 3'b010
			this->DEC_MCOMMA_DETECT = DEC_MCOMMA_DETECT; // Default: "TRUE"
			this->DEC_PCOMMA_DETECT = DEC_PCOMMA_DETECT; // Default: "TRUE"
			this->DEC_VALID_COMMA_ONLY = DEC_VALID_COMMA_ONLY; // Default: "TRUE"
			this->DIGRX_FWDCLK = DIGRX_FWDCLK; // Default: 2'b00
			this->DIGRX_SYNC_MODE = DIGRX_SYNC_MODE; // Default: "FALSE"
			this->ENABLE_DCDR = ENABLE_DCDR; // Default: "FALSE"
			this->FDET_HYS_CAL = FDET_HYS_CAL; // Default: 3'b010
			this->FDET_HYS_SEL = FDET_HYS_SEL; // Default: 3'b100
			this->FDET_LCK_CAL = FDET_LCK_CAL; // Default: 3'b100
			this->FDET_LCK_SEL = FDET_LCK_SEL; // Default: 3'b001
			this->GT11_MODE = GT11_MODE; // Default: "DONT_CARE"
			this->IREFBIASMODE = IREFBIASMODE; // Default: 2'b11
			this->LOOPCAL_WAIT = LOOPCAL_WAIT; // Default: 2'b00
			this->MCOMMA_32B_VALUE = MCOMMA_32B_VALUE; // Default: 32'h00000000
			this->MCOMMA_DETECT = MCOMMA_DETECT; // Default: "TRUE"
			this->OPPOSITE_SELECT = OPPOSITE_SELECT; // Default: "FALSE"
			this->PCOMMA_32B_VALUE = PCOMMA_32B_VALUE; // Default: 32'h00000000
			this->PCOMMA_DETECT = PCOMMA_DETECT; // Default: "TRUE"
			this->PCS_BIT_SLIP = PCS_BIT_SLIP; // Default: "FALSE"
			this->PMACLKENABLE = PMACLKENABLE; // Default: "TRUE"
			this->PMACOREPWRENABLE = PMACOREPWRENABLE; // Default: "TRUE"
			this->PMAIREFTRIM = PMAIREFTRIM; // Default: 4'b0111
			this->PMAVBGCTRL = PMAVBGCTRL; // Default: 5'b00000
			this->PMAVREFTRIM = PMAVREFTRIM; // Default: 4'b0111
			this->PMA_BIT_SLIP = PMA_BIT_SLIP; // Default: "FALSE"
			this->POWER_ENABLE = POWER_ENABLE; // Default: "TRUE"
			this->REPEATER = REPEATER; // Default: "FALSE"
			this->RXACTST = RXACTST; // Default: "FALSE"
			this->RXAFEEQ = RXAFEEQ; // Default: 9'b000000000
			this->RXAFEPD = RXAFEPD; // Default: "FALSE"
			this->RXAFETST = RXAFETST; // Default: "FALSE"
			this->RXAPD = RXAPD; // Default: "FALSE"
			this->RXAREGCTRL = RXAREGCTRL; // Default: 5'b00000
			this->RXASYNCDIVIDE = RXASYNCDIVIDE; // Default: 2'b11
			this->RXBY_32 = RXBY_32; // Default: "FALSE"
			this->RXCDRLOS = RXCDRLOS; // Default: 6'b000000
			this->RXCLK0_FORCE_PMACLK = RXCLK0_FORCE_PMACLK; // Default: "FALSE"
			this->RXCLKMODE = RXCLKMODE; // Default: 6'b110001
			this->RXCLMODE = RXCLMODE; // Default: 2'b00
			this->RXCMADJ = RXCMADJ; // Default: 2'b01
			this->RXCPSEL = RXCPSEL; // Default: "TRUE"
			this->RXCPTST = RXCPTST; // Default: "FALSE"
			this->RXCRCCLOCKDOUBLE = RXCRCCLOCKDOUBLE; // Default: "FALSE"
			this->RXCRCENABLE = RXCRCENABLE; // Default: "FALSE"
			this->RXCRCINITVAL = RXCRCINITVAL; // Default: 32'h00000000
			this->RXCRCINVERTGEN = RXCRCINVERTGEN; // Default: "FALSE"
			this->RXCRCSAMECLOCK = RXCRCSAMECLOCK; // Default: "FALSE"
			this->RXCTRL1 = RXCTRL1; // Default: 10'h200
			this->RXCYCLE_LIMIT_SEL = RXCYCLE_LIMIT_SEL; // Default: 2'b00
			this->RXDATA_SEL = RXDATA_SEL; // Default: 2'b00
			this->RXDCCOUPLE = RXDCCOUPLE; // Default: "FALSE"
			this->RXDIGRESET = RXDIGRESET; // Default: "FALSE"
			this->RXDIGRX = RXDIGRX; // Default: "FALSE"
			this->RXEQ = RXEQ; // Default: 64'h4000000000000000
			this->RXFDCAL_CLOCK_DIVIDE = RXFDCAL_CLOCK_DIVIDE; // Default: "NONE"
			this->RXFDET_HYS_CAL = RXFDET_HYS_CAL; // Default: 3'b010
			this->RXFDET_HYS_SEL = RXFDET_HYS_SEL; // Default: 3'b100
			this->RXFDET_LCK_CAL = RXFDET_LCK_CAL; // Default: 3'b100
			this->RXFDET_LCK_SEL = RXFDET_LCK_SEL; // Default: 3'b001
			this->RXFECONTROL1 = RXFECONTROL1; // Default: 2'b00
			this->RXFECONTROL2 = RXFECONTROL2; // Default: 3'b000
			this->RXFETUNE = RXFETUNE; // Default: 2'b01
			this->RXLB = RXLB; // Default: "FALSE"
			this->RXLKADJ = RXLKADJ; // Default: 5'b00000
			this->RXLKAPD = RXLKAPD; // Default: "FALSE"
			this->RXLOOPCAL_WAIT = RXLOOPCAL_WAIT; // Default: 2'b00
			this->RXLOOPFILT = RXLOOPFILT; // Default: 4'b0111
			this->RXMODE = RXMODE; // Default: 6'b000000
			this->RXPD = RXPD; // Default: "FALSE"
			this->RXPDDTST = RXPDDTST; // Default: "TRUE"
			this->RXPMACLKSEL = RXPMACLKSEL; // Default: "REFCLK1"
			this->RXRCPADJ = RXRCPADJ; // Default: 3'b011
			this->RXRCPPD = RXRCPPD; // Default: "FALSE"
			this->RXRECCLK1_USE_SYNC = RXRECCLK1_USE_SYNC; // Default: "FALSE"
			this->RXRIBADJ = RXRIBADJ; // Default: 2'b11
			this->RXRPDPD = RXRPDPD; // Default: "FALSE"
			this->RXRSDPD = RXRSDPD; // Default: "FALSE"
			this->RXSLOWDOWN_CAL = RXSLOWDOWN_CAL; // Default: 2'b00
			this->RXTUNE = RXTUNE; // Default: 13'h0000
			this->RXVCODAC_INIT = RXVCODAC_INIT; // Default: 10'b1010000000
			this->RXVCO_CTRL_ENABLE = RXVCO_CTRL_ENABLE; // Default: "FALSE"
			this->RX_BUFFER_USE = RX_BUFFER_USE; // Default: "TRUE"
			this->RX_CLOCK_DIVIDER = RX_CLOCK_DIVIDER; // Default: 2'b00
			this->SAMPLE_8X = SAMPLE_8X; // Default: "FALSE"
			this->SLOWDOWN_CAL = SLOWDOWN_CAL; // Default: 2'b00
			this->TXABPMACLKSEL = TXABPMACLKSEL; // Default: "REFCLK1"
			this->TXAPD = TXAPD; // Default: "FALSE"
			this->TXAREFBIASSEL = TXAREFBIASSEL; // Default: "TRUE"
			this->TXASYNCDIVIDE = TXASYNCDIVIDE; // Default: 2'b11
			this->TXCLK0_FORCE_PMACLK = TXCLK0_FORCE_PMACLK; // Default: "FALSE"
			this->TXCLKMODE = TXCLKMODE; // Default: 4'b1001
			this->TXCLMODE = TXCLMODE; // Default: 2'b00
			this->TXCPSEL = TXCPSEL; // Default: "TRUE"
			this->TXCRCCLOCKDOUBLE = TXCRCCLOCKDOUBLE; // Default: "FALSE"
			this->TXCRCENABLE = TXCRCENABLE; // Default: "FALSE"
			this->TXCRCINITVAL = TXCRCINITVAL; // Default: 32'h00000000
			this->TXCRCINVERTGEN = TXCRCINVERTGEN; // Default: "FALSE"
			this->TXCRCSAMECLOCK = TXCRCSAMECLOCK; // Default: "FALSE"
			this->TXCTRL1 = TXCTRL1; // Default: 10'h200
			this->TXDATA_SEL = TXDATA_SEL; // Default: 2'b00
			this->TXDAT_PRDRV_DAC = TXDAT_PRDRV_DAC; // Default: 3'b111
			this->TXDAT_TAP_DAC = TXDAT_TAP_DAC; // Default: 5'b10110
			this->TXDIGPD = TXDIGPD; // Default: "FALSE"
			this->TXFDCAL_CLOCK_DIVIDE = TXFDCAL_CLOCK_DIVIDE; // Default: "NONE"
			this->TXHIGHSIGNALEN = TXHIGHSIGNALEN; // Default: "TRUE"
			this->TXLOOPFILT = TXLOOPFILT; // Default: 4'b0111
			this->TXLVLSHFTPD = TXLVLSHFTPD; // Default: "FALSE"
			this->TXOUTCLK1_USE_SYNC = TXOUTCLK1_USE_SYNC; // Default: "FALSE"
			this->TXPD = TXPD; // Default: "FALSE"
			this->TXPHASESEL = TXPHASESEL; // Default: "FALSE"
			this->TXPOST_PRDRV_DAC = TXPOST_PRDRV_DAC; // Default: 3'b111
			this->TXPOST_TAP_DAC = TXPOST_TAP_DAC; // Default: 5'b01110
			this->TXPOST_TAP_PD = TXPOST_TAP_PD; // Default: "TRUE"
			this->TXPRE_PRDRV_DAC = TXPRE_PRDRV_DAC; // Default: 3'b111
			this->TXPRE_TAP_DAC = TXPRE_TAP_DAC; // Default: 5'b00000
			this->TXPRE_TAP_PD = TXPRE_TAP_PD; // Default: "TRUE"
			this->TXSLEWRATE = TXSLEWRATE; // Default: "FALSE"
			this->TXTERMTRIM = TXTERMTRIM; // Default: 4'b1100
			this->TXTUNE = TXTUNE; // Default: 13'h0000
			this->TX_BUFFER_USE = TX_BUFFER_USE; // Default: "TRUE"
			this->TX_CLOCK_DIVIDER = TX_CLOCK_DIVIDER; // Default: 2'b00
			this->VCODAC_INIT = VCODAC_INIT; // Default: 10'b1010000000
			this->VCO_CTRL_ENABLE = VCO_CTRL_ENABLE; // Default: "FALSE"
			this->VREFBIASMODE = VREFBIASMODE; // Default: 2'b11
			this->ALIGN_COMMA_WORD = ALIGN_COMMA_WORD; // Default: 4
			this->CHAN_BOND_LIMIT = CHAN_BOND_LIMIT; // Default: 16
			this->CHAN_BOND_SEQ_LEN = CHAN_BOND_SEQ_LEN; // Default: 1
			this->CLK_COR_MAX_LAT = CLK_COR_MAX_LAT; // Default: 48
			this->CLK_COR_MIN_LAT = CLK_COR_MIN_LAT; // Default: 36
			this->CLK_COR_SEQ_LEN = CLK_COR_SEQ_LEN; // Default: 1
			this->RXOUTDIV2SEL = RXOUTDIV2SEL; // Default: 1
			this->RXPLLNDIVSEL = RXPLLNDIVSEL; // Default: 8
			this->RXUSRDIVISOR = RXUSRDIVISOR; // Default: 1
			this->SH_CNT_MAX = SH_CNT_MAX; // Default: 64
			this->SH_INVALID_CNT_MAX = SH_INVALID_CNT_MAX; // Default: 16
			this->TXOUTDIV2SEL = TXOUTDIV2SEL; // Default: 1
			this->TXPLLNDIVSEL = TXPLLNDIVSEL; // Default: 8
			//Verilog Ports in definition order:
			this->CHBONDO_A4_B = CHBONDO_A4_B; // net ID: CHBONDO lsb: 0  msb: 4 OUTPUT
			this->CHBONDO_A3_B = CHBONDO_A3_B; // net ID: CHBONDO lsb: 0  msb: 4 OUTPUT
			this->CHBONDO_A2_B = CHBONDO_A2_B; // net ID: CHBONDO lsb: 0  msb: 4 OUTPUT
			this->CHBONDO_A1_B = CHBONDO_A1_B; // net ID: CHBONDO lsb: 0  msb: 4 OUTPUT
			this->CHBONDO_A0_B = CHBONDO_A0_B; // net ID: CHBONDO lsb: 0  msb: 4 OUTPUT
			this->COMBUSOUT_A15_B = COMBUSOUT_A15_B; // net ID: COMBUSOUT lsb: 0  msb: 15 OUTPUT
			this->COMBUSOUT_A14_B = COMBUSOUT_A14_B; // net ID: COMBUSOUT lsb: 0  msb: 15 OUTPUT
			this->COMBUSOUT_A13_B = COMBUSOUT_A13_B; // net ID: COMBUSOUT lsb: 0  msb: 15 OUTPUT
			this->COMBUSOUT_A12_B = COMBUSOUT_A12_B; // net ID: COMBUSOUT lsb: 0  msb: 15 OUTPUT
			this->COMBUSOUT_A11_B = COMBUSOUT_A11_B; // net ID: COMBUSOUT lsb: 0  msb: 15 OUTPUT
			this->COMBUSOUT_A10_B = COMBUSOUT_A10_B; // net ID: COMBUSOUT lsb: 0  msb: 15 OUTPUT
			this->COMBUSOUT_A9_B = COMBUSOUT_A9_B; // net ID: COMBUSOUT lsb: 0  msb: 15 OUTPUT
			this->COMBUSOUT_A8_B = COMBUSOUT_A8_B; // net ID: COMBUSOUT lsb: 0  msb: 15 OUTPUT
			this->COMBUSOUT_A7_B = COMBUSOUT_A7_B; // net ID: COMBUSOUT lsb: 0  msb: 15 OUTPUT
			this->COMBUSOUT_A6_B = COMBUSOUT_A6_B; // net ID: COMBUSOUT lsb: 0  msb: 15 OUTPUT
			this->COMBUSOUT_A5_B = COMBUSOUT_A5_B; // net ID: COMBUSOUT lsb: 0  msb: 15 OUTPUT
			this->COMBUSOUT_A4_B = COMBUSOUT_A4_B; // net ID: COMBUSOUT lsb: 0  msb: 15 OUTPUT
			this->COMBUSOUT_A3_B = COMBUSOUT_A3_B; // net ID: COMBUSOUT lsb: 0  msb: 15 OUTPUT
			this->COMBUSOUT_A2_B = COMBUSOUT_A2_B; // net ID: COMBUSOUT lsb: 0  msb: 15 OUTPUT
			this->COMBUSOUT_A1_B = COMBUSOUT_A1_B; // net ID: COMBUSOUT lsb: 0  msb: 15 OUTPUT
			this->COMBUSOUT_A0_B = COMBUSOUT_A0_B; // net ID: COMBUSOUT lsb: 0  msb: 15 OUTPUT
			this->DO_A15_B = DO_A15_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
			this->DO_A14_B = DO_A14_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
			this->DO_A13_B = DO_A13_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
			this->DO_A12_B = DO_A12_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
			this->DO_A11_B = DO_A11_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
			this->DO_A10_B = DO_A10_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
			this->DO_A9_B = DO_A9_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
			this->DO_A8_B = DO_A8_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
			this->DO_A7_B = DO_A7_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
			this->DO_A6_B = DO_A6_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
			this->DO_A5_B = DO_A5_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
			this->DO_A4_B = DO_A4_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
			this->DO_A3_B = DO_A3_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
			this->DO_A2_B = DO_A2_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
			this->DO_A1_B = DO_A1_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
			this->DO_A0_B = DO_A0_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
			this->DRDY_A0_B = DRDY_A0_B; // net ID: DRDY lsb: 0  msb: 0 OUTPUT
			this->RXBUFERR_A0_B = RXBUFERR_A0_B; // net ID: RXBUFERR lsb: 0  msb: 0 OUTPUT
			this->RXCALFAIL_A0_B = RXCALFAIL_A0_B; // net ID: RXCALFAIL lsb: 0  msb: 0 OUTPUT
			this->RXCHARISCOMMA_A7_B = RXCHARISCOMMA_A7_B; // net ID: RXCHARISCOMMA lsb: 0  msb: 7 OUTPUT
			this->RXCHARISCOMMA_A6_B = RXCHARISCOMMA_A6_B; // net ID: RXCHARISCOMMA lsb: 0  msb: 7 OUTPUT
			this->RXCHARISCOMMA_A5_B = RXCHARISCOMMA_A5_B; // net ID: RXCHARISCOMMA lsb: 0  msb: 7 OUTPUT
			this->RXCHARISCOMMA_A4_B = RXCHARISCOMMA_A4_B; // net ID: RXCHARISCOMMA lsb: 0  msb: 7 OUTPUT
			this->RXCHARISCOMMA_A3_B = RXCHARISCOMMA_A3_B; // net ID: RXCHARISCOMMA lsb: 0  msb: 7 OUTPUT
			this->RXCHARISCOMMA_A2_B = RXCHARISCOMMA_A2_B; // net ID: RXCHARISCOMMA lsb: 0  msb: 7 OUTPUT
			this->RXCHARISCOMMA_A1_B = RXCHARISCOMMA_A1_B; // net ID: RXCHARISCOMMA lsb: 0  msb: 7 OUTPUT
			this->RXCHARISCOMMA_A0_B = RXCHARISCOMMA_A0_B; // net ID: RXCHARISCOMMA lsb: 0  msb: 7 OUTPUT
			this->RXCHARISK_A7_B = RXCHARISK_A7_B; // net ID: RXCHARISK lsb: 0  msb: 7 OUTPUT
			this->RXCHARISK_A6_B = RXCHARISK_A6_B; // net ID: RXCHARISK lsb: 0  msb: 7 OUTPUT
			this->RXCHARISK_A5_B = RXCHARISK_A5_B; // net ID: RXCHARISK lsb: 0  msb: 7 OUTPUT
			this->RXCHARISK_A4_B = RXCHARISK_A4_B; // net ID: RXCHARISK lsb: 0  msb: 7 OUTPUT
			this->RXCHARISK_A3_B = RXCHARISK_A3_B; // net ID: RXCHARISK lsb: 0  msb: 7 OUTPUT
			this->RXCHARISK_A2_B = RXCHARISK_A2_B; // net ID: RXCHARISK lsb: 0  msb: 7 OUTPUT
			this->RXCHARISK_A1_B = RXCHARISK_A1_B; // net ID: RXCHARISK lsb: 0  msb: 7 OUTPUT
			this->RXCHARISK_A0_B = RXCHARISK_A0_B; // net ID: RXCHARISK lsb: 0  msb: 7 OUTPUT
			this->RXCOMMADET_A0_B = RXCOMMADET_A0_B; // net ID: RXCOMMADET lsb: 0  msb: 0 OUTPUT
			this->RXCRCOUT_A31_B = RXCRCOUT_A31_B; // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
			this->RXCRCOUT_A30_B = RXCRCOUT_A30_B; // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
			this->RXCRCOUT_A29_B = RXCRCOUT_A29_B; // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
			this->RXCRCOUT_A28_B = RXCRCOUT_A28_B; // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
			this->RXCRCOUT_A27_B = RXCRCOUT_A27_B; // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
			this->RXCRCOUT_A26_B = RXCRCOUT_A26_B; // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
			this->RXCRCOUT_A25_B = RXCRCOUT_A25_B; // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
			this->RXCRCOUT_A24_B = RXCRCOUT_A24_B; // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
			this->RXCRCOUT_A23_B = RXCRCOUT_A23_B; // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
			this->RXCRCOUT_A22_B = RXCRCOUT_A22_B; // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
			this->RXCRCOUT_A21_B = RXCRCOUT_A21_B; // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
			this->RXCRCOUT_A20_B = RXCRCOUT_A20_B; // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
			this->RXCRCOUT_A19_B = RXCRCOUT_A19_B; // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
			this->RXCRCOUT_A18_B = RXCRCOUT_A18_B; // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
			this->RXCRCOUT_A17_B = RXCRCOUT_A17_B; // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
			this->RXCRCOUT_A16_B = RXCRCOUT_A16_B; // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
			this->RXCRCOUT_A15_B = RXCRCOUT_A15_B; // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
			this->RXCRCOUT_A14_B = RXCRCOUT_A14_B; // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
			this->RXCRCOUT_A13_B = RXCRCOUT_A13_B; // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
			this->RXCRCOUT_A12_B = RXCRCOUT_A12_B; // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
			this->RXCRCOUT_A11_B = RXCRCOUT_A11_B; // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
			this->RXCRCOUT_A10_B = RXCRCOUT_A10_B; // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
			this->RXCRCOUT_A9_B = RXCRCOUT_A9_B; // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
			this->RXCRCOUT_A8_B = RXCRCOUT_A8_B; // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
			this->RXCRCOUT_A7_B = RXCRCOUT_A7_B; // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
			this->RXCRCOUT_A6_B = RXCRCOUT_A6_B; // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
			this->RXCRCOUT_A5_B = RXCRCOUT_A5_B; // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
			this->RXCRCOUT_A4_B = RXCRCOUT_A4_B; // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
			this->RXCRCOUT_A3_B = RXCRCOUT_A3_B; // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
			this->RXCRCOUT_A2_B = RXCRCOUT_A2_B; // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
			this->RXCRCOUT_A1_B = RXCRCOUT_A1_B; // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
			this->RXCRCOUT_A0_B = RXCRCOUT_A0_B; // net ID: RXCRCOUT lsb: 0  msb: 31 OUTPUT
			this->RXCYCLELIMIT_A0_B = RXCYCLELIMIT_A0_B; // net ID: RXCYCLELIMIT lsb: 0  msb: 0 OUTPUT
			this->RXDATA_A63_B = RXDATA_A63_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			this->RXDATA_A62_B = RXDATA_A62_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			this->RXDATA_A61_B = RXDATA_A61_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			this->RXDATA_A60_B = RXDATA_A60_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			this->RXDATA_A59_B = RXDATA_A59_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			this->RXDATA_A58_B = RXDATA_A58_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			this->RXDATA_A57_B = RXDATA_A57_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			this->RXDATA_A56_B = RXDATA_A56_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			this->RXDATA_A55_B = RXDATA_A55_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			this->RXDATA_A54_B = RXDATA_A54_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			this->RXDATA_A53_B = RXDATA_A53_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			this->RXDATA_A52_B = RXDATA_A52_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			this->RXDATA_A51_B = RXDATA_A51_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			this->RXDATA_A50_B = RXDATA_A50_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			this->RXDATA_A49_B = RXDATA_A49_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			this->RXDATA_A48_B = RXDATA_A48_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			this->RXDATA_A47_B = RXDATA_A47_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			this->RXDATA_A46_B = RXDATA_A46_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			this->RXDATA_A45_B = RXDATA_A45_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			this->RXDATA_A44_B = RXDATA_A44_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			this->RXDATA_A43_B = RXDATA_A43_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			this->RXDATA_A42_B = RXDATA_A42_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			this->RXDATA_A41_B = RXDATA_A41_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			this->RXDATA_A40_B = RXDATA_A40_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			this->RXDATA_A39_B = RXDATA_A39_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			this->RXDATA_A38_B = RXDATA_A38_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			this->RXDATA_A37_B = RXDATA_A37_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			this->RXDATA_A36_B = RXDATA_A36_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			this->RXDATA_A35_B = RXDATA_A35_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			this->RXDATA_A34_B = RXDATA_A34_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			this->RXDATA_A33_B = RXDATA_A33_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			this->RXDATA_A32_B = RXDATA_A32_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			this->RXDATA_A31_B = RXDATA_A31_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			this->RXDATA_A30_B = RXDATA_A30_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			this->RXDATA_A29_B = RXDATA_A29_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			this->RXDATA_A28_B = RXDATA_A28_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			this->RXDATA_A27_B = RXDATA_A27_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			this->RXDATA_A26_B = RXDATA_A26_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			this->RXDATA_A25_B = RXDATA_A25_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			this->RXDATA_A24_B = RXDATA_A24_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			this->RXDATA_A23_B = RXDATA_A23_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			this->RXDATA_A22_B = RXDATA_A22_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			this->RXDATA_A21_B = RXDATA_A21_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			this->RXDATA_A20_B = RXDATA_A20_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			this->RXDATA_A19_B = RXDATA_A19_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			this->RXDATA_A18_B = RXDATA_A18_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			this->RXDATA_A17_B = RXDATA_A17_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			this->RXDATA_A16_B = RXDATA_A16_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			this->RXDATA_A15_B = RXDATA_A15_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			this->RXDATA_A14_B = RXDATA_A14_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			this->RXDATA_A13_B = RXDATA_A13_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			this->RXDATA_A12_B = RXDATA_A12_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			this->RXDATA_A11_B = RXDATA_A11_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			this->RXDATA_A10_B = RXDATA_A10_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			this->RXDATA_A9_B = RXDATA_A9_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			this->RXDATA_A8_B = RXDATA_A8_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			this->RXDATA_A7_B = RXDATA_A7_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			this->RXDATA_A6_B = RXDATA_A6_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			this->RXDATA_A5_B = RXDATA_A5_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			this->RXDATA_A4_B = RXDATA_A4_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			this->RXDATA_A3_B = RXDATA_A3_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			this->RXDATA_A2_B = RXDATA_A2_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			this->RXDATA_A1_B = RXDATA_A1_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			this->RXDATA_A0_B = RXDATA_A0_B; // net ID: RXDATA lsb: 0  msb: 63 OUTPUT
			this->RXDISPERR_A7_B = RXDISPERR_A7_B; // net ID: RXDISPERR lsb: 0  msb: 7 OUTPUT
			this->RXDISPERR_A6_B = RXDISPERR_A6_B; // net ID: RXDISPERR lsb: 0  msb: 7 OUTPUT
			this->RXDISPERR_A5_B = RXDISPERR_A5_B; // net ID: RXDISPERR lsb: 0  msb: 7 OUTPUT
			this->RXDISPERR_A4_B = RXDISPERR_A4_B; // net ID: RXDISPERR lsb: 0  msb: 7 OUTPUT
			this->RXDISPERR_A3_B = RXDISPERR_A3_B; // net ID: RXDISPERR lsb: 0  msb: 7 OUTPUT
			this->RXDISPERR_A2_B = RXDISPERR_A2_B; // net ID: RXDISPERR lsb: 0  msb: 7 OUTPUT
			this->RXDISPERR_A1_B = RXDISPERR_A1_B; // net ID: RXDISPERR lsb: 0  msb: 7 OUTPUT
			this->RXDISPERR_A0_B = RXDISPERR_A0_B; // net ID: RXDISPERR lsb: 0  msb: 7 OUTPUT
			this->RXLOCK_A0_B = RXLOCK_A0_B; // net ID: RXLOCK lsb: 0  msb: 0 OUTPUT
			this->RXLOSSOFSYNC_A1_B = RXLOSSOFSYNC_A1_B; // net ID: RXLOSSOFSYNC lsb: 0  msb: 1 OUTPUT
			this->RXLOSSOFSYNC_A0_B = RXLOSSOFSYNC_A0_B; // net ID: RXLOSSOFSYNC lsb: 0  msb: 1 OUTPUT
			this->RXMCLK_A0_B = RXMCLK_A0_B; // net ID: RXMCLK lsb: 0  msb: 0 OUTPUT
			this->RXNOTINTABLE_A7_B = RXNOTINTABLE_A7_B; // net ID: RXNOTINTABLE lsb: 0  msb: 7 OUTPUT
			this->RXNOTINTABLE_A6_B = RXNOTINTABLE_A6_B; // net ID: RXNOTINTABLE lsb: 0  msb: 7 OUTPUT
			this->RXNOTINTABLE_A5_B = RXNOTINTABLE_A5_B; // net ID: RXNOTINTABLE lsb: 0  msb: 7 OUTPUT
			this->RXNOTINTABLE_A4_B = RXNOTINTABLE_A4_B; // net ID: RXNOTINTABLE lsb: 0  msb: 7 OUTPUT
			this->RXNOTINTABLE_A3_B = RXNOTINTABLE_A3_B; // net ID: RXNOTINTABLE lsb: 0  msb: 7 OUTPUT
			this->RXNOTINTABLE_A2_B = RXNOTINTABLE_A2_B; // net ID: RXNOTINTABLE lsb: 0  msb: 7 OUTPUT
			this->RXNOTINTABLE_A1_B = RXNOTINTABLE_A1_B; // net ID: RXNOTINTABLE lsb: 0  msb: 7 OUTPUT
			this->RXNOTINTABLE_A0_B = RXNOTINTABLE_A0_B; // net ID: RXNOTINTABLE lsb: 0  msb: 7 OUTPUT
			this->RXPCSHCLKOUT_A0_B = RXPCSHCLKOUT_A0_B; // net ID: RXPCSHCLKOUT lsb: 0  msb: 0 OUTPUT
			this->RXREALIGN_A0_B = RXREALIGN_A0_B; // net ID: RXREALIGN lsb: 0  msb: 0 OUTPUT
			this->RXRECCLK1_A0_B = RXRECCLK1_A0_B; // net ID: RXRECCLK1 lsb: 0  msb: 0 OUTPUT
			this->RXRECCLK2_A0_B = RXRECCLK2_A0_B; // net ID: RXRECCLK2 lsb: 0  msb: 0 OUTPUT
			this->RXRUNDISP_A7_B = RXRUNDISP_A7_B; // net ID: RXRUNDISP lsb: 0  msb: 7 OUTPUT
			this->RXRUNDISP_A6_B = RXRUNDISP_A6_B; // net ID: RXRUNDISP lsb: 0  msb: 7 OUTPUT
			this->RXRUNDISP_A5_B = RXRUNDISP_A5_B; // net ID: RXRUNDISP lsb: 0  msb: 7 OUTPUT
			this->RXRUNDISP_A4_B = RXRUNDISP_A4_B; // net ID: RXRUNDISP lsb: 0  msb: 7 OUTPUT
			this->RXRUNDISP_A3_B = RXRUNDISP_A3_B; // net ID: RXRUNDISP lsb: 0  msb: 7 OUTPUT
			this->RXRUNDISP_A2_B = RXRUNDISP_A2_B; // net ID: RXRUNDISP lsb: 0  msb: 7 OUTPUT
			this->RXRUNDISP_A1_B = RXRUNDISP_A1_B; // net ID: RXRUNDISP lsb: 0  msb: 7 OUTPUT
			this->RXRUNDISP_A0_B = RXRUNDISP_A0_B; // net ID: RXRUNDISP lsb: 0  msb: 7 OUTPUT
			this->RXSIGDET_A0_B = RXSIGDET_A0_B; // net ID: RXSIGDET lsb: 0  msb: 0 OUTPUT
			this->RXSTATUS_A5_B = RXSTATUS_A5_B; // net ID: RXSTATUS lsb: 0  msb: 5 OUTPUT
			this->RXSTATUS_A4_B = RXSTATUS_A4_B; // net ID: RXSTATUS lsb: 0  msb: 5 OUTPUT
			this->RXSTATUS_A3_B = RXSTATUS_A3_B; // net ID: RXSTATUS lsb: 0  msb: 5 OUTPUT
			this->RXSTATUS_A2_B = RXSTATUS_A2_B; // net ID: RXSTATUS lsb: 0  msb: 5 OUTPUT
			this->RXSTATUS_A1_B = RXSTATUS_A1_B; // net ID: RXSTATUS lsb: 0  msb: 5 OUTPUT
			this->RXSTATUS_A0_B = RXSTATUS_A0_B; // net ID: RXSTATUS lsb: 0  msb: 5 OUTPUT
			this->TX1N_A0_B = TX1N_A0_B; // net ID: TX1N lsb: 0  msb: 0 OUTPUT
			this->TX1P_A0_B = TX1P_A0_B; // net ID: TX1P lsb: 0  msb: 0 OUTPUT
			this->TXBUFERR_A0_B = TXBUFERR_A0_B; // net ID: TXBUFERR lsb: 0  msb: 0 OUTPUT
			this->TXCALFAIL_A0_B = TXCALFAIL_A0_B; // net ID: TXCALFAIL lsb: 0  msb: 0 OUTPUT
			this->TXCRCOUT_A31_B = TXCRCOUT_A31_B; // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
			this->TXCRCOUT_A30_B = TXCRCOUT_A30_B; // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
			this->TXCRCOUT_A29_B = TXCRCOUT_A29_B; // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
			this->TXCRCOUT_A28_B = TXCRCOUT_A28_B; // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
			this->TXCRCOUT_A27_B = TXCRCOUT_A27_B; // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
			this->TXCRCOUT_A26_B = TXCRCOUT_A26_B; // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
			this->TXCRCOUT_A25_B = TXCRCOUT_A25_B; // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
			this->TXCRCOUT_A24_B = TXCRCOUT_A24_B; // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
			this->TXCRCOUT_A23_B = TXCRCOUT_A23_B; // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
			this->TXCRCOUT_A22_B = TXCRCOUT_A22_B; // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
			this->TXCRCOUT_A21_B = TXCRCOUT_A21_B; // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
			this->TXCRCOUT_A20_B = TXCRCOUT_A20_B; // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
			this->TXCRCOUT_A19_B = TXCRCOUT_A19_B; // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
			this->TXCRCOUT_A18_B = TXCRCOUT_A18_B; // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
			this->TXCRCOUT_A17_B = TXCRCOUT_A17_B; // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
			this->TXCRCOUT_A16_B = TXCRCOUT_A16_B; // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
			this->TXCRCOUT_A15_B = TXCRCOUT_A15_B; // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
			this->TXCRCOUT_A14_B = TXCRCOUT_A14_B; // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
			this->TXCRCOUT_A13_B = TXCRCOUT_A13_B; // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
			this->TXCRCOUT_A12_B = TXCRCOUT_A12_B; // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
			this->TXCRCOUT_A11_B = TXCRCOUT_A11_B; // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
			this->TXCRCOUT_A10_B = TXCRCOUT_A10_B; // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
			this->TXCRCOUT_A9_B = TXCRCOUT_A9_B; // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
			this->TXCRCOUT_A8_B = TXCRCOUT_A8_B; // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
			this->TXCRCOUT_A7_B = TXCRCOUT_A7_B; // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
			this->TXCRCOUT_A6_B = TXCRCOUT_A6_B; // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
			this->TXCRCOUT_A5_B = TXCRCOUT_A5_B; // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
			this->TXCRCOUT_A4_B = TXCRCOUT_A4_B; // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
			this->TXCRCOUT_A3_B = TXCRCOUT_A3_B; // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
			this->TXCRCOUT_A2_B = TXCRCOUT_A2_B; // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
			this->TXCRCOUT_A1_B = TXCRCOUT_A1_B; // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
			this->TXCRCOUT_A0_B = TXCRCOUT_A0_B; // net ID: TXCRCOUT lsb: 0  msb: 31 OUTPUT
			this->TXCYCLELIMIT_A0_B = TXCYCLELIMIT_A0_B; // net ID: TXCYCLELIMIT lsb: 0  msb: 0 OUTPUT
			this->TXKERR_A7_B = TXKERR_A7_B; // net ID: TXKERR lsb: 0  msb: 7 OUTPUT
			this->TXKERR_A6_B = TXKERR_A6_B; // net ID: TXKERR lsb: 0  msb: 7 OUTPUT
			this->TXKERR_A5_B = TXKERR_A5_B; // net ID: TXKERR lsb: 0  msb: 7 OUTPUT
			this->TXKERR_A4_B = TXKERR_A4_B; // net ID: TXKERR lsb: 0  msb: 7 OUTPUT
			this->TXKERR_A3_B = TXKERR_A3_B; // net ID: TXKERR lsb: 0  msb: 7 OUTPUT
			this->TXKERR_A2_B = TXKERR_A2_B; // net ID: TXKERR lsb: 0  msb: 7 OUTPUT
			this->TXKERR_A1_B = TXKERR_A1_B; // net ID: TXKERR lsb: 0  msb: 7 OUTPUT
			this->TXKERR_A0_B = TXKERR_A0_B; // net ID: TXKERR lsb: 0  msb: 7 OUTPUT
			this->TXLOCK_A0_B = TXLOCK_A0_B; // net ID: TXLOCK lsb: 0  msb: 0 OUTPUT
			this->TXOUTCLK1_A0_B = TXOUTCLK1_A0_B; // net ID: TXOUTCLK1 lsb: 0  msb: 0 OUTPUT
			this->TXOUTCLK2_A0_B = TXOUTCLK2_A0_B; // net ID: TXOUTCLK2 lsb: 0  msb: 0 OUTPUT
			this->TXPCSHCLKOUT_A0_B = TXPCSHCLKOUT_A0_B; // net ID: TXPCSHCLKOUT lsb: 0  msb: 0 OUTPUT
			this->TXRUNDISP_A7_B = TXRUNDISP_A7_B; // net ID: TXRUNDISP lsb: 0  msb: 7 OUTPUT
			this->TXRUNDISP_A6_B = TXRUNDISP_A6_B; // net ID: TXRUNDISP lsb: 0  msb: 7 OUTPUT
			this->TXRUNDISP_A5_B = TXRUNDISP_A5_B; // net ID: TXRUNDISP lsb: 0  msb: 7 OUTPUT
			this->TXRUNDISP_A4_B = TXRUNDISP_A4_B; // net ID: TXRUNDISP lsb: 0  msb: 7 OUTPUT
			this->TXRUNDISP_A3_B = TXRUNDISP_A3_B; // net ID: TXRUNDISP lsb: 0  msb: 7 OUTPUT
			this->TXRUNDISP_A2_B = TXRUNDISP_A2_B; // net ID: TXRUNDISP lsb: 0  msb: 7 OUTPUT
			this->TXRUNDISP_A1_B = TXRUNDISP_A1_B; // net ID: TXRUNDISP lsb: 0  msb: 7 OUTPUT
			this->TXRUNDISP_A0_B = TXRUNDISP_A0_B; // net ID: TXRUNDISP lsb: 0  msb: 7 OUTPUT
			this->CHBONDI_A4_B = CHBONDI_A4_B; // net ID: CHBONDI lsb: 0  msb: 4 INPUT
			this->CHBONDI_A3_B = CHBONDI_A3_B; // net ID: CHBONDI lsb: 0  msb: 4 INPUT
			this->CHBONDI_A2_B = CHBONDI_A2_B; // net ID: CHBONDI lsb: 0  msb: 4 INPUT
			this->CHBONDI_A1_B = CHBONDI_A1_B; // net ID: CHBONDI lsb: 0  msb: 4 INPUT
			this->CHBONDI_A0_B = CHBONDI_A0_B; // net ID: CHBONDI lsb: 0  msb: 4 INPUT
			this->COMBUSIN_A15_B = COMBUSIN_A15_B; // net ID: COMBUSIN lsb: 0  msb: 15 INPUT
			this->COMBUSIN_A14_B = COMBUSIN_A14_B; // net ID: COMBUSIN lsb: 0  msb: 15 INPUT
			this->COMBUSIN_A13_B = COMBUSIN_A13_B; // net ID: COMBUSIN lsb: 0  msb: 15 INPUT
			this->COMBUSIN_A12_B = COMBUSIN_A12_B; // net ID: COMBUSIN lsb: 0  msb: 15 INPUT
			this->COMBUSIN_A11_B = COMBUSIN_A11_B; // net ID: COMBUSIN lsb: 0  msb: 15 INPUT
			this->COMBUSIN_A10_B = COMBUSIN_A10_B; // net ID: COMBUSIN lsb: 0  msb: 15 INPUT
			this->COMBUSIN_A9_B = COMBUSIN_A9_B; // net ID: COMBUSIN lsb: 0  msb: 15 INPUT
			this->COMBUSIN_A8_B = COMBUSIN_A8_B; // net ID: COMBUSIN lsb: 0  msb: 15 INPUT
			this->COMBUSIN_A7_B = COMBUSIN_A7_B; // net ID: COMBUSIN lsb: 0  msb: 15 INPUT
			this->COMBUSIN_A6_B = COMBUSIN_A6_B; // net ID: COMBUSIN lsb: 0  msb: 15 INPUT
			this->COMBUSIN_A5_B = COMBUSIN_A5_B; // net ID: COMBUSIN lsb: 0  msb: 15 INPUT
			this->COMBUSIN_A4_B = COMBUSIN_A4_B; // net ID: COMBUSIN lsb: 0  msb: 15 INPUT
			this->COMBUSIN_A3_B = COMBUSIN_A3_B; // net ID: COMBUSIN lsb: 0  msb: 15 INPUT
			this->COMBUSIN_A2_B = COMBUSIN_A2_B; // net ID: COMBUSIN lsb: 0  msb: 15 INPUT
			this->COMBUSIN_A1_B = COMBUSIN_A1_B; // net ID: COMBUSIN lsb: 0  msb: 15 INPUT
			this->COMBUSIN_A0_B = COMBUSIN_A0_B; // net ID: COMBUSIN lsb: 0  msb: 15 INPUT
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
			this->ENCHANSYNC_A0_B = ENCHANSYNC_A0_B; // net ID: ENCHANSYNC lsb: 0  msb: 0 INPUT
			this->ENMCOMMAALIGN_A0_B = ENMCOMMAALIGN_A0_B; // net ID: ENMCOMMAALIGN lsb: 0  msb: 0 INPUT
			this->ENPCOMMAALIGN_A0_B = ENPCOMMAALIGN_A0_B; // net ID: ENPCOMMAALIGN lsb: 0  msb: 0 INPUT
			this->GREFCLK_A0_B = GREFCLK_A0_B; // net ID: GREFCLK lsb: 0  msb: 0 INPUT
			this->LOOPBACK_A1_B = LOOPBACK_A1_B; // net ID: LOOPBACK lsb: 0  msb: 1 INPUT
			this->LOOPBACK_A0_B = LOOPBACK_A0_B; // net ID: LOOPBACK lsb: 0  msb: 1 INPUT
			this->POWERDOWN_A0_B = POWERDOWN_A0_B; // net ID: POWERDOWN lsb: 0  msb: 0 INPUT
			this->REFCLK1_A0_B = REFCLK1_A0_B; // net ID: REFCLK1 lsb: 0  msb: 0 INPUT
			this->REFCLK2_A0_B = REFCLK2_A0_B; // net ID: REFCLK2 lsb: 0  msb: 0 INPUT
			this->RX1N_A0_B = RX1N_A0_B; // net ID: RX1N lsb: 0  msb: 0 INPUT
			this->RX1P_A0_B = RX1P_A0_B; // net ID: RX1P lsb: 0  msb: 0 INPUT
			this->RXBLOCKSYNC64B66BUSE_A0_B = RXBLOCKSYNC64B66BUSE_A0_B; // net ID: RXBLOCKSYNC64B66BUSE lsb: 0  msb: 0 INPUT
			this->RXCLKSTABLE_A0_B = RXCLKSTABLE_A0_B; // net ID: RXCLKSTABLE lsb: 0  msb: 0 INPUT
			this->RXCOMMADETUSE_A0_B = RXCOMMADETUSE_A0_B; // net ID: RXCOMMADETUSE lsb: 0  msb: 0 INPUT
			this->RXCRCCLK_A0_B = RXCRCCLK_A0_B; // net ID: RXCRCCLK lsb: 0  msb: 0 INPUT
			this->RXCRCDATAVALID_A0_B = RXCRCDATAVALID_A0_B; // net ID: RXCRCDATAVALID lsb: 0  msb: 0 INPUT
			this->RXCRCDATAWIDTH_A2_B = RXCRCDATAWIDTH_A2_B; // net ID: RXCRCDATAWIDTH lsb: 0  msb: 2 INPUT
			this->RXCRCDATAWIDTH_A1_B = RXCRCDATAWIDTH_A1_B; // net ID: RXCRCDATAWIDTH lsb: 0  msb: 2 INPUT
			this->RXCRCDATAWIDTH_A0_B = RXCRCDATAWIDTH_A0_B; // net ID: RXCRCDATAWIDTH lsb: 0  msb: 2 INPUT
			this->RXCRCIN_A63_B = RXCRCIN_A63_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			this->RXCRCIN_A62_B = RXCRCIN_A62_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			this->RXCRCIN_A61_B = RXCRCIN_A61_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			this->RXCRCIN_A60_B = RXCRCIN_A60_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			this->RXCRCIN_A59_B = RXCRCIN_A59_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			this->RXCRCIN_A58_B = RXCRCIN_A58_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			this->RXCRCIN_A57_B = RXCRCIN_A57_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			this->RXCRCIN_A56_B = RXCRCIN_A56_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			this->RXCRCIN_A55_B = RXCRCIN_A55_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			this->RXCRCIN_A54_B = RXCRCIN_A54_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			this->RXCRCIN_A53_B = RXCRCIN_A53_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			this->RXCRCIN_A52_B = RXCRCIN_A52_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			this->RXCRCIN_A51_B = RXCRCIN_A51_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			this->RXCRCIN_A50_B = RXCRCIN_A50_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			this->RXCRCIN_A49_B = RXCRCIN_A49_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			this->RXCRCIN_A48_B = RXCRCIN_A48_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			this->RXCRCIN_A47_B = RXCRCIN_A47_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			this->RXCRCIN_A46_B = RXCRCIN_A46_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			this->RXCRCIN_A45_B = RXCRCIN_A45_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			this->RXCRCIN_A44_B = RXCRCIN_A44_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			this->RXCRCIN_A43_B = RXCRCIN_A43_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			this->RXCRCIN_A42_B = RXCRCIN_A42_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			this->RXCRCIN_A41_B = RXCRCIN_A41_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			this->RXCRCIN_A40_B = RXCRCIN_A40_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			this->RXCRCIN_A39_B = RXCRCIN_A39_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			this->RXCRCIN_A38_B = RXCRCIN_A38_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			this->RXCRCIN_A37_B = RXCRCIN_A37_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			this->RXCRCIN_A36_B = RXCRCIN_A36_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			this->RXCRCIN_A35_B = RXCRCIN_A35_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			this->RXCRCIN_A34_B = RXCRCIN_A34_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			this->RXCRCIN_A33_B = RXCRCIN_A33_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			this->RXCRCIN_A32_B = RXCRCIN_A32_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			this->RXCRCIN_A31_B = RXCRCIN_A31_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			this->RXCRCIN_A30_B = RXCRCIN_A30_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			this->RXCRCIN_A29_B = RXCRCIN_A29_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			this->RXCRCIN_A28_B = RXCRCIN_A28_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			this->RXCRCIN_A27_B = RXCRCIN_A27_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			this->RXCRCIN_A26_B = RXCRCIN_A26_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			this->RXCRCIN_A25_B = RXCRCIN_A25_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			this->RXCRCIN_A24_B = RXCRCIN_A24_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			this->RXCRCIN_A23_B = RXCRCIN_A23_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			this->RXCRCIN_A22_B = RXCRCIN_A22_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			this->RXCRCIN_A21_B = RXCRCIN_A21_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			this->RXCRCIN_A20_B = RXCRCIN_A20_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			this->RXCRCIN_A19_B = RXCRCIN_A19_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			this->RXCRCIN_A18_B = RXCRCIN_A18_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			this->RXCRCIN_A17_B = RXCRCIN_A17_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			this->RXCRCIN_A16_B = RXCRCIN_A16_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			this->RXCRCIN_A15_B = RXCRCIN_A15_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			this->RXCRCIN_A14_B = RXCRCIN_A14_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			this->RXCRCIN_A13_B = RXCRCIN_A13_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			this->RXCRCIN_A12_B = RXCRCIN_A12_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			this->RXCRCIN_A11_B = RXCRCIN_A11_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			this->RXCRCIN_A10_B = RXCRCIN_A10_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			this->RXCRCIN_A9_B = RXCRCIN_A9_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			this->RXCRCIN_A8_B = RXCRCIN_A8_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			this->RXCRCIN_A7_B = RXCRCIN_A7_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			this->RXCRCIN_A6_B = RXCRCIN_A6_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			this->RXCRCIN_A5_B = RXCRCIN_A5_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			this->RXCRCIN_A4_B = RXCRCIN_A4_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			this->RXCRCIN_A3_B = RXCRCIN_A3_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			this->RXCRCIN_A2_B = RXCRCIN_A2_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			this->RXCRCIN_A1_B = RXCRCIN_A1_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			this->RXCRCIN_A0_B = RXCRCIN_A0_B; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			this->RXCRCINIT_A0_B = RXCRCINIT_A0_B; // net ID: RXCRCINIT lsb: 0  msb: 0 INPUT
			this->RXCRCINTCLK_A0_B = RXCRCINTCLK_A0_B; // net ID: RXCRCINTCLK lsb: 0  msb: 0 INPUT
			this->RXCRCPD_A0_B = RXCRCPD_A0_B; // net ID: RXCRCPD lsb: 0  msb: 0 INPUT
			this->RXCRCRESET_A0_B = RXCRCRESET_A0_B; // net ID: RXCRCRESET lsb: 0  msb: 0 INPUT
			this->RXDATAWIDTH_A1_B = RXDATAWIDTH_A1_B; // net ID: RXDATAWIDTH lsb: 0  msb: 1 INPUT
			this->RXDATAWIDTH_A0_B = RXDATAWIDTH_A0_B; // net ID: RXDATAWIDTH lsb: 0  msb: 1 INPUT
			this->RXDEC64B66BUSE_A0_B = RXDEC64B66BUSE_A0_B; // net ID: RXDEC64B66BUSE lsb: 0  msb: 0 INPUT
			this->RXDEC8B10BUSE_A0_B = RXDEC8B10BUSE_A0_B; // net ID: RXDEC8B10BUSE lsb: 0  msb: 0 INPUT
			this->RXDESCRAM64B66BUSE_A0_B = RXDESCRAM64B66BUSE_A0_B; // net ID: RXDESCRAM64B66BUSE lsb: 0  msb: 0 INPUT
			this->RXIGNOREBTF_A0_B = RXIGNOREBTF_A0_B; // net ID: RXIGNOREBTF lsb: 0  msb: 0 INPUT
			this->RXINTDATAWIDTH_A1_B = RXINTDATAWIDTH_A1_B; // net ID: RXINTDATAWIDTH lsb: 0  msb: 1 INPUT
			this->RXINTDATAWIDTH_A0_B = RXINTDATAWIDTH_A0_B; // net ID: RXINTDATAWIDTH lsb: 0  msb: 1 INPUT
			this->RXPMARESET_A0_B = RXPMARESET_A0_B; // net ID: RXPMARESET lsb: 0  msb: 0 INPUT
			this->RXPOLARITY_A0_B = RXPOLARITY_A0_B; // net ID: RXPOLARITY lsb: 0  msb: 0 INPUT
			this->RXRESET_A0_B = RXRESET_A0_B; // net ID: RXRESET lsb: 0  msb: 0 INPUT
			this->RXSLIDE_A0_B = RXSLIDE_A0_B; // net ID: RXSLIDE lsb: 0  msb: 0 INPUT
			this->RXSYNC_A0_B = RXSYNC_A0_B; // net ID: RXSYNC lsb: 0  msb: 0 INPUT
			this->RXUSRCLK_A0_B = RXUSRCLK_A0_B; // net ID: RXUSRCLK lsb: 0  msb: 0 INPUT
			this->RXUSRCLK2_A0_B = RXUSRCLK2_A0_B; // net ID: RXUSRCLK2 lsb: 0  msb: 0 INPUT
			this->TXBYPASS8B10B_A7_B = TXBYPASS8B10B_A7_B; // net ID: TXBYPASS8B10B lsb: 0  msb: 7 INPUT
			this->TXBYPASS8B10B_A6_B = TXBYPASS8B10B_A6_B; // net ID: TXBYPASS8B10B lsb: 0  msb: 7 INPUT
			this->TXBYPASS8B10B_A5_B = TXBYPASS8B10B_A5_B; // net ID: TXBYPASS8B10B lsb: 0  msb: 7 INPUT
			this->TXBYPASS8B10B_A4_B = TXBYPASS8B10B_A4_B; // net ID: TXBYPASS8B10B lsb: 0  msb: 7 INPUT
			this->TXBYPASS8B10B_A3_B = TXBYPASS8B10B_A3_B; // net ID: TXBYPASS8B10B lsb: 0  msb: 7 INPUT
			this->TXBYPASS8B10B_A2_B = TXBYPASS8B10B_A2_B; // net ID: TXBYPASS8B10B lsb: 0  msb: 7 INPUT
			this->TXBYPASS8B10B_A1_B = TXBYPASS8B10B_A1_B; // net ID: TXBYPASS8B10B lsb: 0  msb: 7 INPUT
			this->TXBYPASS8B10B_A0_B = TXBYPASS8B10B_A0_B; // net ID: TXBYPASS8B10B lsb: 0  msb: 7 INPUT
			this->TXCHARDISPMODE_A7_B = TXCHARDISPMODE_A7_B; // net ID: TXCHARDISPMODE lsb: 0  msb: 7 INPUT
			this->TXCHARDISPMODE_A6_B = TXCHARDISPMODE_A6_B; // net ID: TXCHARDISPMODE lsb: 0  msb: 7 INPUT
			this->TXCHARDISPMODE_A5_B = TXCHARDISPMODE_A5_B; // net ID: TXCHARDISPMODE lsb: 0  msb: 7 INPUT
			this->TXCHARDISPMODE_A4_B = TXCHARDISPMODE_A4_B; // net ID: TXCHARDISPMODE lsb: 0  msb: 7 INPUT
			this->TXCHARDISPMODE_A3_B = TXCHARDISPMODE_A3_B; // net ID: TXCHARDISPMODE lsb: 0  msb: 7 INPUT
			this->TXCHARDISPMODE_A2_B = TXCHARDISPMODE_A2_B; // net ID: TXCHARDISPMODE lsb: 0  msb: 7 INPUT
			this->TXCHARDISPMODE_A1_B = TXCHARDISPMODE_A1_B; // net ID: TXCHARDISPMODE lsb: 0  msb: 7 INPUT
			this->TXCHARDISPMODE_A0_B = TXCHARDISPMODE_A0_B; // net ID: TXCHARDISPMODE lsb: 0  msb: 7 INPUT
			this->TXCHARDISPVAL_A7_B = TXCHARDISPVAL_A7_B; // net ID: TXCHARDISPVAL lsb: 0  msb: 7 INPUT
			this->TXCHARDISPVAL_A6_B = TXCHARDISPVAL_A6_B; // net ID: TXCHARDISPVAL lsb: 0  msb: 7 INPUT
			this->TXCHARDISPVAL_A5_B = TXCHARDISPVAL_A5_B; // net ID: TXCHARDISPVAL lsb: 0  msb: 7 INPUT
			this->TXCHARDISPVAL_A4_B = TXCHARDISPVAL_A4_B; // net ID: TXCHARDISPVAL lsb: 0  msb: 7 INPUT
			this->TXCHARDISPVAL_A3_B = TXCHARDISPVAL_A3_B; // net ID: TXCHARDISPVAL lsb: 0  msb: 7 INPUT
			this->TXCHARDISPVAL_A2_B = TXCHARDISPVAL_A2_B; // net ID: TXCHARDISPVAL lsb: 0  msb: 7 INPUT
			this->TXCHARDISPVAL_A1_B = TXCHARDISPVAL_A1_B; // net ID: TXCHARDISPVAL lsb: 0  msb: 7 INPUT
			this->TXCHARDISPVAL_A0_B = TXCHARDISPVAL_A0_B; // net ID: TXCHARDISPVAL lsb: 0  msb: 7 INPUT
			this->TXCHARISK_A7_B = TXCHARISK_A7_B; // net ID: TXCHARISK lsb: 0  msb: 7 INPUT
			this->TXCHARISK_A6_B = TXCHARISK_A6_B; // net ID: TXCHARISK lsb: 0  msb: 7 INPUT
			this->TXCHARISK_A5_B = TXCHARISK_A5_B; // net ID: TXCHARISK lsb: 0  msb: 7 INPUT
			this->TXCHARISK_A4_B = TXCHARISK_A4_B; // net ID: TXCHARISK lsb: 0  msb: 7 INPUT
			this->TXCHARISK_A3_B = TXCHARISK_A3_B; // net ID: TXCHARISK lsb: 0  msb: 7 INPUT
			this->TXCHARISK_A2_B = TXCHARISK_A2_B; // net ID: TXCHARISK lsb: 0  msb: 7 INPUT
			this->TXCHARISK_A1_B = TXCHARISK_A1_B; // net ID: TXCHARISK lsb: 0  msb: 7 INPUT
			this->TXCHARISK_A0_B = TXCHARISK_A0_B; // net ID: TXCHARISK lsb: 0  msb: 7 INPUT
			this->TXCLKSTABLE_A0_B = TXCLKSTABLE_A0_B; // net ID: TXCLKSTABLE lsb: 0  msb: 0 INPUT
			this->TXCRCCLK_A0_B = TXCRCCLK_A0_B; // net ID: TXCRCCLK lsb: 0  msb: 0 INPUT
			this->TXCRCDATAVALID_A0_B = TXCRCDATAVALID_A0_B; // net ID: TXCRCDATAVALID lsb: 0  msb: 0 INPUT
			this->TXCRCDATAWIDTH_A2_B = TXCRCDATAWIDTH_A2_B; // net ID: TXCRCDATAWIDTH lsb: 0  msb: 2 INPUT
			this->TXCRCDATAWIDTH_A1_B = TXCRCDATAWIDTH_A1_B; // net ID: TXCRCDATAWIDTH lsb: 0  msb: 2 INPUT
			this->TXCRCDATAWIDTH_A0_B = TXCRCDATAWIDTH_A0_B; // net ID: TXCRCDATAWIDTH lsb: 0  msb: 2 INPUT
			this->TXCRCIN_A63_B = TXCRCIN_A63_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			this->TXCRCIN_A62_B = TXCRCIN_A62_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			this->TXCRCIN_A61_B = TXCRCIN_A61_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			this->TXCRCIN_A60_B = TXCRCIN_A60_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			this->TXCRCIN_A59_B = TXCRCIN_A59_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			this->TXCRCIN_A58_B = TXCRCIN_A58_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			this->TXCRCIN_A57_B = TXCRCIN_A57_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			this->TXCRCIN_A56_B = TXCRCIN_A56_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			this->TXCRCIN_A55_B = TXCRCIN_A55_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			this->TXCRCIN_A54_B = TXCRCIN_A54_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			this->TXCRCIN_A53_B = TXCRCIN_A53_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			this->TXCRCIN_A52_B = TXCRCIN_A52_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			this->TXCRCIN_A51_B = TXCRCIN_A51_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			this->TXCRCIN_A50_B = TXCRCIN_A50_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			this->TXCRCIN_A49_B = TXCRCIN_A49_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			this->TXCRCIN_A48_B = TXCRCIN_A48_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			this->TXCRCIN_A47_B = TXCRCIN_A47_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			this->TXCRCIN_A46_B = TXCRCIN_A46_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			this->TXCRCIN_A45_B = TXCRCIN_A45_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			this->TXCRCIN_A44_B = TXCRCIN_A44_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			this->TXCRCIN_A43_B = TXCRCIN_A43_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			this->TXCRCIN_A42_B = TXCRCIN_A42_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			this->TXCRCIN_A41_B = TXCRCIN_A41_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			this->TXCRCIN_A40_B = TXCRCIN_A40_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			this->TXCRCIN_A39_B = TXCRCIN_A39_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			this->TXCRCIN_A38_B = TXCRCIN_A38_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			this->TXCRCIN_A37_B = TXCRCIN_A37_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			this->TXCRCIN_A36_B = TXCRCIN_A36_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			this->TXCRCIN_A35_B = TXCRCIN_A35_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			this->TXCRCIN_A34_B = TXCRCIN_A34_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			this->TXCRCIN_A33_B = TXCRCIN_A33_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			this->TXCRCIN_A32_B = TXCRCIN_A32_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			this->TXCRCIN_A31_B = TXCRCIN_A31_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			this->TXCRCIN_A30_B = TXCRCIN_A30_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			this->TXCRCIN_A29_B = TXCRCIN_A29_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			this->TXCRCIN_A28_B = TXCRCIN_A28_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			this->TXCRCIN_A27_B = TXCRCIN_A27_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			this->TXCRCIN_A26_B = TXCRCIN_A26_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			this->TXCRCIN_A25_B = TXCRCIN_A25_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			this->TXCRCIN_A24_B = TXCRCIN_A24_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			this->TXCRCIN_A23_B = TXCRCIN_A23_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			this->TXCRCIN_A22_B = TXCRCIN_A22_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			this->TXCRCIN_A21_B = TXCRCIN_A21_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			this->TXCRCIN_A20_B = TXCRCIN_A20_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			this->TXCRCIN_A19_B = TXCRCIN_A19_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			this->TXCRCIN_A18_B = TXCRCIN_A18_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			this->TXCRCIN_A17_B = TXCRCIN_A17_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			this->TXCRCIN_A16_B = TXCRCIN_A16_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			this->TXCRCIN_A15_B = TXCRCIN_A15_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			this->TXCRCIN_A14_B = TXCRCIN_A14_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			this->TXCRCIN_A13_B = TXCRCIN_A13_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			this->TXCRCIN_A12_B = TXCRCIN_A12_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			this->TXCRCIN_A11_B = TXCRCIN_A11_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			this->TXCRCIN_A10_B = TXCRCIN_A10_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			this->TXCRCIN_A9_B = TXCRCIN_A9_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			this->TXCRCIN_A8_B = TXCRCIN_A8_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			this->TXCRCIN_A7_B = TXCRCIN_A7_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			this->TXCRCIN_A6_B = TXCRCIN_A6_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			this->TXCRCIN_A5_B = TXCRCIN_A5_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			this->TXCRCIN_A4_B = TXCRCIN_A4_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			this->TXCRCIN_A3_B = TXCRCIN_A3_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			this->TXCRCIN_A2_B = TXCRCIN_A2_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			this->TXCRCIN_A1_B = TXCRCIN_A1_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			this->TXCRCIN_A0_B = TXCRCIN_A0_B; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			this->TXCRCINIT_A0_B = TXCRCINIT_A0_B; // net ID: TXCRCINIT lsb: 0  msb: 0 INPUT
			this->TXCRCINTCLK_A0_B = TXCRCINTCLK_A0_B; // net ID: TXCRCINTCLK lsb: 0  msb: 0 INPUT
			this->TXCRCPD_A0_B = TXCRCPD_A0_B; // net ID: TXCRCPD lsb: 0  msb: 0 INPUT
			this->TXCRCRESET_A0_B = TXCRCRESET_A0_B; // net ID: TXCRCRESET lsb: 0  msb: 0 INPUT
			this->TXDATA_A63_B = TXDATA_A63_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
			this->TXDATA_A62_B = TXDATA_A62_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
			this->TXDATA_A61_B = TXDATA_A61_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
			this->TXDATA_A60_B = TXDATA_A60_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
			this->TXDATA_A59_B = TXDATA_A59_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
			this->TXDATA_A58_B = TXDATA_A58_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
			this->TXDATA_A57_B = TXDATA_A57_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
			this->TXDATA_A56_B = TXDATA_A56_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
			this->TXDATA_A55_B = TXDATA_A55_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
			this->TXDATA_A54_B = TXDATA_A54_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
			this->TXDATA_A53_B = TXDATA_A53_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
			this->TXDATA_A52_B = TXDATA_A52_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
			this->TXDATA_A51_B = TXDATA_A51_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
			this->TXDATA_A50_B = TXDATA_A50_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
			this->TXDATA_A49_B = TXDATA_A49_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
			this->TXDATA_A48_B = TXDATA_A48_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
			this->TXDATA_A47_B = TXDATA_A47_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
			this->TXDATA_A46_B = TXDATA_A46_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
			this->TXDATA_A45_B = TXDATA_A45_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
			this->TXDATA_A44_B = TXDATA_A44_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
			this->TXDATA_A43_B = TXDATA_A43_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
			this->TXDATA_A42_B = TXDATA_A42_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
			this->TXDATA_A41_B = TXDATA_A41_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
			this->TXDATA_A40_B = TXDATA_A40_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
			this->TXDATA_A39_B = TXDATA_A39_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
			this->TXDATA_A38_B = TXDATA_A38_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
			this->TXDATA_A37_B = TXDATA_A37_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
			this->TXDATA_A36_B = TXDATA_A36_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
			this->TXDATA_A35_B = TXDATA_A35_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
			this->TXDATA_A34_B = TXDATA_A34_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
			this->TXDATA_A33_B = TXDATA_A33_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
			this->TXDATA_A32_B = TXDATA_A32_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
			this->TXDATA_A31_B = TXDATA_A31_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
			this->TXDATA_A30_B = TXDATA_A30_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
			this->TXDATA_A29_B = TXDATA_A29_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
			this->TXDATA_A28_B = TXDATA_A28_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
			this->TXDATA_A27_B = TXDATA_A27_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
			this->TXDATA_A26_B = TXDATA_A26_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
			this->TXDATA_A25_B = TXDATA_A25_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
			this->TXDATA_A24_B = TXDATA_A24_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
			this->TXDATA_A23_B = TXDATA_A23_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
			this->TXDATA_A22_B = TXDATA_A22_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
			this->TXDATA_A21_B = TXDATA_A21_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
			this->TXDATA_A20_B = TXDATA_A20_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
			this->TXDATA_A19_B = TXDATA_A19_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
			this->TXDATA_A18_B = TXDATA_A18_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
			this->TXDATA_A17_B = TXDATA_A17_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
			this->TXDATA_A16_B = TXDATA_A16_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
			this->TXDATA_A15_B = TXDATA_A15_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
			this->TXDATA_A14_B = TXDATA_A14_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
			this->TXDATA_A13_B = TXDATA_A13_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
			this->TXDATA_A12_B = TXDATA_A12_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
			this->TXDATA_A11_B = TXDATA_A11_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
			this->TXDATA_A10_B = TXDATA_A10_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
			this->TXDATA_A9_B = TXDATA_A9_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
			this->TXDATA_A8_B = TXDATA_A8_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
			this->TXDATA_A7_B = TXDATA_A7_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
			this->TXDATA_A6_B = TXDATA_A6_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
			this->TXDATA_A5_B = TXDATA_A5_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
			this->TXDATA_A4_B = TXDATA_A4_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
			this->TXDATA_A3_B = TXDATA_A3_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
			this->TXDATA_A2_B = TXDATA_A2_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
			this->TXDATA_A1_B = TXDATA_A1_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
			this->TXDATA_A0_B = TXDATA_A0_B; // net ID: TXDATA lsb: 0  msb: 63 INPUT
			this->TXDATAWIDTH_A1_B = TXDATAWIDTH_A1_B; // net ID: TXDATAWIDTH lsb: 0  msb: 1 INPUT
			this->TXDATAWIDTH_A0_B = TXDATAWIDTH_A0_B; // net ID: TXDATAWIDTH lsb: 0  msb: 1 INPUT
			this->TXENC64B66BUSE_A0_B = TXENC64B66BUSE_A0_B; // net ID: TXENC64B66BUSE lsb: 0  msb: 0 INPUT
			this->TXENC8B10BUSE_A0_B = TXENC8B10BUSE_A0_B; // net ID: TXENC8B10BUSE lsb: 0  msb: 0 INPUT
			this->TXENOOB_A0_B = TXENOOB_A0_B; // net ID: TXENOOB lsb: 0  msb: 0 INPUT
			this->TXGEARBOX64B66BUSE_A0_B = TXGEARBOX64B66BUSE_A0_B; // net ID: TXGEARBOX64B66BUSE lsb: 0  msb: 0 INPUT
			this->TXINHIBIT_A0_B = TXINHIBIT_A0_B; // net ID: TXINHIBIT lsb: 0  msb: 0 INPUT
			this->TXINTDATAWIDTH_A1_B = TXINTDATAWIDTH_A1_B; // net ID: TXINTDATAWIDTH lsb: 0  msb: 1 INPUT
			this->TXINTDATAWIDTH_A0_B = TXINTDATAWIDTH_A0_B; // net ID: TXINTDATAWIDTH lsb: 0  msb: 1 INPUT
			this->TXPMARESET_A0_B = TXPMARESET_A0_B; // net ID: TXPMARESET lsb: 0  msb: 0 INPUT
			this->TXPOLARITY_A0_B = TXPOLARITY_A0_B; // net ID: TXPOLARITY lsb: 0  msb: 0 INPUT
			this->TXRESET_A0_B = TXRESET_A0_B; // net ID: TXRESET lsb: 0  msb: 0 INPUT
			this->TXSCRAM64B66BUSE_A0_B = TXSCRAM64B66BUSE_A0_B; // net ID: TXSCRAM64B66BUSE lsb: 0  msb: 0 INPUT
			this->TXSYNC_A0_B = TXSYNC_A0_B; // net ID: TXSYNC lsb: 0  msb: 0 INPUT
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
#endif // X_GT11_H
