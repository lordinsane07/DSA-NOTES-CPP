#include<iostream>
#include<vector>
#include<climits>
using namespace std;
vector<int> coins;
vector<int> dp(1000006,-2);
int f(int n){
    if(n==0) return 0;
    if(dp[n]!=-2) return dp[n];
    int result=INT_MAX;
    for(int i=0;i<coins.size();i++){
        if(n-coins[i]<0) continue;
        result=min(result,f(n-coins[i]));
    }
    if(result==INT_MAX) return dp[n]=INT_MAX;
    return dp[n]=1+result;
}
int main(){
    int m,x;
    cin>>m>>x;
    for(int i=0;i<m;i++){
        int num;
        cin>>num;
        coins.push_back(num);
    }
    int ans=f(x);
    if(ans==INT_MAX) cout<<"-1\n";
    else cout<<ans<<"\n";
}