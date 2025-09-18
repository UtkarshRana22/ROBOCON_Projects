#include<iostream>

using namespace std;

int main(){
    int integer,sum=0;

    cout<<"Enter a number:";
    cin>>integer;

    for(int i=1;i<=integer/2;i++){
        if(i!=integer and integer%i==0){
            cout<<i<<endl;
            sum+=i;


            }

          
}
  if(sum==integer){
                cout<<integer<<" is a perfect number";
            }else{
                 cout<<integer<<" not a perfect number";
            }
}