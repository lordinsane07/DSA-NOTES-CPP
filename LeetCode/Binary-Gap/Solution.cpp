1class Solution {
2public:
3    int binaryGap(int n) {
4      int last=-1;
5        int pos=0;
6        int ans=0;
7        while(n!=0){
8            if(n & 1){
9                if(last!=-1) ans=max(ans,pos-last);
10                last=pos;
11            }
12            n>>=1;
13            pos++;
14        }
15        return ans;
16    }
17};