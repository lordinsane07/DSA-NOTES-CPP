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
    //prev greater element array
    int pge[n];
 //using a stack:pop,ans,push & forward traverse//t.c.=O(n) s.c.=O(n)
 stack<int> st;
 pge[0]=-1;
 st.push(arr[0]);
 for(int i=1;i<=n-1;i++){
    //pop all the elements smaller than arr[i]
    while(st.size()>0 && st.top()<=arr[i]){
        st.pop();
}
if(st.size()==0) pge[i]=-1;
else pge[i]=st.top();
//push the arr[i]
st.push(arr[i]);
 }
 cout<<"Next Greater Element Array: ";
 for(int i=0;i<n;i++){
    cout<<pge[i]<<" ";
    }
    return 0;
}