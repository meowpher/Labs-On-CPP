#include <iostream>
using namespace std;
#define PI 3.14159
int area(int side) {
    return side * side;
}

float area(float radius) {
    return PI * radius * radius;
}


float area(float length, float breadth) {
    return length * breadth;
}

int main() {
    int choice;
    int side;          
    float rad;          
    float len, wid;    

    do {
        cout << "\n----------- AREA CALCULATOR -----------" << endl;
        cout << "1. Calculate Area of Square" << endl;
        cout << "2. Calculate Area of Circle" << endl;
        cout << "3. Calculate Area of Rectangle" << endl;
        cout << "4. Exit" << endl;
        cout << "---------------------------------------" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter side of the square (integer): ";
                cin >> side;
                // Calls area(int)
                cout << "Area of Square: " << area(side) << endl;
                break;

            case 2:
                cout << "Enter radius of the circle: ";
                cin >> rad;
                // Calls area(float)
                cout << "Area of Circle: " << area(rad) << endl;
                break;

            case 3:
                cout << "Enter length and width of rectangle: ";
                cin >> len >> wid;
                cout << "Area of Rectangle: " << area(len, wid) << endl;
                break;

            case 4:
                cout << "Exiting..." << endl;
                break;

            default:
                cout << "Invalid choice!" << endl;
        }

    } while (choice != 4);

    return 0;
}