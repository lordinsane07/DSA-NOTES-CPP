#include<iostream>
#include<string>
using namespace std;
int main(){
        string s;
        if(!(cin>>s)) return 0;
        for(int i=0;i<s.size();i++){
                            int d=s[i]-'0';
                            int inv=9-d;
                            int choose=(i==0 && d==9)?d:min(d,inv);
                            s[i]=char('0'+choose);
        }
        cout<<s;
}