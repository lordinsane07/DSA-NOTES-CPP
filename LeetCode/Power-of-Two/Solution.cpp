1class Solution {
2public:
3    bool isPowerOfTwo(int n) {
4        return n>0 && (n & n-1)==0?true:false;
5    }
6};