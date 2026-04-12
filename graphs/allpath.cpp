#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
using namespace std;
vector<list<int> > graph;
unordered_set<int> visited;
vector<vector<int> > result;
int v;
void add_edge(int src,int dest,bool bi_dir=true){
    graph[src].push_back(dest);
    if(bi_dir){
        graph[dest].push_back(src);
    }
}
void dfs(int curr,int end,vector<int> &path){
    if(curr==end) {
        path.push_back(curr);
        result.push_back(path);
        path.pop_back();
        return;
    }
    visited.insert(curr);//mark visited
    path.push_back(curr);
    for(auto neighbour:graph[curr]){
        if(not visited.count(neighbour)){
            dfs(neighbour,end,path);
        }
    }
    path.pop_back();
    visited.erase(curr);
    return;
}
void allpath(int start,int end){
    vector<int> v;
    dfs(start,end,v);
}
int main(){
    cin>>v;
    graph.resize(v,list<int> ());
    int e;
    cin>>e;
    visited.clear();
    while (e--)
    {
        int s,d;
        cin>>s>>d;
        add_edge(s,d);
    }
    int x,y;
    cin>>x>>y;
    allpath(x,y);
    cout<<result.size();
    for(auto path:result){
        for(auto node:path){
            cout<<node<<" ";
            }
            cout<<endl;
    }
    //display();
    return 0;
}