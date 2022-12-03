int n[10];
void setup() 
{
  // This section is empty..
  Serial.begin(9600);
}

void loop() 
{
  for ( int i = 0; i < 10; i++ )
  {
    n[i] = i;
  }

  for ( int j = 0; j < 10; j++ )
  {
    Serial.print(n[j]);
    Serial.print('\n');
  }
  delay(500);
}
