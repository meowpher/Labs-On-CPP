#include <iostream>

using namespace std;

// Function prototypes
void checkEvenOdd(int n);
void checkDivisibility(int n);
void checkPositiveNegative(int n);

void displayMenu() {
    cout << "\n======= MENU =======" << endl;
    cout << "1. Check Odd / Even" << endl;
    cout << "2. Check Divisibility by 3 and 5" << endl;
    cout << "3. Check Positive / Negative" << endl;
    cout << "4. Exit" << endl;
    cout << "====================" << endl;
    cout << "Enter your choice: ";
}

int main() {
    int choice, number;

    do {
        displayMenu();
        cin >> choice;

        if (choice >= 1 && choice <= 3) {
            cout << "Enter the number: ";
            cin >> number;
        }

        switch (choice) {
            case 1:
                checkEvenOdd(number);
                break;
            case 2:
                checkDivisibility(number);
                break;
            case 3:
                checkPositiveNegative(number);
                break;
            case 4:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}

/**
 * Function to check if number is even or odd.
 */
void checkEvenOdd(int n) {
    if (n % 2 == 0) {
        cout << n << " is an EVEN number." << endl;
    } else {
        cout << n << " is an ODD number." << endl;
    }
}

/**
 * Function to check if number is divisible by both 3 and 5.
 */
void checkDivisibility(int n) {
    if (n % 3 == 0 && n % 5 == 0) {
        cout << n << " is divisible by both 3 and 5." << endl;
    } else {
        cout << n << " is NOT divisible by both 3 and 5." << endl;
    }
}

/**
 * Function to check if number is positive, negative or zero.
 */
void checkPositiveNegative(int n) {
    if (n > 0) {
        cout << n << " is a POSITIVE number." << endl;
    } else if (n < 0) {
        cout << n << " is a NEGATIVE number." << endl;
    } else {
        cout << "The number is ZERO." << endl;
    }
}
