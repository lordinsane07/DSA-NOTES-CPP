#include<iostream>
#include<string>
using namespace std;
class Vehicle{//abstract class->contains pure virtual functon and no object
    public:
    int tyresize;
    int enginesize;
    int lights;
    string companyName;
   virtual void calculatemileage()=0;//pure virtual function
   virtual void refuel()=0;//pure virtual function  
};
class Bike : public Vehicle{
    public:
    int handlesize;
   void calculatemileage(){
    cout<<"Bike ka show"<<endl;
   }
   void refuel(){
    cout<<"Bike ko refuel karna hai"<<endl;
   }
    };

int main(){
     

}