#include <iostream>
using namespace std;
class Complex {
    float r, i;
public:
    Complex(float r=0, float i=0): r(r), i(i) {}
    friend Complex addComplex(const Complex& a, const Complex& b) { return Complex(a.r+b.r, a.i+b.i); }
    void display() const { cout << r << (i>=0?"+":"") << i << "i\n"; }
};
int main() {
    float r1, i1, r2, i2; cin >> r1 >> i1 >> r2 >> i2;
    addComplex(Complex(r1, i1), Complex(r2, i2)).display();
}