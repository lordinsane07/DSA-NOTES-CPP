#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int k,h,w;
    cin>>k>>h>>w;
    int sum=0;
    for(int i=1;i<=w;i++){
        
        h-=k*i;
            
    }  
    if(h>=0) cout<<0;
    else cout<<abs(h);
} 
