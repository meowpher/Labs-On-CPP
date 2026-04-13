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
    friend Complex operator-(const Complex &c1, const Complex &c2);
};
Complex operator-(const Complex &c1, const Complex &c2) {
    Complex temp;
    temp.real = c1.real - c2.real;
    temp.imag = c1.imag - c2.imag;
    return temp;
}

int main() {
    Complex num1(15.5, 7.5), num2(5.0, 3.5), result;
    cout << "Number 1: ";
    num1.display();
    cout << "Number 2: ";
    num2.display();
    result = num1 - num2;
    cout << "\nDifference (Number 1 - Number 2): ";
    result.display();
    return 0;
}