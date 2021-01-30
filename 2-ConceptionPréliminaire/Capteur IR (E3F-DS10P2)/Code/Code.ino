#include <Arduino.h>

/*
   Cable marron : VCC (5V)
   Cable bleu : GND
   Cable noir : Signal (Pin 2)
*/
/*
 * Presence devant le capteur = LOW
 * Rien devant le capteur = HIGH
*/


#define PINUN 4   // Pin correspondant au capteur en haut de la piste
#define PINDEUX 5  // Pin correspondant au capteur en bas de la piste

int valeurCapteur = 0;    // Valeur d'état du capteur
long temps1, temps2, chrono; // Variables pour calculer le chrono

void setup() {
  pinMode(PINUN, INPUT);  // On met le pin 4 en mode entrée
  pinMode(PINDEUX, INPUT);  // On met le pin 6 en mode entrée
  Serial.begin(9600);
}

void loop() {
  valeurCapteur = digitalRead(PINUN);   // Lecture de la valeur du capteur infrarouge
  if (valeurCapteur == LOW) {    // Si le capteur detecte quelque chose
    temps1 = millis();                  // On lance le chrono
    Serial.println("Chrono lance");
    while (valeurCapteur == LOW) {     // On attend qu'il n'y est plus rien devant
      valeurCapteur = digitalRead(PINUN);
    }
    while (valeurCapteur == HIGH) {    // Puis on attend que quelque chose passe de nouveau devant
      valeurCapteur = digitalRead(PINDEUX);
    }
    temps2 = millis();            // On stop le chrono
    chrono = temps2 - temps1;     // calcul du chron
    Serial.print("Chrono :");
    Serial.print(chrono);         //  Affichage du chrono
    Serial.println("");
    while (valeurCapteur == LOW) {   // On attend qu'il n'y est plus rien devant
      valeurCapteur = digitalRead(PINDEUX);
    }
  }
}
