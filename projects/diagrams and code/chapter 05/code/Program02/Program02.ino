// Program Constants
const int buttonPin = 12;     
const int ledPin =  13;    

// Variables
int buttonState = 0;
int status = 0;

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
  { 

    // Check if the LED is OFF
    if ( status == 0)
    {
      digitalWrite(ledPin, HIGH);
      status = 1; 
    }
    else if ( status == 1)
    {
      digitalWrite(ledPin, LOW);
      status = 0;
    }    
  }
  delay(200);

}
