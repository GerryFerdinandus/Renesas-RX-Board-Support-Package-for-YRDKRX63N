/***************************************************************/
/*                                                             */
/*      PROJECT NAME :  test1                                  */
/*      FILE         :  interrupt_handlers.c                   */
/*      DESCRIPTION  :  Interrupt Handler                      */
/*      CPU SERIES   :  RX600                                  */
/*      CPU TYPE     :  RX63N                                  */
/*                                                             */
/*      This file is generated by e2 studio.                   */
/*                                                             */
/***************************************************************/                                
                                                                           
                                                                           
                                                                           
                                                                          
/************************************************************************/
/*    File Version: V1.80                                               */
/*    History : 1.00  (2012-06-12)  [Hardware Manual Revision : 1.00]   */
/*            : 1.10  (2013-02-18)  [Hardware Manual Revision : 1.00]   */
/*            : 1.80  (2015-04-22)  [Hardware Manual Revision : 1.80]   */
/*    Date Generated: 25/05/2015                                        */
/************************************************************************/

#include "interrupt_handlers.h"

/* INT_Exception(Supervisor Instruction)*/
void INT_Excep_SuperVisorInst(void){
	// Intentionally unimplemented...
}

/* INT_Exception(Access Instruction)*/
void INT_Excep_AccessInst(void){
// Intentionally unimplemented...
}


/* INT_Exception(Undefined Instruction)*/
void INT_Excep_UndefinedInst(void){
// Intentionally unimplemented...
}

/* INT_Exception(Floating Point)*/
void INT_Excep_FloatingPoint(void){
// Intentionally unimplemented...
}

/* NMI*/
void INT_NonMaskableInterrupt(void){
// Intentionally unimplemented...
}

/* Dummy*/
void INT_Dummy(void){
// Intentionally unimplemented...
}

/* BRK*/
void INT_Excep_BRK(void){
// Intentionally unimplemented...
}

/* BSC BUSERR*/
void INT_Excep_BSC_BUSERR(void){
// Intentionally unimplemented...
}

/* FCU FIFERR*/
void INT_Excep_FCU_FIFERR(void){
// Intentionally unimplemented...
}

/* FCU FRDYI*/
void INT_Excep_FCU_FRDYI(void){
// Intentionally unimplemented...
}

/* ICU SWINT*/
void INT_Excep_ICU_SWINT(void){
// Intentionally unimplemented...
}

/* CMT0 CMI0*/
void INT_Excep_CMT0_CMI0(void){
// Intentionally unimplemented...
}

/* CMT1 CMI1*/
void INT_Excep_CMT1_CMI1(void){
// Intentionally unimplemented...
}

/* CMT2 CMI2*/
void INT_Excep_CMT2_CMI2(void){
// Intentionally unimplemented...
}

/* CMT3 CMI3*/
void INT_Excep_CMT3_CMI3(void){
// Intentionally unimplemented...
}

/* ETHER EINT*/
void INT_Excep_ETHER_EINT(void){
// Intentionally unimplemented...
}

/* USB0 D0FIFO0*/
void INT_Excep_USB0_D0FIFO0(void){
// Intentionally unimplemented...
}

/* USB0 D1FIFO0*/
void INT_Excep_USB0_D1FIFO0(void){
// Intentionally unimplemented...
}

/* USB0 USBI0*/
void INT_Excep_USB0_USBI0(void){
// Intentionally unimplemented...
}

/* USB1 D0FIFO1*/
void INT_Excep_USB1_D0FIFO1(void){
// Intentionally unimplemented...
}

/* USB1 D1FIFO1*/
void INT_Excep_USB1_D1FIFO1(void){
// Intentionally unimplemented...
}

/* USB1 USBI1*/
void INT_Excep_USB1_USBI1(void){
// Intentionally unimplemented...
}

/* RSPI0 SPRI0*/
void INT_Excep_RSPI0_SPRI0(void){
// Intentionally unimplemented...
}

