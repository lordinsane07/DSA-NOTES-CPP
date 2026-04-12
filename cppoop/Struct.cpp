// # include <bits/stdc++.h>
// using namespace std;
// struct Employee
// {
//     int id;
//     char favourite;
//     int salary;
// };
// int main()
// {
//     struct Employee Aditya;
//     Aditya.id = 1;
//     Aditya.favourite = 'C';
//     Aditya.salary = 2888888;
//     cout<<Aditya.id<<" "<<Aditya.favourite<<" "<<Aditya.salary<<endl;
// }





// # include <bits/stdc++.h>
// using namespace std;
// typedef struct Employee
// {
//     int id;
//     char favourite;
//     int salary;
// } emp;
// int main()
// {
//     emp Aditya;
//     Aditya.id = 1;
//     Aditya.favourite = 'C';
//     Aditya.salary = 2888888;
//     cout<<Aditya.id<<" "<<Aditya.favourite<<" "<<Aditya.salary<<endl;
// }




// Union in cpp ---------------------------------------------------

// -> Union is used to assign a share address in cpp

// # include <bits/stdc++.h>
// using namespace std;
// union Money
// {
//     int rupee;
//     float paisa;
//     char c;
// };
// int main()
// {
//     Money m;
//     m.paisa = 9.0;
//     m.c = 'A';

//     cout<<m.paisa<<endl;
// }




// Enum in cpp -------------------------------------------
# include <bits/stdc++.h>
using namespace std;
int main()
{
    enum Meal{Breakfast,Lunch,Dinner};
    cout<<Breakfast<<" "<<Lunch<<" "<<Dinner;
}