/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

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
		parameter_string_t APU_CONTROL;
		parameter_string_t APU_UDI0;
		parameter_string_t APU_UDI1;
		parameter_string_t APU_UDI10;
		parameter_string_t APU_UDI11;
		parameter_string_t APU_UDI12;
		parameter_string_t APU_UDI13;
		parameter_string_t APU_UDI14;
		parameter_string_t APU_UDI15;
		parameter_string_t APU_UDI2;
		parameter_string_t APU_UDI3;
		parameter_string_t APU_UDI4;
		parameter_string_t APU_UDI5;
		parameter_string_t APU_UDI6;
		parameter_string_t APU_UDI7;
		parameter_string_t APU_UDI8;
		parameter_string_t APU_UDI9;
		parameter_string_t DMA0_RXCHANNELCTRL;
		parameter_string_t DMA0_TXCHANNELCTRL;
		parameter_string_t DMA1_RXCHANNELCTRL;
		parameter_string_t DMA1_TXCHANNELCTRL;
		parameter_string_t DMA2_RXCHANNELCTRL;
		parameter_string_t DMA2_TXCHANNELCTRL;
		parameter_string_t DMA3_RXCHANNELCTRL;
		parameter_string_t DMA3_TXCHANNELCTRL;
		parameter_string_t INTERCONNECT_IMASK;
		parameter_string_t INTERCONNECT_TMPL_SEL;
		parameter_string_t MI_ARBCONFIG;
		parameter_string_t MI_BANKCONFLICT_MASK;
		parameter_string_t MI_CONTROL;
		parameter_string_t MI_ROWCONFLICT_MASK;
		parameter_string_t PPCM_ARBCONFIG;
		parameter_string_t PPCM_CONTROL;
		parameter_string_t PPCM_COUNTER;
		parameter_string_t PPCS0_ADDRMAP_TMPL0;
		parameter_string_t PPCS0_ADDRMAP_TMPL1;
		parameter_string_t PPCS0_ADDRMAP_TMPL2;
		parameter_string_t PPCS0_ADDRMAP_TMPL3;
		parameter_string_t PPCS0_CONTROL;
		parameter_string_t PPCS1_ADDRMAP_TMPL0;
		parameter_string_t PPCS1_ADDRMAP_TMPL1;
		parameter_string_t PPCS1_ADDRMAP_TMPL2;
		parameter_string_t PPCS1_ADDRMAP_TMPL3;
		parameter_string_t PPCS1_CONTROL;
		parameter_string_t XBAR_ADDRMAP_TMPL0;
		parameter_string_t XBAR_ADDRMAP_TMPL1;
		parameter_string_t XBAR_ADDRMAP_TMPL2;
		parameter_string_t XBAR_ADDRMAP_TMPL3;
		parameter_string_t DMA0_CONTROL;
		parameter_string_t DMA1_CONTROL;
		parameter_string_t DMA2_CONTROL;
		parameter_string_t DMA3_CONTROL;
		parameter_string_t DMA0_RXIRQTIMER;
		parameter_string_t DMA0_TXIRQTIMER;
		parameter_string_t DMA1_RXIRQTIMER;
		parameter_string_t DMA1_TXIRQTIMER;
		parameter_string_t DMA2_RXIRQTIMER;
		parameter_string_t DMA2_TXIRQTIMER;
		parameter_string_t DMA3_RXIRQTIMER;
		parameter_string_t DMA3_TXIRQTIMER;
		//Verilog Ports in definition order:
		NetFlow* APUFCMDECFPUOP; // net ID: APUFCMDECFPUOP lsb: 0  msb: 0 OUTPUT
		NetFlow* APUFCMDECLDSTXFERSIZE; // net ID: APUFCMDECLDSTXFERSIZE lsb: 0  msb: 0 OUTPUT
		NetFlow* APUFCMDECLOAD; // net ID: APUFCMDECLOAD lsb: 0  msb: 0 OUTPUT
		NetFlow* APUFCMDECNONAUTON; // net ID: APUFCMDECNONAUTON lsb: 0  msb: 0 OUTPUT
		NetFlow* APUFCMDECSTORE; // net ID: APUFCMDECSTORE lsb: 0  msb: 0 OUTPUT
		NetFlow* APUFCMDECUDI; // net ID: APUFCMDECUDI lsb: 0  msb: 0 OUTPUT
		NetFlow* APUFCMDECUDIVALID; // net ID: APUFCMDECUDIVALID lsb: 0  msb: 0 OUTPUT
		NetFlow* APUFCMENDIAN; // net ID: APUFCMENDIAN lsb: 0  msb: 0 OUTPUT
		NetFlow* APUFCMFLUSH; // net ID: APUFCMFLUSH lsb: 0  msb: 0 OUTPUT
		NetFlow* APUFCMINSTRUCTION; // net ID: APUFCMINSTRUCTION lsb: 0  msb: 0 OUTPUT
		NetFlow* APUFCMINSTRVALID; // net ID: APUFCMINSTRVALID lsb: 0  msb: 0 OUTPUT
		NetFlow* APUFCMLOADBYTEADDR; // net ID: APUFCMLOADBYTEADDR lsb: 0  msb: 0 OUTPUT
		NetFlow* APUFCMLOADDATA; // net ID: APUFCMLOADDATA lsb: 0  msb: 0 OUTPUT
		NetFlow* APUFCMLOADDVALID; // net ID: APUFCMLOADDVALID lsb: 0  msb: 0 OUTPUT
		NetFlow* APUFCMMSRFE0; // net ID: APUFCMMSRFE0 lsb: 0  msb: 0 OUTPUT
		NetFlow* APUFCMMSRFE1; // net ID: APUFCMMSRFE1 lsb: 0  msb: 0 OUTPUT
		NetFlow* APUFCMNEXTINSTRREADY; // net ID: APUFCMNEXTINSTRREADY lsb: 0  msb: 0 OUTPUT
		NetFlow* APUFCMOPERANDVALID; // net ID: APUFCMOPERANDVALID lsb: 0  msb: 0 OUTPUT
		NetFlow* APUFCMRADATA; // net ID: APUFCMRADATA lsb: 0  msb: 0 OUTPUT
		NetFlow* APUFCMRBDATA; // net ID: APUFCMRBDATA lsb: 0  msb: 0 OUTPUT
		NetFlow* APUFCMWRITEBACKOK; // net ID: APUFCMWRITEBACKOK lsb: 0  msb: 0 OUTPUT
		NetFlow* C440CPMCORESLEEPREQ; // net ID: C440CPMCORESLEEPREQ lsb: 0  msb: 0 OUTPUT
		NetFlow* C440CPMDECIRPTREQ; // net ID: C440CPMDECIRPTREQ lsb: 0  msb: 0 OUTPUT
		NetFlow* C440CPMFITIRPTREQ; // net ID: C440CPMFITIRPTREQ lsb: 0  msb: 0 OUTPUT
		NetFlow* C440CPMMSRCE; // net ID: C440CPMMSRCE lsb: 0  msb: 0 OUTPUT
		NetFlow* C440CPMMSREE; // net ID: C440CPMMSREE lsb: 0  msb: 0 OUTPUT
		NetFlow* C440CPMTIMERRESETREQ; // net ID: C440CPMTIMERRESETREQ lsb: 0  msb: 0 OUTPUT
		NetFlow* C440CPMWDIRPTREQ; // net ID: C440CPMWDIRPTREQ lsb: 0  msb: 0 OUTPUT
		NetFlow* C440DBGSYSTEMCONTROL; // net ID: C440DBGSYSTEMCONTROL lsb: 0  msb: 0 OUTPUT
		NetFlow* C440JTGTDO; // net ID: C440JTGTDO lsb: 0  msb: 0 OUTPUT
		NetFlow* C440JTGTDOEN; // net ID: C440JTGTDOEN lsb: 0  msb: 0 OUTPUT
		NetFlow* C440MACHINECHECK; // net ID: C440MACHINECHECK lsb: 0  msb: 0 OUTPUT
		NetFlow* C440RSTCHIPRESETREQ; // net ID: C440RSTCHIPRESETREQ lsb: 0  msb: 0 OUTPUT
		NetFlow* C440RSTCORERESETREQ; // net ID: C440RSTCORERESETREQ lsb: 0  msb: 0 OUTPUT
		NetFlow* C440RSTSYSTEMRESETREQ; // net ID: C440RSTSYSTEMRESETREQ lsb: 0  msb: 0 OUTPUT
		NetFlow* C440TRCBRANCHSTATUS; // net ID: C440TRCBRANCHSTATUS lsb: 0  msb: 0 OUTPUT
		NetFlow* C440TRCCYCLE; // net ID: C440TRCCYCLE lsb: 0  msb: 0 OUTPUT
		NetFlow* C440TRCEXECUTIONSTATUS; // net ID: C440TRCEXECUTIONSTATUS lsb: 0  msb: 0 OUTPUT
		NetFlow* C440TRCTRACESTATUS; // net ID: C440TRCTRACESTATUS lsb: 0  msb: 0 OUTPUT
		NetFlow* C440TRCTRIGGEREVENTOUT; // net ID: C440TRCTRIGGEREVENTOUT lsb: 0  msb: 0 OUTPUT
		NetFlow* C440TRCTRIGGEREVENTTYPE; // net ID: C440TRCTRIGGEREVENTTYPE lsb: 0  msb: 0 OUTPUT
		NetFlow* DMA0LLRSTENGINEACK; // net ID: DMA0LLRSTENGINEACK lsb: 0  msb: 0 OUTPUT
		NetFlow* DMA0LLRXDSTRDYN; // net ID: DMA0LLRXDSTRDYN lsb: 0  msb: 0 OUTPUT
		NetFlow* DMA0LLTXD; // net ID: DMA0LLTXD lsb: 0  msb: 0 OUTPUT
		NetFlow* DMA0LLTXEOFN; // net ID: DMA0LLTXEOFN lsb: 0  msb: 0 OUTPUT
		NetFlow* DMA0LLTXEOPN; // net ID: DMA0LLTXEOPN lsb: 0  msb: 0 OUTPUT
		NetFlow* DMA0LLTXREM; // net ID: DMA0LLTXREM lsb: 0  msb: 0 OUTPUT
		NetFlow* DMA0LLTXSOFN; // net ID: DMA0LLTXSOFN lsb: 0  msb: 0 OUTPUT
		NetFlow* DMA0LLTXSOPN; // net ID: DMA0LLTXSOPN lsb: 0  msb: 0 OUTPUT
		NetFlow* DMA0LLTXSRCRDYN; // net ID: DMA0LLTXSRCRDYN lsb: 0  msb: 0 OUTPUT
		NetFlow* DMA0RXIRQ; // net ID: DMA0RXIRQ lsb: 0  msb: 0 OUTPUT
		NetFlow* DMA0TXIRQ; // net ID: DMA0TXIRQ lsb: 0  msb: 0 OUTPUT
		NetFlow* DMA1LLRSTENGINEACK; // net ID: DMA1LLRSTENGINEACK lsb: 0  msb: 0 OUTPUT
		NetFlow* DMA1LLRXDSTRDYN; // net ID: DMA1LLRXDSTRDYN lsb: 0  msb: 0 OUTPUT
		NetFlow* DMA1LLTXD; // net ID: DMA1LLTXD lsb: 0  msb: 0 OUTPUT
		NetFlow* DMA1LLTXEOFN; // net ID: DMA1LLTXEOFN lsb: 0  msb: 0 OUTPUT
		NetFlow* DMA1LLTXEOPN; // net ID: DMA1LLTXEOPN lsb: 0  msb: 0 OUTPUT
		NetFlow* DMA1LLTXREM; // net ID: DMA1LLTXREM lsb: 0  msb: 0 OUTPUT
		NetFlow* DMA1LLTXSOFN; // net ID: DMA1LLTXSOFN lsb: 0  msb: 0 OUTPUT
		NetFlow* DMA1LLTXSOPN; // net ID: DMA1LLTXSOPN lsb: 0  msb: 0 OUTPUT
		NetFlow* DMA1LLTXSRCRDYN; // net ID: DMA1LLTXSRCRDYN lsb: 0  msb: 0 OUTPUT
		NetFlow* DMA1RXIRQ; // net ID: DMA1RXIRQ lsb: 0  msb: 0 OUTPUT
		NetFlow* DMA1TXIRQ; // net ID: DMA1TXIRQ lsb: 0  msb: 0 OUTPUT
		NetFlow* DMA2LLRSTENGINEACK; // net ID: DMA2LLRSTENGINEACK lsb: 0  msb: 0 OUTPUT
		NetFlow* DMA2LLRXDSTRDYN; // net ID: DMA2LLRXDSTRDYN lsb: 0  msb: 0 OUTPUT
		NetFlow* DMA2LLTXD; // net ID: DMA2LLTXD lsb: 0  msb: 0 OUTPUT
		NetFlow* DMA2LLTXEOFN; // net ID: DMA2LLTXEOFN lsb: 0  msb: 0 OUTPUT
		NetFlow* DMA2LLTXEOPN; // net ID: DMA2LLTXEOPN lsb: 0  msb: 0 OUTPUT
		NetFlow* DMA2LLTXREM; // net ID: DMA2LLTXREM lsb: 0  msb: 0 OUTPUT
		NetFlow* DMA2LLTXSOFN; // net ID: DMA2LLTXSOFN lsb: 0  msb: 0 OUTPUT
		NetFlow* DMA2LLTXSOPN; // net ID: DMA2LLTXSOPN lsb: 0  msb: 0 OUTPUT
		NetFlow* DMA2LLTXSRCRDYN; // net ID: DMA2LLTXSRCRDYN lsb: 0  msb: 0 OUTPUT
		NetFlow* DMA2RXIRQ; // net ID: DMA2RXIRQ lsb: 0  msb: 0 OUTPUT
		NetFlow* DMA2TXIRQ; // net ID: DMA2TXIRQ lsb: 0  msb: 0 OUTPUT
		NetFlow* DMA3LLRSTENGINEACK; // net ID: DMA3LLRSTENGINEACK lsb: 0  msb: 0 OUTPUT
		NetFlow* DMA3LLRXDSTRDYN; // net ID: DMA3LLRXDSTRDYN lsb: 0  msb: 0 OUTPUT
		NetFlow* DMA3LLTXD; // net ID: DMA3LLTXD lsb: 0  msb: 0 OUTPUT
		NetFlow* DMA3LLTXEOFN; // net ID: DMA3LLTXEOFN lsb: 0  msb: 0 OUTPUT
		NetFlow* DMA3LLTXEOPN; // net ID: DMA3LLTXEOPN lsb: 0  msb: 0 OUTPUT
		NetFlow* DMA3LLTXREM; // net ID: DMA3LLTXREM lsb: 0  msb: 0 OUTPUT
		NetFlow* DMA3LLTXSOFN; // net ID: DMA3LLTXSOFN lsb: 0  msb: 0 OUTPUT
		NetFlow* DMA3LLTXSOPN; // net ID: DMA3LLTXSOPN lsb: 0  msb: 0 OUTPUT
		NetFlow* DMA3LLTXSRCRDYN; // net ID: DMA3LLTXSRCRDYN lsb: 0  msb: 0 OUTPUT
		NetFlow* DMA3RXIRQ; // net ID: DMA3RXIRQ lsb: 0  msb: 0 OUTPUT
		NetFlow* DMA3TXIRQ; // net ID: DMA3TXIRQ lsb: 0  msb: 0 OUTPUT
		NetFlow* MIMCADDRESS; // net ID: MIMCADDRESS lsb: 0  msb: 0 OUTPUT
		NetFlow* MIMCADDRESSVALID; // net ID: MIMCADDRESSVALID lsb: 0  msb: 0 OUTPUT
		NetFlow* MIMCBANKCONFLICT; // net ID: MIMCBANKCONFLICT lsb: 0  msb: 0 OUTPUT
		NetFlow* MIMCBYTEENABLE; // net ID: MIMCBYTEENABLE lsb: 0  msb: 0 OUTPUT
		NetFlow* MIMCREADNOTWRITE; // net ID: MIMCREADNOTWRITE lsb: 0  msb: 0 OUTPUT
		NetFlow* MIMCROWCONFLICT; // net ID: MIMCROWCONFLICT lsb: 0  msb: 0 OUTPUT
		NetFlow* MIMCWRITEDATA; // net ID: MIMCWRITEDATA lsb: 0  msb: 0 OUTPUT
		NetFlow* MIMCWRITEDATAVALID; // net ID: MIMCWRITEDATAVALID lsb: 0  msb: 0 OUTPUT
		NetFlow* PPCCPMINTERCONNECTBUSY; // net ID: PPCCPMINTERCONNECTBUSY lsb: 0  msb: 0 OUTPUT
		NetFlow* PPCDMDCRABUS; // net ID: PPCDMDCRABUS lsb: 0  msb: 0 OUTPUT
		NetFlow* PPCDMDCRDBUSOUT; // net ID: PPCDMDCRDBUSOUT lsb: 0  msb: 0 OUTPUT
		NetFlow* PPCDMDCRREAD; // net ID: PPCDMDCRREAD lsb: 0  msb: 0 OUTPUT
		NetFlow* PPCDMDCRUABUS; // net ID: PPCDMDCRUABUS lsb: 0  msb: 0 OUTPUT
		NetFlow* PPCDMDCRWRITE; // net ID: PPCDMDCRWRITE lsb: 0  msb: 0 OUTPUT
		NetFlow* PPCDSDCRACK; // net ID: PPCDSDCRACK lsb: 0  msb: 0 OUTPUT
		NetFlow* PPCDSDCRDBUSIN; // net ID: PPCDSDCRDBUSIN lsb: 0  msb: 0 OUTPUT
		NetFlow* PPCDSDCRTIMEOUTWAIT; // net ID: PPCDSDCRTIMEOUTWAIT lsb: 0  msb: 0 OUTPUT
		NetFlow* PPCEICINTERCONNECTIRQ; // net ID: PPCEICINTERCONNECTIRQ lsb: 0  msb: 0 OUTPUT
		NetFlow* PPCMPLBABORT; // net ID: PPCMPLBABORT lsb: 0  msb: 0 OUTPUT
		NetFlow* PPCMPLBABUS; // net ID: PPCMPLBABUS lsb: 0  msb: 0 OUTPUT
		NetFlow* PPCMPLBBE; // net ID: PPCMPLBBE lsb: 0  msb: 0 OUTPUT
		NetFlow* PPCMPLBBUSLOCK; // net ID: PPCMPLBBUSLOCK lsb: 0  msb: 0 OUTPUT
		NetFlow* PPCMPLBLOCKERR; // net ID: PPCMPLBLOCKERR lsb: 0  msb: 0 OUTPUT
		NetFlow* PPCMPLBPRIORITY; // net ID: PPCMPLBPRIORITY lsb: 0  msb: 0 OUTPUT
		NetFlow* PPCMPLBRDBURST; // net ID: PPCMPLBRDBURST lsb: 0  msb: 0 OUTPUT
		NetFlow* PPCMPLBREQUEST; // net ID: PPCMPLBREQUEST lsb: 0  msb: 0 OUTPUT
		NetFlow* PPCMPLBRNW; // net ID: PPCMPLBRNW lsb: 0  msb: 0 OUTPUT
		NetFlow* PPCMPLBSIZE; // net ID: PPCMPLBSIZE lsb: 0  msb: 0 OUTPUT
		NetFlow* PPCMPLBTATTRIBUTE; // net ID: PPCMPLBTATTRIBUTE lsb: 0  msb: 0 OUTPUT
		NetFlow* PPCMPLBTYPE; // net ID: PPCMPLBTYPE lsb: 0  msb: 0 OUTPUT
		NetFlow* PPCMPLBUABUS; // net ID: PPCMPLBUABUS lsb: 0  msb: 0 OUTPUT
		NetFlow* PPCMPLBWRBURST; // net ID: PPCMPLBWRBURST lsb: 0  msb: 0 OUTPUT
		NetFlow* PPCMPLBWRDBUS; // net ID: PPCMPLBWRDBUS lsb: 0  msb: 0 OUTPUT
		NetFlow* PPCS0PLBADDRACK; // net ID: PPCS0PLBADDRACK lsb: 0  msb: 0 OUTPUT
		NetFlow* PPCS0PLBMBUSY; // net ID: PPCS0PLBMBUSY lsb: 0  msb: 0 OUTPUT
		NetFlow* PPCS0PLBMIRQ; // net ID: PPCS0PLBMIRQ lsb: 0  msb: 0 OUTPUT
		NetFlow* PPCS0PLBMRDERR; // net ID: PPCS0PLBMRDERR lsb: 0  msb: 0 OUTPUT
		NetFlow* PPCS0PLBMWRERR; // net ID: PPCS0PLBMWRERR lsb: 0  msb: 0 OUTPUT
		NetFlow* PPCS0PLBRDBTERM; // net ID: PPCS0PLBRDBTERM lsb: 0  msb: 0 OUTPUT
		NetFlow* PPCS0PLBRDCOMP; // net ID: PPCS0PLBRDCOMP lsb: 0  msb: 0 OUTPUT
		NetFlow* PPCS0PLBRDDACK; // net ID: PPCS0PLBRDDACK lsb: 0  msb: 0 OUTPUT
		NetFlow* PPCS0PLBRDDBUS; // net ID: PPCS0PLBRDDBUS lsb: 0  msb: 0 OUTPUT
		NetFlow* PPCS0PLBRDWDADDR; // net ID: PPCS0PLBRDWDADDR lsb: 0  msb: 0 OUTPUT
		NetFlow* PPCS0PLBREARBITRATE; // net ID: PPCS0PLBREARBITRATE lsb: 0  msb: 0 OUTPUT
		NetFlow* PPCS0PLBSSIZE; // net ID: PPCS0PLBSSIZE lsb: 0  msb: 0 OUTPUT
		NetFlow* PPCS0PLBWAIT; // net ID: PPCS0PLBWAIT lsb: 0  msb: 0 OUTPUT
		NetFlow* PPCS0PLBWRBTERM; // net ID: PPCS0PLBWRBTERM lsb: 0  msb: 0 OUTPUT
		NetFlow* PPCS0PLBWRCOMP; // net ID: PPCS0PLBWRCOMP lsb: 0  msb: 0 OUTPUT
		NetFlow* PPCS0PLBWRDACK; // net ID: PPCS0PLBWRDACK lsb: 0  msb: 0 OUTPUT
		NetFlow* PPCS1PLBADDRACK; // net ID: PPCS1PLBADDRACK lsb: 0  msb: 0 OUTPUT
		NetFlow* PPCS1PLBMBUSY; // net ID: PPCS1PLBMBUSY lsb: 0  msb: 0 OUTPUT
		NetFlow* PPCS1PLBMIRQ; // net ID: PPCS1PLBMIRQ lsb: 0  msb: 0 OUTPUT
		NetFlow* PPCS1PLBMRDERR; // net ID: PPCS1PLBMRDERR lsb: 0  msb: 0 OUTPUT
		NetFlow* PPCS1PLBMWRERR; // net ID: PPCS1PLBMWRERR lsb: 0  msb: 0 OUTPUT
		NetFlow* PPCS1PLBRDBTERM; // net ID: PPCS1PLBRDBTERM lsb: 0  msb: 0 OUTPUT
		NetFlow* PPCS1PLBRDCOMP; // net ID: PPCS1PLBRDCOMP lsb: 0  msb: 0 OUTPUT
		NetFlow* PPCS1PLBRDDACK; // net ID: PPCS1PLBRDDACK lsb: 0  msb: 0 OUTPUT
		NetFlow* PPCS1PLBRDDBUS; // net ID: PPCS1PLBRDDBUS lsb: 0  msb: 0 OUTPUT
		NetFlow* PPCS1PLBRDWDADDR; // net ID: PPCS1PLBRDWDADDR lsb: 0  msb: 0 OUTPUT
		NetFlow* PPCS1PLBREARBITRATE; // net ID: PPCS1PLBREARBITRATE lsb: 0  msb: 0 OUTPUT
		NetFlow* PPCS1PLBSSIZE; // net ID: PPCS1PLBSSIZE lsb: 0  msb: 0 OUTPUT
		NetFlow* PPCS1PLBWAIT; // net ID: PPCS1PLBWAIT lsb: 0  msb: 0 OUTPUT
		NetFlow* PPCS1PLBWRBTERM; // net ID: PPCS1PLBWRBTERM lsb: 0  msb: 0 OUTPUT
		NetFlow* PPCS1PLBWRCOMP; // net ID: PPCS1PLBWRCOMP lsb: 0  msb: 0 OUTPUT
		NetFlow* PPCS1PLBWRDACK; // net ID: PPCS1PLBWRDACK lsb: 0  msb: 0 OUTPUT
		NetFlow* CPMC440CLK; // net ID: CPMC440CLK lsb: 0  msb: 0 INPUT
		NetFlow* CPMC440CLKEN; // net ID: CPMC440CLKEN lsb: 0  msb: 0 INPUT
		NetFlow* CPMC440CORECLOCKINACTIVE; // net ID: CPMC440CORECLOCKINACTIVE lsb: 0  msb: 0 INPUT
		NetFlow* CPMC440TIMERCLOCK; // net ID: CPMC440TIMERCLOCK lsb: 0  msb: 0 INPUT
		NetFlow* CPMDCRCLK; // net ID: CPMDCRCLK lsb: 0  msb: 0 INPUT
		NetFlow* CPMDMA0LLCLK; // net ID: CPMDMA0LLCLK lsb: 0  msb: 0 INPUT
		NetFlow* CPMDMA1LLCLK; // net ID: CPMDMA1LLCLK lsb: 0  msb: 0 INPUT
		NetFlow* CPMDMA2LLCLK; // net ID: CPMDMA2LLCLK lsb: 0  msb: 0 INPUT
		NetFlow* CPMDMA3LLCLK; // net ID: CPMDMA3LLCLK lsb: 0  msb: 0 INPUT
		NetFlow* CPMFCMCLK; // net ID: CPMFCMCLK lsb: 0  msb: 0 INPUT
		NetFlow* CPMINTERCONNECTCLK; // net ID: CPMINTERCONNECTCLK lsb: 0  msb: 0 INPUT
		NetFlow* CPMINTERCONNECTCLKEN; // net ID: CPMINTERCONNECTCLKEN lsb: 0  msb: 0 INPUT
		NetFlow* CPMINTERCONNECTCLKNTO1; // net ID: CPMINTERCONNECTCLKNTO1 lsb: 0  msb: 0 INPUT
		NetFlow* CPMMCCLK; // net ID: CPMMCCLK lsb: 0  msb: 0 INPUT
		NetFlow* CPMPPCMPLBCLK; // net ID: CPMPPCMPLBCLK lsb: 0  msb: 0 INPUT
		NetFlow* CPMPPCS0PLBCLK; // net ID: CPMPPCS0PLBCLK lsb: 0  msb: 0 INPUT
		NetFlow* CPMPPCS1PLBCLK; // net ID: CPMPPCS1PLBCLK lsb: 0  msb: 0 INPUT
		NetFlow* DBGC440DEBUGHALT; // net ID: DBGC440DEBUGHALT lsb: 0  msb: 0 INPUT
		NetFlow* DBGC440SYSTEMSTATUS; // net ID: DBGC440SYSTEMSTATUS lsb: 4  msb: 0 INPUT
		NetFlow* DBGC440UNCONDDEBUGEVENT; // net ID: DBGC440UNCONDDEBUGEVENT lsb: 0  msb: 0 INPUT
		NetFlow* DCRPPCDMACK; // net ID: DCRPPCDMACK lsb: 0  msb: 0 INPUT
		NetFlow* DCRPPCDMDBUSIN; // net ID: DCRPPCDMDBUSIN lsb: 31  msb: 0 INPUT
		NetFlow* DCRPPCDMTIMEOUTWAIT; // net ID: DCRPPCDMTIMEOUTWAIT lsb: 0  msb: 0 INPUT
		NetFlow* DCRPPCDSABUS; // net ID: DCRPPCDSABUS lsb: 9  msb: 0 INPUT
		NetFlow* DCRPPCDSDBUSOUT; // net ID: DCRPPCDSDBUSOUT lsb: 31  msb: 0 INPUT
		NetFlow* DCRPPCDSREAD; // net ID: DCRPPCDSREAD lsb: 0  msb: 0 INPUT
		NetFlow* DCRPPCDSWRITE; // net ID: DCRPPCDSWRITE lsb: 0  msb: 0 INPUT
		NetFlow* EICC440CRITIRQ; // net ID: EICC440CRITIRQ lsb: 0  msb: 0 INPUT
		NetFlow* EICC440EXTIRQ; // net ID: EICC440EXTIRQ lsb: 0  msb: 0 INPUT
		NetFlow* FCMAPUCONFIRMINSTR; // net ID: FCMAPUCONFIRMINSTR lsb: 0  msb: 0 INPUT
		NetFlow* FCMAPUCR; // net ID: FCMAPUCR lsb: 3  msb: 0 INPUT
		NetFlow* FCMAPUDONE; // net ID: FCMAPUDONE lsb: 0  msb: 0 INPUT
		NetFlow* FCMAPUEXCEPTION; // net ID: FCMAPUEXCEPTION lsb: 0  msb: 0 INPUT
		NetFlow* FCMAPUFPSCRFEX; // net ID: FCMAPUFPSCRFEX lsb: 0  msb: 0 INPUT
		NetFlow* FCMAPURESULT; // net ID: FCMAPURESULT lsb: 31  msb: 0 INPUT
		NetFlow* FCMAPURESULTVALID; // net ID: FCMAPURESULTVALID lsb: 0  msb: 0 INPUT
		NetFlow* FCMAPUSLEEPNOTREADY; // net ID: FCMAPUSLEEPNOTREADY lsb: 0  msb: 0 INPUT
		NetFlow* FCMAPUSTOREDATA; // net ID: FCMAPUSTOREDATA lsb: 127  msb: 0 INPUT
		NetFlow* JTGC440TCK; // net ID: JTGC440TCK lsb: 0  msb: 0 INPUT
		NetFlow* JTGC440TDI; // net ID: JTGC440TDI lsb: 0  msb: 0 INPUT
		NetFlow* JTGC440TMS; // net ID: JTGC440TMS lsb: 0  msb: 0 INPUT
		NetFlow* JTGC440TRSTNEG; // net ID: JTGC440TRSTNEG lsb: 0  msb: 0 INPUT
		NetFlow* LLDMA0RSTENGINEREQ; // net ID: LLDMA0RSTENGINEREQ lsb: 0  msb: 0 INPUT
		NetFlow* LLDMA0RXD; // net ID: LLDMA0RXD lsb: 31  msb: 0 INPUT
		NetFlow* LLDMA0RXEOFN; // net ID: LLDMA0RXEOFN lsb: 0  msb: 0 INPUT
		NetFlow* LLDMA0RXEOPN; // net ID: LLDMA0RXEOPN lsb: 0  msb: 0 INPUT
		NetFlow* LLDMA0RXREM; // net ID: LLDMA0RXREM lsb: 3  msb: 0 INPUT
		NetFlow* LLDMA0RXSOFN; // net ID: LLDMA0RXSOFN lsb: 0  msb: 0 INPUT
		NetFlow* LLDMA0RXSOPN; // net ID: LLDMA0RXSOPN lsb: 0  msb: 0 INPUT
		NetFlow* LLDMA0RXSRCRDYN; // net ID: LLDMA0RXSRCRDYN lsb: 0  msb: 0 INPUT
		NetFlow* LLDMA0TXDSTRDYN; // net ID: LLDMA0TXDSTRDYN lsb: 0  msb: 0 INPUT
		NetFlow* LLDMA1RSTENGINEREQ; // net ID: LLDMA1RSTENGINEREQ lsb: 0  msb: 0 INPUT
		NetFlow* LLDMA1RXD; // net ID: LLDMA1RXD lsb: 31  msb: 0 INPUT
		NetFlow* LLDMA1RXEOFN; // net ID: LLDMA1RXEOFN lsb: 0  msb: 0 INPUT
		NetFlow* LLDMA1RXEOPN; // net ID: LLDMA1RXEOPN lsb: 0  msb: 0 INPUT
		NetFlow* LLDMA1RXREM; // net ID: LLDMA1RXREM lsb: 3  msb: 0 INPUT
		NetFlow* LLDMA1RXSOFN; // net ID: LLDMA1RXSOFN lsb: 0  msb: 0 INPUT
		NetFlow* LLDMA1RXSOPN; // net ID: LLDMA1RXSOPN lsb: 0  msb: 0 INPUT
		NetFlow* LLDMA1RXSRCRDYN; // net ID: LLDMA1RXSRCRDYN lsb: 0  msb: 0 INPUT
		NetFlow* LLDMA1TXDSTRDYN; // net ID: LLDMA1TXDSTRDYN lsb: 0  msb: 0 INPUT
		NetFlow* LLDMA2RSTENGINEREQ; // net ID: LLDMA2RSTENGINEREQ lsb: 0  msb: 0 INPUT
		NetFlow* LLDMA2RXD; // net ID: LLDMA2RXD lsb: 31  msb: 0 INPUT
		NetFlow* LLDMA2RXEOFN; // net ID: LLDMA2RXEOFN lsb: 0  msb: 0 INPUT
		NetFlow* LLDMA2RXEOPN; // net ID: LLDMA2RXEOPN lsb: 0  msb: 0 INPUT
		NetFlow* LLDMA2RXREM; // net ID: LLDMA2RXREM lsb: 3  msb: 0 INPUT
		NetFlow* LLDMA2RXSOFN; // net ID: LLDMA2RXSOFN lsb: 0  msb: 0 INPUT
		NetFlow* LLDMA2RXSOPN; // net ID: LLDMA2RXSOPN lsb: 0  msb: 0 INPUT
		NetFlow* LLDMA2RXSRCRDYN; // net ID: LLDMA2RXSRCRDYN lsb: 0  msb: 0 INPUT
		NetFlow* LLDMA2TXDSTRDYN; // net ID: LLDMA2TXDSTRDYN lsb: 0  msb: 0 INPUT
		NetFlow* LLDMA3RSTENGINEREQ; // net ID: LLDMA3RSTENGINEREQ lsb: 0  msb: 0 INPUT
		NetFlow* LLDMA3RXD; // net ID: LLDMA3RXD lsb: 31  msb: 0 INPUT
		NetFlow* LLDMA3RXEOFN; // net ID: LLDMA3RXEOFN lsb: 0  msb: 0 INPUT
		NetFlow* LLDMA3RXEOPN; // net ID: LLDMA3RXEOPN lsb: 0  msb: 0 INPUT
		NetFlow* LLDMA3RXREM; // net ID: LLDMA3RXREM lsb: 3  msb: 0 INPUT
		NetFlow* LLDMA3RXSOFN; // net ID: LLDMA3RXSOFN lsb: 0  msb: 0 INPUT
		NetFlow* LLDMA3RXSOPN; // net ID: LLDMA3RXSOPN lsb: 0  msb: 0 INPUT
		NetFlow* LLDMA3RXSRCRDYN; // net ID: LLDMA3RXSRCRDYN lsb: 0  msb: 0 INPUT
		NetFlow* LLDMA3TXDSTRDYN; // net ID: LLDMA3TXDSTRDYN lsb: 0  msb: 0 INPUT
		NetFlow* MCMIADDRREADYTOACCEPT; // net ID: MCMIADDRREADYTOACCEPT lsb: 0  msb: 0 INPUT
		NetFlow* MCMIREADDATA; // net ID: MCMIREADDATA lsb: 127  msb: 0 INPUT
		NetFlow* MCMIREADDATAERR; // net ID: MCMIREADDATAERR lsb: 0  msb: 0 INPUT
		NetFlow* MCMIREADDATAVALID; // net ID: MCMIREADDATAVALID lsb: 0  msb: 0 INPUT
		NetFlow* PLBPPCMADDRACK; // net ID: PLBPPCMADDRACK lsb: 0  msb: 0 INPUT
		NetFlow* PLBPPCMMBUSY; // net ID: PLBPPCMMBUSY lsb: 0  msb: 0 INPUT
		NetFlow* PLBPPCMMIRQ; // net ID: PLBPPCMMIRQ lsb: 0  msb: 0 INPUT
		NetFlow* PLBPPCMMRDERR; // net ID: PLBPPCMMRDERR lsb: 0  msb: 0 INPUT
		NetFlow* PLBPPCMMWRERR; // net ID: PLBPPCMMWRERR lsb: 0  msb: 0 INPUT
		NetFlow* PLBPPCMRDBTERM; // net ID: PLBPPCMRDBTERM lsb: 0  msb: 0 INPUT
		NetFlow* PLBPPCMRDDACK; // net ID: PLBPPCMRDDACK lsb: 0  msb: 0 INPUT
		NetFlow* PLBPPCMRDDBUS; // net ID: PLBPPCMRDDBUS lsb: 127  msb: 0 INPUT
		NetFlow* PLBPPCMRDPENDPRI; // net ID: PLBPPCMRDPENDPRI lsb: 1  msb: 0 INPUT
		NetFlow* PLBPPCMRDPENDREQ; // net ID: PLBPPCMRDPENDREQ lsb: 0  msb: 0 INPUT
		NetFlow* PLBPPCMRDWDADDR; // net ID: PLBPPCMRDWDADDR lsb: 3  msb: 0 INPUT
		NetFlow* PLBPPCMREARBITRATE; // net ID: PLBPPCMREARBITRATE lsb: 0  msb: 0 INPUT
		NetFlow* PLBPPCMREQPRI; // net ID: PLBPPCMREQPRI lsb: 1  msb: 0 INPUT
		NetFlow* PLBPPCMSSIZE; // net ID: PLBPPCMSSIZE lsb: 1  msb: 0 INPUT
		NetFlow* PLBPPCMTIMEOUT; // net ID: PLBPPCMTIMEOUT lsb: 0  msb: 0 INPUT
		NetFlow* PLBPPCMWRBTERM; // net ID: PLBPPCMWRBTERM lsb: 0  msb: 0 INPUT
		NetFlow* PLBPPCMWRDACK; // net ID: PLBPPCMWRDACK lsb: 0  msb: 0 INPUT
		NetFlow* PLBPPCMWRPENDPRI; // net ID: PLBPPCMWRPENDPRI lsb: 1  msb: 0 INPUT
		NetFlow* PLBPPCMWRPENDREQ; // net ID: PLBPPCMWRPENDREQ lsb: 0  msb: 0 INPUT
		NetFlow* PLBPPCS0ABORT; // net ID: PLBPPCS0ABORT lsb: 0  msb: 0 INPUT
		NetFlow* PLBPPCS0ABUS; // net ID: PLBPPCS0ABUS lsb: 31  msb: 0 INPUT
		NetFlow* PLBPPCS0BE; // net ID: PLBPPCS0BE lsb: 15  msb: 0 INPUT
		NetFlow* PLBPPCS0BUSLOCK; // net ID: PLBPPCS0BUSLOCK lsb: 0  msb: 0 INPUT
		NetFlow* PLBPPCS0LOCKERR; // net ID: PLBPPCS0LOCKERR lsb: 0  msb: 0 INPUT
		NetFlow* PLBPPCS0MASTERID; // net ID: PLBPPCS0MASTERID lsb: 1  msb: 0 INPUT
		NetFlow* PLBPPCS0MSIZE; // net ID: PLBPPCS0MSIZE lsb: 1  msb: 0 INPUT
		NetFlow* PLBPPCS0PAVALID; // net ID: PLBPPCS0PAVALID lsb: 0  msb: 0 INPUT
		NetFlow* PLBPPCS0RDBURST; // net ID: PLBPPCS0RDBURST lsb: 0  msb: 0 INPUT
		NetFlow* PLBPPCS0RDPENDPRI; // net ID: PLBPPCS0RDPENDPRI lsb: 1  msb: 0 INPUT
		NetFlow* PLBPPCS0RDPENDREQ; // net ID: PLBPPCS0RDPENDREQ lsb: 0  msb: 0 INPUT
		NetFlow* PLBPPCS0RDPRIM; // net ID: PLBPPCS0RDPRIM lsb: 0  msb: 0 INPUT
		NetFlow* PLBPPCS0REQPRI; // net ID: PLBPPCS0REQPRI lsb: 1  msb: 0 INPUT
		NetFlow* PLBPPCS0RNW; // net ID: PLBPPCS0RNW lsb: 0  msb: 0 INPUT
		NetFlow* PLBPPCS0SAVALID; // net ID: PLBPPCS0SAVALID lsb: 0  msb: 0 INPUT
		NetFlow* PLBPPCS0SIZE; // net ID: PLBPPCS0SIZE lsb: 3  msb: 0 INPUT
		NetFlow* PLBPPCS0TATTRIBUTE; // net ID: PLBPPCS0TATTRIBUTE lsb: 15  msb: 0 INPUT
		NetFlow* PLBPPCS0TYPE; // net ID: PLBPPCS0TYPE lsb: 2  msb: 0 INPUT
		NetFlow* PLBPPCS0UABUS; // net ID: PLBPPCS0UABUS lsb: 31  msb: 28 INPUT
		NetFlow* PLBPPCS0WRBURST; // net ID: PLBPPCS0WRBURST lsb: 0  msb: 0 INPUT
		NetFlow* PLBPPCS0WRDBUS; // net ID: PLBPPCS0WRDBUS lsb: 127  msb: 0 INPUT
		NetFlow* PLBPPCS0WRPENDPRI; // net ID: PLBPPCS0WRPENDPRI lsb: 1  msb: 0 INPUT
		NetFlow* PLBPPCS0WRPENDREQ; // net ID: PLBPPCS0WRPENDREQ lsb: 0  msb: 0 INPUT
		NetFlow* PLBPPCS0WRPRIM; // net ID: PLBPPCS0WRPRIM lsb: 0  msb: 0 INPUT
		NetFlow* PLBPPCS1ABORT; // net ID: PLBPPCS1ABORT lsb: 0  msb: 0 INPUT
		NetFlow* PLBPPCS1ABUS; // net ID: PLBPPCS1ABUS lsb: 31  msb: 0 INPUT
		NetFlow* PLBPPCS1BE; // net ID: PLBPPCS1BE lsb: 15  msb: 0 INPUT
		NetFlow* PLBPPCS1BUSLOCK; // net ID: PLBPPCS1BUSLOCK lsb: 0  msb: 0 INPUT
		NetFlow* PLBPPCS1LOCKERR; // net ID: PLBPPCS1LOCKERR lsb: 0  msb: 0 INPUT
		NetFlow* PLBPPCS1MASTERID; // net ID: PLBPPCS1MASTERID lsb: 1  msb: 0 INPUT
		NetFlow* PLBPPCS1MSIZE; // net ID: PLBPPCS1MSIZE lsb: 1  msb: 0 INPUT
		NetFlow* PLBPPCS1PAVALID; // net ID: PLBPPCS1PAVALID lsb: 0  msb: 0 INPUT
		NetFlow* PLBPPCS1RDBURST; // net ID: PLBPPCS1RDBURST lsb: 0  msb: 0 INPUT
		NetFlow* PLBPPCS1RDPENDPRI; // net ID: PLBPPCS1RDPENDPRI lsb: 1  msb: 0 INPUT
		NetFlow* PLBPPCS1RDPENDREQ; // net ID: PLBPPCS1RDPENDREQ lsb: 0  msb: 0 INPUT
		NetFlow* PLBPPCS1RDPRIM; // net ID: PLBPPCS1RDPRIM lsb: 0  msb: 0 INPUT
		NetFlow* PLBPPCS1REQPRI; // net ID: PLBPPCS1REQPRI lsb: 1  msb: 0 INPUT
		NetFlow* PLBPPCS1RNW; // net ID: PLBPPCS1RNW lsb: 0  msb: 0 INPUT
		NetFlow* PLBPPCS1SAVALID; // net ID: PLBPPCS1SAVALID lsb: 0  msb: 0 INPUT
		NetFlow* PLBPPCS1SIZE; // net ID: PLBPPCS1SIZE lsb: 3  msb: 0 INPUT
		NetFlow* PLBPPCS1TATTRIBUTE; // net ID: PLBPPCS1TATTRIBUTE lsb: 15  msb: 0 INPUT
		NetFlow* PLBPPCS1TYPE; // net ID: PLBPPCS1TYPE lsb: 2  msb: 0 INPUT
		NetFlow* PLBPPCS1UABUS; // net ID: PLBPPCS1UABUS lsb: 31  msb: 28 INPUT
		NetFlow* PLBPPCS1WRBURST; // net ID: PLBPPCS1WRBURST lsb: 0  msb: 0 INPUT
		NetFlow* PLBPPCS1WRDBUS; // net ID: PLBPPCS1WRDBUS lsb: 127  msb: 0 INPUT
		NetFlow* PLBPPCS1WRPENDPRI; // net ID: PLBPPCS1WRPENDPRI lsb: 1  msb: 0 INPUT
		NetFlow* PLBPPCS1WRPENDREQ; // net ID: PLBPPCS1WRPENDREQ lsb: 0  msb: 0 INPUT
		NetFlow* PLBPPCS1WRPRIM; // net ID: PLBPPCS1WRPRIM lsb: 0  msb: 0 INPUT
		NetFlow* RSTC440RESETCHIP; // net ID: RSTC440RESETCHIP lsb: 0  msb: 0 INPUT
		NetFlow* RSTC440RESETCORE; // net ID: RSTC440RESETCORE lsb: 0  msb: 0 INPUT
		NetFlow* RSTC440RESETSYSTEM; // net ID: RSTC440RESETSYSTEM lsb: 0  msb: 0 INPUT
		NetFlow* TIEC440DCURDLDCACHEPLBPRIO; // net ID: TIEC440DCURDLDCACHEPLBPRIO lsb: 1  msb: 0 INPUT
		NetFlow* TIEC440DCURDNONCACHEPLBPRIO; // net ID: TIEC440DCURDNONCACHEPLBPRIO lsb: 1  msb: 0 INPUT
		NetFlow* TIEC440DCURDTOUCHPLBPRIO; // net ID: TIEC440DCURDTOUCHPLBPRIO lsb: 1  msb: 0 INPUT
		NetFlow* TIEC440DCURDURGENTPLBPRIO; // net ID: TIEC440DCURDURGENTPLBPRIO lsb: 1  msb: 0 INPUT
		NetFlow* TIEC440DCUWRFLUSHPLBPRIO; // net ID: TIEC440DCUWRFLUSHPLBPRIO lsb: 1  msb: 0 INPUT
		NetFlow* TIEC440DCUWRSTOREPLBPRIO; // net ID: TIEC440DCUWRSTOREPLBPRIO lsb: 1  msb: 0 INPUT
		NetFlow* TIEC440DCUWRURGENTPLBPRIO; // net ID: TIEC440DCUWRURGENTPLBPRIO lsb: 1  msb: 0 INPUT
		NetFlow* TIEC440ENDIANRESET; // net ID: TIEC440ENDIANRESET lsb: 0  msb: 0 INPUT
		NetFlow* TIEC440ERPNRESET; // net ID: TIEC440ERPNRESET lsb: 3  msb: 0 INPUT
		NetFlow* TIEC440ICURDFETCHPLBPRIO; // net ID: TIEC440ICURDFETCHPLBPRIO lsb: 1  msb: 0 INPUT
		NetFlow* TIEC440ICURDSPECPLBPRIO; // net ID: TIEC440ICURDSPECPLBPRIO lsb: 1  msb: 0 INPUT
		NetFlow* TIEC440ICURDTOUCHPLBPRIO; // net ID: TIEC440ICURDTOUCHPLBPRIO lsb: 1  msb: 0 INPUT
		NetFlow* TIEC440PIR; // net ID: TIEC440PIR lsb: 31  msb: 28 INPUT
		NetFlow* TIEC440PVR; // net ID: TIEC440PVR lsb: 31  msb: 28 INPUT
		NetFlow* TIEC440USERRESET; // net ID: TIEC440USERRESET lsb: 3  msb: 0 INPUT
		NetFlow* TIEDCRBASEADDR; // net ID: TIEDCRBASEADDR lsb: 1  msb: 0 INPUT
		NetFlow* TRCC440TRACEDISABLE; // net ID: TRCC440TRACEDISABLE lsb: 0  msb: 0 INPUT
		NetFlow* TRCC440TRIGGEREVENTIN; // net ID: TRCC440TRIGGEREVENTIN lsb: 0  msb: 0 INPUT
		
		X_PPC440(
			const char * name,
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_enum_t CLOCK_DELAY, // Default: "FALSE"
			parameter_enum_t DCR_AUTOLOCK_ENABLE, // Default: "TRUE"
			parameter_enum_t PPCDM_ASYNCMODE, // Default: "FALSE"
			parameter_enum_t PPCDS_ASYNCMODE, // Default: "FALSE"
			parameter_enum_t PPCS0_WIDTH_128N64, // Default: "TRUE"
			parameter_enum_t PPCS1_WIDTH_128N64, // Default: "TRUE"
			parameter_string_t APU_CONTROL, // Default: 17'h02000
			parameter_string_t APU_UDI0, // Default: 24'h000000
			parameter_string_t APU_UDI1, // Default: 24'h000000
			parameter_string_t APU_UDI10, // Default: 24'h000000
			parameter_string_t APU_UDI11, // Default: 24'h000000
			parameter_string_t APU_UDI12, // Default: 24'h000000
			parameter_string_t APU_UDI13, // Default: 24'h000000
			parameter_string_t APU_UDI14, // Default: 24'h000000
			parameter_string_t APU_UDI15, // Default: 24'h000000
			parameter_string_t APU_UDI2, // Default: 24'h000000
			parameter_string_t APU_UDI3, // Default: 24'h000000
			parameter_string_t APU_UDI4, // Default: 24'h000000
			parameter_string_t APU_UDI5, // Default: 24'h000000
			parameter_string_t APU_UDI6, // Default: 24'h000000
			parameter_string_t APU_UDI7, // Default: 24'h000000
			parameter_string_t APU_UDI8, // Default: 24'h000000
			parameter_string_t APU_UDI9, // Default: 24'h000000
			parameter_string_t DMA0_RXCHANNELCTRL, // Default: 32'h01010000
			parameter_string_t DMA0_TXCHANNELCTRL, // Default: 32'h01010000
			parameter_string_t DMA1_RXCHANNELCTRL, // Default: 32'h01010000
			parameter_string_t DMA1_TXCHANNELCTRL, // Default: 32'h01010000
			parameter_string_t DMA2_RXCHANNELCTRL, // Default: 32'h01010000
			parameter_string_t DMA2_TXCHANNELCTRL, // Default: 32'h01010000
			parameter_string_t DMA3_RXCHANNELCTRL, // Default: 32'h01010000
			parameter_string_t DMA3_TXCHANNELCTRL, // Default: 32'h01010000
			parameter_string_t INTERCONNECT_IMASK, // Default: 32'hFFFFFFFF
			parameter_string_t INTERCONNECT_TMPL_SEL, // Default: 32'h3FFFFFFF
			parameter_string_t MI_ARBCONFIG, // Default: 32'h00432010
			parameter_string_t MI_BANKCONFLICT_MASK, // Default: 32'h00000000
			parameter_string_t MI_CONTROL, // Default: 32'h0000008F
			parameter_string_t MI_ROWCONFLICT_MASK, // Default: 32'h00000000
			parameter_string_t PPCM_ARBCONFIG, // Default: 32'h00432010
			parameter_string_t PPCM_CONTROL, // Default: 32'h8000009F
			parameter_string_t PPCM_COUNTER, // Default: 32'h00000500
			parameter_string_t PPCS0_ADDRMAP_TMPL0, // Default: 32'hFFFFFFFF
			parameter_string_t PPCS0_ADDRMAP_TMPL1, // Default: 32'hFFFFFFFF
			parameter_string_t PPCS0_ADDRMAP_TMPL2, // Default: 32'hFFFFFFFF
			parameter_string_t PPCS0_ADDRMAP_TMPL3, // Default: 32'hFFFFFFFF
			parameter_string_t PPCS0_CONTROL, // Default: 32'h8033336C
			parameter_string_t PPCS1_ADDRMAP_TMPL0, // Default: 32'hFFFFFFFF
			parameter_string_t PPCS1_ADDRMAP_TMPL1, // Default: 32'hFFFFFFFF
			parameter_string_t PPCS1_ADDRMAP_TMPL2, // Default: 32'hFFFFFFFF
			parameter_string_t PPCS1_ADDRMAP_TMPL3, // Default: 32'hFFFFFFFF
			parameter_string_t PPCS1_CONTROL, // Default: 32'h8033336C
			parameter_string_t XBAR_ADDRMAP_TMPL0, // Default: 32'hFFFF0000
			parameter_string_t XBAR_ADDRMAP_TMPL1, // Default: 32'h00000000
			parameter_string_t XBAR_ADDRMAP_TMPL2, // Default: 32'h00000000
			parameter_string_t XBAR_ADDRMAP_TMPL3, // Default: 32'h00000000
			parameter_string_t DMA0_CONTROL, // Default: 8'h00
			parameter_string_t DMA1_CONTROL, // Default: 8'h00
			parameter_string_t DMA2_CONTROL, // Default: 8'h00
			parameter_string_t DMA3_CONTROL, // Default: 8'h00
			parameter_string_t DMA0_RXIRQTIMER, // Default: 10'h3FF
			parameter_string_t DMA0_TXIRQTIMER, // Default: 10'h3FF
			parameter_string_t DMA1_RXIRQTIMER, // Default: 10'h3FF
			parameter_string_t DMA1_TXIRQTIMER, // Default: 10'h3FF
			parameter_string_t DMA2_RXIRQTIMER, // Default: 10'h3FF
			parameter_string_t DMA2_TXIRQTIMER, // Default: 10'h3FF
			parameter_string_t DMA3_RXIRQTIMER, // Default: 10'h3FF
			parameter_string_t DMA3_TXIRQTIMER, // Default: 10'h3FF
			//Verilog Ports in definition order:
			NetFlow* APUFCMDECFPUOP, // net ID: APUFCMDECFPUOP lsb: 0  msb: 0 OUTPUT
			NetFlow* APUFCMDECLDSTXFERSIZE, // net ID: APUFCMDECLDSTXFERSIZE lsb: 0  msb: 0 OUTPUT
			NetFlow* APUFCMDECLOAD, // net ID: APUFCMDECLOAD lsb: 0  msb: 0 OUTPUT
			NetFlow* APUFCMDECNONAUTON, // net ID: APUFCMDECNONAUTON lsb: 0  msb: 0 OUTPUT
			NetFlow* APUFCMDECSTORE, // net ID: APUFCMDECSTORE lsb: 0  msb: 0 OUTPUT
			NetFlow* APUFCMDECUDI, // net ID: APUFCMDECUDI lsb: 0  msb: 0 OUTPUT
			NetFlow* APUFCMDECUDIVALID, // net ID: APUFCMDECUDIVALID lsb: 0  msb: 0 OUTPUT
			NetFlow* APUFCMENDIAN, // net ID: APUFCMENDIAN lsb: 0  msb: 0 OUTPUT
			NetFlow* APUFCMFLUSH, // net ID: APUFCMFLUSH lsb: 0  msb: 0 OUTPUT
			NetFlow* APUFCMINSTRUCTION, // net ID: APUFCMINSTRUCTION lsb: 0  msb: 0 OUTPUT
			NetFlow* APUFCMINSTRVALID, // net ID: APUFCMINSTRVALID lsb: 0  msb: 0 OUTPUT
			NetFlow* APUFCMLOADBYTEADDR, // net ID: APUFCMLOADBYTEADDR lsb: 0  msb: 0 OUTPUT
			NetFlow* APUFCMLOADDATA, // net ID: APUFCMLOADDATA lsb: 0  msb: 0 OUTPUT
			NetFlow* APUFCMLOADDVALID, // net ID: APUFCMLOADDVALID lsb: 0  msb: 0 OUTPUT
			NetFlow* APUFCMMSRFE0, // net ID: APUFCMMSRFE0 lsb: 0  msb: 0 OUTPUT
			NetFlow* APUFCMMSRFE1, // net ID: APUFCMMSRFE1 lsb: 0  msb: 0 OUTPUT
			NetFlow* APUFCMNEXTINSTRREADY, // net ID: APUFCMNEXTINSTRREADY lsb: 0  msb: 0 OUTPUT
			NetFlow* APUFCMOPERANDVALID, // net ID: APUFCMOPERANDVALID lsb: 0  msb: 0 OUTPUT
			NetFlow* APUFCMRADATA, // net ID: APUFCMRADATA lsb: 0  msb: 0 OUTPUT
			NetFlow* APUFCMRBDATA, // net ID: APUFCMRBDATA lsb: 0  msb: 0 OUTPUT
			NetFlow* APUFCMWRITEBACKOK, // net ID: APUFCMWRITEBACKOK lsb: 0  msb: 0 OUTPUT
			NetFlow* C440CPMCORESLEEPREQ, // net ID: C440CPMCORESLEEPREQ lsb: 0  msb: 0 OUTPUT
			NetFlow* C440CPMDECIRPTREQ, // net ID: C440CPMDECIRPTREQ lsb: 0  msb: 0 OUTPUT
			NetFlow* C440CPMFITIRPTREQ, // net ID: C440CPMFITIRPTREQ lsb: 0  msb: 0 OUTPUT
			NetFlow* C440CPMMSRCE, // net ID: C440CPMMSRCE lsb: 0  msb: 0 OUTPUT
			NetFlow* C440CPMMSREE, // net ID: C440CPMMSREE lsb: 0  msb: 0 OUTPUT
			NetFlow* C440CPMTIMERRESETREQ, // net ID: C440CPMTIMERRESETREQ lsb: 0  msb: 0 OUTPUT
			NetFlow* C440CPMWDIRPTREQ, // net ID: C440CPMWDIRPTREQ lsb: 0  msb: 0 OUTPUT
			NetFlow* C440DBGSYSTEMCONTROL, // net ID: C440DBGSYSTEMCONTROL lsb: 0  msb: 0 OUTPUT
			NetFlow* C440JTGTDO, // net ID: C440JTGTDO lsb: 0  msb: 0 OUTPUT
			NetFlow* C440JTGTDOEN, // net ID: C440JTGTDOEN lsb: 0  msb: 0 OUTPUT
			NetFlow* C440MACHINECHECK, // net ID: C440MACHINECHECK lsb: 0  msb: 0 OUTPUT
			NetFlow* C440RSTCHIPRESETREQ, // net ID: C440RSTCHIPRESETREQ lsb: 0  msb: 0 OUTPUT
			NetFlow* C440RSTCORERESETREQ, // net ID: C440RSTCORERESETREQ lsb: 0  msb: 0 OUTPUT
			NetFlow* C440RSTSYSTEMRESETREQ, // net ID: C440RSTSYSTEMRESETREQ lsb: 0  msb: 0 OUTPUT
			NetFlow* C440TRCBRANCHSTATUS, // net ID: C440TRCBRANCHSTATUS lsb: 0  msb: 0 OUTPUT
			NetFlow* C440TRCCYCLE, // net ID: C440TRCCYCLE lsb: 0  msb: 0 OUTPUT
			NetFlow* C440TRCEXECUTIONSTATUS, // net ID: C440TRCEXECUTIONSTATUS lsb: 0  msb: 0 OUTPUT
			NetFlow* C440TRCTRACESTATUS, // net ID: C440TRCTRACESTATUS lsb: 0  msb: 0 OUTPUT
			NetFlow* C440TRCTRIGGEREVENTOUT, // net ID: C440TRCTRIGGEREVENTOUT lsb: 0  msb: 0 OUTPUT
			NetFlow* C440TRCTRIGGEREVENTTYPE, // net ID: C440TRCTRIGGEREVENTTYPE lsb: 0  msb: 0 OUTPUT
			NetFlow* DMA0LLRSTENGINEACK, // net ID: DMA0LLRSTENGINEACK lsb: 0  msb: 0 OUTPUT
			NetFlow* DMA0LLRXDSTRDYN, // net ID: DMA0LLRXDSTRDYN lsb: 0  msb: 0 OUTPUT
			NetFlow* DMA0LLTXD, // net ID: DMA0LLTXD lsb: 0  msb: 0 OUTPUT
			NetFlow* DMA0LLTXEOFN, // net ID: DMA0LLTXEOFN lsb: 0  msb: 0 OUTPUT
			NetFlow* DMA0LLTXEOPN, // net ID: DMA0LLTXEOPN lsb: 0  msb: 0 OUTPUT
			NetFlow* DMA0LLTXREM, // net ID: DMA0LLTXREM lsb: 0  msb: 0 OUTPUT
			NetFlow* DMA0LLTXSOFN, // net ID: DMA0LLTXSOFN lsb: 0  msb: 0 OUTPUT
			NetFlow* DMA0LLTXSOPN, // net ID: DMA0LLTXSOPN lsb: 0  msb: 0 OUTPUT
			NetFlow* DMA0LLTXSRCRDYN, // net ID: DMA0LLTXSRCRDYN lsb: 0  msb: 0 OUTPUT
			NetFlow* DMA0RXIRQ, // net ID: DMA0RXIRQ lsb: 0  msb: 0 OUTPUT
			NetFlow* DMA0TXIRQ, // net ID: DMA0TXIRQ lsb: 0  msb: 0 OUTPUT
			NetFlow* DMA1LLRSTENGINEACK, // net ID: DMA1LLRSTENGINEACK lsb: 0  msb: 0 OUTPUT
			NetFlow* DMA1LLRXDSTRDYN, // net ID: DMA1LLRXDSTRDYN lsb: 0  msb: 0 OUTPUT
			NetFlow* DMA1LLTXD, // net ID: DMA1LLTXD lsb: 0  msb: 0 OUTPUT
			NetFlow* DMA1LLTXEOFN, // net ID: DMA1LLTXEOFN lsb: 0  msb: 0 OUTPUT
			NetFlow* DMA1LLTXEOPN, // net ID: DMA1LLTXEOPN lsb: 0  msb: 0 OUTPUT
			NetFlow* DMA1LLTXREM, // net ID: DMA1LLTXREM lsb: 0  msb: 0 OUTPUT
			NetFlow* DMA1LLTXSOFN, // net ID: DMA1LLTXSOFN lsb: 0  msb: 0 OUTPUT
			NetFlow* DMA1LLTXSOPN, // net ID: DMA1LLTXSOPN lsb: 0  msb: 0 OUTPUT
			NetFlow* DMA1LLTXSRCRDYN, // net ID: DMA1LLTXSRCRDYN lsb: 0  msb: 0 OUTPUT
			NetFlow* DMA1RXIRQ, // net ID: DMA1RXIRQ lsb: 0  msb: 0 OUTPUT
			NetFlow* DMA1TXIRQ, // net ID: DMA1TXIRQ lsb: 0  msb: 0 OUTPUT
			NetFlow* DMA2LLRSTENGINEACK, // net ID: DMA2LLRSTENGINEACK lsb: 0  msb: 0 OUTPUT
			NetFlow* DMA2LLRXDSTRDYN, // net ID: DMA2LLRXDSTRDYN lsb: 0  msb: 0 OUTPUT
			NetFlow* DMA2LLTXD, // net ID: DMA2LLTXD lsb: 0  msb: 0 OUTPUT
			NetFlow* DMA2LLTXEOFN, // net ID: DMA2LLTXEOFN lsb: 0  msb: 0 OUTPUT
			NetFlow* DMA2LLTXEOPN, // net ID: DMA2LLTXEOPN lsb: 0  msb: 0 OUTPUT
			NetFlow* DMA2LLTXREM, // net ID: DMA2LLTXREM lsb: 0  msb: 0 OUTPUT
			NetFlow* DMA2LLTXSOFN, // net ID: DMA2LLTXSOFN lsb: 0  msb: 0 OUTPUT
			NetFlow* DMA2LLTXSOPN, // net ID: DMA2LLTXSOPN lsb: 0  msb: 0 OUTPUT
			NetFlow* DMA2LLTXSRCRDYN, // net ID: DMA2LLTXSRCRDYN lsb: 0  msb: 0 OUTPUT
			NetFlow* DMA2RXIRQ, // net ID: DMA2RXIRQ lsb: 0  msb: 0 OUTPUT
			NetFlow* DMA2TXIRQ, // net ID: DMA2TXIRQ lsb: 0  msb: 0 OUTPUT
			NetFlow* DMA3LLRSTENGINEACK, // net ID: DMA3LLRSTENGINEACK lsb: 0  msb: 0 OUTPUT
			NetFlow* DMA3LLRXDSTRDYN, // net ID: DMA3LLRXDSTRDYN lsb: 0  msb: 0 OUTPUT
			NetFlow* DMA3LLTXD, // net ID: DMA3LLTXD lsb: 0  msb: 0 OUTPUT
			NetFlow* DMA3LLTXEOFN, // net ID: DMA3LLTXEOFN lsb: 0  msb: 0 OUTPUT
			NetFlow* DMA3LLTXEOPN, // net ID: DMA3LLTXEOPN lsb: 0  msb: 0 OUTPUT
			NetFlow* DMA3LLTXREM, // net ID: DMA3LLTXREM lsb: 0  msb: 0 OUTPUT
			NetFlow* DMA3LLTXSOFN, // net ID: DMA3LLTXSOFN lsb: 0  msb: 0 OUTPUT
			NetFlow* DMA3LLTXSOPN, // net ID: DMA3LLTXSOPN lsb: 0  msb: 0 OUTPUT
			NetFlow* DMA3LLTXSRCRDYN, // net ID: DMA3LLTXSRCRDYN lsb: 0  msb: 0 OUTPUT
			NetFlow* DMA3RXIRQ, // net ID: DMA3RXIRQ lsb: 0  msb: 0 OUTPUT
			NetFlow* DMA3TXIRQ, // net ID: DMA3TXIRQ lsb: 0  msb: 0 OUTPUT
			NetFlow* MIMCADDRESS, // net ID: MIMCADDRESS lsb: 0  msb: 0 OUTPUT
			NetFlow* MIMCADDRESSVALID, // net ID: MIMCADDRESSVALID lsb: 0  msb: 0 OUTPUT
			NetFlow* MIMCBANKCONFLICT, // net ID: MIMCBANKCONFLICT lsb: 0  msb: 0 OUTPUT
			NetFlow* MIMCBYTEENABLE, // net ID: MIMCBYTEENABLE lsb: 0  msb: 0 OUTPUT
			NetFlow* MIMCREADNOTWRITE, // net ID: MIMCREADNOTWRITE lsb: 0  msb: 0 OUTPUT
			NetFlow* MIMCROWCONFLICT, // net ID: MIMCROWCONFLICT lsb: 0  msb: 0 OUTPUT
			NetFlow* MIMCWRITEDATA, // net ID: MIMCWRITEDATA lsb: 0  msb: 0 OUTPUT
			NetFlow* MIMCWRITEDATAVALID, // net ID: MIMCWRITEDATAVALID lsb: 0  msb: 0 OUTPUT
			NetFlow* PPCCPMINTERCONNECTBUSY, // net ID: PPCCPMINTERCONNECTBUSY lsb: 0  msb: 0 OUTPUT
			NetFlow* PPCDMDCRABUS, // net ID: PPCDMDCRABUS lsb: 0  msb: 0 OUTPUT
			NetFlow* PPCDMDCRDBUSOUT, // net ID: PPCDMDCRDBUSOUT lsb: 0  msb: 0 OUTPUT
			NetFlow* PPCDMDCRREAD, // net ID: PPCDMDCRREAD lsb: 0  msb: 0 OUTPUT
			NetFlow* PPCDMDCRUABUS, // net ID: PPCDMDCRUABUS lsb: 0  msb: 0 OUTPUT
			NetFlow* PPCDMDCRWRITE, // net ID: PPCDMDCRWRITE lsb: 0  msb: 0 OUTPUT
			NetFlow* PPCDSDCRACK, // net ID: PPCDSDCRACK lsb: 0  msb: 0 OUTPUT
			NetFlow* PPCDSDCRDBUSIN, // net ID: PPCDSDCRDBUSIN lsb: 0  msb: 0 OUTPUT
			NetFlow* PPCDSDCRTIMEOUTWAIT, // net ID: PPCDSDCRTIMEOUTWAIT lsb: 0  msb: 0 OUTPUT
			NetFlow* PPCEICINTERCONNECTIRQ, // net ID: PPCEICINTERCONNECTIRQ lsb: 0  msb: 0 OUTPUT
			NetFlow* PPCMPLBABORT, // net ID: PPCMPLBABORT lsb: 0  msb: 0 OUTPUT
			NetFlow* PPCMPLBABUS, // net ID: PPCMPLBABUS lsb: 0  msb: 0 OUTPUT
			NetFlow* PPCMPLBBE, // net ID: PPCMPLBBE lsb: 0  msb: 0 OUTPUT
			NetFlow* PPCMPLBBUSLOCK, // net ID: PPCMPLBBUSLOCK lsb: 0  msb: 0 OUTPUT
			NetFlow* PPCMPLBLOCKERR, // net ID: PPCMPLBLOCKERR lsb: 0  msb: 0 OUTPUT
			NetFlow* PPCMPLBPRIORITY, // net ID: PPCMPLBPRIORITY lsb: 0  msb: 0 OUTPUT
			NetFlow* PPCMPLBRDBURST, // net ID: PPCMPLBRDBURST lsb: 0  msb: 0 OUTPUT
			NetFlow* PPCMPLBREQUEST, // net ID: PPCMPLBREQUEST lsb: 0  msb: 0 OUTPUT
			NetFlow* PPCMPLBRNW, // net ID: PPCMPLBRNW lsb: 0  msb: 0 OUTPUT
			NetFlow* PPCMPLBSIZE, // net ID: PPCMPLBSIZE lsb: 0  msb: 0 OUTPUT
			NetFlow* PPCMPLBTATTRIBUTE, // net ID: PPCMPLBTATTRIBUTE lsb: 0  msb: 0 OUTPUT
			NetFlow* PPCMPLBTYPE, // net ID: PPCMPLBTYPE lsb: 0  msb: 0 OUTPUT
			NetFlow* PPCMPLBUABUS, // net ID: PPCMPLBUABUS lsb: 0  msb: 0 OUTPUT
			NetFlow* PPCMPLBWRBURST, // net ID: PPCMPLBWRBURST lsb: 0  msb: 0 OUTPUT
			NetFlow* PPCMPLBWRDBUS, // net ID: PPCMPLBWRDBUS lsb: 0  msb: 0 OUTPUT
			NetFlow* PPCS0PLBADDRACK, // net ID: PPCS0PLBADDRACK lsb: 0  msb: 0 OUTPUT
			NetFlow* PPCS0PLBMBUSY, // net ID: PPCS0PLBMBUSY lsb: 0  msb: 0 OUTPUT
			NetFlow* PPCS0PLBMIRQ, // net ID: PPCS0PLBMIRQ lsb: 0  msb: 0 OUTPUT
			NetFlow* PPCS0PLBMRDERR, // net ID: PPCS0PLBMRDERR lsb: 0  msb: 0 OUTPUT
			NetFlow* PPCS0PLBMWRERR, // net ID: PPCS0PLBMWRERR lsb: 0  msb: 0 OUTPUT
			NetFlow* PPCS0PLBRDBTERM, // net ID: PPCS0PLBRDBTERM lsb: 0  msb: 0 OUTPUT
			NetFlow* PPCS0PLBRDCOMP, // net ID: PPCS0PLBRDCOMP lsb: 0  msb: 0 OUTPUT
			NetFlow* PPCS0PLBRDDACK, // net ID: PPCS0PLBRDDACK lsb: 0  msb: 0 OUTPUT
			NetFlow* PPCS0PLBRDDBUS, // net ID: PPCS0PLBRDDBUS lsb: 0  msb: 0 OUTPUT
			NetFlow* PPCS0PLBRDWDADDR, // net ID: PPCS0PLBRDWDADDR lsb: 0  msb: 0 OUTPUT
			NetFlow* PPCS0PLBREARBITRATE, // net ID: PPCS0PLBREARBITRATE lsb: 0  msb: 0 OUTPUT
			NetFlow* PPCS0PLBSSIZE, // net ID: PPCS0PLBSSIZE lsb: 0  msb: 0 OUTPUT
			NetFlow* PPCS0PLBWAIT, // net ID: PPCS0PLBWAIT lsb: 0  msb: 0 OUTPUT
			NetFlow* PPCS0PLBWRBTERM, // net ID: PPCS0PLBWRBTERM lsb: 0  msb: 0 OUTPUT
			NetFlow* PPCS0PLBWRCOMP, // net ID: PPCS0PLBWRCOMP lsb: 0  msb: 0 OUTPUT
			NetFlow* PPCS0PLBWRDACK, // net ID: PPCS0PLBWRDACK lsb: 0  msb: 0 OUTPUT
			NetFlow* PPCS1PLBADDRACK, // net ID: PPCS1PLBADDRACK lsb: 0  msb: 0 OUTPUT
			NetFlow* PPCS1PLBMBUSY, // net ID: PPCS1PLBMBUSY lsb: 0  msb: 0 OUTPUT
			NetFlow* PPCS1PLBMIRQ, // net ID: PPCS1PLBMIRQ lsb: 0  msb: 0 OUTPUT
			NetFlow* PPCS1PLBMRDERR, // net ID: PPCS1PLBMRDERR lsb: 0  msb: 0 OUTPUT
			NetFlow* PPCS1PLBMWRERR, // net ID: PPCS1PLBMWRERR lsb: 0  msb: 0 OUTPUT
			NetFlow* PPCS1PLBRDBTERM, // net ID: PPCS1PLBRDBTERM lsb: 0  msb: 0 OUTPUT
			NetFlow* PPCS1PLBRDCOMP, // net ID: PPCS1PLBRDCOMP lsb: 0  msb: 0 OUTPUT
			NetFlow* PPCS1PLBRDDACK, // net ID: PPCS1PLBRDDACK lsb: 0  msb: 0 OUTPUT
			NetFlow* PPCS1PLBRDDBUS, // net ID: PPCS1PLBRDDBUS lsb: 0  msb: 0 OUTPUT
			NetFlow* PPCS1PLBRDWDADDR, // net ID: PPCS1PLBRDWDADDR lsb: 0  msb: 0 OUTPUT
			NetFlow* PPCS1PLBREARBITRATE, // net ID: PPCS1PLBREARBITRATE lsb: 0  msb: 0 OUTPUT
			NetFlow* PPCS1PLBSSIZE, // net ID: PPCS1PLBSSIZE lsb: 0  msb: 0 OUTPUT
			NetFlow* PPCS1PLBWAIT, // net ID: PPCS1PLBWAIT lsb: 0  msb: 0 OUTPUT
			NetFlow* PPCS1PLBWRBTERM, // net ID: PPCS1PLBWRBTERM lsb: 0  msb: 0 OUTPUT
			NetFlow* PPCS1PLBWRCOMP, // net ID: PPCS1PLBWRCOMP lsb: 0  msb: 0 OUTPUT
			NetFlow* PPCS1PLBWRDACK, // net ID: PPCS1PLBWRDACK lsb: 0  msb: 0 OUTPUT
			NetFlow* CPMC440CLK, // net ID: CPMC440CLK lsb: 0  msb: 0 INPUT
			NetFlow* CPMC440CLKEN, // net ID: CPMC440CLKEN lsb: 0  msb: 0 INPUT
			NetFlow* CPMC440CORECLOCKINACTIVE, // net ID: CPMC440CORECLOCKINACTIVE lsb: 0  msb: 0 INPUT
			NetFlow* CPMC440TIMERCLOCK, // net ID: CPMC440TIMERCLOCK lsb: 0  msb: 0 INPUT
			NetFlow* CPMDCRCLK, // net ID: CPMDCRCLK lsb: 0  msb: 0 INPUT
			NetFlow* CPMDMA0LLCLK, // net ID: CPMDMA0LLCLK lsb: 0  msb: 0 INPUT
			NetFlow* CPMDMA1LLCLK, // net ID: CPMDMA1LLCLK lsb: 0  msb: 0 INPUT
			NetFlow* CPMDMA2LLCLK, // net ID: CPMDMA2LLCLK lsb: 0  msb: 0 INPUT
			NetFlow* CPMDMA3LLCLK, // net ID: CPMDMA3LLCLK lsb: 0  msb: 0 INPUT
			NetFlow* CPMFCMCLK, // net ID: CPMFCMCLK lsb: 0  msb: 0 INPUT
			NetFlow* CPMINTERCONNECTCLK, // net ID: CPMINTERCONNECTCLK lsb: 0  msb: 0 INPUT
			NetFlow* CPMINTERCONNECTCLKEN, // net ID: CPMINTERCONNECTCLKEN lsb: 0  msb: 0 INPUT
			NetFlow* CPMINTERCONNECTCLKNTO1, // net ID: CPMINTERCONNECTCLKNTO1 lsb: 0  msb: 0 INPUT
			NetFlow* CPMMCCLK, // net ID: CPMMCCLK lsb: 0  msb: 0 INPUT
			NetFlow* CPMPPCMPLBCLK, // net ID: CPMPPCMPLBCLK lsb: 0  msb: 0 INPUT
			NetFlow* CPMPPCS0PLBCLK, // net ID: CPMPPCS0PLBCLK lsb: 0  msb: 0 INPUT
			NetFlow* CPMPPCS1PLBCLK, // net ID: CPMPPCS1PLBCLK lsb: 0  msb: 0 INPUT
			NetFlow* DBGC440DEBUGHALT, // net ID: DBGC440DEBUGHALT lsb: 0  msb: 0 INPUT
			NetFlow* DBGC440SYSTEMSTATUS, // net ID: DBGC440SYSTEMSTATUS lsb: 4  msb: 0 INPUT
			NetFlow* DBGC440UNCONDDEBUGEVENT, // net ID: DBGC440UNCONDDEBUGEVENT lsb: 0  msb: 0 INPUT
			NetFlow* DCRPPCDMACK, // net ID: DCRPPCDMACK lsb: 0  msb: 0 INPUT
			NetFlow* DCRPPCDMDBUSIN, // net ID: DCRPPCDMDBUSIN lsb: 31  msb: 0 INPUT
			NetFlow* DCRPPCDMTIMEOUTWAIT, // net ID: DCRPPCDMTIMEOUTWAIT lsb: 0  msb: 0 INPUT
			NetFlow* DCRPPCDSABUS, // net ID: DCRPPCDSABUS lsb: 9  msb: 0 INPUT
			NetFlow* DCRPPCDSDBUSOUT, // net ID: DCRPPCDSDBUSOUT lsb: 31  msb: 0 INPUT
			NetFlow* DCRPPCDSREAD, // net ID: DCRPPCDSREAD lsb: 0  msb: 0 INPUT
			NetFlow* DCRPPCDSWRITE, // net ID: DCRPPCDSWRITE lsb: 0  msb: 0 INPUT
			NetFlow* EICC440CRITIRQ, // net ID: EICC440CRITIRQ lsb: 0  msb: 0 INPUT
			NetFlow* EICC440EXTIRQ, // net ID: EICC440EXTIRQ lsb: 0  msb: 0 INPUT
			NetFlow* FCMAPUCONFIRMINSTR, // net ID: FCMAPUCONFIRMINSTR lsb: 0  msb: 0 INPUT
			NetFlow* FCMAPUCR, // net ID: FCMAPUCR lsb: 3  msb: 0 INPUT
			NetFlow* FCMAPUDONE, // net ID: FCMAPUDONE lsb: 0  msb: 0 INPUT
			NetFlow* FCMAPUEXCEPTION, // net ID: FCMAPUEXCEPTION lsb: 0  msb: 0 INPUT
			NetFlow* FCMAPUFPSCRFEX, // net ID: FCMAPUFPSCRFEX lsb: 0  msb: 0 INPUT
			NetFlow* FCMAPURESULT, // net ID: FCMAPURESULT lsb: 31  msb: 0 INPUT
			NetFlow* FCMAPURESULTVALID, // net ID: FCMAPURESULTVALID lsb: 0  msb: 0 INPUT
			NetFlow* FCMAPUSLEEPNOTREADY, // net ID: FCMAPUSLEEPNOTREADY lsb: 0  msb: 0 INPUT
			NetFlow* FCMAPUSTOREDATA, // net ID: FCMAPUSTOREDATA lsb: 127  msb: 0 INPUT
			NetFlow* JTGC440TCK, // net ID: JTGC440TCK lsb: 0  msb: 0 INPUT
			NetFlow* JTGC440TDI, // net ID: JTGC440TDI lsb: 0  msb: 0 INPUT
			NetFlow* JTGC440TMS, // net ID: JTGC440TMS lsb: 0  msb: 0 INPUT
			NetFlow* JTGC440TRSTNEG, // net ID: JTGC440TRSTNEG lsb: 0  msb: 0 INPUT
			NetFlow* LLDMA0RSTENGINEREQ, // net ID: LLDMA0RSTENGINEREQ lsb: 0  msb: 0 INPUT
			NetFlow* LLDMA0RXD, // net ID: LLDMA0RXD lsb: 31  msb: 0 INPUT
			NetFlow* LLDMA0RXEOFN, // net ID: LLDMA0RXEOFN lsb: 0  msb: 0 INPUT
			NetFlow* LLDMA0RXEOPN, // net ID: LLDMA0RXEOPN lsb: 0  msb: 0 INPUT
			NetFlow* LLDMA0RXREM, // net ID: LLDMA0RXREM lsb: 3  msb: 0 INPUT
			NetFlow* LLDMA0RXSOFN, // net ID: LLDMA0RXSOFN lsb: 0  msb: 0 INPUT
			NetFlow* LLDMA0RXSOPN, // net ID: LLDMA0RXSOPN lsb: 0  msb: 0 INPUT
			NetFlow* LLDMA0RXSRCRDYN, // net ID: LLDMA0RXSRCRDYN lsb: 0  msb: 0 INPUT
			NetFlow* LLDMA0TXDSTRDYN, // net ID: LLDMA0TXDSTRDYN lsb: 0  msb: 0 INPUT
			NetFlow* LLDMA1RSTENGINEREQ, // net ID: LLDMA1RSTENGINEREQ lsb: 0  msb: 0 INPUT
			NetFlow* LLDMA1RXD, // net ID: LLDMA1RXD lsb: 31  msb: 0 INPUT
			NetFlow* LLDMA1RXEOFN, // net ID: LLDMA1RXEOFN lsb: 0  msb: 0 INPUT
			NetFlow* LLDMA1RXEOPN, // net ID: LLDMA1RXEOPN lsb: 0  msb: 0 INPUT
			NetFlow* LLDMA1RXREM, // net ID: LLDMA1RXREM lsb: 3  msb: 0 INPUT
			NetFlow* LLDMA1RXSOFN, // net ID: LLDMA1RXSOFN lsb: 0  msb: 0 INPUT
			NetFlow* LLDMA1RXSOPN, // net ID: LLDMA1RXSOPN lsb: 0  msb: 0 INPUT
			NetFlow* LLDMA1RXSRCRDYN, // net ID: LLDMA1RXSRCRDYN lsb: 0  msb: 0 INPUT
			NetFlow* LLDMA1TXDSTRDYN, // net ID: LLDMA1TXDSTRDYN lsb: 0  msb: 0 INPUT
			NetFlow* LLDMA2RSTENGINEREQ, // net ID: LLDMA2RSTENGINEREQ lsb: 0  msb: 0 INPUT
			NetFlow* LLDMA2RXD, // net ID: LLDMA2RXD lsb: 31  msb: 0 INPUT
			NetFlow* LLDMA2RXEOFN, // net ID: LLDMA2RXEOFN lsb: 0  msb: 0 INPUT
			NetFlow* LLDMA2RXEOPN, // net ID: LLDMA2RXEOPN lsb: 0  msb: 0 INPUT
			NetFlow* LLDMA2RXREM, // net ID: LLDMA2RXREM lsb: 3  msb: 0 INPUT
			NetFlow* LLDMA2RXSOFN, // net ID: LLDMA2RXSOFN lsb: 0  msb: 0 INPUT
			NetFlow* LLDMA2RXSOPN, // net ID: LLDMA2RXSOPN lsb: 0  msb: 0 INPUT
			NetFlow* LLDMA2RXSRCRDYN, // net ID: LLDMA2RXSRCRDYN lsb: 0  msb: 0 INPUT
			NetFlow* LLDMA2TXDSTRDYN, // net ID: LLDMA2TXDSTRDYN lsb: 0  msb: 0 INPUT
			NetFlow* LLDMA3RSTENGINEREQ, // net ID: LLDMA3RSTENGINEREQ lsb: 0  msb: 0 INPUT
			NetFlow* LLDMA3RXD, // net ID: LLDMA3RXD lsb: 31  msb: 0 INPUT
			NetFlow* LLDMA3RXEOFN, // net ID: LLDMA3RXEOFN lsb: 0  msb: 0 INPUT
			NetFlow* LLDMA3RXEOPN, // net ID: LLDMA3RXEOPN lsb: 0  msb: 0 INPUT
			NetFlow* LLDMA3RXREM, // net ID: LLDMA3RXREM lsb: 3  msb: 0 INPUT
			NetFlow* LLDMA3RXSOFN, // net ID: LLDMA3RXSOFN lsb: 0  msb: 0 INPUT
			NetFlow* LLDMA3RXSOPN, // net ID: LLDMA3RXSOPN lsb: 0  msb: 0 INPUT
			NetFlow* LLDMA3RXSRCRDYN, // net ID: LLDMA3RXSRCRDYN lsb: 0  msb: 0 INPUT
			NetFlow* LLDMA3TXDSTRDYN, // net ID: LLDMA3TXDSTRDYN lsb: 0  msb: 0 INPUT
			NetFlow* MCMIADDRREADYTOACCEPT, // net ID: MCMIADDRREADYTOACCEPT lsb: 0  msb: 0 INPUT
			NetFlow* MCMIREADDATA, // net ID: MCMIREADDATA lsb: 127  msb: 0 INPUT
			NetFlow* MCMIREADDATAERR, // net ID: MCMIREADDATAERR lsb: 0  msb: 0 INPUT
			NetFlow* MCMIREADDATAVALID, // net ID: MCMIREADDATAVALID lsb: 0  msb: 0 INPUT
			NetFlow* PLBPPCMADDRACK, // net ID: PLBPPCMADDRACK lsb: 0  msb: 0 INPUT
			NetFlow* PLBPPCMMBUSY, // net ID: PLBPPCMMBUSY lsb: 0  msb: 0 INPUT
			NetFlow* PLBPPCMMIRQ, // net ID: PLBPPCMMIRQ lsb: 0  msb: 0 INPUT
			NetFlow* PLBPPCMMRDERR, // net ID: PLBPPCMMRDERR lsb: 0  msb: 0 INPUT
			NetFlow* PLBPPCMMWRERR, // net ID: PLBPPCMMWRERR lsb: 0  msb: 0 INPUT
			NetFlow* PLBPPCMRDBTERM, // net ID: PLBPPCMRDBTERM lsb: 0  msb: 0 INPUT
			NetFlow* PLBPPCMRDDACK, // net ID: PLBPPCMRDDACK lsb: 0  msb: 0 INPUT
			NetFlow* PLBPPCMRDDBUS, // net ID: PLBPPCMRDDBUS lsb: 127  msb: 0 INPUT
			NetFlow* PLBPPCMRDPENDPRI, // net ID: PLBPPCMRDPENDPRI lsb: 1  msb: 0 INPUT
			NetFlow* PLBPPCMRDPENDREQ, // net ID: PLBPPCMRDPENDREQ lsb: 0  msb: 0 INPUT
			NetFlow* PLBPPCMRDWDADDR, // net ID: PLBPPCMRDWDADDR lsb: 3  msb: 0 INPUT
			NetFlow* PLBPPCMREARBITRATE, // net ID: PLBPPCMREARBITRATE lsb: 0  msb: 0 INPUT
			NetFlow* PLBPPCMREQPRI, // net ID: PLBPPCMREQPRI lsb: 1  msb: 0 INPUT
			NetFlow* PLBPPCMSSIZE, // net ID: PLBPPCMSSIZE lsb: 1  msb: 0 INPUT
			NetFlow* PLBPPCMTIMEOUT, // net ID: PLBPPCMTIMEOUT lsb: 0  msb: 0 INPUT
			NetFlow* PLBPPCMWRBTERM, // net ID: PLBPPCMWRBTERM lsb: 0  msb: 0 INPUT
			NetFlow* PLBPPCMWRDACK, // net ID: PLBPPCMWRDACK lsb: 0  msb: 0 INPUT
			NetFlow* PLBPPCMWRPENDPRI, // net ID: PLBPPCMWRPENDPRI lsb: 1  msb: 0 INPUT
			NetFlow* PLBPPCMWRPENDREQ, // net ID: PLBPPCMWRPENDREQ lsb: 0  msb: 0 INPUT
			NetFlow* PLBPPCS0ABORT, // net ID: PLBPPCS0ABORT lsb: 0  msb: 0 INPUT
			NetFlow* PLBPPCS0ABUS, // net ID: PLBPPCS0ABUS lsb: 31  msb: 0 INPUT
			NetFlow* PLBPPCS0BE, // net ID: PLBPPCS0BE lsb: 15  msb: 0 INPUT
			NetFlow* PLBPPCS0BUSLOCK, // net ID: PLBPPCS0BUSLOCK lsb: 0  msb: 0 INPUT
			NetFlow* PLBPPCS0LOCKERR, // net ID: PLBPPCS0LOCKERR lsb: 0  msb: 0 INPUT
			NetFlow* PLBPPCS0MASTERID, // net ID: PLBPPCS0MASTERID lsb: 1  msb: 0 INPUT
			NetFlow* PLBPPCS0MSIZE, // net ID: PLBPPCS0MSIZE lsb: 1  msb: 0 INPUT
			NetFlow* PLBPPCS0PAVALID, // net ID: PLBPPCS0PAVALID lsb: 0  msb: 0 INPUT
			NetFlow* PLBPPCS0RDBURST, // net ID: PLBPPCS0RDBURST lsb: 0  msb: 0 INPUT
			NetFlow* PLBPPCS0RDPENDPRI, // net ID: PLBPPCS0RDPENDPRI lsb: 1  msb: 0 INPUT
			NetFlow* PLBPPCS0RDPENDREQ, // net ID: PLBPPCS0RDPENDREQ lsb: 0  msb: 0 INPUT
			NetFlow* PLBPPCS0RDPRIM, // net ID: PLBPPCS0RDPRIM lsb: 0  msb: 0 INPUT
			NetFlow* PLBPPCS0REQPRI, // net ID: PLBPPCS0REQPRI lsb: 1  msb: 0 INPUT
			NetFlow* PLBPPCS0RNW, // net ID: PLBPPCS0RNW lsb: 0  msb: 0 INPUT
			NetFlow* PLBPPCS0SAVALID, // net ID: PLBPPCS0SAVALID lsb: 0  msb: 0 INPUT
			NetFlow* PLBPPCS0SIZE, // net ID: PLBPPCS0SIZE lsb: 3  msb: 0 INPUT
			NetFlow* PLBPPCS0TATTRIBUTE, // net ID: PLBPPCS0TATTRIBUTE lsb: 15  msb: 0 INPUT
			NetFlow* PLBPPCS0TYPE, // net ID: PLBPPCS0TYPE lsb: 2  msb: 0 INPUT
			NetFlow* PLBPPCS0UABUS, // net ID: PLBPPCS0UABUS lsb: 31  msb: 28 INPUT
			NetFlow* PLBPPCS0WRBURST, // net ID: PLBPPCS0WRBURST lsb: 0  msb: 0 INPUT
			NetFlow* PLBPPCS0WRDBUS, // net ID: PLBPPCS0WRDBUS lsb: 127  msb: 0 INPUT
			NetFlow* PLBPPCS0WRPENDPRI, // net ID: PLBPPCS0WRPENDPRI lsb: 1  msb: 0 INPUT
			NetFlow* PLBPPCS0WRPENDREQ, // net ID: PLBPPCS0WRPENDREQ lsb: 0  msb: 0 INPUT
			NetFlow* PLBPPCS0WRPRIM, // net ID: PLBPPCS0WRPRIM lsb: 0  msb: 0 INPUT
			NetFlow* PLBPPCS1ABORT, // net ID: PLBPPCS1ABORT lsb: 0  msb: 0 INPUT
			NetFlow* PLBPPCS1ABUS, // net ID: PLBPPCS1ABUS lsb: 31  msb: 0 INPUT
			NetFlow* PLBPPCS1BE, // net ID: PLBPPCS1BE lsb: 15  msb: 0 INPUT
			NetFlow* PLBPPCS1BUSLOCK, // net ID: PLBPPCS1BUSLOCK lsb: 0  msb: 0 INPUT
			NetFlow* PLBPPCS1LOCKERR, // net ID: PLBPPCS1LOCKERR lsb: 0  msb: 0 INPUT
			NetFlow* PLBPPCS1MASTERID, // net ID: PLBPPCS1MASTERID lsb: 1  msb: 0 INPUT
			NetFlow* PLBPPCS1MSIZE, // net ID: PLBPPCS1MSIZE lsb: 1  msb: 0 INPUT
			NetFlow* PLBPPCS1PAVALID, // net ID: PLBPPCS1PAVALID lsb: 0  msb: 0 INPUT
			NetFlow* PLBPPCS1RDBURST, // net ID: PLBPPCS1RDBURST lsb: 0  msb: 0 INPUT
			NetFlow* PLBPPCS1RDPENDPRI, // net ID: PLBPPCS1RDPENDPRI lsb: 1  msb: 0 INPUT
			NetFlow* PLBPPCS1RDPENDREQ, // net ID: PLBPPCS1RDPENDREQ lsb: 0  msb: 0 INPUT
			NetFlow* PLBPPCS1RDPRIM, // net ID: PLBPPCS1RDPRIM lsb: 0  msb: 0 INPUT
			NetFlow* PLBPPCS1REQPRI, // net ID: PLBPPCS1REQPRI lsb: 1  msb: 0 INPUT
			NetFlow* PLBPPCS1RNW, // net ID: PLBPPCS1RNW lsb: 0  msb: 0 INPUT
			NetFlow* PLBPPCS1SAVALID, // net ID: PLBPPCS1SAVALID lsb: 0  msb: 0 INPUT
			NetFlow* PLBPPCS1SIZE, // net ID: PLBPPCS1SIZE lsb: 3  msb: 0 INPUT
			NetFlow* PLBPPCS1TATTRIBUTE, // net ID: PLBPPCS1TATTRIBUTE lsb: 15  msb: 0 INPUT
			NetFlow* PLBPPCS1TYPE, // net ID: PLBPPCS1TYPE lsb: 2  msb: 0 INPUT
			NetFlow* PLBPPCS1UABUS, // net ID: PLBPPCS1UABUS lsb: 31  msb: 28 INPUT
			NetFlow* PLBPPCS1WRBURST, // net ID: PLBPPCS1WRBURST lsb: 0  msb: 0 INPUT
			NetFlow* PLBPPCS1WRDBUS, // net ID: PLBPPCS1WRDBUS lsb: 127  msb: 0 INPUT
			NetFlow* PLBPPCS1WRPENDPRI, // net ID: PLBPPCS1WRPENDPRI lsb: 1  msb: 0 INPUT
			NetFlow* PLBPPCS1WRPENDREQ, // net ID: PLBPPCS1WRPENDREQ lsb: 0  msb: 0 INPUT
			NetFlow* PLBPPCS1WRPRIM, // net ID: PLBPPCS1WRPRIM lsb: 0  msb: 0 INPUT
			NetFlow* RSTC440RESETCHIP, // net ID: RSTC440RESETCHIP lsb: 0  msb: 0 INPUT
			NetFlow* RSTC440RESETCORE, // net ID: RSTC440RESETCORE lsb: 0  msb: 0 INPUT
			NetFlow* RSTC440RESETSYSTEM, // net ID: RSTC440RESETSYSTEM lsb: 0  msb: 0 INPUT
			NetFlow* TIEC440DCURDLDCACHEPLBPRIO, // net ID: TIEC440DCURDLDCACHEPLBPRIO lsb: 1  msb: 0 INPUT
			NetFlow* TIEC440DCURDNONCACHEPLBPRIO, // net ID: TIEC440DCURDNONCACHEPLBPRIO lsb: 1  msb: 0 INPUT
			NetFlow* TIEC440DCURDTOUCHPLBPRIO, // net ID: TIEC440DCURDTOUCHPLBPRIO lsb: 1  msb: 0 INPUT
			NetFlow* TIEC440DCURDURGENTPLBPRIO, // net ID: TIEC440DCURDURGENTPLBPRIO lsb: 1  msb: 0 INPUT
			NetFlow* TIEC440DCUWRFLUSHPLBPRIO, // net ID: TIEC440DCUWRFLUSHPLBPRIO lsb: 1  msb: 0 INPUT
			NetFlow* TIEC440DCUWRSTOREPLBPRIO, // net ID: TIEC440DCUWRSTOREPLBPRIO lsb: 1  msb: 0 INPUT
			NetFlow* TIEC440DCUWRURGENTPLBPRIO, // net ID: TIEC440DCUWRURGENTPLBPRIO lsb: 1  msb: 0 INPUT
			NetFlow* TIEC440ENDIANRESET, // net ID: TIEC440ENDIANRESET lsb: 0  msb: 0 INPUT
			NetFlow* TIEC440ERPNRESET, // net ID: TIEC440ERPNRESET lsb: 3  msb: 0 INPUT
			NetFlow* TIEC440ICURDFETCHPLBPRIO, // net ID: TIEC440ICURDFETCHPLBPRIO lsb: 1  msb: 0 INPUT
			NetFlow* TIEC440ICURDSPECPLBPRIO, // net ID: TIEC440ICURDSPECPLBPRIO lsb: 1  msb: 0 INPUT
			NetFlow* TIEC440ICURDTOUCHPLBPRIO, // net ID: TIEC440ICURDTOUCHPLBPRIO lsb: 1  msb: 0 INPUT
			NetFlow* TIEC440PIR, // net ID: TIEC440PIR lsb: 31  msb: 28 INPUT
			NetFlow* TIEC440PVR, // net ID: TIEC440PVR lsb: 31  msb: 28 INPUT
			NetFlow* TIEC440USERRESET, // net ID: TIEC440USERRESET lsb: 3  msb: 0 INPUT
			NetFlow* TIEDCRBASEADDR, // net ID: TIEDCRBASEADDR lsb: 1  msb: 0 INPUT
			NetFlow* TRCC440TRACEDISABLE, // net ID: TRCC440TRACEDISABLE lsb: 0  msb: 0 INPUT
			NetFlow* TRCC440TRIGGEREVENTIN // net ID: TRCC440TRIGGEREVENTIN lsb: 0  msb: 0 INPUT
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
			this->APUFCMDECFPUOP = APUFCMDECFPUOP; // net ID: APUFCMDECFPUOP lsb: 0  msb: 0 OUTPUT
			this->APUFCMDECLDSTXFERSIZE = APUFCMDECLDSTXFERSIZE; // net ID: APUFCMDECLDSTXFERSIZE lsb: 0  msb: 0 OUTPUT
			this->APUFCMDECLOAD = APUFCMDECLOAD; // net ID: APUFCMDECLOAD lsb: 0  msb: 0 OUTPUT
			this->APUFCMDECNONAUTON = APUFCMDECNONAUTON; // net ID: APUFCMDECNONAUTON lsb: 0  msb: 0 OUTPUT
			this->APUFCMDECSTORE = APUFCMDECSTORE; // net ID: APUFCMDECSTORE lsb: 0  msb: 0 OUTPUT
			this->APUFCMDECUDI = APUFCMDECUDI; // net ID: APUFCMDECUDI lsb: 0  msb: 0 OUTPUT
			this->APUFCMDECUDIVALID = APUFCMDECUDIVALID; // net ID: APUFCMDECUDIVALID lsb: 0  msb: 0 OUTPUT
			this->APUFCMENDIAN = APUFCMENDIAN; // net ID: APUFCMENDIAN lsb: 0  msb: 0 OUTPUT
			this->APUFCMFLUSH = APUFCMFLUSH; // net ID: APUFCMFLUSH lsb: 0  msb: 0 OUTPUT
			this->APUFCMINSTRUCTION = APUFCMINSTRUCTION; // net ID: APUFCMINSTRUCTION lsb: 0  msb: 0 OUTPUT
			this->APUFCMINSTRVALID = APUFCMINSTRVALID; // net ID: APUFCMINSTRVALID lsb: 0  msb: 0 OUTPUT
			this->APUFCMLOADBYTEADDR = APUFCMLOADBYTEADDR; // net ID: APUFCMLOADBYTEADDR lsb: 0  msb: 0 OUTPUT
			this->APUFCMLOADDATA = APUFCMLOADDATA; // net ID: APUFCMLOADDATA lsb: 0  msb: 0 OUTPUT
			this->APUFCMLOADDVALID = APUFCMLOADDVALID; // net ID: APUFCMLOADDVALID lsb: 0  msb: 0 OUTPUT
			this->APUFCMMSRFE0 = APUFCMMSRFE0; // net ID: APUFCMMSRFE0 lsb: 0  msb: 0 OUTPUT
			this->APUFCMMSRFE1 = APUFCMMSRFE1; // net ID: APUFCMMSRFE1 lsb: 0  msb: 0 OUTPUT
			this->APUFCMNEXTINSTRREADY = APUFCMNEXTINSTRREADY; // net ID: APUFCMNEXTINSTRREADY lsb: 0  msb: 0 OUTPUT
			this->APUFCMOPERANDVALID = APUFCMOPERANDVALID; // net ID: APUFCMOPERANDVALID lsb: 0  msb: 0 OUTPUT
			this->APUFCMRADATA = APUFCMRADATA; // net ID: APUFCMRADATA lsb: 0  msb: 0 OUTPUT
			this->APUFCMRBDATA = APUFCMRBDATA; // net ID: APUFCMRBDATA lsb: 0  msb: 0 OUTPUT
			this->APUFCMWRITEBACKOK = APUFCMWRITEBACKOK; // net ID: APUFCMWRITEBACKOK lsb: 0  msb: 0 OUTPUT
			this->C440CPMCORESLEEPREQ = C440CPMCORESLEEPREQ; // net ID: C440CPMCORESLEEPREQ lsb: 0  msb: 0 OUTPUT
			this->C440CPMDECIRPTREQ = C440CPMDECIRPTREQ; // net ID: C440CPMDECIRPTREQ lsb: 0  msb: 0 OUTPUT
			this->C440CPMFITIRPTREQ = C440CPMFITIRPTREQ; // net ID: C440CPMFITIRPTREQ lsb: 0  msb: 0 OUTPUT
			this->C440CPMMSRCE = C440CPMMSRCE; // net ID: C440CPMMSRCE lsb: 0  msb: 0 OUTPUT
			this->C440CPMMSREE = C440CPMMSREE; // net ID: C440CPMMSREE lsb: 0  msb: 0 OUTPUT
			this->C440CPMTIMERRESETREQ = C440CPMTIMERRESETREQ; // net ID: C440CPMTIMERRESETREQ lsb: 0  msb: 0 OUTPUT
			this->C440CPMWDIRPTREQ = C440CPMWDIRPTREQ; // net ID: C440CPMWDIRPTREQ lsb: 0  msb: 0 OUTPUT
			this->C440DBGSYSTEMCONTROL = C440DBGSYSTEMCONTROL; // net ID: C440DBGSYSTEMCONTROL lsb: 0  msb: 0 OUTPUT
			this->C440JTGTDO = C440JTGTDO; // net ID: C440JTGTDO lsb: 0  msb: 0 OUTPUT
			this->C440JTGTDOEN = C440JTGTDOEN; // net ID: C440JTGTDOEN lsb: 0  msb: 0 OUTPUT
			this->C440MACHINECHECK = C440MACHINECHECK; // net ID: C440MACHINECHECK lsb: 0  msb: 0 OUTPUT
			this->C440RSTCHIPRESETREQ = C440RSTCHIPRESETREQ; // net ID: C440RSTCHIPRESETREQ lsb: 0  msb: 0 OUTPUT
			this->C440RSTCORERESETREQ = C440RSTCORERESETREQ; // net ID: C440RSTCORERESETREQ lsb: 0  msb: 0 OUTPUT
			this->C440RSTSYSTEMRESETREQ = C440RSTSYSTEMRESETREQ; // net ID: C440RSTSYSTEMRESETREQ lsb: 0  msb: 0 OUTPUT
			this->C440TRCBRANCHSTATUS = C440TRCBRANCHSTATUS; // net ID: C440TRCBRANCHSTATUS lsb: 0  msb: 0 OUTPUT
			this->C440TRCCYCLE = C440TRCCYCLE; // net ID: C440TRCCYCLE lsb: 0  msb: 0 OUTPUT
			this->C440TRCEXECUTIONSTATUS = C440TRCEXECUTIONSTATUS; // net ID: C440TRCEXECUTIONSTATUS lsb: 0  msb: 0 OUTPUT
			this->C440TRCTRACESTATUS = C440TRCTRACESTATUS; // net ID: C440TRCTRACESTATUS lsb: 0  msb: 0 OUTPUT
			this->C440TRCTRIGGEREVENTOUT = C440TRCTRIGGEREVENTOUT; // net ID: C440TRCTRIGGEREVENTOUT lsb: 0  msb: 0 OUTPUT
			this->C440TRCTRIGGEREVENTTYPE = C440TRCTRIGGEREVENTTYPE; // net ID: C440TRCTRIGGEREVENTTYPE lsb: 0  msb: 0 OUTPUT
			this->DMA0LLRSTENGINEACK = DMA0LLRSTENGINEACK; // net ID: DMA0LLRSTENGINEACK lsb: 0  msb: 0 OUTPUT
			this->DMA0LLRXDSTRDYN = DMA0LLRXDSTRDYN; // net ID: DMA0LLRXDSTRDYN lsb: 0  msb: 0 OUTPUT
			this->DMA0LLTXD = DMA0LLTXD; // net ID: DMA0LLTXD lsb: 0  msb: 0 OUTPUT
			this->DMA0LLTXEOFN = DMA0LLTXEOFN; // net ID: DMA0LLTXEOFN lsb: 0  msb: 0 OUTPUT
			this->DMA0LLTXEOPN = DMA0LLTXEOPN; // net ID: DMA0LLTXEOPN lsb: 0  msb: 0 OUTPUT
			this->DMA0LLTXREM = DMA0LLTXREM; // net ID: DMA0LLTXREM lsb: 0  msb: 0 OUTPUT
			this->DMA0LLTXSOFN = DMA0LLTXSOFN; // net ID: DMA0LLTXSOFN lsb: 0  msb: 0 OUTPUT
			this->DMA0LLTXSOPN = DMA0LLTXSOPN; // net ID: DMA0LLTXSOPN lsb: 0  msb: 0 OUTPUT
			this->DMA0LLTXSRCRDYN = DMA0LLTXSRCRDYN; // net ID: DMA0LLTXSRCRDYN lsb: 0  msb: 0 OUTPUT
			this->DMA0RXIRQ = DMA0RXIRQ; // net ID: DMA0RXIRQ lsb: 0  msb: 0 OUTPUT
			this->DMA0TXIRQ = DMA0TXIRQ; // net ID: DMA0TXIRQ lsb: 0  msb: 0 OUTPUT
			this->DMA1LLRSTENGINEACK = DMA1LLRSTENGINEACK; // net ID: DMA1LLRSTENGINEACK lsb: 0  msb: 0 OUTPUT
			this->DMA1LLRXDSTRDYN = DMA1LLRXDSTRDYN; // net ID: DMA1LLRXDSTRDYN lsb: 0  msb: 0 OUTPUT
			this->DMA1LLTXD = DMA1LLTXD; // net ID: DMA1LLTXD lsb: 0  msb: 0 OUTPUT
			this->DMA1LLTXEOFN = DMA1LLTXEOFN; // net ID: DMA1LLTXEOFN lsb: 0  msb: 0 OUTPUT
			this->DMA1LLTXEOPN = DMA1LLTXEOPN; // net ID: DMA1LLTXEOPN lsb: 0  msb: 0 OUTPUT
			this->DMA1LLTXREM = DMA1LLTXREM; // net ID: DMA1LLTXREM lsb: 0  msb: 0 OUTPUT
			this->DMA1LLTXSOFN = DMA1LLTXSOFN; // net ID: DMA1LLTXSOFN lsb: 0  msb: 0 OUTPUT
			this->DMA1LLTXSOPN = DMA1LLTXSOPN; // net ID: DMA1LLTXSOPN lsb: 0  msb: 0 OUTPUT
			this->DMA1LLTXSRCRDYN = DMA1LLTXSRCRDYN; // net ID: DMA1LLTXSRCRDYN lsb: 0  msb: 0 OUTPUT
			this->DMA1RXIRQ = DMA1RXIRQ; // net ID: DMA1RXIRQ lsb: 0  msb: 0 OUTPUT
			this->DMA1TXIRQ = DMA1TXIRQ; // net ID: DMA1TXIRQ lsb: 0  msb: 0 OUTPUT
			this->DMA2LLRSTENGINEACK = DMA2LLRSTENGINEACK; // net ID: DMA2LLRSTENGINEACK lsb: 0  msb: 0 OUTPUT
			this->DMA2LLRXDSTRDYN = DMA2LLRXDSTRDYN; // net ID: DMA2LLRXDSTRDYN lsb: 0  msb: 0 OUTPUT
			this->DMA2LLTXD = DMA2LLTXD; // net ID: DMA2LLTXD lsb: 0  msb: 0 OUTPUT
			this->DMA2LLTXEOFN = DMA2LLTXEOFN; // net ID: DMA2LLTXEOFN lsb: 0  msb: 0 OUTPUT
			this->DMA2LLTXEOPN = DMA2LLTXEOPN; // net ID: DMA2LLTXEOPN lsb: 0  msb: 0 OUTPUT
			this->DMA2LLTXREM = DMA2LLTXREM; // net ID: DMA2LLTXREM lsb: 0  msb: 0 OUTPUT
			this->DMA2LLTXSOFN = DMA2LLTXSOFN; // net ID: DMA2LLTXSOFN lsb: 0  msb: 0 OUTPUT
			this->DMA2LLTXSOPN = DMA2LLTXSOPN; // net ID: DMA2LLTXSOPN lsb: 0  msb: 0 OUTPUT
			this->DMA2LLTXSRCRDYN = DMA2LLTXSRCRDYN; // net ID: DMA2LLTXSRCRDYN lsb: 0  msb: 0 OUTPUT
			this->DMA2RXIRQ = DMA2RXIRQ; // net ID: DMA2RXIRQ lsb: 0  msb: 0 OUTPUT
			this->DMA2TXIRQ = DMA2TXIRQ; // net ID: DMA2TXIRQ lsb: 0  msb: 0 OUTPUT
			this->DMA3LLRSTENGINEACK = DMA3LLRSTENGINEACK; // net ID: DMA3LLRSTENGINEACK lsb: 0  msb: 0 OUTPUT
			this->DMA3LLRXDSTRDYN = DMA3LLRXDSTRDYN; // net ID: DMA3LLRXDSTRDYN lsb: 0  msb: 0 OUTPUT
			this->DMA3LLTXD = DMA3LLTXD; // net ID: DMA3LLTXD lsb: 0  msb: 0 OUTPUT
			this->DMA3LLTXEOFN = DMA3LLTXEOFN; // net ID: DMA3LLTXEOFN lsb: 0  msb: 0 OUTPUT
			this->DMA3LLTXEOPN = DMA3LLTXEOPN; // net ID: DMA3LLTXEOPN lsb: 0  msb: 0 OUTPUT
			this->DMA3LLTXREM = DMA3LLTXREM; // net ID: DMA3LLTXREM lsb: 0  msb: 0 OUTPUT
			this->DMA3LLTXSOFN = DMA3LLTXSOFN; // net ID: DMA3LLTXSOFN lsb: 0  msb: 0 OUTPUT
			this->DMA3LLTXSOPN = DMA3LLTXSOPN; // net ID: DMA3LLTXSOPN lsb: 0  msb: 0 OUTPUT
			this->DMA3LLTXSRCRDYN = DMA3LLTXSRCRDYN; // net ID: DMA3LLTXSRCRDYN lsb: 0  msb: 0 OUTPUT
			this->DMA3RXIRQ = DMA3RXIRQ; // net ID: DMA3RXIRQ lsb: 0  msb: 0 OUTPUT
			this->DMA3TXIRQ = DMA3TXIRQ; // net ID: DMA3TXIRQ lsb: 0  msb: 0 OUTPUT
			this->MIMCADDRESS = MIMCADDRESS; // net ID: MIMCADDRESS lsb: 0  msb: 0 OUTPUT
			this->MIMCADDRESSVALID = MIMCADDRESSVALID; // net ID: MIMCADDRESSVALID lsb: 0  msb: 0 OUTPUT
			this->MIMCBANKCONFLICT = MIMCBANKCONFLICT; // net ID: MIMCBANKCONFLICT lsb: 0  msb: 0 OUTPUT
			this->MIMCBYTEENABLE = MIMCBYTEENABLE; // net ID: MIMCBYTEENABLE lsb: 0  msb: 0 OUTPUT
			this->MIMCREADNOTWRITE = MIMCREADNOTWRITE; // net ID: MIMCREADNOTWRITE lsb: 0  msb: 0 OUTPUT
			this->MIMCROWCONFLICT = MIMCROWCONFLICT; // net ID: MIMCROWCONFLICT lsb: 0  msb: 0 OUTPUT
			this->MIMCWRITEDATA = MIMCWRITEDATA; // net ID: MIMCWRITEDATA lsb: 0  msb: 0 OUTPUT
			this->MIMCWRITEDATAVALID = MIMCWRITEDATAVALID; // net ID: MIMCWRITEDATAVALID lsb: 0  msb: 0 OUTPUT
			this->PPCCPMINTERCONNECTBUSY = PPCCPMINTERCONNECTBUSY; // net ID: PPCCPMINTERCONNECTBUSY lsb: 0  msb: 0 OUTPUT
			this->PPCDMDCRABUS = PPCDMDCRABUS; // net ID: PPCDMDCRABUS lsb: 0  msb: 0 OUTPUT
			this->PPCDMDCRDBUSOUT = PPCDMDCRDBUSOUT; // net ID: PPCDMDCRDBUSOUT lsb: 0  msb: 0 OUTPUT
			this->PPCDMDCRREAD = PPCDMDCRREAD; // net ID: PPCDMDCRREAD lsb: 0  msb: 0 OUTPUT
			this->PPCDMDCRUABUS = PPCDMDCRUABUS; // net ID: PPCDMDCRUABUS lsb: 0  msb: 0 OUTPUT
			this->PPCDMDCRWRITE = PPCDMDCRWRITE; // net ID: PPCDMDCRWRITE lsb: 0  msb: 0 OUTPUT
			this->PPCDSDCRACK = PPCDSDCRACK; // net ID: PPCDSDCRACK lsb: 0  msb: 0 OUTPUT
			this->PPCDSDCRDBUSIN = PPCDSDCRDBUSIN; // net ID: PPCDSDCRDBUSIN lsb: 0  msb: 0 OUTPUT
			this->PPCDSDCRTIMEOUTWAIT = PPCDSDCRTIMEOUTWAIT; // net ID: PPCDSDCRTIMEOUTWAIT lsb: 0  msb: 0 OUTPUT
			this->PPCEICINTERCONNECTIRQ = PPCEICINTERCONNECTIRQ; // net ID: PPCEICINTERCONNECTIRQ lsb: 0  msb: 0 OUTPUT
			this->PPCMPLBABORT = PPCMPLBABORT; // net ID: PPCMPLBABORT lsb: 0  msb: 0 OUTPUT
			this->PPCMPLBABUS = PPCMPLBABUS; // net ID: PPCMPLBABUS lsb: 0  msb: 0 OUTPUT
			this->PPCMPLBBE = PPCMPLBBE; // net ID: PPCMPLBBE lsb: 0  msb: 0 OUTPUT
			this->PPCMPLBBUSLOCK = PPCMPLBBUSLOCK; // net ID: PPCMPLBBUSLOCK lsb: 0  msb: 0 OUTPUT
			this->PPCMPLBLOCKERR = PPCMPLBLOCKERR; // net ID: PPCMPLBLOCKERR lsb: 0  msb: 0 OUTPUT
			this->PPCMPLBPRIORITY = PPCMPLBPRIORITY; // net ID: PPCMPLBPRIORITY lsb: 0  msb: 0 OUTPUT
			this->PPCMPLBRDBURST = PPCMPLBRDBURST; // net ID: PPCMPLBRDBURST lsb: 0  msb: 0 OUTPUT
			this->PPCMPLBREQUEST = PPCMPLBREQUEST; // net ID: PPCMPLBREQUEST lsb: 0  msb: 0 OUTPUT
			this->PPCMPLBRNW = PPCMPLBRNW; // net ID: PPCMPLBRNW lsb: 0  msb: 0 OUTPUT
			this->PPCMPLBSIZE = PPCMPLBSIZE; // net ID: PPCMPLBSIZE lsb: 0  msb: 0 OUTPUT
			this->PPCMPLBTATTRIBUTE = PPCMPLBTATTRIBUTE; // net ID: PPCMPLBTATTRIBUTE lsb: 0  msb: 0 OUTPUT
			this->PPCMPLBTYPE = PPCMPLBTYPE; // net ID: PPCMPLBTYPE lsb: 0  msb: 0 OUTPUT
			this->PPCMPLBUABUS = PPCMPLBUABUS; // net ID: PPCMPLBUABUS lsb: 0  msb: 0 OUTPUT
			this->PPCMPLBWRBURST = PPCMPLBWRBURST; // net ID: PPCMPLBWRBURST lsb: 0  msb: 0 OUTPUT
			this->PPCMPLBWRDBUS = PPCMPLBWRDBUS; // net ID: PPCMPLBWRDBUS lsb: 0  msb: 0 OUTPUT
			this->PPCS0PLBADDRACK = PPCS0PLBADDRACK; // net ID: PPCS0PLBADDRACK lsb: 0  msb: 0 OUTPUT
			this->PPCS0PLBMBUSY = PPCS0PLBMBUSY; // net ID: PPCS0PLBMBUSY lsb: 0  msb: 0 OUTPUT
			this->PPCS0PLBMIRQ = PPCS0PLBMIRQ; // net ID: PPCS0PLBMIRQ lsb: 0  msb: 0 OUTPUT
			this->PPCS0PLBMRDERR = PPCS0PLBMRDERR; // net ID: PPCS0PLBMRDERR lsb: 0  msb: 0 OUTPUT
			this->PPCS0PLBMWRERR = PPCS0PLBMWRERR; // net ID: PPCS0PLBMWRERR lsb: 0  msb: 0 OUTPUT
			this->PPCS0PLBRDBTERM = PPCS0PLBRDBTERM; // net ID: PPCS0PLBRDBTERM lsb: 0  msb: 0 OUTPUT
			this->PPCS0PLBRDCOMP = PPCS0PLBRDCOMP; // net ID: PPCS0PLBRDCOMP lsb: 0  msb: 0 OUTPUT
			this->PPCS0PLBRDDACK = PPCS0PLBRDDACK; // net ID: PPCS0PLBRDDACK lsb: 0  msb: 0 OUTPUT
			this->PPCS0PLBRDDBUS = PPCS0PLBRDDBUS; // net ID: PPCS0PLBRDDBUS lsb: 0  msb: 0 OUTPUT
			this->PPCS0PLBRDWDADDR = PPCS0PLBRDWDADDR; // net ID: PPCS0PLBRDWDADDR lsb: 0  msb: 0 OUTPUT
			this->PPCS0PLBREARBITRATE = PPCS0PLBREARBITRATE; // net ID: PPCS0PLBREARBITRATE lsb: 0  msb: 0 OUTPUT
			this->PPCS0PLBSSIZE = PPCS0PLBSSIZE; // net ID: PPCS0PLBSSIZE lsb: 0  msb: 0 OUTPUT
			this->PPCS0PLBWAIT = PPCS0PLBWAIT; // net ID: PPCS0PLBWAIT lsb: 0  msb: 0 OUTPUT
			this->PPCS0PLBWRBTERM = PPCS0PLBWRBTERM; // net ID: PPCS0PLBWRBTERM lsb: 0  msb: 0 OUTPUT
			this->PPCS0PLBWRCOMP = PPCS0PLBWRCOMP; // net ID: PPCS0PLBWRCOMP lsb: 0  msb: 0 OUTPUT
			this->PPCS0PLBWRDACK = PPCS0PLBWRDACK; // net ID: PPCS0PLBWRDACK lsb: 0  msb: 0 OUTPUT
			this->PPCS1PLBADDRACK = PPCS1PLBADDRACK; // net ID: PPCS1PLBADDRACK lsb: 0  msb: 0 OUTPUT
			this->PPCS1PLBMBUSY = PPCS1PLBMBUSY; // net ID: PPCS1PLBMBUSY lsb: 0  msb: 0 OUTPUT
			this->PPCS1PLBMIRQ = PPCS1PLBMIRQ; // net ID: PPCS1PLBMIRQ lsb: 0  msb: 0 OUTPUT
			this->PPCS1PLBMRDERR = PPCS1PLBMRDERR; // net ID: PPCS1PLBMRDERR lsb: 0  msb: 0 OUTPUT
			this->PPCS1PLBMWRERR = PPCS1PLBMWRERR; // net ID: PPCS1PLBMWRERR lsb: 0  msb: 0 OUTPUT
			this->PPCS1PLBRDBTERM = PPCS1PLBRDBTERM; // net ID: PPCS1PLBRDBTERM lsb: 0  msb: 0 OUTPUT
			this->PPCS1PLBRDCOMP = PPCS1PLBRDCOMP; // net ID: PPCS1PLBRDCOMP lsb: 0  msb: 0 OUTPUT
			this->PPCS1PLBRDDACK = PPCS1PLBRDDACK; // net ID: PPCS1PLBRDDACK lsb: 0  msb: 0 OUTPUT
			this->PPCS1PLBRDDBUS = PPCS1PLBRDDBUS; // net ID: PPCS1PLBRDDBUS lsb: 0  msb: 0 OUTPUT
			this->PPCS1PLBRDWDADDR = PPCS1PLBRDWDADDR; // net ID: PPCS1PLBRDWDADDR lsb: 0  msb: 0 OUTPUT
			this->PPCS1PLBREARBITRATE = PPCS1PLBREARBITRATE; // net ID: PPCS1PLBREARBITRATE lsb: 0  msb: 0 OUTPUT
			this->PPCS1PLBSSIZE = PPCS1PLBSSIZE; // net ID: PPCS1PLBSSIZE lsb: 0  msb: 0 OUTPUT
			this->PPCS1PLBWAIT = PPCS1PLBWAIT; // net ID: PPCS1PLBWAIT lsb: 0  msb: 0 OUTPUT
			this->PPCS1PLBWRBTERM = PPCS1PLBWRBTERM; // net ID: PPCS1PLBWRBTERM lsb: 0  msb: 0 OUTPUT
			this->PPCS1PLBWRCOMP = PPCS1PLBWRCOMP; // net ID: PPCS1PLBWRCOMP lsb: 0  msb: 0 OUTPUT
			this->PPCS1PLBWRDACK = PPCS1PLBWRDACK; // net ID: PPCS1PLBWRDACK lsb: 0  msb: 0 OUTPUT
			this->CPMC440CLK = CPMC440CLK; // net ID: CPMC440CLK lsb: 0  msb: 0 INPUT
			this->CPMC440CLKEN = CPMC440CLKEN; // net ID: CPMC440CLKEN lsb: 0  msb: 0 INPUT
			this->CPMC440CORECLOCKINACTIVE = CPMC440CORECLOCKINACTIVE; // net ID: CPMC440CORECLOCKINACTIVE lsb: 0  msb: 0 INPUT
			this->CPMC440TIMERCLOCK = CPMC440TIMERCLOCK; // net ID: CPMC440TIMERCLOCK lsb: 0  msb: 0 INPUT
			this->CPMDCRCLK = CPMDCRCLK; // net ID: CPMDCRCLK lsb: 0  msb: 0 INPUT
			this->CPMDMA0LLCLK = CPMDMA0LLCLK; // net ID: CPMDMA0LLCLK lsb: 0  msb: 0 INPUT
			this->CPMDMA1LLCLK = CPMDMA1LLCLK; // net ID: CPMDMA1LLCLK lsb: 0  msb: 0 INPUT
			this->CPMDMA2LLCLK = CPMDMA2LLCLK; // net ID: CPMDMA2LLCLK lsb: 0  msb: 0 INPUT
			this->CPMDMA3LLCLK = CPMDMA3LLCLK; // net ID: CPMDMA3LLCLK lsb: 0  msb: 0 INPUT
			this->CPMFCMCLK = CPMFCMCLK; // net ID: CPMFCMCLK lsb: 0  msb: 0 INPUT
			this->CPMINTERCONNECTCLK = CPMINTERCONNECTCLK; // net ID: CPMINTERCONNECTCLK lsb: 0  msb: 0 INPUT
			this->CPMINTERCONNECTCLKEN = CPMINTERCONNECTCLKEN; // net ID: CPMINTERCONNECTCLKEN lsb: 0  msb: 0 INPUT
			this->CPMINTERCONNECTCLKNTO1 = CPMINTERCONNECTCLKNTO1; // net ID: CPMINTERCONNECTCLKNTO1 lsb: 0  msb: 0 INPUT
			this->CPMMCCLK = CPMMCCLK; // net ID: CPMMCCLK lsb: 0  msb: 0 INPUT
			this->CPMPPCMPLBCLK = CPMPPCMPLBCLK; // net ID: CPMPPCMPLBCLK lsb: 0  msb: 0 INPUT
			this->CPMPPCS0PLBCLK = CPMPPCS0PLBCLK; // net ID: CPMPPCS0PLBCLK lsb: 0  msb: 0 INPUT
			this->CPMPPCS1PLBCLK = CPMPPCS1PLBCLK; // net ID: CPMPPCS1PLBCLK lsb: 0  msb: 0 INPUT
			this->DBGC440DEBUGHALT = DBGC440DEBUGHALT; // net ID: DBGC440DEBUGHALT lsb: 0  msb: 0 INPUT
			this->DBGC440SYSTEMSTATUS = DBGC440SYSTEMSTATUS; // net ID: DBGC440SYSTEMSTATUS lsb: 4  msb: 0 INPUT
			this->DBGC440UNCONDDEBUGEVENT = DBGC440UNCONDDEBUGEVENT; // net ID: DBGC440UNCONDDEBUGEVENT lsb: 0  msb: 0 INPUT
			this->DCRPPCDMACK = DCRPPCDMACK; // net ID: DCRPPCDMACK lsb: 0  msb: 0 INPUT
			this->DCRPPCDMDBUSIN = DCRPPCDMDBUSIN; // net ID: DCRPPCDMDBUSIN lsb: 31  msb: 0 INPUT
			this->DCRPPCDMTIMEOUTWAIT = DCRPPCDMTIMEOUTWAIT; // net ID: DCRPPCDMTIMEOUTWAIT lsb: 0  msb: 0 INPUT
			this->DCRPPCDSABUS = DCRPPCDSABUS; // net ID: DCRPPCDSABUS lsb: 9  msb: 0 INPUT
			this->DCRPPCDSDBUSOUT = DCRPPCDSDBUSOUT; // net ID: DCRPPCDSDBUSOUT lsb: 31  msb: 0 INPUT
			this->DCRPPCDSREAD = DCRPPCDSREAD; // net ID: DCRPPCDSREAD lsb: 0  msb: 0 INPUT
			this->DCRPPCDSWRITE = DCRPPCDSWRITE; // net ID: DCRPPCDSWRITE lsb: 0  msb: 0 INPUT
			this->EICC440CRITIRQ = EICC440CRITIRQ; // net ID: EICC440CRITIRQ lsb: 0  msb: 0 INPUT
			this->EICC440EXTIRQ = EICC440EXTIRQ; // net ID: EICC440EXTIRQ lsb: 0  msb: 0 INPUT
			this->FCMAPUCONFIRMINSTR = FCMAPUCONFIRMINSTR; // net ID: FCMAPUCONFIRMINSTR lsb: 0  msb: 0 INPUT
			this->FCMAPUCR = FCMAPUCR; // net ID: FCMAPUCR lsb: 3  msb: 0 INPUT
			this->FCMAPUDONE = FCMAPUDONE; // net ID: FCMAPUDONE lsb: 0  msb: 0 INPUT
			this->FCMAPUEXCEPTION = FCMAPUEXCEPTION; // net ID: FCMAPUEXCEPTION lsb: 0  msb: 0 INPUT
			this->FCMAPUFPSCRFEX = FCMAPUFPSCRFEX; // net ID: FCMAPUFPSCRFEX lsb: 0  msb: 0 INPUT
			this->FCMAPURESULT = FCMAPURESULT; // net ID: FCMAPURESULT lsb: 31  msb: 0 INPUT
			this->FCMAPURESULTVALID = FCMAPURESULTVALID; // net ID: FCMAPURESULTVALID lsb: 0  msb: 0 INPUT
			this->FCMAPUSLEEPNOTREADY = FCMAPUSLEEPNOTREADY; // net ID: FCMAPUSLEEPNOTREADY lsb: 0  msb: 0 INPUT
			this->FCMAPUSTOREDATA = FCMAPUSTOREDATA; // net ID: FCMAPUSTOREDATA lsb: 127  msb: 0 INPUT
			this->JTGC440TCK = JTGC440TCK; // net ID: JTGC440TCK lsb: 0  msb: 0 INPUT
			this->JTGC440TDI = JTGC440TDI; // net ID: JTGC440TDI lsb: 0  msb: 0 INPUT
			this->JTGC440TMS = JTGC440TMS; // net ID: JTGC440TMS lsb: 0  msb: 0 INPUT
			this->JTGC440TRSTNEG = JTGC440TRSTNEG; // net ID: JTGC440TRSTNEG lsb: 0  msb: 0 INPUT
			this->LLDMA0RSTENGINEREQ = LLDMA0RSTENGINEREQ; // net ID: LLDMA0RSTENGINEREQ lsb: 0  msb: 0 INPUT
			this->LLDMA0RXD = LLDMA0RXD; // net ID: LLDMA0RXD lsb: 31  msb: 0 INPUT
			this->LLDMA0RXEOFN = LLDMA0RXEOFN; // net ID: LLDMA0RXEOFN lsb: 0  msb: 0 INPUT
			this->LLDMA0RXEOPN = LLDMA0RXEOPN; // net ID: LLDMA0RXEOPN lsb: 0  msb: 0 INPUT
			this->LLDMA0RXREM = LLDMA0RXREM; // net ID: LLDMA0RXREM lsb: 3  msb: 0 INPUT
			this->LLDMA0RXSOFN = LLDMA0RXSOFN; // net ID: LLDMA0RXSOFN lsb: 0  msb: 0 INPUT
			this->LLDMA0RXSOPN = LLDMA0RXSOPN; // net ID: LLDMA0RXSOPN lsb: 0  msb: 0 INPUT
			this->LLDMA0RXSRCRDYN = LLDMA0RXSRCRDYN; // net ID: LLDMA0RXSRCRDYN lsb: 0  msb: 0 INPUT
			this->LLDMA0TXDSTRDYN = LLDMA0TXDSTRDYN; // net ID: LLDMA0TXDSTRDYN lsb: 0  msb: 0 INPUT
			this->LLDMA1RSTENGINEREQ = LLDMA1RSTENGINEREQ; // net ID: LLDMA1RSTENGINEREQ lsb: 0  msb: 0 INPUT
			this->LLDMA1RXD = LLDMA1RXD; // net ID: LLDMA1RXD lsb: 31  msb: 0 INPUT
			this->LLDMA1RXEOFN = LLDMA1RXEOFN; // net ID: LLDMA1RXEOFN lsb: 0  msb: 0 INPUT
			this->LLDMA1RXEOPN = LLDMA1RXEOPN; // net ID: LLDMA1RXEOPN lsb: 0  msb: 0 INPUT
			this->LLDMA1RXREM = LLDMA1RXREM; // net ID: LLDMA1RXREM lsb: 3  msb: 0 INPUT
			this->LLDMA1RXSOFN = LLDMA1RXSOFN; // net ID: LLDMA1RXSOFN lsb: 0  msb: 0 INPUT
			this->LLDMA1RXSOPN = LLDMA1RXSOPN; // net ID: LLDMA1RXSOPN lsb: 0  msb: 0 INPUT
			this->LLDMA1RXSRCRDYN = LLDMA1RXSRCRDYN; // net ID: LLDMA1RXSRCRDYN lsb: 0  msb: 0 INPUT
			this->LLDMA1TXDSTRDYN = LLDMA1TXDSTRDYN; // net ID: LLDMA1TXDSTRDYN lsb: 0  msb: 0 INPUT
			this->LLDMA2RSTENGINEREQ = LLDMA2RSTENGINEREQ; // net ID: LLDMA2RSTENGINEREQ lsb: 0  msb: 0 INPUT
			this->LLDMA2RXD = LLDMA2RXD; // net ID: LLDMA2RXD lsb: 31  msb: 0 INPUT
			this->LLDMA2RXEOFN = LLDMA2RXEOFN; // net ID: LLDMA2RXEOFN lsb: 0  msb: 0 INPUT
			this->LLDMA2RXEOPN = LLDMA2RXEOPN; // net ID: LLDMA2RXEOPN lsb: 0  msb: 0 INPUT
			this->LLDMA2RXREM = LLDMA2RXREM; // net ID: LLDMA2RXREM lsb: 3  msb: 0 INPUT
			this->LLDMA2RXSOFN = LLDMA2RXSOFN; // net ID: LLDMA2RXSOFN lsb: 0  msb: 0 INPUT
			this->LLDMA2RXSOPN = LLDMA2RXSOPN; // net ID: LLDMA2RXSOPN lsb: 0  msb: 0 INPUT
			this->LLDMA2RXSRCRDYN = LLDMA2RXSRCRDYN; // net ID: LLDMA2RXSRCRDYN lsb: 0  msb: 0 INPUT
			this->LLDMA2TXDSTRDYN = LLDMA2TXDSTRDYN; // net ID: LLDMA2TXDSTRDYN lsb: 0  msb: 0 INPUT
			this->LLDMA3RSTENGINEREQ = LLDMA3RSTENGINEREQ; // net ID: LLDMA3RSTENGINEREQ lsb: 0  msb: 0 INPUT
			this->LLDMA3RXD = LLDMA3RXD; // net ID: LLDMA3RXD lsb: 31  msb: 0 INPUT
			this->LLDMA3RXEOFN = LLDMA3RXEOFN; // net ID: LLDMA3RXEOFN lsb: 0  msb: 0 INPUT
			this->LLDMA3RXEOPN = LLDMA3RXEOPN; // net ID: LLDMA3RXEOPN lsb: 0  msb: 0 INPUT
			this->LLDMA3RXREM = LLDMA3RXREM; // net ID: LLDMA3RXREM lsb: 3  msb: 0 INPUT
			this->LLDMA3RXSOFN = LLDMA3RXSOFN; // net ID: LLDMA3RXSOFN lsb: 0  msb: 0 INPUT
			this->LLDMA3RXSOPN = LLDMA3RXSOPN; // net ID: LLDMA3RXSOPN lsb: 0  msb: 0 INPUT
			this->LLDMA3RXSRCRDYN = LLDMA3RXSRCRDYN; // net ID: LLDMA3RXSRCRDYN lsb: 0  msb: 0 INPUT
			this->LLDMA3TXDSTRDYN = LLDMA3TXDSTRDYN; // net ID: LLDMA3TXDSTRDYN lsb: 0  msb: 0 INPUT
			this->MCMIADDRREADYTOACCEPT = MCMIADDRREADYTOACCEPT; // net ID: MCMIADDRREADYTOACCEPT lsb: 0  msb: 0 INPUT
			this->MCMIREADDATA = MCMIREADDATA; // net ID: MCMIREADDATA lsb: 127  msb: 0 INPUT
			this->MCMIREADDATAERR = MCMIREADDATAERR; // net ID: MCMIREADDATAERR lsb: 0  msb: 0 INPUT
			this->MCMIREADDATAVALID = MCMIREADDATAVALID; // net ID: MCMIREADDATAVALID lsb: 0  msb: 0 INPUT
			this->PLBPPCMADDRACK = PLBPPCMADDRACK; // net ID: PLBPPCMADDRACK lsb: 0  msb: 0 INPUT
			this->PLBPPCMMBUSY = PLBPPCMMBUSY; // net ID: PLBPPCMMBUSY lsb: 0  msb: 0 INPUT
			this->PLBPPCMMIRQ = PLBPPCMMIRQ; // net ID: PLBPPCMMIRQ lsb: 0  msb: 0 INPUT
			this->PLBPPCMMRDERR = PLBPPCMMRDERR; // net ID: PLBPPCMMRDERR lsb: 0  msb: 0 INPUT
			this->PLBPPCMMWRERR = PLBPPCMMWRERR; // net ID: PLBPPCMMWRERR lsb: 0  msb: 0 INPUT
			this->PLBPPCMRDBTERM = PLBPPCMRDBTERM; // net ID: PLBPPCMRDBTERM lsb: 0  msb: 0 INPUT
			this->PLBPPCMRDDACK = PLBPPCMRDDACK; // net ID: PLBPPCMRDDACK lsb: 0  msb: 0 INPUT
			this->PLBPPCMRDDBUS = PLBPPCMRDDBUS; // net ID: PLBPPCMRDDBUS lsb: 127  msb: 0 INPUT
			this->PLBPPCMRDPENDPRI = PLBPPCMRDPENDPRI; // net ID: PLBPPCMRDPENDPRI lsb: 1  msb: 0 INPUT
			this->PLBPPCMRDPENDREQ = PLBPPCMRDPENDREQ; // net ID: PLBPPCMRDPENDREQ lsb: 0  msb: 0 INPUT
			this->PLBPPCMRDWDADDR = PLBPPCMRDWDADDR; // net ID: PLBPPCMRDWDADDR lsb: 3  msb: 0 INPUT
			this->PLBPPCMREARBITRATE = PLBPPCMREARBITRATE; // net ID: PLBPPCMREARBITRATE lsb: 0  msb: 0 INPUT
			this->PLBPPCMREQPRI = PLBPPCMREQPRI; // net ID: PLBPPCMREQPRI lsb: 1  msb: 0 INPUT
			this->PLBPPCMSSIZE = PLBPPCMSSIZE; // net ID: PLBPPCMSSIZE lsb: 1  msb: 0 INPUT
			this->PLBPPCMTIMEOUT = PLBPPCMTIMEOUT; // net ID: PLBPPCMTIMEOUT lsb: 0  msb: 0 INPUT
			this->PLBPPCMWRBTERM = PLBPPCMWRBTERM; // net ID: PLBPPCMWRBTERM lsb: 0  msb: 0 INPUT
			this->PLBPPCMWRDACK = PLBPPCMWRDACK; // net ID: PLBPPCMWRDACK lsb: 0  msb: 0 INPUT
			this->PLBPPCMWRPENDPRI = PLBPPCMWRPENDPRI; // net ID: PLBPPCMWRPENDPRI lsb: 1  msb: 0 INPUT
			this->PLBPPCMWRPENDREQ = PLBPPCMWRPENDREQ; // net ID: PLBPPCMWRPENDREQ lsb: 0  msb: 0 INPUT
			this->PLBPPCS0ABORT = PLBPPCS0ABORT; // net ID: PLBPPCS0ABORT lsb: 0  msb: 0 INPUT
			this->PLBPPCS0ABUS = PLBPPCS0ABUS; // net ID: PLBPPCS0ABUS lsb: 31  msb: 0 INPUT
			this->PLBPPCS0BE = PLBPPCS0BE; // net ID: PLBPPCS0BE lsb: 15  msb: 0 INPUT
			this->PLBPPCS0BUSLOCK = PLBPPCS0BUSLOCK; // net ID: PLBPPCS0BUSLOCK lsb: 0  msb: 0 INPUT
			this->PLBPPCS0LOCKERR = PLBPPCS0LOCKERR; // net ID: PLBPPCS0LOCKERR lsb: 0  msb: 0 INPUT
			this->PLBPPCS0MASTERID = PLBPPCS0MASTERID; // net ID: PLBPPCS0MASTERID lsb: 1  msb: 0 INPUT
			this->PLBPPCS0MSIZE = PLBPPCS0MSIZE; // net ID: PLBPPCS0MSIZE lsb: 1  msb: 0 INPUT
			this->PLBPPCS0PAVALID = PLBPPCS0PAVALID; // net ID: PLBPPCS0PAVALID lsb: 0  msb: 0 INPUT
			this->PLBPPCS0RDBURST = PLBPPCS0RDBURST; // net ID: PLBPPCS0RDBURST lsb: 0  msb: 0 INPUT
			this->PLBPPCS0RDPENDPRI = PLBPPCS0RDPENDPRI; // net ID: PLBPPCS0RDPENDPRI lsb: 1  msb: 0 INPUT
			this->PLBPPCS0RDPENDREQ = PLBPPCS0RDPENDREQ; // net ID: PLBPPCS0RDPENDREQ lsb: 0  msb: 0 INPUT
			this->PLBPPCS0RDPRIM = PLBPPCS0RDPRIM; // net ID: PLBPPCS0RDPRIM lsb: 0  msb: 0 INPUT
			this->PLBPPCS0REQPRI = PLBPPCS0REQPRI; // net ID: PLBPPCS0REQPRI lsb: 1  msb: 0 INPUT
			this->PLBPPCS0RNW = PLBPPCS0RNW; // net ID: PLBPPCS0RNW lsb: 0  msb: 0 INPUT
			this->PLBPPCS0SAVALID = PLBPPCS0SAVALID; // net ID: PLBPPCS0SAVALID lsb: 0  msb: 0 INPUT
			this->PLBPPCS0SIZE = PLBPPCS0SIZE; // net ID: PLBPPCS0SIZE lsb: 3  msb: 0 INPUT
			this->PLBPPCS0TATTRIBUTE = PLBPPCS0TATTRIBUTE; // net ID: PLBPPCS0TATTRIBUTE lsb: 15  msb: 0 INPUT
			this->PLBPPCS0TYPE = PLBPPCS0TYPE; // net ID: PLBPPCS0TYPE lsb: 2  msb: 0 INPUT
			this->PLBPPCS0UABUS = PLBPPCS0UABUS; // net ID: PLBPPCS0UABUS lsb: 31  msb: 28 INPUT
			this->PLBPPCS0WRBURST = PLBPPCS0WRBURST; // net ID: PLBPPCS0WRBURST lsb: 0  msb: 0 INPUT
			this->PLBPPCS0WRDBUS = PLBPPCS0WRDBUS; // net ID: PLBPPCS0WRDBUS lsb: 127  msb: 0 INPUT
			this->PLBPPCS0WRPENDPRI = PLBPPCS0WRPENDPRI; // net ID: PLBPPCS0WRPENDPRI lsb: 1  msb: 0 INPUT
			this->PLBPPCS0WRPENDREQ = PLBPPCS0WRPENDREQ; // net ID: PLBPPCS0WRPENDREQ lsb: 0  msb: 0 INPUT
			this->PLBPPCS0WRPRIM = PLBPPCS0WRPRIM; // net ID: PLBPPCS0WRPRIM lsb: 0  msb: 0 INPUT
			this->PLBPPCS1ABORT = PLBPPCS1ABORT; // net ID: PLBPPCS1ABORT lsb: 0  msb: 0 INPUT
			this->PLBPPCS1ABUS = PLBPPCS1ABUS; // net ID: PLBPPCS1ABUS lsb: 31  msb: 0 INPUT
			this->PLBPPCS1BE = PLBPPCS1BE; // net ID: PLBPPCS1BE lsb: 15  msb: 0 INPUT
			this->PLBPPCS1BUSLOCK = PLBPPCS1BUSLOCK; // net ID: PLBPPCS1BUSLOCK lsb: 0  msb: 0 INPUT
			this->PLBPPCS1LOCKERR = PLBPPCS1LOCKERR; // net ID: PLBPPCS1LOCKERR lsb: 0  msb: 0 INPUT
			this->PLBPPCS1MASTERID = PLBPPCS1MASTERID; // net ID: PLBPPCS1MASTERID lsb: 1  msb: 0 INPUT
			this->PLBPPCS1MSIZE = PLBPPCS1MSIZE; // net ID: PLBPPCS1MSIZE lsb: 1  msb: 0 INPUT
			this->PLBPPCS1PAVALID = PLBPPCS1PAVALID; // net ID: PLBPPCS1PAVALID lsb: 0  msb: 0 INPUT
			this->PLBPPCS1RDBURST = PLBPPCS1RDBURST; // net ID: PLBPPCS1RDBURST lsb: 0  msb: 0 INPUT
			this->PLBPPCS1RDPENDPRI = PLBPPCS1RDPENDPRI; // net ID: PLBPPCS1RDPENDPRI lsb: 1  msb: 0 INPUT
			this->PLBPPCS1RDPENDREQ = PLBPPCS1RDPENDREQ; // net ID: PLBPPCS1RDPENDREQ lsb: 0  msb: 0 INPUT
			this->PLBPPCS1RDPRIM = PLBPPCS1RDPRIM; // net ID: PLBPPCS1RDPRIM lsb: 0  msb: 0 INPUT
			this->PLBPPCS1REQPRI = PLBPPCS1REQPRI; // net ID: PLBPPCS1REQPRI lsb: 1  msb: 0 INPUT
			this->PLBPPCS1RNW = PLBPPCS1RNW; // net ID: PLBPPCS1RNW lsb: 0  msb: 0 INPUT
			this->PLBPPCS1SAVALID = PLBPPCS1SAVALID; // net ID: PLBPPCS1SAVALID lsb: 0  msb: 0 INPUT
			this->PLBPPCS1SIZE = PLBPPCS1SIZE; // net ID: PLBPPCS1SIZE lsb: 3  msb: 0 INPUT
			this->PLBPPCS1TATTRIBUTE = PLBPPCS1TATTRIBUTE; // net ID: PLBPPCS1TATTRIBUTE lsb: 15  msb: 0 INPUT
			this->PLBPPCS1TYPE = PLBPPCS1TYPE; // net ID: PLBPPCS1TYPE lsb: 2  msb: 0 INPUT
			this->PLBPPCS1UABUS = PLBPPCS1UABUS; // net ID: PLBPPCS1UABUS lsb: 31  msb: 28 INPUT
			this->PLBPPCS1WRBURST = PLBPPCS1WRBURST; // net ID: PLBPPCS1WRBURST lsb: 0  msb: 0 INPUT
			this->PLBPPCS1WRDBUS = PLBPPCS1WRDBUS; // net ID: PLBPPCS1WRDBUS lsb: 127  msb: 0 INPUT
			this->PLBPPCS1WRPENDPRI = PLBPPCS1WRPENDPRI; // net ID: PLBPPCS1WRPENDPRI lsb: 1  msb: 0 INPUT
			this->PLBPPCS1WRPENDREQ = PLBPPCS1WRPENDREQ; // net ID: PLBPPCS1WRPENDREQ lsb: 0  msb: 0 INPUT
			this->PLBPPCS1WRPRIM = PLBPPCS1WRPRIM; // net ID: PLBPPCS1WRPRIM lsb: 0  msb: 0 INPUT
			this->RSTC440RESETCHIP = RSTC440RESETCHIP; // net ID: RSTC440RESETCHIP lsb: 0  msb: 0 INPUT
			this->RSTC440RESETCORE = RSTC440RESETCORE; // net ID: RSTC440RESETCORE lsb: 0  msb: 0 INPUT
			this->RSTC440RESETSYSTEM = RSTC440RESETSYSTEM; // net ID: RSTC440RESETSYSTEM lsb: 0  msb: 0 INPUT
			this->TIEC440DCURDLDCACHEPLBPRIO = TIEC440DCURDLDCACHEPLBPRIO; // net ID: TIEC440DCURDLDCACHEPLBPRIO lsb: 1  msb: 0 INPUT
			this->TIEC440DCURDNONCACHEPLBPRIO = TIEC440DCURDNONCACHEPLBPRIO; // net ID: TIEC440DCURDNONCACHEPLBPRIO lsb: 1  msb: 0 INPUT
			this->TIEC440DCURDTOUCHPLBPRIO = TIEC440DCURDTOUCHPLBPRIO; // net ID: TIEC440DCURDTOUCHPLBPRIO lsb: 1  msb: 0 INPUT
			this->TIEC440DCURDURGENTPLBPRIO = TIEC440DCURDURGENTPLBPRIO; // net ID: TIEC440DCURDURGENTPLBPRIO lsb: 1  msb: 0 INPUT
			this->TIEC440DCUWRFLUSHPLBPRIO = TIEC440DCUWRFLUSHPLBPRIO; // net ID: TIEC440DCUWRFLUSHPLBPRIO lsb: 1  msb: 0 INPUT
			this->TIEC440DCUWRSTOREPLBPRIO = TIEC440DCUWRSTOREPLBPRIO; // net ID: TIEC440DCUWRSTOREPLBPRIO lsb: 1  msb: 0 INPUT
			this->TIEC440DCUWRURGENTPLBPRIO = TIEC440DCUWRURGENTPLBPRIO; // net ID: TIEC440DCUWRURGENTPLBPRIO lsb: 1  msb: 0 INPUT
			this->TIEC440ENDIANRESET = TIEC440ENDIANRESET; // net ID: TIEC440ENDIANRESET lsb: 0  msb: 0 INPUT
			this->TIEC440ERPNRESET = TIEC440ERPNRESET; // net ID: TIEC440ERPNRESET lsb: 3  msb: 0 INPUT
			this->TIEC440ICURDFETCHPLBPRIO = TIEC440ICURDFETCHPLBPRIO; // net ID: TIEC440ICURDFETCHPLBPRIO lsb: 1  msb: 0 INPUT
			this->TIEC440ICURDSPECPLBPRIO = TIEC440ICURDSPECPLBPRIO; // net ID: TIEC440ICURDSPECPLBPRIO lsb: 1  msb: 0 INPUT
			this->TIEC440ICURDTOUCHPLBPRIO = TIEC440ICURDTOUCHPLBPRIO; // net ID: TIEC440ICURDTOUCHPLBPRIO lsb: 1  msb: 0 INPUT
			this->TIEC440PIR = TIEC440PIR; // net ID: TIEC440PIR lsb: 31  msb: 28 INPUT
			this->TIEC440PVR = TIEC440PVR; // net ID: TIEC440PVR lsb: 31  msb: 28 INPUT
			this->TIEC440USERRESET = TIEC440USERRESET; // net ID: TIEC440USERRESET lsb: 3  msb: 0 INPUT
			this->TIEDCRBASEADDR = TIEDCRBASEADDR; // net ID: TIEDCRBASEADDR lsb: 1  msb: 0 INPUT
			this->TRCC440TRACEDISABLE = TRCC440TRACEDISABLE; // net ID: TRCC440TRACEDISABLE lsb: 0  msb: 0 INPUT
			this->TRCC440TRIGGEREVENTIN = TRCC440TRIGGEREVENTIN; // net ID: TRCC440TRIGGEREVENTIN lsb: 0  msb: 0 INPUT
			
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
