#include<iostream>
using namespace std;
void abc(int n,int* ptr1,int* ptr2 ){
    *ptr2=n%10;
    while(n>9){
        n/=10;
    }
    *ptr1=n;
    return;
}
int main(){
    int n;
    cin>>n;
    int firstdigit,lastdigit;
    int* ptr1=&firstdigit;
    int* ptr2=&lastdigit;
    abc(n,ptr1,ptr2);
    cout<<firstdigit<<" "<<lastdigit;
}