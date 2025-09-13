
int greenLED = 3;
int buttonPin = 2;
int buttonState = 0;
int state = 0;


void setup() {
  // put your setup code here, to run once:
pinMode(greenLED,OUTPUT);
pinMode(buttonPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
buttonState = digitalRead(buttonPin);
if (buttonState == HIGH && state ==0)

{

  digitalWrite(greenLED,HIGH);
  state = 1;
}
else

{
  digitalWrite(greenLED,LOW);
  state = 0;
}

}
