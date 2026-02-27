1class Solution {
2public:
3    int numSteps(string s) {
4   int steps=0,carry=0;
5   for(int i=s.length()-1;i>=1;i--){
6    int bit=s[i] & 1;
7    steps+=1+(bit ^ carry);
8    carry |=bit;
9   }
10   return steps+carry;
11
12    //     int n=s.length();
13    //    __int128 sum=0;
14    //     int k=0;
15    //     for(int i=0;i<n;i++){
16    //             if(s[i]=='1'){
17    //                 sum+=((__int128)1 <<k);
18    //             }
19    //             k++;
20    //     }
21    //      long long count=0;
22    //     while(sum!=0){
23    //         if(sum%2==1) {sum+=1;}
24    //         else {sum/=2;}
25    //       count++;
26    //     }
27    //     return count;
28    }
29};