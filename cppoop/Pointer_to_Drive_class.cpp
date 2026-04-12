
// Only base class is derived and we have no access to derived the derived class -------------------------------------------------------------------
// # include <iostream>
// using namespace std;
// class Base
// {
//     public:
//     int var_base;
//     void  display()
//     {
//         cout<<"Display Base class var1: "<<var_base<<endl;
//     }
// };
// class Derived : public Base
// {
//     public:
//     int var_derived;
//     void  display()
//     {
//         cout<<"Display Derived class var1: "<<var_base<<endl;
//         cout<<"Display Derived class var1: "<<var_derived<<endl;
//     }
// };
// int main()
// {
//     Base *base_class_pointer;
//     Base objbase;
//     Derived objderived;


//     base_class_pointer = &objderived; 
//     base_class_pointer->var_base = 34;
//     base_class_pointer->display();   

    
//     Derived *base_derived;
//     base_derived = &objderived;


//     base_derived->var_base = 889;
//     base_derived->var_base = 900;
//     base_derived->display();
// }



// # include <bits/stdc++.h>
// using namespace std;
// class Base 
// {
//     public:
//     int a;
//     void print()
//     {
//         cout<<a<<endl;
//     }
// };
// int main()
// {
//     Base* basepointer = new Base;
//     basepointer->a = 88;
//     basepointer->print();
// }