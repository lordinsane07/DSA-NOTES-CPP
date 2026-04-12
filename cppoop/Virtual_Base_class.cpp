/*

Student -> Test
Student -> sports
test -> result
sports  -> result

*/

# include <iostream>
using namespace std;
class Student
{
    protected:
    int roll_no;
    public:
    void set_number(int a)
    {
        roll_no = a;
    }

    void print()
    {
        cout<<"Roll no. is : "<<roll_no<<endl;
    }
};

class Test : virtual public Student
{
    protected:
    float maths,physics;
    public:
    void set_marks(float m1,float m2)
    {
        maths = m1;
        physics = m2;
    }

    void print_Test()
    {
        cout<<"Your's Maths marks is: "<<maths<<endl;
        cout<<" Your's Physics marks is : "<<physics<<endl;
    }

};

class Sports : virtual public Student
{
    protected:
    float score;
    public:
    void setscore(float s)
    {
        score = s;
    }

    void print_Sports()
    {
        cout<<"Your's pt score is: "<<score<<endl;
    }
};

class Result : public Test,public Sports
{
    private:
    float total;
    public:
    void display()
    {
        total = maths + physics + score;
        cout<<"Total Score is: "<<total<<endl;
        print_Sports();
        print_Test();
        print();
    }
};

int main()
{
    Result aditya;
    aditya.set_marks(78.7,99.9);
    aditya.set_number(900);
    aditya.setscore(10);
    aditya.display();
}