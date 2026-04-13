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
    MyString operator+(const MyString &s) {
        MyString temp;
        temp.str = str + s.str;
        return temp;
    }
};

int main() {
    MyString s1("Hello, "), s2("World!"), s3;
    cout << "String 1: ";
    s1.display();
    cout << "String 2: ";
    s2.display();
    s3 = s1 + s2;
    cout << "\nConcatenated String (s1 + s2): ";
    s3.display();
    return 0;
}