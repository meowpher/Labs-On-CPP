//Write a CPP program to create student class with rno, name, course and percentage. Create constructor to assign values to data members. Create two objects and display the record of student containing maximum percentage using overloading of > operator.
#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int rno;
    string name;
    string course;
    float percentage;
public:
    Student(int r, string n, string c, float p) {
        rno = r;
        name = n;
        course = c;
        percentage = p;
    }
    bool operator>(const Student& other) const {
        return this->percentage > other.percentage;
    }
    void display() const {
        cout << "Roll No: " << rno << endl;
        cout << "Name   : " << name << endl;
        cout << "Course : " << course << endl;
        cout << "Percent: " << percentage << "%" << endl;
    }
};

int main() {
    Student s1(101, "Ali", "BSCS", 85.5);
    Student s2(102, "Ahmed", "BSIT", 78.2);
    cout << "Details of Student 1:" << endl;
    s1.display();
    cout << "\nDetails of Student 2:" << endl;
    s2.display();
    cout << "\nStudent with maximum percentage:" << endl;
    if (s1 > s2) {
        s1.display();
    } else {
        s2.display();
    }
    return 0;
}
