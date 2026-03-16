1class Solution {
2public:
3//    int area(vector<int>& heights) {
4//         int n = heights.size();
5//         stack<int> st;
6//         int maxArea = 0;
7
8//         for (int i = 0; i <= n; i++) {
9//             int h = (i == n) ? 0 : heights[i];
10//             while (!st.empty() && h < heights[st.top()]) {
11//                 int height = heights[st.top()];
12//                 st.pop();
13//                 int width = st.empty() ? i : i - st.top() - 1;
14//                 maxArea = max(maxArea, height * width);
15//             }
16//             st.push(i);
17//         }
18//         return maxArea;
19//     }
20int largestRectangleArea(vector<int> &heights) {
21     int n=heights.size();
22     stack<int> st;
23     int largestArea=0;
24     int area=1;
25     int pse=0,nse=0;
26     for(int i=0;i<n;i++){
27        while(!st.empty() && heights[st.top()]>=heights[i]){
28            int ind=st.top();
29            st.pop();
30            pse=st.empty()?-1:st.top();
31            nse=i;
32            area=heights[ind]*(nse-pse-1);
33            largestArea=max(largestArea,area);
34        }
35        st.push(i);
36     }
37     while(!st.empty()){
38        nse=n;
39            int ind=st.top();
40            st.pop();
41            pse=st.empty()?-1:st.top();
42            area=heights[ind]*(nse-pse-1);
43            largestArea=max(largestArea,area);
44        }
45       return largestArea;
46}
47    int maximalRectangle(vector<vector<char>> &matrix){
48           int n=matrix.size();
49        int m=matrix[0].size();
50        int maxarea=0;
51        vector<int> heights(m,0);
52        for(int i=0;i<n;i++){
53            for(int j=0;j<m;j++){
54                if(matrix[i][j]=='0') heights[j]=0;
55                else heights[j]++;
56            }
57        maxarea=max(maxarea,largestRectangleArea(heights));
58        }
59        return maxarea;
60    }
61 
62        
63        // int m = matrix.size();
64        // if (m == 0) return 0;
65        // int n = matrix[0].size();
66
67        // vector<int> hist(n, 0);
68        // int ans = 0;
69
70        // for (int i = 0; i < m; i++) {
71        //     for (int j = 0; j < n; j++) {
72        //         if (matrix[i][j] == '1')
73        //             hist[j]++;
74        //         else
75        //             hist[j] = 0;
76        //     }
77        //     ans = max(ans, area(hist));
78        // }
79        // return ans;
80    
81};