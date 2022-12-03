#include <SPI.h>
#include <SD.h>

Sd2Card card;
SdVolume volume;
SdFile root;

const int chipSelect = 4;

void setup() 
{

  Serial.begin(9600);
  while (!Serial)
  {
  }

  Serial.print("\nInitializing SD card...");

  if (!card.init(SPI_HALF_SPEED, chipSelect)) 
  {
    Serial.println("Initialization failed...");
    Serial.println("Check the wirings and if a Card is inserted...");
    return;
  } 
  else 
  {
    Serial.println("\nWirings are correct and a card is present...");
  }

  Serial.print("\nCard Type: ");
  switch (card.type()) 
  {
    case SD_CARD_TYPE_SD1:
      Serial.println("SD1");
      break;
    case SD_CARD_TYPE_SD2:
      Serial.println("SD2");
      break;
    case SD_CARD_TYPE_SDHC:
      Serial.println("SDHC");
      break;
    default:
      Serial.println("Unknown Card Type");
  }


  if (!volume.init(card)) 
  {
    Serial.println("Could not find FAT16/FAT32 partition on the card.");
    Serial.println("Make sure you've formatted the card with FAT as the file system...");
    return;
  }

  uint32_t volumesize;
  Serial.print("\nVolume type is FAT");
  Serial.println(volume.fatType(), DEC);
  Serial.println();

  volumesize = volume.blocksPerCluster();    // clusters are collections of blocks
  volumesize *= volume.clusterCount();       // we'll have a lot of clusters
  volumesize *= 512;                            // SD card blocks are always 512 bytes
  Serial.print("Volume size in bytes: ");
  Serial.println(volumesize);
  Serial.print("Volume size in Kbytes: ");
  volumesize /= 1024;
  Serial.println(volumesize);
  Serial.print("Volume size in Mbytes: ");
  volumesize /= 1024;
  Serial.println(volumesize);


  Serial.println("\nFiles found on the card (Name, Date, and Size in bytes): ");
  root.openRoot(volume);

  // list all files in the card with date and size
  root.ls(LS_R | LS_DATE | LS_SIZE);
}


void loop(void) {

}
