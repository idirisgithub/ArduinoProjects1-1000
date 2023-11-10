int redPin = 9;    // Red LED connected to digital pin 9
int yellowPin = 10; // Yellow LED connected to digital pin 10
int greenPin = 11;  // Green LED connected to digital pin 11

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
}

void loop() {
  // Red Light
  digitalWrite(redPin, HIGH);
  delay(2000); // 2 seconds

  // Red and Yellow Lights (Transition)
  digitalWrite(redPin, HIGH);
  digitalWrite(yellowPin, HIGH);
  delay(1000); // 1 second

  // Green Light
  digitalWrite(redPin, LOW);
  digitalWrite(yellowPin, LOW);
  digitalWrite(greenPin, HIGH);
  delay(2000); // 2 seconds

  // Yellow Light
  digitalWrite(greenPin, LOW);
  digitalWrite(yellowPin, HIGH);
  delay(1000); // 1 second
}