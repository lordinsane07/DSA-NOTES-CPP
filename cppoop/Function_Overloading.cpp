# include <bits/stdc++.h>
using namespace std;

int sum(int a,int b)
{
    return a + b;
}

float sum(float a,float b,float c)
{
    return a + b + c;
}

string sum(string a,string b)
{
    return a + b;
}

int main()
{
    cout<<sum(1,2)<<endl;
    cout<<fixed<<setprecision(2)<<(3.2,9.3)<<endl;
    cout<<sum("Aditya","Kumar");
}