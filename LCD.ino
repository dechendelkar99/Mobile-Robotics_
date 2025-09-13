
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);

void setup() {
  // put your setup code here, to run once:
lcd.init();// Initialize LCD
// print a message on the lcd

lcd.backlight();

}

void loop() {
  // put your main code here, to run repeatedly:
lcd.setCursor(2,0);
lcd.print("Hello dechen");
lcd.setCursor(1,1);
lcd.print("Mobile Robotics");
delay(2000);

lcd.clear();

lcd.setCursor(2,0);
lcd.print("hi richen");
lcd.setCursor(3,1);
lcd.print("bye bye");
delay(2000);
lcd.clear();
}
