#include<iostream>
using namespace std;
int main(){
    bool flag=true;
    bool* ptr=&flag;
    cout<<ptr<<endl;
    ptr=ptr+1;
    cout<<ptr<<endl;
    int x=7;
    int* p=&x;
    cout<<p<<endl;
    p=p+1;
    cout<<p<<endl;

}