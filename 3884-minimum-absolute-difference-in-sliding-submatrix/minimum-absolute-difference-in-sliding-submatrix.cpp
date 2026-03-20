class Solution {
public:
    vector<vector<int>> minAbsDiff(vector<vector<int>>& grid, int k) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> result(n-k+1,vector<int> (m-k+1,0));
        for(int i=0;i<=n-k;i++){
            for(int j=0;j<=m-k;j++){
                set<int> val;
                for(int x=i;x<=i+k-1;x++){
                    for(int y=j;y<=j+k-1;y++){
                        val.insert(grid[x][y]);
                    }
                }
                if(val.size()==1) continue;
                int mindiff=INT_MAX;
                auto prev=val.begin();
                auto curr=next(prev);
                while(curr!=val.end()){
                    mindiff=min(mindiff,abs(*curr-*prev));
                    prev=curr;
                    curr++;
                }
                result[i][j]=mindiff;
            }
        }
        return result;
    }
};