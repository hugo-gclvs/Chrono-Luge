#include <SPI.h>
#include <LoRa.h>
#include "SSD1306.h"
 
SSD1306  display(0x3c, 4, 15);
 
#define SS      18
#define RST     14
#define DI0     26
#define BAND    868E6 // fréquence utilisé pourr le Lora en Europe. 
 
void setup() {
  pinMode(16,OUTPUT);
  digitalWrite(16, LOW);    //  PIN 16 à l'état bas pour reset l'écran
  delay(50); 
  digitalWrite(16, HIGH);
  display.init();
  
  
   
  Serial.begin(115200); //en bauds
  
  Serial.println("Bienvenue"); 
  display.drawString(5,5,"CHRONOLUGE"); 
  display.display();
  SPI.begin(5,19,27,18);// SPI qui veut dire : Serial Peripheral Interface
  LoRa.setPins(SS,RST,DI0);
   
  if (!LoRa.begin(BAND)) {
    display.drawString(5,25,"Connexion échouée");
    while (1);
  }
  Serial.println("Connecté");
  display.drawString(5,25,"LoRa Initializing OK!");
  display.display();  
}
void loop() {
  double vitesse;
  // try to parse packet
  int packetSize = LoRa.parsePacket();
  if (packetSize) {
    // received a packets
    Serial.print("Chrono :");//affiche si packet reçu
    display.clear();
    display.setFont(ArialMT_Plain_16);
    display.drawString(0, 0, "Chrono : ");
    display.display();
    // read packet
    while (LoRa.available()) {
    String data = LoRa.readString();//lire les packets reçus
    Serial.println(data);
    vitesse=data.toInt();
    
    vitesse=(vitesse/1000);
    display.drawString(0,22, data);
    display.drawString(55, 22, "ms");
    vitesse=(650/vitesse);
    vitesse=(vitesse*3.6);
    data=String(vitesse);
    display.display();
    display.drawString(0, 45, data);
     display.drawString(55, 45, "Km/h");
    display.display();
    
    }
  }
}
