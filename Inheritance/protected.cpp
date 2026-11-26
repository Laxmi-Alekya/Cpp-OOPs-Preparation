
#include <iostream>
using namespace std;

class Employee {
protected:
    int salary = 50000;
};

class Manager : public Employee {
public:
    void displaySalary() {
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Manager m1;

    m1.displaySalary();

    return 0;
}
