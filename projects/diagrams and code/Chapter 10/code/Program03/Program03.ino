const int ProxSensor = 2;

void setup() 
{                
  pinMode(13, OUTPUT);     
  pinMode(ProxSensor,INPUT);
}

void loop() 
{
  if(digitalRead(ProxSensor)==HIGH)
  {
    digitalWrite(13, HIGH);
  }
  else
  {
    digitalWrite(13, LOW);
  }
  delay(100);
}
