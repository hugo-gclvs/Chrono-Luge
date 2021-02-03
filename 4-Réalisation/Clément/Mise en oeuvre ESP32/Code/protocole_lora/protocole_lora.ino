#include <SPI.h>
#include <LoRa.h>
#include "SSD1306.h"

SSD1306  display(0x3c, 4, 15);

#define SS      18
#define RST     14
#define DI0     26
#define BAND    868E6 // fréquence utilisé pour le Lora en Europe. 

void setup() {
  pinMode(16, OUTPUT);
  digitalWrite(16, LOW);    //  PIN 16 à l'état bas pour reset l'écran
  delay(50);
  digitalWrite(16, HIGH);
  display.init();



  Serial.begin(115200); //en bauds

  Serial.println("Bienvenue");
  display.drawString(5, 5, "CHRONOLUGE");
  display.display();
  SPI.begin(5, 19, 27, 18); // SPI qui veut dire : Serial Peripheral Interface
  LoRa.setPins(SS, RST, DI0);

  if (!LoRa.begin(BAND)) {
    display.drawString(5, 25, "Connexion échouée");
    while (1);
  }
  LoRa.setSyncWord(0xF3);
  Serial.println("Connecté");
  display.drawString(5, 25, "LoRa Initializing OK!");
  display.display();
}
void loop() {
  int flag=1;
  int packetSize = LoRa.parsePacket();
  if (packetSize) {
    // received a packets

    // read packet
    while (LoRa.available()) {
      long data = LoRa.read();    //lire les packets reçus
      if (data == '$') {
        Serial.println("bit de start recu");
      }
    }
    while (flag) {
      packetSize = LoRa.parsePacket();
      if (packetSize) {
        // received a packets

        // read packet
        while (LoRa.available()) {
          long data = LoRa.read();    //lire les packets reçus
          Serial.println(data);
          flag=0;
        }
      }
    }
  }
}
