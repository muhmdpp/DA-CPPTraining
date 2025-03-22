#include <iostream>
#include <string>
using namespace std;

// Abstract Base Class
class BankAccount {
private:
    string accountNumber;
    double balance;

public:
    BankAccount(const string &accNum, double initialBalance)
        : accountNumber(accNum), balance(initialBalance) {}

    void deposit(double amount) {
        if (amount > 0)
            balance += amount;
        else
            cout << "Invalid deposit amount!" << endl;
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance)
            balance -= amount;
        else
            cout << "Invalid withdrawal amount!" << endl;
    }

    double getBalance() const {
        return balance;
    }

    string getAccountNumber() const {
        return accountNumber;
    }

    // Pure virtual function making this class Abstract
    virtual void applyInterest() = 0;
};

// Derived Class: SavingsAccount
class SavingsAccount : public BankAccount {
private:
    double interestRate;

public:
    SavingsAccount(const string &accNum, double initialBalance, double rate)
        : BankAccount(accNum, initialBalance), interestRate(rate) {}

    void applyInterest() override {
        double interest = getBalance() * (interestRate / 100);
        deposit(interest);
        cout << "Interest Applied: $" << interest << endl;
    }
};

// Derived Class: CurrentAccount
class CurrentAccount : public BankAccount {
public:
    CurrentAccount(const string &accNum, double initialBalance)
        : BankAccount(accNum, initialBalance) {}

    void applyInterest() override {
        // Current accounts may not have interest
        cout << "No interest applied for Current Account." << endl;
    }
};

int main() {
    // Creating objects of derived classes
    SavingsAccount savings("SA-123", 100000.0, 20);
    CurrentAccount current("CA-456", 2000.0);

    // Display initial balances
    cout << "Savings Account Balance: $" << savings.getBalance() << endl;
    cout << "Current Account Balance: $" << current.getBalance() << endl;

    // Applying interest
    savings.applyInterest();
    current.applyInterest();

    // Display balances after applying interest
    cout << "Savings Account Balance after interest: $" << savings.getBalance() << endl;
    cout << "Current Account Balance after interest: $" << current.getBalance() << endl;
    cout << "Account Number is : " << savings.getAccountNumber() << endl;
    //savings.getAccountNumber();

    return 0;
}