#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int place=1;
        vector<int> parts;
        while (n>0)
        {
            int d=n%10;
        if(d!=0) parts.push_back(d*place);
        n/=10;
        place*=10;
        }
        cout<<parts.size()<<endl;
        for(int x:parts){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}