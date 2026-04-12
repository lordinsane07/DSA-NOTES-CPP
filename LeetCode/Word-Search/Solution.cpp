1class Solution {
2public:
3    bool func(vector<vector<char> >& board, string word,int i,int j,int k){
4        if(k==word.length()) return true;
5        if(i<0 || j<0 || i>=board.size() || j>=board[0].size() || word[k]!=board[i][j]) return false;
6        bool ans=false;
7        char x=board[i][j];
8        board[i][j]=' ';
9        ans |=func(board,word,i+1,j,k+1);
10        ans |=func(board,word,i-1,j,k+1);
11        ans |=func(board,word,i,j+1,k+1);
12        ans |=func(board,word,i,j-1,k+1);
13        board[i][j]=x;
14        return ans;
15    }
16    bool exist(vector<vector<char> >& board, string word) {
17        for(int i=0;i<board.size();i++){
18            for(int j=0;j<board[0].size();j++){
19                if(board[i][j]==word[0]){
20                   if(func(board,word,i,j,0)) return true; 
21                }
22            }
23        }
24        return false;
25    }
26};