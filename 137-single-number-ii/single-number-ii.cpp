class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
       int ans=0;
       for(int bitset=0;bitset<32;bitset++){
        int count=0;
        for(int i=0;i<n;i++){
            if(nums[i] & (1<<bitset)) count++;
        }
        if(count%3!=0) ans |=(1<<bitset);

       }
       return ans;
    }
};