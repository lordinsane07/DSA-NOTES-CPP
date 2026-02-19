class Solution {
public:
    int countBinarySubstrings(string s) {
        int n=s.length();
        int prev=0,curr=1;
        int res=0;
       for(int i=1;i<n;i++){
        if(s[i]==s[i-1]) curr++;
        else{
            prev=curr;
            curr=1;
        }
        if(curr<=prev) res++;
       }
       return res;
    }
};