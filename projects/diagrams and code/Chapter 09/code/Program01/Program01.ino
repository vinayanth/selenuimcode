int speaker = 13;

// Musical Notes         
//              'c'  , 'd',  'e',  'f',  'g', 'a',  'b',  'C'
int tones[] = { 1915, 1700, 1519, 1432, 1275, 1136, 1014, 956 }; 
// The above are frequencies corresponding to the musical notes

void setup() 
{
  pinMode(speaker, OUTPUT);
}

void loop() 
{
  for ( int i = 0; i <= 7; i++)
  {
    for ( int j = 0 ; j <= 250; j++)
    {
      digitalWrite(speaker, HIGH);
      delayMicroseconds(tones[i]);
      digitalWrite(speaker, LOW);
      delayMicroseconds(tones[i]);
    }
    delay(50);
  }
}
