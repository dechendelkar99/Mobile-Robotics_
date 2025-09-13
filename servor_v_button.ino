
#include <Servo.h>

int buttonState = 0;
int buttonPin = 5;
Servo myservo; 
int state = 0;



void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
myservo.attach(9);
pinMode(buttonPin,INPUT);
Serial.println("press button to open the door");


}

void loop() {
 buttonState = digitalRead(buttonPin); 

if ( buttonState == HIGH){
Serial.println("the door is open");

myservo.write(90);
delay(100);
}
else
{
 myservo.write(0);
 Serial.println("the door is closed");
 delay(100);
}

}
