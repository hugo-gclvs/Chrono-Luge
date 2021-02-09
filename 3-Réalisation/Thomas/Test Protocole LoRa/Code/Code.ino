#include <Arduino.h>
#include <SPI.h>
#include <LoRa.h>

void setup() {
  Serial.begin(115200);
  if (!LoRa.begin(868E6)) {
    Serial.println("Erreur connection LoRa");
    delay(500);
    while (1);

  } LoRa.setSyncWord(0xF3);
}

void loop() {
  char dollars = '$';
  long chrono = 7800;
  char slash = '/';
  LoRa.beginPacket();
  LoRa.write(dollars);     // Envoie du chrono via le module LoRa
  delay(1000);
  LoRa.write(chrono);
  LoRa.endPacket();
  delay(5000);
}
