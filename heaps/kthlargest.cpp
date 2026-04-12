#include<iostream>
#include<queue>
using namespace std;
int main(){
    int arr[]={10,20,4,2,1,3};
    int k=4;
    priority_queue<int,vector<int>,greater<int>> pq;
    int n=sizeof(arr)/4;
    for(int i=0;i<n;i++)
    {
        pq.push(arr[i]);
        if(pq.size()>k) pq.pop();
    }
    cout<<pq.top()<<" ";
}