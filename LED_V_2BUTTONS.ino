
int buttonPin1 = 13;
int buttonPin2 = 12;
int greenLED = 9;
int buttonState1 = 0;
int buttonState2 = 0;


void setup() {
  // put your setup code here, to run once:
pinMode(buttonPin1,INPUT);
pinMode(buttonPin2,INPUT);
pinMode(greenLED,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
buttonState1 = digitalRead(buttonPin1);
buttonState2 = digitalRead(buttonPin2);
if (buttonState1 == HIGH && buttonState2 == HIGH)
{
 
  digitalWrite(greenLED,HIGH);
  
}
else
{
  digitalWrite(greenLED,LOW);
  
}
}
