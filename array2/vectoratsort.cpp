#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(2);
    v.push_back(9);
    v.push_back(0);
    v.push_back(5);
    for(int  i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}cout<<endl;}