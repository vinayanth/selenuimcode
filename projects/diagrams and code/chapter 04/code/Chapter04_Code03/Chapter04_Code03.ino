int led1 = 13;
int led2 = 12;

void setup() 
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop() 
{
  // Turn on the led1, turn off led2
  digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);
  delay(1000);
  // Turn on the led2, turn off led1
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  delay(1000);
}
