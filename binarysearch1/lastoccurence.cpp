#include<iostream>
using namespace std;
int main(){
        int arr[21]={1,2,2,2,2,3,3,3,3,4,4,4,4,4,5,5,5,6,6,6,7};
        int n=21;
       int x=2;
        int lo=0;
        int hi=n-1;
        bool flag=false;
        while(lo<=hi){
            int mid=(lo+hi)/2;
            if(arr[mid]==x){
                if(mid==n-1){
            cout<<mid;
                break;
        }
                else if(arr[mid+1]!=x){
                flag=true;
                cout<<mid;
                break;}
                else{
                    lo=mid+1;}
                }

else if(arr[mid]>x){
    hi=mid-1;}
    else{
        lo=mid+1;}
        }
        if(flag==false){
            cout<<-1;
        }}