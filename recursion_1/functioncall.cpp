#include<iostream>
using namespace std;
void call(int n){
    if(n==0) return;
       cout<<"Good Morning"<<endl;
       call(n-1);
}
int main(){
int n;
cin>>n;
call(n);
}
