//Write a CPP program to check whether two strings are same or not using overloading of == operator.
#include <iostream>
#include <string>
using namespace std;

class StringCompare {
private:
    string str;
public:
    StringCompare(string s) : str(s) {}
    bool operator==(const StringCompare& other) const {
        return this->str == other.str;
    }
    void display() const {
        cout << "\"" << str << "\"";
    }
};

int main() {
    string input1, input2;
    cout << "Enter first string: ";
    getline(cin, input1);
    cout << "Enter second string: ";
    getline(cin, input2);
    StringCompare s1(input1);
    StringCompare s2(input2);
    cout << "Comparing "; s1.display();
    cout << " with "; s2.display();
    cout << "..." << endl;
    if (s1 == s2) {
        cout << "The strings are SAME." << endl;
    } else {
        cout << "The strings are NOT same." << endl;
    }
    return 0;
}