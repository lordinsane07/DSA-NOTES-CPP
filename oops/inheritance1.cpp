#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Vehicle{
    public:
    int lights;
    int tyresize;
    int enginesize;
    string companyname;
    Vehicle(){
        cout<<"Vehicle construcotr is called\n";
    }
    void showcompany(){
        cout<<companyname;
    }
};
class Car: public Vehicle{//car inherits vehicle
    public:
    int steeringsize;
};
class Bike: public Vehicle{//Derived class,child class
    public:
    int handlesize;
    Bike(){
        cout<<"Bike constructor is called\n";
    }
};
int main(){
    Bike honda;
    honda.handlesize = 10;
    honda.enginesize=100;
    honda.tyresize=9;
    honda.companyname="HONDA";
    cout<<honda.tyresize<<endl;
    honda.showcompany();
}