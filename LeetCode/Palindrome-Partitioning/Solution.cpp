1class Solution {
2public:
3bool isPalindrome(string s,int left,int right){
4       while(left<right) {
5       if(s[left]!=s[right]) return false;
6            left++;
7            right--;
8        }
9        return true;
10    }
11    void check(int ind,string s,vector<vector<string>>& res,
12    vector<string>& ans){
13        if(ind==s.size()){
14            res.push_back(ans);
15            return;
16        }
17        for(int i=ind;i<s.size();i++){
18            if(isPalindrome(s,ind,i)){
19                ans.push_back(s.substr(ind,i-ind+1));
20                check(i+1,s,res,ans);
21                ans.pop_back();
22            }
23        }
24    }
25    vector<vector<string>> partition(string s) {
26        vector<vector<string>> res;
27        vector<string> ans;
28        check(0,s,res,ans);
29        return res;
30    }
31  
32};