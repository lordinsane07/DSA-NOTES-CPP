// # include <iostream>
// using namespace std;
// class Student
// {
//     public:
//     int id;
//     static int count;
//     void setdata()
//     {
//         cin>>count;
//     }
//     void getdata()
//     {
//         cout<<count++<<endl;
//     }
// };

// int Student :: count;

// int main()
// {
//     Student s;
//     s.setdata();
//     s.getdata();
//     s.getdata();
//     s.getdata();
// }




# include <bits/stdc++.h>
using namespace std;
class Student
{
    public:
    int id;
    static int count;
    void setdata()
    {
        
    }
    void getdata()
    {
        cout<<count++<<endl;
    }
    static int C()
    {
        cout<<count++<<endl;
    }
};

int Student :: count = 0;
int main()
{
    int n;
    cin>>n;
    Student :: C();
    Student :: C();
    Student s;
    s.getdata();
}