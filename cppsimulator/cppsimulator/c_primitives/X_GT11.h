/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

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
		parameter_string_t CHAN_BOND_SEQ_1_1;
		parameter_string_t CHAN_BOND_SEQ_1_2;
		parameter_string_t CHAN_BOND_SEQ_1_3;
		parameter_string_t CHAN_BOND_SEQ_1_4;
		parameter_string_t CHAN_BOND_SEQ_1_MASK;
		parameter_string_t CHAN_BOND_SEQ_2_1;
		parameter_string_t CHAN_BOND_SEQ_2_2;
		parameter_string_t CHAN_BOND_SEQ_2_3;
		parameter_string_t CHAN_BOND_SEQ_2_4;
		parameter_string_t CHAN_BOND_SEQ_2_MASK;
		parameter_enum_t CHAN_BOND_SEQ_2_USE;
		parameter_enum_t CLK_CORRECT_USE;
		parameter_enum_t CLK_COR_8B10B_DE;
		parameter_string_t CLK_COR_SEQ_1_1;
		parameter_string_t CLK_COR_SEQ_1_2;
		parameter_string_t CLK_COR_SEQ_1_3;
		parameter_string_t CLK_COR_SEQ_1_4;
		parameter_string_t CLK_COR_SEQ_1_MASK;
		parameter_string_t CLK_COR_SEQ_2_1;
		parameter_string_t CLK_COR_SEQ_2_2;
		parameter_string_t CLK_COR_SEQ_2_3;
		parameter_string_t CLK_COR_SEQ_2_4;
		parameter_string_t CLK_COR_SEQ_2_MASK;
		parameter_enum_t CLK_COR_SEQ_2_USE;
		parameter_enum_t CLK_COR_SEQ_DROP;
		parameter_enum_t COMMA32;
		parameter_string_t COMMA_10B_MASK;
		parameter_string_t CYCLE_LIMIT_SEL;
		parameter_string_t DCDR_FILTER;
		parameter_enum_t DEC_MCOMMA_DETECT;
		parameter_enum_t DEC_PCOMMA_DETECT;
		parameter_enum_t DEC_VALID_COMMA_ONLY;
		parameter_string_t DIGRX_FWDCLK;
		parameter_enum_t DIGRX_SYNC_MODE;
		parameter_enum_t ENABLE_DCDR;
		parameter_string_t FDET_HYS_CAL;
		parameter_string_t FDET_HYS_SEL;
		parameter_string_t FDET_LCK_CAL;
		parameter_string_t FDET_LCK_SEL;
		parameter_string_t GT11_MODE;
		parameter_string_t IREFBIASMODE;
		parameter_string_t LOOPCAL_WAIT;
		parameter_string_t MCOMMA_32B_VALUE;
		parameter_enum_t MCOMMA_DETECT;
		parameter_enum_t OPPOSITE_SELECT;
		parameter_string_t PCOMMA_32B_VALUE;
		parameter_enum_t PCOMMA_DETECT;
		parameter_enum_t PCS_BIT_SLIP;
		parameter_enum_t PMACLKENABLE;
		parameter_enum_t PMACOREPWRENABLE;
		parameter_string_t PMAIREFTRIM;
		parameter_string_t PMAVBGCTRL;
		parameter_string_t PMAVREFTRIM;
		parameter_enum_t PMA_BIT_SLIP;
		parameter_enum_t POWER_ENABLE;
		parameter_enum_t REPEATER;
		parameter_enum_t RXACTST;
		parameter_string_t RXAFEEQ;
		parameter_enum_t RXAFEPD;
		parameter_enum_t RXAFETST;
		parameter_enum_t RXAPD;
		parameter_string_t RXAREGCTRL;
		parameter_string_t RXASYNCDIVIDE;
		parameter_enum_t RXBY_32;
		parameter_string_t RXCDRLOS;
		parameter_enum_t RXCLK0_FORCE_PMACLK;
		parameter_string_t RXCLKMODE;
		parameter_string_t RXCLMODE;
		parameter_string_t RXCMADJ;
		parameter_enum_t RXCPSEL;
		parameter_enum_t RXCPTST;
		parameter_enum_t RXCRCCLOCKDOUBLE;
		parameter_enum_t RXCRCENABLE;
		parameter_string_t RXCRCINITVAL;
		parameter_enum_t RXCRCINVERTGEN;
		parameter_enum_t RXCRCSAMECLOCK;
		parameter_string_t RXCTRL1;
		parameter_string_t RXCYCLE_LIMIT_SEL;
		parameter_string_t RXDATA_SEL;
		parameter_enum_t RXDCCOUPLE;
		parameter_enum_t RXDIGRESET;
		parameter_enum_t RXDIGRX;
		parameter_string_t RXEQ;
		parameter_string_t RXFDCAL_CLOCK_DIVIDE;
		parameter_string_t RXFDET_HYS_CAL;
		parameter_string_t RXFDET_HYS_SEL;
		parameter_string_t RXFDET_LCK_CAL;
		parameter_string_t RXFDET_LCK_SEL;
		parameter_string_t RXFECONTROL1;
		parameter_string_t RXFECONTROL2;
		parameter_string_t RXFETUNE;
		parameter_enum_t RXLB;
		parameter_string_t RXLKADJ;
		parameter_enum_t RXLKAPD;
		parameter_string_t RXLOOPCAL_WAIT;
		parameter_string_t RXLOOPFILT;
		parameter_string_t RXMODE;
		parameter_enum_t RXPD;
		parameter_enum_t RXPDDTST;
		parameter_string_t RXPMACLKSEL;
		parameter_string_t RXRCPADJ;
		parameter_enum_t RXRCPPD;
		parameter_enum_t RXRECCLK1_USE_SYNC;
		parameter_string_t RXRIBADJ;
		parameter_enum_t RXRPDPD;
		parameter_enum_t RXRSDPD;
		parameter_string_t RXSLOWDOWN_CAL;
		parameter_string_t RXTUNE;
		parameter_string_t RXVCODAC_INIT;
		parameter_enum_t RXVCO_CTRL_ENABLE;
		parameter_enum_t RX_BUFFER_USE;
		parameter_string_t RX_CLOCK_DIVIDER;
		parameter_enum_t SAMPLE_8X;
		parameter_string_t SLOWDOWN_CAL;
		parameter_string_t TXABPMACLKSEL;
		parameter_enum_t TXAPD;
		parameter_enum_t TXAREFBIASSEL;
		parameter_string_t TXASYNCDIVIDE;
		parameter_enum_t TXCLK0_FORCE_PMACLK;
		parameter_string_t TXCLKMODE;
		parameter_string_t TXCLMODE;
		parameter_enum_t TXCPSEL;
		parameter_enum_t TXCRCCLOCKDOUBLE;
		parameter_enum_t TXCRCENABLE;
		parameter_string_t TXCRCINITVAL;
		parameter_enum_t TXCRCINVERTGEN;
		parameter_enum_t TXCRCSAMECLOCK;
		parameter_string_t TXCTRL1;
		parameter_string_t TXDATA_SEL;
		parameter_string_t TXDAT_PRDRV_DAC;
		parameter_string_t TXDAT_TAP_DAC;
		parameter_enum_t TXDIGPD;
		parameter_string_t TXFDCAL_CLOCK_DIVIDE;
		parameter_enum_t TXHIGHSIGNALEN;
		parameter_string_t TXLOOPFILT;
		parameter_enum_t TXLVLSHFTPD;
		parameter_enum_t TXOUTCLK1_USE_SYNC;
		parameter_enum_t TXPD;
		parameter_enum_t TXPHASESEL;
		parameter_string_t TXPOST_PRDRV_DAC;
		parameter_string_t TXPOST_TAP_DAC;
		parameter_enum_t TXPOST_TAP_PD;
		parameter_string_t TXPRE_PRDRV_DAC;
		parameter_string_t TXPRE_TAP_DAC;
		parameter_enum_t TXPRE_TAP_PD;
		parameter_enum_t TXSLEWRATE;
		parameter_string_t TXTERMTRIM;
		parameter_string_t TXTUNE;
		parameter_enum_t TX_BUFFER_USE;
		parameter_string_t TX_CLOCK_DIVIDER;
		parameter_string_t VCODAC_INIT;
		parameter_enum_t VCO_CTRL_ENABLE;
		parameter_string_t VREFBIASMODE;
		parameter_string_t ALIGN_COMMA_WORD;
		parameter_string_t CHAN_BOND_LIMIT;
		parameter_string_t CHAN_BOND_SEQ_LEN;
		parameter_string_t CLK_COR_MAX_LAT;
		parameter_string_t CLK_COR_MIN_LAT;
		parameter_string_t CLK_COR_SEQ_LEN;
		parameter_string_t RXOUTDIV2SEL;
		parameter_string_t RXPLLNDIVSEL;
		parameter_string_t RXUSRDIVISOR;
		parameter_string_t SH_CNT_MAX;
		parameter_string_t SH_INVALID_CNT_MAX;
		parameter_string_t TXOUTDIV2SEL;
		parameter_string_t TXPLLNDIVSEL;
		//Verilog Ports in definition order:
		NetFlow* CHBONDO; // net ID: CHBONDO lsb: 0  msb: 0 OUTPUT
		NetFlow* COMBUSOUT; // net ID: COMBUSOUT lsb: 0  msb: 0 OUTPUT
		NetFlow* DO; // net ID: DO lsb: 0  msb: 0 OUTPUT
		NetFlow* DRDY; // net ID: DRDY lsb: 0  msb: 0 OUTPUT
		NetFlow* RXBUFERR; // net ID: RXBUFERR lsb: 0  msb: 0 OUTPUT
		NetFlow* RXCALFAIL; // net ID: RXCALFAIL lsb: 0  msb: 0 OUTPUT
		NetFlow* RXCHARISCOMMA; // net ID: RXCHARISCOMMA lsb: 0  msb: 0 OUTPUT
		NetFlow* RXCHARISK; // net ID: RXCHARISK lsb: 0  msb: 0 OUTPUT
		NetFlow* RXCOMMADET; // net ID: RXCOMMADET lsb: 0  msb: 0 OUTPUT
		NetFlow* RXCRCOUT; // net ID: RXCRCOUT lsb: 0  msb: 0 OUTPUT
		NetFlow* RXCYCLELIMIT; // net ID: RXCYCLELIMIT lsb: 0  msb: 0 OUTPUT
		NetFlow* RXDATA; // net ID: RXDATA lsb: 0  msb: 0 OUTPUT
		NetFlow* RXDISPERR; // net ID: RXDISPERR lsb: 0  msb: 0 OUTPUT
		NetFlow* RXLOCK; // net ID: RXLOCK lsb: 0  msb: 0 OUTPUT
		NetFlow* RXLOSSOFSYNC; // net ID: RXLOSSOFSYNC lsb: 0  msb: 0 OUTPUT
		NetFlow* RXMCLK; // net ID: RXMCLK lsb: 0  msb: 0 OUTPUT
		NetFlow* RXNOTINTABLE; // net ID: RXNOTINTABLE lsb: 0  msb: 0 OUTPUT
		NetFlow* RXPCSHCLKOUT; // net ID: RXPCSHCLKOUT lsb: 0  msb: 0 OUTPUT
		NetFlow* RXREALIGN; // net ID: RXREALIGN lsb: 0  msb: 0 OUTPUT
		NetFlow* RXRECCLK1; // net ID: RXRECCLK1 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXRECCLK2; // net ID: RXRECCLK2 lsb: 0  msb: 0 OUTPUT
		NetFlow* RXRUNDISP; // net ID: RXRUNDISP lsb: 0  msb: 0 OUTPUT
		NetFlow* RXSIGDET; // net ID: RXSIGDET lsb: 0  msb: 0 OUTPUT
		NetFlow* RXSTATUS; // net ID: RXSTATUS lsb: 0  msb: 0 OUTPUT
		NetFlow* TX1N; // net ID: TX1N lsb: 0  msb: 0 OUTPUT
		NetFlow* TX1P; // net ID: TX1P lsb: 0  msb: 0 OUTPUT
		NetFlow* TXBUFERR; // net ID: TXBUFERR lsb: 0  msb: 0 OUTPUT
		NetFlow* TXCALFAIL; // net ID: TXCALFAIL lsb: 0  msb: 0 OUTPUT
		NetFlow* TXCRCOUT; // net ID: TXCRCOUT lsb: 0  msb: 0 OUTPUT
		NetFlow* TXCYCLELIMIT; // net ID: TXCYCLELIMIT lsb: 0  msb: 0 OUTPUT
		NetFlow* TXKERR; // net ID: TXKERR lsb: 0  msb: 0 OUTPUT
		NetFlow* TXLOCK; // net ID: TXLOCK lsb: 0  msb: 0 OUTPUT
		NetFlow* TXOUTCLK1; // net ID: TXOUTCLK1 lsb: 0  msb: 0 OUTPUT
		NetFlow* TXOUTCLK2; // net ID: TXOUTCLK2 lsb: 0  msb: 0 OUTPUT
		NetFlow* TXPCSHCLKOUT; // net ID: TXPCSHCLKOUT lsb: 0  msb: 0 OUTPUT
		NetFlow* TXRUNDISP; // net ID: TXRUNDISP lsb: 0  msb: 0 OUTPUT
		NetFlow* CHBONDI; // net ID: CHBONDI lsb: 0  msb: 4 INPUT
		NetFlow* COMBUSIN; // net ID: COMBUSIN lsb: 0  msb: 15 INPUT
		NetFlow* DADDR; // net ID: DADDR lsb: 0  msb: 7 INPUT
		NetFlow* DCLK; // net ID: DCLK lsb: 0  msb: 0 INPUT
		NetFlow* DEN; // net ID: DEN lsb: 0  msb: 0 INPUT
		NetFlow* DI; // net ID: DI lsb: 0  msb: 15 INPUT
		NetFlow* DWE; // net ID: DWE lsb: 0  msb: 0 INPUT
		NetFlow* ENCHANSYNC; // net ID: ENCHANSYNC lsb: 0  msb: 0 INPUT
		NetFlow* ENMCOMMAALIGN; // net ID: ENMCOMMAALIGN lsb: 0  msb: 0 INPUT
		NetFlow* ENPCOMMAALIGN; // net ID: ENPCOMMAALIGN lsb: 0  msb: 0 INPUT
		NetFlow* GREFCLK; // net ID: GREFCLK lsb: 0  msb: 0 INPUT
		NetFlow* LOOPBACK; // net ID: LOOPBACK lsb: 0  msb: 1 INPUT
		NetFlow* POWERDOWN; // net ID: POWERDOWN lsb: 0  msb: 0 INPUT
		NetFlow* REFCLK1; // net ID: REFCLK1 lsb: 0  msb: 0 INPUT
		NetFlow* REFCLK2; // net ID: REFCLK2 lsb: 0  msb: 0 INPUT
		NetFlow* RX1N; // net ID: RX1N lsb: 0  msb: 0 INPUT
		NetFlow* RX1P; // net ID: RX1P lsb: 0  msb: 0 INPUT
		NetFlow* RXBLOCKSYNC64B66BUSE; // net ID: RXBLOCKSYNC64B66BUSE lsb: 0  msb: 0 INPUT
		NetFlow* RXCLKSTABLE; // net ID: RXCLKSTABLE lsb: 0  msb: 0 INPUT
		NetFlow* RXCOMMADETUSE; // net ID: RXCOMMADETUSE lsb: 0  msb: 0 INPUT
		NetFlow* RXCRCCLK; // net ID: RXCRCCLK lsb: 0  msb: 0 INPUT
		NetFlow* RXCRCDATAVALID; // net ID: RXCRCDATAVALID lsb: 0  msb: 0 INPUT
		NetFlow* RXCRCDATAWIDTH; // net ID: RXCRCDATAWIDTH lsb: 0  msb: 2 INPUT
		NetFlow* RXCRCIN; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* RXCRCINIT; // net ID: RXCRCINIT lsb: 0  msb: 0 INPUT
		NetFlow* RXCRCINTCLK; // net ID: RXCRCINTCLK lsb: 0  msb: 0 INPUT
		NetFlow* RXCRCPD; // net ID: RXCRCPD lsb: 0  msb: 0 INPUT
		NetFlow* RXCRCRESET; // net ID: RXCRCRESET lsb: 0  msb: 0 INPUT
		NetFlow* RXDATAWIDTH; // net ID: RXDATAWIDTH lsb: 0  msb: 1 INPUT
		NetFlow* RXDEC64B66BUSE; // net ID: RXDEC64B66BUSE lsb: 0  msb: 0 INPUT
		NetFlow* RXDEC8B10BUSE; // net ID: RXDEC8B10BUSE lsb: 0  msb: 0 INPUT
		NetFlow* RXDESCRAM64B66BUSE; // net ID: RXDESCRAM64B66BUSE lsb: 0  msb: 0 INPUT
		NetFlow* RXIGNOREBTF; // net ID: RXIGNOREBTF lsb: 0  msb: 0 INPUT
		NetFlow* RXINTDATAWIDTH; // net ID: RXINTDATAWIDTH lsb: 0  msb: 1 INPUT
		NetFlow* RXPMARESET; // net ID: RXPMARESET lsb: 0  msb: 0 INPUT
		NetFlow* RXPOLARITY; // net ID: RXPOLARITY lsb: 0  msb: 0 INPUT
		NetFlow* RXRESET; // net ID: RXRESET lsb: 0  msb: 0 INPUT
		NetFlow* RXSLIDE; // net ID: RXSLIDE lsb: 0  msb: 0 INPUT
		NetFlow* RXSYNC; // net ID: RXSYNC lsb: 0  msb: 0 INPUT
		NetFlow* RXUSRCLK; // net ID: RXUSRCLK lsb: 0  msb: 0 INPUT
		NetFlow* RXUSRCLK2; // net ID: RXUSRCLK2 lsb: 0  msb: 0 INPUT
		NetFlow* TXBYPASS8B10B; // net ID: TXBYPASS8B10B lsb: 0  msb: 7 INPUT
		NetFlow* TXCHARDISPMODE; // net ID: TXCHARDISPMODE lsb: 0  msb: 7 INPUT
		NetFlow* TXCHARDISPVAL; // net ID: TXCHARDISPVAL lsb: 0  msb: 7 INPUT
		NetFlow* TXCHARISK; // net ID: TXCHARISK lsb: 0  msb: 7 INPUT
		NetFlow* TXCLKSTABLE; // net ID: TXCLKSTABLE lsb: 0  msb: 0 INPUT
		NetFlow* TXCRCCLK; // net ID: TXCRCCLK lsb: 0  msb: 0 INPUT
		NetFlow* TXCRCDATAVALID; // net ID: TXCRCDATAVALID lsb: 0  msb: 0 INPUT
		NetFlow* TXCRCDATAWIDTH; // net ID: TXCRCDATAWIDTH lsb: 0  msb: 2 INPUT
		NetFlow* TXCRCIN; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
		NetFlow* TXCRCINIT; // net ID: TXCRCINIT lsb: 0  msb: 0 INPUT
		NetFlow* TXCRCINTCLK; // net ID: TXCRCINTCLK lsb: 0  msb: 0 INPUT
		NetFlow* TXCRCPD; // net ID: TXCRCPD lsb: 0  msb: 0 INPUT
		NetFlow* TXCRCRESET; // net ID: TXCRCRESET lsb: 0  msb: 0 INPUT
		NetFlow* TXDATA; // net ID: TXDATA lsb: 0  msb: 63 INPUT
		NetFlow* TXDATAWIDTH; // net ID: TXDATAWIDTH lsb: 0  msb: 1 INPUT
		NetFlow* TXENC64B66BUSE; // net ID: TXENC64B66BUSE lsb: 0  msb: 0 INPUT
		NetFlow* TXENC8B10BUSE; // net ID: TXENC8B10BUSE lsb: 0  msb: 0 INPUT
		NetFlow* TXENOOB; // net ID: TXENOOB lsb: 0  msb: 0 INPUT
		NetFlow* TXGEARBOX64B66BUSE; // net ID: TXGEARBOX64B66BUSE lsb: 0  msb: 0 INPUT
		NetFlow* TXINHIBIT; // net ID: TXINHIBIT lsb: 0  msb: 0 INPUT
		NetFlow* TXINTDATAWIDTH; // net ID: TXINTDATAWIDTH lsb: 0  msb: 1 INPUT
		NetFlow* TXPMARESET; // net ID: TXPMARESET lsb: 0  msb: 0 INPUT
		NetFlow* TXPOLARITY; // net ID: TXPOLARITY lsb: 0  msb: 0 INPUT
		NetFlow* TXRESET; // net ID: TXRESET lsb: 0  msb: 0 INPUT
		NetFlow* TXSCRAM64B66BUSE; // net ID: TXSCRAM64B66BUSE lsb: 0  msb: 0 INPUT
		NetFlow* TXSYNC; // net ID: TXSYNC lsb: 0  msb: 0 INPUT
		NetFlow* TXUSRCLK; // net ID: TXUSRCLK lsb: 0  msb: 0 INPUT
		NetFlow* TXUSRCLK2; // net ID: TXUSRCLK2 lsb: 0  msb: 0 INPUT
		
		X_GT11(
			const char * name,
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_enum_t BANDGAPSEL, // Default: "FALSE"
			parameter_enum_t BIASRESSEL, // Default: "FALSE"
			parameter_enum_t CCCB_ARBITRATOR_DISABLE, // Default: "FALSE"
			parameter_string_t CHAN_BOND_MODE, // Default: "NONE"
			parameter_enum_t CHAN_BOND_ONE_SHOT, // Default: "FALSE"
			parameter_string_t CHAN_BOND_SEQ_1_1, // Default: 11'b00000000000
			parameter_string_t CHAN_BOND_SEQ_1_2, // Default: 11'b00000000000
			parameter_string_t CHAN_BOND_SEQ_1_3, // Default: 11'b00000000000
			parameter_string_t CHAN_BOND_SEQ_1_4, // Default: 11'b00000000000
			parameter_string_t CHAN_BOND_SEQ_1_MASK, // Default: 4'b1110
			parameter_string_t CHAN_BOND_SEQ_2_1, // Default: 11'b00000000000
			parameter_string_t CHAN_BOND_SEQ_2_2, // Default: 11'b00000000000
			parameter_string_t CHAN_BOND_SEQ_2_3, // Default: 11'b00000000000
			parameter_string_t CHAN_BOND_SEQ_2_4, // Default: 11'b00000000000
			parameter_string_t CHAN_BOND_SEQ_2_MASK, // Default: 4'b1110
			parameter_enum_t CHAN_BOND_SEQ_2_USE, // Default: "FALSE"
			parameter_enum_t CLK_CORRECT_USE, // Default: "FALSE"
			parameter_enum_t CLK_COR_8B10B_DE, // Default: "FALSE"
			parameter_string_t CLK_COR_SEQ_1_1, // Default: 11'b00000000000
			parameter_string_t CLK_COR_SEQ_1_2, // Default: 11'b00000000000
			parameter_string_t CLK_COR_SEQ_1_3, // Default: 11'b00000000000
			parameter_string_t CLK_COR_SEQ_1_4, // Default: 11'b00000000000
			parameter_string_t CLK_COR_SEQ_1_MASK, // Default: 4'b1110
			parameter_string_t CLK_COR_SEQ_2_1, // Default: 11'b00000000000
			parameter_string_t CLK_COR_SEQ_2_2, // Default: 11'b00000000000
			parameter_string_t CLK_COR_SEQ_2_3, // Default: 11'b00000000000
			parameter_string_t CLK_COR_SEQ_2_4, // Default: 11'b00000000000
			parameter_string_t CLK_COR_SEQ_2_MASK, // Default: 4'b1110
			parameter_enum_t CLK_COR_SEQ_2_USE, // Default: "FALSE"
			parameter_enum_t CLK_COR_SEQ_DROP, // Default: "FALSE"
			parameter_enum_t COMMA32, // Default: "FALSE"
			parameter_string_t COMMA_10B_MASK, // Default: 10'h3FF
			parameter_string_t CYCLE_LIMIT_SEL, // Default: 2'b00
			parameter_string_t DCDR_FILTER, // Default: 3'b010
			parameter_enum_t DEC_MCOMMA_DETECT, // Default: "TRUE"
			parameter_enum_t DEC_PCOMMA_DETECT, // Default: "TRUE"
			parameter_enum_t DEC_VALID_COMMA_ONLY, // Default: "TRUE"
			parameter_string_t DIGRX_FWDCLK, // Default: 2'b00
			parameter_enum_t DIGRX_SYNC_MODE, // Default: "FALSE"
			parameter_enum_t ENABLE_DCDR, // Default: "FALSE"
			parameter_string_t FDET_HYS_CAL, // Default: 3'b010
			parameter_string_t FDET_HYS_SEL, // Default: 3'b100
			parameter_string_t FDET_LCK_CAL, // Default: 3'b100
			parameter_string_t FDET_LCK_SEL, // Default: 3'b001
			parameter_string_t GT11_MODE, // Default: "DONT_CARE"
			parameter_string_t IREFBIASMODE, // Default: 2'b11
			parameter_string_t LOOPCAL_WAIT, // Default: 2'b00
			parameter_string_t MCOMMA_32B_VALUE, // Default: 32'h00000000
			parameter_enum_t MCOMMA_DETECT, // Default: "TRUE"
			parameter_enum_t OPPOSITE_SELECT, // Default: "FALSE"
			parameter_string_t PCOMMA_32B_VALUE, // Default: 32'h00000000
			parameter_enum_t PCOMMA_DETECT, // Default: "TRUE"
			parameter_enum_t PCS_BIT_SLIP, // Default: "FALSE"
			parameter_enum_t PMACLKENABLE, // Default: "TRUE"
			parameter_enum_t PMACOREPWRENABLE, // Default: "TRUE"
			parameter_string_t PMAIREFTRIM, // Default: 4'b0111
			parameter_string_t PMAVBGCTRL, // Default: 5'b00000
			parameter_string_t PMAVREFTRIM, // Default: 4'b0111
			parameter_enum_t PMA_BIT_SLIP, // Default: "FALSE"
			parameter_enum_t POWER_ENABLE, // Default: "TRUE"
			parameter_enum_t REPEATER, // Default: "FALSE"
			parameter_enum_t RXACTST, // Default: "FALSE"
			parameter_string_t RXAFEEQ, // Default: 9'b000000000
			parameter_enum_t RXAFEPD, // Default: "FALSE"
			parameter_enum_t RXAFETST, // Default: "FALSE"
			parameter_enum_t RXAPD, // Default: "FALSE"
			parameter_string_t RXAREGCTRL, // Default: 5'b00000
			parameter_string_t RXASYNCDIVIDE, // Default: 2'b11
			parameter_enum_t RXBY_32, // Default: "FALSE"
			parameter_string_t RXCDRLOS, // Default: 6'b000000
			parameter_enum_t RXCLK0_FORCE_PMACLK, // Default: "FALSE"
			parameter_string_t RXCLKMODE, // Default: 6'b110001
			parameter_string_t RXCLMODE, // Default: 2'b00
			parameter_string_t RXCMADJ, // Default: 2'b01
			parameter_enum_t RXCPSEL, // Default: "TRUE"
			parameter_enum_t RXCPTST, // Default: "FALSE"
			parameter_enum_t RXCRCCLOCKDOUBLE, // Default: "FALSE"
			parameter_enum_t RXCRCENABLE, // Default: "FALSE"
			parameter_string_t RXCRCINITVAL, // Default: 32'h00000000
			parameter_enum_t RXCRCINVERTGEN, // Default: "FALSE"
			parameter_enum_t RXCRCSAMECLOCK, // Default: "FALSE"
			parameter_string_t RXCTRL1, // Default: 10'h200
			parameter_string_t RXCYCLE_LIMIT_SEL, // Default: 2'b00
			parameter_string_t RXDATA_SEL, // Default: 2'b00
			parameter_enum_t RXDCCOUPLE, // Default: "FALSE"
			parameter_enum_t RXDIGRESET, // Default: "FALSE"
			parameter_enum_t RXDIGRX, // Default: "FALSE"
			parameter_string_t RXEQ, // Default: 64'h4000000000000000
			parameter_string_t RXFDCAL_CLOCK_DIVIDE, // Default: "NONE"
			parameter_string_t RXFDET_HYS_CAL, // Default: 3'b010
			parameter_string_t RXFDET_HYS_SEL, // Default: 3'b100
			parameter_string_t RXFDET_LCK_CAL, // Default: 3'b100
			parameter_string_t RXFDET_LCK_SEL, // Default: 3'b001
			parameter_string_t RXFECONTROL1, // Default: 2'b00
			parameter_string_t RXFECONTROL2, // Default: 3'b000
			parameter_string_t RXFETUNE, // Default: 2'b01
			parameter_enum_t RXLB, // Default: "FALSE"
			parameter_string_t RXLKADJ, // Default: 5'b00000
			parameter_enum_t RXLKAPD, // Default: "FALSE"
			parameter_string_t RXLOOPCAL_WAIT, // Default: 2'b00
			parameter_string_t RXLOOPFILT, // Default: 4'b0111
			parameter_string_t RXMODE, // Default: 6'b000000
			parameter_enum_t RXPD, // Default: "FALSE"
			parameter_enum_t RXPDDTST, // Default: "TRUE"
			parameter_string_t RXPMACLKSEL, // Default: "REFCLK1"
			parameter_string_t RXRCPADJ, // Default: 3'b011
			parameter_enum_t RXRCPPD, // Default: "FALSE"
			parameter_enum_t RXRECCLK1_USE_SYNC, // Default: "FALSE"
			parameter_string_t RXRIBADJ, // Default: 2'b11
			parameter_enum_t RXRPDPD, // Default: "FALSE"
			parameter_enum_t RXRSDPD, // Default: "FALSE"
			parameter_string_t RXSLOWDOWN_CAL, // Default: 2'b00
			parameter_string_t RXTUNE, // Default: 13'h0000
			parameter_string_t RXVCODAC_INIT, // Default: 10'b1010000000
			parameter_enum_t RXVCO_CTRL_ENABLE, // Default: "FALSE"
			parameter_enum_t RX_BUFFER_USE, // Default: "TRUE"
			parameter_string_t RX_CLOCK_DIVIDER, // Default: 2'b00
			parameter_enum_t SAMPLE_8X, // Default: "FALSE"
			parameter_string_t SLOWDOWN_CAL, // Default: 2'b00
			parameter_string_t TXABPMACLKSEL, // Default: "REFCLK1"
			parameter_enum_t TXAPD, // Default: "FALSE"
			parameter_enum_t TXAREFBIASSEL, // Default: "TRUE"
			parameter_string_t TXASYNCDIVIDE, // Default: 2'b11
			parameter_enum_t TXCLK0_FORCE_PMACLK, // Default: "FALSE"
			parameter_string_t TXCLKMODE, // Default: 4'b1001
			parameter_string_t TXCLMODE, // Default: 2'b00
			parameter_enum_t TXCPSEL, // Default: "TRUE"
			parameter_enum_t TXCRCCLOCKDOUBLE, // Default: "FALSE"
			parameter_enum_t TXCRCENABLE, // Default: "FALSE"
			parameter_string_t TXCRCINITVAL, // Default: 32'h00000000
			parameter_enum_t TXCRCINVERTGEN, // Default: "FALSE"
			parameter_enum_t TXCRCSAMECLOCK, // Default: "FALSE"
			parameter_string_t TXCTRL1, // Default: 10'h200
			parameter_string_t TXDATA_SEL, // Default: 2'b00
			parameter_string_t TXDAT_PRDRV_DAC, // Default: 3'b111
			parameter_string_t TXDAT_TAP_DAC, // Default: 5'b10110
			parameter_enum_t TXDIGPD, // Default: "FALSE"
			parameter_string_t TXFDCAL_CLOCK_DIVIDE, // Default: "NONE"
			parameter_enum_t TXHIGHSIGNALEN, // Default: "TRUE"
			parameter_string_t TXLOOPFILT, // Default: 4'b0111
			parameter_enum_t TXLVLSHFTPD, // Default: "FALSE"
			parameter_enum_t TXOUTCLK1_USE_SYNC, // Default: "FALSE"
			parameter_enum_t TXPD, // Default: "FALSE"
			parameter_enum_t TXPHASESEL, // Default: "FALSE"
			parameter_string_t TXPOST_PRDRV_DAC, // Default: 3'b111
			parameter_string_t TXPOST_TAP_DAC, // Default: 5'b01110
			parameter_enum_t TXPOST_TAP_PD, // Default: "TRUE"
			parameter_string_t TXPRE_PRDRV_DAC, // Default: 3'b111
			parameter_string_t TXPRE_TAP_DAC, // Default: 5'b00000
			parameter_enum_t TXPRE_TAP_PD, // Default: "TRUE"
			parameter_enum_t TXSLEWRATE, // Default: "FALSE"
			parameter_string_t TXTERMTRIM, // Default: 4'b1100
			parameter_string_t TXTUNE, // Default: 13'h0000
			parameter_enum_t TX_BUFFER_USE, // Default: "TRUE"
			parameter_string_t TX_CLOCK_DIVIDER, // Default: 2'b00
			parameter_string_t VCODAC_INIT, // Default: 10'b1010000000
			parameter_enum_t VCO_CTRL_ENABLE, // Default: "FALSE"
			parameter_string_t VREFBIASMODE, // Default: 2'b11
			parameter_string_t ALIGN_COMMA_WORD, // Default: 4
			parameter_string_t CHAN_BOND_LIMIT, // Default: 16
			parameter_string_t CHAN_BOND_SEQ_LEN, // Default: 1
			parameter_string_t CLK_COR_MAX_LAT, // Default: 48
			parameter_string_t CLK_COR_MIN_LAT, // Default: 36
			parameter_string_t CLK_COR_SEQ_LEN, // Default: 1
			parameter_string_t RXOUTDIV2SEL, // Default: 1
			parameter_string_t RXPLLNDIVSEL, // Default: 8
			parameter_string_t RXUSRDIVISOR, // Default: 1
			parameter_string_t SH_CNT_MAX, // Default: 64
			parameter_string_t SH_INVALID_CNT_MAX, // Default: 16
			parameter_string_t TXOUTDIV2SEL, // Default: 1
			parameter_string_t TXPLLNDIVSEL, // Default: 8
			//Verilog Ports in definition order:
			NetFlow* CHBONDO, // net ID: CHBONDO lsb: 0  msb: 0 OUTPUT
			NetFlow* COMBUSOUT, // net ID: COMBUSOUT lsb: 0  msb: 0 OUTPUT
			NetFlow* DO, // net ID: DO lsb: 0  msb: 0 OUTPUT
			NetFlow* DRDY, // net ID: DRDY lsb: 0  msb: 0 OUTPUT
			NetFlow* RXBUFERR, // net ID: RXBUFERR lsb: 0  msb: 0 OUTPUT
			NetFlow* RXCALFAIL, // net ID: RXCALFAIL lsb: 0  msb: 0 OUTPUT
			NetFlow* RXCHARISCOMMA, // net ID: RXCHARISCOMMA lsb: 0  msb: 0 OUTPUT
			NetFlow* RXCHARISK, // net ID: RXCHARISK lsb: 0  msb: 0 OUTPUT
			NetFlow* RXCOMMADET, // net ID: RXCOMMADET lsb: 0  msb: 0 OUTPUT
			NetFlow* RXCRCOUT, // net ID: RXCRCOUT lsb: 0  msb: 0 OUTPUT
			NetFlow* RXCYCLELIMIT, // net ID: RXCYCLELIMIT lsb: 0  msb: 0 OUTPUT
			NetFlow* RXDATA, // net ID: RXDATA lsb: 0  msb: 0 OUTPUT
			NetFlow* RXDISPERR, // net ID: RXDISPERR lsb: 0  msb: 0 OUTPUT
			NetFlow* RXLOCK, // net ID: RXLOCK lsb: 0  msb: 0 OUTPUT
			NetFlow* RXLOSSOFSYNC, // net ID: RXLOSSOFSYNC lsb: 0  msb: 0 OUTPUT
			NetFlow* RXMCLK, // net ID: RXMCLK lsb: 0  msb: 0 OUTPUT
			NetFlow* RXNOTINTABLE, // net ID: RXNOTINTABLE lsb: 0  msb: 0 OUTPUT
			NetFlow* RXPCSHCLKOUT, // net ID: RXPCSHCLKOUT lsb: 0  msb: 0 OUTPUT
			NetFlow* RXREALIGN, // net ID: RXREALIGN lsb: 0  msb: 0 OUTPUT
			NetFlow* RXRECCLK1, // net ID: RXRECCLK1 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXRECCLK2, // net ID: RXRECCLK2 lsb: 0  msb: 0 OUTPUT
			NetFlow* RXRUNDISP, // net ID: RXRUNDISP lsb: 0  msb: 0 OUTPUT
			NetFlow* RXSIGDET, // net ID: RXSIGDET lsb: 0  msb: 0 OUTPUT
			NetFlow* RXSTATUS, // net ID: RXSTATUS lsb: 0  msb: 0 OUTPUT
			NetFlow* TX1N, // net ID: TX1N lsb: 0  msb: 0 OUTPUT
			NetFlow* TX1P, // net ID: TX1P lsb: 0  msb: 0 OUTPUT
			NetFlow* TXBUFERR, // net ID: TXBUFERR lsb: 0  msb: 0 OUTPUT
			NetFlow* TXCALFAIL, // net ID: TXCALFAIL lsb: 0  msb: 0 OUTPUT
			NetFlow* TXCRCOUT, // net ID: TXCRCOUT lsb: 0  msb: 0 OUTPUT
			NetFlow* TXCYCLELIMIT, // net ID: TXCYCLELIMIT lsb: 0  msb: 0 OUTPUT
			NetFlow* TXKERR, // net ID: TXKERR lsb: 0  msb: 0 OUTPUT
			NetFlow* TXLOCK, // net ID: TXLOCK lsb: 0  msb: 0 OUTPUT
			NetFlow* TXOUTCLK1, // net ID: TXOUTCLK1 lsb: 0  msb: 0 OUTPUT
			NetFlow* TXOUTCLK2, // net ID: TXOUTCLK2 lsb: 0  msb: 0 OUTPUT
			NetFlow* TXPCSHCLKOUT, // net ID: TXPCSHCLKOUT lsb: 0  msb: 0 OUTPUT
			NetFlow* TXRUNDISP, // net ID: TXRUNDISP lsb: 0  msb: 0 OUTPUT
			NetFlow* CHBONDI, // net ID: CHBONDI lsb: 0  msb: 4 INPUT
			NetFlow* COMBUSIN, // net ID: COMBUSIN lsb: 0  msb: 15 INPUT
			NetFlow* DADDR, // net ID: DADDR lsb: 0  msb: 7 INPUT
			NetFlow* DCLK, // net ID: DCLK lsb: 0  msb: 0 INPUT
			NetFlow* DEN, // net ID: DEN lsb: 0  msb: 0 INPUT
			NetFlow* DI, // net ID: DI lsb: 0  msb: 15 INPUT
			NetFlow* DWE, // net ID: DWE lsb: 0  msb: 0 INPUT
			NetFlow* ENCHANSYNC, // net ID: ENCHANSYNC lsb: 0  msb: 0 INPUT
			NetFlow* ENMCOMMAALIGN, // net ID: ENMCOMMAALIGN lsb: 0  msb: 0 INPUT
			NetFlow* ENPCOMMAALIGN, // net ID: ENPCOMMAALIGN lsb: 0  msb: 0 INPUT
			NetFlow* GREFCLK, // net ID: GREFCLK lsb: 0  msb: 0 INPUT
			NetFlow* LOOPBACK, // net ID: LOOPBACK lsb: 0  msb: 1 INPUT
			NetFlow* POWERDOWN, // net ID: POWERDOWN lsb: 0  msb: 0 INPUT
			NetFlow* REFCLK1, // net ID: REFCLK1 lsb: 0  msb: 0 INPUT
			NetFlow* REFCLK2, // net ID: REFCLK2 lsb: 0  msb: 0 INPUT
			NetFlow* RX1N, // net ID: RX1N lsb: 0  msb: 0 INPUT
			NetFlow* RX1P, // net ID: RX1P lsb: 0  msb: 0 INPUT
			NetFlow* RXBLOCKSYNC64B66BUSE, // net ID: RXBLOCKSYNC64B66BUSE lsb: 0  msb: 0 INPUT
			NetFlow* RXCLKSTABLE, // net ID: RXCLKSTABLE lsb: 0  msb: 0 INPUT
			NetFlow* RXCOMMADETUSE, // net ID: RXCOMMADETUSE lsb: 0  msb: 0 INPUT
			NetFlow* RXCRCCLK, // net ID: RXCRCCLK lsb: 0  msb: 0 INPUT
			NetFlow* RXCRCDATAVALID, // net ID: RXCRCDATAVALID lsb: 0  msb: 0 INPUT
			NetFlow* RXCRCDATAWIDTH, // net ID: RXCRCDATAWIDTH lsb: 0  msb: 2 INPUT
			NetFlow* RXCRCIN, // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* RXCRCINIT, // net ID: RXCRCINIT lsb: 0  msb: 0 INPUT
			NetFlow* RXCRCINTCLK, // net ID: RXCRCINTCLK lsb: 0  msb: 0 INPUT
			NetFlow* RXCRCPD, // net ID: RXCRCPD lsb: 0  msb: 0 INPUT
			NetFlow* RXCRCRESET, // net ID: RXCRCRESET lsb: 0  msb: 0 INPUT
			NetFlow* RXDATAWIDTH, // net ID: RXDATAWIDTH lsb: 0  msb: 1 INPUT
			NetFlow* RXDEC64B66BUSE, // net ID: RXDEC64B66BUSE lsb: 0  msb: 0 INPUT
			NetFlow* RXDEC8B10BUSE, // net ID: RXDEC8B10BUSE lsb: 0  msb: 0 INPUT
			NetFlow* RXDESCRAM64B66BUSE, // net ID: RXDESCRAM64B66BUSE lsb: 0  msb: 0 INPUT
			NetFlow* RXIGNOREBTF, // net ID: RXIGNOREBTF lsb: 0  msb: 0 INPUT
			NetFlow* RXINTDATAWIDTH, // net ID: RXINTDATAWIDTH lsb: 0  msb: 1 INPUT
			NetFlow* RXPMARESET, // net ID: RXPMARESET lsb: 0  msb: 0 INPUT
			NetFlow* RXPOLARITY, // net ID: RXPOLARITY lsb: 0  msb: 0 INPUT
			NetFlow* RXRESET, // net ID: RXRESET lsb: 0  msb: 0 INPUT
			NetFlow* RXSLIDE, // net ID: RXSLIDE lsb: 0  msb: 0 INPUT
			NetFlow* RXSYNC, // net ID: RXSYNC lsb: 0  msb: 0 INPUT
			NetFlow* RXUSRCLK, // net ID: RXUSRCLK lsb: 0  msb: 0 INPUT
			NetFlow* RXUSRCLK2, // net ID: RXUSRCLK2 lsb: 0  msb: 0 INPUT
			NetFlow* TXBYPASS8B10B, // net ID: TXBYPASS8B10B lsb: 0  msb: 7 INPUT
			NetFlow* TXCHARDISPMODE, // net ID: TXCHARDISPMODE lsb: 0  msb: 7 INPUT
			NetFlow* TXCHARDISPVAL, // net ID: TXCHARDISPVAL lsb: 0  msb: 7 INPUT
			NetFlow* TXCHARISK, // net ID: TXCHARISK lsb: 0  msb: 7 INPUT
			NetFlow* TXCLKSTABLE, // net ID: TXCLKSTABLE lsb: 0  msb: 0 INPUT
			NetFlow* TXCRCCLK, // net ID: TXCRCCLK lsb: 0  msb: 0 INPUT
			NetFlow* TXCRCDATAVALID, // net ID: TXCRCDATAVALID lsb: 0  msb: 0 INPUT
			NetFlow* TXCRCDATAWIDTH, // net ID: TXCRCDATAWIDTH lsb: 0  msb: 2 INPUT
			NetFlow* TXCRCIN, // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			NetFlow* TXCRCINIT, // net ID: TXCRCINIT lsb: 0  msb: 0 INPUT
			NetFlow* TXCRCINTCLK, // net ID: TXCRCINTCLK lsb: 0  msb: 0 INPUT
			NetFlow* TXCRCPD, // net ID: TXCRCPD lsb: 0  msb: 0 INPUT
			NetFlow* TXCRCRESET, // net ID: TXCRCRESET lsb: 0  msb: 0 INPUT
			NetFlow* TXDATA, // net ID: TXDATA lsb: 0  msb: 63 INPUT
			NetFlow* TXDATAWIDTH, // net ID: TXDATAWIDTH lsb: 0  msb: 1 INPUT
			NetFlow* TXENC64B66BUSE, // net ID: TXENC64B66BUSE lsb: 0  msb: 0 INPUT
			NetFlow* TXENC8B10BUSE, // net ID: TXENC8B10BUSE lsb: 0  msb: 0 INPUT
			NetFlow* TXENOOB, // net ID: TXENOOB lsb: 0  msb: 0 INPUT
			NetFlow* TXGEARBOX64B66BUSE, // net ID: TXGEARBOX64B66BUSE lsb: 0  msb: 0 INPUT
			NetFlow* TXINHIBIT, // net ID: TXINHIBIT lsb: 0  msb: 0 INPUT
			NetFlow* TXINTDATAWIDTH, // net ID: TXINTDATAWIDTH lsb: 0  msb: 1 INPUT
			NetFlow* TXPMARESET, // net ID: TXPMARESET lsb: 0  msb: 0 INPUT
			NetFlow* TXPOLARITY, // net ID: TXPOLARITY lsb: 0  msb: 0 INPUT
			NetFlow* TXRESET, // net ID: TXRESET lsb: 0  msb: 0 INPUT
			NetFlow* TXSCRAM64B66BUSE, // net ID: TXSCRAM64B66BUSE lsb: 0  msb: 0 INPUT
			NetFlow* TXSYNC, // net ID: TXSYNC lsb: 0  msb: 0 INPUT
			NetFlow* TXUSRCLK, // net ID: TXUSRCLK lsb: 0  msb: 0 INPUT
			NetFlow* TXUSRCLK2 // net ID: TXUSRCLK2 lsb: 0  msb: 0 INPUT
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
			this->CHBONDO = CHBONDO; // net ID: CHBONDO lsb: 0  msb: 0 OUTPUT
			this->COMBUSOUT = COMBUSOUT; // net ID: COMBUSOUT lsb: 0  msb: 0 OUTPUT
			this->DO = DO; // net ID: DO lsb: 0  msb: 0 OUTPUT
			this->DRDY = DRDY; // net ID: DRDY lsb: 0  msb: 0 OUTPUT
			this->RXBUFERR = RXBUFERR; // net ID: RXBUFERR lsb: 0  msb: 0 OUTPUT
			this->RXCALFAIL = RXCALFAIL; // net ID: RXCALFAIL lsb: 0  msb: 0 OUTPUT
			this->RXCHARISCOMMA = RXCHARISCOMMA; // net ID: RXCHARISCOMMA lsb: 0  msb: 0 OUTPUT
			this->RXCHARISK = RXCHARISK; // net ID: RXCHARISK lsb: 0  msb: 0 OUTPUT
			this->RXCOMMADET = RXCOMMADET; // net ID: RXCOMMADET lsb: 0  msb: 0 OUTPUT
			this->RXCRCOUT = RXCRCOUT; // net ID: RXCRCOUT lsb: 0  msb: 0 OUTPUT
			this->RXCYCLELIMIT = RXCYCLELIMIT; // net ID: RXCYCLELIMIT lsb: 0  msb: 0 OUTPUT
			this->RXDATA = RXDATA; // net ID: RXDATA lsb: 0  msb: 0 OUTPUT
			this->RXDISPERR = RXDISPERR; // net ID: RXDISPERR lsb: 0  msb: 0 OUTPUT
			this->RXLOCK = RXLOCK; // net ID: RXLOCK lsb: 0  msb: 0 OUTPUT
			this->RXLOSSOFSYNC = RXLOSSOFSYNC; // net ID: RXLOSSOFSYNC lsb: 0  msb: 0 OUTPUT
			this->RXMCLK = RXMCLK; // net ID: RXMCLK lsb: 0  msb: 0 OUTPUT
			this->RXNOTINTABLE = RXNOTINTABLE; // net ID: RXNOTINTABLE lsb: 0  msb: 0 OUTPUT
			this->RXPCSHCLKOUT = RXPCSHCLKOUT; // net ID: RXPCSHCLKOUT lsb: 0  msb: 0 OUTPUT
			this->RXREALIGN = RXREALIGN; // net ID: RXREALIGN lsb: 0  msb: 0 OUTPUT
			this->RXRECCLK1 = RXRECCLK1; // net ID: RXRECCLK1 lsb: 0  msb: 0 OUTPUT
			this->RXRECCLK2 = RXRECCLK2; // net ID: RXRECCLK2 lsb: 0  msb: 0 OUTPUT
			this->RXRUNDISP = RXRUNDISP; // net ID: RXRUNDISP lsb: 0  msb: 0 OUTPUT
			this->RXSIGDET = RXSIGDET; // net ID: RXSIGDET lsb: 0  msb: 0 OUTPUT
			this->RXSTATUS = RXSTATUS; // net ID: RXSTATUS lsb: 0  msb: 0 OUTPUT
			this->TX1N = TX1N; // net ID: TX1N lsb: 0  msb: 0 OUTPUT
			this->TX1P = TX1P; // net ID: TX1P lsb: 0  msb: 0 OUTPUT
			this->TXBUFERR = TXBUFERR; // net ID: TXBUFERR lsb: 0  msb: 0 OUTPUT
			this->TXCALFAIL = TXCALFAIL; // net ID: TXCALFAIL lsb: 0  msb: 0 OUTPUT
			this->TXCRCOUT = TXCRCOUT; // net ID: TXCRCOUT lsb: 0  msb: 0 OUTPUT
			this->TXCYCLELIMIT = TXCYCLELIMIT; // net ID: TXCYCLELIMIT lsb: 0  msb: 0 OUTPUT
			this->TXKERR = TXKERR; // net ID: TXKERR lsb: 0  msb: 0 OUTPUT
			this->TXLOCK = TXLOCK; // net ID: TXLOCK lsb: 0  msb: 0 OUTPUT
			this->TXOUTCLK1 = TXOUTCLK1; // net ID: TXOUTCLK1 lsb: 0  msb: 0 OUTPUT
			this->TXOUTCLK2 = TXOUTCLK2; // net ID: TXOUTCLK2 lsb: 0  msb: 0 OUTPUT
			this->TXPCSHCLKOUT = TXPCSHCLKOUT; // net ID: TXPCSHCLKOUT lsb: 0  msb: 0 OUTPUT
			this->TXRUNDISP = TXRUNDISP; // net ID: TXRUNDISP lsb: 0  msb: 0 OUTPUT
			this->CHBONDI = CHBONDI; // net ID: CHBONDI lsb: 0  msb: 4 INPUT
			this->COMBUSIN = COMBUSIN; // net ID: COMBUSIN lsb: 0  msb: 15 INPUT
			this->DADDR = DADDR; // net ID: DADDR lsb: 0  msb: 7 INPUT
			this->DCLK = DCLK; // net ID: DCLK lsb: 0  msb: 0 INPUT
			this->DEN = DEN; // net ID: DEN lsb: 0  msb: 0 INPUT
			this->DI = DI; // net ID: DI lsb: 0  msb: 15 INPUT
			this->DWE = DWE; // net ID: DWE lsb: 0  msb: 0 INPUT
			this->ENCHANSYNC = ENCHANSYNC; // net ID: ENCHANSYNC lsb: 0  msb: 0 INPUT
			this->ENMCOMMAALIGN = ENMCOMMAALIGN; // net ID: ENMCOMMAALIGN lsb: 0  msb: 0 INPUT
			this->ENPCOMMAALIGN = ENPCOMMAALIGN; // net ID: ENPCOMMAALIGN lsb: 0  msb: 0 INPUT
			this->GREFCLK = GREFCLK; // net ID: GREFCLK lsb: 0  msb: 0 INPUT
			this->LOOPBACK = LOOPBACK; // net ID: LOOPBACK lsb: 0  msb: 1 INPUT
			this->POWERDOWN = POWERDOWN; // net ID: POWERDOWN lsb: 0  msb: 0 INPUT
			this->REFCLK1 = REFCLK1; // net ID: REFCLK1 lsb: 0  msb: 0 INPUT
			this->REFCLK2 = REFCLK2; // net ID: REFCLK2 lsb: 0  msb: 0 INPUT
			this->RX1N = RX1N; // net ID: RX1N lsb: 0  msb: 0 INPUT
			this->RX1P = RX1P; // net ID: RX1P lsb: 0  msb: 0 INPUT
			this->RXBLOCKSYNC64B66BUSE = RXBLOCKSYNC64B66BUSE; // net ID: RXBLOCKSYNC64B66BUSE lsb: 0  msb: 0 INPUT
			this->RXCLKSTABLE = RXCLKSTABLE; // net ID: RXCLKSTABLE lsb: 0  msb: 0 INPUT
			this->RXCOMMADETUSE = RXCOMMADETUSE; // net ID: RXCOMMADETUSE lsb: 0  msb: 0 INPUT
			this->RXCRCCLK = RXCRCCLK; // net ID: RXCRCCLK lsb: 0  msb: 0 INPUT
			this->RXCRCDATAVALID = RXCRCDATAVALID; // net ID: RXCRCDATAVALID lsb: 0  msb: 0 INPUT
			this->RXCRCDATAWIDTH = RXCRCDATAWIDTH; // net ID: RXCRCDATAWIDTH lsb: 0  msb: 2 INPUT
			this->RXCRCIN = RXCRCIN; // net ID: RXCRCIN lsb: 0  msb: 63 INPUT
			this->RXCRCINIT = RXCRCINIT; // net ID: RXCRCINIT lsb: 0  msb: 0 INPUT
			this->RXCRCINTCLK = RXCRCINTCLK; // net ID: RXCRCINTCLK lsb: 0  msb: 0 INPUT
			this->RXCRCPD = RXCRCPD; // net ID: RXCRCPD lsb: 0  msb: 0 INPUT
			this->RXCRCRESET = RXCRCRESET; // net ID: RXCRCRESET lsb: 0  msb: 0 INPUT
			this->RXDATAWIDTH = RXDATAWIDTH; // net ID: RXDATAWIDTH lsb: 0  msb: 1 INPUT
			this->RXDEC64B66BUSE = RXDEC64B66BUSE; // net ID: RXDEC64B66BUSE lsb: 0  msb: 0 INPUT
			this->RXDEC8B10BUSE = RXDEC8B10BUSE; // net ID: RXDEC8B10BUSE lsb: 0  msb: 0 INPUT
			this->RXDESCRAM64B66BUSE = RXDESCRAM64B66BUSE; // net ID: RXDESCRAM64B66BUSE lsb: 0  msb: 0 INPUT
			this->RXIGNOREBTF = RXIGNOREBTF; // net ID: RXIGNOREBTF lsb: 0  msb: 0 INPUT
			this->RXINTDATAWIDTH = RXINTDATAWIDTH; // net ID: RXINTDATAWIDTH lsb: 0  msb: 1 INPUT
			this->RXPMARESET = RXPMARESET; // net ID: RXPMARESET lsb: 0  msb: 0 INPUT
			this->RXPOLARITY = RXPOLARITY; // net ID: RXPOLARITY lsb: 0  msb: 0 INPUT
			this->RXRESET = RXRESET; // net ID: RXRESET lsb: 0  msb: 0 INPUT
			this->RXSLIDE = RXSLIDE; // net ID: RXSLIDE lsb: 0  msb: 0 INPUT
			this->RXSYNC = RXSYNC; // net ID: RXSYNC lsb: 0  msb: 0 INPUT
			this->RXUSRCLK = RXUSRCLK; // net ID: RXUSRCLK lsb: 0  msb: 0 INPUT
			this->RXUSRCLK2 = RXUSRCLK2; // net ID: RXUSRCLK2 lsb: 0  msb: 0 INPUT
			this->TXBYPASS8B10B = TXBYPASS8B10B; // net ID: TXBYPASS8B10B lsb: 0  msb: 7 INPUT
			this->TXCHARDISPMODE = TXCHARDISPMODE; // net ID: TXCHARDISPMODE lsb: 0  msb: 7 INPUT
			this->TXCHARDISPVAL = TXCHARDISPVAL; // net ID: TXCHARDISPVAL lsb: 0  msb: 7 INPUT
			this->TXCHARISK = TXCHARISK; // net ID: TXCHARISK lsb: 0  msb: 7 INPUT
			this->TXCLKSTABLE = TXCLKSTABLE; // net ID: TXCLKSTABLE lsb: 0  msb: 0 INPUT
			this->TXCRCCLK = TXCRCCLK; // net ID: TXCRCCLK lsb: 0  msb: 0 INPUT
			this->TXCRCDATAVALID = TXCRCDATAVALID; // net ID: TXCRCDATAVALID lsb: 0  msb: 0 INPUT
			this->TXCRCDATAWIDTH = TXCRCDATAWIDTH; // net ID: TXCRCDATAWIDTH lsb: 0  msb: 2 INPUT
			this->TXCRCIN = TXCRCIN; // net ID: TXCRCIN lsb: 0  msb: 63 INPUT
			this->TXCRCINIT = TXCRCINIT; // net ID: TXCRCINIT lsb: 0  msb: 0 INPUT
			this->TXCRCINTCLK = TXCRCINTCLK; // net ID: TXCRCINTCLK lsb: 0  msb: 0 INPUT
			this->TXCRCPD = TXCRCPD; // net ID: TXCRCPD lsb: 0  msb: 0 INPUT
			this->TXCRCRESET = TXCRCRESET; // net ID: TXCRCRESET lsb: 0  msb: 0 INPUT
			this->TXDATA = TXDATA; // net ID: TXDATA lsb: 0  msb: 63 INPUT
			this->TXDATAWIDTH = TXDATAWIDTH; // net ID: TXDATAWIDTH lsb: 0  msb: 1 INPUT
			this->TXENC64B66BUSE = TXENC64B66BUSE; // net ID: TXENC64B66BUSE lsb: 0  msb: 0 INPUT
			this->TXENC8B10BUSE = TXENC8B10BUSE; // net ID: TXENC8B10BUSE lsb: 0  msb: 0 INPUT
			this->TXENOOB = TXENOOB; // net ID: TXENOOB lsb: 0  msb: 0 INPUT
			this->TXGEARBOX64B66BUSE = TXGEARBOX64B66BUSE; // net ID: TXGEARBOX64B66BUSE lsb: 0  msb: 0 INPUT
			this->TXINHIBIT = TXINHIBIT; // net ID: TXINHIBIT lsb: 0  msb: 0 INPUT
			this->TXINTDATAWIDTH = TXINTDATAWIDTH; // net ID: TXINTDATAWIDTH lsb: 0  msb: 1 INPUT
			this->TXPMARESET = TXPMARESET; // net ID: TXPMARESET lsb: 0  msb: 0 INPUT
			this->TXPOLARITY = TXPOLARITY; // net ID: TXPOLARITY lsb: 0  msb: 0 INPUT
			this->TXRESET = TXRESET; // net ID: TXRESET lsb: 0  msb: 0 INPUT
			this->TXSCRAM64B66BUSE = TXSCRAM64B66BUSE; // net ID: TXSCRAM64B66BUSE lsb: 0  msb: 0 INPUT
			this->TXSYNC = TXSYNC; // net ID: TXSYNC lsb: 0  msb: 0 INPUT
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
