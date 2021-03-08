#include <Arduino.h>
#include "WiFi.h"

#define WIFI_NETWORK "BTSSN"
#define WIFI_PASSWORD "btssn-queneau"
#define WIFI_TIMEOUT_MS 20000

void connectionAuWifi(){
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
  connectionAuWifi();

}

void loop() {
  // put your main code here, to run repeatedly:

}
