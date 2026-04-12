1class Solution {
2public:
3    bool canThreePartsEqualSum(vector<int>& arr) {
4        int n=arr.size();
5        int sum=0;
6        int target=0;
7        for(int i=0;i<n;i++){
8                target+=arr[i];
9        }
10        if(target%3!=0) return false;
11        int count=0;
12        for(int i=0;i<n;i++){
13                sum+=arr[i];
14                if(sum==target/3){
15                    sum=0;
16                    count++;
17                }
18                
19        } 
20        return (count>=3)?true:false;
21    }
22};