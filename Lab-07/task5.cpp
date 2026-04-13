#include<iostream>
using namespace std;

class Counter {
    static int count; // static data member
public:
    Counter() { count++; }
    static int getCount() { return count; } // static member function
};

// initialize static data member
int Counter::count = 0;

int main() {
    Counter c1, c2, c3;
    cout << "Total Objects: " << Counter::getCount() << "\n";
    return 0;
}
