/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_PPC440_H
#define X_PPC440_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_PPC440: public Primitive{

		//Verilog Parameters:
		parameter_string_t LOC;
		parameter_enum_t CLOCK_DELAY;
		parameter_enum_t DCR_AUTOLOCK_ENABLE;
		parameter_enum_t PPCDM_ASYNCMODE;
		parameter_enum_t PPCDS_ASYNCMODE;
		parameter_enum_t PPCS0_WIDTH_128N64;
		parameter_enum_t PPCS1_WIDTH_128N64;
		parameter_int_t APU_CONTROL;
		parameter_int_t APU_UDI0;
		parameter_int_t APU_UDI1;
		parameter_int_t APU_UDI10;
		parameter_int_t APU_UDI11;
		parameter_int_t APU_UDI12;
		parameter_int_t APU_UDI13;
		parameter_int_t APU_UDI14;
		parameter_int_t APU_UDI15;
		parameter_int_t APU_UDI2;
		parameter_int_t APU_UDI3;
		parameter_int_t APU_UDI4;
		parameter_int_t APU_UDI5;
		parameter_int_t APU_UDI6;
		parameter_int_t APU_UDI7;
		parameter_int_t APU_UDI8;
		parameter_int_t APU_UDI9;
		parameter_int_t DMA0_RXCHANNELCTRL;
		parameter_int_t DMA0_TXCHANNELCTRL;
		parameter_int_t DMA1_RXCHANNELCTRL;
		parameter_int_t DMA1_TXCHANNELCTRL;
		parameter_int_t DMA2_RXCHANNELCTRL;
		parameter_int_t DMA2_TXCHANNELCTRL;
		parameter_int_t DMA3_RXCHANNELCTRL;
		parameter_int_t DMA3_TXCHANNELCTRL;
		parameter_int_t INTERCONNECT_IMASK;
		parameter_int_t INTERCONNECT_TMPL_SEL;
		parameter_int_t MI_ARBCONFIG;
		parameter_int_t MI_BANKCONFLICT_MASK;
		parameter_int_t MI_CONTROL;
		parameter_int_t MI_ROWCONFLICT_MASK;
		parameter_int_t PPCM_ARBCONFIG;
		parameter_int_t PPCM_CONTROL;
		parameter_int_t PPCM_COUNTER;
		parameter_int_t PPCS0_ADDRMAP_TMPL0;
		parameter_int_t PPCS0_ADDRMAP_TMPL1;
		parameter_int_t PPCS0_ADDRMAP_TMPL2;
		parameter_int_t PPCS0_ADDRMAP_TMPL3;
		parameter_int_t PPCS0_CONTROL;
		parameter_int_t PPCS1_ADDRMAP_TMPL0;
		parameter_int_t PPCS1_ADDRMAP_TMPL1;
		parameter_int_t PPCS1_ADDRMAP_TMPL2;
		parameter_int_t PPCS1_ADDRMAP_TMPL3;
		parameter_int_t PPCS1_CONTROL;
		parameter_int_t XBAR_ADDRMAP_TMPL0;
		parameter_int_t XBAR_ADDRMAP_TMPL1;
		parameter_int_t XBAR_ADDRMAP_TMPL2;
		parameter_int_t XBAR_ADDRMAP_TMPL3;
		parameter_int_t DMA0_CONTROL;
		parameter_int_t DMA1_CONTROL;
		parameter_int_t DMA2_CONTROL;
		parameter_int_t DMA3_CONTROL;
		parameter_int_t DMA0_RXIRQTIMER;
		parameter_int_t DMA0_TXIRQTIMER;
		parameter_int_t DMA1_RXIRQTIMER;
		parameter_int_t DMA1_TXIRQTIMER;
		parameter_int_t DMA2_RXIRQTIMER;
		parameter_int_t DMA2_TXIRQTIMER;
		parameter_int_t DMA3_RXIRQTIMER;
		parameter_int_t DMA3_TXIRQTIMER;
		//Verilog Ports in definition order:
		NetFlow* APUFCMDECFPUOP_A0_B; // net ID: APUFCMDECFPUOP lsb: 0  msb: 0 OUTPUT
		NetFlow* APUFCMDECLOAD_A0_B; // net ID: APUFCMDECLOAD lsb: 0  msb: 0 OUTPUT
		NetFlow* APUFCMDECNONAUTON_A0_B; // net ID: APUFCMDECNONAUTON lsb: 0  msb: 0 OUTPUT
		NetFlow* APUFCMDECSTORE_A0_B; // net ID: APUFCMDECSTORE lsb: 0  msb: 0 OUTPUT
		NetFlow* APUFCMDECUDIVALID_A0_B; // net ID: APUFCMDECUDIVALID lsb: 0  msb: 0 OUTPUT
		NetFlow* APUFCMENDIAN_A0_B; // net ID: APUFCMENDIAN lsb: 0  msb: 0 OUTPUT
		NetFlow* APUFCMFLUSH_A0_B; // net ID: APUFCMFLUSH lsb: 0  msb: 0 OUTPUT
		NetFlow* APUFCMINSTRVALID_A0_B; // net ID: APUFCMINSTRVALID lsb: 0  msb: 0 OUTPUT
		NetFlow* APUFCMLOADDVALID_A0_B; // net ID: APUFCMLOADDVALID lsb: 0  msb: 0 OUTPUT
		NetFlow* APUFCMMSRFE0_A0_B; // net ID: APUFCMMSRFE0 lsb: 0  msb: 0 OUTPUT
		NetFlow* APUFCMMSRFE1_A0_B; // net ID: APUFCMMSRFE1 lsb: 0  msb: 0 OUTPUT
		NetFlow* APUFCMNEXTINSTRREADY_A0_B; // net ID: APUFCMNEXTINSTRREADY lsb: 0  msb: 0 OUTPUT
		NetFlow* APUFCMOPERANDVALID_A0_B; // net ID: APUFCMOPERANDVALID lsb: 0  msb: 0 OUTPUT
		NetFlow* APUFCMWRITEBACKOK_A0_B; // net ID: APUFCMWRITEBACKOK lsb: 0  msb: 0 OUTPUT
		NetFlow* C440CPMCORESLEEPREQ_A0_B; // net ID: C440CPMCORESLEEPREQ lsb: 0  msb: 0 OUTPUT
		NetFlow* C440CPMDECIRPTREQ_A0_B; // net ID: C440CPMDECIRPTREQ lsb: 0  msb: 0 OUTPUT
		NetFlow* C440CPMFITIRPTREQ_A0_B; // net ID: C440CPMFITIRPTREQ lsb: 0  msb: 0 OUTPUT
		NetFlow* C440CPMMSRCE_A0_B; // net ID: C440CPMMSRCE lsb: 0  msb: 0 OUTPUT
		NetFlow* C440CPMMSREE_A0_B; // net ID: C440CPMMSREE lsb: 0  msb: 0 OUTPUT
		NetFlow* C440CPMTIMERRESETREQ_A0_B; // net ID: C440CPMTIMERRESETREQ lsb: 0  msb: 0 OUTPUT
		NetFlow* C440CPMWDIRPTREQ_A0_B; // net ID: C440CPMWDIRPTREQ lsb: 0  msb: 0 OUTPUT
		NetFlow* C440JTGTDO_A0_B; // net ID: C440JTGTDO lsb: 0  msb: 0 OUTPUT
		NetFlow* C440JTGTDOEN_A0_B; // net ID: C440JTGTDOEN lsb: 0  msb: 0 OUTPUT
		NetFlow* C440MACHINECHECK_A0_B; // net ID: C440MACHINECHECK lsb: 0  msb: 0 OUTPUT
		NetFlow* C440RSTCHIPRESETREQ_A0_B; // net ID: C440RSTCHIPRESETREQ lsb: 0  msb: 0 OUTPUT
		NetFlow* C440RSTCORERESETREQ_A0_B; // net ID: C440RSTCORERESETREQ lsb: 0  msb: 0 OUTPUT
		NetFlow* C440RSTSYSTEMRESETREQ_A0_B; // net ID: C440RSTSYSTEMRESETREQ lsb: 0  msb: 0 OUTPUT
		NetFlow* C440TRCCYCLE_A0_B; // net ID: C440TRCCYCLE lsb: 0  msb: 0 OUTPUT
		NetFlow* C440TRCTRIGGEREVENTOUT_A0_B; // net ID: C440TRCTRIGGEREVENTOUT lsb: 0  msb: 0 OUTPUT
		NetFlow* DMA0LLRSTENGINEACK_A0_B; // net ID: DMA0LLRSTENGINEACK lsb: 0  msb: 0 OUTPUT
		NetFlow* DMA0LLRXDSTRDYN_A0_B; // net ID: DMA0LLRXDSTRDYN lsb: 0  msb: 0 OUTPUT
		NetFlow* DMA0LLTXEOFN_A0_B; // net ID: DMA0LLTXEOFN lsb: 0  msb: 0 OUTPUT
		NetFlow* DMA0LLTXEOPN_A0_B; // net ID: DMA0LLTXEOPN lsb: 0  msb: 0 OUTPUT
		NetFlow* DMA0LLTXSOFN_A0_B; // net ID: DMA0LLTXSOFN lsb: 0  msb: 0 OUTPUT
		NetFlow* DMA0LLTXSOPN_A0_B; // net ID: DMA0LLTXSOPN lsb: 0  msb: 0 OUTPUT
		NetFlow* DMA0LLTXSRCRDYN_A0_B; // net ID: DMA0LLTXSRCRDYN lsb: 0  msb: 0 OUTPUT
		NetFlow* DMA0RXIRQ_A0_B; // net ID: DMA0RXIRQ lsb: 0  msb: 0 OUTPUT
		NetFlow* DMA0TXIRQ_A0_B; // net ID: DMA0TXIRQ lsb: 0  msb: 0 OUTPUT
		NetFlow* DMA1LLRSTENGINEACK_A0_B; // net ID: DMA1LLRSTENGINEACK lsb: 0  msb: 0 OUTPUT
		NetFlow* DMA1LLRXDSTRDYN_A0_B; // net ID: DMA1LLRXDSTRDYN lsb: 0  msb: 0 OUTPUT
		NetFlow* DMA1LLTXEOFN_A0_B; // net ID: DMA1LLTXEOFN lsb: 0  msb: 0 OUTPUT
		NetFlow* DMA1LLTXEOPN_A0_B; // net ID: DMA1LLTXEOPN lsb: 0  msb: 0 OUTPUT
		NetFlow* DMA1LLTXSOFN_A0_B; // net ID: DMA1LLTXSOFN lsb: 0  msb: 0 OUTPUT
		NetFlow* DMA1LLTXSOPN_A0_B; // net ID: DMA1LLTXSOPN lsb: 0  msb: 0 OUTPUT
		NetFlow* DMA1LLTXSRCRDYN_A0_B; // net ID: DMA1LLTXSRCRDYN lsb: 0  msb: 0 OUTPUT
		NetFlow* DMA1RXIRQ_A0_B; // net ID: DMA1RXIRQ lsb: 0  msb: 0 OUTPUT
		NetFlow* DMA1TXIRQ_A0_B; // net ID: DMA1TXIRQ lsb: 0  msb: 0 OUTPUT
		NetFlow* DMA2LLRSTENGINEACK_A0_B; // net ID: DMA2LLRSTENGINEACK lsb: 0  msb: 0 OUTPUT
		NetFlow* DMA2LLRXDSTRDYN_A0_B; // net ID: DMA2LLRXDSTRDYN lsb: 0  msb: 0 OUTPUT
		NetFlow* DMA2LLTXEOFN_A0_B; // net ID: DMA2LLTXEOFN lsb: 0  msb: 0 OUTPUT
		NetFlow* DMA2LLTXEOPN_A0_B; // net ID: DMA2LLTXEOPN lsb: 0  msb: 0 OUTPUT
		NetFlow* DMA2LLTXSOFN_A0_B; // net ID: DMA2LLTXSOFN lsb: 0  msb: 0 OUTPUT
		NetFlow* DMA2LLTXSOPN_A0_B; // net ID: DMA2LLTXSOPN lsb: 0  msb: 0 OUTPUT
		NetFlow* DMA2LLTXSRCRDYN_A0_B; // net ID: DMA2LLTXSRCRDYN lsb: 0  msb: 0 OUTPUT
		NetFlow* DMA2RXIRQ_A0_B; // net ID: DMA2RXIRQ lsb: 0  msb: 0 OUTPUT
		NetFlow* DMA2TXIRQ_A0_B; // net ID: DMA2TXIRQ lsb: 0  msb: 0 OUTPUT
		NetFlow* DMA3LLRSTENGINEACK_A0_B; // net ID: DMA3LLRSTENGINEACK lsb: 0  msb: 0 OUTPUT
		NetFlow* DMA3LLRXDSTRDYN_A0_B; // net ID: DMA3LLRXDSTRDYN lsb: 0  msb: 0 OUTPUT
		NetFlow* DMA3LLTXEOFN_A0_B; // net ID: DMA3LLTXEOFN lsb: 0  msb: 0 OUTPUT
		NetFlow* DMA3LLTXEOPN_A0_B; // net ID: DMA3LLTXEOPN lsb: 0  msb: 0 OUTPUT
		NetFlow* DMA3LLTXSOFN_A0_B; // net ID: DMA3LLTXSOFN lsb: 0  msb: 0 OUTPUT
		NetFlow* DMA3LLTXSOPN_A0_B; // net ID: DMA3LLTXSOPN lsb: 0  msb: 0 OUTPUT
		NetFlow* DMA3LLTXSRCRDYN_A0_B; // net ID: DMA3LLTXSRCRDYN lsb: 0  msb: 0 OUTPUT
		NetFlow* DMA3RXIRQ_A0_B; // net ID: DMA3RXIRQ lsb: 0  msb: 0 OUTPUT
		NetFlow* DMA3TXIRQ_A0_B; // net ID: DMA3TXIRQ lsb: 0  msb: 0 OUTPUT
		NetFlow* MIMCADDRESSVALID_A0_B; // net ID: MIMCADDRESSVALID lsb: 0  msb: 0 OUTPUT
		NetFlow* MIMCBANKCONFLICT_A0_B; // net ID: MIMCBANKCONFLICT lsb: 0  msb: 0 OUTPUT
		NetFlow* MIMCREADNOTWRITE_A0_B; // net ID: MIMCREADNOTWRITE lsb: 0  msb: 0 OUTPUT
		NetFlow* MIMCROWCONFLICT_A0_B; // net ID: MIMCROWCONFLICT lsb: 0  msb: 0 OUTPUT
		NetFlow* MIMCWRITEDATAVALID_A0_B; // net ID: MIMCWRITEDATAVALID lsb: 0  msb: 0 OUTPUT
		NetFlow* PPCCPMINTERCONNECTBUSY_A0_B; // net ID: PPCCPMINTERCONNECTBUSY lsb: 0  msb: 0 OUTPUT
		NetFlow* PPCDMDCRREAD_A0_B; // net ID: PPCDMDCRREAD lsb: 0  msb: 0 OUTPUT
		NetFlow* PPCDMDCRWRITE_A0_B; // net ID: PPCDMDCRWRITE lsb: 0  msb: 0 OUTPUT
		NetFlow* PPCDSDCRACK_A0_B; // net ID: PPCDSDCRACK lsb: 0  msb: 0 OUTPUT
		NetFlow* PPCDSDCRTIMEOUTWAIT_A0_B; // net ID: PPCDSDCRTIMEOUTWAIT lsb: 0  msb: 0 OUTPUT
		NetFlow* PPCEICINTERCONNECTIRQ_A0_B; // net ID: PPCEICINTERCONNECTIRQ lsb: 0  msb: 0 OUTPUT
		NetFlow* PPCMPLBABORT_A0_B; // net ID: PPCMPLBABORT lsb: 0  msb: 0 OUTPUT
		NetFlow* PPCMPLBBUSLOCK_A0_B; // net ID: PPCMPLBBUSLOCK lsb: 0  msb: 0 OUTPUT
		NetFlow* PPCMPLBLOCKERR_A0_B; // net ID: PPCMPLBLOCKERR lsb: 0  msb: 0 OUTPUT
		NetFlow* PPCMPLBRDBURST_A0_B; // net ID: PPCMPLBRDBURST lsb: 0  msb: 0 OUTPUT
		NetFlow* PPCMPLBREQUEST_A0_B; // net ID: PPCMPLBREQUEST lsb: 0  msb: 0 OUTPUT
		NetFlow* PPCMPLBRNW_A0_B; // net ID: PPCMPLBRNW lsb: 0  msb: 0 OUTPUT
		NetFlow* PPCMPLBWRBURST_A0_B; // net ID: PPCMPLBWRBURST lsb: 0  msb: 0 OUTPUT
		NetFlow* PPCS0PLBADDRACK_A0_B; // net ID: PPCS0PLBADDRACK lsb: 0  msb: 0 OUTPUT
		NetFlow* PPCS0PLBRDBTERM_A0_B; // net ID: PPCS0PLBRDBTERM lsb: 0  msb: 0 OUTPUT
		NetFlow* PPCS0PLBRDCOMP_A0_B; // net ID: PPCS0PLBRDCOMP lsb: 0  msb: 0 OUTPUT
		NetFlow* PPCS0PLBRDDACK_A0_B; // net ID: PPCS0PLBRDDACK lsb: 0  msb: 0 OUTPUT
		NetFlow* PPCS0PLBREARBITRATE_A0_B; // net ID: PPCS0PLBREARBITRATE lsb: 0  msb: 0 OUTPUT
		NetFlow* PPCS0PLBWAIT_A0_B; // net ID: PPCS0PLBWAIT lsb: 0  msb: 0 OUTPUT
		NetFlow* PPCS0PLBWRBTERM_A0_B; // net ID: PPCS0PLBWRBTERM lsb: 0  msb: 0 OUTPUT
		NetFlow* PPCS0PLBWRCOMP_A0_B; // net ID: PPCS0PLBWRCOMP lsb: 0  msb: 0 OUTPUT
		NetFlow* PPCS0PLBWRDACK_A0_B; // net ID: PPCS0PLBWRDACK lsb: 0  msb: 0 OUTPUT
		NetFlow* PPCS1PLBADDRACK_A0_B; // net ID: PPCS1PLBADDRACK lsb: 0  msb: 0 OUTPUT
		NetFlow* PPCS1PLBRDBTERM_A0_B; // net ID: PPCS1PLBRDBTERM lsb: 0  msb: 0 OUTPUT
		NetFlow* PPCS1PLBRDCOMP_A0_B; // net ID: PPCS1PLBRDCOMP lsb: 0  msb: 0 OUTPUT
		NetFlow* PPCS1PLBRDDACK_A0_B; // net ID: PPCS1PLBRDDACK lsb: 0  msb: 0 OUTPUT
		NetFlow* PPCS1PLBREARBITRATE_A0_B; // net ID: PPCS1PLBREARBITRATE lsb: 0  msb: 0 OUTPUT
		NetFlow* PPCS1PLBWAIT_A0_B; // net ID: PPCS1PLBWAIT lsb: 0  msb: 0 OUTPUT
		NetFlow* PPCS1PLBWRBTERM_A0_B; // net ID: PPCS1PLBWRBTERM lsb: 0  msb: 0 OUTPUT
		NetFlow* PPCS1PLBWRCOMP_A0_B; // net ID: PPCS1PLBWRCOMP lsb: 0  msb: 0 OUTPUT
		NetFlow* PPCS1PLBWRDACK_A0_B; // net ID: PPCS1PLBWRDACK lsb: 0  msb: 0 OUTPUT
		NetFlow* CPMC440CLK_A0_B; // net ID: CPMC440CLK lsb: 0  msb: 0 INPUT
		NetFlow* CPMC440CLKEN_A0_B; // net ID: CPMC440CLKEN lsb: 0  msb: 0 INPUT
		NetFlow* CPMC440CORECLOCKINACTIVE_A0_B; // net ID: CPMC440CORECLOCKINACTIVE lsb: 0  msb: 0 INPUT
		NetFlow* CPMC440TIMERCLOCK_A0_B; // net ID: CPMC440TIMERCLOCK lsb: 0  msb: 0 INPUT
		NetFlow* CPMDCRCLK_A0_B; // net ID: CPMDCRCLK lsb: 0  msb: 0 INPUT
		NetFlow* CPMDMA0LLCLK_A0_B; // net ID: CPMDMA0LLCLK lsb: 0  msb: 0 INPUT
		NetFlow* CPMDMA1LLCLK_A0_B; // net ID: CPMDMA1LLCLK lsb: 0  msb: 0 INPUT
		NetFlow* CPMDMA2LLCLK_A0_B; // net ID: CPMDMA2LLCLK lsb: 0  msb: 0 INPUT
		NetFlow* CPMDMA3LLCLK_A0_B; // net ID: CPMDMA3LLCLK lsb: 0  msb: 0 INPUT
		NetFlow* CPMFCMCLK_A0_B; // net ID: CPMFCMCLK lsb: 0  msb: 0 INPUT
		NetFlow* CPMINTERCONNECTCLK_A0_B; // net ID: CPMINTERCONNECTCLK lsb: 0  msb: 0 INPUT
		NetFlow* CPMINTERCONNECTCLKEN_A0_B; // net ID: CPMINTERCONNECTCLKEN lsb: 0  msb: 0 INPUT
		NetFlow* CPMINTERCONNECTCLKNTO1_A0_B; // net ID: CPMINTERCONNECTCLKNTO1 lsb: 0  msb: 0 INPUT
		NetFlow* CPMMCCLK_A0_B; // net ID: CPMMCCLK lsb: 0  msb: 0 INPUT
		NetFlow* CPMPPCMPLBCLK_A0_B; // net ID: CPMPPCMPLBCLK lsb: 0  msb: 0 INPUT
		NetFlow* CPMPPCS0PLBCLK_A0_B; // net ID: CPMPPCS0PLBCLK lsb: 0  msb: 0 INPUT
		NetFlow* CPMPPCS1PLBCLK_A0_B; // net ID: CPMPPCS1PLBCLK lsb: 0  msb: 0 INPUT
		NetFlow* DBGC440DEBUGHALT_A0_B; // net ID: DBGC440DEBUGHALT lsb: 0  msb: 0 INPUT
		NetFlow* DBGC440UNCONDDEBUGEVENT_A0_B; // net ID: DBGC440UNCONDDEBUGEVENT lsb: 0  msb: 0 INPUT
		NetFlow* DCRPPCDMACK_A0_B; // net ID: DCRPPCDMACK lsb: 0  msb: 0 INPUT
		NetFlow* DCRPPCDMTIMEOUTWAIT_A0_B; // net ID: DCRPPCDMTIMEOUTWAIT lsb: 0  msb: 0 INPUT
		NetFlow* DCRPPCDSREAD_A0_B; // net ID: DCRPPCDSREAD lsb: 0  msb: 0 INPUT
		NetFlow* DCRPPCDSWRITE_A0_B; // net ID: DCRPPCDSWRITE lsb: 0  msb: 0 INPUT
		NetFlow* EICC440CRITIRQ_A0_B; // net ID: EICC440CRITIRQ lsb: 0  msb: 0 INPUT
		NetFlow* EICC440EXTIRQ_A0_B; // net ID: EICC440EXTIRQ lsb: 0  msb: 0 INPUT
		NetFlow* FCMAPUCONFIRMINSTR_A0_B; // net ID: FCMAPUCONFIRMINSTR lsb: 0  msb: 0 INPUT
		NetFlow* FCMAPUDONE_A0_B; // net ID: FCMAPUDONE lsb: 0  msb: 0 INPUT
		NetFlow* FCMAPUEXCEPTION_A0_B; // net ID: FCMAPUEXCEPTION lsb: 0  msb: 0 INPUT
		NetFlow* FCMAPUFPSCRFEX_A0_B; // net ID: FCMAPUFPSCRFEX lsb: 0  msb: 0 INPUT
		NetFlow* FCMAPURESULTVALID_A0_B; // net ID: FCMAPURESULTVALID lsb: 0  msb: 0 INPUT
		NetFlow* FCMAPUSLEEPNOTREADY_A0_B; // net ID: FCMAPUSLEEPNOTREADY lsb: 0  msb: 0 INPUT
		NetFlow* JTGC440TCK_A0_B; // net ID: JTGC440TCK lsb: 0  msb: 0 INPUT
		NetFlow* JTGC440TDI_A0_B; // net ID: JTGC440TDI lsb: 0  msb: 0 INPUT
		NetFlow* JTGC440TMS_A0_B; // net ID: JTGC440TMS lsb: 0  msb: 0 INPUT
		NetFlow* JTGC440TRSTNEG_A0_B; // net ID: JTGC440TRSTNEG lsb: 0  msb: 0 INPUT
		NetFlow* LLDMA0RSTENGINEREQ_A0_B; // net ID: LLDMA0RSTENGINEREQ lsb: 0  msb: 0 INPUT
		NetFlow* LLDMA0RXEOFN_A0_B; // net ID: LLDMA0RXEOFN lsb: 0  msb: 0 INPUT
		NetFlow* LLDMA0RXEOPN_A0_B; // net ID: LLDMA0RXEOPN lsb: 0  msb: 0 INPUT
		NetFlow* LLDMA0RXSOFN_A0_B; // net ID: LLDMA0RXSOFN lsb: 0  msb: 0 INPUT
		NetFlow* LLDMA0RXSOPN_A0_B; // net ID: LLDMA0RXSOPN lsb: 0  msb: 0 INPUT
		NetFlow* LLDMA0RXSRCRDYN_A0_B; // net ID: LLDMA0RXSRCRDYN lsb: 0  msb: 0 INPUT
		NetFlow* LLDMA0TXDSTRDYN_A0_B; // net ID: LLDMA0TXDSTRDYN lsb: 0  msb: 0 INPUT
		NetFlow* LLDMA1RSTENGINEREQ_A0_B; // net ID: LLDMA1RSTENGINEREQ lsb: 0  msb: 0 INPUT
		NetFlow* LLDMA1RXEOFN_A0_B; // net ID: LLDMA1RXEOFN lsb: 0  msb: 0 INPUT
		NetFlow* LLDMA1RXEOPN_A0_B; // net ID: LLDMA1RXEOPN lsb: 0  msb: 0 INPUT
		NetFlow* LLDMA1RXSOFN_A0_B; // net ID: LLDMA1RXSOFN lsb: 0  msb: 0 INPUT
		NetFlow* LLDMA1RXSOPN_A0_B; // net ID: LLDMA1RXSOPN lsb: 0  msb: 0 INPUT
		NetFlow* LLDMA1RXSRCRDYN_A0_B; // net ID: LLDMA1RXSRCRDYN lsb: 0  msb: 0 INPUT
		NetFlow* LLDMA1TXDSTRDYN_A0_B; // net ID: LLDMA1TXDSTRDYN lsb: 0  msb: 0 INPUT
		NetFlow* LLDMA2RSTENGINEREQ_A0_B; // net ID: LLDMA2RSTENGINEREQ lsb: 0  msb: 0 INPUT
		NetFlow* LLDMA2RXEOFN_A0_B; // net ID: LLDMA2RXEOFN lsb: 0  msb: 0 INPUT
		NetFlow* LLDMA2RXEOPN_A0_B; // net ID: LLDMA2RXEOPN lsb: 0  msb: 0 INPUT
		NetFlow* LLDMA2RXSOFN_A0_B; // net ID: LLDMA2RXSOFN lsb: 0  msb: 0 INPUT
		NetFlow* LLDMA2RXSOPN_A0_B; // net ID: LLDMA2RXSOPN lsb: 0  msb: 0 INPUT
		NetFlow* LLDMA2RXSRCRDYN_A0_B; // net ID: LLDMA2RXSRCRDYN lsb: 0  msb: 0 INPUT
		NetFlow* LLDMA2TXDSTRDYN_A0_B; // net ID: LLDMA2TXDSTRDYN lsb: 0  msb: 0 INPUT
		NetFlow* LLDMA3RSTENGINEREQ_A0_B; // net ID: LLDMA3RSTENGINEREQ lsb: 0  msb: 0 INPUT
		NetFlow* LLDMA3RXEOFN_A0_B; // net ID: LLDMA3RXEOFN lsb: 0  msb: 0 INPUT
		NetFlow* LLDMA3RXEOPN_A0_B; // net ID: LLDMA3RXEOPN lsb: 0  msb: 0 INPUT
		NetFlow* LLDMA3RXSOFN_A0_B; // net ID: LLDMA3RXSOFN lsb: 0  msb: 0 INPUT
		NetFlow* LLDMA3RXSOPN_A0_B; // net ID: LLDMA3RXSOPN lsb: 0  msb: 0 INPUT
		NetFlow* LLDMA3RXSRCRDYN_A0_B; // net ID: LLDMA3RXSRCRDYN lsb: 0  msb: 0 INPUT
		NetFlow* LLDMA3TXDSTRDYN_A0_B; // net ID: LLDMA3TXDSTRDYN lsb: 0  msb: 0 INPUT
		NetFlow* MCMIADDRREADYTOACCEPT_A0_B; // net ID: MCMIADDRREADYTOACCEPT lsb: 0  msb: 0 INPUT
		NetFlow* MCMIREADDATAERR_A0_B; // net ID: MCMIREADDATAERR lsb: 0  msb: 0 INPUT
		NetFlow* MCMIREADDATAVALID_A0_B; // net ID: MCMIREADDATAVALID lsb: 0  msb: 0 INPUT
		NetFlow* PLBPPCMADDRACK_A0_B; // net ID: PLBPPCMADDRACK lsb: 0  msb: 0 INPUT
		NetFlow* PLBPPCMMBUSY_A0_B; // net ID: PLBPPCMMBUSY lsb: 0  msb: 0 INPUT
		NetFlow* PLBPPCMMIRQ_A0_B; // net ID: PLBPPCMMIRQ lsb: 0  msb: 0 INPUT
		NetFlow* PLBPPCMMRDERR_A0_B; // net ID: PLBPPCMMRDERR lsb: 0  msb: 0 INPUT
		NetFlow* PLBPPCMMWRERR_A0_B; // net ID: PLBPPCMMWRERR lsb: 0  msb: 0 INPUT
		NetFlow* PLBPPCMRDBTERM_A0_B; // net ID: PLBPPCMRDBTERM lsb: 0  msb: 0 INPUT
		NetFlow* PLBPPCMRDDACK_A0_B; // net ID: PLBPPCMRDDACK lsb: 0  msb: 0 INPUT
		NetFlow* PLBPPCMRDPENDREQ_A0_B; // net ID: PLBPPCMRDPENDREQ lsb: 0  msb: 0 INPUT
		NetFlow* PLBPPCMREARBITRATE_A0_B; // net ID: PLBPPCMREARBITRATE lsb: 0  msb: 0 INPUT
		NetFlow* PLBPPCMTIMEOUT_A0_B; // net ID: PLBPPCMTIMEOUT lsb: 0  msb: 0 INPUT
		NetFlow* PLBPPCMWRBTERM_A0_B; // net ID: PLBPPCMWRBTERM lsb: 0  msb: 0 INPUT
		NetFlow* PLBPPCMWRDACK_A0_B; // net ID: PLBPPCMWRDACK lsb: 0  msb: 0 INPUT
		NetFlow* PLBPPCMWRPENDREQ_A0_B; // net ID: PLBPPCMWRPENDREQ lsb: 0  msb: 0 INPUT
		NetFlow* PLBPPCS0ABORT_A0_B; // net ID: PLBPPCS0ABORT lsb: 0  msb: 0 INPUT
		NetFlow* PLBPPCS0BUSLOCK_A0_B; // net ID: PLBPPCS0BUSLOCK lsb: 0  msb: 0 INPUT
		NetFlow* PLBPPCS0LOCKERR_A0_B; // net ID: PLBPPCS0LOCKERR lsb: 0  msb: 0 INPUT
		NetFlow* PLBPPCS0PAVALID_A0_B; // net ID: PLBPPCS0PAVALID lsb: 0  msb: 0 INPUT
		NetFlow* PLBPPCS0RDBURST_A0_B; // net ID: PLBPPCS0RDBURST lsb: 0  msb: 0 INPUT
		NetFlow* PLBPPCS0RDPENDREQ_A0_B; // net ID: PLBPPCS0RDPENDREQ lsb: 0  msb: 0 INPUT
		NetFlow* PLBPPCS0RDPRIM_A0_B; // net ID: PLBPPCS0RDPRIM lsb: 0  msb: 0 INPUT
		NetFlow* PLBPPCS0RNW_A0_B; // net ID: PLBPPCS0RNW lsb: 0  msb: 0 INPUT
		NetFlow* PLBPPCS0SAVALID_A0_B; // net ID: PLBPPCS0SAVALID lsb: 0  msb: 0 INPUT
		NetFlow* PLBPPCS0WRBURST_A0_B; // net ID: PLBPPCS0WRBURST lsb: 0  msb: 0 INPUT
		NetFlow* PLBPPCS0WRPENDREQ_A0_B; // net ID: PLBPPCS0WRPENDREQ lsb: 0  msb: 0 INPUT
		NetFlow* PLBPPCS0WRPRIM_A0_B; // net ID: PLBPPCS0WRPRIM lsb: 0  msb: 0 INPUT
		NetFlow* PLBPPCS1ABORT_A0_B; // net ID: PLBPPCS1ABORT lsb: 0  msb: 0 INPUT
		NetFlow* PLBPPCS1BUSLOCK_A0_B; // net ID: PLBPPCS1BUSLOCK lsb: 0  msb: 0 INPUT
		NetFlow* PLBPPCS1LOCKERR_A0_B; // net ID: PLBPPCS1LOCKERR lsb: 0  msb: 0 INPUT
		NetFlow* PLBPPCS1PAVALID_A0_B; // net ID: PLBPPCS1PAVALID lsb: 0  msb: 0 INPUT
		NetFlow* PLBPPCS1RDBURST_A0_B; // net ID: PLBPPCS1RDBURST lsb: 0  msb: 0 INPUT
		NetFlow* PLBPPCS1RDPENDREQ_A0_B; // net ID: PLBPPCS1RDPENDREQ lsb: 0  msb: 0 INPUT
		NetFlow* PLBPPCS1RDPRIM_A0_B; // net ID: PLBPPCS1RDPRIM lsb: 0  msb: 0 INPUT
		NetFlow* PLBPPCS1RNW_A0_B; // net ID: PLBPPCS1RNW lsb: 0  msb: 0 INPUT
		NetFlow* PLBPPCS1SAVALID_A0_B; // net ID: PLBPPCS1SAVALID lsb: 0  msb: 0 INPUT
		NetFlow* PLBPPCS1WRBURST_A0_B; // net ID: PLBPPCS1WRBURST lsb: 0  msb: 0 INPUT
		NetFlow* PLBPPCS1WRPENDREQ_A0_B; // net ID: PLBPPCS1WRPENDREQ lsb: 0  msb: 0 INPUT
		NetFlow* PLBPPCS1WRPRIM_A0_B; // net ID: PLBPPCS1WRPRIM lsb: 0  msb: 0 INPUT
		NetFlow* RSTC440RESETCHIP_A0_B; // net ID: RSTC440RESETCHIP lsb: 0  msb: 0 INPUT
		NetFlow* RSTC440RESETCORE_A0_B; // net ID: RSTC440RESETCORE lsb: 0  msb: 0 INPUT
		NetFlow* RSTC440RESETSYSTEM_A0_B; // net ID: RSTC440RESETSYSTEM lsb: 0  msb: 0 INPUT
		NetFlow* TIEC440ENDIANRESET_A0_B; // net ID: TIEC440ENDIANRESET lsb: 0  msb: 0 INPUT
		NetFlow* TRCC440TRACEDISABLE_A0_B; // net ID: TRCC440TRACEDISABLE lsb: 0  msb: 0 INPUT
		NetFlow* TRCC440TRIGGEREVENTIN_A0_B; // net ID: TRCC440TRIGGEREVENTIN lsb: 0  msb: 0 INPUT
		
		public: X_PPC440(
			const char * name,
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_enum_t CLOCK_DELAY, // Default: "FALSE"
			parameter_enum_t DCR_AUTOLOCK_ENABLE, // Default: "TRUE"
			parameter_enum_t PPCDM_ASYNCMODE, // Default: "FALSE"
			parameter_enum_t PPCDS_ASYNCMODE, // Default: "FALSE"
			parameter_enum_t PPCS0_WIDTH_128N64, // Default: "TRUE"
			parameter_enum_t PPCS1_WIDTH_128N64, // Default: "TRUE"
			parameter_int_t APU_CONTROL, // Default: 17'h02000
			parameter_int_t APU_UDI0, // Default: 24'h000000
			parameter_int_t APU_UDI1, // Default: 24'h000000
			parameter_int_t APU_UDI10, // Default: 24'h000000
			parameter_int_t APU_UDI11, // Default: 24'h000000
			parameter_int_t APU_UDI12, // Default: 24'h000000
			parameter_int_t APU_UDI13, // Default: 24'h000000
			parameter_int_t APU_UDI14, // Default: 24'h000000
			parameter_int_t APU_UDI15, // Default: 24'h000000
			parameter_int_t APU_UDI2, // Default: 24'h000000
			parameter_int_t APU_UDI3, // Default: 24'h000000
			parameter_int_t APU_UDI4, // Default: 24'h000000
			parameter_int_t APU_UDI5, // Default: 24'h000000
			parameter_int_t APU_UDI6, // Default: 24'h000000
			parameter_int_t APU_UDI7, // Default: 24'h000000
			parameter_int_t APU_UDI8, // Default: 24'h000000
			parameter_int_t APU_UDI9, // Default: 24'h000000
			parameter_int_t DMA0_RXCHANNELCTRL, // Default: 32'h01010000
			parameter_int_t DMA0_TXCHANNELCTRL, // Default: 32'h01010000
			parameter_int_t DMA1_RXCHANNELCTRL, // Default: 32'h01010000
			parameter_int_t DMA1_TXCHANNELCTRL, // Default: 32'h01010000
			parameter_int_t DMA2_RXCHANNELCTRL, // Default: 32'h01010000
			parameter_int_t DMA2_TXCHANNELCTRL, // Default: 32'h01010000
			parameter_int_t DMA3_RXCHANNELCTRL, // Default: 32'h01010000
			parameter_int_t DMA3_TXCHANNELCTRL, // Default: 32'h01010000
			parameter_int_t INTERCONNECT_IMASK, // Default: 32'hFFFFFFFF
			parameter_int_t INTERCONNECT_TMPL_SEL, // Default: 32'h3FFFFFFF
			parameter_int_t MI_ARBCONFIG, // Default: 32'h00432010
			parameter_int_t MI_BANKCONFLICT_MASK, // Default: 32'h00000000
			parameter_int_t MI_CONTROL, // Default: 32'h0000008F
			parameter_int_t MI_ROWCONFLICT_MASK, // Default: 32'h00000000
			parameter_int_t PPCM_ARBCONFIG, // Default: 32'h00432010
			parameter_int_t PPCM_CONTROL, // Default: 32'h8000009F
			parameter_int_t PPCM_COUNTER, // Default: 32'h00000500
			parameter_int_t PPCS0_ADDRMAP_TMPL0, // Default: 32'hFFFFFFFF
			parameter_int_t PPCS0_ADDRMAP_TMPL1, // Default: 32'hFFFFFFFF
			parameter_int_t PPCS0_ADDRMAP_TMPL2, // Default: 32'hFFFFFFFF
			parameter_int_t PPCS0_ADDRMAP_TMPL3, // Default: 32'hFFFFFFFF
			parameter_int_t PPCS0_CONTROL, // Default: 32'h8033336C
			parameter_int_t PPCS1_ADDRMAP_TMPL0, // Default: 32'hFFFFFFFF
			parameter_int_t PPCS1_ADDRMAP_TMPL1, // Default: 32'hFFFFFFFF
			parameter_int_t PPCS1_ADDRMAP_TMPL2, // Default: 32'hFFFFFFFF
			parameter_int_t PPCS1_ADDRMAP_TMPL3, // Default: 32'hFFFFFFFF
			parameter_int_t PPCS1_CONTROL, // Default: 32'h8033336C
			parameter_int_t XBAR_ADDRMAP_TMPL0, // Default: 32'hFFFF0000
			parameter_int_t XBAR_ADDRMAP_TMPL1, // Default: 32'h00000000
			parameter_int_t XBAR_ADDRMAP_TMPL2, // Default: 32'h00000000
			parameter_int_t XBAR_ADDRMAP_TMPL3, // Default: 32'h00000000
			parameter_int_t DMA0_CONTROL, // Default: 8'h00
			parameter_int_t DMA1_CONTROL, // Default: 8'h00
			parameter_int_t DMA2_CONTROL, // Default: 8'h00
			parameter_int_t DMA3_CONTROL, // Default: 8'h00
			parameter_int_t DMA0_RXIRQTIMER, // Default: 10'h3FF
			parameter_int_t DMA0_TXIRQTIMER, // Default: 10'h3FF
			parameter_int_t DMA1_RXIRQTIMER, // Default: 10'h3FF
			parameter_int_t DMA1_TXIRQTIMER, // Default: 10'h3FF
			parameter_int_t DMA2_RXIRQTIMER, // Default: 10'h3FF
			parameter_int_t DMA2_TXIRQTIMER, // Default: 10'h3FF
			parameter_int_t DMA3_RXIRQTIMER, // Default: 10'h3FF
			parameter_int_t DMA3_TXIRQTIMER, // Default: 10'h3FF
			//Verilog Ports in definition order:
			NetFlow* APUFCMDECFPUOP_A0_B, // net ID: APUFCMDECFPUOP lsb: 0  msb: 0 OUTPUT
			NetFlow* APUFCMDECLOAD_A0_B, // net ID: APUFCMDECLOAD lsb: 0  msb: 0 OUTPUT
			NetFlow* APUFCMDECNONAUTON_A0_B, // net ID: APUFCMDECNONAUTON lsb: 0  msb: 0 OUTPUT
			NetFlow* APUFCMDECSTORE_A0_B, // net ID: APUFCMDECSTORE lsb: 0  msb: 0 OUTPUT
			NetFlow* APUFCMDECUDIVALID_A0_B, // net ID: APUFCMDECUDIVALID lsb: 0  msb: 0 OUTPUT
			NetFlow* APUFCMENDIAN_A0_B, // net ID: APUFCMENDIAN lsb: 0  msb: 0 OUTPUT
			NetFlow* APUFCMFLUSH_A0_B, // net ID: APUFCMFLUSH lsb: 0  msb: 0 OUTPUT
			NetFlow* APUFCMINSTRVALID_A0_B, // net ID: APUFCMINSTRVALID lsb: 0  msb: 0 OUTPUT
			NetFlow* APUFCMLOADDVALID_A0_B, // net ID: APUFCMLOADDVALID lsb: 0  msb: 0 OUTPUT
			NetFlow* APUFCMMSRFE0_A0_B, // net ID: APUFCMMSRFE0 lsb: 0  msb: 0 OUTPUT
			NetFlow* APUFCMMSRFE1_A0_B, // net ID: APUFCMMSRFE1 lsb: 0  msb: 0 OUTPUT
			NetFlow* APUFCMNEXTINSTRREADY_A0_B, // net ID: APUFCMNEXTINSTRREADY lsb: 0  msb: 0 OUTPUT
			NetFlow* APUFCMOPERANDVALID_A0_B, // net ID: APUFCMOPERANDVALID lsb: 0  msb: 0 OUTPUT
			NetFlow* APUFCMWRITEBACKOK_A0_B, // net ID: APUFCMWRITEBACKOK lsb: 0  msb: 0 OUTPUT
			NetFlow* C440CPMCORESLEEPREQ_A0_B, // net ID: C440CPMCORESLEEPREQ lsb: 0  msb: 0 OUTPUT
			NetFlow* C440CPMDECIRPTREQ_A0_B, // net ID: C440CPMDECIRPTREQ lsb: 0  msb: 0 OUTPUT
			NetFlow* C440CPMFITIRPTREQ_A0_B, // net ID: C440CPMFITIRPTREQ lsb: 0  msb: 0 OUTPUT
			NetFlow* C440CPMMSRCE_A0_B, // net ID: C440CPMMSRCE lsb: 0  msb: 0 OUTPUT
			NetFlow* C440CPMMSREE_A0_B, // net ID: C440CPMMSREE lsb: 0  msb: 0 OUTPUT
			NetFlow* C440CPMTIMERRESETREQ_A0_B, // net ID: C440CPMTIMERRESETREQ lsb: 0  msb: 0 OUTPUT
			NetFlow* C440CPMWDIRPTREQ_A0_B, // net ID: C440CPMWDIRPTREQ lsb: 0  msb: 0 OUTPUT
			NetFlow* C440JTGTDO_A0_B, // net ID: C440JTGTDO lsb: 0  msb: 0 OUTPUT
			NetFlow* C440JTGTDOEN_A0_B, // net ID: C440JTGTDOEN lsb: 0  msb: 0 OUTPUT
			NetFlow* C440MACHINECHECK_A0_B, // net ID: C440MACHINECHECK lsb: 0  msb: 0 OUTPUT
			NetFlow* C440RSTCHIPRESETREQ_A0_B, // net ID: C440RSTCHIPRESETREQ lsb: 0  msb: 0 OUTPUT
			NetFlow* C440RSTCORERESETREQ_A0_B, // net ID: C440RSTCORERESETREQ lsb: 0  msb: 0 OUTPUT
			NetFlow* C440RSTSYSTEMRESETREQ_A0_B, // net ID: C440RSTSYSTEMRESETREQ lsb: 0  msb: 0 OUTPUT
			NetFlow* C440TRCCYCLE_A0_B, // net ID: C440TRCCYCLE lsb: 0  msb: 0 OUTPUT
			NetFlow* C440TRCTRIGGEREVENTOUT_A0_B, // net ID: C440TRCTRIGGEREVENTOUT lsb: 0  msb: 0 OUTPUT
			NetFlow* DMA0LLRSTENGINEACK_A0_B, // net ID: DMA0LLRSTENGINEACK lsb: 0  msb: 0 OUTPUT
			NetFlow* DMA0LLRXDSTRDYN_A0_B, // net ID: DMA0LLRXDSTRDYN lsb: 0  msb: 0 OUTPUT
			NetFlow* DMA0LLTXEOFN_A0_B, // net ID: DMA0LLTXEOFN lsb: 0  msb: 0 OUTPUT
			NetFlow* DMA0LLTXEOPN_A0_B, // net ID: DMA0LLTXEOPN lsb: 0  msb: 0 OUTPUT
			NetFlow* DMA0LLTXSOFN_A0_B, // net ID: DMA0LLTXSOFN lsb: 0  msb: 0 OUTPUT
			NetFlow* DMA0LLTXSOPN_A0_B, // net ID: DMA0LLTXSOPN lsb: 0  msb: 0 OUTPUT
			NetFlow* DMA0LLTXSRCRDYN_A0_B, // net ID: DMA0LLTXSRCRDYN lsb: 0  msb: 0 OUTPUT
			NetFlow* DMA0RXIRQ_A0_B, // net ID: DMA0RXIRQ lsb: 0  msb: 0 OUTPUT
			NetFlow* DMA0TXIRQ_A0_B, // net ID: DMA0TXIRQ lsb: 0  msb: 0 OUTPUT
			NetFlow* DMA1LLRSTENGINEACK_A0_B, // net ID: DMA1LLRSTENGINEACK lsb: 0  msb: 0 OUTPUT
			NetFlow* DMA1LLRXDSTRDYN_A0_B, // net ID: DMA1LLRXDSTRDYN lsb: 0  msb: 0 OUTPUT
			NetFlow* DMA1LLTXEOFN_A0_B, // net ID: DMA1LLTXEOFN lsb: 0  msb: 0 OUTPUT
			NetFlow* DMA1LLTXEOPN_A0_B, // net ID: DMA1LLTXEOPN lsb: 0  msb: 0 OUTPUT
			NetFlow* DMA1LLTXSOFN_A0_B, // net ID: DMA1LLTXSOFN lsb: 0  msb: 0 OUTPUT
			NetFlow* DMA1LLTXSOPN_A0_B, // net ID: DMA1LLTXSOPN lsb: 0  msb: 0 OUTPUT
			NetFlow* DMA1LLTXSRCRDYN_A0_B, // net ID: DMA1LLTXSRCRDYN lsb: 0  msb: 0 OUTPUT
			NetFlow* DMA1RXIRQ_A0_B, // net ID: DMA1RXIRQ lsb: 0  msb: 0 OUTPUT
			NetFlow* DMA1TXIRQ_A0_B, // net ID: DMA1TXIRQ lsb: 0  msb: 0 OUTPUT
			NetFlow* DMA2LLRSTENGINEACK_A0_B, // net ID: DMA2LLRSTENGINEACK lsb: 0  msb: 0 OUTPUT
			NetFlow* DMA2LLRXDSTRDYN_A0_B, // net ID: DMA2LLRXDSTRDYN lsb: 0  msb: 0 OUTPUT
			NetFlow* DMA2LLTXEOFN_A0_B, // net ID: DMA2LLTXEOFN lsb: 0  msb: 0 OUTPUT
			NetFlow* DMA2LLTXEOPN_A0_B, // net ID: DMA2LLTXEOPN lsb: 0  msb: 0 OUTPUT
			NetFlow* DMA2LLTXSOFN_A0_B, // net ID: DMA2LLTXSOFN lsb: 0  msb: 0 OUTPUT
			NetFlow* DMA2LLTXSOPN_A0_B, // net ID: DMA2LLTXSOPN lsb: 0  msb: 0 OUTPUT
			NetFlow* DMA2LLTXSRCRDYN_A0_B, // net ID: DMA2LLTXSRCRDYN lsb: 0  msb: 0 OUTPUT
			NetFlow* DMA2RXIRQ_A0_B, // net ID: DMA2RXIRQ lsb: 0  msb: 0 OUTPUT
			NetFlow* DMA2TXIRQ_A0_B, // net ID: DMA2TXIRQ lsb: 0  msb: 0 OUTPUT
			NetFlow* DMA3LLRSTENGINEACK_A0_B, // net ID: DMA3LLRSTENGINEACK lsb: 0  msb: 0 OUTPUT
			NetFlow* DMA3LLRXDSTRDYN_A0_B, // net ID: DMA3LLRXDSTRDYN lsb: 0  msb: 0 OUTPUT
			NetFlow* DMA3LLTXEOFN_A0_B, // net ID: DMA3LLTXEOFN lsb: 0  msb: 0 OUTPUT
			NetFlow* DMA3LLTXEOPN_A0_B, // net ID: DMA3LLTXEOPN lsb: 0  msb: 0 OUTPUT
			NetFlow* DMA3LLTXSOFN_A0_B, // net ID: DMA3LLTXSOFN lsb: 0  msb: 0 OUTPUT
			NetFlow* DMA3LLTXSOPN_A0_B, // net ID: DMA3LLTXSOPN lsb: 0  msb: 0 OUTPUT
			NetFlow* DMA3LLTXSRCRDYN_A0_B, // net ID: DMA3LLTXSRCRDYN lsb: 0  msb: 0 OUTPUT
			NetFlow* DMA3RXIRQ_A0_B, // net ID: DMA3RXIRQ lsb: 0  msb: 0 OUTPUT
			NetFlow* DMA3TXIRQ_A0_B, // net ID: DMA3TXIRQ lsb: 0  msb: 0 OUTPUT
			NetFlow* MIMCADDRESSVALID_A0_B, // net ID: MIMCADDRESSVALID lsb: 0  msb: 0 OUTPUT
			NetFlow* MIMCBANKCONFLICT_A0_B, // net ID: MIMCBANKCONFLICT lsb: 0  msb: 0 OUTPUT
			NetFlow* MIMCREADNOTWRITE_A0_B, // net ID: MIMCREADNOTWRITE lsb: 0  msb: 0 OUTPUT
			NetFlow* MIMCROWCONFLICT_A0_B, // net ID: MIMCROWCONFLICT lsb: 0  msb: 0 OUTPUT
			NetFlow* MIMCWRITEDATAVALID_A0_B, // net ID: MIMCWRITEDATAVALID lsb: 0  msb: 0 OUTPUT
			NetFlow* PPCCPMINTERCONNECTBUSY_A0_B, // net ID: PPCCPMINTERCONNECTBUSY lsb: 0  msb: 0 OUTPUT
			NetFlow* PPCDMDCRREAD_A0_B, // net ID: PPCDMDCRREAD lsb: 0  msb: 0 OUTPUT
			NetFlow* PPCDMDCRWRITE_A0_B, // net ID: PPCDMDCRWRITE lsb: 0  msb: 0 OUTPUT
			NetFlow* PPCDSDCRACK_A0_B, // net ID: PPCDSDCRACK lsb: 0  msb: 0 OUTPUT
			NetFlow* PPCDSDCRTIMEOUTWAIT_A0_B, // net ID: PPCDSDCRTIMEOUTWAIT lsb: 0  msb: 0 OUTPUT
			NetFlow* PPCEICINTERCONNECTIRQ_A0_B, // net ID: PPCEICINTERCONNECTIRQ lsb: 0  msb: 0 OUTPUT
			NetFlow* PPCMPLBABORT_A0_B, // net ID: PPCMPLBABORT lsb: 0  msb: 0 OUTPUT
			NetFlow* PPCMPLBBUSLOCK_A0_B, // net ID: PPCMPLBBUSLOCK lsb: 0  msb: 0 OUTPUT
			NetFlow* PPCMPLBLOCKERR_A0_B, // net ID: PPCMPLBLOCKERR lsb: 0  msb: 0 OUTPUT
			NetFlow* PPCMPLBRDBURST_A0_B, // net ID: PPCMPLBRDBURST lsb: 0  msb: 0 OUTPUT
			NetFlow* PPCMPLBREQUEST_A0_B, // net ID: PPCMPLBREQUEST lsb: 0  msb: 0 OUTPUT
			NetFlow* PPCMPLBRNW_A0_B, // net ID: PPCMPLBRNW lsb: 0  msb: 0 OUTPUT
			NetFlow* PPCMPLBWRBURST_A0_B, // net ID: PPCMPLBWRBURST lsb: 0  msb: 0 OUTPUT
			NetFlow* PPCS0PLBADDRACK_A0_B, // net ID: PPCS0PLBADDRACK lsb: 0  msb: 0 OUTPUT
			NetFlow* PPCS0PLBRDBTERM_A0_B, // net ID: PPCS0PLBRDBTERM lsb: 0  msb: 0 OUTPUT
			NetFlow* PPCS0PLBRDCOMP_A0_B, // net ID: PPCS0PLBRDCOMP lsb: 0  msb: 0 OUTPUT
			NetFlow* PPCS0PLBRDDACK_A0_B, // net ID: PPCS0PLBRDDACK lsb: 0  msb: 0 OUTPUT
			NetFlow* PPCS0PLBREARBITRATE_A0_B, // net ID: PPCS0PLBREARBITRATE lsb: 0  msb: 0 OUTPUT
			NetFlow* PPCS0PLBWAIT_A0_B, // net ID: PPCS0PLBWAIT lsb: 0  msb: 0 OUTPUT
			NetFlow* PPCS0PLBWRBTERM_A0_B, // net ID: PPCS0PLBWRBTERM lsb: 0  msb: 0 OUTPUT
			NetFlow* PPCS0PLBWRCOMP_A0_B, // net ID: PPCS0PLBWRCOMP lsb: 0  msb: 0 OUTPUT
			NetFlow* PPCS0PLBWRDACK_A0_B, // net ID: PPCS0PLBWRDACK lsb: 0  msb: 0 OUTPUT
			NetFlow* PPCS1PLBADDRACK_A0_B, // net ID: PPCS1PLBADDRACK lsb: 0  msb: 0 OUTPUT
			NetFlow* PPCS1PLBRDBTERM_A0_B, // net ID: PPCS1PLBRDBTERM lsb: 0  msb: 0 OUTPUT
			NetFlow* PPCS1PLBRDCOMP_A0_B, // net ID: PPCS1PLBRDCOMP lsb: 0  msb: 0 OUTPUT
			NetFlow* PPCS1PLBRDDACK_A0_B, // net ID: PPCS1PLBRDDACK lsb: 0  msb: 0 OUTPUT
			NetFlow* PPCS1PLBREARBITRATE_A0_B, // net ID: PPCS1PLBREARBITRATE lsb: 0  msb: 0 OUTPUT
			NetFlow* PPCS1PLBWAIT_A0_B, // net ID: PPCS1PLBWAIT lsb: 0  msb: 0 OUTPUT
			NetFlow* PPCS1PLBWRBTERM_A0_B, // net ID: PPCS1PLBWRBTERM lsb: 0  msb: 0 OUTPUT
			NetFlow* PPCS1PLBWRCOMP_A0_B, // net ID: PPCS1PLBWRCOMP lsb: 0  msb: 0 OUTPUT
			NetFlow* PPCS1PLBWRDACK_A0_B, // net ID: PPCS1PLBWRDACK lsb: 0  msb: 0 OUTPUT
			NetFlow* CPMC440CLK_A0_B, // net ID: CPMC440CLK lsb: 0  msb: 0 INPUT
			NetFlow* CPMC440CLKEN_A0_B, // net ID: CPMC440CLKEN lsb: 0  msb: 0 INPUT
			NetFlow* CPMC440CORECLOCKINACTIVE_A0_B, // net ID: CPMC440CORECLOCKINACTIVE lsb: 0  msb: 0 INPUT
			NetFlow* CPMC440TIMERCLOCK_A0_B, // net ID: CPMC440TIMERCLOCK lsb: 0  msb: 0 INPUT
			NetFlow* CPMDCRCLK_A0_B, // net ID: CPMDCRCLK lsb: 0  msb: 0 INPUT
			NetFlow* CPMDMA0LLCLK_A0_B, // net ID: CPMDMA0LLCLK lsb: 0  msb: 0 INPUT
			NetFlow* CPMDMA1LLCLK_A0_B, // net ID: CPMDMA1LLCLK lsb: 0  msb: 0 INPUT
			NetFlow* CPMDMA2LLCLK_A0_B, // net ID: CPMDMA2LLCLK lsb: 0  msb: 0 INPUT
			NetFlow* CPMDMA3LLCLK_A0_B, // net ID: CPMDMA3LLCLK lsb: 0  msb: 0 INPUT
			NetFlow* CPMFCMCLK_A0_B, // net ID: CPMFCMCLK lsb: 0  msb: 0 INPUT
			NetFlow* CPMINTERCONNECTCLK_A0_B, // net ID: CPMINTERCONNECTCLK lsb: 0  msb: 0 INPUT
			NetFlow* CPMINTERCONNECTCLKEN_A0_B, // net ID: CPMINTERCONNECTCLKEN lsb: 0  msb: 0 INPUT
			NetFlow* CPMINTERCONNECTCLKNTO1_A0_B, // net ID: CPMINTERCONNECTCLKNTO1 lsb: 0  msb: 0 INPUT
			NetFlow* CPMMCCLK_A0_B, // net ID: CPMMCCLK lsb: 0  msb: 0 INPUT
			NetFlow* CPMPPCMPLBCLK_A0_B, // net ID: CPMPPCMPLBCLK lsb: 0  msb: 0 INPUT
			NetFlow* CPMPPCS0PLBCLK_A0_B, // net ID: CPMPPCS0PLBCLK lsb: 0  msb: 0 INPUT
			NetFlow* CPMPPCS1PLBCLK_A0_B, // net ID: CPMPPCS1PLBCLK lsb: 0  msb: 0 INPUT
			NetFlow* DBGC440DEBUGHALT_A0_B, // net ID: DBGC440DEBUGHALT lsb: 0  msb: 0 INPUT
			NetFlow* DBGC440UNCONDDEBUGEVENT_A0_B, // net ID: DBGC440UNCONDDEBUGEVENT lsb: 0  msb: 0 INPUT
			NetFlow* DCRPPCDMACK_A0_B, // net ID: DCRPPCDMACK lsb: 0  msb: 0 INPUT
			NetFlow* DCRPPCDMTIMEOUTWAIT_A0_B, // net ID: DCRPPCDMTIMEOUTWAIT lsb: 0  msb: 0 INPUT
			NetFlow* DCRPPCDSREAD_A0_B, // net ID: DCRPPCDSREAD lsb: 0  msb: 0 INPUT
			NetFlow* DCRPPCDSWRITE_A0_B, // net ID: DCRPPCDSWRITE lsb: 0  msb: 0 INPUT
			NetFlow* EICC440CRITIRQ_A0_B, // net ID: EICC440CRITIRQ lsb: 0  msb: 0 INPUT
			NetFlow* EICC440EXTIRQ_A0_B, // net ID: EICC440EXTIRQ lsb: 0  msb: 0 INPUT
			NetFlow* FCMAPUCONFIRMINSTR_A0_B, // net ID: FCMAPUCONFIRMINSTR lsb: 0  msb: 0 INPUT
			NetFlow* FCMAPUDONE_A0_B, // net ID: FCMAPUDONE lsb: 0  msb: 0 INPUT
			NetFlow* FCMAPUEXCEPTION_A0_B, // net ID: FCMAPUEXCEPTION lsb: 0  msb: 0 INPUT
			NetFlow* FCMAPUFPSCRFEX_A0_B, // net ID: FCMAPUFPSCRFEX lsb: 0  msb: 0 INPUT
			NetFlow* FCMAPURESULTVALID_A0_B, // net ID: FCMAPURESULTVALID lsb: 0  msb: 0 INPUT
			NetFlow* FCMAPUSLEEPNOTREADY_A0_B, // net ID: FCMAPUSLEEPNOTREADY lsb: 0  msb: 0 INPUT
			NetFlow* JTGC440TCK_A0_B, // net ID: JTGC440TCK lsb: 0  msb: 0 INPUT
			NetFlow* JTGC440TDI_A0_B, // net ID: JTGC440TDI lsb: 0  msb: 0 INPUT
			NetFlow* JTGC440TMS_A0_B, // net ID: JTGC440TMS lsb: 0  msb: 0 INPUT
			NetFlow* JTGC440TRSTNEG_A0_B, // net ID: JTGC440TRSTNEG lsb: 0  msb: 0 INPUT
			NetFlow* LLDMA0RSTENGINEREQ_A0_B, // net ID: LLDMA0RSTENGINEREQ lsb: 0  msb: 0 INPUT
			NetFlow* LLDMA0RXEOFN_A0_B, // net ID: LLDMA0RXEOFN lsb: 0  msb: 0 INPUT
			NetFlow* LLDMA0RXEOPN_A0_B, // net ID: LLDMA0RXEOPN lsb: 0  msb: 0 INPUT
			NetFlow* LLDMA0RXSOFN_A0_B, // net ID: LLDMA0RXSOFN lsb: 0  msb: 0 INPUT
			NetFlow* LLDMA0RXSOPN_A0_B, // net ID: LLDMA0RXSOPN lsb: 0  msb: 0 INPUT
			NetFlow* LLDMA0RXSRCRDYN_A0_B, // net ID: LLDMA0RXSRCRDYN lsb: 0  msb: 0 INPUT
			NetFlow* LLDMA0TXDSTRDYN_A0_B, // net ID: LLDMA0TXDSTRDYN lsb: 0  msb: 0 INPUT
			NetFlow* LLDMA1RSTENGINEREQ_A0_B, // net ID: LLDMA1RSTENGINEREQ lsb: 0  msb: 0 INPUT
			NetFlow* LLDMA1RXEOFN_A0_B, // net ID: LLDMA1RXEOFN lsb: 0  msb: 0 INPUT
			NetFlow* LLDMA1RXEOPN_A0_B, // net ID: LLDMA1RXEOPN lsb: 0  msb: 0 INPUT
			NetFlow* LLDMA1RXSOFN_A0_B, // net ID: LLDMA1RXSOFN lsb: 0  msb: 0 INPUT
			NetFlow* LLDMA1RXSOPN_A0_B, // net ID: LLDMA1RXSOPN lsb: 0  msb: 0 INPUT
			NetFlow* LLDMA1RXSRCRDYN_A0_B, // net ID: LLDMA1RXSRCRDYN lsb: 0  msb: 0 INPUT
			NetFlow* LLDMA1TXDSTRDYN_A0_B, // net ID: LLDMA1TXDSTRDYN lsb: 0  msb: 0 INPUT
			NetFlow* LLDMA2RSTENGINEREQ_A0_B, // net ID: LLDMA2RSTENGINEREQ lsb: 0  msb: 0 INPUT
			NetFlow* LLDMA2RXEOFN_A0_B, // net ID: LLDMA2RXEOFN lsb: 0  msb: 0 INPUT
			NetFlow* LLDMA2RXEOPN_A0_B, // net ID: LLDMA2RXEOPN lsb: 0  msb: 0 INPUT
			NetFlow* LLDMA2RXSOFN_A0_B, // net ID: LLDMA2RXSOFN lsb: 0  msb: 0 INPUT
			NetFlow* LLDMA2RXSOPN_A0_B, // net ID: LLDMA2RXSOPN lsb: 0  msb: 0 INPUT
			NetFlow* LLDMA2RXSRCRDYN_A0_B, // net ID: LLDMA2RXSRCRDYN lsb: 0  msb: 0 INPUT
			NetFlow* LLDMA2TXDSTRDYN_A0_B, // net ID: LLDMA2TXDSTRDYN lsb: 0  msb: 0 INPUT
			NetFlow* LLDMA3RSTENGINEREQ_A0_B, // net ID: LLDMA3RSTENGINEREQ lsb: 0  msb: 0 INPUT
			NetFlow* LLDMA3RXEOFN_A0_B, // net ID: LLDMA3RXEOFN lsb: 0  msb: 0 INPUT
			NetFlow* LLDMA3RXEOPN_A0_B, // net ID: LLDMA3RXEOPN lsb: 0  msb: 0 INPUT
			NetFlow* LLDMA3RXSOFN_A0_B, // net ID: LLDMA3RXSOFN lsb: 0  msb: 0 INPUT
			NetFlow* LLDMA3RXSOPN_A0_B, // net ID: LLDMA3RXSOPN lsb: 0  msb: 0 INPUT
			NetFlow* LLDMA3RXSRCRDYN_A0_B, // net ID: LLDMA3RXSRCRDYN lsb: 0  msb: 0 INPUT
			NetFlow* LLDMA3TXDSTRDYN_A0_B, // net ID: LLDMA3TXDSTRDYN lsb: 0  msb: 0 INPUT
			NetFlow* MCMIADDRREADYTOACCEPT_A0_B, // net ID: MCMIADDRREADYTOACCEPT lsb: 0  msb: 0 INPUT
			NetFlow* MCMIREADDATAERR_A0_B, // net ID: MCMIREADDATAERR lsb: 0  msb: 0 INPUT
			NetFlow* MCMIREADDATAVALID_A0_B, // net ID: MCMIREADDATAVALID lsb: 0  msb: 0 INPUT
			NetFlow* PLBPPCMADDRACK_A0_B, // net ID: PLBPPCMADDRACK lsb: 0  msb: 0 INPUT
			NetFlow* PLBPPCMMBUSY_A0_B, // net ID: PLBPPCMMBUSY lsb: 0  msb: 0 INPUT
			NetFlow* PLBPPCMMIRQ_A0_B, // net ID: PLBPPCMMIRQ lsb: 0  msb: 0 INPUT
			NetFlow* PLBPPCMMRDERR_A0_B, // net ID: PLBPPCMMRDERR lsb: 0  msb: 0 INPUT
			NetFlow* PLBPPCMMWRERR_A0_B, // net ID: PLBPPCMMWRERR lsb: 0  msb: 0 INPUT
			NetFlow* PLBPPCMRDBTERM_A0_B, // net ID: PLBPPCMRDBTERM lsb: 0  msb: 0 INPUT
			NetFlow* PLBPPCMRDDACK_A0_B, // net ID: PLBPPCMRDDACK lsb: 0  msb: 0 INPUT
			NetFlow* PLBPPCMRDPENDREQ_A0_B, // net ID: PLBPPCMRDPENDREQ lsb: 0  msb: 0 INPUT
			NetFlow* PLBPPCMREARBITRATE_A0_B, // net ID: PLBPPCMREARBITRATE lsb: 0  msb: 0 INPUT
			NetFlow* PLBPPCMTIMEOUT_A0_B, // net ID: PLBPPCMTIMEOUT lsb: 0  msb: 0 INPUT
			NetFlow* PLBPPCMWRBTERM_A0_B, // net ID: PLBPPCMWRBTERM lsb: 0  msb: 0 INPUT
			NetFlow* PLBPPCMWRDACK_A0_B, // net ID: PLBPPCMWRDACK lsb: 0  msb: 0 INPUT
			NetFlow* PLBPPCMWRPENDREQ_A0_B, // net ID: PLBPPCMWRPENDREQ lsb: 0  msb: 0 INPUT
			NetFlow* PLBPPCS0ABORT_A0_B, // net ID: PLBPPCS0ABORT lsb: 0  msb: 0 INPUT
			NetFlow* PLBPPCS0BUSLOCK_A0_B, // net ID: PLBPPCS0BUSLOCK lsb: 0  msb: 0 INPUT
			NetFlow* PLBPPCS0LOCKERR_A0_B, // net ID: PLBPPCS0LOCKERR lsb: 0  msb: 0 INPUT
			NetFlow* PLBPPCS0PAVALID_A0_B, // net ID: PLBPPCS0PAVALID lsb: 0  msb: 0 INPUT
			NetFlow* PLBPPCS0RDBURST_A0_B, // net ID: PLBPPCS0RDBURST lsb: 0  msb: 0 INPUT
			NetFlow* PLBPPCS0RDPENDREQ_A0_B, // net ID: PLBPPCS0RDPENDREQ lsb: 0  msb: 0 INPUT
			NetFlow* PLBPPCS0RDPRIM_A0_B, // net ID: PLBPPCS0RDPRIM lsb: 0  msb: 0 INPUT
			NetFlow* PLBPPCS0RNW_A0_B, // net ID: PLBPPCS0RNW lsb: 0  msb: 0 INPUT
			NetFlow* PLBPPCS0SAVALID_A0_B, // net ID: PLBPPCS0SAVALID lsb: 0  msb: 0 INPUT
			NetFlow* PLBPPCS0WRBURST_A0_B, // net ID: PLBPPCS0WRBURST lsb: 0  msb: 0 INPUT
			NetFlow* PLBPPCS0WRPENDREQ_A0_B, // net ID: PLBPPCS0WRPENDREQ lsb: 0  msb: 0 INPUT
			NetFlow* PLBPPCS0WRPRIM_A0_B, // net ID: PLBPPCS0WRPRIM lsb: 0  msb: 0 INPUT
			NetFlow* PLBPPCS1ABORT_A0_B, // net ID: PLBPPCS1ABORT lsb: 0  msb: 0 INPUT
			NetFlow* PLBPPCS1BUSLOCK_A0_B, // net ID: PLBPPCS1BUSLOCK lsb: 0  msb: 0 INPUT
			NetFlow* PLBPPCS1LOCKERR_A0_B, // net ID: PLBPPCS1LOCKERR lsb: 0  msb: 0 INPUT
			NetFlow* PLBPPCS1PAVALID_A0_B, // net ID: PLBPPCS1PAVALID lsb: 0  msb: 0 INPUT
			NetFlow* PLBPPCS1RDBURST_A0_B, // net ID: PLBPPCS1RDBURST lsb: 0  msb: 0 INPUT
			NetFlow* PLBPPCS1RDPENDREQ_A0_B, // net ID: PLBPPCS1RDPENDREQ lsb: 0  msb: 0 INPUT
			NetFlow* PLBPPCS1RDPRIM_A0_B, // net ID: PLBPPCS1RDPRIM lsb: 0  msb: 0 INPUT
			NetFlow* PLBPPCS1RNW_A0_B, // net ID: PLBPPCS1RNW lsb: 0  msb: 0 INPUT
			NetFlow* PLBPPCS1SAVALID_A0_B, // net ID: PLBPPCS1SAVALID lsb: 0  msb: 0 INPUT
			NetFlow* PLBPPCS1WRBURST_A0_B, // net ID: PLBPPCS1WRBURST lsb: 0  msb: 0 INPUT
			NetFlow* PLBPPCS1WRPENDREQ_A0_B, // net ID: PLBPPCS1WRPENDREQ lsb: 0  msb: 0 INPUT
			NetFlow* PLBPPCS1WRPRIM_A0_B, // net ID: PLBPPCS1WRPRIM lsb: 0  msb: 0 INPUT
			NetFlow* RSTC440RESETCHIP_A0_B, // net ID: RSTC440RESETCHIP lsb: 0  msb: 0 INPUT
			NetFlow* RSTC440RESETCORE_A0_B, // net ID: RSTC440RESETCORE lsb: 0  msb: 0 INPUT
			NetFlow* RSTC440RESETSYSTEM_A0_B, // net ID: RSTC440RESETSYSTEM lsb: 0  msb: 0 INPUT
			NetFlow* TIEC440ENDIANRESET_A0_B, // net ID: TIEC440ENDIANRESET lsb: 0  msb: 0 INPUT
			NetFlow* TRCC440TRACEDISABLE_A0_B, // net ID: TRCC440TRACEDISABLE lsb: 0  msb: 0 INPUT
			NetFlow* TRCC440TRIGGEREVENTIN_A0_B // net ID: TRCC440TRIGGEREVENTIN lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->LOC = LOC; // Default: "UNPLACED"
			this->CLOCK_DELAY = CLOCK_DELAY; // Default: "FALSE"
			this->DCR_AUTOLOCK_ENABLE = DCR_AUTOLOCK_ENABLE; // Default: "TRUE"
			this->PPCDM_ASYNCMODE = PPCDM_ASYNCMODE; // Default: "FALSE"
			this->PPCDS_ASYNCMODE = PPCDS_ASYNCMODE; // Default: "FALSE"
			this->PPCS0_WIDTH_128N64 = PPCS0_WIDTH_128N64; // Default: "TRUE"
			this->PPCS1_WIDTH_128N64 = PPCS1_WIDTH_128N64; // Default: "TRUE"
			this->APU_CONTROL = APU_CONTROL; // Default: 17'h02000
			this->APU_UDI0 = APU_UDI0; // Default: 24'h000000
			this->APU_UDI1 = APU_UDI1; // Default: 24'h000000
			this->APU_UDI10 = APU_UDI10; // Default: 24'h000000
			this->APU_UDI11 = APU_UDI11; // Default: 24'h000000
			this->APU_UDI12 = APU_UDI12; // Default: 24'h000000
			this->APU_UDI13 = APU_UDI13; // Default: 24'h000000
			this->APU_UDI14 = APU_UDI14; // Default: 24'h000000
			this->APU_UDI15 = APU_UDI15; // Default: 24'h000000
			this->APU_UDI2 = APU_UDI2; // Default: 24'h000000
			this->APU_UDI3 = APU_UDI3; // Default: 24'h000000
			this->APU_UDI4 = APU_UDI4; // Default: 24'h000000
			this->APU_UDI5 = APU_UDI5; // Default: 24'h000000
			this->APU_UDI6 = APU_UDI6; // Default: 24'h000000
			this->APU_UDI7 = APU_UDI7; // Default: 24'h000000
			this->APU_UDI8 = APU_UDI8; // Default: 24'h000000
			this->APU_UDI9 = APU_UDI9; // Default: 24'h000000
			this->DMA0_RXCHANNELCTRL = DMA0_RXCHANNELCTRL; // Default: 32'h01010000
			this->DMA0_TXCHANNELCTRL = DMA0_TXCHANNELCTRL; // Default: 32'h01010000
			this->DMA1_RXCHANNELCTRL = DMA1_RXCHANNELCTRL; // Default: 32'h01010000
			this->DMA1_TXCHANNELCTRL = DMA1_TXCHANNELCTRL; // Default: 32'h01010000
			this->DMA2_RXCHANNELCTRL = DMA2_RXCHANNELCTRL; // Default: 32'h01010000
			this->DMA2_TXCHANNELCTRL = DMA2_TXCHANNELCTRL; // Default: 32'h01010000
			this->DMA3_RXCHANNELCTRL = DMA3_RXCHANNELCTRL; // Default: 32'h01010000
			this->DMA3_TXCHANNELCTRL = DMA3_TXCHANNELCTRL; // Default: 32'h01010000
			this->INTERCONNECT_IMASK = INTERCONNECT_IMASK; // Default: 32'hFFFFFFFF
			this->INTERCONNECT_TMPL_SEL = INTERCONNECT_TMPL_SEL; // Default: 32'h3FFFFFFF
			this->MI_ARBCONFIG = MI_ARBCONFIG; // Default: 32'h00432010
			this->MI_BANKCONFLICT_MASK = MI_BANKCONFLICT_MASK; // Default: 32'h00000000
			this->MI_CONTROL = MI_CONTROL; // Default: 32'h0000008F
			this->MI_ROWCONFLICT_MASK = MI_ROWCONFLICT_MASK; // Default: 32'h00000000
			this->PPCM_ARBCONFIG = PPCM_ARBCONFIG; // Default: 32'h00432010
			this->PPCM_CONTROL = PPCM_CONTROL; // Default: 32'h8000009F
			this->PPCM_COUNTER = PPCM_COUNTER; // Default: 32'h00000500
			this->PPCS0_ADDRMAP_TMPL0 = PPCS0_ADDRMAP_TMPL0; // Default: 32'hFFFFFFFF
			this->PPCS0_ADDRMAP_TMPL1 = PPCS0_ADDRMAP_TMPL1; // Default: 32'hFFFFFFFF
			this->PPCS0_ADDRMAP_TMPL2 = PPCS0_ADDRMAP_TMPL2; // Default: 32'hFFFFFFFF
			this->PPCS0_ADDRMAP_TMPL3 = PPCS0_ADDRMAP_TMPL3; // Default: 32'hFFFFFFFF
			this->PPCS0_CONTROL = PPCS0_CONTROL; // Default: 32'h8033336C
			this->PPCS1_ADDRMAP_TMPL0 = PPCS1_ADDRMAP_TMPL0; // Default: 32'hFFFFFFFF
			this->PPCS1_ADDRMAP_TMPL1 = PPCS1_ADDRMAP_TMPL1; // Default: 32'hFFFFFFFF
			this->PPCS1_ADDRMAP_TMPL2 = PPCS1_ADDRMAP_TMPL2; // Default: 32'hFFFFFFFF
			this->PPCS1_ADDRMAP_TMPL3 = PPCS1_ADDRMAP_TMPL3; // Default: 32'hFFFFFFFF
			this->PPCS1_CONTROL = PPCS1_CONTROL; // Default: 32'h8033336C
			this->XBAR_ADDRMAP_TMPL0 = XBAR_ADDRMAP_TMPL0; // Default: 32'hFFFF0000
			this->XBAR_ADDRMAP_TMPL1 = XBAR_ADDRMAP_TMPL1; // Default: 32'h00000000
			this->XBAR_ADDRMAP_TMPL2 = XBAR_ADDRMAP_TMPL2; // Default: 32'h00000000
			this->XBAR_ADDRMAP_TMPL3 = XBAR_ADDRMAP_TMPL3; // Default: 32'h00000000
			this->DMA0_CONTROL = DMA0_CONTROL; // Default: 8'h00
			this->DMA1_CONTROL = DMA1_CONTROL; // Default: 8'h00
			this->DMA2_CONTROL = DMA2_CONTROL; // Default: 8'h00
			this->DMA3_CONTROL = DMA3_CONTROL; // Default: 8'h00
			this->DMA0_RXIRQTIMER = DMA0_RXIRQTIMER; // Default: 10'h3FF
			this->DMA0_TXIRQTIMER = DMA0_TXIRQTIMER; // Default: 10'h3FF
			this->DMA1_RXIRQTIMER = DMA1_RXIRQTIMER; // Default: 10'h3FF
			this->DMA1_TXIRQTIMER = DMA1_TXIRQTIMER; // Default: 10'h3FF
			this->DMA2_RXIRQTIMER = DMA2_RXIRQTIMER; // Default: 10'h3FF
			this->DMA2_TXIRQTIMER = DMA2_TXIRQTIMER; // Default: 10'h3FF
			this->DMA3_RXIRQTIMER = DMA3_RXIRQTIMER; // Default: 10'h3FF
			this->DMA3_TXIRQTIMER = DMA3_TXIRQTIMER; // Default: 10'h3FF
			//Verilog Ports in definition order:
			this->APUFCMDECFPUOP_A0_B = APUFCMDECFPUOP_A0_B; // net ID: APUFCMDECFPUOP lsb: 0  msb: 0 OUTPUT
			this->APUFCMDECLOAD_A0_B = APUFCMDECLOAD_A0_B; // net ID: APUFCMDECLOAD lsb: 0  msb: 0 OUTPUT
			this->APUFCMDECNONAUTON_A0_B = APUFCMDECNONAUTON_A0_B; // net ID: APUFCMDECNONAUTON lsb: 0  msb: 0 OUTPUT
			this->APUFCMDECSTORE_A0_B = APUFCMDECSTORE_A0_B; // net ID: APUFCMDECSTORE lsb: 0  msb: 0 OUTPUT
			this->APUFCMDECUDIVALID_A0_B = APUFCMDECUDIVALID_A0_B; // net ID: APUFCMDECUDIVALID lsb: 0  msb: 0 OUTPUT
			this->APUFCMENDIAN_A0_B = APUFCMENDIAN_A0_B; // net ID: APUFCMENDIAN lsb: 0  msb: 0 OUTPUT
			this->APUFCMFLUSH_A0_B = APUFCMFLUSH_A0_B; // net ID: APUFCMFLUSH lsb: 0  msb: 0 OUTPUT
			this->APUFCMINSTRVALID_A0_B = APUFCMINSTRVALID_A0_B; // net ID: APUFCMINSTRVALID lsb: 0  msb: 0 OUTPUT
			this->APUFCMLOADDVALID_A0_B = APUFCMLOADDVALID_A0_B; // net ID: APUFCMLOADDVALID lsb: 0  msb: 0 OUTPUT
			this->APUFCMMSRFE0_A0_B = APUFCMMSRFE0_A0_B; // net ID: APUFCMMSRFE0 lsb: 0  msb: 0 OUTPUT
			this->APUFCMMSRFE1_A0_B = APUFCMMSRFE1_A0_B; // net ID: APUFCMMSRFE1 lsb: 0  msb: 0 OUTPUT
			this->APUFCMNEXTINSTRREADY_A0_B = APUFCMNEXTINSTRREADY_A0_B; // net ID: APUFCMNEXTINSTRREADY lsb: 0  msb: 0 OUTPUT
			this->APUFCMOPERANDVALID_A0_B = APUFCMOPERANDVALID_A0_B; // net ID: APUFCMOPERANDVALID lsb: 0  msb: 0 OUTPUT
			this->APUFCMWRITEBACKOK_A0_B = APUFCMWRITEBACKOK_A0_B; // net ID: APUFCMWRITEBACKOK lsb: 0  msb: 0 OUTPUT
			this->C440CPMCORESLEEPREQ_A0_B = C440CPMCORESLEEPREQ_A0_B; // net ID: C440CPMCORESLEEPREQ lsb: 0  msb: 0 OUTPUT
			this->C440CPMDECIRPTREQ_A0_B = C440CPMDECIRPTREQ_A0_B; // net ID: C440CPMDECIRPTREQ lsb: 0  msb: 0 OUTPUT
			this->C440CPMFITIRPTREQ_A0_B = C440CPMFITIRPTREQ_A0_B; // net ID: C440CPMFITIRPTREQ lsb: 0  msb: 0 OUTPUT
			this->C440CPMMSRCE_A0_B = C440CPMMSRCE_A0_B; // net ID: C440CPMMSRCE lsb: 0  msb: 0 OUTPUT
			this->C440CPMMSREE_A0_B = C440CPMMSREE_A0_B; // net ID: C440CPMMSREE lsb: 0  msb: 0 OUTPUT
			this->C440CPMTIMERRESETREQ_A0_B = C440CPMTIMERRESETREQ_A0_B; // net ID: C440CPMTIMERRESETREQ lsb: 0  msb: 0 OUTPUT
			this->C440CPMWDIRPTREQ_A0_B = C440CPMWDIRPTREQ_A0_B; // net ID: C440CPMWDIRPTREQ lsb: 0  msb: 0 OUTPUT
			this->C440JTGTDO_A0_B = C440JTGTDO_A0_B; // net ID: C440JTGTDO lsb: 0  msb: 0 OUTPUT
			this->C440JTGTDOEN_A0_B = C440JTGTDOEN_A0_B; // net ID: C440JTGTDOEN lsb: 0  msb: 0 OUTPUT
			this->C440MACHINECHECK_A0_B = C440MACHINECHECK_A0_B; // net ID: C440MACHINECHECK lsb: 0  msb: 0 OUTPUT
			this->C440RSTCHIPRESETREQ_A0_B = C440RSTCHIPRESETREQ_A0_B; // net ID: C440RSTCHIPRESETREQ lsb: 0  msb: 0 OUTPUT
			this->C440RSTCORERESETREQ_A0_B = C440RSTCORERESETREQ_A0_B; // net ID: C440RSTCORERESETREQ lsb: 0  msb: 0 OUTPUT
			this->C440RSTSYSTEMRESETREQ_A0_B = C440RSTSYSTEMRESETREQ_A0_B; // net ID: C440RSTSYSTEMRESETREQ lsb: 0  msb: 0 OUTPUT
			this->C440TRCCYCLE_A0_B = C440TRCCYCLE_A0_B; // net ID: C440TRCCYCLE lsb: 0  msb: 0 OUTPUT
			this->C440TRCTRIGGEREVENTOUT_A0_B = C440TRCTRIGGEREVENTOUT_A0_B; // net ID: C440TRCTRIGGEREVENTOUT lsb: 0  msb: 0 OUTPUT
			this->DMA0LLRSTENGINEACK_A0_B = DMA0LLRSTENGINEACK_A0_B; // net ID: DMA0LLRSTENGINEACK lsb: 0  msb: 0 OUTPUT
			this->DMA0LLRXDSTRDYN_A0_B = DMA0LLRXDSTRDYN_A0_B; // net ID: DMA0LLRXDSTRDYN lsb: 0  msb: 0 OUTPUT
			this->DMA0LLTXEOFN_A0_B = DMA0LLTXEOFN_A0_B; // net ID: DMA0LLTXEOFN lsb: 0  msb: 0 OUTPUT
			this->DMA0LLTXEOPN_A0_B = DMA0LLTXEOPN_A0_B; // net ID: DMA0LLTXEOPN lsb: 0  msb: 0 OUTPUT
			this->DMA0LLTXSOFN_A0_B = DMA0LLTXSOFN_A0_B; // net ID: DMA0LLTXSOFN lsb: 0  msb: 0 OUTPUT
			this->DMA0LLTXSOPN_A0_B = DMA0LLTXSOPN_A0_B; // net ID: DMA0LLTXSOPN lsb: 0  msb: 0 OUTPUT
			this->DMA0LLTXSRCRDYN_A0_B = DMA0LLTXSRCRDYN_A0_B; // net ID: DMA0LLTXSRCRDYN lsb: 0  msb: 0 OUTPUT
			this->DMA0RXIRQ_A0_B = DMA0RXIRQ_A0_B; // net ID: DMA0RXIRQ lsb: 0  msb: 0 OUTPUT
			this->DMA0TXIRQ_A0_B = DMA0TXIRQ_A0_B; // net ID: DMA0TXIRQ lsb: 0  msb: 0 OUTPUT
			this->DMA1LLRSTENGINEACK_A0_B = DMA1LLRSTENGINEACK_A0_B; // net ID: DMA1LLRSTENGINEACK lsb: 0  msb: 0 OUTPUT
			this->DMA1LLRXDSTRDYN_A0_B = DMA1LLRXDSTRDYN_A0_B; // net ID: DMA1LLRXDSTRDYN lsb: 0  msb: 0 OUTPUT
			this->DMA1LLTXEOFN_A0_B = DMA1LLTXEOFN_A0_B; // net ID: DMA1LLTXEOFN lsb: 0  msb: 0 OUTPUT
			this->DMA1LLTXEOPN_A0_B = DMA1LLTXEOPN_A0_B; // net ID: DMA1LLTXEOPN lsb: 0  msb: 0 OUTPUT
			this->DMA1LLTXSOFN_A0_B = DMA1LLTXSOFN_A0_B; // net ID: DMA1LLTXSOFN lsb: 0  msb: 0 OUTPUT
			this->DMA1LLTXSOPN_A0_B = DMA1LLTXSOPN_A0_B; // net ID: DMA1LLTXSOPN lsb: 0  msb: 0 OUTPUT
			this->DMA1LLTXSRCRDYN_A0_B = DMA1LLTXSRCRDYN_A0_B; // net ID: DMA1LLTXSRCRDYN lsb: 0  msb: 0 OUTPUT
			this->DMA1RXIRQ_A0_B = DMA1RXIRQ_A0_B; // net ID: DMA1RXIRQ lsb: 0  msb: 0 OUTPUT
			this->DMA1TXIRQ_A0_B = DMA1TXIRQ_A0_B; // net ID: DMA1TXIRQ lsb: 0  msb: 0 OUTPUT
			this->DMA2LLRSTENGINEACK_A0_B = DMA2LLRSTENGINEACK_A0_B; // net ID: DMA2LLRSTENGINEACK lsb: 0  msb: 0 OUTPUT
			this->DMA2LLRXDSTRDYN_A0_B = DMA2LLRXDSTRDYN_A0_B; // net ID: DMA2LLRXDSTRDYN lsb: 0  msb: 0 OUTPUT
			this->DMA2LLTXEOFN_A0_B = DMA2LLTXEOFN_A0_B; // net ID: DMA2LLTXEOFN lsb: 0  msb: 0 OUTPUT
			this->DMA2LLTXEOPN_A0_B = DMA2LLTXEOPN_A0_B; // net ID: DMA2LLTXEOPN lsb: 0  msb: 0 OUTPUT
			this->DMA2LLTXSOFN_A0_B = DMA2LLTXSOFN_A0_B; // net ID: DMA2LLTXSOFN lsb: 0  msb: 0 OUTPUT
			this->DMA2LLTXSOPN_A0_B = DMA2LLTXSOPN_A0_B; // net ID: DMA2LLTXSOPN lsb: 0  msb: 0 OUTPUT
			this->DMA2LLTXSRCRDYN_A0_B = DMA2LLTXSRCRDYN_A0_B; // net ID: DMA2LLTXSRCRDYN lsb: 0  msb: 0 OUTPUT
			this->DMA2RXIRQ_A0_B = DMA2RXIRQ_A0_B; // net ID: DMA2RXIRQ lsb: 0  msb: 0 OUTPUT
			this->DMA2TXIRQ_A0_B = DMA2TXIRQ_A0_B; // net ID: DMA2TXIRQ lsb: 0  msb: 0 OUTPUT
			this->DMA3LLRSTENGINEACK_A0_B = DMA3LLRSTENGINEACK_A0_B; // net ID: DMA3LLRSTENGINEACK lsb: 0  msb: 0 OUTPUT
			this->DMA3LLRXDSTRDYN_A0_B = DMA3LLRXDSTRDYN_A0_B; // net ID: DMA3LLRXDSTRDYN lsb: 0  msb: 0 OUTPUT
			this->DMA3LLTXEOFN_A0_B = DMA3LLTXEOFN_A0_B; // net ID: DMA3LLTXEOFN lsb: 0  msb: 0 OUTPUT
			this->DMA3LLTXEOPN_A0_B = DMA3LLTXEOPN_A0_B; // net ID: DMA3LLTXEOPN lsb: 0  msb: 0 OUTPUT
			this->DMA3LLTXSOFN_A0_B = DMA3LLTXSOFN_A0_B; // net ID: DMA3LLTXSOFN lsb: 0  msb: 0 OUTPUT
			this->DMA3LLTXSOPN_A0_B = DMA3LLTXSOPN_A0_B; // net ID: DMA3LLTXSOPN lsb: 0  msb: 0 OUTPUT
			this->DMA3LLTXSRCRDYN_A0_B = DMA3LLTXSRCRDYN_A0_B; // net ID: DMA3LLTXSRCRDYN lsb: 0  msb: 0 OUTPUT
			this->DMA3RXIRQ_A0_B = DMA3RXIRQ_A0_B; // net ID: DMA3RXIRQ lsb: 0  msb: 0 OUTPUT
			this->DMA3TXIRQ_A0_B = DMA3TXIRQ_A0_B; // net ID: DMA3TXIRQ lsb: 0  msb: 0 OUTPUT
			this->MIMCADDRESSVALID_A0_B = MIMCADDRESSVALID_A0_B; // net ID: MIMCADDRESSVALID lsb: 0  msb: 0 OUTPUT
			this->MIMCBANKCONFLICT_A0_B = MIMCBANKCONFLICT_A0_B; // net ID: MIMCBANKCONFLICT lsb: 0  msb: 0 OUTPUT
			this->MIMCREADNOTWRITE_A0_B = MIMCREADNOTWRITE_A0_B; // net ID: MIMCREADNOTWRITE lsb: 0  msb: 0 OUTPUT
			this->MIMCROWCONFLICT_A0_B = MIMCROWCONFLICT_A0_B; // net ID: MIMCROWCONFLICT lsb: 0  msb: 0 OUTPUT
			this->MIMCWRITEDATAVALID_A0_B = MIMCWRITEDATAVALID_A0_B; // net ID: MIMCWRITEDATAVALID lsb: 0  msb: 0 OUTPUT
			this->PPCCPMINTERCONNECTBUSY_A0_B = PPCCPMINTERCONNECTBUSY_A0_B; // net ID: PPCCPMINTERCONNECTBUSY lsb: 0  msb: 0 OUTPUT
			this->PPCDMDCRREAD_A0_B = PPCDMDCRREAD_A0_B; // net ID: PPCDMDCRREAD lsb: 0  msb: 0 OUTPUT
			this->PPCDMDCRWRITE_A0_B = PPCDMDCRWRITE_A0_B; // net ID: PPCDMDCRWRITE lsb: 0  msb: 0 OUTPUT
			this->PPCDSDCRACK_A0_B = PPCDSDCRACK_A0_B; // net ID: PPCDSDCRACK lsb: 0  msb: 0 OUTPUT
			this->PPCDSDCRTIMEOUTWAIT_A0_B = PPCDSDCRTIMEOUTWAIT_A0_B; // net ID: PPCDSDCRTIMEOUTWAIT lsb: 0  msb: 0 OUTPUT
			this->PPCEICINTERCONNECTIRQ_A0_B = PPCEICINTERCONNECTIRQ_A0_B; // net ID: PPCEICINTERCONNECTIRQ lsb: 0  msb: 0 OUTPUT
			this->PPCMPLBABORT_A0_B = PPCMPLBABORT_A0_B; // net ID: PPCMPLBABORT lsb: 0  msb: 0 OUTPUT
			this->PPCMPLBBUSLOCK_A0_B = PPCMPLBBUSLOCK_A0_B; // net ID: PPCMPLBBUSLOCK lsb: 0  msb: 0 OUTPUT
			this->PPCMPLBLOCKERR_A0_B = PPCMPLBLOCKERR_A0_B; // net ID: PPCMPLBLOCKERR lsb: 0  msb: 0 OUTPUT
			this->PPCMPLBRDBURST_A0_B = PPCMPLBRDBURST_A0_B; // net ID: PPCMPLBRDBURST lsb: 0  msb: 0 OUTPUT
			this->PPCMPLBREQUEST_A0_B = PPCMPLBREQUEST_A0_B; // net ID: PPCMPLBREQUEST lsb: 0  msb: 0 OUTPUT
			this->PPCMPLBRNW_A0_B = PPCMPLBRNW_A0_B; // net ID: PPCMPLBRNW lsb: 0  msb: 0 OUTPUT
			this->PPCMPLBWRBURST_A0_B = PPCMPLBWRBURST_A0_B; // net ID: PPCMPLBWRBURST lsb: 0  msb: 0 OUTPUT
			this->PPCS0PLBADDRACK_A0_B = PPCS0PLBADDRACK_A0_B; // net ID: PPCS0PLBADDRACK lsb: 0  msb: 0 OUTPUT
			this->PPCS0PLBRDBTERM_A0_B = PPCS0PLBRDBTERM_A0_B; // net ID: PPCS0PLBRDBTERM lsb: 0  msb: 0 OUTPUT
			this->PPCS0PLBRDCOMP_A0_B = PPCS0PLBRDCOMP_A0_B; // net ID: PPCS0PLBRDCOMP lsb: 0  msb: 0 OUTPUT
			this->PPCS0PLBRDDACK_A0_B = PPCS0PLBRDDACK_A0_B; // net ID: PPCS0PLBRDDACK lsb: 0  msb: 0 OUTPUT
			this->PPCS0PLBREARBITRATE_A0_B = PPCS0PLBREARBITRATE_A0_B; // net ID: PPCS0PLBREARBITRATE lsb: 0  msb: 0 OUTPUT
			this->PPCS0PLBWAIT_A0_B = PPCS0PLBWAIT_A0_B; // net ID: PPCS0PLBWAIT lsb: 0  msb: 0 OUTPUT
			this->PPCS0PLBWRBTERM_A0_B = PPCS0PLBWRBTERM_A0_B; // net ID: PPCS0PLBWRBTERM lsb: 0  msb: 0 OUTPUT
			this->PPCS0PLBWRCOMP_A0_B = PPCS0PLBWRCOMP_A0_B; // net ID: PPCS0PLBWRCOMP lsb: 0  msb: 0 OUTPUT
			this->PPCS0PLBWRDACK_A0_B = PPCS0PLBWRDACK_A0_B; // net ID: PPCS0PLBWRDACK lsb: 0  msb: 0 OUTPUT
			this->PPCS1PLBADDRACK_A0_B = PPCS1PLBADDRACK_A0_B; // net ID: PPCS1PLBADDRACK lsb: 0  msb: 0 OUTPUT
			this->PPCS1PLBRDBTERM_A0_B = PPCS1PLBRDBTERM_A0_B; // net ID: PPCS1PLBRDBTERM lsb: 0  msb: 0 OUTPUT
			this->PPCS1PLBRDCOMP_A0_B = PPCS1PLBRDCOMP_A0_B; // net ID: PPCS1PLBRDCOMP lsb: 0  msb: 0 OUTPUT
			this->PPCS1PLBRDDACK_A0_B = PPCS1PLBRDDACK_A0_B; // net ID: PPCS1PLBRDDACK lsb: 0  msb: 0 OUTPUT
			this->PPCS1PLBREARBITRATE_A0_B = PPCS1PLBREARBITRATE_A0_B; // net ID: PPCS1PLBREARBITRATE lsb: 0  msb: 0 OUTPUT
			this->PPCS1PLBWAIT_A0_B = PPCS1PLBWAIT_A0_B; // net ID: PPCS1PLBWAIT lsb: 0  msb: 0 OUTPUT
			this->PPCS1PLBWRBTERM_A0_B = PPCS1PLBWRBTERM_A0_B; // net ID: PPCS1PLBWRBTERM lsb: 0  msb: 0 OUTPUT
			this->PPCS1PLBWRCOMP_A0_B = PPCS1PLBWRCOMP_A0_B; // net ID: PPCS1PLBWRCOMP lsb: 0  msb: 0 OUTPUT
			this->PPCS1PLBWRDACK_A0_B = PPCS1PLBWRDACK_A0_B; // net ID: PPCS1PLBWRDACK lsb: 0  msb: 0 OUTPUT
			this->CPMC440CLK_A0_B = CPMC440CLK_A0_B; // net ID: CPMC440CLK lsb: 0  msb: 0 INPUT
			this->CPMC440CLKEN_A0_B = CPMC440CLKEN_A0_B; // net ID: CPMC440CLKEN lsb: 0  msb: 0 INPUT
			this->CPMC440CORECLOCKINACTIVE_A0_B = CPMC440CORECLOCKINACTIVE_A0_B; // net ID: CPMC440CORECLOCKINACTIVE lsb: 0  msb: 0 INPUT
			this->CPMC440TIMERCLOCK_A0_B = CPMC440TIMERCLOCK_A0_B; // net ID: CPMC440TIMERCLOCK lsb: 0  msb: 0 INPUT
			this->CPMDCRCLK_A0_B = CPMDCRCLK_A0_B; // net ID: CPMDCRCLK lsb: 0  msb: 0 INPUT
			this->CPMDMA0LLCLK_A0_B = CPMDMA0LLCLK_A0_B; // net ID: CPMDMA0LLCLK lsb: 0  msb: 0 INPUT
			this->CPMDMA1LLCLK_A0_B = CPMDMA1LLCLK_A0_B; // net ID: CPMDMA1LLCLK lsb: 0  msb: 0 INPUT
			this->CPMDMA2LLCLK_A0_B = CPMDMA2LLCLK_A0_B; // net ID: CPMDMA2LLCLK lsb: 0  msb: 0 INPUT
			this->CPMDMA3LLCLK_A0_B = CPMDMA3LLCLK_A0_B; // net ID: CPMDMA3LLCLK lsb: 0  msb: 0 INPUT
			this->CPMFCMCLK_A0_B = CPMFCMCLK_A0_B; // net ID: CPMFCMCLK lsb: 0  msb: 0 INPUT
			this->CPMINTERCONNECTCLK_A0_B = CPMINTERCONNECTCLK_A0_B; // net ID: CPMINTERCONNECTCLK lsb: 0  msb: 0 INPUT
			this->CPMINTERCONNECTCLKEN_A0_B = CPMINTERCONNECTCLKEN_A0_B; // net ID: CPMINTERCONNECTCLKEN lsb: 0  msb: 0 INPUT
			this->CPMINTERCONNECTCLKNTO1_A0_B = CPMINTERCONNECTCLKNTO1_A0_B; // net ID: CPMINTERCONNECTCLKNTO1 lsb: 0  msb: 0 INPUT
			this->CPMMCCLK_A0_B = CPMMCCLK_A0_B; // net ID: CPMMCCLK lsb: 0  msb: 0 INPUT
			this->CPMPPCMPLBCLK_A0_B = CPMPPCMPLBCLK_A0_B; // net ID: CPMPPCMPLBCLK lsb: 0  msb: 0 INPUT
			this->CPMPPCS0PLBCLK_A0_B = CPMPPCS0PLBCLK_A0_B; // net ID: CPMPPCS0PLBCLK lsb: 0  msb: 0 INPUT
			this->CPMPPCS1PLBCLK_A0_B = CPMPPCS1PLBCLK_A0_B; // net ID: CPMPPCS1PLBCLK lsb: 0  msb: 0 INPUT
			this->DBGC440DEBUGHALT_A0_B = DBGC440DEBUGHALT_A0_B; // net ID: DBGC440DEBUGHALT lsb: 0  msb: 0 INPUT
			this->DBGC440UNCONDDEBUGEVENT_A0_B = DBGC440UNCONDDEBUGEVENT_A0_B; // net ID: DBGC440UNCONDDEBUGEVENT lsb: 0  msb: 0 INPUT
			this->DCRPPCDMACK_A0_B = DCRPPCDMACK_A0_B; // net ID: DCRPPCDMACK lsb: 0  msb: 0 INPUT
			this->DCRPPCDMTIMEOUTWAIT_A0_B = DCRPPCDMTIMEOUTWAIT_A0_B; // net ID: DCRPPCDMTIMEOUTWAIT lsb: 0  msb: 0 INPUT
			this->DCRPPCDSREAD_A0_B = DCRPPCDSREAD_A0_B; // net ID: DCRPPCDSREAD lsb: 0  msb: 0 INPUT
			this->DCRPPCDSWRITE_A0_B = DCRPPCDSWRITE_A0_B; // net ID: DCRPPCDSWRITE lsb: 0  msb: 0 INPUT
			this->EICC440CRITIRQ_A0_B = EICC440CRITIRQ_A0_B; // net ID: EICC440CRITIRQ lsb: 0  msb: 0 INPUT
			this->EICC440EXTIRQ_A0_B = EICC440EXTIRQ_A0_B; // net ID: EICC440EXTIRQ lsb: 0  msb: 0 INPUT
			this->FCMAPUCONFIRMINSTR_A0_B = FCMAPUCONFIRMINSTR_A0_B; // net ID: FCMAPUCONFIRMINSTR lsb: 0  msb: 0 INPUT
			this->FCMAPUDONE_A0_B = FCMAPUDONE_A0_B; // net ID: FCMAPUDONE lsb: 0  msb: 0 INPUT
			this->FCMAPUEXCEPTION_A0_B = FCMAPUEXCEPTION_A0_B; // net ID: FCMAPUEXCEPTION lsb: 0  msb: 0 INPUT
			this->FCMAPUFPSCRFEX_A0_B = FCMAPUFPSCRFEX_A0_B; // net ID: FCMAPUFPSCRFEX lsb: 0  msb: 0 INPUT
			this->FCMAPURESULTVALID_A0_B = FCMAPURESULTVALID_A0_B; // net ID: FCMAPURESULTVALID lsb: 0  msb: 0 INPUT
			this->FCMAPUSLEEPNOTREADY_A0_B = FCMAPUSLEEPNOTREADY_A0_B; // net ID: FCMAPUSLEEPNOTREADY lsb: 0  msb: 0 INPUT
			this->JTGC440TCK_A0_B = JTGC440TCK_A0_B; // net ID: JTGC440TCK lsb: 0  msb: 0 INPUT
			this->JTGC440TDI_A0_B = JTGC440TDI_A0_B; // net ID: JTGC440TDI lsb: 0  msb: 0 INPUT
			this->JTGC440TMS_A0_B = JTGC440TMS_A0_B; // net ID: JTGC440TMS lsb: 0  msb: 0 INPUT
			this->JTGC440TRSTNEG_A0_B = JTGC440TRSTNEG_A0_B; // net ID: JTGC440TRSTNEG lsb: 0  msb: 0 INPUT
			this->LLDMA0RSTENGINEREQ_A0_B = LLDMA0RSTENGINEREQ_A0_B; // net ID: LLDMA0RSTENGINEREQ lsb: 0  msb: 0 INPUT
			this->LLDMA0RXEOFN_A0_B = LLDMA0RXEOFN_A0_B; // net ID: LLDMA0RXEOFN lsb: 0  msb: 0 INPUT
			this->LLDMA0RXEOPN_A0_B = LLDMA0RXEOPN_A0_B; // net ID: LLDMA0RXEOPN lsb: 0  msb: 0 INPUT
			this->LLDMA0RXSOFN_A0_B = LLDMA0RXSOFN_A0_B; // net ID: LLDMA0RXSOFN lsb: 0  msb: 0 INPUT
			this->LLDMA0RXSOPN_A0_B = LLDMA0RXSOPN_A0_B; // net ID: LLDMA0RXSOPN lsb: 0  msb: 0 INPUT
			this->LLDMA0RXSRCRDYN_A0_B = LLDMA0RXSRCRDYN_A0_B; // net ID: LLDMA0RXSRCRDYN lsb: 0  msb: 0 INPUT
			this->LLDMA0TXDSTRDYN_A0_B = LLDMA0TXDSTRDYN_A0_B; // net ID: LLDMA0TXDSTRDYN lsb: 0  msb: 0 INPUT
			this->LLDMA1RSTENGINEREQ_A0_B = LLDMA1RSTENGINEREQ_A0_B; // net ID: LLDMA1RSTENGINEREQ lsb: 0  msb: 0 INPUT
			this->LLDMA1RXEOFN_A0_B = LLDMA1RXEOFN_A0_B; // net ID: LLDMA1RXEOFN lsb: 0  msb: 0 INPUT
			this->LLDMA1RXEOPN_A0_B = LLDMA1RXEOPN_A0_B; // net ID: LLDMA1RXEOPN lsb: 0  msb: 0 INPUT
			this->LLDMA1RXSOFN_A0_B = LLDMA1RXSOFN_A0_B; // net ID: LLDMA1RXSOFN lsb: 0  msb: 0 INPUT
			this->LLDMA1RXSOPN_A0_B = LLDMA1RXSOPN_A0_B; // net ID: LLDMA1RXSOPN lsb: 0  msb: 0 INPUT
			this->LLDMA1RXSRCRDYN_A0_B = LLDMA1RXSRCRDYN_A0_B; // net ID: LLDMA1RXSRCRDYN lsb: 0  msb: 0 INPUT
			this->LLDMA1TXDSTRDYN_A0_B = LLDMA1TXDSTRDYN_A0_B; // net ID: LLDMA1TXDSTRDYN lsb: 0  msb: 0 INPUT
			this->LLDMA2RSTENGINEREQ_A0_B = LLDMA2RSTENGINEREQ_A0_B; // net ID: LLDMA2RSTENGINEREQ lsb: 0  msb: 0 INPUT
			this->LLDMA2RXEOFN_A0_B = LLDMA2RXEOFN_A0_B; // net ID: LLDMA2RXEOFN lsb: 0  msb: 0 INPUT
			this->LLDMA2RXEOPN_A0_B = LLDMA2RXEOPN_A0_B; // net ID: LLDMA2RXEOPN lsb: 0  msb: 0 INPUT
			this->LLDMA2RXSOFN_A0_B = LLDMA2RXSOFN_A0_B; // net ID: LLDMA2RXSOFN lsb: 0  msb: 0 INPUT
			this->LLDMA2RXSOPN_A0_B = LLDMA2RXSOPN_A0_B; // net ID: LLDMA2RXSOPN lsb: 0  msb: 0 INPUT
			this->LLDMA2RXSRCRDYN_A0_B = LLDMA2RXSRCRDYN_A0_B; // net ID: LLDMA2RXSRCRDYN lsb: 0  msb: 0 INPUT
			this->LLDMA2TXDSTRDYN_A0_B = LLDMA2TXDSTRDYN_A0_B; // net ID: LLDMA2TXDSTRDYN lsb: 0  msb: 0 INPUT
			this->LLDMA3RSTENGINEREQ_A0_B = LLDMA3RSTENGINEREQ_A0_B; // net ID: LLDMA3RSTENGINEREQ lsb: 0  msb: 0 INPUT
			this->LLDMA3RXEOFN_A0_B = LLDMA3RXEOFN_A0_B; // net ID: LLDMA3RXEOFN lsb: 0  msb: 0 INPUT
			this->LLDMA3RXEOPN_A0_B = LLDMA3RXEOPN_A0_B; // net ID: LLDMA3RXEOPN lsb: 0  msb: 0 INPUT
			this->LLDMA3RXSOFN_A0_B = LLDMA3RXSOFN_A0_B; // net ID: LLDMA3RXSOFN lsb: 0  msb: 0 INPUT
			this->LLDMA3RXSOPN_A0_B = LLDMA3RXSOPN_A0_B; // net ID: LLDMA3RXSOPN lsb: 0  msb: 0 INPUT
			this->LLDMA3RXSRCRDYN_A0_B = LLDMA3RXSRCRDYN_A0_B; // net ID: LLDMA3RXSRCRDYN lsb: 0  msb: 0 INPUT
			this->LLDMA3TXDSTRDYN_A0_B = LLDMA3TXDSTRDYN_A0_B; // net ID: LLDMA3TXDSTRDYN lsb: 0  msb: 0 INPUT
			this->MCMIADDRREADYTOACCEPT_A0_B = MCMIADDRREADYTOACCEPT_A0_B; // net ID: MCMIADDRREADYTOACCEPT lsb: 0  msb: 0 INPUT
			this->MCMIREADDATAERR_A0_B = MCMIREADDATAERR_A0_B; // net ID: MCMIREADDATAERR lsb: 0  msb: 0 INPUT
			this->MCMIREADDATAVALID_A0_B = MCMIREADDATAVALID_A0_B; // net ID: MCMIREADDATAVALID lsb: 0  msb: 0 INPUT
			this->PLBPPCMADDRACK_A0_B = PLBPPCMADDRACK_A0_B; // net ID: PLBPPCMADDRACK lsb: 0  msb: 0 INPUT
			this->PLBPPCMMBUSY_A0_B = PLBPPCMMBUSY_A0_B; // net ID: PLBPPCMMBUSY lsb: 0  msb: 0 INPUT
			this->PLBPPCMMIRQ_A0_B = PLBPPCMMIRQ_A0_B; // net ID: PLBPPCMMIRQ lsb: 0  msb: 0 INPUT
			this->PLBPPCMMRDERR_A0_B = PLBPPCMMRDERR_A0_B; // net ID: PLBPPCMMRDERR lsb: 0  msb: 0 INPUT
			this->PLBPPCMMWRERR_A0_B = PLBPPCMMWRERR_A0_B; // net ID: PLBPPCMMWRERR lsb: 0  msb: 0 INPUT
			this->PLBPPCMRDBTERM_A0_B = PLBPPCMRDBTERM_A0_B; // net ID: PLBPPCMRDBTERM lsb: 0  msb: 0 INPUT
			this->PLBPPCMRDDACK_A0_B = PLBPPCMRDDACK_A0_B; // net ID: PLBPPCMRDDACK lsb: 0  msb: 0 INPUT
			this->PLBPPCMRDPENDREQ_A0_B = PLBPPCMRDPENDREQ_A0_B; // net ID: PLBPPCMRDPENDREQ lsb: 0  msb: 0 INPUT
			this->PLBPPCMREARBITRATE_A0_B = PLBPPCMREARBITRATE_A0_B; // net ID: PLBPPCMREARBITRATE lsb: 0  msb: 0 INPUT
			this->PLBPPCMTIMEOUT_A0_B = PLBPPCMTIMEOUT_A0_B; // net ID: PLBPPCMTIMEOUT lsb: 0  msb: 0 INPUT
			this->PLBPPCMWRBTERM_A0_B = PLBPPCMWRBTERM_A0_B; // net ID: PLBPPCMWRBTERM lsb: 0  msb: 0 INPUT
			this->PLBPPCMWRDACK_A0_B = PLBPPCMWRDACK_A0_B; // net ID: PLBPPCMWRDACK lsb: 0  msb: 0 INPUT
			this->PLBPPCMWRPENDREQ_A0_B = PLBPPCMWRPENDREQ_A0_B; // net ID: PLBPPCMWRPENDREQ lsb: 0  msb: 0 INPUT
			this->PLBPPCS0ABORT_A0_B = PLBPPCS0ABORT_A0_B; // net ID: PLBPPCS0ABORT lsb: 0  msb: 0 INPUT
			this->PLBPPCS0BUSLOCK_A0_B = PLBPPCS0BUSLOCK_A0_B; // net ID: PLBPPCS0BUSLOCK lsb: 0  msb: 0 INPUT
			this->PLBPPCS0LOCKERR_A0_B = PLBPPCS0LOCKERR_A0_B; // net ID: PLBPPCS0LOCKERR lsb: 0  msb: 0 INPUT
			this->PLBPPCS0PAVALID_A0_B = PLBPPCS0PAVALID_A0_B; // net ID: PLBPPCS0PAVALID lsb: 0  msb: 0 INPUT
			this->PLBPPCS0RDBURST_A0_B = PLBPPCS0RDBURST_A0_B; // net ID: PLBPPCS0RDBURST lsb: 0  msb: 0 INPUT
			this->PLBPPCS0RDPENDREQ_A0_B = PLBPPCS0RDPENDREQ_A0_B; // net ID: PLBPPCS0RDPENDREQ lsb: 0  msb: 0 INPUT
			this->PLBPPCS0RDPRIM_A0_B = PLBPPCS0RDPRIM_A0_B; // net ID: PLBPPCS0RDPRIM lsb: 0  msb: 0 INPUT
			this->PLBPPCS0RNW_A0_B = PLBPPCS0RNW_A0_B; // net ID: PLBPPCS0RNW lsb: 0  msb: 0 INPUT
			this->PLBPPCS0SAVALID_A0_B = PLBPPCS0SAVALID_A0_B; // net ID: PLBPPCS0SAVALID lsb: 0  msb: 0 INPUT
			this->PLBPPCS0WRBURST_A0_B = PLBPPCS0WRBURST_A0_B; // net ID: PLBPPCS0WRBURST lsb: 0  msb: 0 INPUT
			this->PLBPPCS0WRPENDREQ_A0_B = PLBPPCS0WRPENDREQ_A0_B; // net ID: PLBPPCS0WRPENDREQ lsb: 0  msb: 0 INPUT
			this->PLBPPCS0WRPRIM_A0_B = PLBPPCS0WRPRIM_A0_B; // net ID: PLBPPCS0WRPRIM lsb: 0  msb: 0 INPUT
			this->PLBPPCS1ABORT_A0_B = PLBPPCS1ABORT_A0_B; // net ID: PLBPPCS1ABORT lsb: 0  msb: 0 INPUT
			this->PLBPPCS1BUSLOCK_A0_B = PLBPPCS1BUSLOCK_A0_B; // net ID: PLBPPCS1BUSLOCK lsb: 0  msb: 0 INPUT
			this->PLBPPCS1LOCKERR_A0_B = PLBPPCS1LOCKERR_A0_B; // net ID: PLBPPCS1LOCKERR lsb: 0  msb: 0 INPUT
			this->PLBPPCS1PAVALID_A0_B = PLBPPCS1PAVALID_A0_B; // net ID: PLBPPCS1PAVALID lsb: 0  msb: 0 INPUT
			this->PLBPPCS1RDBURST_A0_B = PLBPPCS1RDBURST_A0_B; // net ID: PLBPPCS1RDBURST lsb: 0  msb: 0 INPUT
			this->PLBPPCS1RDPENDREQ_A0_B = PLBPPCS1RDPENDREQ_A0_B; // net ID: PLBPPCS1RDPENDREQ lsb: 0  msb: 0 INPUT
			this->PLBPPCS1RDPRIM_A0_B = PLBPPCS1RDPRIM_A0_B; // net ID: PLBPPCS1RDPRIM lsb: 0  msb: 0 INPUT
			this->PLBPPCS1RNW_A0_B = PLBPPCS1RNW_A0_B; // net ID: PLBPPCS1RNW lsb: 0  msb: 0 INPUT
			this->PLBPPCS1SAVALID_A0_B = PLBPPCS1SAVALID_A0_B; // net ID: PLBPPCS1SAVALID lsb: 0  msb: 0 INPUT
			this->PLBPPCS1WRBURST_A0_B = PLBPPCS1WRBURST_A0_B; // net ID: PLBPPCS1WRBURST lsb: 0  msb: 0 INPUT
			this->PLBPPCS1WRPENDREQ_A0_B = PLBPPCS1WRPENDREQ_A0_B; // net ID: PLBPPCS1WRPENDREQ lsb: 0  msb: 0 INPUT
			this->PLBPPCS1WRPRIM_A0_B = PLBPPCS1WRPRIM_A0_B; // net ID: PLBPPCS1WRPRIM lsb: 0  msb: 0 INPUT
			this->RSTC440RESETCHIP_A0_B = RSTC440RESETCHIP_A0_B; // net ID: RSTC440RESETCHIP lsb: 0  msb: 0 INPUT
			this->RSTC440RESETCORE_A0_B = RSTC440RESETCORE_A0_B; // net ID: RSTC440RESETCORE lsb: 0  msb: 0 INPUT
			this->RSTC440RESETSYSTEM_A0_B = RSTC440RESETSYSTEM_A0_B; // net ID: RSTC440RESETSYSTEM lsb: 0  msb: 0 INPUT
			this->TIEC440ENDIANRESET_A0_B = TIEC440ENDIANRESET_A0_B; // net ID: TIEC440ENDIANRESET lsb: 0  msb: 0 INPUT
			this->TRCC440TRACEDISABLE_A0_B = TRCC440TRACEDISABLE_A0_B; // net ID: TRCC440TRACEDISABLE lsb: 0  msb: 0 INPUT
			this->TRCC440TRIGGEREVENTIN_A0_B = TRCC440TRIGGEREVENTIN_A0_B; // net ID: TRCC440TRIGGEREVENTIN lsb: 0  msb: 0 INPUT
			
			register_wait_on_event_nets();
			
		}
		
		void register_wait_on_event_nets(){
		// TODO
		}
		
		bool calculate(simtime_t time){
		// TODO
		}
		};
		
}
#endif // X_PPC440_H
