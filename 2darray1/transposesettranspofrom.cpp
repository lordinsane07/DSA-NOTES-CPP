#include<iostream>
#include<climits>
using namespace std;
int main(){
    int m;
    cin>>m;
   
    int arr[m][m];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
     for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<" ";
        }cout<<endl;}
        cout<<endl;
                 for(int i=0;i<m;i++)
    {
        for(int j=i+1;j<m;j++)
        {
            int temp=arr[i][j];
        arr[i][j]=arr[j][i];
        arr[j][i]=temp;
        }
    }
     for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<" ";
            }
            cout<<endl;
            }

}

    
