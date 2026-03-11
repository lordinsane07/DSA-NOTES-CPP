1class Solution {
2public:
3    int bitwiseComplement(int n) {
4        if(n==0) return 1;
5       int m=n;
6       int count=0;
7       while(m!=0){
8        m=m>>1;
9        count++;
10       }
11       int x=(1<<count)-1;
12       return n ^ x;
13    }
14};