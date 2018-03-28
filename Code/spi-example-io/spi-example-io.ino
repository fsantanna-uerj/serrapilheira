#include <SPI.h>

#if 0
#define S Serial
#define PIN_SCK  13
#define PIN_MISO 12
#define PIN_MOSI 11
#else
#define S SerialUSB
#define PIN_SCK  24
#define PIN_MISO 22
#define PIN_MOSI 23
#endif

#define PIN_DEVICE_INPUT 9
#define PIN_DEVICE_OUTPUT 8

void setup(){
    S.begin(9600);
    pinMode(PIN_SCK,OUTPUT);
    pinMode(PIN_MISO,INPUT);
    pinMode(PIN_MOSI,INPUT);
    pinMode(PIN_DEVICE_INPUT,OUTPUT);
    pinMode(PIN_DEVICE_OUTPUT,OUTPUT);
    SPI.begin();
}

void loop(){
    static int i = 0;
    i++;
    digitalWrite(PIN_DEVICE_INPUT,LOW);
    digitalWrite(PIN_DEVICE_OUTPUT,LOW);
    delay(50);
    digitalWrite(PIN_DEVICE_INPUT,HIGH);

    SPI.beginTransaction(SPISettings(7000000, MSBFIRST, SPI_MODE0));
    uint8_t value = SPI.transfer(0x0);
    SPI.endTransaction();

    S.println(value);

    SPI.beginTransaction(SPISettings(7000000, MSBFIRST, SPI_MODE0));
    SPI.transfer( ~( (uint8_t) value ) );
    SPI.transfer(~i);
    SPI.endTransaction();

    digitalWrite(PIN_DEVICE_OUTPUT,HIGH);
    delay(50);
}

