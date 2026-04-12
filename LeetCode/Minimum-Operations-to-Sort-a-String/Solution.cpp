1class Solution {
2public:
3    int minOperations(string s) {
4        int n=s.length();
5      string rev=s;
6        sort(rev.begin(),rev.end());
7        if(s==rev) return 0;
8        if(n==2) return -1;
9        if(s[0]==rev[0] || s[n-1]==rev[n-1]) return 1;
10        string s1=s;
11        sort(s1.begin(),s1.begin()+n-1);
12        sort(s1.begin()+1,s1.end());
13        string s2=s;
14        sort(s2.begin()+1,s2.end());
15        sort(s2.begin(),s2.begin()+n-1);
16        if(s1==rev || s2==rev) return 2;
17        return 3;
18    }
19};