#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main(){
    int arr[]={10,9,8,7,4,70,60,50};
    int k=4;
    int n = sizeof(arr)/4;
    priority_queue<int,vector<int>,greater<int> > pq;
    //vector<int> ans;
    int idx=0;

    for(int i=0;i<n;i++){
        pq.push(arr[i]);
        if(pq.size()>k){
            arr[idx++]=pq.top();
            pq.pop();
            }
    }
    while (pq.size()>0)
    {
                   arr[idx++]=pq.top();

        pq.pop();
    }
    for(int i=0;i<idx;i++){
        cout<<arr[i]<<" ";
        }

    
}