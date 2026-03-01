class Solution {
public:
    int minPartitions(string n) {
        int maxi=INT_MIN;
        for(int i=0;i<n.length();i++){
            if(maxi<(n[i]-'0')) maxi=n[i]-'0';
        }
        return maxi;
    }
};