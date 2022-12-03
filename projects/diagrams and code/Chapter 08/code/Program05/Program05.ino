// Declaring String objects
String myStr01, myStr02, myStr03;

void setup() 
{
  Serial.begin(9600);

  myStr01 = "Hello";
  myStr02 = " World!";
  Serial.print(myStr01);
  Serial.print(myStr02);
  Serial.println("");
  Serial.println(myStr01.length());
  Serial.println(myStr02.length());

  myStr03 = "  Test String  ";
  Serial.println(myStr03);
  myStr03.trim();
  Serial.println(myStr03);
  myStr03.toLowerCase();
  Serial.println(myStr03);
  myStr03.toUpperCase();
  Serial.println(myStr03);
}

void loop() 
{
}
