#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<sstream>
using namespace std;
int main(){
    string str="mrittick is    a math teacher";
    stringstream ss(str);
    string word;
    while(ss>>word){
        cout<<word<<endl;
}}