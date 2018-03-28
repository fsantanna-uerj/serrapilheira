
#include <SPI.h>

void setup (void) {
  pinMode(MISO, OUTPUT);
  SPCR |= _BV(SPE) | 0b1001;
  SPDR = 99;
}

void loop (void) {
}
