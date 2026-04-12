#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(2*n);
    int sum=0;
    int maxi=INT_MIN;
    for(int i=0;i<2*n;i++){
        cin>>arr[i];
    maxi=max(sum,maxi);
       if(i%2==0) sum-=arr[i];
       else sum+=arr[i]; 
    }
cout<<maxi;
}