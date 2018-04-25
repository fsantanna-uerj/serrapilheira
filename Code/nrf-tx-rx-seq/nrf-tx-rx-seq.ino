#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>

//#define Serial SerialUSB

byte V = 0;
const uint64_t pipe = 0xAABBCCDDEELL;
RF24 radio(8,7);

void setup() {
  // put your setup code here, to run once:
    Serial.begin(9600);
    radio.begin();
    //radio.disableCRC();
    radio.setPayloadSize(1);
    radio.setAutoAck(false);              // true by default
    radio.setDataRate(RF24_2MBPS);
    radio.openWritingPipe(pipe);
    radio.openReadingPipe(1,pipe);
    radio.startListening();
}

void loop() {
  static int i = 0;
  {
    Serial.print("< ");
    Serial.println(i);
    radio.stopListening();
    radio.write(&i, 1);
    radio.startListening();
    i++;
  }
  {
      while (!radio.available());
      byte v;
      radio.read(&v, 1);
      Serial.print("> ");
      Serial.println(v);
  }
  delay(1000);
}
