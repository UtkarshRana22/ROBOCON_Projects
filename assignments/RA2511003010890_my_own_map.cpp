#include<iostream>
using namespace std;




int my_own_map_(long value,long input_intial_range,long input_final_range,long output_intial_range,long output_final_range){

long in_range=input_final_range-input_intial_range;
long out_range=output_final_range-output_intial_range;
value=((value-input_intial_range)*(out_range)/in_range)+output_intial_range;
return value;
}

int main(){
long value,input_intial_range,input_final_range,output_intial_range,output,final_range;

cout<<"Mapped Value: "<<my_own_map_(124,0,1023,0,255);


}