1class Solution {
2public:
3    vector<int> twoSum(vector<int>& nums, int target) {
4        int n=nums.size();
5        int sum=0;
6        for(int i=0;i<n-1;i++){
7            for(int j=i+1;j<n;j++){
8                if(target==nums[i]+nums[j]) return {i,j};
9            }
10        }
11        return {-1,-1};
12    }
13};