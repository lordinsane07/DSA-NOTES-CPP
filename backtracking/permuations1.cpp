#include<iostream>
using namespace std;
void permuatations(string input,string output){
    if(input.size()==0){
        cout<<output<<"\n";
        return;
    }
    for(int i=0;i<input.size();i++){
        char ch=input[i];
        string left=input.substr(0,i);
        string right=input.substr(i+1);
        string ros=left+right;
        permuatations(ros,output+ch);
    }
}
int main(){
        permuatations("abc","");
}