#include <iostream>
using namespace std;

// Base Class
class BankAccount {
private:
    double balance;  // Private: Not directly accessible

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
};

// Derived Class
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

    void applyInterest() {
        double interest = getBalance() * (interestRate / 100);  // ✅ Access balance via getter
        deposit(interest);  // ✅ Modify balance using base class method
        cout << "Interest Applied: $" << interest << endl;
    }
};

int main() {
    SavingsAccount mySavings;

    mySavings.setBalance(2000);  // ✅ Using setter
    mySavings.setInterestRate(5);  // ✅ Setting interest rate

    cout << "Balance before interest: $" << mySavings.getBalance() << endl;

    mySavings.applyInterest();  // ✅ Applying interest

    cout << "Balance after interest: $" << mySavings.getBalance() << endl;

    return 0;
}