const int analogInPin = A0;

void setup() 
{
  Serial.begin(9600);
}

void loop() 
{
  int sensorValue = analogRead(analogInPin);

  Serial.print("sensor = ");
  Serial.println(sensorValue);

  delay(250);
}
