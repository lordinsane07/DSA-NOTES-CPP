class Solution {
public:
  static bool cmp(int a,int b){
      string s1=to_string(a);
      string s2=to_string(b);
      return s1+s2>s2+s1;
  }
    string largestNumber(vector<int> &arr) {
       
            sort(arr.begin(),arr.end(),cmp);    
            string ans="";
            for(auto it:arr){
                ans+=to_string(it);
            }
            return (ans[0]=='0')? "0" : ans;
}
  
};