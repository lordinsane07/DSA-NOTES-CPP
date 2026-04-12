1class Solution {
2public:
3    bool hasAlternatingBits(int n) {
4       unsigned int x=n^(n>>1);
5        if((x & (x+1))==0) return true;
6        else return false;
7    }
8};