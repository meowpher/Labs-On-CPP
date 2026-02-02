#include <iostream>
using namespace std;
#define PI 3.14159

inline float calculatePerimeter(float radius) {
    return 2 * PI * radius;
}

int main() {
    float radius, perimeter;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    perimeter = calculatePerimeter(radius);
    cout << "The perimeter (circumference) of the circle is: " << perimeter << endl;
    return 0;
}