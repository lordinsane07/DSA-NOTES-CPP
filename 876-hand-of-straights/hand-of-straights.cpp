class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int n=hand.size();
        if(n%groupSize) return false;
           map<int,int> mpp;
            for(int x:hand){
                mpp[x]++;
            }   
            while(!mpp.empty()){
                    int currval=mpp.begin()->first;
                    for(int i=0;i<groupSize;i++){
                        if(mpp[currval+i]==0) return false;
                        mpp[currval+i]--;
                        if(mpp[currval+i]<1){
                            mpp.erase(currval+i);
                        }
                    }
            }
            return true;
     }
};