1class Solution {
2public:
3     bool solve(vector<vector<char> >& board) {
4            int n=9;
5            for(int i=0;i<n;i++){
6                for(int j=0;j<n;j++){
7                    if(board[i][j]=='.'){
8                        for(char digit='1';digit<='9';digit++){
9                            if(allruleschecked(digit,i,j,board)){
10                                board[i][j]=digit;
11                                if(solve(board)) return true;
12                                else {board[i][j]='.';};
13                            }
14                        }
15                     return false;
16                }
17                }
18            }
19            return true;
20    }
21    bool allruleschecked(char digit,int row,int col,vector<vector<char> >& board){
22        for(int i=0;i<9;i++){
23            if(board[row][i]==digit || board[i][col]==digit) return false;
24        }
25        int startrow=(row/3)*3;
26        int startcol=(col/3)*3;
27        for(int i=startrow;i<startrow+3;i++){
28            for(int j=startcol;j<startcol+3;j++){
29                if(board[i][j]==digit) return false;
30            }
31        }
32        return true;
33    }
34    void solveSudoku(vector<vector<char> >& board) {
35      solve(board);
36    }
37};