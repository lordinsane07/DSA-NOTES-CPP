class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0) return 1;
       int m=n;
       int count=0;
       while(m!=0){
        m=m>>1;
        count++;
       }
       int x=(1<<count)-1;
       return n ^ x;
    }
};