#include <iostream>
using namespace std;

class ArraySearch {
private:
    int* arr;
    int size;
public:
    ArraySearch(int n) {
        size = n;
        arr = new int[size];
        cout << "Enter " << size << " array elements:" << endl;
        for (int i = 0; i < size; i++) {
            cout << "Element [" << i << "]: ";
            cin >> arr[i];
        }
    }
    void find(int key) {
        bool found = false;
        int index = -1;
        for (int i = 0; i < size; i++) {
            if (arr[i] == key) {
                found = true;
                index = i;
                break;
            }
        }
        if (found) {
            cout << "Number " << key << " found at index " << index << "." << endl;
        } else {
            cout << "Number " << key << " not found in the array." << endl;
        }
    }
    ~ArraySearch() {
        delete[] arr;
        cout << "\nMemory deallocated by destructor." << endl;
    }
};

int main() {
    int n, searchKey;
    cout << "--- Search in Array using Dynamic Constructor ---" << endl;
    cout << "Enter the size of the array: ";
    cin >> n;
    if (n <= 0) {
        cout << "Invalid size!" << endl;
        return 1;
    }
    ArraySearch obj(n);
    cout << "\nEnter the number to search: ";
    cin >> searchKey;
    obj.find(searchKey);
    return 0;
}