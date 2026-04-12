#include<iostream>
using namespace std;
int main()
{
 int x=6;
 int y=9;
 int* p=&x;
 int* q=&y;
 cout<<*p+*q;   
}
