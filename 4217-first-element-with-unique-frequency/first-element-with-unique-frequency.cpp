class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> mpp;
        map<int,int> s;
        for(int x:nums){
                mpp[x]++;
               
        }
        for(auto it:mpp){
             s[it.second]++;
        }
        for(int x:nums){
            int freq=mpp[x];
            if(s[freq]==1) return x;
        }
            return -1;
    }
};