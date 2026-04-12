#include<iostream>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int count=0;
    for(int i=0;i<m;i++){
        if(i%2==1) {
            if(count%2==0){
            for(int j=0;j<n-1;j++){
                cout<<".";
            }
            cout<<"#";
         count++;
        }
         else{
             cout<<"#";
                    for(int j=0;j<n-1;j++){
                cout<<".";
            }
           
         count++;
         }      
        }
        else {
            for(int j=0;j<n;j++){
                cout<<"#";
            }
        }
        cout<<endl;
    }
} 