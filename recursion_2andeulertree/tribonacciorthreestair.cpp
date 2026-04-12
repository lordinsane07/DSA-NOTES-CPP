#include<iostream>
using namespace std;
int tri(int n){
    if(n==1) return 1;
    if(n==2) return 2;
    if(n==3) return 4;
    return tri(n-1)+tri(n-2)+tri(n-3);
}
int main(){
int n;
cin>>n;
cout<<tri(n);
}