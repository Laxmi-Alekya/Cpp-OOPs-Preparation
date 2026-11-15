///Concept: Employee class with multiple objects
#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
    string empName;
    int empId;
    double salary;

    void displayDetails() {
        cout << "Employee Name: " << empName << endl;
        cout << "Employee ID: " << empId << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Employee e1, e2;

    e1.empName = "Alekya";
    e1.empId = 101;
    e1.salary = 30000;

    e2.empName = "Rahul";
    e2.empId = 102;
    e2.salary = 40000;

    cout << "Employee 1:" << endl;
    e1.displayDetails();

    cout << "\nEmployee 2:" << endl;
    e2.displayDetails();

    return 0;
}
