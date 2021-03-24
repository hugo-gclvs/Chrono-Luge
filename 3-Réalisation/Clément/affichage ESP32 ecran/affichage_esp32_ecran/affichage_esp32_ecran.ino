#include "heltec.h"

char dataString[] = "a b c d e f g h i j k l m n o p q r s t u v w x y z";
char frameString[] = "<L1><PA><FE><MA><WC><FE><CA>";
byte checksum;
void setup () {

  Serial.begin(9600, SERIAL_8N1); //Initialisation de la liaison série. (Serial1 --> Rx: 19 & Tx : 18 car la connection au pc utilise le port série de base).
  //Heltec.begin(false,false,true); //afficheur, comm Lora, comm Serie

}

void loop () {
  
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
  Serial.print(checksum,HEX);//checksum
  Serial.print("<E>");
  delay(5000);
}
