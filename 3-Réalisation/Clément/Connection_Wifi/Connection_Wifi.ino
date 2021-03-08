#include <Arduino.h>
#include "WiFi.h"

#define WIFI_NETWORK "F_"
#define WIFI_PASSWORD "Fontenay,1234"
#define WIFI_TIMEOUT_MS 20000

void connectToWifi(){
  Serial.print("Tentative de connection");
  WiFi.mode(WIFI_STA);
  WiFi.begin(WIFI_NETWORK, WIFI_PASSWORD);

  unsigned long startAttemptTime = millis();

  while(WiFi.status() != WL_CONNECTED && millis() - startAttemptTime < WIFI_TIMEOUT_MS){
    Serial.print(".");
    delay(100);
  }
  if(WiFi.status() != WL_CONNECTED){
    Serial.println("Failed!"); 
  }else{
    Serial.println("Connection etablie!");
    Serial.print("Adresse IP : ");
    Serial.println(WiFi.localIP());
  }
}



void setup() {
  Serial.begin(9600);
  connectToWifi();

}

void loop() {
  // put your main code here, to run repeatedly:

}
