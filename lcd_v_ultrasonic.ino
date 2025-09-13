const int trigPin = 13;
const int echoPin = 12;

#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x20,16,2);

float duration, distance;


void setup() 
{
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
  lcd.init();
  lcd.backlight();
 
}
void loop() 
{
    digitalWrite(trigPin, LOW); 
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH); 
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);
    
    duration = pulseIn(echoPin, HIGH);
    distance = duration*0.034/2;
    lcd.clear();
    
    lcd.setCursor(0,0);
    lcd.print(distance);
    lcd.setCursor(5,0);
    lcd.print("cm");
  
   
    delay(500);
    
   
    Serial.println(distance);
}
