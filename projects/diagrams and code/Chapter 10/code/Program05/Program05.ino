const int trigDigitalPin = 2;
const int echoDigitalPin = 3;

long duration;
int distance;

void setup() 
{
  pinMode(trigDigitalPin, OUTPUT);
  pinMode(echoDigitalPin, INPUT);
  Serial.begin(9600);
}

void loop() 
{

  // set the trigger pin on LOW state for 2 microseconds
  digitalWrite(trigDigitalPin, LOW);
  delayMicroseconds(2);
  
  // set the trigger on HIGH state for 10 microseconds
  digitalWrite(trigDigitalPin, HIGH);
  delayMicroseconds(10);
  
  digitalWrite(trigDigitalPin, LOW);
  
  // read the echo pin and 
  // return the travel time for the sound wave in microseconds
  duration = pulseIn(echoDigitalPin, HIGH);
  
  // Calculating the distance
  distance = duration * 0.034 / 2;
  
  // print the distance on the Arduino Serial Monitor
  Serial.print("Distance: ");
  Serial.println(distance);
  delay(500);
}
