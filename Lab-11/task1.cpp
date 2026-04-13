//Write a CPP program to overload binary * operator using friend function.
#include <iostream>
using namespace std;

class MyClass {
    int x;
public:
    MyClass(int val = 0) : x(val) {}
    void display() const {
        cout << "x = " << x << endl;
    }
    friend MyClass operator*(const MyClass &c1, const MyClass &c2);
};

MyClass operator*(const MyClass &c1, const MyClass &c2) {
    return MyClass(c1.x * c2.x);
}

int main() {
    MyClass c1(2);
    MyClass c2(3);
    MyClass c3 = c1 * c2;
    c3.display();
    return 0;
}   