///Concept: BankAccount class with multiple objects

#include <iostream>
#include <string>
using namespace std;

class BankAccount {
public:
    string accountHolder;
    string accountNumber;
    double balance;

    void displayDetails() {
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount b1, b2;

    b1.accountHolder = "Alekya";
    b1.accountNumber = "123456789";
    b1.balance = 25000;

    b2.accountHolder = "Rahul";
    b2.accountNumber = "987654321";
    b2.balance = 40000;

    cout << "First Account:" << endl;
    b1.displayDetails();

    cout << "\nSecond Account:" << endl;
    b2.displayDetails();

    return 0;
}