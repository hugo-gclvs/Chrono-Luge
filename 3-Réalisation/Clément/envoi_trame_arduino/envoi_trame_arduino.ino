void setup() {
#define RX1 19
#define TX1 18
  pinMode(19, INPUT);
  pinMode(18, OUTPUT);
  //initialisation du port série
  Serial.begin(9600);

//Serial.write("<ID00><BE><05><E>");
Serial.println("bonjour");
  //trame pour l'affichage du message "oui"
  Serial.write("<ID00><L1><PA><FE><MA><WC><FE><CA>non1B<E>"); // envoi de la première partie de la trame (code non variant utile à la configuration de l'affichage
  //Serial.write("non"); // envoi du texte à afficher
  //Serial.write("1B"); //valeur du checksum
  //
  Serial.write("<E>");


}

void loop() {

  


}
