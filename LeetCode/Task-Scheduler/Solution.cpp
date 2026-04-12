1class Solution {
2public:
3    int leastInterval(vector<char>& tasks, int n) {
4        unordered_map<int,int> mpp;
5        for(char c:tasks){
6            mpp[c-'A']++;
7        }
8        int time=0;
9        priority_queue<int> pq;
10        for(int i=0;i<26;i++){
11          if(mpp[i]>0)  pq.push(mpp[i]);
12        }
13        while(!pq.empty()){
14            vector<int> temp;
15            for(int i=1;i<=n+1;i++){
16                if(!pq.empty()){
17                int freq=pq.top();
18                pq.pop();
19                freq--;
20                temp.push_back(freq);
21                }
22            }
23            for(int& f:temp){
24                if(f>0) pq.push(f);
25            }
26            if(pq.empty()){
27                time+=temp.size();
28            }
29            else time+=(n+1);
30        }
31        return time;
32    }
33};