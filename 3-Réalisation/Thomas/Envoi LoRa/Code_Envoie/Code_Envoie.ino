#include <SPI.h>
#include <LoRa.h>

int compteur=0;
void setup() {
  Serial.begin(9600);
  Serial.println("LoRa Transmetteur");
  if (!LoRa.begin(433E6)) {
    Serial.println("Starting LoRa failed!");
    while (1);
  }
}
void loop() {
  long temps = 37128;
  Serial.print("Packet numéro ");
  Serial.println(compteur);
  LoRa.beginPacket();
  LoRa.print(temps);
  LoRa.endPacket();
  compteur++;
  delay(5000);
}
