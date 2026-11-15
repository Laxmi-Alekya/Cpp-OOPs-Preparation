#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int age;

    void display() {
        cout << "Student Name: " << name << endl;
        cout << "Student Age: " << age << endl;
    }
};

int main() {
    Student s1;

    s1.name = "Alekya";
    s1.age = 20;

    s1.display();

    return 0;
}