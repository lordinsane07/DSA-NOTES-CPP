class Solution {
public:
    bool judgeCircle(string moves) {
        int x=0,y=0;
        for(char move:moves){
            if(move=='U') x++;
            else if(move=='D') x--;
            else if(move=='L') y++;
            else y--;
        }
        if(y==0 && x==0) return true;
        return false;
    }
};