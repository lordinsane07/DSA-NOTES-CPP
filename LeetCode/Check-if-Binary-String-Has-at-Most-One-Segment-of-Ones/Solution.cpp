1class Solution {
2public:
3    bool checkOnesSegment(string s) {
4       int n=s.length();
5    bool check=false;
6      int j=-1;
7      for(int i=0;i<n;i++){
8        if(s[i]=='1') {
9            check=true;
10            j=i;
11            break;
12        } 
13        else continue;
14      }
15      while(j<n && s[j]!='0') j++;
16      for(int m=j;m<n;m++){
17        if(s[m]=='1') return false;
18        else continue;
19      }
20      return true;
21    }
22};