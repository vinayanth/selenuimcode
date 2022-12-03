// declaration of a 6 character array
char myStr01[6];
char myStr02[] = " World!";

void setup() 
{
  Serial.begin(9600);
  myStr01[0] = 'H';
  myStr01[1] = 'e';
  myStr01[2] = 'l';
  myStr01[3] = 'l';
  myStr01[4] = 'o';

  // the null terminator
  myStr01[5] = 0;
}

void loop() 
{
  Serial.print(myStr01);
  Serial.print(myStr02);
  Serial.print('\n');
  delay(500);
}
