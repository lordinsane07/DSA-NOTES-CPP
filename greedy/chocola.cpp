#include<iostream>
#include<algorithm>
#include<climits>
#include<vector>
#define ll long long int
using namespace std;
bool cmp(int x,int y){
    return x>y;
}
ll mincosttobrick(int n,int m,vector<ll>& ver,vector<ll>& hori){
    sort(ver.begin(),ver.end(),cmp);
    sort(hori.begin(),hori.end(),cmp);
    int hr=1;
    int vr=1;
    int h=0,v=0;
    ll ans=0;
    while(h<hori.size() and v<ver.size()){
        if(ver[v]>hori[h]){
            ans+=ver[v]*vr;
            hr++;
            v++;
        }
        else{
            ans+=hori[h]*hr;
            vr++;
            h++;
        }
    }
    while(h<hori.size()){
ans+=hori[h]*hr;
            vr++;
            h++;
    }
    while(v<ver.size()){
         ans+=ver[v]*vr;
            hr++;
            v++;
    }
    return ans;
}
int main(){
    int n,m;
    cin>>m>>n;
    vector<ll> horizontal,vertical;
    for(int i=0;i<m-1;i++){
        int x;
        cin>>x;
        vertical.push_back(x);
    } 
     for(int i=0;i<n-1;i++){
        int x;
        cin>>x;
        horizontal.push_back(x);
    } 
    cout<<mincosttobrick(n,m,horizontal,vertical);
}