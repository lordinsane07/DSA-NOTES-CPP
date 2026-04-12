#include<iostream>
using namespace std;
class accept{
    public:
    void add(int a,int b,int c=1){
        cout<<a+b+c<<endl;
    }
    void sub(int a,int b=12){
        cout<<a-b<<endl;
    }
};
int main(){
    accept d;
    d.add(10,20,30);
    d.sub(20,3);
}