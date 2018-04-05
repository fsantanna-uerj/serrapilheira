#include <SPI.h>

#define _DELAY(ms)                      \
    {                                   \
        int i;                          \
        for (i=0; i<ms; i++) {          \
            delayMicroseconds(1000);    \
        }                               \
    }

void setup() {
  SerialUSB.begin(9600);
  SerialUSB.println("oi");
  SPI.begin ();
  SPI.setClockDivider(SPI_CLOCK_DIV8);
  _DELAY(1000);
  sercom4.disableSPI();
  sercom4.initSPI(PAD_SPI_TX, PAD_SPI_RX, SPI_CHAR_SIZE_8_BITS, MSB_FIRST);
  sercom4.initSPIClock(SERCOM_SPI_MODE_2,1400000);
  NVIC_SetPriority(SERCOM4_IRQn, (1 << __NVIC_PRIO_BITS) - 1);
  SERCOM4->SPI.INTENSET.reg = SERCOM_SPI_INTFLAG_RXC;
  SERCOM4->SPI.INTENCLR.reg = SERCOM_SPI_INTFLAG_SSL   |   //Enable Slave Select low interrupt
            SERCOM_SPI_INTFLAG_TXC   |
            SERCOM_SPI_INTFLAG_ERROR |
            SERCOM_SPI_INTFLAG_DRE   ;
  NVIC_EnableIRQ(SERCOM4_IRQn);
  sercom4.enableSPI();
}

void loop() {
  static int v = 0;
  SerialUSB.println("tc");
  _DELAY(1000);
  SERCOM4->SPI.DATA.bit.DATA = v++;
}

void SERCOM4_Handler()
{
  /*
  SerialUSB.print("$");
  SerialUSB.println(SERCOM4->SPI.INTFLAG.reg);
  _DELAY(100);
  */
  
  bool is_rx  = SERCOM4->SPI.INTFLAG.bit.RXC;
  bool is_dre = SERCOM4->SPI.INTFLAG.bit.DRE;

  if (is_rx) {
    //SerialUSB.println("rx");
    //_DELAY(100);
    byte v = SERCOM4->SPI.DATA.reg;
    SERCOM4->SPI.INTFLAG.bit.RXC = 1;
  } else if (is_dre) {
    SERCOM4->SPI.INTFLAG.bit.DRE = 1;
    SerialUSB.println("dre");
    _DELAY(100);
  }
}

