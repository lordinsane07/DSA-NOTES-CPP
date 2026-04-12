1class Solution {
2public:
3    int minPartitions(string n) {
4        int maxi=INT_MIN;
5        for(int i=0;i<n.length();i++){
6            if(maxi<(n[i]-'0')) maxi=n[i]-'0';
7        }
8        return maxi;
9    }
10};