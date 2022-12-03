int buttons[8] = { 2, 3, 4, 5, 6, 7, 8, 9 };
int buttonstate[8];
int speaker = 13;
int Cur_tone = 0;

// Musical Notes  'c'  , 'd',  'e',  'f',  'g', 'a',  'b',  'C'
int tones[] = { 1915, 1700, 1519, 1432, 1275, 1136, 1014, 956 }; // frequecies corresponding to the musical notes

void setup()
{
  for ( int i = 0; i <= 7; i++)
  {
     pinMode(buttons[i], INPUT);
  }

  for ( int i = 0; i <= 7; i++)
  {
     buttonstate[i] = 0;
  }
  pinMode(speaker, OUTPUT);
}

void loop()
{
  for ( int i = 0; i <= 7; i++)
  {
    buttonstate[i] = digitalRead(buttons[i]);
  }

  if((buttonstate[0] == LOW) || (buttonstate[1] == LOW) || 
  (buttonstate[2] == LOW) || (buttonstate[3] == LOW) || 
  (buttonstate[4] == LOW) || (buttonstate[5] == LOW) || 
  (buttonstate[6] == LOW) || (buttonstate[7] == LOW) )
  {
    for ( int i = 0; i <= 7; i++)
    {
      if (buttonstate[i] == LOW)
      {
        Cur_tone = tones[i];
      }
    }

    digitalWrite(speaker, HIGH);
    delayMicroseconds(Cur_tone);
    digitalWrite(speaker, LOW);
    delayMicroseconds(Cur_tone);
  }
  else
  {
    digitalWrite(speaker, LOW);
  }
}

