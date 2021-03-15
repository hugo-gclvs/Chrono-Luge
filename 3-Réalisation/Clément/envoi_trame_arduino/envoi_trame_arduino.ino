void setup() {
#define RX1 19
#define TX1 18
  pinMode(19, INPUT);
  pinMode(18, OUTPUT);
  
  //initialisation du port série
  Serial.begin(9600);
  Serial1.begin(9600);


}

void loop() {

Serial1.write("<ID00><BE>05<E><ID00><L1><PA><FE><MA><WC><FE><CA>bonjour15<E><ID00><BF>06<E>");

 /* //trame pour l'affichage du message "Test" en rouge
  Serial1.print("<ID01><BE><05><E>");
  Serial1.print("<ID00><L1><PA><FE><MA><WC><FE>"); // envoi de la première partie de la trame (code non variant utile à la configuration de l'affichage
  
  Serial1.print("Hello"); // envoi du texte à afficher
  Serial1.print("36"); //valeur du checksum
  Serial1.println("<E>");*/

  delay(2000);



}
