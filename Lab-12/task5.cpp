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
        getline(cin >> ws, name);
        cout << "Enter Age: ";
        cin >> age;
    }

    void displayPersonDetails() {
        cout << "Name           : " << name << endl;
        cout << "Age            : " << age << endl;
    }
};

// Intermediate class: Staff (inherits from Person)
class Staff : public Person {
protected:
    string department;
    int experience;

public:
    void getStaffDetails() {
        getPersonDetails();
        cout << "Enter Department: ";
        getline(cin >> ws, department);
        cout << "Enter Experience (Years): ";
        cin >> experience;
    }

    void displayStaffDetails() {
        displayPersonDetails();
        cout << "Department     : " << department << endl;
        cout << "Experience     : " << experience << " years" << endl;
    }
};

// Derived class: Teaching (inherits from Staff)
class Teaching : public Staff {
private:
    int employeeId;
    double salary;

public:
    void getTeachingDetails() {
        getStaffDetails();
        cout << "Enter Employee ID: ";
        cin >> employeeId;
        cout << "Enter Salary: ";
        cin >> salary;
    }

    void displayTeachingInfo() {
        cout << "\n--- Teaching Staff Information ---" << endl;
        displayStaffDetails();
        cout << "Employee ID    : " << employeeId << endl;
        cout << "Monthly Salary : " << salary << endl;
        cout << "----------------------------------" << endl;
    }
};

// Derived class: Non-Teaching (inherits from Staff)
class NonTeaching : public Staff {
private:
    int employeeId;
    double salary;

public:
    void getNonTeachingDetails() {
        getStaffDetails();
        cout << "Enter Employee ID: ";
        cin >> employeeId;
        cout << "Enter Salary: ";
        cin >> salary;
    }

    void displayNonTeachingInfo() {
        cout << "\n--- Non-Teaching Staff Information ---" << endl;
        displayStaffDetails();
        cout << "Employee ID    : " << employeeId << endl;
        cout << "Monthly Salary : " << salary << endl;
        cout << "--------------------------------------" << endl;
    }
};

int main() {
    int choice;
    cout << "Select Staff Type (1 for Teaching, 2 for Non-Teaching): ";
    cin >> choice;

    if (choice == 1) {
        Teaching t;
        t.getTeachingDetails();
        t.displayTeachingInfo();
    } else if (choice == 2) {
        NonTeaching nt;
        nt.getNonTeachingDetails();
        nt.displayNonTeachingInfo();
    } else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
