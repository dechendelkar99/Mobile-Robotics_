
#include <Servo.h>
int potenPin = A0;
int potenValue = 0;
Servo myservo; 
int currentPos = 0;
int angle = 0;


void setup() {
  // put your setup code here, to run once:
pinMode(potenPin,INPUT);
Serial.begin(9600);
myservo.attach(9);

}

void loop() {
  // put your main code here, to run repeatedly:

potenValue = analogRead(potenPin);
potenValue = map(potenValue,0,1023,0,180);
Serial.println(potenValue);
for(angle = 0; angle <= 180; angle++){
myservo.write(angle);
delay(20);
}
for (angle = 180; angle >= 0; angle--){
myservo.write(angle);
delay(20);
}
}
