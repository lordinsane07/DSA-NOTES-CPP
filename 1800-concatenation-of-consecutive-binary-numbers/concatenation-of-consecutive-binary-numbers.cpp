class Solution {
public:
    int concatenatedBinary(int n) {
        const int mod=1e9+7;
        long long result=0;
        int bitlength=0;
        for(int i=1;i<=n;i++){
            if((i & i-1)==0) bitlength++;
            result=((result << bitlength) | i)%mod;
        }
        return result%mod;
    }
};