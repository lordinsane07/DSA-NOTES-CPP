#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(2);
     v.push_back(9);
    v.push_back(0);
    v.push_back(5);
    v.push_back(9);
    v.push_back(0);
    v.push_back(5);
int x=0;
int idx=0;
for(int i=v.size()-1;i>=0;i--) {  
    if(v[i]==x)
    idx=i;
    break;
}
cout<<idx;
}