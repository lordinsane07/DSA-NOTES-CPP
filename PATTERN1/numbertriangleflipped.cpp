#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Number of rows:";
    cin>>n;
    //no. of star=n+1-i
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=i;k++)
        {cout<<k;
        }
cout<<endl;
        }

   
}
