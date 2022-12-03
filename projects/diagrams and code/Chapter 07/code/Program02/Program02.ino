int myPins[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

void setup() 
{
  for(int i=0; i<=9; i++)
    pinMode(myPins[i], OUTPUT);
}

void loop() 
{
  for(int i=0; i<=9; i++)
  {
    dualFlash(myPins[i], myPins[9-i], 20);
  }
}

void dualFlash(int led1, int led2, int duration)
{
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  delay(duration);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  delay(duration);
}
