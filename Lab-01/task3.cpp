#include <iostream>

using namespace std;

int main() {
    int a, b;

    cout << "Enter first number (a): ";
    cin >> a;
    cout << "Enter second number (b): ";
    cin >> b;

    cout << "\nBefore Swapping:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    // Swapping logic without using a third variable
    a = a + b;
    b = a - b;
    a = a - b;

    cout << "\nAfter Swapping:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}
