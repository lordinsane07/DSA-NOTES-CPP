#include<iostream>
using namespace std;
int main(){
        int arr[9]={1,2,4,7,9,15,19,20,25};
        int n=9;
        int x=21;
        int lo=0;
        int hi=n-1;
        bool flag=false;
        while(lo<=hi){
            int mid=(lo+hi)/2;
            if(arr[mid]==x){
                flag=true;
                cout<<arr[mid-1];
                break;
}
else if(arr[mid]>x){
    hi=mid-1;}
    else{
        lo=mid+1;}
        }
        if(flag==false){
            cout<<arr[hi];
        }}