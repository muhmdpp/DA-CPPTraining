#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;  // Private variable

public:
    // Setter for balance
    void setBalance(double amount) {
        if (amount >= 0)
            balance = amount;
        else
            cout << "Invalid initial balance!" << endl;
    }

    // Getter for balance
    double getBalance() {
        return balance;
    }

    // Method to deposit money
    void deposit(double amount) {
        if (amount > 0)
            setBalance(balance + amount);
        else
            cout << "Invalid deposit amount!" << endl;
    }

    // Method to withdraw money
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance)
            setBalance(balance - amount);
        else
            cout << "Invalid withdrawal amount or insufficient balance!" << endl;
    }
};

int main() {
    BankAccount myAccount;  // Object creation

    myAccount.setBalance(1000);  // Manually setting initial balance

    myAccount.deposit(500);
    myAccount.withdraw(200);

    cout << "Current Balance: $" << myAccount.getBalance() << endl;  // Using getter

    return 0;
}