
#include "LedControl.h"

LedControl lc=LedControl(12,11,10,2);

unsigned long delaytime=500;


void setup() 
{
 
  int devices = lc.getDeviceCount();
 
  for(int address=0; address < devices; address++) 
  {
    lc.shutdown(address, false);
    lc.setIntensity(address, 8);
    lc.clearDisplay(address);
  }
}

void loop() 
{ 

  int devices = lc.getDeviceCount();
  
  for(int row=0; row<8; row++) 
  {
    for(int col=0; col<8; col++) 
    {
      for(int address=0; address<devices; address++) 
      {
        delay(delaytime);
        lc.setLed(address, row, col, true);
        delay(delaytime);
        lc.setLed(address, row, col, false);
      }
    }
  }
}
