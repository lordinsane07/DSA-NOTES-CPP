#include<iostream>
#include<stack>
using namespace std;//T.C.=O(n) S.C.=O(n)
void displayrev(stack<int>& st){
    if(st.size()==0) return;
    int x=st.top();
    cout<<x<<" ";
    st.pop();
    displayrev(st);
    st.push(x);
}
void display(stack<int>& st){
    if(st.size()==0) return;
    int x=st.top();
    st.pop();
    display(st);
    cout<<x<<" ";
    st.push(x);
}
void pushatbottomrec(stack<int>& st,int val){
    if(st.size()==0) {
        st.push(val);
        return;
    }    
    int x=st.top();
    st.pop();
    pushatbottomrec(st,val);
    st.push(x);
}
void reverse(stack<int>& st){
    if(st.size()==1) return;
    int x=st.top();
    st.pop();
    reverse(st);
    pushatbottomrec(st,x);
}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    displayrev(st);
    pushatbottomrec(st,-10);
    cout<<endl;
    display(st);
    cout<<endl;
    reverse(st);
    display(st);
}