//Write a CPP program to find area and perimeter of circle using constant concept.
#include <iostream>

using namespace std;

int main() {
    const double PI = 3.14159;
    double radius, area, perimeter;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    area = PI * radius * radius;
    perimeter = 2 * PI * radius;

    cout << "\n--- Circle Calculations ---" << endl;
    cout << "Radius: " << radius << endl;
    cout << "Area: " << area << endl;
    cout << "Perimeter: " << perimeter << endl;

    return 0;
}