/* RSPI0 SPTI0*/
void INT_Excep_RSPI0_SPTI0(void){
// Intentionally unimplemented...
}

/* RSPI0 SPII0*/
void INT_Excep_RSPI0_SPII0(void){
// Intentionally unimplemented...
}

/* RSPI1 SPRI1*/
void INT_Excep_RSPI1_SPRI1(void){
// Intentionally unimplemented...
}

/* RSPI1 SPTI1*/
void INT_Excep_RSPI1_SPTI1(void){
// Intentionally unimplemented...
}

/* RSPI1 SPII1*/
void INT_Excep_RSPI1_SPII1(void){
// Intentionally unimplemented...
}

/* RSPI2 SPRI2*/
void INT_Excep_RSPI2_SPRI2(void){
// Intentionally unimplemented...
}

/* RSPI2 SPTI2*/
void INT_Excep_RSPI2_SPTI2(void){
// Intentionally unimplemented...
}

/* RSPI2 SPII2*/
void INT_Excep_RSPI2_SPII2(void){
// Intentionally unimplemented...
}

/* CAN0 RXF0*/
void INT_Excep_CAN0_RXF0(void){
// Intentionally unimplemented...
}

/* CAN0 TXF0*/
void INT_Excep_CAN0_TXF0(void){
// Intentionally unimplemented...
}

/* CAN0 RXM0*/
void INT_Excep_CAN0_RXM0(void){
// Intentionally unimplemented...
}

/* CAN0 TXM0*/
void INT_Excep_CAN0_TXM0(void){
// Intentionally unimplemented...
}

/* CAN1 RXF1*/
void INT_Excep_CAN1_RXF1(void){
// Intentionally unimplemented...
}

/* CAN1 TXF1*/
void INT_Excep_CAN1_TXF1(void){
// Intentionally unimplemented...
}

/* CAN1 RXM1*/
void INT_Excep_CAN1_RXM1(void){
// Intentionally unimplemented...
}

/* CAN1 TXM1*/
void INT_Excep_CAN1_TXM1(void){
// Intentionally unimplemented...
}

/* CAN2 RXF2*/
void INT_Excep_CAN2_RXF2(void){
// Intentionally unimplemented...
}

/* CAN2 TXF2*/
void INT_Excep_CAN2_TXF2(void){
// Intentionally unimplemented...
}

/* CAN2 RXM2*/
void INT_Excep_CAN2_RXM2(void){
// Intentionally unimplemented...
}

/* CAN2 TXM2*/
void INT_Excep_CAN2_TXM2(void){
// Intentionally unimplemented...
}

/* RTC CUP*/
void INT_Excep_RTC_CUP(void){
// Intentionally unimplemented...
}

/* ICU IRQ0*/
void INT_Excep_ICU_IRQ0(void){
// Intentionally unimplemented...
}

/* ICU IRQ1*/
void INT_Excep_ICU_IRQ1(void){
// Intentionally unimplemented...
}

/* ICU IRQ2*/
void INT_Excep_ICU_IRQ2(void){
// Intentionally unimplemented...
}

/* ICU IRQ3*/
void INT_Excep_ICU_IRQ3(void){
// Intentionally unimplemented...
}

/* ICU IRQ4*/
void INT_Excep_ICU_IRQ4(void){
// Intentionally unimplemented...
}

/* ICU IRQ5*/
void INT_Excep_ICU_IRQ5(void){
// Intentionally unimplemented...
}

/* ICU IRQ6*/
void INT_Excep_ICU_IRQ6(void){
// Intentionally unimplemented...
}

/* ICU IRQ7*/
void INT_Excep_ICU_IRQ7(void){
// Intentionally unimplemented...
}

/* ICU IRQ8*/
void INT_Excep_ICU_IRQ8(void){
// Intentionally unimplemented...
}

/* ICU IRQ9*/
void INT_Excep_ICU_IRQ9(void){
// Intentionally unimplemented...
}

/* ICU IRQ10*/
void INT_Excep_ICU_IRQ10(void){
// Intentionally unimplemented...
}

