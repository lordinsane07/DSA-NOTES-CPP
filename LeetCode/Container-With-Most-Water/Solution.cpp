1class Solution {
2public:
3    int maxArea(vector<int>& height) {
4        int n=height.size();
5        int i=0,j=n-1;
6        int maxlen=INT_MIN;
7        while(i<j){
8            int width=j-i;
9            int heights=min(height[i],height[j]);
10            maxlen=max(maxlen,width*heights);
11            if(height[i]<height[j]) i++;
12            else j--;
13        }
14        return maxlen;
15    }
16};