#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main(){
vector <int> digits_o_num;
vector <int> repeated_digits;
int integer;    
int index=0;
cout<<"Enter a digit:";
cin>>integer;

cout<<endl<<" "<<integer;
while(integer>0){
digits_o_num.push_back(integer%10);
integer=integer/10;

index++;
}
cout<<endl;
cout<<endl<<"No of digits:"<<digits_o_num.size()<<endl;


 for(int i=0;i<digits_o_num.size();i++){
       if ((count(digits_o_num.begin(), digits_o_num.end(), digits_o_num[i]) > 1) &&
           (count(repeated_digits.begin(), repeated_digits.end(), digits_o_num[i]) == 0)){
           
           cout<<digits_o_num[i]<<" is repeated: "
               <<count(digits_o_num.begin(),digits_o_num.end(),digits_o_num[i])
               <<" times"<<endl;

           repeated_digits.push_back(digits_o_num[i]);
       }
    }



}

