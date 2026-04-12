#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Bike{
    public:
    static int noofbikes;//this belongs to class
    int tyresize;
    int enginesize;
    //constructor overloading
   Bike (int ts,int es):tyresize(ts),enginesize(es){}     
    Bike (int ts,int es):tyresize(ts),enginesize(150){} 
    Bike ():tyresize(10),enginesize(200){} 
   };
   void add(int a,int b){
    cout<<a+b<<endl;
   }
   void add(int a,double b){
    cout<<a+b<<endl;
   }
int main(){//function overloading--> same function but differeent parameters for doing diff task
//it is part of compile time polymorphism
    add(10,2);
    add(5,2.2);
}
