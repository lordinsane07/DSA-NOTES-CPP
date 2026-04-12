#include<iostream>
#include<string>
using namespace std;
class student{
    public:
    string name;
    int rno;
    float marks;    
    student(string name,int rno,float marks){
        this->name=name;
        this->marks=marks;
        this->rno=rno;
    }
};
void change(student* s){
    s->name="Harsh";
}
int main(){
   // student s("Mrittick Deb",76,92.4);
    //s.name="Mrittick Deb";
    //s.rno=123;
    //s.marks=85.5;
    student* s=new student("Raghav",76,92.6);
    //student* ptr=&s;
    //cout<<s.name<<" ";
    cout<<s->name<<" ";
    //(*ptr).rno=87;
   // ptr->name="Sanket";
   change(s);
    cout<<s->name<<" ";
}