#include<iostream>
#include<vector>
using namespace std;
int inversion(vector<int>& a,vector<int>& b){
    int count=0;
    int i=0;//a
    int j=0;//b
    while(i<a.size()&&j<b.size()){
        if(a[i]<=b[j]){
            i++;
            }
            else{
                count+=a.size()-i;
                j++;
                }
                }
                return count;
}
void merge(vector<int>& a,vector<int>& b,vector<int>& res){
    int i=0,j=0,k=0;
    while(i<a.size()&&j<b.size()){
        if(a[i]<=b[j]) res[k++]=a[i++];
        else res[k++]=b[j++];
    }
    if(i==a.size()) while(j<b.size()) res[k++]=b[j++];
    if(j==b.size()) while(i<a.size()) res[k++]=a[i++];
}
int mergesort(vector<int>& v){
    int count=0;
    int n=v.size();
    if(n==1) return 0;
    int n1=n/2,n2=n-n/2;
    vector<int> a(n1),b(n2);
    for(int i=0;i<n1;i++)
        a[i]=v[i];
        for(int i=0;i<n2;i++)
        b[i]=v[i+n1];
        //recursion
       count += mergesort(a);
        count +=mergesort(b);
        //count the inversion
       count +=inversion(a,b);
        //merge
        merge(a,b,v);
        a.clear();
        b.clear();
        return count;
}
int main(){//T.C=O(nlogn) IT IS STABLE BUT BAD SPACE TIME COMPLEXITY //s.c=O(n)
    int arr[]={5,1,3,0,4,9,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n);//same copy of arr
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<mergesort(v);
}