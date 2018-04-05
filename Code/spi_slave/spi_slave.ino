
#include <SPI.h>

void setup (void) {
  pinMode(MISO, OUTPUT);
#if 1
  SPCR |= _BV(SPE); // CMASTER/AVR, CMASTER/SAMD
#else
  SPCR |= _BV(SPE) | 0b1001; // CEUISR/AVR, CEUISR/SAMD
#endif
  SPDR = 99;
  Serial.begin(9600);
}

void loop (void) {
  Serial.println(SPDR);
  delay(100);
}
