1class Solution {
2public:
3    vector<int> nextGreaterElement(vector<int>& arr, vector<int>& nums2) {
4        int n=nums2.size();
5        unordered_map<int,int> mpp;
6        vector<int> ans;
7        stack<int> s;
8        for(int i=n-1;i>=0;i--){
9            int currele=nums2[i];
10            while(!s.empty() && s.top()<=currele) s.pop();
11            if(s.empty()) mpp[nums2[i]]=-1;
12            else {
13                mpp[nums2[i]]=s.top();
14            }
15            s.push(currele);
16        }
17        for(int i=0;i<arr.size();i++){
18            ans.push_back(mpp[arr[i]]);
19        }
20        return ans;
21    }
22};