/* ICU IRQ11*/
void INT_Excep_ICU_IRQ11(void){
// Intentionally unimplemented...
}

/* ICU IRQ12*/
void INT_Excep_ICU_IRQ12(void){
// Intentionally unimplemented...
}

/* ICU IRQ13*/
void INT_Excep_ICU_IRQ13(void){
// Intentionally unimplemented...
}

/* ICU IRQ14*/
void INT_Excep_ICU_IRQ14(void){
// Intentionally unimplemented...
}

/* ICU IRQ15*/
void INT_Excep_ICU_IRQ15(void){
// Intentionally unimplemented...
}

/* USB USBR0*/
void INT_Excep_USB_USBR0(void){
// Intentionally unimplemented...
}

/* USB USBR1*/
void INT_Excep_USB_USBR1(void){
// Intentionally unimplemented...
}

/* RTC ALM*/
void INT_Excep_RTC_ALM(void){
// Intentionally unimplemented...
}

/* RTC PRD*/
void INT_Excep_RTC_PRD(void){
// Intentionally unimplemented...
}

/* AD ADI0*/
void INT_Excep_AD_ADI0(void){
// Intentionally unimplemented...
}

/* S12AD S12ADI0*/
void INT_Excep_S12AD_S12ADI0(void){
// Intentionally unimplemented...
}

/* ICU GROUP0*/
void INT_Excep_ICU_GROUP0(void){
// Intentionally unimplemented...
}

/* ICU GROUP1*/
void INT_Excep_ICU_GROUP1(void){
// Intentionally unimplemented...
}

/* ICU GROUP2*/
void INT_Excep_ICU_GROUP2(void){
// Intentionally unimplemented...
}

/* ICU GROUP3*/
void INT_Excep_ICU_GROUP3(void){
// Intentionally unimplemented...
}

/* ICU GROUP4*/
void INT_Excep_ICU_GROUP4(void){
// Intentionally unimplemented...
}

/* ICU GROUP5*/
void INT_Excep_ICU_GROUP5(void){
// Intentionally unimplemented...
}

/* ICU GROUP6*/
void INT_Excep_ICU_GROUP6(void){
// Intentionally unimplemented...
}

/* ICU GROUP12*/
void INT_Excep_ICU_GROUP12(void){
// Intentionally unimplemented...
}

/* SCI12 SCIX0*/
void INT_Excep_SCI12_SCIX0(void){
// Intentionally unimplemented...
}

/* SCI12 SCIX1*/
void INT_Excep_SCI12_SCIX1(void){
// Intentionally unimplemented...
}

/* SCI12 SCIX2*/
void INT_Excep_SCI12_SCIX2(void){
// Intentionally unimplemented...
}

/* SCI12 SCIX3*/
void INT_Excep_SCI12_SCIX3(void){
// Intentionally unimplemented...
}

/* TPU0 TGI0A*/
void INT_Excep_TPU0_TGI0A(void){
// Intentionally unimplemented...
}

/* TPU0 TGI0B*/
void INT_Excep_TPU0_TGI0B(void){
// Intentionally unimplemented...
}

/* TPU0 TGI0C*/
void INT_Excep_TPU0_TGI0C(void){
// Intentionally unimplemented...
}

/* TPU0 TGI0D*/
void INT_Excep_TPU0_TGI0D(void){
// Intentionally unimplemented...
}

/* TPU1 TGI1A*/
void INT_Excep_TPU1_TGI1A(void){
// Intentionally unimplemented...
}

/* TPU1 TGI1B*/
void INT_Excep_TPU1_TGI1B(void){
// Intentionally unimplemented...
}

/* TPU2 TGI2A*/
void INT_Excep_TPU2_TGI2A(void){
// Intentionally unimplemented...
}

/* TPU2 TGI2B*/
void INT_Excep_TPU2_TGI2B(void){
// Intentionally unimplemented...
}

