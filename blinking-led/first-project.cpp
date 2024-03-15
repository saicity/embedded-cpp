//I wanted to mimic a smoke detector beeping pattern from memory
const int ledPin = LED_BUILTIN;

void setup() {
  //Initializes the LED PIN to output on the arduino board
  pinMode(ledPin, OUTPUT);
}

void loop() {
  /* Turns on the LED pin, waits 0.5s and turns it off
     After doing this three times it will wait 1.5s
  */
  digitalWrite(ledPin, HIGH);
  delay(500);
  digitalWrite(ledPin, LOW);
  delay(500);
  digitalWrite(ledPin, HIGH);
  delay(500);
  digitalWrite(ledPin, LOW);
  delay(500);
  digitalWrite(ledPin, HIGH);
  delay(500);
  digitalWrite(ledPin, LOW);
  delay(1500);
}
