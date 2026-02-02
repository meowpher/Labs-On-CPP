#include <iostream>
using namespace std;

int main() {
    int n, reversedNumber = 0, remainder, originalNumber;
    cout << "Enter an integer: ";
    cin >> n;
    originalNumber = n;
    while (n > 0) {
        remainder = n % 10;                 
        reversedNumber = (reversedNumber * 10) + remainder; 
        n = n / 10;                            
    }
    if (originalNumber == reversedNumber)
        cout << originalNumber << " is a palindrome." << endl;
    else
        cout << originalNumber << " is NOT a palindrome." << endl;
    return 0;
}