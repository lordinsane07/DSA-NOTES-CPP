class Solution {
public:
    void addparen(int open,int close,int n,string str, vector<string>& ans){
        if(open==close && (open+close)==2*n) {
            ans.push_back(str);
            return;
        }
        if(open<n) addparen(open+1,close,n,str+"(",ans);
        if(close<open) addparen(open,close+1,n,str+")",ans);
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        addparen(0,0,n,"",ans);
        return ans;
    }
};