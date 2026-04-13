#include <iostream>

using namespace std;

/**
 * Function to check the type of character.
 * @param ch The character to check.
 */
void checkCharacter(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        cout << "The character '" << ch << "' is an Uppercase letter." << endl;
    } else if (ch >= 'a' && ch <= 'z') {
        cout << "The character '" << ch << "' is a Lowercase letter." << endl;
    } else if (ch >= '0' && ch <= '9') {
        cout << "The character '" << ch << "' is a Digit." << endl;
    } else {
        cout << "The character '" << ch << "' is a Special Symbol." << endl;
    }
}

int main() {
    char inputChar;

    cout << "Enter a character: ";
    cin >> inputChar;

    // Call the function to check character type
    checkCharacter(inputChar);

    return 0;
}
