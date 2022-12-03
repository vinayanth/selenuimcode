#include<Wire.h>
int x = 0;

void setup() 
{
  Serial.begin(9600);
  Wire.begin(); 
  Serial.println("Initializing Serial for DEBUG:");
}

void loop() 
{
 
  Wire.beginTransmission(7);
  Wire.write(x);
  Wire.endTransmission();
  
  x++;
  Serial.print("Transmitting : ");
  Serial.println(x);
  
  if ( x == 5 ) 
  { 
     x = 0;
  }

  delay(1000);
}
