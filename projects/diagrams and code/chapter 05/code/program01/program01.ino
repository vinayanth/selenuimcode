// Program Constants
const int buttonPin = 12;     
const int ledPin =  13;     

// Variables
int buttonState = 0;

void setup() 
{
  pinMode(ledPin, OUTPUT);      
  pinMode(buttonPin, INPUT_PULLUP);   
}

void loop()
{
  // Read button state
  buttonState = digitalRead(buttonPin);

  // If button is pressed...
  if (buttonState == LOW) 
      digitalWrite(ledPin, HIGH);
  else
      digitalWrite(ledPin, LOW);
      
  delay(100);

}
