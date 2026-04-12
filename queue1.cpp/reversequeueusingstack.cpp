#include <iostream>
#include <stack>
#include <queue>
using namespace std;

void display(queue<int> q) {  // pass the queue by value, not by reference
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

void reverse(queue<int>& q) {
    stack<int> st;
    while (!q.empty()) {
        int x = q.front();
        q.pop();
        st.push(x);
    }
    while (!st.empty()) {
        int x = st.top();
        st.pop();
        q.push(x);
    }
}

int main() {
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    display(q);  // display original queue
    q.pop();     // pop an element
    reverse(q);  // reverse the queue
    display(q);  // display reversed queue
    display(q);  // display reversed queue again (to check if it's intact)
}

/*
#include<iostream>
#include<stack>    
#include<queue>
using namespace std;
void display(queue<int>& q){
    int n=q.size();
    for(int i=1;i<=n;i++){
        int x=q.front();
        cout<<x<<" ";
        q.pop();
        q.front();
    }
    cout<<endl;
}
void reverse(queue<int>& q){
    stack<int> st;
    while(q.size()>0){
        int x=q.front();
        q.pop();
        st.push(x);
    }
    while(st.size()>0){
        int x=st.top();
        st.pop();
        q.push(x);
    }
}
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    display(q);
    q.pop();
    reverse(q);
    display(q);
    display(q);
}*/