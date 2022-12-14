#include <SPI.h>
#include <SD.h>

File myFile;

void setup()
{
  Serial.begin(9600);
  while (!Serial) 
  {
  }

  Serial.print("Initializing SD card...");

  if (!SD.begin(4)) 
  {
    Serial.println("initialization failed!");
    return;
  }
  Serial.println("initialization done.");

  myFile = SD.open("test.txt", FILE_WRITE);

  if (myFile) 
  {
    Serial.print("Writing to test.txt...");
    myFile.println("The quick brown fox jumps over the lazy dog.");
    myFile.close();
    Serial.println("done.");
  } 
  else 
  {
    Serial.println("error opening test.txt");
  }

  myFile = SD.open("test.txt");
  if (myFile) 
  {
    Serial.println("test.txt:");

    while (myFile.available())
    {
      Serial.write(myFile.read());
    }

    myFile.close();
  } 
  else
  {
    Serial.println("error opening test.txt");
  }
}

void loop() 
{
}
