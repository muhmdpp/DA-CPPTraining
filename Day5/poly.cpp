#include <iostream>
using namespace std;

// Base Class
class BankAccount {
protected:
    double balance;

public:
    void setBalance(double amount) {
        if (amount >= 0)
            balance = amount;
        else
            cout << "Invalid balance!" << endl;
    }

    double getBalance() {
        return balance;
    }

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
            cout << "Invalid withdrawal!" << endl;
    }

    // Virtual function for polymorphism
     virtual void applyInterest() {
        cout << "No interest applied for a regular account." << endl;
    }
};

// Derived Class: SavingsAccount
class SavingsAccount : public BankAccount {
private:
    double interestRate;

public:
    void setInterestRate(double rate) {
        if (rate >= 0)
            interestRate = rate;
        else
            cout << "Invalid interest rate!" << endl;
    }

    double getInterestRate() {
        return interestRate;
    }

    // Overriding applyInterest
    void applyInterest()  {
        double interest = balance * (interestRate / 100);
        deposit(interest);  // Adding interest to balance
        cout << "Interest Applied: $" << interest << endl;
    }
};

// Derived Class: CurrentAccount (No Interest)
class CurrentAccount : public BankAccount {
public:
    void applyInterest()  {
        cout << "No interest for Current Accounts." << endl;
    }
};

int main() {
    SavingsAccount savings;
    CurrentAccount current;

    savings.setBalance(2000);
    savings.setInterestRate(5);

    current.setBalance(3000);

    // Calling overridden methods directly
    cout << "Savings Account Balance Before Interest: $" << savings.getBalance() << endl;
    savings.applyInterest();
    cout << "Savings Account Balance After Interest: $" << savings.getBalance() << endl;

    cout << "\nCurrent Account Balance: $" << current.getBalance() << endl;
    current.applyInterest();
    //

    return 0;
}