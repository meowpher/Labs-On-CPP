#include <iostream>
using namespace std;

class Department {
    int dno, emp; string name;
public:
    void accept() { cout<<"Enter dno, name, emp_count: "; cin>>dno>>name>>emp; }
    void display() { cout<<dno<<"\t"<<name<<"\t"<<emp<<"\n"; }
};

int main() {
    Department *d = new Department();
    d->accept(); d->display();
    delete d;
    return 0;
}
