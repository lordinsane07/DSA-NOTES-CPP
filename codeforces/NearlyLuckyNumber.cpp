#include<iostream>
using namespace std;
int main(){
     long long n;
    cin>>n;
    int count=0;
    int d;
    while (n>0)
    
    {
        d=n%10;
        if(d==4 || d==7) count++;
        n=n/10;
    }
    if(count==7 || count==4) cout<<"YES";
    else cout<<"NO";
    
}