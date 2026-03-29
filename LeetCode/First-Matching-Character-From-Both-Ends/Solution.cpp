1class Solution {
2public:
3    int firstMatchingIndex(string s) {
4        int n=s.length();
5        for(int i=0;i<n;i++){
6            if(s[i]==s[n-i-1]) return i;
7        }
8        return -1;
9    }
10};