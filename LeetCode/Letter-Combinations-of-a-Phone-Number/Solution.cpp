1class Solution {
2public:
3void func(int ind,string digits,string s,vector<string> &ans,string combos[]){
4        if(ind==digits.size()){
5            ans.push_back(s);
6            return;
7        }
8        int digit=digits[ind]-'0';
9        for(int i=0;i<combos[digit].size();i++){
10                func(ind+1,digits,s+combos[digit][i],ans,combos);
11        }
12    }
13    vector<string> letterCombinations(string digits) {
14        string combos[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
15        string s="";
16        vector<string> ans;
17        func(0,digits,s,ans,combos);
18        return ans;
19    }
20    
21    
22};