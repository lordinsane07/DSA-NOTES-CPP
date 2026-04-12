#include<iostream>
using namespace std;
void occur(string s,int open,int close,int n){
    if(close==n){
        cout<<s<<endl;
        return;
    }
    if(open<n) occur(s+"(",open+1,close,n);
    if(close<open) occur(s+")",open,close+1,n);
}
int main(){
    int n=3;
    occur("",0,0,n);
}