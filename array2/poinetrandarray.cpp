#include<iostream>
using namespace std;
int main(){
    int arr[]={8,5,9,5,5};
    int* ptr=arr;
    for(int i=0;i<=4;i++)
    {
        cout<<ptr[i]<<" ";

    }
    ptr=arr;
*ptr=8;
ptr++;
*ptr=9;
ptr--;
cout<<endl;
 for(int i=0;i<=4;i++)
    {
        cout<<*ptr<<" ";
ptr++;
    }
    ptr=arr;
}

