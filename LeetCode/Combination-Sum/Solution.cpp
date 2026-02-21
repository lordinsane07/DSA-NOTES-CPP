1class Solution {
2public:
3 void func(int ind,vector<int>& ans,int target,vector<vector<int>>& res,vector<int>&candidates){
4        if(target==0){
5            res.push_back(ans);
6            return;
7        }
8        if(ind>=candidates.size() || target<0) return;
9        ans.push_back(candidates[ind]);
10        func(ind,ans,target-candidates[ind],res,candidates);
11         ans.pop_back();
12         func(ind+1,ans,target,res,candidates);
13    }
14    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
15        vector<int> ans;
16        vector<vector<int>> res;
17        func(0,ans,target,res,candidates);
18        return res;
19    }
20// vector<vector<int>> result;
21//     void f(vector<int>& cand, int t,int idx,vector<int>& subset){
22//         if(t==0){
23//             //we found  a subset which sums to target
24//             result.push_back(subset);
25//             return; 
26//         }
27//         if(idx==cand.size()) return;
28//         if(cand[idx]<=t) {
29//             subset.push_back(cand[idx]);
30//             f(cand,t-cand[idx],idx,subset);
31//             subset.pop_back();
32//         }
33//         //avoid
34//         int j=idx+1;
35//         f(cand,t,j,subset);
36// //     }
37//     vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
38               
39//                 // sort(candidates.begin(),candidates.end());
40//                 // vector<int> subset;
41//                 // result.clear();
42//                 // f(candidates,target,0,subset);
43//                 // return result;
44//     }
45  
46};