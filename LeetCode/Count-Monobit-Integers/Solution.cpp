1class Solution {
2public:
3    int countMonobit(int n) {
4            if(n==0) return 1;
5            if(n==1) return 2;
6           int count=2;
7        for(int i=2;i<=n;i++){
8            if(((i+1)&(i))==0) count++;
9            else continue;
10        }
11        return count;
12    }
13};