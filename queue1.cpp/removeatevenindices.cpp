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

void removeateven(queue<int>& q) {
    int n=q.size();
    for(int i=0;i<n;i++){
       if(i%2!=0){
         int x=q.front();
         q.push(x);
       }
       q.pop();
       /*
        if(i%2==0){
            q.pop();
    }
    else{
        int x=q.front();
        q.pop();
        q.push(x);
    }
    */
}
}

int main() {
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    display(q);  // display original queu  // reverse the queue
    removeateven(q);// display reversed queue
    display(q);  // display reversed queue again (to check if it's intact)
}
