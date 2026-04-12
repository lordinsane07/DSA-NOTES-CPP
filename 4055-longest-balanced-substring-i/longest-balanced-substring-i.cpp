class Solution {
public:
    int longestBalanced(string s) {
        int n=s.size();
        unordered_map<char,int> mpp;
        int ans=0;
       
        for(int i=0;i<n;i++){
            mpp={};
            for(int j=i;j<n;j++){
                mpp[s[j]]++;
                int cnt=mpp[s[j]];
                int flag=1;
                for(auto it:mpp){
                    if(it.second!=cnt){
                        flag=0;
                        break;
                    }
                }
                  if(flag) ans=max(ans,j-i+1);
            }
          
        }
        return ans;
    }
};