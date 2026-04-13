#include<iostream>
using namespace std;

class Student {
public:
    int rno; string name, course; double perc;
    void accept() { cout<<"Enter rno, name, course, %: "; cin>>rno>>name>>course>>perc; }
    void display() { cout<<rno<<"\t"<<name<<"\t"<<course<<"\t"<<perc<<"%\n"; }
};

void displayTopper(Student *s, int n) {
    int t = 0;
    for(int i=1; i<n; i++) if(s[i].perc > s[t].perc) t = i;
    cout << "\nTopper Options: "; s[t].display();
}

int main() {
    int n; cout << "Enter n: "; cin >> n;
    Student *s = new Student[n];
    for(int i=0; i<n; i++) s[i].accept();
    cout << "\nAll Students:\n";
    for(int i=0; i<n; i++) s[i].display();
    displayTopper(s, n);
    delete[] s;
    return 0;
}
