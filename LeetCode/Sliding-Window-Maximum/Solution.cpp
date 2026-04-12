1class Solution {
2public:
3    vector<int> maxSlidingWindow(vector<int>& arr, int k) {
4     vector<int> ans;
5        deque<int> dq;
6        for(int i=0;i<arr.size();i++){
7            if(!dq.empty() && dq.front()<=i-k) dq.pop_front();
8            while(!dq.empty() && arr[dq.back()]<=arr[i]) dq.pop_back();
9            dq.push_back(i);
10            if(i>=k-1) ans.push_back(arr[dq.front()]);
11        }
12        return ans;   
13    }
14};