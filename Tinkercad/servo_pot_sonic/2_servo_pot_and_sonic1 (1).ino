// C++ code
#include<Servo.h>

Servo s;
Servo s1;


int potpin=A2;
int s1pin=3;
int s2pin=5;
int trigpin=9;
int echopin=8;
int potval=0;
int angle=0;
void setup()
{
  pinMode(A2, INPUT);
  pinMode(trigpin, OUTPUT);
  pinMode(echopin, INPUT);
  s.attach(s1pin);
  s1.attach(s2pin);
  Serial.begin(9600);
  s.write(0);
  s1.write(0);
}

void loop()
{
  potval=analogRead(potpin);
  s1.write(map(potval,0,255,0,360));
  Serial.println("Enter an angle :");
  if(Serial.available()>0){
    
    angle=Serial.parseInt();
   
    if(angle>0){
      Serial.println(angle);
      
      s.write(angle);
      
    }
    
    
  }
}