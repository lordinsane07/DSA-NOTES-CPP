#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    try{
        if(n<0){
            throw
            invalid_argument("0");
        }
        else if(n==0){
            throw
            invalid_argument("1");
        }
        int* arr=new int[n];
        try{
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        delete[] arr;
    }
    catch(exception& e){
        delete[] arr;
        throw runtime_error(e.what());
    }
}
catch(invalid_argument& e){
    cout<<e.what()<<endl;
}
catch(exception& e){
    cout<<e.what()<<endl;
}
}