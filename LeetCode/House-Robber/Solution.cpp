1class Solution {
2public:
3    // vector<int> dp;
4    // int fbu(vector<int>& arr){
5    //     int n=arr.size();
6    //     if(n==1) return arr[0];
7    //      dp.clear();
8    //     dp.resize(n);
9    //     dp[n-1]=arr[n-1];
10    //     dp[n-2]=max(arr[n-1],arr[n-2]);
11    //     for(int i=n-3;i>=0;i--){
12    //         dp[i]=max(arr[i]+dp[i+2],0+dp[i+1]);
13    //     }
14    //     return dp[0];
15    // }
16    int solve(vector<int>& money,int ind,vector<int>& dp){
17        if(ind<0) return 0;
18        if(ind==0) return money[0];
19        if(dp[ind]!=-1) return dp[ind];
20        int first=money[ind]+solve(money,ind-2,dp);
21        int second=0+solve(money,ind-1,dp);
22        return dp[ind]=max(first,second); 
23    }
24    int rob(vector<int>& money) {
25        int n=money.size();
26        if(n==1) return money[0];
27        //vector<int> arr1,arr2;
28        // for(int i=0;i<n;i++){
29        //     if(i!=0) arr1.push_back(money[i]);
30        //     if(i!=n-1) arr2.push_back(money[i]);
31        // }
32         vector<int> dp1(n,-1);
33        //  vector<int> dp2(n,-1);
34        //return max(solve(arr1,n-2,dp1),solve(arr2,n-2,dp2));
35    return solve(money,n-1,dp1);
36    }
37    
38};