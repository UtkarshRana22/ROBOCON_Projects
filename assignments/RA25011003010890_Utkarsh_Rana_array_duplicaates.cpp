#include<iostream>
using namespace std;

int check__(int arr[],int size,int x){
for(int i=0;i<size;i++){
    if(arr[i]==x){
        return 1;
        break;
    }
}
return 0;
}
int main(){
    int array_of_nums[5]={};
    int repeated_nums[5]={};
    int index=0;

    for(int i=0;i<5;i++){
        cout<<"Enter a number for index "<<i<<" ";
        cin>>array_of_nums[i];
    }

    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            // cout<<check__(repeated_nums,index,array_of_nums[i]);
            if(array_of_nums[i]==array_of_nums[j] && !(check__(repeated_nums,index,array_of_nums[i]))){
                cout<<array_of_nums[i]<<" is repeated"<<endl;
                repeated_nums[index]=array_of_nums[i];
                index++;
            }
        }

    }


}


