
#include <iostream>
using namespace std;

class Father {
public:
    void fatherDetails() {
        cout << "Father: Ramesh" << endl;
    }
};

class Mother {
public:
    void motherDetails() {
        cout << "Mother: Lakshmi" << endl;
    }
};

class Child : public Father, public Mother {
public:
    void childDetails() {
        cout << "Child: Rahul" << endl;
    }
};

int main() {
    Child c1;

    c1.fatherDetails();
    c1.motherDetails();
    c1.childDetails();

    return 0;
}
