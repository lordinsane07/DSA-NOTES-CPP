#include<iostream>
#include<string>
using namespace std;
int main(){
    string arr[]={"3454","0044","33","897"};
    int max=stoi(arr[0]);
    string maxS= arr[0];


    for(int i=1;i<4;i++){
        int x=stoi(arr[i]);
        if(x>max){
            max=x;
            maxS=arr[i];
        }
}
cout<<maxS;
}