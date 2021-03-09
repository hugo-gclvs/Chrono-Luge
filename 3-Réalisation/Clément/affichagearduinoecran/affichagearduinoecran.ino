#include <SoftwareSerial.h>

SoftwareSerial mySerial(19, 18 ); // RX, TX
const int MODE_TRANSMISSION = 5;

void setup()

{
  // Open serial communications and wait for port to open:
  pinMode(MODE_TRANSMISSION, OUTPUT);
  Serial.begin(9600);
  mySerial.begin(9600);
  delay(500);
  digitalWrite(MODE_TRANSMISSION, HIGH);
}

void loop() {
  
   
    digitalWrite(5,HIGH);

    mySerial.write("<ID00><L1><PA><FE><MA><WC><FE><CA>oui07<E>");
    digitalWrite(5,LOW);
 
    


  //}
  delay(2000);
}
