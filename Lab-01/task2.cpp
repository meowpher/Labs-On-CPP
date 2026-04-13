#include <iostream>

using namespace std;

int main() {
    int a, b, temp;

    cout << "Enter first number (a): ";
    cin >> a;
    cout << "Enter second number (b): ";
    cin >> b;

    cout << "\nBefore Swapping:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    // Swapping logic using a third variable
    temp = a;
    a = b;
    b = temp;

    cout << "\nAfter Swapping:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}
