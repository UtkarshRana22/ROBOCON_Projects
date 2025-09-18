// C++ code
//
#include<Servo.h>

Servo s;

int switch_pin=8;
int u1_trig_pin=13;
int u1_echo_pin=12;
int u2_echo_pin=4;
int u2_trig_pin=5;
int servo_pwm_pin=6;
float distance_pos;
float distance_speed;
int switch_state;
int servo_speed=0;


void setup()
{
  pinMode(switch_pin, INPUT);
  pinMode(u1_echo_pin, INPUT);
  pinMode(u2_echo_pin, INPUT);
  pinMode(u1_trig_pin, OUTPUT);
  pinMode(u2_trig_pin, OUTPUT);
  s.attach(servo_pwm_pin);
  analogWrite(servo_pwm_pin,255);
  
  Serial.begin(9600);
}

void loop()
{
   digitalWrite(u1_trig_pin,HIGH);
  delayMicroseconds(10);
  digitalWrite(u1_trig_pin,LOW);
  int duration=pulseIn(u1_echo_pin,HIGH);
  distance_pos=duration*0.0343/2;
  
  digitalWrite(u2_trig_pin,HIGH);
  delayMicroseconds(10);
  digitalWrite(u2_trig_pin,LOW);
  int duration1=pulseIn(u2_echo_pin,HIGH);
  distance_speed=duration1*0.0343/2;
  servo_speed=map(distance_speed,2,335,200,2000);

  
  Serial.println(servo_speed);
  Serial.println(distance_pos);
  Serial.println(digitalRead(switch_pin));
 
  if(distance<200){
   
    s.write(0);
    
  }else{
    if(digitalRead(switch_pin)!=0){
      
      s.write(180);
    }else{
      s.write(0)
  }
    
  }
 
  
  
}