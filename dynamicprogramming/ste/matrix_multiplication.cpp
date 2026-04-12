#include<iostream>
#include<vector>
#include<climits>
using namespace std;
vector<vector<int>> dp;
int f(int i,int j,vector<int>& arr){
    if(i==j || i+1==j) return 0;
    int ans=INT_MAX;
    if(dp[i][j]!=-1) return dp[i][j];
    for(int k=i+1;k<j;k++){
        ans=min(ans,f(i,k,arr)+f(k,j,arr)+arr[i]*arr[j]*arr[k]);
    }
    return dp[i][j]=ans;
}
int main(){
        int n;
        cin>>n;
        vector<int> arr(n);
        dp.clear();
        dp.resize(1005,vector<int> (1000,-1));
        for(int i=0;i<n;i++) cin>>arr[i];
        cout<<f(0,n-1,arr)<<"\n";
}