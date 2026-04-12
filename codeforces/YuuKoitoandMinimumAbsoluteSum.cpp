#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        vector<long long> nums(n);
        long long sum = 0;

        for(int i=0;i<n;i++){
            cin >> nums[i];
            sum += nums[i];
        }

        vector<long long> c(n);

        // Step 1: lift negative numbers to 0
        for(int i=0;i<n;i++){
            c[i] = max(0LL, nums[i]);
        }

        long long need = -sum;  // amount to add to reach sum(c) = sum(a)

        // Step 2: add the required amount to LAST position for lexicographic minimal
        if(need > 0){
            c[n-1] += need;
        }

        // OUTPUT:
        cout << abs((long long)accumulate(c.begin(), c.end(), 0LL) - sum) << "\n";
        for(long long x : c) cout << x << " ";
        cout << "\n";
    }
}