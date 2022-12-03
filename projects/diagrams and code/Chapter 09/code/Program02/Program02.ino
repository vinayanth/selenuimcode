int speaker = 13;

// Musical Notes         
//              'c'  ,  'C'
int tones[] = { 1915, 956 }; 


void setup() 
{
  pinMode(speaker, OUTPUT);
}

void loop() 
{
  // Morse for S
  flash(tones[1]); 
  flash(tones[1]); 
  flash(tones[1]); 
  delay(300);

  // Morse for O
  flash(tones[0]);
  flash(tones[0]);
  flash(tones[0]);

  // Morse for S
  flash(tones[1]);
  flash(tones[1]);
  flash(tones[1]);
  delay(1000);
}

void flash(int duration)
{
  for ( int i = 0 ; i <= 50; i++)
  {
    digitalWrite(speaker, HIGH);
    delayMicroseconds(duration);
    digitalWrite(speaker, LOW);
    delayMicroseconds(duration);
  }
  delay(200);
}
