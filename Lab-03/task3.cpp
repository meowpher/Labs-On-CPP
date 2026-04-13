#include <iostream>
#include <iomanip>

using namespace std;

/**
 * Function to calculate Gross Salary.
 * Gross Salary = Basic Salary + HRA + DA + TA
 */
float gross_salary(float bs, float hra, float da, float ta) {
    return bs + hra + da + ta;
}

/**
 * Function to calculate and display Net Salary.
 * Net Salary = Gross Salary - PT - PF
 */
void net_salary(float gross_sal, float pt, float pf) {
    float net_sal = gross_sal - pt - pf;
    cout << "-----------------------------------" << endl;
    cout << fixed << setprecision(2);
    cout << "Gross Salary: " << gross_sal << endl;
    cout << "Net Salary:   " << net_sal << endl;
    cout << "-----------------------------------" << endl;
}

int main() {
    float bs, hra, da, ta, pt, pf;

    cout << "Enter Employee Salary Details:" << endl;
    cout << "Basic Salary: ";
    cin >> bs;
    cout << "HRA: ";
    cin >> hra;
    cout << "DA: ";
    cin >> da;
    cout << "TA: ";
    cin >> ta;
    cout << "PT (Professional Tax): ";
    cin >> pt;
    cout << "PF (Provident Fund): ";
    cin >> pf;

    // Calculate Gross Salary
    float gross = gross_salary(bs, hra, da, ta);

    // Calculate and Print Net Salary
    net_salary(gross, pt, pf);

    return 0;
}
