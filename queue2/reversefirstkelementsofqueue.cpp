#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void display(queue<int> q) {  // pass the queue by value, not by reference
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}
void reversek(int k,queue<int>& q) {
    stack<int> st;
    for(int i=1;i<=k;i++){
        int x = q.front();
        st.push(x);
        q.pop();
    }
    while (!st.empty()) {
        int x = st.top();
        st.pop();
        q.push(x);
    }
    int n=q.size();
    for(int i=1;i<=n-k;i++){
        q.push(q.front());
        q.pop();
    }
}
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    display(q); 
    reversek(3,q);
    display(q);
}