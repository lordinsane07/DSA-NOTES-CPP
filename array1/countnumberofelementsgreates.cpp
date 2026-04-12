#include<iostream>
using namespace std;
int main(){
int n,count=0;
    cout<<"size fo array";
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"enter element u want to check smaller than the array";
    cin>>x;
    for(int i=0;i<=n-1;i++){
        if(x<arr[i])
    count=count+1;}
   cout<<count;
}