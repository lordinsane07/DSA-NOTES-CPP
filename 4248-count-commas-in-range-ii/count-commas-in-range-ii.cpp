class Solution {
public:
    long long countCommas(long long n) {
    long long count=0;
    if(n>=1000L)  count+=n-999L;
    if(n>=1000000L) count+=n-999999L;
    if(n>=1000000000) count+=n-999999999L;
    if(n>=1000000000000) count+=n-999999999999L;
    if(n>=1000000000000000) count+=n-999999999999999L;
    return count;
    }
};