#include <iostream>
#include <string>

using namespace std;

// Base class 1: Teacher
class Teacher {
protected:
    string subject;
    int teachingHours;

public:
    void getTeacherDetails() {
        cout << "Enter Subject: ";
        getline(cin >> ws, subject);
        cout << "Enter Teaching Hours: ";
        cin >> teachingHours;
    }

    void displayTeacherDetails() {
        cout << "Subject         : " << subject << endl;
        cout << "Teaching Hours  : " << teachingHours << " hrs/week" << endl;
    }
};

// Base class 2: Researcher
class Researcher {
protected:
    string researchArea;

public:
    void getResearcherDetails() {
        cout << "Enter Research Area: ";
        getline(cin >> ws, researchArea);
    }

    void displayResearcherDetails() {
        cout << "Research Area   : " << researchArea << endl;
    }
};

// Derived class: Professor (Multiple Inheritance)
class Professor : public Teacher, public Researcher {
public:
    void getFullProfile() {
        cout << "--- Enter Professor Profile Details ---" << endl;
        getTeacherDetails();
        getResearcherDetails();
    }

    void displayFullProfile() {
        cout << "\n--- Professor Profile ---" << endl;
        displayTeacherDetails();
        displayResearcherDetails();
        cout << "-------------------------" << endl;
    }
};

int main() {
    Professor prof;

    prof.getFullProfile();
    prof.displayFullProfile();

    return 0;
}
