int button = 13;
int buttonState = 0;
long randomNumber;

void setup()
{
  for ( int i = 0; i < 6; i++ )
    pinMode(i, OUTPUT);

  pinMode(button, INPUT_PULLUP);
  randomSeed(42);
}

void loop()
{
  buttonState = digitalRead(button);
  
  if (buttonState==LOW)
  {
    randomNumber = random(0, 6);

    for ( int i = 0; i < 6; i++ )
    {
      if( i <= randomNumber )
        digitalWrite(i, HIGH);
      else
        digitalWrite(i, LOW);
    }
   
  }

  delay(200);
}

