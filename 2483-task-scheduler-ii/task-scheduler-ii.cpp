class Solution {
public:
    long long taskSchedulerII(vector<int>& tasks, int space) {
        unordered_map<long long,long long> last;
       long long day=0;
       for(int t:tasks){
        if(last.count(t)){
            day=max(day+1,last[t]+space+1);
        }
        else{
            day=day+1;
        }
        last[t]=day;
       }
       return day;
    }
};