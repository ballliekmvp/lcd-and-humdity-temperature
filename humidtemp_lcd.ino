#include "DHT.h"
#define DHTPIN 2
#define DHTTYPE DHT11
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2); // I2C address 0x27, 16 column and 2 rows


DHT dht(DHTPIN, DHTTYPE);





void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  dht.begin(); 
  lcd.begin;
  lcd.backlight;
  delay(2000);

  
  float humi  = dht.readHumidity();
  float tempF = dht.readTemperature(true);

  lcd.clear;
  lcd.setCursor(0,0);
  lcd.print("humi")
  
  

}

void loop() {
  // put your main code here, to run repeatedly:

}
