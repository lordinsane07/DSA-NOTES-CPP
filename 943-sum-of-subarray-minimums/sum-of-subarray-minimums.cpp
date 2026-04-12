class Solution {
public:
vector<int> findpse(vector<int>& arr){
        stack<int> st;
        int n=arr.size();
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            int currele=arr[i];
            while(!st.empty() && arr[st.top()]>currele) st.pop();
            ans[i]=!st.empty()?st.top():-1;
            st.push(i);
        }
        return ans;
    }
    vector<int> findnse(vector<int>& arr){
        stack<int> st;
          int n=arr.size();
        vector<int> ans(n);
        for(int i=n-1;i>=0;i--){
            int currele=arr[i];
            while(!st.empty() && arr[st.top()]>=currele) st.pop();
           ans[i]=!st.empty()?st.top():n;
           st.push(i);
        }
        return ans;
    }
    int sumSubarrayMins(vector<int> &arr) {
       vector<int> nse=findnse(arr);
        vector<int> pse=findpse(arr);
        int total=0;
        int mod=1e9+7;
        int n=arr.size();
        for(int i=0;i<n;i++){
           int left=i-pse[i];
           int right=nse[i]-i;
           total=(total+(right*1LL*left*arr[i])%mod)%mod;
        }    
        return total;
    }
  
};