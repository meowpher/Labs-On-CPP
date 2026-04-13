#include <iostream>
using namespace std;

class SumCalculator {
private:
    int* numbers;
    int size;
    long long totalSum;
public:
    SumCalculator(int n) {
        size = n;
        totalSum = 0;
        numbers = new int[size];   
        cout << "Enter " << size << " numbers:" << endl;
        for (int i = 0; i < size; i++) {
            cout << "Number " << (i + 1) << ": ";
            cin >> numbers[i];
            totalSum += numbers[i];
        }
    }
    void displaySum() {
        cout << "\nThe sum of the " << size << " numbers is: " << totalSum << endl;
    }
    ~SumCalculator() {
        delete[] numbers;
        cout << "Memory allocated for numbers has been released." << endl;
    }
};

int main() {
    int n;
    cout << "--- Sum of N Numbers using Dynamic Constructor ---" << endl;
    cout << "Enter the count of numbers (n): ";
    cin >> n;
    if (n <= 0) {
        cout << "Invalid count. Please enter a positive integer." << endl;
        return 1;
    }
    SumCalculator* sc = new SumCalculator(n);
    sc->displaySum();
    delete sc;
    cout << "--- Program End ---" << endl;
    return 0;
}