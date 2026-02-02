#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    cout << "\nMultiplication Table for " << n << ":" << endl;
    cout << "---------------------------" << endl;
    for (int i = 1; i <= 10; ++i) {
        cout << n << " * " << i << " = " << (n * i) << endl;
    }
    return 0;
}