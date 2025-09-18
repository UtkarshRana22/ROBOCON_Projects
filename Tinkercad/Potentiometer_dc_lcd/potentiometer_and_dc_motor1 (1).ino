#include <LiquidCrystal_I2C.h> 

LiquidCrystal_I2C Display(0x20, 16, 2);
int dpin1=4;
int dpin2=5;
int pwmpin=10;
int potpin=A1;
int potval=0;
void setup()
{
  pinMode(dpin1, OUTPUT);
  pinMode(dpin2, OUTPUT);
  pinMode(pwmpin, OUTPUT);
  pinMode(potpin,INPUT);
  
  Display.init();
  Display.backlight();
  Display.clear();
  Display.setCursor(0, 0);
  Display.print(20000);
  Display.setCursor(0, 1);
  
  Serial.begin(9600);
  digitalWrite(dpin1,HIGH);
  digitalWrite(dpin2,LOW);
  digitalWrite(pwmpin,LOW);
  delay(4000);
}

void loop()
{
  
  potval=analogRead(potpin);
  Serial.println(potval);
  int pwmval=map(potval,0,1025,0,255);
  analogWrite(pwmpin,pwmval);
  Display.clear();
  Display.setCursor(0, 0);
  Display.print(map(pwmval,0,255,0,16530));
  delay(2000);
}