

int redLED = 3;
int blueLED = 5;
int greenLED = 6;
const int Trig = 9;
const int Echo = 10;
float duration, distance;
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);




void setup() {
  // put your setup code here, to run once:
pinMode(redLED,OUTPUT);
pinMode(blueLED,OUTPUT);
pinMode(greenLED,OUTPUT);

pinMode(Trig,OUTPUT);
pinMode(Echo,INPUT);
lcd.init();// Initialize LCD
// print a message on the lcd
lcd.backlight();
Serial.begin(9600);

}



void loop() {
  // put your main code here, to run repeatedly:


digitalWrite(Trig,LOW);
delayMicroseconds(2);
digitalWrite(Trig,HIGH);
delayMicroseconds(10);
digitalWrite(Trig,LOW);


duration = pulseIn(Echo,HIGH);


if(distance <= 10){
digitalWrite(redLED,HIGH);


}

  else{

digitalWrite(redLED,LOW);

  }


if(distance <= 15){
digitalWrite(blueLED,HIGH);

}
  
 else {

digitalWrite(blueLED,LOW);
 }



if(distance <= 20){
digitalWrite(greenLED,HIGH);

}
else
{
 digitalWrite(greenLED,LOW);
 
}
distance = (duration * 0.034)/2;
Serial.print("distance");
Serial.print(distance);
Serial.println("CM");


lcd.setCursor(2,0);
lcd.print(distance);
lcd.setCursor(6,0);
lcd.print("cm");
lcd.clear();
delay(100);
}
