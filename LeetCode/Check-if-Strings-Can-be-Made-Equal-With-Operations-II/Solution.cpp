1class Solution {
2public:
3    bool checkStrings(string s1, string s2) {
4        int n=s1.length();
5        vector<char> odd1;
6        vector<char> even1;
7        vector<char> odd2;
8        vector<char> even2;
9        for(int i=0;i<n;i+=2){
10            even1.push_back(s1[i]);
11             even2.push_back(s2[i]);
12             if(i+1<n) odd1.push_back(s1[i+1]);
13             if(i+1<n) odd2.push_back(s2[i+1]);
14        }
15        sort(odd1.begin(),odd1.end());
16         sort(odd2.begin(),odd2.end());
17          sort(even2.begin(),even2.end());
18           sort(even1.begin(),even1.end());
19        if(odd1==odd2 && even1==even2) return true;
20        return false;
21    }
22};