#include<iostream>
#include<string>
using namespace std;
int main(){
    string table;
    cin>>table;
    char ts=table[0];
    char td=table[1];
    for(int i=0;i<5;i++){
        string n;
        cin>>n;
        if(n[0]==ts || n[1]==td){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
}