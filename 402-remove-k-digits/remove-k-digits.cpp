class Solution {
public:
    string removeKdigits(string nums, int k) {
          int n=nums.size();
            stack<char> st;
            string s="";
            for(int i=0;i<n;i++){
                if(st.empty()) st.push(nums[i]);
                else{
                    while(!st.empty() && st.top()>nums[i] && k>0) {
                        st.pop();
                        k--;
                    }
                    st.push(nums[i]);
                }
            }
            while(k>0 && !st.empty()){
                st.pop();
                k--;
            }
            while(!st.empty()) {
               s+=st.top();
                    st.pop();
            }
            reverse(s.begin(),s.end());
             while(s.size()>1 && s[0]=='0') s.erase(s.begin());
            if(s.empty()) return "0";
            else return s;
    }
};