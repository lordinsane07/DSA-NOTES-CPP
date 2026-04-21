class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int l=0;
       unordered_map<long,long> mpp;
       long long maxsum=0,sum=0;
       for(int r=0;r<n;r++){
        mpp[nums[r]]++;
        sum+=nums[r];
        if(r-l+1>k){
            mpp[nums[l]]--;
            if(mpp[nums[l]]==0) mpp.erase(nums[l]);
            sum-=nums[l];
            l++;
        }
        if(r-l+1==k && mpp.size()==k)
        {
            maxsum=max(maxsum,sum);
        }
       }
       return maxsum;
    }
};