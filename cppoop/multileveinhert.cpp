#include<iostream>
using namespace std;
class student{
    protected:
    int rollno;
    public:
    void setrollno(int);
    void getrollno(void);
};
void student::setrollno(int r){
    rollno=r;
}
void student::getrollno(void){
    cout<<"Roll No is "<<rollno<<endl;
}
class exam:public student{
    protected:
    float maths;
    float physics;
    public:
    void setmarks(float,float);
    void getmarks(void);
};
void exam::setmarks(float m,float p){
    maths=m;
    physics=p;
}
void exam::getmarks(){
    cout<<"Maths Marks "<<maths<<endl;
    cout<<"phy"<<physics<<endl;
}
class result:public exam{
    float percentage;
    public:
    void display(){
        getrollno();
        getmarks();
        cout<<"per"<<(maths+physics)/2<<endl;
    }
};
int main(){
    result harry;
    harry.setrollno(420);
    harry.setmarks(30.0,393.0);
    harry.display();
}