1class Solution {
2public:
3    bool judgeCircle(string moves) {
4        int x=0,y=0;
5        for(char move:moves){
6            if(move=='U') x++;
7            else if(move=='D') x--;
8            else if(move=='L') y++;
9            else y--;
10        }
11        if(y==0 && x==0) return true;
12        return false;
13    }
14};