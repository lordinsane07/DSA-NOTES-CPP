1class Solution {
2public:
3    void moveZeroes(vector<int>& nums) {
4        int n=nums.size();
5        int l=0;
6        for(int r=0;r<n;r++){
7            if(nums[r]!=0) {
8                swap(nums[l],nums[r]);
9                l++;
10            }
11         }
12    }
13};