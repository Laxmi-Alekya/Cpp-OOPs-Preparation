
#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    // Constructor
    BankAccount(double initialBalance) {
        balance = initialBalance;
    }

    // Deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance = balance + amount;
            cout << "Amount deposited successfully!" << endl;
        } 
        else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // Withdraw money
    void withdraw(double amount) {
        if (amount <= 0) {
            cout << "Invalid withdrawal amount!" << endl;
        }
        else if (amount <= balance) {
            balance = balance - amount;
            cout << "Amount withdrawn successfully!" << endl;
        }
        else {
            cout << "Insufficient balance!" << endl;
        }
    }

    // Getter
    double getBalance() {
        return balance;
    }
};

int main() {
    BankAccount account(10000);

    account.deposit(2000);
    account.withdraw(3000);
    account.withdraw(15000);

    cout << "Final Balance: " << account.getBalance() << endl;

    return 0;
}
