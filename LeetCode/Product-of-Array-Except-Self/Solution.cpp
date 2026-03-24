1class Solution {
2public:
3    vector<int> productExceptSelf(vector<int>& nums) {
4        int n=nums.size();
5        vector<int> pre(n);
6        int p=nums[0];
7        pre[0]=1;
8        for(int i=1;i<n;i++){
9            pre[i]=p;
10            p*=nums[i];
11        }
12        p=nums[n-1];
13        for(int i=n-2;i>=0;i--){
14            pre[i]*=p;
15            p=p*nums[i];
16        }
17        return pre;
18    }
19};