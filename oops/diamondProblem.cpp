#include<iostream>
#include<string>
using namespace std;
class A{
    private:
    int a_ka_private;
    protected:
    int a_ka_protected;
    public:
    int a_ka_public;
    A(){
        cout<<"A ka constructor call hua\n";
    }
};
class B : virtual public A{
    public:
    int b_ka_public;
   void show(){
    a_ka_protected=10;
   }

   B(){
    cout<<"B ka constructor call hua\n";
   }
    };
    class C : virtual public A{
        public:
        int c_ka_public;
        C(){
    cout<<"C ka constructor call hua\n";
   }
};
class D : public B,public C{
    public:
    int d_ka_public;
    void show(){
        //cout<<C::a_ka_public<<endl;
        cout<<a_ka_public<<endl;
    }
};
int main(){
        C c;
       // c.b_ka_public;
        c.c_ka_public;
}//virtual makes only 1 instance of class