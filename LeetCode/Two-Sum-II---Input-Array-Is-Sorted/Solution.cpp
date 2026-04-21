1class Solution {
2public:
3    vector<int> twoSum(vector<int>& numbers, int target) {
4        int left=0,right=numbers.size()-1;
5        while(left<right){
6            int sum=numbers[left]+numbers[right];
7            if(sum==target) return {left+1,right+1};
8            else if(sum>target) right--;
9            else left++;
10        }
11        return {-1,-1};
12    }
13};