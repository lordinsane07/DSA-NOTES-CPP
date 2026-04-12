#include<iostream>
#include<string>
using namespace std;
class Vehicle{
    public:
    int tyresize;
    int enginesize;
    int lights;
    string companyName;
   virtual void show(){
    cout<<"Vehicle ka show"<<endl;
   }
};
class Bike : public Vehicle{
    public:
    int handlesize;
   void show(){
    cout<<"Bike ka show"<<endl;
   }
    };
    class C :public Bike{
        public:
        int handlesize;
        void show(){
            cout<<"C ka show"<<endl;
        }
    };
int main(){
     //compiler POV=>VEHICLE TYPE KA HAI
     //COMPILE TIME BINDING
     //RUNTIME BINDING//virtual is used to call derived class function
     ////RUNTIME POV->BIKE KA ADDRESS HAI
     Bike b;
     Vehicle *a;
    a=new Bike;
    a->show();
    a=new Vehicle;
    a->show();
    Bike *b;
    b=new C;

    b->show();
}//Parent pointers can store address of derived class 
//The size of a class changes when you use virtual functions because of the 
//additional space needed to store the vptr in each object of the class. 
//This is necessary to enable the runtime polymorphism that virtual functions provide.
//vptr table binds alll function and vptr points to the function to be called
//from the virtual table //formation of vptr table increases size of the object