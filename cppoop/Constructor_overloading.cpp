# include <iostream>
using namespace std;

class Complex
{
    int a,b;
    public:
    Complex(int a,int b);
    Complex(int a);
    void print()
    {
        cout<<a + b<<endl;
    }
};

Complex :: Complex(int a,int b)
{
    this->a = a;
    this->b = b;
}

Complex :: Complex(int a)
{
    this->a = a;
    this->b = 0;
}

int main()
{
    int a,b;
    cin>>a>>b;
    Complex c(a,b);
    c.print();

    Complex c1(10);
    c1.print();
}