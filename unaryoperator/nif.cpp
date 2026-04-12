#include<iostream>
using namespace std;
class Sample{
    int x;
    int y;
    public:
    void getdata(int a,int b);
    void display();
    void operator -();
};
void Sample::getdata(int a,int b)
{
        x=a;
        y=b;
    }
    void Sample::display(){
        cout<<x<<endl;
        cout<<y<<endl;
    }
void Sample::operator -(){
    x=-x;
    y=-y;
}
int main(){
    Sample s;
    s.getdata(4,-9);
    cout<<"before operator function"<<endl;
    s.display();
    cout<<"after operator function"<<endl;
    -s;
    s.display();
}