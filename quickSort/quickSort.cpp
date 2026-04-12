#include<iostream>
using namespace std;
int partition(int arr[],int si,int ei){
    int pivotElement=arr[(si+ei)/2];
    int count=0;
    for(int i=si;i<=ei;i++){
        if(i==(si+ei)/2) continue;
        if(arr[i]<=pivotElement) count++;
    }
    int pivotIdx=si+count;
    swap(arr[pivotIdx],arr[(si+ei)/2]);
    int i=si,j=ei;
    while(i<pivotIdx && j>pivotIdx){
        if(arr[i]<=pivotElement) i++;
        if(arr[j]>pivotElement) j--;
        else if(i<pivotIdx && j>pivotIdx){
            swap(arr[i],arr[j]);
            i++;
            j--;
            }
}
return pivotIdx;
}
void quicksort(int arr[],int si,int ei){
    if(si>=ei) return;
    int pi=partition(arr,si,ei);
    quicksort(arr,si,pi-1);
    quicksort(arr,pi+1,ei);
}
int main(){//T.C=O(nlogn)=AVG CASE//S.C=O(logn)//IT IS UNABLE SORT
   // int arr[]={5,1,8,2,7,6,3,4};
   int arr[]={5,18,82,20,7,6,31,4,-8};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
//WORST CASE T.C=O(n^2)