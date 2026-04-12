#include<iostream>
#include<climits>
using namespace std;
/*
void maxi(int arr[],int n,int idx,int max){
if(idx==n){
    cout<<maxi<<endl;
    return;
}
if(max<arr[idx])
maxi(arr,n,idx+1,max);
}
*/
int maxinarray(int arr[],int n,int idx){
    if(idx==n) return INT_MIN;
    return max(arr[idx],maxinarray(arr,n,idx+1));
}
int main(){
int arr[]={2,5,1,0,3,5,7,2,6};
    int n=sizeof(arr)/sizeof(arr[0]);
   // maxi(arr,n,0,INT_MIN);
   cout<<maxinarray(arr,n,0);
}