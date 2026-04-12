#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //selection sort
    for(int i=0;i<n-1;i++){
        int mind=INT_MAX;
        int midx=-1;
        for(int j=i;j<n;j++){
            if(arr[j]<mind){
                mind=arr[j];
                midx=j;
            }
        }
        swap(arr[i],arr[midx]);
    }
    //insertion sort
    /*
    for(int i=1;i<n;i++){
        int j=i;
        while(j>=1 && arr[j-1]>arr[j]){
            swap(arr[j-1],arr[j]);
            j--;
        }
    }
    */
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}