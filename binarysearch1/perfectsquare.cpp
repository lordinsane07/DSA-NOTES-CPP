#include<iostream>
 using namespace std;
 int main(){
 int x=45;
 bool flag=false;
 int lo=0;
    int hi=x;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            long long m=(long long)mid;
            long long y=(long long)x;
            if((m*m)==y){ 
                cout<<"it is perfect square";
                flag=true;
            break;
            }
            else if((m*m)>y) {
                hi=mid-1;}
            else {
                lo=mid+1;
        }
 }
 if(flag==false){
    cout<<"it is not a perfect square";
 }
 }