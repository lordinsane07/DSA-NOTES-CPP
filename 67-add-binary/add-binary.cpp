class Solution {
public:
    string addBinary(string x, string y) {
       int m=x.length()-1,n=y.length()-1;
       int sum=0,carry=0;
       string result="";
       while(m>=0 || n>=0){
        sum=carry;
        if(m>=0){
            sum+=x[m]-'0';
            m--;
        }
        if(n>=0){
            sum+=y[n]-'0';
            n--;
        }
        result.push_back( ( sum%2==0 ) ? '0' : '1' );
        carry=(sum>1)?1:0;

       }
       if(carry){
        result.push_back('1');
       }
       reverse(result.begin(),result.end());
       return result;
    }
};