1class Solution {
2public:
3    void func(int sum,int last,vector<int>& nums,int k, vector<vector<int>>& ans){
4        if(sum==0 && nums.size()==k){
5            ans.push_back(nums);
6            return;
7        }
8        if(sum<=0 || nums.size()>k) return;
9        for(int i=last;i<=9;i++){
10            if(i<=sum){
11            nums.push_back(i);
12            func(sum-i,i+1,nums,k,ans);
13            nums.pop_back();
14            }
15            else break;
16        }
17    }
18    vector<vector<int>> combinationSum3(int k, int n) {
19        vector<vector<int>> ans;
20        vector<int> nums;
21        func(n,1,nums,k,ans);
22        return ans;
23    }
24};