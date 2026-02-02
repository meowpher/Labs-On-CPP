#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int choice;
    double num, base, exponent;

    do {
        cout << "\n---------------- MENU ----------------" << endl;
        cout << "1. Find Square Root of a number" << endl;
        cout << "2. Find Ceil value of a number" << endl;
        cout << "3. Find Rounded value of a number" << endl;
        cout << "4. Evaluate a^b (Power) operation" << endl;
        cout << "5. Exit" << endl;
        cout << "--------------------------------------" << endl;
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        switch (choice) {
            case 1: // Square Root
                cout << "Enter a number: ";
                cin >> num;
                if (num < 0) {
                    cout << "Error: Cannot calculate square root of a negative number." << endl;
                } else {
                    cout << "Square Root of " << num << " is: " << sqrt(num) << endl;
                }
                break;

            case 2: // Ceil
                cout << "Enter a number: ";
                cin >> num;
                cout << "Ceil value of " << num << " is: " << ceil(num) << endl;
                break;

            case 3: // Round
                cout << "Enter a number: ";
                cin >> num;
                cout << "Rounded value of " << num << " is: " << round(num) << endl;
                break;

            case 4: // Power
                cout << "Enter base (a): ";
                cin >> base;
                cout << "Enter exponent (b): ";
                cin >> exponent;
                cout << base << "^" << exponent << " is: " << pow(base, exponent) << endl;
                break;

            case 5: // Exit
                cout << "Exiting the program. Goodbye!" << endl;
                break;

            default:
                cout << "Invalid choice! Please enter a number between 1 and 5." << endl;
        }
    } while (choice != 5);
    return 0;
}