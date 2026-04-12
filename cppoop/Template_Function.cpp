// # include <iostream>
// using namespace std;
// template <typename T1,typename T2>
// void print(T1 a,T2 b)
// {
//     cout<<a<<" * "<<b<<" = " << a * b<<endl;
// }
// int main()
// {
//     print<int,int>(5,4);
//     print<float,float>(4.0,3.2);
// }



# include <bits/stdc++.h>
using namespace std;
template<typename T1>
class Base
{
    public:
    T1 data;
    virtual void print() {};
};

class Derived : public Base<int>
{
    public:
    void print()
    {
        cout<<"My name is Aditya Kumar"<<endl;
    }
};
int main()
{
    Derived d;
    d.print();
}