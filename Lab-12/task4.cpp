#include <iostream>
#include <string>

using namespace std;

// Base class: Student
class Student {
protected:
    string name;
    int rollNumber;

public:
    void getStudentDetails() {
        cout << "Enter Name: ";
        getline(cin >> ws, name);
        cout << "Enter Roll Number: ";
        cin >> rollNumber;
    }

    void displayStudentDetails() {
        cout << "Name           : " << name << endl;
        cout << "Roll Number    : " << rollNumber << endl;
    }
};

// Derived class for Science stream
class Science : public Student {
private:
    float physicsMarks;
    float chemistryMarks;

public:
    void getScienceMarks() {
        getStudentDetails();
        cout << "Enter Physics Marks: ";
        cin >> physicsMarks;
        cout << "Enter Chemistry Marks: ";
        cin >> chemistryMarks;
    }

    void displayResult() {
        cout << "\n--- Science Stream Result ---" << endl;
        displayStudentDetails();
        cout << "Physics Marks  : " << physicsMarks << endl;
        cout << "Chemistry Marks: " << chemistryMarks << endl;
        cout << "Average        : " << (physicsMarks + chemistryMarks) / 2 << endl;
        cout << "-----------------------------" << endl;
    }
};

// Derived class for Commerce stream
class Commerce : public Student {
private:
    float accountsMarks;
    float businessCommMarks;

public:
    void getCommerceMarks() {
        getStudentDetails();
        cout << "Enter Accounts Marks: ";
        cin >> accountsMarks;
        cout << "Enter Business Communication Marks: ";
        cin >> businessCommMarks;
    }

    void displayResult() {
        cout << "\n--- Commerce Stream Result ---" << endl;
        displayStudentDetails();
        cout << "Accounts Marks         : " << accountsMarks << endl;
        cout << "Business Comm. Marks   : " << businessCommMarks << endl;
        cout << "Average                : " << (accountsMarks + businessCommMarks) / 2 << endl;
        cout << "------------------------------" << endl;
    }
};

int main() {
    int choice;
    cout << "Select Stream (1 for Science, 2 for Commerce): ";
    cin >> choice;

    if (choice == 1) {
        Science sci;
        sci.getScienceMarks();
        sci.displayResult();
    } else if (choice == 2) {
        Commerce comm;
        comm.getCommerceMarks();
        comm.displayResult();
    } else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
