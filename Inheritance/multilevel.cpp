
#include <iostream>
using namespace std;

class Person {
public:
    string name;
};

class Student : public Person {
public:
    int marks1, marks2;

    void displayMarks() {
        cout << "Marks 1: " << marks1 << endl;
        cout << "Marks 2: " << marks2 << endl;
    }
};

class Result : public Student {
public:
    void displayResult() {
        cout << "Name: " << name << endl;
        displayMarks();

        int total = marks1 + marks2;
        cout << "Total Marks: " << total << endl;
    }
};

int main() {
    Result r1;

    r1.name = "Alekya";
    r1.marks1 = 85;
    r1.marks2 = 90;

    r1.displayResult();

    return 0;
}
