#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string,int> m;
    pair<string,int> p1;
    p1.first="mrittick";
    p1.second=20;
    pair<string,int> p2;
    p2.first="john";
    p2.second=30;
    pair<string,int> p3;
    p3.first="sunny";
    p3.second=40;
    m.insert(p1);
    m.insert(p2);
    m.insert(p3);
    for(pair<string,int> p:m){ // or for(auto p:m)
        cout<<p.first<<" "<<p.second<<endl;
    }
}