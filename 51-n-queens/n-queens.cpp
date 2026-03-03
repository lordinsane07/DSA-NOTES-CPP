class Solution {
public:
 bool isSafe(vector<string>& board,int row,int col){
        int r=row,c=col;
        while(r>=0 && c>=0){
            if(board[r][c]=='Q') return false;
            r--;
            c--;
        }
        r=row,c=col;
        while(r>=0){
            if(board[r][c]=='Q') return false;
            r--;
        }
        r=row,c=col;
        while(r>=0 && c<board[0].size()){
            if(board[r][c]=='Q') return false;
            r--;
            c++;
        }
        return true;
    }
        void func(int row, vector<vector<string> >& ans,vector<string>& board){
            if(row==board.size()){
                ans.push_back(board);
                return;
            }
            for(int col=0;col<board[0].size();col++){
                if(isSafe(board,row,col)){
                    board[row][col]='Q';
                    func(row+1,ans,board);
                    board[row][col]='.';
                }
            }
        }
    vector<vector<string> > solveNQueens(int n) {
      vector<vector<string>> ans;
      vector<string> board(n,string(n,'.'));
      func(0,ans,board);
      return ans;
    }
//  vector<vector<char>> grid;
// vector<vector<string>> result;
// bool canPlaceQueen(int row,int col,int n){
//     //column check
//     for(int i=row-1;i>=0;i--){
//         if(grid[i][col]=='Q'){
//             return false;
//         }
//     }
//     //left diagonal check
//     for(int i=row-1,j=col-1;i>=0 && j>=0;i--,j--){
//         if(grid[i][j]=='Q')//we are attacked
//         return false;
//     }
//     //right diagonal c heck
//     for(int i=row-1,j=col+1;i>=0 && j<n;i--,j++){
//         if(grid[i][j]=='Q')//we are attacked
//         return false;
//     }
//     return true;
// }
// void f(int row,int n){
// if(row==n){
//     vector<string> temp;
//     //we got one possible answer
//     for(int i=0;i<n;i++){
//         string res="";
//         for(int j=0;j<n;j++){
//            res+=grid[i][j];
//         }
//         temp.push_back(res);
//         }
//         result.push_back(temp);
//     return;
// }
//     for(int col=0;col<n;col++){
//         if(canPlaceQueen(row,col,n)){
//             grid[row][col]='Q';
//             f(row+1,n);
//             grid[row][col]='.';
//         }
//     }
// }


//vector<vector<string>> solveNQueens(int n){

    // grid.clear();
    // result.clear();
    // grid.resize(n,vector<char> (n,'.'));
    // f(0,n);
    // return result;
//}
   
};