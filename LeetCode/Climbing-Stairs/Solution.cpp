1class Solution {
2public:
3   int solve(int n,vector<int> & dp){
4        if(n<=1) return 1;
5        
6            if(dp[n]!=-1){
7                return dp[n];
8            }
9            return dp[n]=solve(n-1,dp)+solve(n-2,dp);
10    }
11    int climbStairs(int n) {
12              vector<int> dp(n+1,-1);
13              return solve(n,dp);
14    }
15};