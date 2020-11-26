int led_pin=27;
int led_pin1=26;
int led_pin2=32;
void setup() {
  // put your setup code here, to run once:

pinMode(led_pin,OUTPUT);
pinMode(led_pin1,OUTPUT);
pinMode(led_pin2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(led_pin,HIGH);
delay(1000);
digitalWrite(led_pin,LOW);
delay(1000);
digitalWrite(led_pin1,HIGH);
delay(1000);
Serial.println(led_pin1);
digitalWrite(led_pin1,LOW);
delay(1000);
digitalWrite(led_pin2,HIGH);
delay(1000);
digitalWrite(led_pin2,LOW);
delay(1000);
}
