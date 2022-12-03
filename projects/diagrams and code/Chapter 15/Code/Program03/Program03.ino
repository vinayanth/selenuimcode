void setup()
{
  Serial.begin(9600);
  Serial.println("Sender Program...");
}

void loop()
{
  Serial.print('H');
  delay(1000);
  Serial.print('L');
  delay(1000);
}
