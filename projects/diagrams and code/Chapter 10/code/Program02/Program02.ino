
#include "DHT.h"
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

#define DHTPIN 2     

//#define DHTTYPE DHT11   // DHT 11
#define DHTTYPE DHT22   // DHT 22  (AM2302), AM2321
//#define DHTTYPE DHT21   // DHT 21 (AM2301)

DHT dht(DHTPIN, DHTTYPE);
LiquidCrystal_I2C lcd(0x27,16,2);

void setup() 
{
  Serial.begin(9600);
  Serial.println("DHTxx test!");
  lcd.init();
  lcd.backlight();

  dht.begin();
}

void loop() 
{
  String msg;
  delay(2000);

  float h = dht.readHumidity();
  float t = dht.readTemperature();

  if (isnan(h) || isnan(t)) 
  {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }
  msg = "Humidity: ";
  Serial.print(msg);
  Serial.print(h);
  lcd.setCursor(0, 0);
  msg.concat(h);
  lcd.print(msg);
  Serial.print(" %\t");
  msg = "Temp: ";
  Serial.print(msg);
  Serial.print(t);
  lcd.setCursor(0, 1);
  msg.concat(t);
  lcd.print(msg);
  Serial.println();
}
