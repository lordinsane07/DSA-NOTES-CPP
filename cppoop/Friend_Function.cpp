# include <bits/stdc++.h>
using namespace std;
class Complex
{
    int a,b;
    public:
    void setdata(int a,int b)
    {
        this->a = a;
        this->b = b;
    }

    void print()
    {
        cout<<a<<" + "<<b<<"i"<<endl;
    }

    friend Complex sum(Complex &a, Complex &b);
};

Complex sum(Complex &o1,Complex &o2)
{
    Complex o3;
    o3.setdata(o1.a + o2.a, o1.b + o2.b);
    return o3;
}

int main()
{
    Complex a,b,sum1;
    a.setdata(1,2);
    b.setdata(3,4);
    sum1 = sum(a,b);
    sum1.print();
}