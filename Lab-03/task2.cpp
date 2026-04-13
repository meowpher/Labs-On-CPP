#include <iostream>

using namespace std;

/**
 * Function to find the maximum of three integers.
 * @param a First integer
 * @param b Second integer
 * @param c Third integer
 * @return The largest of the three integers
 */
int maximum(int a, int b, int c) {
    int maxVal = a;

    if (b > maxVal) {
        maxVal = b;
    }
    if (c > maxVal) {
        maxVal = c;
    }

    return maxVal;
}

int main() {
    int num1, num2, num3;

    cout << "Enter three numbers: " << endl;
    cout << "Number 1: ";
    cin >> num1;
    cout << "Number 2: ";
    cin >> num2;
    cout << "Number 3: ";
    cin >> num3;

    // Call the maximum function
    int largest = maximum(num1, num2, num3);

    cout << "The largest number among " << num1 << ", " << num2 << ", and " << num3 << " is: " << largest << endl;

    return 0;
}
