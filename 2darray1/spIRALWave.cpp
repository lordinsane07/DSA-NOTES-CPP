#include<iostream>
using namespace std;
int main(){
    int m,n,count=0;
    cin>>m>>n;
    int tne=n*m;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
   for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
}}
cout<<endl;
int minr=0,minc=0;
int maxr=m-1,maxc=n-1;
while(minr<=maxr && minc<=maxc){
    //right
    for(int j=minc;j<=maxc && count<tne;j++)
    {
        cout<<arr[minr][j]<<" ";
        count=count+1;

    }
    minr++;
    //if(minr>maxc || minc>maxc) break;
    //down
    for(int i=minr;i<=maxr && count<tne;i++)
    {
        cout<<arr[i][maxc]<<" ";
        count=count+1;
    }
    maxc--;
    //if(minr>maxc || minc>maxc) break;
    //left
    for(int j=maxc;j>=minc && count<tne;j--){
   cout<<arr[maxr][j]<<" ";
   count=count+1;

}
maxr--;
//up
//if(minr>maxc || minc>maxc) break;
for(int i=maxr;i>=minr && count<tne;i--){
cout<<arr[i][minc]<<" ";
count=count+1;}
minc++;}
cout<<endl;
}


