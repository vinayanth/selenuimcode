int counter;

void setup() 
{
  counter = 14;
  for(int i=0; i<counter; i++)
    pinMode(i, OUTPUT);
}

void loop() 
{
  for(int i=0; i<counter; i++)
  {
    dualflash(i, 13-i, 20);
  }
}

void dualflash(int led1, int led2, int duration)
{
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  delay(duration);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  delay(duration);
}

