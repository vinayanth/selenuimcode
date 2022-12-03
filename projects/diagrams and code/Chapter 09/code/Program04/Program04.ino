const int digitalInPin = 2;

void setup() 
{
  Serial.begin(9600);
  pinMode(digitalInPin, INPUT);
}

void loop() 
{
  int sensorValue = digitalRead(digitalInPin);

  Serial.print("sensor = ");
  Serial.println(sensorValue);

  delay(250);
}
