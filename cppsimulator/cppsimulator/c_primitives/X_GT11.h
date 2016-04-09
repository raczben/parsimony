/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_GT11{

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
		NetFlow* CHBONDO; // OUTPUT
		NetFlow* COMBUSOUT; // OUTPUT
		NetFlow* DO; // OUTPUT
		NetFlow* DRDY; // OUTPUT
		NetFlow* RXBUFERR; // OUTPUT
		NetFlow* RXCALFAIL; // OUTPUT
		NetFlow* RXCHARISCOMMA; // OUTPUT
		NetFlow* RXCHARISK; // OUTPUT
		NetFlow* RXCOMMADET; // OUTPUT
		NetFlow* RXCRCOUT; // OUTPUT
		NetFlow* RXCYCLELIMIT; // OUTPUT
		NetFlow* RXDATA; // OUTPUT
		NetFlow* RXDISPERR; // OUTPUT
		NetFlow* RXLOCK; // OUTPUT
		NetFlow* RXLOSSOFSYNC; // OUTPUT
		NetFlow* RXMCLK; // OUTPUT
		NetFlow* RXNOTINTABLE; // OUTPUT
		NetFlow* RXPCSHCLKOUT; // OUTPUT
		NetFlow* RXREALIGN; // OUTPUT
		NetFlow* RXRECCLK1; // OUTPUT
		NetFlow* RXRECCLK2; // OUTPUT
		NetFlow* RXRUNDISP; // OUTPUT
		NetFlow* RXSIGDET; // OUTPUT
		NetFlow* RXSTATUS; // OUTPUT
		NetFlow* TX1N; // OUTPUT
		NetFlow* TX1P; // OUTPUT
		NetFlow* TXBUFERR; // OUTPUT
		NetFlow* TXCALFAIL; // OUTPUT
		NetFlow* TXCRCOUT; // OUTPUT
		NetFlow* TXCYCLELIMIT; // OUTPUT
		NetFlow* TXKERR; // OUTPUT
		NetFlow* TXLOCK; // OUTPUT
		NetFlow* TXOUTCLK1; // OUTPUT
		NetFlow* TXOUTCLK2; // OUTPUT
		NetFlow* TXPCSHCLKOUT; // OUTPUT
		NetFlow* TXRUNDISP; // OUTPUT
		NetFlow* CHBONDI; // INPUT
		NetFlow* COMBUSIN; // INPUT
		NetFlow* DADDR; // INPUT
		NetFlow* DCLK; // INPUT
		NetFlow* DEN; // INPUT
		NetFlow* DI; // INPUT
		NetFlow* DWE; // INPUT
		NetFlow* ENCHANSYNC; // INPUT
		NetFlow* ENMCOMMAALIGN; // INPUT
		NetFlow* ENPCOMMAALIGN; // INPUT
		NetFlow* GREFCLK; // INPUT
		NetFlow* LOOPBACK; // INPUT
		NetFlow* POWERDOWN; // INPUT
		NetFlow* REFCLK1; // INPUT
		NetFlow* REFCLK2; // INPUT
		NetFlow* RX1N; // INPUT
		NetFlow* RX1P; // INPUT
		NetFlow* RXBLOCKSYNC64B66BUSE; // INPUT
		NetFlow* RXCLKSTABLE; // INPUT
		NetFlow* RXCOMMADETUSE; // INPUT
		NetFlow* RXCRCCLK; // INPUT
		NetFlow* RXCRCDATAVALID; // INPUT
		NetFlow* RXCRCDATAWIDTH; // INPUT
		NetFlow* RXCRCIN; // INPUT
		NetFlow* RXCRCINIT; // INPUT
		NetFlow* RXCRCINTCLK; // INPUT
		NetFlow* RXCRCPD; // INPUT
		NetFlow* RXCRCRESET; // INPUT
		NetFlow* RXDATAWIDTH; // INPUT
		NetFlow* RXDEC64B66BUSE; // INPUT
		NetFlow* RXDEC8B10BUSE; // INPUT
		NetFlow* RXDESCRAM64B66BUSE; // INPUT
		NetFlow* RXIGNOREBTF; // INPUT
		NetFlow* RXINTDATAWIDTH; // INPUT
		NetFlow* RXPMARESET; // INPUT
		NetFlow* RXPOLARITY; // INPUT
		NetFlow* RXRESET; // INPUT
		NetFlow* RXSLIDE; // INPUT
		NetFlow* RXSYNC; // INPUT
		NetFlow* RXUSRCLK; // INPUT
		NetFlow* RXUSRCLK2; // INPUT
		NetFlow* TXBYPASS8B10B; // INPUT
		NetFlow* TXCHARDISPMODE; // INPUT
		NetFlow* TXCHARDISPVAL; // INPUT
		NetFlow* TXCHARISK; // INPUT
		NetFlow* TXCLKSTABLE; // INPUT
		NetFlow* TXCRCCLK; // INPUT
		NetFlow* TXCRCDATAVALID; // INPUT
		NetFlow* TXCRCDATAWIDTH; // INPUT
		NetFlow* TXCRCIN; // INPUT
		NetFlow* TXCRCINIT; // INPUT
		NetFlow* TXCRCINTCLK; // INPUT
		NetFlow* TXCRCPD; // INPUT
		NetFlow* TXCRCRESET; // INPUT
		NetFlow* TXDATA; // INPUT
		NetFlow* TXDATAWIDTH; // INPUT
		NetFlow* TXENC64B66BUSE; // INPUT
		NetFlow* TXENC8B10BUSE; // INPUT
		NetFlow* TXENOOB; // INPUT
		NetFlow* TXGEARBOX64B66BUSE; // INPUT
		NetFlow* TXINHIBIT; // INPUT
		NetFlow* TXINTDATAWIDTH; // INPUT
		NetFlow* TXPMARESET; // INPUT
		NetFlow* TXPOLARITY; // INPUT
		NetFlow* TXRESET; // INPUT
		NetFlow* TXSCRAM64B66BUSE; // INPUT
		NetFlow* TXSYNC; // INPUT
		NetFlow* TXUSRCLK; // INPUT
		NetFlow* TXUSRCLK2; // INPUT
		
	
		X_GT11(
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
			NetFlow* CHBONDO, // OUTPUT
			NetFlow* COMBUSOUT, // OUTPUT
			NetFlow* DO, // OUTPUT
			NetFlow* DRDY, // OUTPUT
			NetFlow* RXBUFERR, // OUTPUT
			NetFlow* RXCALFAIL, // OUTPUT
			NetFlow* RXCHARISCOMMA, // OUTPUT
			NetFlow* RXCHARISK, // OUTPUT
			NetFlow* RXCOMMADET, // OUTPUT
			NetFlow* RXCRCOUT, // OUTPUT
			NetFlow* RXCYCLELIMIT, // OUTPUT
			NetFlow* RXDATA, // OUTPUT
			NetFlow* RXDISPERR, // OUTPUT
			NetFlow* RXLOCK, // OUTPUT
			NetFlow* RXLOSSOFSYNC, // OUTPUT
			NetFlow* RXMCLK, // OUTPUT
			NetFlow* RXNOTINTABLE, // OUTPUT
			NetFlow* RXPCSHCLKOUT, // OUTPUT
			NetFlow* RXREALIGN, // OUTPUT
			NetFlow* RXRECCLK1, // OUTPUT
			NetFlow* RXRECCLK2, // OUTPUT
			NetFlow* RXRUNDISP, // OUTPUT
			NetFlow* RXSIGDET, // OUTPUT
			NetFlow* RXSTATUS, // OUTPUT
			NetFlow* TX1N, // OUTPUT
			NetFlow* TX1P, // OUTPUT
			NetFlow* TXBUFERR, // OUTPUT
			NetFlow* TXCALFAIL, // OUTPUT
			NetFlow* TXCRCOUT, // OUTPUT
			NetFlow* TXCYCLELIMIT, // OUTPUT
			NetFlow* TXKERR, // OUTPUT
			NetFlow* TXLOCK, // OUTPUT
			NetFlow* TXOUTCLK1, // OUTPUT
			NetFlow* TXOUTCLK2, // OUTPUT
			NetFlow* TXPCSHCLKOUT, // OUTPUT
			NetFlow* TXRUNDISP, // OUTPUT
			NetFlow* CHBONDI, // INPUT
			NetFlow* COMBUSIN, // INPUT
			NetFlow* DADDR, // INPUT
			NetFlow* DCLK, // INPUT
			NetFlow* DEN, // INPUT
			NetFlow* DI, // INPUT
			NetFlow* DWE, // INPUT
			NetFlow* ENCHANSYNC, // INPUT
			NetFlow* ENMCOMMAALIGN, // INPUT
			NetFlow* ENPCOMMAALIGN, // INPUT
			NetFlow* GREFCLK, // INPUT
			NetFlow* LOOPBACK, // INPUT
			NetFlow* POWERDOWN, // INPUT
			NetFlow* REFCLK1, // INPUT
			NetFlow* REFCLK2, // INPUT
			NetFlow* RX1N, // INPUT
			NetFlow* RX1P, // INPUT
			NetFlow* RXBLOCKSYNC64B66BUSE, // INPUT
			NetFlow* RXCLKSTABLE, // INPUT
			NetFlow* RXCOMMADETUSE, // INPUT
			NetFlow* RXCRCCLK, // INPUT
			NetFlow* RXCRCDATAVALID, // INPUT
			NetFlow* RXCRCDATAWIDTH, // INPUT
			NetFlow* RXCRCIN, // INPUT
			NetFlow* RXCRCINIT, // INPUT
			NetFlow* RXCRCINTCLK, // INPUT
			NetFlow* RXCRCPD, // INPUT
			NetFlow* RXCRCRESET, // INPUT
			NetFlow* RXDATAWIDTH, // INPUT
			NetFlow* RXDEC64B66BUSE, // INPUT
			NetFlow* RXDEC8B10BUSE, // INPUT
			NetFlow* RXDESCRAM64B66BUSE, // INPUT
			NetFlow* RXIGNOREBTF, // INPUT
			NetFlow* RXINTDATAWIDTH, // INPUT
			NetFlow* RXPMARESET, // INPUT
			NetFlow* RXPOLARITY, // INPUT
			NetFlow* RXRESET, // INPUT
			NetFlow* RXSLIDE, // INPUT
			NetFlow* RXSYNC, // INPUT
			NetFlow* RXUSRCLK, // INPUT
			NetFlow* RXUSRCLK2, // INPUT
			NetFlow* TXBYPASS8B10B, // INPUT
			NetFlow* TXCHARDISPMODE, // INPUT
			NetFlow* TXCHARDISPVAL, // INPUT
			NetFlow* TXCHARISK, // INPUT
			NetFlow* TXCLKSTABLE, // INPUT
			NetFlow* TXCRCCLK, // INPUT
			NetFlow* TXCRCDATAVALID, // INPUT
			NetFlow* TXCRCDATAWIDTH, // INPUT
			NetFlow* TXCRCIN, // INPUT
			NetFlow* TXCRCINIT, // INPUT
			NetFlow* TXCRCINTCLK, // INPUT
			NetFlow* TXCRCPD, // INPUT
			NetFlow* TXCRCRESET, // INPUT
			NetFlow* TXDATA, // INPUT
			NetFlow* TXDATAWIDTH, // INPUT
			NetFlow* TXENC64B66BUSE, // INPUT
			NetFlow* TXENC8B10BUSE, // INPUT
			NetFlow* TXENOOB, // INPUT
			NetFlow* TXGEARBOX64B66BUSE, // INPUT
			NetFlow* TXINHIBIT, // INPUT
			NetFlow* TXINTDATAWIDTH, // INPUT
			NetFlow* TXPMARESET, // INPUT
			NetFlow* TXPOLARITY, // INPUT
			NetFlow* TXRESET, // INPUT
			NetFlow* TXSCRAM64B66BUSE, // INPUT
			NetFlow* TXSYNC, // INPUT
			NetFlow* TXUSRCLK, // INPUT
			NetFlow* TXUSRCLK2 // INPUT
			){
		
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
			this->CHBONDO = CHBONDO; // OUTPUT
			this->COMBUSOUT = COMBUSOUT; // OUTPUT
			this->DO = DO; // OUTPUT
			this->DRDY = DRDY; // OUTPUT
			this->RXBUFERR = RXBUFERR; // OUTPUT
			this->RXCALFAIL = RXCALFAIL; // OUTPUT
			this->RXCHARISCOMMA = RXCHARISCOMMA; // OUTPUT
			this->RXCHARISK = RXCHARISK; // OUTPUT
			this->RXCOMMADET = RXCOMMADET; // OUTPUT
			this->RXCRCOUT = RXCRCOUT; // OUTPUT
			this->RXCYCLELIMIT = RXCYCLELIMIT; // OUTPUT
			this->RXDATA = RXDATA; // OUTPUT
			this->RXDISPERR = RXDISPERR; // OUTPUT
			this->RXLOCK = RXLOCK; // OUTPUT
			this->RXLOSSOFSYNC = RXLOSSOFSYNC; // OUTPUT
			this->RXMCLK = RXMCLK; // OUTPUT
			this->RXNOTINTABLE = RXNOTINTABLE; // OUTPUT
			this->RXPCSHCLKOUT = RXPCSHCLKOUT; // OUTPUT
			this->RXREALIGN = RXREALIGN; // OUTPUT
			this->RXRECCLK1 = RXRECCLK1; // OUTPUT
			this->RXRECCLK2 = RXRECCLK2; // OUTPUT
			this->RXRUNDISP = RXRUNDISP; // OUTPUT
			this->RXSIGDET = RXSIGDET; // OUTPUT
			this->RXSTATUS = RXSTATUS; // OUTPUT
			this->TX1N = TX1N; // OUTPUT
			this->TX1P = TX1P; // OUTPUT
			this->TXBUFERR = TXBUFERR; // OUTPUT
			this->TXCALFAIL = TXCALFAIL; // OUTPUT
			this->TXCRCOUT = TXCRCOUT; // OUTPUT
			this->TXCYCLELIMIT = TXCYCLELIMIT; // OUTPUT
			this->TXKERR = TXKERR; // OUTPUT
			this->TXLOCK = TXLOCK; // OUTPUT
			this->TXOUTCLK1 = TXOUTCLK1; // OUTPUT
			this->TXOUTCLK2 = TXOUTCLK2; // OUTPUT
			this->TXPCSHCLKOUT = TXPCSHCLKOUT; // OUTPUT
			this->TXRUNDISP = TXRUNDISP; // OUTPUT
			this->CHBONDI = CHBONDI; // INPUT
			this->COMBUSIN = COMBUSIN; // INPUT
			this->DADDR = DADDR; // INPUT
			this->DCLK = DCLK; // INPUT
			this->DEN = DEN; // INPUT
			this->DI = DI; // INPUT
			this->DWE = DWE; // INPUT
			this->ENCHANSYNC = ENCHANSYNC; // INPUT
			this->ENMCOMMAALIGN = ENMCOMMAALIGN; // INPUT
			this->ENPCOMMAALIGN = ENPCOMMAALIGN; // INPUT
			this->GREFCLK = GREFCLK; // INPUT
			this->LOOPBACK = LOOPBACK; // INPUT
			this->POWERDOWN = POWERDOWN; // INPUT
			this->REFCLK1 = REFCLK1; // INPUT
			this->REFCLK2 = REFCLK2; // INPUT
			this->RX1N = RX1N; // INPUT
			this->RX1P = RX1P; // INPUT
			this->RXBLOCKSYNC64B66BUSE = RXBLOCKSYNC64B66BUSE; // INPUT
			this->RXCLKSTABLE = RXCLKSTABLE; // INPUT
			this->RXCOMMADETUSE = RXCOMMADETUSE; // INPUT
			this->RXCRCCLK = RXCRCCLK; // INPUT
			this->RXCRCDATAVALID = RXCRCDATAVALID; // INPUT
			this->RXCRCDATAWIDTH = RXCRCDATAWIDTH; // INPUT
			this->RXCRCIN = RXCRCIN; // INPUT
			this->RXCRCINIT = RXCRCINIT; // INPUT
			this->RXCRCINTCLK = RXCRCINTCLK; // INPUT
			this->RXCRCPD = RXCRCPD; // INPUT
			this->RXCRCRESET = RXCRCRESET; // INPUT
			this->RXDATAWIDTH = RXDATAWIDTH; // INPUT
			this->RXDEC64B66BUSE = RXDEC64B66BUSE; // INPUT
			this->RXDEC8B10BUSE = RXDEC8B10BUSE; // INPUT
			this->RXDESCRAM64B66BUSE = RXDESCRAM64B66BUSE; // INPUT
			this->RXIGNOREBTF = RXIGNOREBTF; // INPUT
			this->RXINTDATAWIDTH = RXINTDATAWIDTH; // INPUT
			this->RXPMARESET = RXPMARESET; // INPUT
			this->RXPOLARITY = RXPOLARITY; // INPUT
			this->RXRESET = RXRESET; // INPUT
			this->RXSLIDE = RXSLIDE; // INPUT
			this->RXSYNC = RXSYNC; // INPUT
			this->RXUSRCLK = RXUSRCLK; // INPUT
			this->RXUSRCLK2 = RXUSRCLK2; // INPUT
			this->TXBYPASS8B10B = TXBYPASS8B10B; // INPUT
			this->TXCHARDISPMODE = TXCHARDISPMODE; // INPUT
			this->TXCHARDISPVAL = TXCHARDISPVAL; // INPUT
			this->TXCHARISK = TXCHARISK; // INPUT
			this->TXCLKSTABLE = TXCLKSTABLE; // INPUT
			this->TXCRCCLK = TXCRCCLK; // INPUT
			this->TXCRCDATAVALID = TXCRCDATAVALID; // INPUT
			this->TXCRCDATAWIDTH = TXCRCDATAWIDTH; // INPUT
			this->TXCRCIN = TXCRCIN; // INPUT
			this->TXCRCINIT = TXCRCINIT; // INPUT
			this->TXCRCINTCLK = TXCRCINTCLK; // INPUT
			this->TXCRCPD = TXCRCPD; // INPUT
			this->TXCRCRESET = TXCRCRESET; // INPUT
			this->TXDATA = TXDATA; // INPUT
			this->TXDATAWIDTH = TXDATAWIDTH; // INPUT
			this->TXENC64B66BUSE = TXENC64B66BUSE; // INPUT
			this->TXENC8B10BUSE = TXENC8B10BUSE; // INPUT
			this->TXENOOB = TXENOOB; // INPUT
			this->TXGEARBOX64B66BUSE = TXGEARBOX64B66BUSE; // INPUT
			this->TXINHIBIT = TXINHIBIT; // INPUT
			this->TXINTDATAWIDTH = TXINTDATAWIDTH; // INPUT
			this->TXPMARESET = TXPMARESET; // INPUT
			this->TXPOLARITY = TXPOLARITY; // INPUT
			this->TXRESET = TXRESET; // INPUT
			this->TXSCRAM64B66BUSE = TXSCRAM64B66BUSE; // INPUT
			this->TXSYNC = TXSYNC; // INPUT
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
