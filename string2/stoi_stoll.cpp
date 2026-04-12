#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="123456";
    int x=stoi(str);
    cout<<x<<endl;
    int a=123456;
    string s=to_string(a);
    cout<<s<<endl;
    string  s1="12345676776777";
    long long  b=stoll(s1);
    cout<<b<<endl;

    return 0;
}