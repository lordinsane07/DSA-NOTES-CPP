#include<iostream>
#include<vector>
using namespace std;
void array(int arr[],int n,int idx){
    if(idx==n) return;
    cout<<arr[idx]<<" ";
    array(arr,n,idx+1);
}
void array2(vector<int>& v,int idx){
    if(idx==v.size()) return;
    cout<<v[idx]<<" ";
    array2(v,idx+1);
}
int main(){
    int arr[]={2,5,1,0,3,5,7,2,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> v(n);
    for(int i=0;i<n;i++){ v[i]=arr[i];}
   array(arr,n,0);
   cout<<endl;
    array2(v,0);
}