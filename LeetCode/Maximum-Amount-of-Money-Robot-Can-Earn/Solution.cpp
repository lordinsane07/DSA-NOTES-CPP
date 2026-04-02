1class Solution {
2public:
3int n,m;
4    long long solve(int i,int j,int k,  vector<vector<vector<long long>>>& dp,vector<vector<int>>& coins){
5            if(i>=n || j>=m)  return LLONG_MIN;
6            if(i==n-1 && j==m-1) {
7                if(coins[i][j]<0 && k<2) return max(0LL,(long long)coins[i][j]);
8                return coins[i][j];
9            } 
10            if(dp[i][j][k]!=LLONG_MIN) return dp[i][j][k];
11            long long val=coins[i][j];
12            long long normal=val+max(solve(i+1,j,k,dp,coins),solve(i,j+1,k,dp,coins));
13            long long usepower=LLONG_MIN;
14            if(val<0 && k<2){
15                usepower=max(solve(i+1,j,k+1,dp,coins),solve(i,j+1,k+1,dp,coins));
16            }
17            return dp[i][j][k]=max(normal,usepower);
18    }
19    int maximumAmount(vector<vector<int>>& coins) {
20         n=coins.size();
21        m=coins[0].size();
22        vector<vector<vector<long long>>> dp(n,vector<vector<long long>>(m,vector<long long>(3,LLONG_MIN)));
23        return solve(0,0,0,dp,coins);
24    }
25};