#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Bike{
    public:
    static int noofbikes;//this belongs to class
    int tyresize;
    int enginesize;
    Bike (int tyresize,int enginesize){//parameterized constructor
        this->tyresize=tyresize;
        this->enginesize=enginesize;
        //cout<<"constructor call size!\n";
    }
    static void increasenoofbikes( ){
        noofbikes++;//static variable can be accessed using class name  
        //static function can only use static datatypes
    }
};
int Bike::noofbikes=10;
int main(){
    Bike tvs(12,100);//object created costructor gets call
    Bike honda(10,150);
    honda.increasenoofbikes();
    cout<<tvs.noofbikes<<" "<<honda.noofbikes<<endl;
    tvs.increasenoofbikes();
    cout<<tvs.noofbikes<<" "<<honda.noofbikes<<endl;
    Bike::increasenoofbikes();
     cout<<tvs.noofbikes<<" "<<honda.noofbikes<<endl;
   // cout<<tvs.tyresize<<" "<<tvs.enginesize<<endl;
   // cout<<honda.tyresize<<" "<<honda.enginesize<<endl;
}
//static
//same for all objects
//it belongs to the class
//:: -> scope resoultuion tells abut the which vairiable it is talking about