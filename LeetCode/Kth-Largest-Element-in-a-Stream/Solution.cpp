1class KthLargest {
2public:
3      int K;
4    priority_queue<int,vector<int>,greater<int>> pq;
5  KthLargest(int k, vector<int>& nums) {
6        K=k;
7        for(int i=0;i<nums.size();i++){
8            if(pq.size()<K) pq.push(nums[i]);
9            else{
10                if(nums[i]>pq.top()){
11                    pq.pop();
12                    pq.push(nums[i]);
13                }
14            }
15        }
16  }
17
18  int add(int val) {
19        if(pq.size()<K){
20            pq.push(val);
21            return pq.top();
22        }
23        if(val>pq.top()){
24            pq.pop();
25            pq.push(val);
26        }
27        return pq.top();
28  }
29};
30
31/**
32 * Your KthLargest object will be instantiated and called as such:
33 * KthLargest* obj = new KthLargest(k, nums);
34 * int param_1 = obj->add(val);
35 */