/* TPU3 TGI3A*/
void INT_Excep_TPU3_TGI3A(void){
// Intentionally unimplemented...
}

/* TPU3 TGI3B*/
void INT_Excep_TPU3_TGI3B(void){
// Intentionally unimplemented...
}

/* TPU3 TGI3C*/
void INT_Excep_TPU3_TGI3C(void){
// Intentionally unimplemented...
}

/* TPU3 TGI3D*/
void INT_Excep_TPU3_TGI3D(void){
// Intentionally unimplemented...
}

/* TPU4 TGI4A*/
void INT_Excep_TPU4_TGI4A(void){
// Intentionally unimplemented...
}

/* TPU4 TGI4B*/
void INT_Excep_TPU4_TGI4B(void){
// Intentionally unimplemented...
}

/* TPU5 TGI5A*/
void INT_Excep_TPU5_TGI5A(void){
// Intentionally unimplemented...
}

/* TPU5 TGI5B*/
void INT_Excep_TPU5_TGI5B(void){
// Intentionally unimplemented...
}

/* TPU6 TGI6A*/
void INT_Excep_TPU6_TGI6A(void){
// Intentionally unimplemented...
}

/* TPU6 TGI6B*/
void INT_Excep_TPU6_TGI6B(void){
// Intentionally unimplemented...
}

/* TPU6 TGI6C*/
void INT_Excep_TPU6_TGI6C(void){
// Intentionally unimplemented...
}

/* TPU6 TGI6D*/
void INT_Excep_TPU6_TGI6D(void){
// Intentionally unimplemented...
}

/* MTU0 TGIA0*/
//void INT_Excep_MTU0_TGIA0(void){ }

/* MTU0 TGIB0*/
//void INT_Excep_MTU0_TGIB0(void){ }

/* MTU0 TGIC0*/
//void INT_Excep_MTU0_TGIC0(void){ }

/* MTU0 TGID0*/
//void INT_Excep_MTU0_TGID0(void){ }

/* MTU0 TGIE0*/
void INT_Excep_MTU0_TGIE0(void){
// Intentionally unimplemented...
}

/* MTU0 TGIF0*/
void INT_Excep_MTU0_TGIF0(void){
// Intentionally unimplemented...
}

/* TPU7 TGI7A*/
void INT_Excep_TPU7_TGI7A(void){
// Intentionally unimplemented...
}

/* TPU7 TGI7B*/
void INT_Excep_TPU7_TGI7B(void){
// Intentionally unimplemented...
}

/* MTU1 TGIA1*/
//void INT_Excep_MTU1_TGIA1(void){ }

/* MTU1 TGIB1*/
//void INT_Excep_MTU1_TGIB1(void){ }

/* TPU8 TGI8A*/
void INT_Excep_TPU8_TGI8A(void){
// Intentionally unimplemented...
}

/* TPU8 TGI8B*/
void INT_Excep_TPU8_TGI8B(void){
// Intentionally unimplemented...
}

/* MTU2 TGIA2*/
//void INT_Excep_MTU2_TGIA2(void){ }

/* MTU2 TGIB2*/
//void INT_Excep_MTU2_TGIB2(void){ }

/* TPU9 TGI9A*/
void INT_Excep_TPU9_TGI9A(void){
// Intentionally unimplemented...
}

/* TPU9 TGI9B*/
void INT_Excep_TPU9_TGI9B(void){
// Intentionally unimplemented...
}

/* TPU9 TGI9C*/
void INT_Excep_TPU9_TGI9C(void){
// Intentionally unimplemented...
}

/* TPU9 TGI9D*/
void INT_Excep_TPU9_TGI9D(void){
// Intentionally unimplemented...
}

/* MTU3 TGIA3*/
//void INT_Excep_MTU3_TGIA3(void){ }

/* MTU3 TGIB3*/
//void INT_Excep_MTU3_TGIB3(void){ }

/* MTU3 TGIC3*/
//void INT_Excep_MTU3_TGIC3(void){ }

