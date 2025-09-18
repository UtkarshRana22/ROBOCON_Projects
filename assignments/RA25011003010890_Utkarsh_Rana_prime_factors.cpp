#include<iostream>
using namespace std;

int check_prime(int x){
    for(int i=2;i<x/2;i++){
        if(x%i==0){
            return 1;
            break;

        }
    }
    return 0;

}

int main(){
    int integer;
    cout<<"Enter a number:";
    cin>>integer;
    for(int i=1;i<integer/2;i++){
        if(i!=1 and integer%i==0)
        if(!(check_prime(i))){
            cout<<"Prime factor of "<<integer<<" is:"<<i<<endl;
        }
    }



}