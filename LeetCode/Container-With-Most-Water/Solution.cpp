1class Solution {
2public:
3    int maxArea(vector<int>& height) {
4        int n=height.size();
5        int maxArea=0;
6        int i=0;
7        int j=n-1;
8        while(i<j){
9            int length=j-i;
10            int width=min(height[i],height[j]);
11            int area=length*width;
12            maxArea=max(maxArea,area);
13            if(height[i]<=height[j])
14            i++;
15            else
16            j--;
17        }
18        return maxArea;
19    }
20};