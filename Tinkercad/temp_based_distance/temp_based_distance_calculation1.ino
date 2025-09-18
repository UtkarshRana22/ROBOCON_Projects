// C++ code
//

int echo_pin=9;
int trig_pin=8;
int temp_pin=A0;
long duration;
int distance;
int temp;
float speed_sound;

void setup()
{
  pinMode(echo_pin, INPUT);
  pinMode(trig_pin, OUTPUT);
   pinMode(temp_pin, INPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(trig_pin,LOW);
  delayMicroseconds(2);
  
  digitalWrite(trig_pin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig_pin,LOW)
;
  duration=pulseIn(echo_pin,HIGH);
  
  distance=duration*0.0343/2;
  
  
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
  
  temp=analogRead(temp_pin);
  int actual_temp=map(temp,20,358,-40,125);
  Serial.print("Temp: ");
  Serial.print(actual_temp);
  Serial.println(" celsisus");
  
  speed_sound=331+0.6*(actual_temp);
  speed_sound=(speed_sound*100)/100000;
  distance=duration*speed_sound/2;
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
  
  
}