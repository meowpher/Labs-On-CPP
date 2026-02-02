#include <iostream>
using namespace std;

int main() {
    int n, originalNum, remainder, sum = 0;
    cout << "Enter a positive integer: ";
    cin >> n;
    originalNum = n;
    while (n > 0) {
        remainder = n % 10;             
        sum = sum + (remainder * remainder * remainder); 
        n = n / 10;             
    }
    if (originalNum == sum) {
        cout << originalNum << " is an Armstrong number." << endl;
    } else {
        cout << originalNum << " is NOT an Armstrong number." << endl;
    }
    return 0;
}