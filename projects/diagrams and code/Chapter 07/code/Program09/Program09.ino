#include "LedControl.h"
LedControl lc=LedControl(12,11,10,1);
void setup()
{
  lc.shutdown(0,false);
  lc.setIntensity(0,8);
  lc.clearDisplay(0);
}
void loop()
{
  for (int a=0; a<8; a++)
  {
    lc.setDigit(0,a,a,false);
    delay(1000);
  }
  for (int a=0; a<8; a++)
  {
    lc.setDigit(0,a,8,1);
    delay(1000);
  }
  for (int a=0; a<8; a++)
  {
    lc.setDigit(0,a,0,false);
    delay(1000);
  }
  for (int a=0; a<8; a++)
  {
    lc.setChar(0,a,' ',false);
    delay(1000);
  }
  for (int a=0; a<8; a++)
  {
    lc.setChar(0,a,'-',false);
    delay(1000);
  }
  for (int a=0; a<8; a++)
  {
    lc.setChar(0,a,' ',false);
    delay(1000);
  }
}
