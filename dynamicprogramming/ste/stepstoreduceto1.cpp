#include<iostream>
#include<vector>
#include <climits>

#define inf INT_MAX
using namespace std;
int f(int n){
    if(n==1) return 0;
    if(n==2 || n==3) return 1;
    return 1 + min(f(n-1), min((n%2==0) ? f(n/2) : INT_MAX, (n%3==0) ? f(n/3) : INT_MAX));
}
vector<int> dp;
int ftd(int n){
    if(n==1) return 0;
    if(n==2 || n==3) return 1;
    if(dp[n]!=-1) return dp[n];
    return dp[n]=1 + min(ftd(n-1), min((n%2==0) ? ftd(n/2) : INT_MAX, (n%3==0) ? ftd(n/3) : INT_MAX));
}
int fbu(int n){
    //tc=O(n)//sc=O(n)
    dp.clear();
    dp.resize(n+1,-1);
    dp[1]=0;
    dp[2]=dp[3]=1;
    for(int i=4;i<=n;i++){
     dp[i]=1 + min(dp[i-1], min((i%2==0) ? dp[i/2] : INT_MAX, (i%3==0) ? dp[i/3] : INT_MAX));
    }
    return dp[n];
}
int main(){
    int n;
    cin>>n;
    dp.clear();
    dp.resize(1005,-1);

    cout<<ftd(n)<<" "<<fbu(n);
}