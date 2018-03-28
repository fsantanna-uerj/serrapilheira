#include <SPI.h>

#if 0
#define S Serial
#else
#define S SerialUSB
#endif

void setup (void) {
  S.begin(9600);
  digitalWrite(SS, HIGH);
  SPI.begin ();
  //SPI.setClockDivider(SPI_CLOCK_DIV8);
}

void loop (void)
{
  static int vout = 0;
  digitalWrite(SS, LOW);

  int vin = SPI.transfer(vout++);
  S.print("> ");
  S.println(vin);

  digitalWrite(SS, HIGH);

  delay (1000);
}
