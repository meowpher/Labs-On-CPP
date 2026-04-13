#include <iostream>
#include <string>

using namespace std;

// Base class: Person
class Person {
protected:
    string name;
    int age;

public:
    void getPersonDetails() {
        cout << "Enter Name: ";
        getline(cin >> ws, name); // Using ws to consume any leading whitespace
        cout << "Enter Age: ";
        cin >> age;
    }

    void displayPersonDetails() {
        cout << "Name           : " << name << endl;
        cout << "Age            : " << age << endl;
    }
};

// Derived class: Employee (from Person)
class Employee : public Person {
protected:
    int employeeId;
    double salary;

public:
    void getEmployeeDetails() {
        getPersonDetails();
        cout << "Enter Employee ID: ";
        cin >> employeeId;
        cout << "Enter Salary: ";
        cin >> salary;
    }

    void displayEmployeeDetails() {
        displayPersonDetails();
        cout << "Employee ID    : " << employeeId << endl;
        cout << "Salary         : " << salary << endl;
    }
};

// Further derived class: Department (from Employee)
class Department : public Employee {
private:
    string deptName;
    int numEmployees;

public:
    void getDepartmentDetails() {
        getEmployeeDetails();
        cout << "Enter Department Name: ";
        getline(cin >> ws, deptName);
        cout << "Enter Number of Employees in Dept: ";
        cin >> numEmployees;
    }

    void displayAllDetails() {
        cout << "\n--- Department and Employee Information ---" << endl;
        displayEmployeeDetails();
        cout << "Department     : " << deptName << endl;
        cout << "Total Dept Size: " << numEmployees << endl;
        cout << "-------------------------------------------" << endl;
    }
};

int main() {
    Department deptObj;

    cout << "Enter Details for the Department Head / Employee:" << endl;
    deptObj.getDepartmentDetails();
    
    deptObj.displayAllDetails();

    return 0;
}
