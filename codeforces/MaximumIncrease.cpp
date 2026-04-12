#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int curr=1,best=1;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i-1]) curr++;
        else curr=1;
    best=max(best,curr);
    }
    cout<<best;
}