#include<iostream>
using namespace std;
int maze(int sr,int sc,int er,int ec){
    if(sr > er || sc>ec) return 0;
    if(sr == er && sc == ec) return 1;
    int rightways=maze(sr,sc+1,er,ec);
    int downways=maze(sr+1,sc,er,ec);
    return rightways+downways;
}
int maze2(int row,int col){
    if(row < 1 || col<1) return 0;
    if(row == 1 && col == 1) return 1;
    int rightways=maze2(row,col-1);
    int downways=maze2(row-1,col);
    return rightways+downways;
}
void printpath(int sr,int sc,int er,int ec,string s){
    if(sr > er || sc>ec) return;
    if(sr == er && sc == ec) {
        cout<<s<<endl;
        return;
    }
    printpath(sr,sc+1,er,ec,s+'R');//right 
  printpath(sr+1,sc,er,ec,s+'D');//down
}
void printpath2(int row,int col,string s){
    if(row <1  || col<1) return;
    if(row == 1 && col == 1) {
        cout<<s<<endl;
        return;
    }
    printpath2(row,col-1,s+'R');//right 
  printpath2(row-1,col,s+'D');//down
}
int maze7(int row,int col){
    if(row < 1 || col<1) return 0;
    if(row == 1 && col == 1) return 1;
    int leftways=maze7(row,col-1);
    int upways=maze7(row-1,col);
    return leftways+upways;
}
int maze78(int row,int col){
    if(row < 1 || col<1) return 0;
    if(row == 1 && col == 1) return 1;
    int rightways=maze78(row,col+1);
    int downways=maze78(row+1,col);
    return rightways+downways;
}
int main(){
    int sr,sc,er,ec;
    cin>>sr>>sc>>er>>ec;
    printpath(1,1,3,4,"");
    cout<<maze2(3,4)<<endl;
    cout<<maze(1,1,3,4)<<endl;
     printpath2(3,4,"");
}