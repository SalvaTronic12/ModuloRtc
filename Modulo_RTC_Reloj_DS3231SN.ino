#include "RTClib.h"


RTC_DS1307 RTC; // objeto del modulo RTC

void setup() {

Serial.begin(9600);
RTC.begin(); 
RTC.adjust(DateTime(__DATE__,__TIME__));
}

void loop() {
  
 DateTime now = RTC.now();


Serial.print(now.hour());
Serial.print(":");
Serial.print(now.minute());
Serial.print(":");
Serial.print(now.second());
Serial.println("");
Serial.print(now.day());
Serial.print("/");
Serial.print(now.month());
Serial.print("/");
Serial.print(now.year());

Serial.println("");
delay(1000);






}
