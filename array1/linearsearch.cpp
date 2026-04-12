#include<iostream>
using namespace std;
int main(){
int n;
    cout<<"size fo array";
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"enter element you want to search";
    cin>>x;
bool flag=true;
    for(int i=0;i<=n-1;i++){
        if(x==arr[i])
        flag=true;}
        if(flag==true)
        cout<<"present";
        else
        cout<<"not present";

}