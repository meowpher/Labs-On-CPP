// Recursive function to return the nth Fibonacci number
#include <iostream>
using namespace std;
int fibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int numberOfTerms, i = 0;
    cout << "Enter the number of terms for the Fibonacci series: ";
    cin >> numberOfTerms;
    cout << "\nFibonacci Series: ";
    while (i < numberOfTerms) {
        cout << fibonacci(i) << " ";
        i++;
    }
    cout << endl;
    return 0;
}