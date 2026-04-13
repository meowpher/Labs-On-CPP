#include <iostream>
#include <string>
using namespace std;

class MyString {
    string str;
public:
    MyString(string s = "") : str(s) {}
    void display() const {
        cout << str << endl;
    }
    friend MyString operator+(const MyString &s1, const MyString &s2);
};
MyString operator+(const MyString &s1, const MyString &s2) {
    MyString temp;
    temp.str = s1.str + s2.str;
    return temp;
}

int main() {
    MyString str1("C++ is "), str2("Awesome!"), result;
    cout << "String 1: ";
    str1.display();
    cout << "String 2: ";
    str2.display();
    result = str1 + str2;
    cout << "\nCombined String: ";
    result.display();
    return 0;
}