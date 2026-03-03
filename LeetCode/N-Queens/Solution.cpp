1class Solution {
2public:
3 bool isSafe(vector<string>& board,int row,int col){
4        int r=row,c=col;
5        while(r>=0 && c>=0){
6            if(board[r][c]=='Q') return false;
7            r--;
8            c--;
9        }
10        r=row,c=col;
11        while(r>=0){
12            if(board[r][c]=='Q') return false;
13            r--;
14        }
15        r=row,c=col;
16        while(r>=0 && c<board[0].size()){
17            if(board[r][c]=='Q') return false;
18            r--;
19            c++;
20        }
21        return true;
22    }
23        void func(int row, vector<vector<string> >& ans,vector<string>& board){
24            if(row==board.size()){
25                ans.push_back(board);
26                return;
27            }
28            for(int col=0;col<board[0].size();col++){
29                if(isSafe(board,row,col)){
30                    board[row][col]='Q';
31                    func(row+1,ans,board);
32                    board[row][col]='.';
33                }
34            }
35        }
36    vector<vector<string> > solveNQueens(int n) {
37      vector<vector<string>> ans;
38      vector<string> board(n,string(n,'.'));
39      func(0,ans,board);
40      return ans;
41    }
42//  vector<vector<char>> grid;
43// vector<vector<string>> result;
44// bool canPlaceQueen(int row,int col,int n){
45//     //column check
46//     for(int i=row-1;i>=0;i--){
47//         if(grid[i][col]=='Q'){
48//             return false;
49//         }
50//     }
51//     //left diagonal check
52//     for(int i=row-1,j=col-1;i>=0 && j>=0;i--,j--){
53//         if(grid[i][j]=='Q')//we are attacked
54//         return false;
55//     }
56//     //right diagonal c heck
57//     for(int i=row-1,j=col+1;i>=0 && j<n;i--,j++){
58//         if(grid[i][j]=='Q')//we are attacked
59//         return false;
60//     }
61//     return true;
62// }
63// void f(int row,int n){
64// if(row==n){
65//     vector<string> temp;
66//     //we got one possible answer
67//     for(int i=0;i<n;i++){
68//         string res="";
69//         for(int j=0;j<n;j++){
70//            res+=grid[i][j];
71//         }
72//         temp.push_back(res);
73//         }
74//         result.push_back(temp);
75//     return;
76// }
77//     for(int col=0;col<n;col++){
78//         if(canPlaceQueen(row,col,n)){
79//             grid[row][col]='Q';
80//             f(row+1,n);
81//             grid[row][col]='.';
82//         }
83//     }
84// }
85
86
87//vector<vector<string>> solveNQueens(int n){
88
89    // grid.clear();
90    // result.clear();
91    // grid.resize(n,vector<char> (n,'.'));
92    // f(0,n);
93    // return result;
94//}
95   
96};