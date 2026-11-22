///Concept: Employee class with multiple objects
#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
    string empName;
    int empId;
    double salary;
    Employee(string name, int id, double sal) {      //constructor intialization
        empName = name;
        empId = id;
        salary = sal;
    }

    void displayDetails() {      //class methods
        cout << "Employee Name: " << empName << endl;
        cout << "Employee ID: " << empId << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Employee e1("Alekya", 101, 30000);//object creation with constructor initialization
    Employee e2("Rahul", 102, 40000);

    

    cout << "Employee 1:" << endl;  //invoking class methods to pirnt the details of employee 1
    e1.displayDetails();

    cout << "\nEmployee 2:" << endl;
    e2.displayDetails();

    return 0;
}
