int inputPin = 2;
int state = LOW;
 
void setup() 
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(inputPin, INPUT);
  Serial.begin(9600);
}
 
void loop()
{
  int val = digitalRead(inputPin);
  if (val == HIGH) 
  {
    digitalWrite(LED_BUILTIN, HIGH);
    if (state == LOW) 
    {
      Serial.println("Motion detected!");
      state = HIGH;
    }
  } 
  else 
  {
    digitalWrite(LED_BUILTIN, LOW); // turn LED OFF
    if (state == HIGH)
    {
      Serial.println("Motion ended!");
      state = LOW;
    }
  }
}
