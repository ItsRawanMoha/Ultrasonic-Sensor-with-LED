// defines arduino pins numbers
const int trigPin = 12;
const int echoPin = 11;
const int LEDPin = 7;
long duration;
int distance;
void setup() 
{
pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
pinMode(echoPin, INPUT); // Sets the echoPin as an Input
pinMode(LEDPin, OUTPUT);
Serial.begin(9600); // Starts the serial communication
}
void loop() {
// Clears the trigPin
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
// Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
digitalWrite(LEDPin, LOW);
// Reads the echoPin, returns the sound wave travel time in microseconds
duration = pulseIn(echoPin, HIGH);
// Calculating the distance
distance= duration*0.034/2;
if (distance <= 40)
{
digitalWrite(LEDPin, HIGH);
}
// Prints the distance on the Serial Monit
Serial.print("Distance from the object = ");
Serial.print(distance);
Serial.println(" cm");
delay(1000);

}