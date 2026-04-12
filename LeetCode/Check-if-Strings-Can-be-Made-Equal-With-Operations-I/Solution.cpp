1class Solution {
2public:
3    bool canBeEqual(string s1, string s2) {
4        vector<char> b1={s1[0],s1[2]};
5        vector<char> b2={s2[0],s2[2]};
6        vector<char> c1={s1[1],s1[3]};
7        vector<char> c2={s2[1],s2[3]};
8        sort(b1.begin(),b1.end());
9        sort(b2.begin(),b2.end());
10       // if(b1==b2) return true;
11          sort(c1.begin(),c1.end());
12        sort(c2.begin(),c2.end());
13        if(b1==b2 && c1==c2) return true;
14        return false;
15    }
16};