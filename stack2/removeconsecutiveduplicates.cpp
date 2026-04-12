#include<iostream>
#include<stack>
using namespace std;
string removeduplicates(string s){
    stack<char> st;
    st.push(s[0]);
    for(int i=0;i<s.length();i++){
        if(s[i]!=st.top()) st.push(s[i]);
    }
    s="";
    while(st.size()>0){
        s+=st.top();
        st.pop();
    }
    reverse(s.begin(),s.end());
    return s;
}
int main(){
    string s="aaabbbccdaaf";
    cout<<s<<endl;
    s=removeduplicates(s);
    cout<<s<<endl;
}