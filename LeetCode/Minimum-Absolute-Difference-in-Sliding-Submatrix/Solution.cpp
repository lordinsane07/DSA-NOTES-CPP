1class Solution {
2public:
3    vector<vector<int>> minAbsDiff(vector<vector<int>>& grid, int k) {
4        int n=grid.size();
5        int m=grid[0].size();
6        vector<vector<int>> result(n-k+1,vector<int> (m-k+1,0));
7        for(int i=0;i<=n-k;i++){
8            for(int j=0;j<=m-k;j++){
9                set<int> val;
10                for(int x=i;x<=i+k-1;x++){
11                    for(int y=j;y<=j+k-1;y++){
12                        val.insert(grid[x][y]);
13                    }
14                }
15                if(val.size()==1) continue;
16                int mindiff=INT_MAX;
17                auto prev=val.begin();
18                auto curr=next(prev);
19                while(curr!=val.end()){
20                    mindiff=min(mindiff,abs(*curr-*prev));
21                    prev=curr;
22                    curr++;
23                }
24                result[i][j]=mindiff;
25            }
26        }
27        return result;
28    }
29};