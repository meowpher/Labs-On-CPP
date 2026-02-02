#include <iostream>
#include <cmath>
using namespace std;

    return (n * (n + 1)) / 2;
}
int compute(int a, int b) {
    return a * b;
}
double compute(double base, int exponent) {
    return pow(base, exponent);
}

int main() {
    int choice;
    int n, num1, num2, exp;
    double base;

    do {
        cout << "\n----------- MATH OPERATIONS -----------" << endl;
        cout << "1. Find a raised to b (Power)" << endl;
        cout << "2. Find Summation of first n integers" << endl;
        cout << "3. Find Multiplication of two numbers" << endl;
        cout << "4. Exit" << endl;
        cout << "---------------------------------------" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1: // Power
                cout << "Enter base (a): ";
                cin >> base;
                cout << "Enter exponent (b): ";
                cin >> exp;
                cout << "Result: " << compute(base, exp) << endl;
                break;

            case 2:
                cout << "Enter number (n): ";
                cin >> n;
                cout << "Summation of first " << n << " integers is: " << compute(n) << endl;
                break;

            case 3:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Multiplication Result: " << compute(num1, num2) << endl;
                break;

            case 4:
                cout << "Exiting..." << endl;
                break;

            default:
                cout << "Invalid choice! Please try again." << endl;
        }

    } while (choice != 4);

    return 0;
}