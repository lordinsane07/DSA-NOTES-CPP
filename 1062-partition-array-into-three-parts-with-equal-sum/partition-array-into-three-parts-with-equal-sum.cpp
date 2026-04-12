class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int n=arr.size();
        int sum=0;
        int target=0;
        for(int i=0;i<n;i++){
                target+=arr[i];
        }
        if(target%3!=0) return false;
        int count=0;
        for(int i=0;i<n;i++){
                sum+=arr[i];
                if(sum==target/3){
                    sum=0;
                    count++;
                }
                
        } 
        return (count>=3)?true:false;
    }
};