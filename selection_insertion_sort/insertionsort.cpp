#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={9,25,8,1,4,2,5};
    int n=7;
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";}
    cout<<endl;
    for(int i=1;i<n;i++){
        int j=i;
        //while(j>=1){
          //  if(arr[j]>=arr[j-1]){
            //    break;}
              //  else{
                //swap(arr[j-1],arr[j]);
        //}
        //j--;
        while(j>=1 && arr[j]<arr[j-1])
        {
            swap(arr[j-1],arr[j]);
            j--;
        }
        
        }
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";}
}
