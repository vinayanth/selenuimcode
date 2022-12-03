const int arraySize = 10;
int a[arraySize] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

void setup() 
{
  Serial.begin(9600);
}

void loop() 
{
  for ( int i = 0; i < arraySize; i++ )
  {
    Serial.print(a[i]);
    Serial.print('\n');
  }
  delay(500);
}
