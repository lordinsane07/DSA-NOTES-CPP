#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    while (num--)
    {
        long long p;
        cin>>p;
        long long paths=0;
        for (long long i = 0; i*4<=p; i++)
        {
            long long remainder=p-4*i;
            if(remainder%2==0) paths++;
        }
        cout<<paths<<"\n";
    }
    
}