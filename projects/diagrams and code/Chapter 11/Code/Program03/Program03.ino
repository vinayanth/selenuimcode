int redPin = 11;
int bluePin = 10;
int greenPin = 9;
int duration = 500;

void setup()
{
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop()
{
  setColor(0, 0, 0); // LED off
  delay(duration);
  setColor(255, 0, 0); // red
  delay(duration);
  setColor(0, 255, 0); // green
  delay(duration);
  setColor(0, 0, 255); // blue
  delay(duration);
  setColor(255, 255, 0); // yellow
  delay(duration);
  setColor(80, 0, 80); // purple
  delay(duration);
  setColor(0, 255, 255); // aqua
  delay(duration);
  setColor(255, 255, 255); // white
  delay(duration);
}

void setColor(int red, int green, int blue)
{
  red = 255 - red;
  green = 255 - green;
  blue = 255 - blue;
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);
}
