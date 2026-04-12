#include<iostream>
using namespace std;
int main() {
    int arr[6]={5,4,6,2,3,1};
    int n=6;
    for(int i=0;i<n-1;i++){
        bool flag=true;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                //swap(arr[j],arr[j+1]);
                }
                }
                }
                cout<<endl;
                for(int i=0;i<n;i++){
                    cout<<arr[i]<<" ";
                    }
                    return 0;
                    }