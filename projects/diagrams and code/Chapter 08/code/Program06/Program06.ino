int freeRAM () 
{
  // This function is referred from
  // https://playground.arduino.cc/Code/AvailableMemory
  extern int __heap_start, *__brkval; 
  int v; 
  return (int) &v - (__brkval == 0 ? (int) &__heap_start : (int) __brkval); 
}

const String globalMsg = "Global Variable";

void setup() 
{
  Serial.begin(9600);
  String localMsg = "Local Variable";
  Serial.println("We are in setup()...");
  Serial.print("Free RAM: ");
  Serial.println(freeRAM());
}

void loop() 
{
  Serial.println("We are in loop()...");
  Serial.print("Free RAM: ");
  Serial.println(freeRAM());
  delay(10000);
}
