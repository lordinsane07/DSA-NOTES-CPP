class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& arr, vector<int>& nums2) {
        int n=nums2.size();
        unordered_map<int,int> mpp;
        vector<int> ans;
        stack<int> s;
        for(int i=n-1;i>=0;i--){
            int currele=nums2[i];
            while(!s.empty() && s.top()<=currele) s.pop();
            if(s.empty()) mpp[nums2[i]]=-1;
            else {
                mpp[nums2[i]]=s.top();
            }
            s.push(currele);
        }
        for(int i=0;i<arr.size();i++){
            ans.push_back(mpp[arr[i]]);
        }
        return ans;
    }
};