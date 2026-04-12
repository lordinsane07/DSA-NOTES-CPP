#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>& a,vector<int>& b,vector<int>& arr){
    int i = 0, j = 0, k = 0;
    while(i < a.size() && j < b.size()){
        if(a[i] <= b[j]){
            arr[k++] = a[i++];
            }
            else{
                arr[k++] = b[j++];  
                }
    }
    while (i<a.size()){
        arr[k++]=a[i++];
    }
    while (j<b.size()){
        arr[k++]=b[j++];
        }
    
}
void mergesort(vector<int>& arr){
    int n=arr.size();
    if(n<= 1) return;
    int n1=n/2,n2=n-n1;
    vector<int> a(n1),b(n2);
    for(int i=0;i<n1;i++) a[i]=arr[i];
    for(int i=0;i<n2;i++) b[i]=arr[i+n1];
    mergesort(a);
    mergesort(b);
    merge(a,b,arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    mergesort(arr);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
    }
        
}