#include<iostream>
using namespace std;
class Sample{
    int x;
    public:
    void get(int a){
        x=a;
    }
    void put(){
        cout<<x;
        }
        friend Sample operator *(Sample,Sample);    
};
Sample operator *(Sample s1,Sample s2){
    Sample s3;
    s3.x=s1.x*s2.x;
    return s3;
}
int main(){
    Sample obj1,obj2,obj3;
    obj1.get(5);
    obj2.get(8);
    cout<<"value after multiplicatin"<<endl;
    obj3=obj1*obj2;
    obj3.put();
}