# include <iostream>
using namespace std;

class Complex
{
    int a,b;
    public:
    Complex(int a,int b);
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

int main()
{
    int a,b;
    cin>>a>>b;
    Complex c(a,b);
    c.print();
}