#include <SPI.h>
#include "heltec.h"
#include <string>


#define SS      18
#define RST     14
#define DI0     26
#define BAND    868E6 // fréquence utilisé pourr le Lora en Europe. 

char dataString[20] = "En attente";
char frameString[] = "<L1><PA><FE><MA><WC><FE><CA>";
byte checksum;
String data;

void setup() {
  pinMode(16, OUTPUT);
  digitalWrite(16, LOW);    //  PIN 16 à l'état bas pour reset l'écran
  delay(50);
  digitalWrite(16, HIGH);
  Serial.begin(9600, SERIAL_8N1); //Initialisation de la liaison série. (Serial1 --> Rx: 19 & Tx : 18 car la connection au pc utilise le port série de base).
  Heltec.begin(false, true, true, true,BAND
  ); //afficheur, comm Lora, comm Serie

  SPI.begin(5, 19, 27, 18); // SPI qui veut dire : Serial Peripheral Interface
  LoRa.setPins(SS, RST, DI0);
}
void loop() {
  double vitesse;
  // try to parse packet
  int packetSize = LoRa.parsePacket();
  if (packetSize) {
    // read packet
    while (LoRa.available()) {
      data = LoRa.readString();//lire les packets reçus
      vitesse = data.toInt();

      vitesse = (vitesse / 1000);
      vitesse = (650 / vitesse);
      vitesse = (vitesse * 3.6);
      data = String(vitesse);

    }
  }
  int n = data.length();
  data.toCharArray(dataString, n);

  //CALCUL DU CHECKSUM DU MORCEAU DE TRAME PERMANENT
  checksum = byte(frameString[0]);

  // process the remaining string characters
  for (int i = 1; i < (sizeof(frameString)) - 1; i++) {
    checksum ^= byte(frameString[i]);
    delay(250);
  }

  for (int i = 0; i < (sizeof(dataString)); i++) {
    checksum ^= byte(dataString[i]);
    delay(250);
  }



  //Serial.print("<RPa><E>");
  Serial.print("<ID00><L1><PA><FE><MA><WC><FE><CA>");                      //<L1> Décris la ligne du message, <PA> la page, <FA> le sens du message ? <MA> les paramètres d'affichage, <WC> la durée du message  <FE>"message"<FE>
  Serial.print(dataString);//msg
  Serial.print(checksum, HEX); //checksum
  Serial.print("<E>");
  delay(5000);
}
