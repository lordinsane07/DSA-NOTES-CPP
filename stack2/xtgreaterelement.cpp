#include<iostream>
#include<stack>
using namespace std;
int main(){
    int arr[]={3,1,2,7,4,6,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //next greater element array
    int nge[n];
    //Brute force:t.c O(n^2) s.c. O(1)
  //  for(int i=0;i<n;i++){
        //nge[i]=-1;
        //for(int j=i+1;j<n;j++){
        //    if(arr[j]>arr[i]){
      //          nge[i]=arr[j];
    //            break;
  //  } 
//}
 //   }
 //using a stack:pop,ans,push & reverse traverse//t.c.=O(n) s.c.=O(n)
 stack<int> st;
 nge[n-1]=-1;
 st.push(arr[n-1]);
 for(int i=n-2;i>=0;i--){
    //pop all the elements smaller than arr[i]
    while(st.size()>0 && st.top()<=arr[i]){
        st.pop();
}
if(st.size()==0) nge[i]=-1;
else nge[i]=st.top();
//push the arr[i]
st.push(arr[i]);
 }
 cout<<"Next Greater Element Array: ";
 for(int i=0;i<n;i++){
    cout<<nge[i]<<" ";
    }
    return 0;
}