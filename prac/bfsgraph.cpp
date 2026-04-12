// You are using GCC
#include<iostream>
#include<cstring>
#include<vector>
#include<queue>
using namespace std;
void bfs(int n, vector<vector<int>>& adj){
    vector<bool> visited(n,false);
    queue<int> q;
    visited[0]=true;
    q.push(0);
    while(!q.empty()){
        int node=q.front();
        q.pop();
        cout<<node<<" ";
        for(int neighbour:adj[node]){
            if(!visited[neighbour]){
                visited[neighbour]=true;
                q.push(neighbour);
            }
        }
    }
    cout<<endl;
}
int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> adj(n);
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }
    bfs(n,adj);
}
/*#include<iostream>
#include<vector>
#include<queue>
#include<cstring>
using namespace std;
void bfs(int v,const vector<vector<int>>& adj){
    vector<bool> visited(v,false);
    queue<int> q;
    visited[0]=true;
    q.push(0);
    while(!q.empty()){
        int node=q.front();
        q.pop();
        cout<<node<<" ";
        for(int neighbour:adj[node]){
            if(!visited[neighbour]){
                visited[neighbour]=true;
                q.push(neighbour);
            }
        }
    }
    cout<<endl;
    
}
int main(){
    int V,E;
    cin>>V>>E;
    vector<vector<int>> adj(V);
    for(int i=0;i<E;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        //adj[v].push_back(u);
    }
    bfs(V,adj);
}*/

