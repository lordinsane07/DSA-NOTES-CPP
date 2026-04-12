#include<iostream>
using namespace std;
class Employee{
    public:
    int id;
    float salary;
    Employee(int inp){
        id = inp;
        salary=34.0;
    }
    Employee(){}
};

class programmer:public Employee{
    public:
     int language=9;
    programmer(int inpid){
        id=inpid;
    }
    void getdata(){
        cout<<"id is "<<id<<endl;
    }
};
int main(){
    Employee harry(1),rohan(2);
    cout<<harry.salary<<endl;
    cout<<rohan.salary<<endl;
    programmer skillf(10);
    cout<<skillf.language<<endl;
    cout<<skillf.id<<endl;
    skillf.getdata();
}