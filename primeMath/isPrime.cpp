#include<iostream>
#include<cmath>
using namespace std;
int fac=0;
bool isprime(int n){
    if(n==1) return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) {
            fac=i;
            return false;
        }
    }
    return true;
}
int main(){
   cout<<isprime(1001)<<endl;
   cout<<fac;
    
}