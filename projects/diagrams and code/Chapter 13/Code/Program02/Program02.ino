#include <SPI.h>
#include <SD.h>

File myFile;

void setup() 
{
  Serial.begin(9600);

  Serial.print("Initializing SD card...");

  if (!SD.begin(4)) 
  {
    Serial.println("initialization failed!");
    return;
  }
  Serial.println("initialization done.");

  if (SD.exists("test.txt")) 
  {
    Serial.println("test.txt exists.");
  } 
  else 
  {
    Serial.println("test.txt doesn't exist.");
  }

  Serial.println("Creating test.txt...");
  myFile = SD.open("test.txt", FILE_WRITE);
  myFile.close();


  if (SD.exists("test.txt")) 
  {
    Serial.println("test.txt exists.");
  }
  else 
  {
    Serial.println("test.txt doesn't exist.");
  }

  Serial.println("Removing test.txt...");
  SD.remove("test.txt");

  if (SD.exists("test.txt")) 
  {
    Serial.println("test.txt exists.");
  }
  else 
  {
    Serial.println("test.txt doesn't exist.");
  }
}

void loop() 
{

}
