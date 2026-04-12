#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
using namespace std;
vector<list<int> > graph;
unordered_set<int> visited;
int v;
void add_edge(int src,int dest,bool bi_dir=true){
    graph[src].push_back(dest);
    if(bi_dir){
        graph[dest].push_back(src);
    }
}
bool dfs(int curr,int end){
    if(curr==end) return true;
    visited.insert(curr);//mark visited
    for(auto neighbour:graph[curr]){
        if(not visited.count(neighbour)){
            bool result=dfs(neighbour,end);
            if(result) return true;
        }
    }
    return false;
}
bool anypath(int start,int end){
    return dfs(start,end);
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
        add_edge(s,d,false);
    }
    int x,y;
    cin>>x>>y;
    cout<<anypath(x,y)<<endl;
    //display();
    return 0;
}