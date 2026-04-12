#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(6);
    cout<<v.capacity()<<endl;
     cout<<v.size()<<endl;
    v.push_back(3);
     cout<<v.capacity()<<endl;
      cout<<v.size()<<endl;
    v.push_back(5);
     cout<<v.capacity()<<endl;
      cout<<v.size()<<endl;
    v.push_back(9);
     cout<<v.capacity()<<endl;
 cout<<v.size()<<endl;
 cout<<v[0]<<" ";
cout<<v[1]<<" ";
cout<<v[2]<<" ";
cout<<v[3]<<" ";
}