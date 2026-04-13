#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string modelName;
    double price;
public:
    Car(string name, double p) {
        modelName = name;
        price = p;
        cout << "Car initialized: " << modelName << " with price $" << price << endl;
    }
    ~Car() {
        cout << "Car object is destroyed" << endl;
    }
    void displayInfo() {
        cout << "Model: " << modelName << ", Price: $" << price << endl;
    }
};

int main() {
    cout << "--- Program Start ---" << endl;
    {
        Car myCar("Tesla Model S", 79999.99);
        myCar.displayInfo();   
        cout << "--- End of block scope ---" << endl;
    }
    cout << "--- Program End ---" << endl;
    return 0;
}