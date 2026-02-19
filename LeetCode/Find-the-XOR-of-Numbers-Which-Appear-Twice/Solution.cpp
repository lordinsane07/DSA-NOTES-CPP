1class Solution {
2public:
3    int duplicateNumbersXOR(vector<int>& nums) {
4       int n=nums.size();
5    unordered_map<int,int> mpp;
6    for(int x:nums){
7        mpp[x]++;
8    }
9    int x=0;
10    for(auto it:mpp){
11        if(it.second==2) x ^=it.first;
12    }
13    return x;
14    }
15};