/* MTU3 TGID3*/
//void INT_Excep_MTU3_TGID3(void){ }

/* TPU10 TGI10A*/
void INT_Excep_TPU10_TGI10A(void){
// Intentionally unimplemented...
}

/* TPU10 TGI10B*/
void INT_Excep_TPU10_TGI10B(void){
// Intentionally unimplemented...
}

/* MTU4 TGIA4*/
//void INT_Excep_MTU4_TGIA4(void){ }

/* MTU4 TGIB4*/
//void INT_Excep_MTU4_TGIB4(void){ }

/* MTU4 TGIC4*/
void INT_Excep_MTU4_TGIC4(void){
// Intentionally unimplemented...
}

/* MTU4 TGID4*/
void INT_Excep_MTU4_TGID4(void){
// Intentionally unimplemented...
}

/* MTU4 TCIV4*/
void INT_Excep_MTU4_TCIV4(void){
// Intentionally unimplemented...
}

/* TPU11 TGI11A*/
void INT_Excep_TPU11_TGI11A(void){
// Intentionally unimplemented...
}

/* TPU11 TGI11B*/
void INT_Excep_TPU11_TGI11B(void){
// Intentionally unimplemented...
}

/* MTU5 TGIU5*/
void INT_Excep_MTU5_TGIU5(void){
// Intentionally unimplemented...
}

/* MTU5 TGIV5*/
void INT_Excep_MTU5_TGIV5(void){
// Intentionally unimplemented...
}

/* MTU5 TGIW5*/
void INT_Excep_MTU5_TGIW5(void){
// Intentionally unimplemented...
}

/* POE OEI1*/
void INT_Excep_POE_OEI1(void){
// Intentionally unimplemented...
}

/* POE OEI2*/
void INT_Excep_POE_OEI2(void){
// Intentionally unimplemented...
}

/* TMR0 CMIA0*/
void INT_Excep_TMR0_CMIA0(void){
// Intentionally unimplemented...
}

/* TMR0 CMIB0*/
void INT_Excep_TMR0_CMIB0(void){
// Intentionally unimplemented...
}

/* TMR0 OVI0*/
void INT_Excep_TMR0_OVI0(void){
// Intentionally unimplemented...
}

/* TMR1 CMIA1*/
void INT_Excep_TMR1_CMIA1(void){
// Intentionally unimplemented...
}

/* TMR1 CMIB1*/
void INT_Excep_TMR1_CMIB1(void){
// Intentionally unimplemented...
}

/* TMR1 OVI1*/
void INT_Excep_TMR1_OVI1(void){
// Intentionally unimplemented...
}

/* TMR2 CMIA2*/
void INT_Excep_TMR2_CMIA2(void){
// Intentionally unimplemented...
}

/* TMR2 CMIB2*/
void INT_Excep_TMR2_CMIB2(void){
// Intentionally unimplemented...
}

/* TMR2 OVI2*/
void INT_Excep_TMR2_OVI2(void){
// Intentionally unimplemented...
}

/* TMR3 CMIA3*/
void INT_Excep_TMR3_CMIA3(void){
// Intentionally unimplemented...
}

/* TMR3 CMIB3*/
void INT_Excep_TMR3_CMIB3(void){
// Intentionally unimplemented...
}

/* TMR3 OVI3*/
void INT_Excep_TMR3_OVI3(void){
// Intentionally unimplemented...
}

/* RIIC0 EEI0*/
void INT_Excep_RIIC0_EEI0(void){
// Intentionally unimplemented...
}

/* RIIC0 RXI0*/
void INT_Excep_RIIC0_RXI0(void){
// Intentionally unimplemented...
}

/* RIIC0 TXI0*/
void INT_Excep_RIIC0_TXI0(void){
// Intentionally unimplemented...
}

/* RIIC0 TEI0*/
void INT_Excep_RIIC0_TEI0(void){
// Intentionally unimplemented...
}

/* RIIC1 EEI1*/
void INT_Excep_RIIC1_EEI1(void){
// Intentionally unimplemented...
}

