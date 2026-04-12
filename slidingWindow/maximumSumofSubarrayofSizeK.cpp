#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={7,1,2,5,8,4,9,3,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k=3;
    int maxSum=INT_MIN;
    int maxIdx=-1;
    int prevSum=0;
    for(int i=0;i<k;i++){
        prevSum+=arr[i];
    }
    maxSum=prevSum;
    //sliding window algorithm
    int i=1;
    int j=k;
    while(j<n){
       prevSum=prevSum-arr[i-1]+arr[j];
        if(prevSum>maxSum){
            maxSum=prevSum;
            maxIdx=i;
            }
            i++;
            j++;
}
cout<<"Maximum sum of subarray of size "<<maxIdx<<" is "<<maxSum<<endl;//T.C.=O(n)
}