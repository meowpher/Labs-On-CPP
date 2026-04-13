#include<iostream>
using namespace std;

class Number {
    int *ptr, n, even = 0, odd = 0;
public:
    void accept() {
        cout << "Enter n: ";
        cin >> n;
        ptr = new int[n];
        cout << "Enter " << n << " numbers: ";
        for(int i=0; i<n; i++) cin >> ptr[i];
    }
    void display() {
        for(int i=0; i<n; i++) ptr[i] % 2 == 0 ? even++ : odd++;
        cout << "Even count: " << even << "\nOdd count: " << odd << "\n";
        delete[] ptr;
    }
};

int main() {
    Number num;
    num.accept();
    num.display();
    return 0;
}
