#include <iostream>
using namespace std;

class Complex {
    float real;
    float imag;
public:
    Complex(float r = 0, float i = 0) : real(r), imag(i) {}
    void display() const {
        cout << real << " + i" << imag << endl;
    }
    Complex operator-(const Complex &c) {
        Complex temp;
        temp.real = real - c.real;
        temp.imag = imag - c.imag;
        return temp;
    }
};

int main() {
    Complex c1(10.5, 5.5), c2(2.5, 3.0), c3;
    cout << "Complex Number 1: ";
    c1.display();
    cout << "Complex Number 2: ";
    c2.display();
    c3 = c1 - c2;
    cout << "\nResult after Binary Minus (c1 - c2): ";
    c3.display();
    return 0;
}
