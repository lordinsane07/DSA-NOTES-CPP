class Solution {
public:
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> pre(n,vector<int>(m,1));
        int p=1;
        for(int i=0;i<n*m;i++){
            pre[i/m][i%m]=p;
             p=((long long)p*grid[i/m][i%m])%12345;
        }
        p=1;
        for(int i=n*m-1;i>=0;i--){
            pre[i/m][i%m]=( pre[i/m][i%m]*p)%12345;
              p=((long long)p*grid[i/m][i%m])%12345;
        }
        return pre;
    }
};