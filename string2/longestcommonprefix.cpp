#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	vector<string> v;
    v.push_back("flow");
    v.push_back("flower");

    v.push_back("flight");
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    cout<<endl;
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    cout<<endl;
    string prefix=v[0];
    for(int i=1;i<v.size();i++){
        while(v[i].find(prefix)!=0){
            prefix=prefix.substr(0,prefix.size()-1);
        }
    }
    cout<<prefix<<endl;
    return 0;
}