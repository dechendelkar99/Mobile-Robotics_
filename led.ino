
int ledPin = 9;



void setup() {
  // put your setup code here, to run once:
pinMode(ledPin,OUTPUT);
Serial.begin(9600);
Serial.println("Type 1 to turn LED ON, Type 2 to turn LED OFF");
}





void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available()>0)

{
  char input_command = Serial.read();
  if (input_command =='1')
  {
    digitalWrite(ledPin,HIGH);
    Serial.println("LED ON");
  }
  else if(input_command == '0')
  {
    digitalWrite(ledPin,LOW);
    Serial.println("LED OFF");
  }
o  else
  {
    Serial.println("INVALID COMMAND");
  }
}
}
