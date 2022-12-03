int red = 12;
int yellow = 11;
int green = 10;

int button = 13;

int buttonState = 0;
int state = 0;

void setup()
{
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  
  pinMode(button, INPUT_PULLUP);
}

void loop()
{
  buttonState = digitalRead(button);
  
  if (buttonState==LOW)
  {
    if (state == 0)
    {
      LightsOn(HIGH, LOW, LOW);
      state = 1;
    }
    else if (state == 1)
    {
      LightsOn(HIGH, HIGH, LOW);
      state = 2;
    }
    else if (state == 2)
    {
      LightsOn(LOW, LOW, HIGH);
      state = 3;
    }
    else if (state == 3)
    {
      LightsOn(LOW, HIGH, LOW);
      state = 0;
    }
    delay(1000);
  }
}

void LightsOn(int redStatus, int yellowStatus, int greenStatus)
{
  digitalWrite(red, redStatus);
  digitalWrite(yellow, yellowStatus);
  digitalWrite(green, greenStatus);
}
