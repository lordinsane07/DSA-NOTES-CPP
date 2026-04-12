// You are using GCC
#include<queue>
void add_edge(int adj[][100], int src, int dest)
{
    //Type your code
    adj[src][dest]=1;
    adj[dest][src]=1;
}

bool BFS(int adj[][100], int src, int dest, int v, int pred[], int dist[])
{
    //Type your code
    queue<int> q;
    for(int i=0;i<v;i++){
        dist[i]=-1;
        pred[i]=-1;
    }
    dist[src]=0;
    q.push(src);
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(int i=0;i<v;i++){
            if(adj[u][i]==1 && dist[i]==-1){
                dist[i]=dist[u]+1;
                pred[i]=u;
                q.push(i);
                if(i==dest) return true;
            }
        }
    }
    return false;
}

void printShortestDistance(int adj[][100], int s, int dest, int v, int pred[], int dist[])
{
 if(dist[dest]==-1){
     cout<<"No path exists from "<<s<<" to"<<dest<<endl;
     return;
 }
 cout<<"Shortest path length is: "<<dist[dest]<<endl;
 vector<int> path;
 cout<<"Path is: ";
 int temp=dest;
 while(temp!=-1){
    path.push_back(temp);
     temp=pred[temp];
 }
 for(int i=path.size()-1;i>=0;i--){
     cout<<path[i]<<" ";
 }
 cout<<endl;
    //Type your code
}