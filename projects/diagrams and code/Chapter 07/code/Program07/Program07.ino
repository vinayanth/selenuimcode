#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

char array[]="Hello World!";

LiquidCrystal_I2C lcd(0x27,16,2);

void setup()
{
  lcd.init();
  lcd.backlight();
}

void loop() 
{
  lcd.setCursor(15, 0);
  lcd.print("Hello, world!");
  
  for (int i = 0; i < 16; i++) 
  {
    lcd.scrollDisplayLeft();
    delay(250);
  }
  lcd.clear(); //Clears the LCD screen and positions the cursor in the upper-left  corner.
}
