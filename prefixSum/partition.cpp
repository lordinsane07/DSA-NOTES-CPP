#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,5,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    //formation of prefix sum
    for(int i=1;i<n;i++){
        arr[i]+=arr[i-1];
        }
    //check if any  x exists
    int idx=-1;
    for(int i=1;i<n;i++){
        if(2*arr[i]==arr[n-1]){//PRE[X]=PRE[N-1]-PRE[X+1-1](0 TO X==X+1 TO N-1)
            idx=i;
            break;
        }
    }
    if(idx!=-1) cout<<"YES IT CAN BE PARTIONED AFTER "<<idx;
    else cout<<"NO IT CANNOT BE PARTIONED";
}
    
