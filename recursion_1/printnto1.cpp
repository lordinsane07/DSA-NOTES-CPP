#include<iostream>
using namespace std;
int func(int n){
    //base class
    if(n==0) return -1;
         cout<<n<<endl;
         //recurvise
        func(n-1);
}
int main(){
 int n;
 cin>>n;
 func(n);
}