#include <iostream>
#include <string>
using namespace std;
class Student {
    int rollNo; string name, course; float percentage;
public:
    void accept() { cin>>rollNo; cin.ignore(); getline(cin,name); getline(cin,course); cin>>percentage; }
    void display() const { cout<<rollNo<<", "<<name<<", "<<course<<", "<<percentage<<"%\n"; }
    friend Student comparePercentage(const Student& a, const Student& b) { return a.percentage >= b.percentage ? a : b; }
};
int main() {
    Student s1, s2;
    s1.accept(); s2.accept();
    comparePercentage(s1, s2).display();
}