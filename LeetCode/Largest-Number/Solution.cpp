1class Solution {
2public:
3  static bool cmp(int a,int b){
4      string s1=to_string(a);
5      string s2=to_string(b);
6      return s1+s2>s2+s1;
7  }
8    string largestNumber(vector<int> &arr) {
9       
10            sort(arr.begin(),arr.end(),cmp);    
11            string ans="";
12            for(auto it:arr){
13                ans+=to_string(it);
14            }
15            return (ans[0]=='0')? "0" : ans;
16}
17  
18};