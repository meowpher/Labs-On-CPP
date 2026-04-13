#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of elements (n): ";
    cin >> n;
    int* arr = new int[n];
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }
    int target;
    cout << "\nEnter the element to search for: ";
    cin >> target;
    bool found = false;
    for (int i = 0; i < n; ++i) {
        if (arr[i] == target) {
            cout << "Element " << target << " found at index " << i << "." << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Element " << target << " not found." << endl;
    }
    delete[] arr;
    return 0;
}