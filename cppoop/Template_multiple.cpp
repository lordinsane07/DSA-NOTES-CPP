# include <bits/stdc++.h>
using namespace std;
template <typename T1,typename T2>
class Class
{
    public:
    T1 a;
    T2 b;
    Class (T1 a,T2 b)
    {
        this->a = a;
        this->b = b;
    }

    void display()
    {
        cout<<a<<"   ,    "<<b<<endl;
    }
};
int main()
{
    Class<int,char> my(1,'a');
    my.display();
}