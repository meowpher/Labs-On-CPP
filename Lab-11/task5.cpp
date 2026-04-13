//Write a CPP program to create employee class with employee name, designation, department, age and salary. Accept records of two employees and display the record of younger employee using operator overloading concept.
#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    string designation;
    string department;
    int age;
    float salary;
public:
    void inputData() {
        cout << "Enter Name: ";
        getline(cin >> ws, name);
        cout << "Enter Designation: ";
        getline(cin, designation);
        cout << "Enter Department: ";
        getline(cin, department);
        cout << "Enter Age: ";
        cin >> age;
        cout << "Enter Salary: ";
        cin >> salary;
    }
    bool operator<(const Employee& other) const {
        return this->age < other.age;
    }
    void display() const {
        cout << "Name        : " << name << endl;
        cout << "Designation : " << designation << endl;
        cout << "Department  : " << department << endl;
        cout << "Age         : " << age << " years" << endl;
        cout << "Salary      : " << salary << endl;
    }
};

int main() {
    Employee e1, e2;
    cout << "--- Input details for Employee 1 ---" << endl;
    e1.inputData();
    cout << "\n--- Input details for Employee 2 ---" << endl;
    e2.inputData();
    cout << "\n--- Record of Younger Employee ---" << endl;
    if (e1 < e2) {
        e1.display();
    } else {
        e2.display();
    }
    return 0;
}
