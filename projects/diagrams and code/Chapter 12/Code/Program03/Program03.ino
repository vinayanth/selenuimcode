#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
#include <Keypad.h>

const byte ROWS = 4;
const byte COLS = 4;

String passcode = "1234";
String input = "";
int count;

char keys[ROWS][COLS] = 
{
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

byte rowPins[ROWS] = {9, 8, 7, 6};
byte colPins[COLS] = {5, 4, 3, 2};

LiquidCrystal_I2C lcd(0x27,16,2);  
Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

void setup()
{
  Serial.begin(9600);
  lcd.init();
  lcd.backlight();
  count = 0;
  lcd.clear();
}


void loop()
{
  lcd.setCursor(0,0);
  lcd.print("Welcome!");
  lcd.setCursor(0,1);
  lcd.print("Enter Password: ");
  char key = keypad.getKey();
  
  if (key)
  {

    
    input.concat(key);
    count++;
    Serial.println(input);
    Serial.println(count);
    if (count == 4)
    {
   
      lcd.clear();
      lcd.setCursor(0,0);
      
      if ( passcode == input )
      {
        lcd.print("*** Verified ***");
      }
      else
      {
        lcd.print("**** Wrong ****");
      }

      delay(5000);
      lcd.clear();
      count = 0;
      input = "";
    }
  }

}

