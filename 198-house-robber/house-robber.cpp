class Solution {
public:
    // vector<int> dp;
    // int fbu(vector<int>& arr){
    //     int n=arr.size();
    //     if(n==1) return arr[0];
    //      dp.clear();
    //     dp.resize(n);
    //     dp[n-1]=arr[n-1];
    //     dp[n-2]=max(arr[n-1],arr[n-2]);
    //     for(int i=n-3;i>=0;i--){
    //         dp[i]=max(arr[i]+dp[i+2],0+dp[i+1]);
    //     }
    //     return dp[0];
    // }
    int solve(vector<int>& money,int ind,vector<int>& dp){
        if(ind<0) return 0;
        if(ind==0) return money[0];
        if(dp[ind]!=-1) return dp[ind];
        int first=money[ind]+solve(money,ind-2,dp);
        int second=0+solve(money,ind-1,dp);
        return dp[ind]=max(first,second); 
    }
    int rob(vector<int>& money) {
        int n=money.size();
        if(n==1) return money[0];
        //vector<int> arr1,arr2;
        // for(int i=0;i<n;i++){
        //     if(i!=0) arr1.push_back(money[i]);
        //     if(i!=n-1) arr2.push_back(money[i]);
        // }
         vector<int> dp1(n,-1);
        //  vector<int> dp2(n,-1);
        //return max(solve(arr1,n-2,dp1),solve(arr2,n-2,dp2));
    return solve(money,n-1,dp1);
    }
    
};