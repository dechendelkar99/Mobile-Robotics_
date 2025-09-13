
int potenPin = A0;
int potenValue1 = 0;
int potenValue2 = 0;
int ledPin1 = 9;
int ledPin2 = 3;

void setup() {
  // put your setup code here, to run once:
pinMode(potenPin,INPUT);
Serial.begin(9600);
pinMode(ledPin1,OUTPUT);
pinMode(ledPin2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
potenValue1 = analogRead(potenPin);
potenValue1 = map(potenValue1,0,1023,0,255);
Serial.println(potenValue1);
analogWrite(ledPin1,potenValue1);
delay(2);

potenValue2 = analogRead(potenPin);
potenValue2 = map(potenValue2,0,1023,255,0);
Serial.println(potenValue2);
analogWrite(ledPin2,potenValue2);
delay(2);
}
