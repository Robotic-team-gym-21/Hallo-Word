//Libraries 
#include <Wire.h>  
#include <LiquidCrystal_I2C.h>
#include <LiquidCrystal.h>

LiquidCrystal_I2C lcd1(0x27, 16, 2);
LiquidCrystal_I2C lcd2(0x21, 16, 2);

int trigPinA1 =22;
int echoPinA1=23;
int trigPinA2 =24;
int echoPinA2=25;
int trigPinA3 =26;
int echoPinA3=27;
int trigPinA4 =28;
int echoPinA4=29;
int trigPinA5 =30;
int echoPinA5=31;
long durationA1;
int distanceA1;
long durationA2;
int distanceA2;
long durationA3;
int distanceA3;
long durationA4;
int distanceA4;
long durationA5;
int distanceA5;

int trigPinB1 =2;
int echoPinB1=3;
int trigPinB2 =4;
int echoPinB2=5;
int trigPinB3 =6;
int echoPinB3=7;

long durationB1;
int distanceB1;
long durationB2;
int distanceB2;
long durationB3;
int distanceB3;

void setup() {
  // put your setup code here, to run once:
pinMode(trigPinA1, OUTPUT);
pinMode(echoPinA1, INPUT);
pinMode(trigPinA2, OUTPUT);
pinMode(echoPinA2, INPUT);
pinMode(trigPinA3, OUTPUT);
pinMode(echoPinA3, INPUT);
pinMode(trigPinA4, OUTPUT);
pinMode(echoPinA4, INPUT);
pinMode(trigPinA5, OUTPUT);
pinMode(echoPinA5, INPUT);

pinMode(trigPinB1, OUTPUT);
pinMode(echoPinB1, INPUT);
pinMode(trigPinB2, OUTPUT);
pinMode(echoPinB2, INPUT);
pinMode(trigPinB3, OUTPUT);
pinMode(echoPinB3, INPUT);
Serial.begin(9600);
lcd1.begin();  
lcd1.backlight();
  
lcd2.begin();  
lcd2.backlight();

}

