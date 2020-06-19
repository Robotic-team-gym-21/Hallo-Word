
#include<Servo.h>
int servo2Pin=8;
int waterSensor=A3;
int waterSensorValue;


int servo1Pin=7;
Servo s;
Servo s1;
int eLDRPin = A0;
int wLDRPin = A1;
int eastLDR = 0;
int westLDR = 0;
int difference = 0;
int servo1SET=0;

int led1=4;
int led2=2;
int led3=3;
int ledLDRPin = A2;
int ledLDR=0;

void setup() {
  // put your setup code here, to run once:
s.attach(servo1Pin);
s1.attach(servo2Pin);
Serial.begin(9600);
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
}

void loop() {
//περιπου στα 300 ειναι ποτισμενο στα 600 θελει ποτισμα 
// put your main code here, to run repeatedly:
int waterSensorValue=analogRead(waterSensor); 
Serial.print(analogRead(waterSensor)); 
 
//Serial.print(analogRead(ledLDRPin));  
ledLDR=analogRead(ledLDRPin);
//Serial.print("ledLDR");
//Serial.println(ledLDR);
if (ledLDR<600){
digitalWrite(led1, HIGH);
digitalWrite(led2, HIGH);
digitalWrite(led3, HIGH);
}
else{
digitalWrite(led1, LOW);
digitalWrite(led2, LOW);
digitalWrite(led3, LOW);
}

eastLDR=analogRead(eLDRPin);
westLDR=analogRead(wLDRPin);

difference = westLDR - eastLDR;
if (difference >1) {
  if (servo1SET <=150) {
    servo1SET ++;
    s.write(servo1SET);
  }
}
  else if (difference <-1) {
  if (servo1SET >=30) {
    servo1SET --;
    s.write(servo1SET);
}
}
delay(100);

s1.write(0);
if (waterSensorValue<400) {
  s1.write(0);}
else if (waterSensorValue>=400) {
  s1.write(75);}

}

