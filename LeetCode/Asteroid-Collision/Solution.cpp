1class Solution {
2public:
3    vector<int> asteroidCollision(vector<int>& asteroids) {
4       int n=asteroids.size();
5    vector<int> s;
6      for(int i=0;i<n;i++){
7            if(asteroids[i]>0) s.push_back(asteroids[i]);
8            else{
9                while(!s.empty() && s.back()>0 && s.back()<abs(asteroids[i])) s.pop_back();
10                if(!s.empty() && s.back()==abs(asteroids[i]))s.pop_back();
11                else if(s.empty() || s.back()<0) s.push_back(asteroids[i]);
12            }
13      }
14      return s; 
15    }
16};