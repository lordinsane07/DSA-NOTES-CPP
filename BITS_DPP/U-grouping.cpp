#include<bits/stdc++.h>
#include<vector>
#include<climits>
#define ll long long int
using namespace std;
vector<ll> dp((1<<16), LLONG_MIN);

vector<ll> sums((1<<16),0);

ll calc(vector<vector<ll>>& compat,int mask,int n){
        ll ans=0;
        for (int i = 0; i < n; i++) {
        if (!(mask & (1 << i))) continue;
        for (int j = i + 1; j < n; j++) {
                    if(((mask & (1<<i))!=0) && ((mask & (1<<j))!=0)){
                        ans+=compat[i][j];
                    }
            }
        }
        return ans;
}



void precompute(vector<vector<ll>>& compat,int n){
    for (int mask = 1; mask <=((1<<n)-1); mask++)  {
        sums[mask]=calc(compat,mask,n);
    } 
}

ll f(vector<vector<ll>>& compat,int mask,int n){
    if(mask==0) return 0;
   if (dp[mask] != LLONG_MIN) return dp[mask];
    ll ans=INT_MIN;
    for(int g=mask;g!=0;g=((g-1)& mask)){
        ans=max(ans,sums[g]+f(compat,mask^g,n));
    }
    return dp[mask]=ans;
}

int main(){
        int n;
        cin>>n;
            vector<vector<ll>> compat(n,vector<ll> (n));
             for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>compat[i][j];
            }
        }
        precompute(compat,n);
        cout<<f(compat,((1<<n)-1),n);
}