class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n=arr.size();
        map<int,int> mpp;
        vector<int> temp=arr;
        sort(temp.begin(),temp.end());
        int r=1;
        for(int i=0;i<n;i++){
            if(mpp.find(temp[i])==mpp.end()){
                mpp[temp[i]]=r;
                r++;
            }
        }
        for(int i=0;i<n;i++){
            arr[i]=mpp[arr[i]];
        }
        return arr;
    }
};