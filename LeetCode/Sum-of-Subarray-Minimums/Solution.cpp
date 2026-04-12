1class Solution {
2public:
3vector<int> findpse(vector<int>& arr){
4        stack<int> st;
5        int n=arr.size();
6        vector<int> ans(n);
7        for(int i=0;i<n;i++){
8            int currele=arr[i];
9            while(!st.empty() && arr[st.top()]>currele) st.pop();
10            ans[i]=!st.empty()?st.top():-1;
11            st.push(i);
12        }
13        return ans;
14    }
15    vector<int> findnse(vector<int>& arr){
16        stack<int> st;
17          int n=arr.size();
18        vector<int> ans(n);
19        for(int i=n-1;i>=0;i--){
20            int currele=arr[i];
21            while(!st.empty() && arr[st.top()]>=currele) st.pop();
22           ans[i]=!st.empty()?st.top():n;
23           st.push(i);
24        }
25        return ans;
26    }
27    int sumSubarrayMins(vector<int> &arr) {
28       vector<int> nse=findnse(arr);
29        vector<int> pse=findpse(arr);
30        int total=0;
31        int mod=1e9+7;
32        int n=arr.size();
33        for(int i=0;i<n;i++){
34           int left=i-pse[i];
35           int right=nse[i]-i;
36           total=(total+(right*1LL*left*arr[i])%mod)%mod;
37        }    
38        return total;
39    }
40  
41};