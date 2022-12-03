int led = 13;
void setup() // run once, when the sketch starts
{
  pinMode(led, OUTPUT); // sets the digital pin as output
}
void loop()
{
  // Morse for S
  flash(200); 
  flash(200); 
  flash(200); 
  delay(300);

  // Morse for O
  flash(500);
  flash(500);
  flash(500);

  // Morse for S
  flash(200);
  flash(200);
  flash(200);
  delay(1000);
}


void flash(int duration)
{
  digitalWrite(led, HIGH);
  delay(duration);
  digitalWrite(led, LOW);
  delay(duration);
}
