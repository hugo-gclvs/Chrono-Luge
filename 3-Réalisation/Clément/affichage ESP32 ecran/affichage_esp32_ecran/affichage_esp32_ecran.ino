#include "heltec.h"

void setup () {
 
 Serial.begin(9600,SERIAL_8N1); //Initialisation de la liaison série. (Serial1 --> Rx: 19 & Tx : 18 car la connection au pc utilise le port série de base).
 //Heltec.begin(false,false,true); //afficheur, comm Lora, comm Serie
 
}

void loop () {

  Serial.print("<ID00><BE>05<E><ID00><L1><PA><FE><MA><WC><FE><CA>bonjour15<E><ID00><BF>06<E>");                      //<L1> Décris la ligne du message, <PA> la page, <FA> le sens du message ? <MA> les paramètres d'affichage, <WC> la durée du message  <FE>"message"<FE>
  //Serial1.print("test");//message à affiché
  //Serial1.print("62");//checksum Xor
  //Serial1.println("<E>");//caractère de fin de chaine
  delay(5000);
    }
