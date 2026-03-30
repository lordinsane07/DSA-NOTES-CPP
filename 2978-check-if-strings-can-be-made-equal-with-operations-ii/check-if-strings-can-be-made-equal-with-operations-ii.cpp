class Solution {
public:
    bool checkStrings(string s1, string s2) {
        int n=s1.length();
        vector<char> odd1;
        vector<char> even1;
        vector<char> odd2;
        vector<char> even2;
        for(int i=0;i<n;i+=2){
            even1.push_back(s1[i]);
             even2.push_back(s2[i]);
             if(i+1<n) odd1.push_back(s1[i+1]);
             if(i+1<n) odd2.push_back(s2[i+1]);
        }
        sort(odd1.begin(),odd1.end());
         sort(odd2.begin(),odd2.end());
          sort(even2.begin(),even2.end());
           sort(even1.begin(),even1.end());
        if(odd1==odd2 && even1==even2) return true;
        return false;
    }
};