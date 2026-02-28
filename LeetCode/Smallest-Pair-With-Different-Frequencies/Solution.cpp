1class Solution {
2public:
3    vector<int> minDistinctFreqPair(vector<int>& nums) {
4        sort(nums.begin(),nums.end());
5        int n=nums.size();
6        if(n==1) return {-1,-1};
7        unordered_map<int,int> mpp;
8        for(int i=0;i<n;i++){
9            mpp[nums[i]]++;
10        }
11            int x=nums[0],y=-1;
12            
13        for(int i=1;i<nums.size();i++){
14            if(mpp[nums[i]]!=mpp[x]) {y=nums[i]; break;}
15            else continue;
16        }
17        if(y==-1) return {-1,-1};
18      return (x > y) ? vector<int>{y, x} : vector<int>{x, y};
19    }
20};