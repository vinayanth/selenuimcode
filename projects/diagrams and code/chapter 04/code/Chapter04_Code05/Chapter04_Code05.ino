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
    flash(i, 20);
}

void flash(int led, int duration)
{
  digitalWrite(led, HIGH);
  delay(duration);
  digitalWrite(led, LOW);
  delay(duration);
}
