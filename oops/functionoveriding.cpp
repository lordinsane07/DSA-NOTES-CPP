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
    void show(){
    cout<<"a call hua"<<endl;
   }
};
class B : public A{
    public:
    int b_ka_public;
   void show(){
    cout<<"B KA OVERIDING FUNCTION"<<endl;
   }
    };
int main(){
      A a;
      a.show();
      B b;
      b.show();
         b.A::show();
}