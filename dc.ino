
// Left motors
int ENA = 5;   // PWM
int IN1 = 6;
int IN2 = 7;

// Right motors
int ENB = 9;   // PWM
int IN3 = 8;
int IN4 = 11;


void setup() {
  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);

  pinMode(ENB, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

 
  backward(200);
  delay(2000);
  rightTurn(144);//adjust time to control turn angle
  delay(900);
  backward(200);
  delay(2000);
  rightTurn(144);
  delay(900);
  backward(200);
  delay(2000);
  rightTurn(145);
  delay(900);
  backward(200);
  delay(2000);
  
  stopAll();
  delay(1000);
}


void backward(int speed) {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  analogWrite(ENA, speed);

  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  analogWrite(ENB, speed);
}
void rightTurn(int speed) {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  analogWrite(ENA, speed);

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  analogWrite(ENB, speed);
}
void stopAll() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}
void loop(){
  
}

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
