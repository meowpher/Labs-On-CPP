#include <iostream>
#include <cmath>

using namespace std;

/**
 * Function to check if a number is prime.
 * @param n the number to check
 * @return true if prime, false otherwise
 */
bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    
    // Optimization: Check for 2 separately to reduce loop iterations
    if (n == 2) {
        return true;
    }
    if (n % 2 == 0) {
        return false;
    }

    // Check divisibility from 3 up to square root of n
    int limit = sqrt(n);
    for (int i = 3; i <= limit; i += 2) {
        if (n % i == 0) {
            return false;
        }
    }
    
    return true;
}

int main() {
    int num;

    cout << "Enter a positive integer: ";
    cin >> num;

    if (isPrime(num)) {
        cout << num << " is a Prime number." << endl;
    } else {
        cout << num << " is NOT a Prime number." << endl;
    }

    return 0;
}
