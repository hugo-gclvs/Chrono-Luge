void setup() {
  #define RX1 19
  #define TX1 18
  pinMode(RX1, INPUT);
  pinMode(TX1, OUTPUT);
  Serial1.begin(9600);
}

void loop() {

  Serial1.print("<ID00><BE><05><E>"); // trame de début
  
  Serial1.write("<ID00><L1><PA><FE><MA><WC><FE>"); // envoi de la première partie de la trame (code non variant utile à la configuration de l'affichage
  Serial1.write("Hello"); // envoi du texte à afficher
  Serial1.write("36"); //valeur du checksum
  Serial1.write("<E>");

  delay(500);

 
 

}
