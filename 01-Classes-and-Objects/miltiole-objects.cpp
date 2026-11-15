#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int age;

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Student s1, s2;

    s1.name = "Alekya";
    s1.age = 20;

    s2.name = "Rahul";
    s2.age = 21;

    cout << "First Student:" << endl;
    s1.display();

    cout << "\nSecond Student:" << endl;
    s2.display();

    return 0;
}