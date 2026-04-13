#include<iostream>
using namespace std;

class Product {
    int pno, qty; string name; double price;
public:
    void accept() { cout<<"Enter pno, name, qty, price: "; cin>>pno>>name>>qty>>price; }
    void display() { cout<<pno<<"\t"<<name<<"\t"<<qty<<"\t"<<price<<"\tTot: "<<qty*price<<"\n"; }
};

int main() {
    Product p; p.accept(); p.display(); return 0;
}
