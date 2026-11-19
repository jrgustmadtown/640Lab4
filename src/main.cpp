#include <Arduino.h>
#include <WiFi.h>
#include <WiFiUdp.h>

WiFiUDP udp;


void setup() {
  WiFi.begin("CS640", "cs640wifi");
  while (WiFi.status() != WL_CONNECTED) delay(100);
}

void loop() {
  udp.beginPacket("192.168.4.1", 5005);
  udp.print("hey");
  udp.endPacket();
  delay(1000);
}
