#include<iostream>
using namespace std;
void subset(string ans,string original){  
    if(original==""){
        cout<<ans<<endl;
        return;
    }
    char ch=original[0];
    subset(ans+ch,original.substr(1));//H.W DO SAME BY TAKING INDEXINSTEAD OF SUBSTR
    subset(ans,original.substr(1));
}
int main(){
    string str="abc";
    subset("",str);
}