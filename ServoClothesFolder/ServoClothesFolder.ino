#include <Servo.h>.

Servo myservo1;
Servo myservo2;
Servo myservo3;
Servo myservo4;
Servo myservo5;
Servo myservo6;



int pos = 0;
int pos2 = 360;

void setup() {
myservo1.attach(9);
myservo2.attach(10);
myservo3.attach(11);
myservo4.attach(12);
myservo5.attach(6);
myservo6.attach(7);
Serial.begin(9600);
myservo1.write(pos);
myservo2.write(pos2);
delay(2000);
myservo3.write(pos);
myservo4.write(pos2);
delay(2000);
myservo5.write(pos);
myservo6.write(pos2);

}

void loop() {

firstFold();
secondFold();
//thridFold();


}

void firstFold(){

delay(2000);
pos = pos + 360;
pos2 = pos2 - 360;                  
myservo1.write(pos);
myservo2.write(pos2);
delay(2000);
pos = pos - 360;
pos2 = pos2 + 360;
myservo1.write(pos);
myservo2.write(pos2);
}

void secondFold(){

delay(2000); 
pos = pos + 360;
pos2 = pos2 - 360;                 
myservo3.write(pos);
myservo4.write(pos2);
delay(2000);
pos = pos - 360;
pos2 = pos2 + 360;
myservo3.write(pos);
myservo4.write(pos2);
delay(2000);
}

void thridFold(){
delay(2000); 
pos = pos + 720;
pos2 = pos2 - 720;                 
myservo5.write(pos);
myservo6.write(pos2);
delay(2000);
pos = pos - 720;
pos2 = pos2 + 720;
myservo5.write(pos);
myservo6 .write(pos2);
delay(2000);
}
