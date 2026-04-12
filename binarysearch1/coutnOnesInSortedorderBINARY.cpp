#include<iostream>
using namespace std;
int main(){
        int arr[21]={0,0,0,0,0,1,1,1,1,1,1,1,1};
        int n=13;
       int x=1;
        int lo=0;
        int hi=n-1;
int firstidx=-1; 
        while(lo<=hi){
            int mid=(lo+hi)/2;
            if(arr[mid]==x){
                if(mid==0){
            firstidx=mid;
            break;
        }
               else if(arr[mid-1]!=x){
                 firstidx=mid;
                break;}
                else{
                    hi=mid-1;}
                }

else if(arr[mid]>x){
    hi=mid-1;}
    else{
        lo=mid+1;}
        }
        if( firstidx==-1){
            cout<<0;
        }
        else{
            cout<<n-firstidx;
        }}