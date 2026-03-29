class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        vector<char> b1={s1[0],s1[2]};
        vector<char> b2={s2[0],s2[2]};
        vector<char> c1={s1[1],s1[3]};
        vector<char> c2={s2[1],s2[3]};
        sort(b1.begin(),b1.end());
        sort(b2.begin(),b2.end());
       // if(b1==b2) return true;
          sort(c1.begin(),c1.end());
        sort(c2.begin(),c2.end());
        if(b1==b2 && c1==c2) return true;
        return false;
    }
};