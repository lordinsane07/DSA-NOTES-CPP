# include <iostream>
using namespace std;

class LPU
{
    int a,b;
    public: 
    LPU();
    void print()
    {
        cout<<"Complex number is : "<<a <<" + "<<b <<" i"<<endl;
    }
};

LPU :: LPU(void)
{
    a = 10;
    b = 0;
}

int main()
{
    LPU l;
    l.print();
}