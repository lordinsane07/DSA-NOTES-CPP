//hybrd constructor=>multiple types of inheritance
//hierarchial constructor=>single base class/multiple derived class
//multiple base class and singlechild =>multiple constructor
#include<iostream>
//b is derive class of a and c is derived class of b
#include<string>
using namespace std;
class A{
    private:
    int a_ka_private;//can not be accessed or inherited
    protected://can be inherited but not accesedd outside
    int a_ka_protected;
    public://can be accessed aswell as inherited
    int a_ka_public;
    A(){
        cout<<"A ka constructor call hua\n";
    }
};
class B : protected A{//a_ka_protected,a_ka_public as protected
    public:
    int b_ka_public;
   void show(){
    a_ka_protected=10;
   }
   B(){
    cout<<"B ka constructor call hua\n";
   }
    };
    class C : public B{//a_ka_protected,a_ka_public as protected,b_ka_public as public
        public:
        int c_ka_public;
        C(){
    cout<<"C ka constructor call hua\n";
   }
};
//security->   private>protected>public
//security can be chnged from low to high but high to ow
int main(){
       // B b;
        //b.a_ka_public=10;
        C c;//when c iis called b construcotr pirnts an before that a constructor called
        c.b_ka_public;
        c.c_ka_public;
}