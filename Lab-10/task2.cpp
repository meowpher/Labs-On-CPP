#include <iostream>
using namespace std;

class Space {
    int x, y, z;
public:
    Space(int a = 0, int b = 0, int c = 0) {
        x = a;
        y = b;
        z = c;
    }
    void display() const {
        cout << "X: " << x << ", Y: " << y << ", Z: " << z << endl;
    }
    friend void operator-(Space &s);
};
void operator-(Space &s) {
    s.x = -s.x;
    s.y = -s.y;
    s.z = -s.z;
}

int main() {
    Space s1(10, -20, 30);
    cout << "Value before unary minus:" << endl;
    s1.display();
    -s1;
    cout << "\nValue after unary minus (using friend function):" << endl;
    s1.display();
    return 0;
}