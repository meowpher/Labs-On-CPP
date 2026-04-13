#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of elements (n): ";
    cin>>n;
    int* arr = new int[n];
    long long sum = 0;
    long long product = 1;
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
        sum += arr[i];
        product *= arr[i];
    }
    cout << "\nResults:" << endl;
    cout << "Sum: " << sum << endl;
    cout << "Product: " << product << endl;
    delete[] arr;
    return 0;
}