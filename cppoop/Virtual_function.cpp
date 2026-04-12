# include <iostream>
using namespace std;
class Base
{
    public:
    int var_base;
    virtual void  display()
    {
        cout<<"Display Base class var_base: "<<var_base<<endl;
    }
};
class Derived : public Base
{
    public:
    int var_derived;
    void display()
    {
        cout<<"Display Derived class var_base: "<<var_base<<endl;
        cout<<"Display Derived class var_derived: "<<var_derived<<endl;
    }
};
int main()
{
    Base *base_pointer;
    Base base;
    Derived derived;

    base_pointer = &derived;
    base_pointer->var_base = 900;
    derived.var_derived = 800;
    base_pointer->display();
}