void loop() {
  // put your main code here, to run repeatedly:
  


  digitalWrite(trigPinA1, LOW);
  delay(2);
  digitalWrite(trigPinA1, HIGH);
  delay(10);
  digitalWrite(trigPinA1, LOW);
  durationA1=pulseIn(echoPinA1, HIGH);
  distanceA1=durationA1*0.034/2;

  digitalWrite(trigPinA2, LOW);
  delay(2);
  digitalWrite(trigPinA2, HIGH);
  delay(10);
  digitalWrite(trigPinA2, LOW);
  durationA2=pulseIn(echoPinA2, HIGH);
  distanceA2=durationA2*0.034/2;

  digitalWrite(trigPinA3, LOW);
  delay(2);
  digitalWrite(trigPinA3, HIGH);
  delay(10);
  digitalWrite(trigPinA3, LOW);
  durationA3=pulseIn(echoPinA3, HIGH);
  distanceA3=durationA3*0.034/2;
  
 
  digitalWrite(trigPinA4, LOW);
  delay(2);
  digitalWrite(trigPinA4, HIGH);
  delay(10);
  digitalWrite(trigPinA4, LOW);
  durationA4=pulseIn(echoPinA4, HIGH);
  distanceA4=durationA4*0.034/2;
  
 
  digitalWrite(trigPinA5, LOW);
  delay(2);
  digitalWrite(trigPinA5, HIGH);
  delay(10);
  digitalWrite(trigPinA5, LOW);
  durationA5=pulseIn(echoPinA5, HIGH);
  distanceA5=durationA5*0.034/2;

  digitalWrite(trigPinB1, LOW);
  delay(2);
  digitalWrite(trigPinB1, HIGH);
  delay(10);
  digitalWrite(trigPinB1, LOW);
  durationB1=pulseIn(echoPinB1, HIGH);
  distanceB1=durationB1*0.034/2;
 
  digitalWrite(trigPinB2, LOW);
  delay(2);
  digitalWrite(trigPinB2, HIGH);
  delay(10);
  digitalWrite(trigPinB2, LOW);
  durationB2=pulseIn(echoPinB2, HIGH);
  distanceB2=durationB2*0.034/2;
 

  digitalWrite(trigPinB3, LOW);
  delay(2);
  digitalWrite(trigPinB3, HIGH);
  delay(10);
  digitalWrite(trigPinB3, LOW);
  durationB3=pulseIn(echoPinB3, HIGH);
  distanceB3=durationB3*0.034/2;

  if (distanceA1<=2 && distanceA2<=2 && distanceA3<=2 && distanceA4<=2 && distanceA5>=2 ){
   lcd1.setCursor(0,1);
   lcd1.print("Site parking =");
   lcd1.print("1");
  
  }
  else if (distanceA1<=2 && distanceA2<=2 && distanceA3<=2 && distanceA4>=2 && distanceA5<=2 ){
   lcd1.setCursor(0,1);
   lcd1.print("Site parking =");
   lcd1.print("1");
  }
  else if (distanceA1<=2 && distanceA2<=2 && distanceA3>=2 && distanceA4<=2 && distanceA5<=2 ){
   lcd1.setCursor(0,1);
   lcd1.print("Site parking =");
   lcd1.print("1");
  }
 else  if (distanceA1<=2 && distanceA2>=2 && distanceA3<=2 && distanceA4<=2 && distanceA5<=2 ){
   lcd1.setCursor(0,1);
   lcd1.print("Site parking =");
   lcd1.print("1");
  }
  else if (distanceA1>=2 && distanceA2<=2 && distanceA3<=2 && distanceA4<=2 && distanceA5<=2 ){
   lcd1.setCursor(0,1);
   lcd1.print("Site parking =");
   lcd1.print("1");
  }




  
  else if (distanceA1>=2 && distanceA2>=2 && distanceA3>=2 && distanceA4<=2 && distanceA5<=2 ){
   lcd1.setCursor(0,1);
   lcd1.print("Site parking =");
   lcd1.print("3");
  }
 else if (distanceA1>=2 && distanceA2>=2 && distanceA3<=2 && distanceA4>=2 && distanceA5<=2 ){
   lcd1.setCursor(0,1);
   lcd1.print("Site parking =");
   lcd1.print("3");
  }
  else if (distanceA1>=2 && distanceA2<=2 && distanceA3>=2 && distanceA4>=2 && distanceA5<=2 ){
   lcd1.setCursor(0,1);
   lcd1.print("Site parking =");
   lcd1.print("3");
  }
  else if (distanceA1<=2 && distanceA2>=2 && distanceA3>=2 && distanceA4>=2 && distanceA5<=2 ){
   lcd1.setCursor(0,1);
   lcd1.print("Site parking =");
   lcd1.print("3");
  }
 else if (distanceA1>=2 && distanceA2<=2 && distanceA3<=2 && distanceA4>=2 && distanceA5>=2 ){
   lcd1.setCursor(0,1);
   lcd1.print("Site parking =");
   lcd1.print("3");
  }
 else if (distanceA1<=2 && distanceA2>=2 && distanceA3<=2 && distanceA4>=2 && distanceA5>=2 ){
  lcd1.setCursor(0,1);
   lcd1.print("Site parking =");
   lcd1.print("3");
  }
 else if (distanceA1<=2 && distanceA2<=2 && distanceA3>=2 && distanceA4>=2 && distanceA5>=2 ){
   lcd1.setCursor(0,1);
   lcd1.print("Site parking =");
   lcd1.print("3");
  }

 else if (distanceA1>=2 && distanceA2<=2 && distanceA3>=2 && distanceA4<=2 && distanceA5>=2 ){
   lcd1.setCursor(0,1);
   lcd1.print("Site parking =");
   lcd1.print("3");
  }
 else if (distanceA1>=2 && distanceA2>=2 && distanceA3<=2 && distanceA4<=2 && distanceA5>=2 ){
   lcd1.setCursor(0,1);
   lcd1.print("Site parking =");
   lcd1.print("3");
  }
 else if (distanceA1<=2 && distanceA2>=2 && distanceA3>=2 && distanceA4>=2 && distanceA5<=2 ){
   lcd1.setCursor(0,1);
   lcd1.print("Site parking =");
   lcd1.print("3");
  }




 

 else if (distanceA1<=2 && distanceA2<=2 && distanceA3<=2 && distanceA4>=2 && distanceA5>=2 ){
   lcd1.setCursor(0,1);
   lcd1.print("Site parking =");
   lcd1.print("2");
  }
 else if (distanceA1<=2 && distanceA2<=2 && distanceA3>=2 && distanceA4<=2 && distanceA5>=2 ){
   lcd1.setCursor(0,1);
   lcd1.print("Site parking =");
   lcd1.print("2");
  }
  else if (distanceA1<=2 && distanceA2>=2 && distanceA3<=2 && distanceA4<=2 && distanceA5>=2 ){
   lcd1.setCursor(0,1);
   lcd1.print("Site parking =");
   lcd1.print("2");
  }
 else if (distanceA1>=2 && distanceA2<=2 && distanceA3<=2 && distanceA4<=2 && distanceA5>=2 ){
   lcd1.setCursor(0,1);
   lcd1.print("Site parking =");
   lcd1.print("2");
  }
 else if (distanceA1<=2 && distanceA2>=2 && distanceA3>=2 && distanceA4<=2 && distanceA5<=2 ){
   lcd1.setCursor(0,1);
   lcd1.print("Site parking =");
   lcd1.print("2");
  }
 else if (distanceA1>=2 && distanceA2<=2 && distanceA3>=2 && distanceA4<=2 && distanceA5<=2 ){
   lcd1.setCursor(0,1);
   lcd1.print("Site parking =");
   lcd1.print("2");
  }
 else if (distanceA1>=2 && distanceA2>=2 && distanceA3<=2 && distanceA4<=2 && distanceA5<=2 ){
   lcd1.setCursor(0,1);
   lcd1.print("Site parking =");
   lcd1.print("2");
  }

 else if (distanceA1<=2 && distanceA2>=2 && distanceA3<=2 && distanceA4>=2 && distanceA5<=2 ){
   lcd1.setCursor(0,1);
   lcd1.print("Site parking =");
   lcd1.print("2");
  }
 else if (distanceA1<=2 && distanceA2<=2 && distanceA3>=2 && distanceA4>=2 && distanceA5<=2 ){
   lcd1.setCursor(0,1);
   lcd1.print("Site parking =");
   lcd1.print("2");
  }
 else if (distanceA1>=2 && distanceA2<=2 && distanceA3<=2 && distanceA4<=2 && distanceA5>=2 ){
   lcd1.setCursor(0,1);
   lcd1.print("Site parking =");
   lcd1.print("2");
  }







 else if (distanceA1>=2 && distanceA2>=2 && distanceA3>=2 && distanceA4>=2 && distanceA5<=2 ){
   lcd1.setCursor(0,1);
   lcd1.print("Site parking =");
   lcd1.print("4");
  }
 else if (distanceA1>=2 && distanceA2>=2 && distanceA3>=2 && distanceA4<=2 && distanceA5>=2 ){
   lcd1.setCursor(0,1);
   lcd1.print("Site parking =");
   lcd1.print("4");
  }
 else if (distanceA1>=2 && distanceA2>=2 && distanceA3<=2 && distanceA4>=2 && distanceA5>=2 ){
   lcd1.setCursor(0,1);
   lcd1.print("Site parking =");
   lcd1.print("4");
  }
 else if (distanceA1>=2 && distanceA2<=2 && distanceA3>=2 && distanceA4>=2 && distanceA5>=2 ){
   lcd1.setCursor(0,1);
   lcd1.print("Site parking =");
   lcd1.print("4");
  }
 else if (distanceA1<=2 && distanceA2>=2 && distanceA3>=2 && distanceA4>=2 && distanceA5>=2 ){
   lcd1.setCursor(0,1);
   lcd1.print("Site parking =");
   lcd1.print("4");
  }


 else if (distanceA1>=2 && distanceA2>=2 && distanceA3>=2 && distanceA4>=2 && distanceA5>=2 ){
   
   lcd1.setCursor(0,1);
   lcd1.print("Site parking =");
   lcd1.print("5");
   
    }

 else if (distanceA1<2 && distanceA2<2 && distanceA3<2 && distanceA4<2 && distanceA5<2 ){
   
   lcd1.setCursor(0,1);
   lcd1.print("Site parking =");
   lcd1.print("0");
  }

if (distanceB1<=2 && distanceB2>2 && distanceB3>2 ){
   lcd2.setCursor(0,0);
   lcd2.print("Site parking =");
   lcd2.print("2");
  
  }
   else if (distanceB1>2 && distanceB2<=2 && distanceB3>2 ){
   lcd2.setCursor(0,0);
   lcd2.print("Site parking =");
   lcd2.print("2");
   }
    else if (distanceB1>2 && distanceB2>2 && distanceB3<=2 ){
   lcd2.setCursor(0,0);
   lcd2.print("Site parking =");
   lcd2.print("2");
  }


 else if (distanceB1>2 && distanceB2<=2 && distanceB3<=2 ){
   lcd2.setCursor(0,0);
   lcd2.print("Site parking =");
   lcd2.print("1");
  
  }
   else if (distanceB1<=2 && distanceB2>2 && distanceB3<=2 ){
   lcd2.setCursor(0,0);
   lcd2.print("Site parking =");
   lcd2.print("1");
   }
    else if (distanceB1<=2 && distanceB2<=2 && distanceB3>2 ){
   lcd2.setCursor(0,0);
   lcd2.print("Site parking =");
   lcd2.print("1");
  }

else  if (distanceB1<=2 && distanceB2<=2 && distanceB3<=2 ){
   lcd2.setCursor(0,0);
   lcd2.print("Site parking =");
   lcd1.print("0");
  }

else if (distanceB1>2 && distanceB2>2 && distanceB3>2 ){
   lcd2.setCursor(0,0);
   lcd2.print("Site parking =");
   lcd2.print("3");
  }
  
}
