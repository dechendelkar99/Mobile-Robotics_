// HC-SR04 Pins
const int trigPin = 9;
const int echoPin = 10;

// Buzzer Pin
const int buzzerPin = 8;

long duration;
int distance;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzerPin, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  // Clear trigger pin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  // Send 10 µs pulse
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Read echo pulse
  duration = pulseIn(echoPin, HIGH);

  // Calculate distance in cm
  distance = duration * 0.034 / 2;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  // Buzzer control
  if (distance <= 20) {
    digitalWrite(buzzerPin, HIGH); // Buzzer ON
  } else {
    digitalWrite(buzzerPin, LOW);  // Buzzer OFF
  }

  delay(100);
}
