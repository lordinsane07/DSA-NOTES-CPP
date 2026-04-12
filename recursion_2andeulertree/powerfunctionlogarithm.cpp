//T.C=x=log(base=2)n
#include<iostream>
using namespace std;
int power(int m,int n){
    int ans;
    if(n==1) return m;
    else if(n%2==0) ans=power(m,n/2);
    else ans=m*power(m,n/2);
    return ans*ans;
}
int main(){
    int n,m;
    cin>>m>>n;
    cout<<power(m,n);
}