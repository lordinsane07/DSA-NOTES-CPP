1class Solution {
2public:
3    vector<int> productExceptSelf(vector<int>& nums) {//FOR EVERY ELEMENT=>(PRODUCT OF ALL OTHER ELEMENT EXCEPT ITSELF)=>product of all other in left part * product of all other in right part 
4        int n=nums.size();
5        vector<int> pre(n);
6        //prefix product array
7        int p=nums[0];
8        pre[0]=1;
9        for(int i=1;i<n;i++){
10            pre[i]=p;
11            p *=nums[i];
12        }
13        //suffix product array(in prefix only)
14        p=nums[n-1];
15        for(int i=n-2;i>=0;i--){
16            pre[i] *=p;
17            p  *=nums[i];
18        }
19        return pre;
20    }
21};