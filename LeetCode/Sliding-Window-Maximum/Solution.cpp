1class Solution {
2public:
3    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
4        if(k==1) return nums;
5        int n=nums.size();
6        deque<int> dq;//decreasing order
7        vector<int> ans;//i should be minimun k-1
8        for(int i=0;i<n;i++){
9            while(dq.size()>0 && nums[i]>nums[dq.back()]) 
10            dq.pop_back();
11            dq.push_back(i);
12            int j=i-k+1;//start  of the window
13            while(dq.front()<j) dq.pop_front();
14            if(i>=k-1) ans.push_back(nums[dq.front()]);
15        }
16        return ans;
17    }
18    /*   //O(n) 
19    vector<int> ans;
20    if(k==1) return arr;
21    int n=arr.size();
22    stack<int> st;
23    int ngi[n];
24    ngi[n-1]=n;
25    st.push(n-1);
26    for(int i=n-2;i>=0;i--){
27    //pop all the elements smaller than arr[i]
28        while(st.size()>0 && arr[st.top()]<=arr[i]){
29            st.pop();
30        }
31        if(st.size()==0) ngi[i]=n;
32        else ngi[i]=st.top();
33        //push the arr[i]
34        st.push(i);
35    }
36    int j=0;
37    for(int i=0;i<n-k+1;i++){
38        if(j<i) j=i;
39        int mx=arr[j];
40        while(j<i+k){
41            mx=arr[j];
42            if(ngi[j]>=i+k) break;
43            j=ngi[j];
44        }
45        ans.push_back(mx);
46    }
47    return ans;
48    }
49    */
50};