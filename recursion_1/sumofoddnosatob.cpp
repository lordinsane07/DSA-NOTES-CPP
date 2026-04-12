#include<iostream>
using namespace std;
int fun(int a,int b){
    if(a>b) return 0;
    if(a%2==0) return fun(a+1,b);
    return a+fun(a+2,b);
}
int main(){
int a,b;
cin>>a>>b;
cout<<fun(a,b);
}