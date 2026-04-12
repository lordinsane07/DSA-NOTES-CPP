1class Solution {
2public:
3    bool isPossibleDivide(vector<int>& hand, int groupSize) {
4         int n=hand.size();
5        if(n%groupSize) return false;
6           map<int,int> mpp;
7            for(int x:hand){
8                mpp[x]++;
9            }   
10            while(!mpp.empty()){
11                    int currval=mpp.begin()->first;
12                    for(int i=0;i<groupSize;i++){
13                        if(mpp[currval+i]==0) return false;
14                        mpp[currval+i]--;
15                        if(mpp[currval+i]<1){
16                            mpp.erase(currval+i);
17                        }
18                    }
19            }
20            return true;
21    }
22};