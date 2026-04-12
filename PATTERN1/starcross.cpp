//#include<iostream>
//using namespace std;
//int main(){
//int n;
//cout<<"enter number of row:";
//cin>>n;
//for(int i=1;i<=n;i++)
//{
    //for(int j=1;j<=n;j++)
    //{
        //if(i==j || i+j==n+1)
        //cout<<"*";
      //  else
     //   cout<<" ";
   // }
  //  cout<<endl;
//}
//}
#include<iostream>
using namespace std;
int main(){
    int n;
    

    cout<<"Number of rows:";
    cin>>n;
    int nsp=n-1;
    int nst=1;
    //no. of star=n+1-i
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=nsp;j++){
            cout<<" ";
        }
        nsp--;

        for(int k=1;k<=nst;k++)
        {cout<<"*";
        }
        nst+=2;
cout<<endl;
        }

   
}
