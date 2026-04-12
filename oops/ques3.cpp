#include<iostream>
using namespace std;

class Cricketer {
    public:
    string name;  // Changed from 'char' to 'string'
    int age;
    int numofmatch;
    int avgscore;
};

int main() {
    Cricketer virat;
    virat.name = "Virat";
    virat.age = 30;
    virat.numofmatch = 100;
    virat.avgscore = 50;

    Cricketer dhoni;
    dhoni.name = "Dhoni";
    dhoni.age = 40;
    dhoni.numofmatch = 109;
    dhoni.avgscore = 57;
 for(int i = 0; i < 2; i++) {//dynmic object allocation
    Cricketer *cricketer=new Cricketer;
    cricketer.name=  ;
    cin>>
    cricketers.add(*cricketer);
 }
    Cricketer cricketers[2] = {virat, dhoni};

    for(int i = 0; i < 2; i++) {
        cout << "Name: " << cricketers[i].name << endl;
        cout << "Age: " << cricketers[i].age << endl;
        cout << "Number of Matches: " << cricketers[i].numofmatch << endl;
        cout << "Average Score: " << cricketers[i].avgscore << endl;
        cout << "-----------------" << endl;
    }

    return 0;
}
