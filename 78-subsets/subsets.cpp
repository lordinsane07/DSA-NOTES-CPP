class Solution {
public:
 void addsubset(vector<vector<int>>& sub,vector<int>& nums,int ind,int n,vector<int>& arr){
        if(ind==n) {
            sub.push_back(arr);
            return;
        }
            addsubset(sub,nums,ind+1,n,arr);
            arr.push_back(nums[ind]);
            addsubset(sub,nums,ind+1,n,arr);
            arr.pop_back();
    }
    vector<vector<int> >  subsets(vector<int>& nums) {
      vector<vector<int>> sub;
      vector<int> arr;
      addsubset(sub,nums,0,nums.size(),arr);
      return sub;
    }
  
};