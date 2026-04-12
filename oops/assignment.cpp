#include <iostream>
#include <string>
using namespace std;
class Student {
private:
    string name;
    int roll_number;
    int semesters;
    float* grades;
    int* credits;
    static int stdcount;
    float cgpa;

public:
    Student() : grades(nullptr), credits(nullptr), semesters(0), cgpa(0) {
        stdcount++;
    }
    static void displayStudentCount() {
        cout << "Total Students: " << stdcount << endl;
    }
    void inputdetails() {
        cout << "Enter Student Name: ";
        cin.ignore(); 
        getline(cin, name);

        cout << "Enter Roll Number: ";
        cin >> roll_number;

        cout << "Enter number of semesters: ";
        cin >> semesters;

        grades = new float[semesters];
        credits = new int[semesters];
        for (int i = 0; i < semesters; i++) {
            cout << "Enter grade for semester " << i + 1 << ": ";
            cin >> grades[i];
            cout << "Enter credit for semester " << i + 1 << ": ";
            cin >> credits[i];
        }
    }
    int sumcredit(int sem) {
        if (sem == 0)
            return 0;
        return credits[sem - 1] + sumcredit(sem - 1);
    }
    void calculateCGPA(int newsemester = 8) {
        if (semesters < newsemester) {
            newsemester = semesters;
        }
        float totalGradePoints = 0;
        int totalCredits = sumcredit(newsemester);
        for (int i = 0; i < newsemester; i++) {
            totalGradePoints += grades[i] * credits[i];
        }
        cgpa = totalGradePoints / totalCredits;
    }
    inline void displayDetails() {
        cout << "Name: " << name << ", Roll Number: " << roll_number << ", CGPA: " << cgpa << endl;
    }
    friend class PerformanceDetails;
    friend float comparecgpa(Student& s1, Student& s2);
};
int Student::stdcount = 0;
float comparecgpa(Student& s1, Student& s2) {
    return (s1.cgpa > s2.cgpa) ? s1.cgpa : s2.cgpa;
}
class PerformanceDetails {
public:
    void displayPerformance(const Student& s) {
        cout << "Detailed Performance for Student: " << s.name << endl;
        cout << "Roll Number: " << s.roll_number << endl;
        for (int i = 0; i < s.semesters; i++) {
            cout << "Semester " << i + 1 << " - Grade: " << s.grades[i] << ", Credits: " << s.credits[i] << endl;
        }
        cout << "CGPA: " << s.cgpa << endl;
    }
};
int main() {
    int numstu;
    cout << "Enter the number of students: ";
    cin >> numstu;
    Student* students = new Student[numstu];
    for (int i = 0; i < numstu; i++) {
        cout << "\nEnter details for student " << i + 1 << ":\n";
        students[i].inputdetails();
        students[i].calculateCGPA();
        students[i].displayDetails();
    }
    Student::displayStudentCount();
    if (numstu >= 2) {
        cout << "\nComparing CGPA of two students:\n";
        float higherCGPA = comparecgpa(students[0], students[1]);
        cout << "Higher CGPA: " << higherCGPA << endl;
    }
    PerformanceDetails performance;
    if (numstu >= 1) {
        performance.displayPerformance(students[0]);
    }
    delete[] students;
    return 0;
}
