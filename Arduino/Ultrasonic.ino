// defines pins numbers
int trig = 9;
int echo = 10;
// defines variables
long duration;
int distance;
void setup() {
pinMode(trig, OUTPUT); // Sets the trigPin as an Output
pinMode(echo, INPUT); // Sets the echoPin as an Input
Serial.begin(9600); // Starts the serial communication
}
void loop() {
// Clears the trigPin
digitalWrite(trig, LOW); //Set it to low in case its high
delayMicroseconds(2); //Give some time to stabalize
// Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(trig, HIGH);
delayMicroseconds(10);//Wait 10 Microseconds
digitalWrite(trig, LOW); //Set it to low
// Reads the echoPin, returns the sound wave travel time in microseconds
duration = pulseIn(echo, HIGH); //Get the duration of pulse
// Calculating the distance
distance= duration*0.034/2;
// Prints the distance on the Serial Monitor

Serial.println(distance);
Serial.print("m");
}
