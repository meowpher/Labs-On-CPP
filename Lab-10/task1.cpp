#include <iostream>
using namespace std;

class Space {
private:
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
    void operator-() {
        x = -x;
        y = -y;
        z = -z;
    }
};

int main() {
    Space s1(10, -20, 30);
    cout << "Before applying unary minus:" << endl;
    s1.display();
    -s1;
    cout << "\nAfter applying unary minus:" << endl;
    s1.display();
    return 0;
}