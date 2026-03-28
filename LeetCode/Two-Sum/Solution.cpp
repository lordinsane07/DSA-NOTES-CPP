1class Solution {
2public:
3    vector<int> twoSum(vector<int>& nums, int target) {
4        int n=nums.size();
5        int sum=0;
6        unordered_map<int,int> mpp;
7        for(int i=0;i<n;i++){
8            int need=target-nums[i];
9            if(mpp.find(need)!=mpp.end()) return {i,mpp[need]};
10            mpp[nums[i]]=i;
11        }
12        return {-1,-1};
13    }
14};