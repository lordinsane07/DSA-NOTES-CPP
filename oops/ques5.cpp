#include<iostream>
using namespace std;

class AGE {
    int age;  
public:
    int id;
    void setage(int age_p) {
        age = age_p;  
    }
    void getage() {
        if (age > 18)
            cout << "Success" << endl;
        else 
            cout << "NOT ELIGIBLE" << endl;
    }
};

int main() {
    int age_p;
    cin >> age_p;  
    AGE a;  
    a.setage(age_p); 
    a.getage();  
    
}
