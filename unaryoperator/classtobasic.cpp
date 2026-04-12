#include<iostream>
using namespace std;
class time{
    int hours;
    int minutes;
    public:

    time(int t){
        hours=t/60;
        minutes=t%60;
    }
    int add(){
        cout<<hours<<" hours "<<minutes<<" minutes"<<endl;
        int m;
        m=minutes+10;
        return m;
    }
};
int main(){
    int x=90;
    time t1(x);
    int j;
    j=t1.add();
    cout<<j;
    //t1.display();
}
