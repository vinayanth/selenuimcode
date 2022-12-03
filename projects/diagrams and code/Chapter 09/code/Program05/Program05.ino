#include "LedControl.h"

const int digitalInPin = 2;
LedControl lc = LedControl(12,11,10,1);
int delaytime = 50;

void setup() 
{
  Serial.begin(9600);
  pinMode(digitalInPin, INPUT);
  lc.shutdown(0,false);
  lc.setIntensity(0,8);
  lc.clearDisplay(0);
}

void loop() 
{
  int sensorValue = digitalRead(digitalInPin);
  byte pattern0[8]={B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000};
  byte pattern1[8]={B00000000,B00000000,B00000000,B00011000,B00011000,B00000000,B00000000,B00000000};
  byte pattern2[8]={B00000000,B00000000,B00111100,B00100100,B00100100,B00111100,B00000000,B00000000};
  byte pattern3[8]={B00000000,B01111110,B01000010,B01000010,B01000010,B01000010,B01111110,B00000000};
  byte pattern4[8]={B11111111,B10000001,B10000001,B10000001,B10000001,B10000001,B10000001,B11111111};

  if(sensorValue == HIGH)
  {
    Serial.println("Sound Detected!");
    lc.setRow(0,0,pattern0[0]);
    lc.setRow(0,1,pattern0[1]);
    lc.setRow(0,2,pattern0[2]);
    lc.setRow(0,3,pattern0[3]);
    lc.setRow(0,4,pattern0[4]);
    lc.setRow(0,5,pattern0[5]);
    lc.setRow(0,6,pattern0[6]);
    lc.setRow(0,7,pattern0[7]);
    delay(delaytime);
    lc.setRow(0,0,pattern1[0]);
    lc.setRow(0,1,pattern1[1]);
    lc.setRow(0,2,pattern1[2]);
    lc.setRow(0,3,pattern1[3]);
    lc.setRow(0,4,pattern1[4]);
    lc.setRow(0,5,pattern1[5]);
    lc.setRow(0,6,pattern1[6]);
    lc.setRow(0,7,pattern1[7]);
    delay(delaytime);
    lc.setRow(0,0,pattern2[0]);
    lc.setRow(0,1,pattern2[1]);
    lc.setRow(0,2,pattern2[2]);
    lc.setRow(0,3,pattern2[3]);
    lc.setRow(0,4,pattern2[4]);
    lc.setRow(0,5,pattern2[5]);
    lc.setRow(0,6,pattern2[6]);
    lc.setRow(0,7,pattern2[7]);
    delay(delaytime);
    lc.setRow(0,0,pattern3[0]);
    lc.setRow(0,1,pattern3[1]);
    lc.setRow(0,2,pattern3[2]);
    lc.setRow(0,3,pattern3[3]);
    lc.setRow(0,4,pattern3[4]);
    lc.setRow(0,5,pattern3[5]);
    lc.setRow(0,6,pattern3[6]);
    lc.setRow(0,7,pattern3[7]);
    delay(delaytime);
    lc.setRow(0,0,pattern4[0]);
    lc.setRow(0,1,pattern4[1]);
    lc.setRow(0,2,pattern4[2]);
    lc.setRow(0,3,pattern4[3]);
    lc.setRow(0,4,pattern4[4]);
    lc.setRow(0,5,pattern4[5]);
    lc.setRow(0,6,pattern4[6]);
    lc.setRow(0,7,pattern4[7]);
    delay(delaytime);
  }
  else
  {
    Serial.println("All is quiet on the digital front!");
    lc.setRow(0,0,pattern0[0]);
    lc.setRow(0,1,pattern0[1]);
    lc.setRow(0,2,pattern0[2]);
    lc.setRow(0,3,pattern0[3]);
    lc.setRow(0,4,pattern0[4]);
    lc.setRow(0,5,pattern0[5]);
    lc.setRow(0,6,pattern0[6]);
    lc.setRow(0,7,pattern0[7]);
    delay(delaytime);
  }
  
  delay(250);
}
