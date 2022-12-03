const int rows = 3;
const int columns = 4;
int a[rows][columns] = {{1, 2, 3, 4}, 
                        {5, 6, 7, 8}, 
                        {9, 10, 11, 12}};

void setup() 
{
  Serial.begin(9600);
}

void loop() 
{
  for ( int i = 0; i < rows; i++ )
  {
    for ( int j = 0; j < columns; j++ )
    {
      Serial.print(a[i][j]);
      Serial.print('\t');
    }
    Serial.print('\n');
  }
  delay(500);
}
