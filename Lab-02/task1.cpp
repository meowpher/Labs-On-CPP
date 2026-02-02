#include <iostream>
using namespace std;

int main() {
    int n, sum = 0, digit;
    cout << "Enter a positive integer: ";
    cin >> n;
    int temp = n;
    while (n > 0) {
        digit = n % 10;
        sum = sum + digit; 
        n = n / 10;       
    }
    cout << "The sum of digits of " << temp << " is: " << sum << endl;
    return 0;
}