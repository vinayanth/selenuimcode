#include<Wire.h>

int x = 0;

void setup() 
{
  Serial.begin(9600);
  pinMode (LED_BUILTIN, OUTPUT);
  Wire.begin(7);
  Serial.println("Initializing Serial for DEBUG:");
  Wire.onReceive(receiveEvent);
}

void receiveEvent(int bytes) 
{
  x = Wire.read();
  Serial.print("Received : ");
  Serial.println(x);
  Serial.println("Flashing the LED...");
  digitalWrite(LED_BUILTIN, HIGH);
  delay(200);
  digitalWrite(LED_BUILTIN   , LOW);
  delay(200);
}

void loop() 
{

}
