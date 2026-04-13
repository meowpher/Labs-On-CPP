#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Base class Employee
class Employee {
protected:
    string name;
    double basicSalary;

public:
    void getEmployeeDetails() {
        cout << "Enter Employee Name: ";
        getline(cin, name);
        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
    }

    void displayEmployeeDetails() {
        cout << "-----------------------------" << endl;
        cout << "Employee Name  : " << name << endl;
        cout << "Basic Salary   : " << fixed << setprecision(2) << basicSalary << endl;
    }
};

// Derived class Salary
class Salary : public Employee {
    double hra;
    double da;
    double totalSalary;

public:
    void calculateSalary() {
        hra = 0.20 * basicSalary; // 20% HRA
        da = 0.10 * basicSalary;  // 10% DA
        totalSalary = basicSalary + hra + da;
    }

    void displayTotalSalary() {
        displayEmployeeDetails();
        cout << "HRA (20%)      : " << hra << endl;
        cout << "DA (10%)       : " << da << endl;
        cout << "-----------------------------" << endl;
        cout << "Total Salary   : " << totalSalary << endl;
        cout << "-----------------------------" << endl;
    }
};

int main() {
    Salary emp;

    cout << "--- Employee Payroll System ---" << endl;
    emp.getEmployeeDetails();
    emp.calculateSalary();
    emp.displayTotalSalary();

    return 0;
}
