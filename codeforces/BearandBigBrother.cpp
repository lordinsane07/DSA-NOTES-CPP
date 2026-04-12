#include<iostream>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    if(m==n){
 cout<<1;
  return 0;
    }
    int count=0;
    while(m<=n){
            m=m*3;
            n=n*2;
            count++;
    }
    cout<<count;
} 