/* RIIC1 RXI1*/
void INT_Excep_RIIC1_RXI1(void){
// Intentionally unimplemented...
}

/* RIIC1 TXI1*/
void INT_Excep_RIIC1_TXI1(void){
// Intentionally unimplemented...
}

/* RIIC1 TEI1*/
void INT_Excep_RIIC1_TEI1(void){
// Intentionally unimplemented...
}

/* RIIC2 EEI2*/
void INT_Excep_RIIC2_EEI2(void){
// Intentionally unimplemented...
}

/* RIIC2 RXI2*/
void INT_Excep_RIIC2_RXI2(void){
// Intentionally unimplemented...
}

/* RIIC2 TXI2*/
void INT_Excep_RIIC2_TXI2(void){
// Intentionally unimplemented...
}

/* RIIC2 TEI2*/
void INT_Excep_RIIC2_TEI2(void){
// Intentionally unimplemented...
}

/* RIIC3 EEI3*/
void INT_Excep_RIIC3_EEI3(void){
// Intentionally unimplemented...
}

/* RIIC3 RXI3*/
void INT_Excep_RIIC3_RXI3(void){
// Intentionally unimplemented...
}

/* RIIC3 TXI3*/
void INT_Excep_RIIC3_TXI3(void){
// Intentionally unimplemented...
}

/* RIIC3 TEI3*/
void INT_Excep_RIIC3_TEI3(void){
// Intentionally unimplemented...
}

/* DMAC DMAC0I*/
void INT_Excep_DMAC_DMAC0I(void){
// Intentionally unimplemented...
}

/* DMAC DMAC1I*/
void INT_Excep_DMAC_DMAC1I(void){
// Intentionally unimplemented...
}

/* DMAC DMAC2I*/
void INT_Excep_DMAC_DMAC2I(void){
// Intentionally unimplemented...
}

/* DMAC DMAC3I*/
void INT_Excep_DMAC_DMAC3I(void){
// Intentionally unimplemented...
}

/* EXDMAC EXDMAC0I*/
void INT_Excep_EXDMAC_EXDMAC0I(void){
// Intentionally unimplemented...
}

/* EXDMAC EXDMAC1I*/
void INT_Excep_EXDMAC_EXDMAC1I(void){
// Intentionally unimplemented...
}

/* DEU DEU0*/
void INT_Excep_DEU_DEU0(void){
// Intentionally unimplemented...
}

/* DEU DEU1*/
void INT_Excep_DEU_DEU1(void){
// Intentionally unimplemented...
}

/* PDC PCDFI*/
void INT_Excep_PDC_PCDFI(void){
// Intentionally unimplemented...
}

/* PDC PCFEI*/
void INT_Excep_PDC_PCFEI(void){
// Intentionally unimplemented...
}

/* PDC PCERI*/
void INT_Excep_PDC_PCERI(void){
// Intentionally unimplemented...
}

/* SCI0 RXI0*/
void INT_Excep_SCI0_RXI0(void){
// Intentionally unimplemented...
}

/* SCI0 TXI0*/
void INT_Excep_SCI0_TXI0(void){
// Intentionally unimplemented...
}

/* SCI0 TEI0*/
void INT_Excep_SCI0_TEI0(void){
// Intentionally unimplemented...
}

/* SCI1 RXI1*/
void INT_Excep_SCI1_RXI1(void){
// Intentionally unimplemented...
}

/* SCI1 TXI1*/
void INT_Excep_SCI1_TXI1(void){
// Intentionally unimplemented...
}

/* SCI1 TEI1*/
void INT_Excep_SCI1_TEI1(void){
// Intentionally unimplemented...
}

/* SCI2 RXI2*/
void INT_Excep_SCI2_RXI2(void){
// Intentionally unimplemented...
}

/* SCI2 TXI2*/
void INT_Excep_SCI2_TXI2(void){
// Intentionally unimplemented...
}

