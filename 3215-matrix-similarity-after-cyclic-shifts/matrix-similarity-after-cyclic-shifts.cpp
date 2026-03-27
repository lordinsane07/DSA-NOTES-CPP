class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        int n=mat.size();
        int m=mat[0].size();
        k=k%m;
        if(k==0) return true;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int currind=j;
                    int finalidn;
                if(i%2==0){
                    finalidn=(j+k)%m;
                }
                else {
                    finalidn=(j-k+m)%m;
                }
                if(mat[i][currind]!=mat[i][finalidn]) return false;
            }
        }
        return true;
    }
};