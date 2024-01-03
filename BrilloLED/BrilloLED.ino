int greenLed = 6;
int bright1 = 255;
int bright2 = 125;
int bright3 = 0;
int dt = 500;

void setup() {
  // put your setup code here, to run once:
pinMode(greenLed,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(greenLed, bright1);
delay(dt);
analogWrite(greenLed, bright2);
delay(dt);
analogWrite(greenLed, bright3);
delay(dt);
} 
