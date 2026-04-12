#include<iostream>
#include<vector>
#include<climits>
using namespace std;
vector<int> st;
vector<int> lazy;
void buildTree(int arr[],int i,int lo,int hi){
    if(lo==hi){
        st[i]=arr[lo];
        return;
    }
    int mid=(lo+hi)/2;
    buildTree(arr,2*i+1,lo,mid);//left subtree
    buildTree(arr,2*i+2,mid+1,hi);//right subtree
      st[i] = st[2 * i + 1] + st[2 * i + 2];
}

    int getSum(int i,int lo,int hi,int l,int r){
        if(lazy[i]!=0){
            int rangeSize=hi-lo+1;
            st[i]+=rangeSize*lazy[i];
            if(lo!=hi){
                lazy[2*i+1]+=lazy[i];
                lazy[2*i+2]+=lazy[i];
            }
            lazy[i]=0;
        }
    if(l>hi || r<lo) return 0;
    if(lo>=l && hi<=r) return st[i];
      int mid=(lo+hi)/2;
    int leftSum=getSum(2*i+1,lo,mid,l,r);
    int rightSum=getSum(2*i+2,mid+1,hi,l,r);
    return (leftSum+rightSum);
 }

void updateRange(int i,int lo,int hi,int l,int r,int val){
        if(lazy[i]!=0){
            int rangeSize=hi-lo+1;
            st[i]+=rangeSize*lazy[i];
            if(lo!=hi){
                lazy[2*i+1]+=lazy[i];
                lazy[2*i+2]+=lazy[i];
            }
            lazy[i]=0;
        }
     if(l>hi || r<lo) return;
      if(lo>=l && hi<=r) {//uodate ntire low to high
                int rangeSize=hi-lo+1;
                st[i]+=rangeSize*val;
                 if(lo!=hi){//send lay to left and right
                lazy[2*i+1]+=val;
                lazy[2*i+2]+=val;
            }
            return;
      }
      int mid=(lo+hi)/2;
       updateRange(2*i+1,lo,mid,l,r,val);
        updateRange(2*i+2,mid+1,hi,l,r,val);
        st[i] = st[2 * i + 1] + st[2 * i + 2];
}

int main(){
        int arr[]={1,4,2,8,6,4,9,3};
        int n=sizeof(arr)/4;
        st.resize(n*4);
        lazy.resize(n*4,0);
        buildTree(arr,0,0,n-1);
         cout<<getSum(0,0,n-1,1,3)<<"\n";
        updateRange(0,0,n-1,2,5,10);
        cout<<getSum(0,0,n-1,1,3)<<"\n";
}