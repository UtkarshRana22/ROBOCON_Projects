// C++ code
//

int led_list[10]={12,2,3,4,5,6,7,8,9,10};
int number;
int binary[32];

void setup()
{
    pinMode(led_list[0], OUTPUT);
    pinMode(led_list[1], OUTPUT);
    pinMode(led_list[2], OUTPUT);
    pinMode(led_list[3], OUTPUT);
    pinMode(led_list[4], OUTPUT);
    pinMode(led_list[5], OUTPUT);
    pinMode(led_list[6], OUTPUT);
    pinMode(led_list[7], OUTPUT);
    pinMode(led_list[8], OUTPUT);
    pinMode(led_list[9], OUTPUT);
    Serial.begin(9600); // start serial communication
    Serial.println("Enter an integer:");
   int j=0;
  for(j=0;j<10;j++){
     digitalWrite(led_list[j],HIGH);
     delay(1000);
     digitalWrite(led_list[j],LOW);
  }
}

void loop()
{


    if (Serial.available() > 0) {    // check if user typed something
    number = Serial.parseInt();     // read integer from serial
    Serial.print("You entered: ");
    Serial.println(number);
     if(number>0){
    
    int i=0;
     int x=9;   
      
       for(i=0;i<10;i++){
     binary[i] = number % 2; 
     Serial.println("High or Low:");
     Serial.print(number % 2);
 
     Serial.println("\nLed Number:");
     Serial.print(led_list[x]);
         if(number%2==1){
          
           digitalWrite(led_list[x],HIGH);
           
         }
     number = number / 2;
         
       
        x--;
   
 }
    }
  
 
    }
      }