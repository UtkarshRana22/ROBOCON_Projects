#include<iostream>
using namespace std;

class Robot{
    public:
    string RoboName;
    string robotype;
    string model;
    float battery_level;

    void performTask(){
        battery_level-=10;
    }
    void displayStatus() {
        cout<<endl<<"Robot's Name: "<<RoboName<<endl<<"Battery level: "<<battery_level;

    };

    ~Robot(){
        cout<<endl<<"########    "<<"Robot ShutDown!!!!"<<"    ########";
    }

};


int main(){
Robot r1;
r1.RoboName="Alpha";
r1.robotype="Humanoid";
r1.model="X";
r1.battery_level=100;
r1.performTask();
r1.displayStatus();
cout<<endl;
r1.performTask();
r1.displayStatus();
do
{
    /* code */
} while (condition);

}