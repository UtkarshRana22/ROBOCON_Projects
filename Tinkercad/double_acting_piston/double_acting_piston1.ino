// C++ code
//


int red_led=7;
int green_led=3;
void setup()
{
  pinMode(red_led, OUTPUT);
  pinMode(green_led,OUTPUT);
}

void loop()
{ digitalWrite(green_led,LOW);
  delay(1000);
  digitalWrite(red_led,HIGH);                                    
  delay(2000); // Wait for 1000 millisecond(s)
  digitalWrite(red_led, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(green_led, HIGH);
  delay(2000);
}