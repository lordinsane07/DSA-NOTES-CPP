#include<iostream>
#include<vector>
using namespace std;
int partition(vector<int>& m,int si,int ei){
    int pivotel=m[(si+ei)/2];
    int count=0; 
    for(int i=si;i<=ei;i++){
        if(i==(si+ei)/2) continue;
        if(m[i]<=pivotel) count++;
    }
    int pivotIndex=si+count;
    swap(m[pivotIndex],m[(si+ei)/2]);
    int i=si,j=ei;
    while(i<pivotIndex && j>pivotIndex){
        if(m[i]<=pivotel) i++;
        else if(m[j]>pivotel) j--;
    else if(i<pivotIndex && j>pivotIndex){
        swap(m[i],m[j]);
        i++;
        j--;
    }
}
return pivotIndex;
}
void quicksort(vector<int>& m,int si,int ei){
    if(si>=ei) return; 
    int pi=partition(m,si,ei);
    cout<<"Pivot "<<m[pi]<<": ";
    for(int i=0;i<=ei;i++){
        cout<<m[i]<<" ";
    }
    cout<<endl;
    quicksort(m,si,pi-1);
    quicksort(m,pi+1,ei);
}
int main(){
    int n;
    cin>>n;
    vector<int> m(n);
    for(int i=0;i<n;i++)
    {
        cin>>m[i];
    }
    for(int i=0;i<n;i++){
        cout<<m[i]<<" ";
    }
    cout<<endl;
    quicksort(m,0,n-1);
    for(int i=0;i<n;i++){
        cout<<m[i]<<" ";
    }
    cout<<endl;   
}