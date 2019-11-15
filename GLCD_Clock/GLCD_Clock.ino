/*==================================================================================
  ➤ Created by AE Maker - 2019
  ➤ Don’t forget to subscribe to my Youtube channel:
     https://www.youtube.com/AEMaker
  ==================================================================================*/

#include <NTPClient.h>
#include <ESP8266WiFi.h>
#include <WiFiUdp.h>
#include "lcd1202.h"
#include "clock.h"

/* Wifi */
const char *ssid     = "AE Maker";
const char *password = "12345678";


void setup() {  
  Serial.begin(115200);

  setBrightness(80);    // brightness display from 0 - 100 %
  
  lcd.Inicialize();   // initialize display
  lcd.Clear_LCD();    // clear the display
  lcd.Update();   // update the display
  
  connectWifi((char*)ssid, (char*)password);    // connect to WiFi

  connectNtp();   // connect to NTP server
}

void loop() {
  nextFrame(30);    // 1 frame per 30 seconds
  
}
