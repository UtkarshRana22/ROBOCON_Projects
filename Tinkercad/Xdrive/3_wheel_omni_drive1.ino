// C++ code
//

int motor_l_pin1=5;
int motor_l_pin2=6;
int motor_l_pwm=10;
int motor_r_pin1=4;
int motor_r_pin2=3;
int motor_r_pwm=9;
int motor_t_pin1=7;
int motor_t_pin2=8;
int motor_t_pwm=11;
 char drive_direction=NULL;
void setup()
{
  pinMode(motor_l_pin1, OUTPUT);
  pinMode(motor_l_pin2, OUTPUT);
  pinMode(motor_l_pwm, OUTPUT);
  pinMode(motor_r_pin1, OUTPUT);
  pinMode(motor_r_pin2, OUTPUT);
  pinMode(motor_r_pwm, OUTPUT);
  pinMode(motor_t_pin1, OUTPUT);
  pinMode(motor_t_pin2, OUTPUT);
  pinMode(motor_t_pwm, OUTPUT);
  
 
  
  Serial.begin(9600);
}

void stop_(){
       digitalWrite(motor_r_pin1,LOW);
      digitalWrite(motor_r_pin2,LOW);
      digitalWrite(motor_r_pwm,LOW);
      digitalWrite(motor_l_pin1,LOW);
      digitalWrite(motor_l_pin2,LOW);
      digitalWrite(motor_l_pwm,LOW);
      digitalWrite(motor_t_pin1,LOW);
      digitalWrite(motor_t_pin2,LOW);
      digitalWrite(motor_t_pwm,LOW);
 
  
}

void direction_control(char motor_,char direction){
  
  if(motor_=='r'){
    if(direction=='c'){
      digitalWrite(motor_r_pin1,LOW);
      digitalWrite(motor_r_pin2,HIGH);
      digitalWrite(motor_r_pwm,HIGH);
      
    }else{
      digitalWrite(motor_r_pin1,HIGH);
      digitalWrite(motor_r_pin2,LOW);   
      digitalWrite(motor_r_pwm,HIGH);
      
    }   
  
  }else if(motor_=='l'){
     if(direction=='c'){
      digitalWrite(motor_l_pin1,LOW);
      digitalWrite(motor_l_pin2,HIGH);
      digitalWrite(motor_l_pwm,HIGH);
      
    }else{
      digitalWrite(motor_l_pin1,HIGH);
      digitalWrite(motor_l_pin2,LOW);   
      digitalWrite(motor_l_pwm,HIGH);
      
     }
          
  }else if(motor_=='t'){
        if(direction=='c'){
        digitalWrite(motor_t_pin1,LOW);
        digitalWrite(motor_t_pin2,HIGH);   
        digitalWrite(motor_t_pwm,HIGH);
          
          
        }else{
      digitalWrite(motor_t_pin1,HIGH);
      digitalWrite(motor_t_pin2,LOW);   
      digitalWrite(motor_t_pwm,HIGH);

       
       
       
     }  
    
  }
    
}
void loop(){
   Serial.println("Enter a direction (F/B/R/L/Clockwise(C)/Diagonal(D):");
  if(Serial.available()>0){
   
    drive_direction=Serial.read();
    
    
    if(drive_direction=='F'){
     stop_();
     direction_control('l','a');
     direction_control('r','c');
      
    }else if(drive_direction=='B'){
     stop_();
     direction_control('l','a');
     direction_control('r','a');

  
    }else if(drive_direction=='L'){
     stop_();
     direction_control('t','a');
     direction_control('r','a'); 
     direction_control('l','a');
      
    }else if(drive_direction=='R'){
     stop_();
     direction_control('t','c');
     direction_control('r','c');  
     direction_control('l','c');
      
    }else if(drive_direction=='C'){
     stop_();
     direction_control('t','c');
     direction_control('l','a');
     direction_control('r','a');
      
    }else{
     stop_();
     direction_control('t','c');
     direction_control('l','c');
    
      
    }
  delay(2000);
}
}