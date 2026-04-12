// You are using GCC
#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
bool dfs(){

}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> adj(n);
    for(int i=0;i<n;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
        }
        int start,end;
        cin>>start>>end;
        vector<bool> visited(n,false);
        if(dfs(start,end,visited,visited)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
}
/*
#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
bool dfs(int start,int end,vector<bool>& visited,vector<vector<int>>& adj){
    visited[start]=true;
    if(start==end) return true;
    for(int neighbour:adj[start]){
        if(!visited[neighbour]){
            if(dfs(neighbour,end,visited,adj)){
                return true;
        }
    }
    }
    return false;
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> adj(n);
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int start,end;
    cin>>start>>end;
    vector<bool> visited(n,false);
    if(dfs(start,end,visited,adj)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}*/
/*
#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
bool dfs(int start,int end, vector<vector<int>>& adj, vector<bool>& visited){
    visited[start]=true;
    if(start==end){
        return true;
    }
    for(int neighbour:adj[start]){
        if(!visited[neighbour]){
            if(dfs(neighbour,end,adj,visited)) return true;
        }
    }
    return false;
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> adj(n);
    for(int i=0;i<m;i++){
        int l,m;
        cin>>l>>m;
        adj[l].push_back(m);
        adj[m].push_back(l);
    }
    int start,end;
    cin>>start>>end;
    vector<bool> visited(n,false);
    if(dfs(start,end,adj,visited)){
        cout<<"There is a path from "<<start<<" to "<<end;
    }
    else{
        cout<<"There is no path from "<<start<<" to "<<end;
}
}*/