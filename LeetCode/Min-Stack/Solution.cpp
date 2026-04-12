1
2class MinStack {
3public:
4stack<long long> st;
5long long mini;
6    MinStack() {
7   
8    }
9
10  void push(int val) {
11    long long value=val;
12    if(st.empty()){
13        mini=value;
14        st.push(value);
15        return;
16    }
17    if(value>mini) st.push(value);
18    else{
19        st.push(2*value-mini);
20        mini=value;
21    }
22  }
23
24  void pop() {
25    if(st.empty()) return;
26   long long n=st.top();
27    st.pop();
28    if(n<mini) mini=2*mini-n;
29  }
30
31  int top() {
32  if(st.empty()) return -1;
33  long long n=st.top();
34  if(n>mini) return n;
35        return (int)mini;
36  }
37
38
39  int getMin() {
40  return (int)mini;
41  }
42};