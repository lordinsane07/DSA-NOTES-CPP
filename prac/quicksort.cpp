#include<iostream>
#include<vector>
using namespace std;
int partition(vector<int>& arr,int si,int ei){
   int pivotelement=arr[si];
    int count=0;
for(int i=si+1;i<=ei;i++){
    if(arr[i]<=pivotelement){
        count++;
}
}
int pivotidx=si+count;
swap(arr[pivotidx],arr[si]);
int i=si,j=ei;
while(i<pivotidx && j>pivotidx){
    if(arr[i]<=pivotelement) i++;
     if(arr[j]>=pivotelement) j--;
     else if(arr[i]>pivotelement && arr[j]<pivotelement) 
     swap(arr[i],arr[j]);
     i++;
     j--;
}
return pivotidx;
}
void quicksort(vector<int>& arr,int si,int ei){
    if(si>=ei) return;
    int pi=partition(arr,si,ei);
    quicksort(arr,si,pi-1);
    quicksort(arr,pi+1,ei);
}
int main(){
     int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    quicksort(arr,0,n-1);
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        }
}