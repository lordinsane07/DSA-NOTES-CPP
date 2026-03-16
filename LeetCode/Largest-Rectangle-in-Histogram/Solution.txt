1class Solution {
2public:
3int largestRectangleArea(vector<int> &heights) {
4     int n=heights.size();
5     stack<int> st;
6     int largestArea=0;
7     int area=1;
8     int pse=0,nse=0;
9     for(int i=0;i<n;i++){
10        while(!st.empty() && heights[st.top()]>=heights[i]){
11            int ind=st.top();
12            st.pop();
13            pse=st.empty()?-1:st.top();
14            nse=i;
15            area=heights[ind]*(nse-pse-1);
16            largestArea=max(largestArea,area);
17        }
18        st.push(i);
19     }
20     while(!st.empty()){
21        nse=n;
22            int ind=st.top();
23            st.pop();
24            pse=st.empty()?-1:st.top();
25            area=heights[ind]*(nse-pse-1);
26            largestArea=max(largestArea,area);
27        }
28       return largestArea;
29}
30};