/* SCI2 TEI2*/
void INT_Excep_SCI2_TEI2(void){
// Intentionally unimplemented...
}

/* SCI3 RXI3*/
void INT_Excep_SCI3_RXI3(void){
// Intentionally unimplemented...
}

/* SCI3 TXI3*/
void INT_Excep_SCI3_TXI3(void){
// Intentionally unimplemented...
}

/* SCI3 TEI3*/
void INT_Excep_SCI3_TEI3(void){
// Intentionally unimplemented...
}

/* SCI4 RXI4*/
void INT_Excep_SCI4_RXI4(void){
// Intentionally unimplemented...
}

/* SCI4 TXI4*/
void INT_Excep_SCI4_TXI4(void){
// Intentionally unimplemented...
}

/* SCI4 TEI4*/
void INT_Excep_SCI4_TEI4(void){
// Intentionally unimplemented...
}

/* SCI5 RXI5*/
void INT_Excep_SCI5_RXI5(void){
// Intentionally unimplemented...
}

/* SCI5 TXI5*/
void INT_Excep_SCI5_TXI5(void){
// Intentionally unimplemented...
}

/* SCI5 TEI5*/
void INT_Excep_SCI5_TEI5(void){
// Intentionally unimplemented...
}

/* SCI6 RXI6*/
void INT_Excep_SCI6_RXI6(void){
// Intentionally unimplemented...
}

/* SCI6 TXI6*/
void INT_Excep_SCI6_TXI6(void){
// Intentionally unimplemented...
}

/* SCI6 TEI6*/
void INT_Excep_SCI6_TEI6(void){
// Intentionally unimplemented...
}

/* SCI7 RXI7*/
void INT_Excep_SCI7_RXI7(void){
// Intentionally unimplemented...
}

/* SCI7 TXI7*/
void INT_Excep_SCI7_TXI7(void){
// Intentionally unimplemented...
}

/* SCI7 TEI7*/
void INT_Excep_SCI7_TEI7(void){
// Intentionally unimplemented...
}

/* SCI8 RXI8*/
void INT_Excep_SCI8_RXI8(void){
// Intentionally unimplemented...
}

/* SCI8 TXI8*/
void INT_Excep_SCI8_TXI8(void){
// Intentionally unimplemented...
}

/* SCI8 TEI8*/
void INT_Excep_SCI8_TEI8(void){
// Intentionally unimplemented...
}

/* SCI9 RXI9*/
void INT_Excep_SCI9_RXI9(void){
// Intentionally unimplemented...
}

/* SCI9 TXI9*/
void INT_Excep_SCI9_TXI9(void){
// Intentionally unimplemented...
}

/* SCI9 TEI9*/
void INT_Excep_SCI9_TEI9(void){
// Intentionally unimplemented...
}

/* SCI10 RXI10*/
void INT_Excep_SCI10_RXI10(void){
// Intentionally unimplemented...
}

/* SCI10 TXI10*/
void INT_Excep_SCI10_TXI10(void){
// Intentionally unimplemented...
}

/* SCI10 TEI10*/
void INT_Excep_SCI10_TEI10(void){
// Intentionally unimplemented...
}

/* SCI11 RXI11*/
void INT_Excep_SCI11_RXI11(void){
// Intentionally unimplemented...
}

/* SCI11 TXI11*/
void INT_Excep_SCI11_TXI11(void){
// Intentionally unimplemented...
}

/* SCI11 TEI11*/
void INT_Excep_SCI11_TEI11(void){
// Intentionally unimplemented...
}

/* SCI12 RXI12*/
void INT_Excep_SCI12_RXI12(void){
// Intentionally unimplemented...
}

/* SCI12 TXI12*/
void INT_Excep_SCI12_TXI12(void){
// Intentionally unimplemented...
}

/* SCI12 TEI12*/
void INT_Excep_SCI12_TEI12(void){
// Intentionally unimplemented...
}

/* IEB IEBINT*/
void INT_Excep_IEB_IEBINT(void){
// Intentionally unimplemented...
}
