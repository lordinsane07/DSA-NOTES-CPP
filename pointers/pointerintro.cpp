#include<iostream>
using namespace std;
int main(){
    int x=4;
    float y=4.9;
    int* p=&x;
    cout<<&x<<endl;
    cout<<p<<endl;
    float* q=&y;
    cout<<q<<endl;
    cout<<*q<<endl;
    *q=8.9;
    cout<<q<<endl;
    cout<<y<<endl;
}