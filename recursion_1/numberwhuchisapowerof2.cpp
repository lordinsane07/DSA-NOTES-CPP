#include<iostream>
using namespace std;
bool power(int a)
{
if(a==1) {return true;}
if(a%2==0){
    return power(a/2);
}
return false;
}
int main(){
int a;
cin>>a;
if(power(a)) cout<<"yes";
else cout<<"no";
}