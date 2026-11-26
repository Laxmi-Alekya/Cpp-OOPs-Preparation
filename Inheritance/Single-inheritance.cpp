
#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
public:
    int rollNo;

    void displayStudent() {
        displayPerson();
        cout << "Roll Number: " << rollNo << endl;
    }
};

int main() {
    Student s1;

    s1.name = "Alekya";
    s1.age = 20;
    s1.rollNo = 101;

    s1.displayStudent();

    return 0;
}
