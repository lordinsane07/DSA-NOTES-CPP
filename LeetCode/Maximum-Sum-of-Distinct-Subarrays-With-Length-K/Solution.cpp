1class Solution {
2public:
3    long long maximumSubarraySum(vector<int>& nums, int k) {
4        int n=nums.size();
5        int l=0;
6       unordered_map<long,long> mpp;
7       long long maxsum=0,sum=0;
8       for(int r=0;r<n;r++){
9        mpp[nums[r]]++;
10        sum+=nums[r];
11        if(r-l+1>k){
12            mpp[nums[l]]--;
13            if(mpp[nums[l]]==0) mpp.erase(nums[l]);
14            sum-=nums[l];
15            l++;
16        }
17        if(r-l+1==k && mpp.size()==k)
18        {
19            maxsum=max(maxsum,sum);
20        }
21       }
22       return maxsum;
23    }
24};