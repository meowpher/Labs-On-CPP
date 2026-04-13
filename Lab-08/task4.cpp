#include <iostream>
using namespace std;
class Number {
    int num;
public:
    Number(int n=0): num(n) {}
    friend Number findMin(const Number& a, const Number& b) { return a.num < b.num ? a : b; }
    void display() const { cout << num << "\n"; }
};
int main() {
    int v1, v2; cin >> v1 >> v2;
    findMin(Number(v1), Number(v2)).display();
}
