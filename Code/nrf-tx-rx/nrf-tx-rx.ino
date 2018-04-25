#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>

byte V = 0;
const uint64_t pipe =  0xAABBCCDDEELL;
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
    radio.startListening();
}

void loop() {
  static unsigned long old = millis();
  unsigned long now = millis();

  if (now >= old+1000) {
    old = now;
    Serial.print("< ");
    Serial.println(V);
    radio.stopListening();
    radio.write(&V, 1);
    radio.startListening();
    V++;
  }

  if (radio.available()) {
      byte v;
      radio.read(&v, 1);
      Serial.print("> ");
      Serial.println(v);
  }
}
