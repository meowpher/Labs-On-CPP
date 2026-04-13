//Write a CPP program to overload pre-decrement and post-decrement operator.
#include <iostream>
using namespace std;

class Counter {
private:
    int count;
public:
    Counter(int c = 0) : count(c) {}
    Counter& operator--() {
        --count;
        return *this;
    }
    Counter operator--(int) {
        Counter temp = *this;
        count--;
        return temp;
    }
    void display() const {
        cout << "Count: " << count << endl;
    }
};

int main() {
    Counter c1(10);
    cout << "Initial count:" << endl;
    c1.display();
    cout << "\nApplying prefix decrement (--c1):" << endl;
    --c1;
    c1.display();
    cout << "\nApplying postfix decrement (c1--):" << endl;
    c1--;
    c1.display();
    cout << "\nUsing prefix in expression: " << endl;
    Counter c2 = --c1;
    cout << "c1 (after prefix): "; c1.display();
    cout << "c2 (assigned from prefix): "; c2.display();
    cout << "\nUsing postfix in expression: " << endl;
    Counter c3 = c1--;
    cout << "c1 (after postfix): "; c1.display();
    cout << "c3 (assigned from postfix): "; c3.display();
    return 0;
}