class Solution {
public:
    vector<int> findpsee(vector<int>& arr){
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
   long long submins(vector<int> &arr){
             vector<int> nse=findnse(arr);
        vector<int> psee=findpsee(arr);
        long long total=0;
        int n=arr.size();
        for(int i=0;i<n;i++){
           int left=i-psee[i];
           int right=nse[i]-i;
           total=(total+(right*1LL*left*arr[i]));
        }    
        return total;
    }
    vector<int> findnge(vector<int>& arr){
        stack<int> st;
        int n=arr.size();
        vector<int> ans(n);
        for(int i=n-1;i>=0;i--){
            int currele=arr[i];
            while(!st.empty() && arr[st.top()]<=currele) st.pop();
            ans[i]=!st.empty()?st.top():n;
            st.push(i);
        }
        return ans;
    }
    vector<int> findpgee(vector<int>& arr){
        stack<int> st;
        int n=arr.size();
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            int currele=arr[i];
            while(!st.empty() && arr[st.top()]<currele) st.pop();
            ans[i]=!st.empty()?st.top():-1;
            st.push(i);
        }
        return ans;
    }
   long long submax(vector<int> &arr){
             vector<int> nge=findnge(arr);
        vector<int> pgee=findpgee(arr);
       long long total=0;
        int n=arr.size();
        for(int i=0;i<n;i++){
           int left=i-pgee[i];
           int right=nge[i]-i;
           total=(total+(right*1LL*left*arr[i]));
        }    
        return total;
    }
    long long subArrayRanges(vector<int> &arr){
      return (submax(arr)-submins(arr));
    }
};