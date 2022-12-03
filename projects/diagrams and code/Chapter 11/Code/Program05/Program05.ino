int motorPin = 3;
 
void setup() 
{ 
  pinMode(motorPin, OUTPUT);
  Serial.begin(9600);
  Serial.println("DC Motor PWM Speed Test");
} 
 
 
void loop() 
{ 
      analogWrite(motorPin, 63);
      delay(5000);
      analogWrite(motorPin, 127);
      delay(5000);
      analogWrite(motorPin, 255);
      delay(5000);
} 
