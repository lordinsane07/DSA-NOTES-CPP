#include<iostream>
#include<map>
#include<set>
using namespace std;
int main(){
    map<int,int> m;
    m[2]=20;
    m[1]=40;
    m[3]=10;
    for(auto x:m){
        cout<<x.first<<" "<<x.second<<endl;
    }
}