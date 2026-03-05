class Solution {
public:
    int minOperations(string s) {
        int n=s.length();
        int front=0,back=0;
       for(int i=0;i<n;i++){
        if(s[i]!=(i%2?'1':'0')) front++;
         if(s[i]!=(i%2?'0':'1')) back++;
       }
        return min(front,back);
    }
};