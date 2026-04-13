#include <iostream>
using namespace std;

class Triangle {
private:
    double base;
    double height;
    double area;
public:
    Triangle(double b, double h) {
        base = b;
        height = h;
        area = 0.5 * base * height;
        cout << "Triangle initialized with Base: " << base << " and Height: " << height << endl;
    }
    void displayArea() {
        cout << "The calculated area of the triangle is: " << area << endl;
    }
    ~Triangle() {
        cout << "Triangle object is being destroyed, releasing resources." << endl;
    }
};

int main() {
    cout << "--- Triangle Area Calculator ---" << endl;
    {
        double b, h;
        cout << "Enter base of the triangle: ";
        cin >> b;
        cout << "Enter height of the triangle: ";
        cin >> h;
        Triangle myTriangle(b, h);
        myTriangle.displayArea();   
        cout << "--- End of processing block ---" << endl;
    }
    cout << "--- Program Finished ---" << endl;
    return 0;
}