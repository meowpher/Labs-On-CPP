#include <iostream>
using namespace std;
class Distance {
    int meter, centimeter;
public:
    Distance(int m=0, int cm=0): meter(m + cm/100), centimeter(cm%100) {}
    Distance addDistance(const Distance& d) const { return Distance(meter + d.meter, centimeter + d.centimeter); }
    void display() const { cout << meter << "m " << centimeter << "cm\n"; }
};
int main() {
    Distance d1(5, 75), d2(3, 40);
    d1.display(); d2.display();
    d1.addDistance(d2).display();
}