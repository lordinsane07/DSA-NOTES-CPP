1class Solution {
2public:
3    int singleNumber(vector<int>& nums) {
4        int n=nums.size();
5       int ans=0;
6       for(int bitset=0;bitset<32;bitset++){
7        int count=0;
8        for(int i=0;i<n;i++){
9            if(nums[i] & (1<<bitset)) count++;
10        }
11        if(count%3!=0) ans |=(1<<bitset);
12
13       }
14       return ans;
15    }
16};