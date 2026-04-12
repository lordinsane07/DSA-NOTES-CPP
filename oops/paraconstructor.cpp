#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Bike{
    public:
    int tyresize;
    int enginesize;
    Bike (int tyresize,int enginesize){//parameterized constructor
        this->tyresize=tyresize;
        this->enginesize=enginesize;
        //cout<<"constructor call size!\n";
    }
    ~Bike(){//DESCTRUCTOR
        cout<<"destructor call size!\n";
    }
};
int main(){
    Bike tvs(12,100);//object created costructor gets call
    Bike honda(10,150);
    Bike bmw(11,350);
    bool flag=true;
    if(flag==true){
        Bike bajaj(17,55);
        cout<<bajaj.tyresize<<" "<<bajaj.enginesize<<endl;
    }
    cout<<tvs.tyresize<<" "<<tvs.enginesize<<endl;
    cout<<honda.tyresize<<" "<<honda.enginesize<<endl;
    cout<<bmw.tyresize<<" "<<bmw.enginesize<<endl;
}
//never use call by value in copy constructor
//use always call by reference