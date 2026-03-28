class Solution {
public:
    int lengthOfLongestSubstring(string s) {
     int n=s.length();
     int l=0;
     int maxlen=0;
     unordered_set<char> st;
     for(int r=0;r<n;r++){
        while(st.count(s[r])==1){
            st.erase(s[l]);
            l++;
        }
        st.insert(s[r]);
        maxlen=max(maxlen,r-l+1);
     }
     return maxlen;
    }
};