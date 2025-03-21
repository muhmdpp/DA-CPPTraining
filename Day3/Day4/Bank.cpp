#include<iostream>
using namespace std;

class BankAccount {
private:
    int bal=0;

public:
    
    void setbal(int amount) {
        if (amount >= 100) {
            bal = amount;
        } else {
            cout << "Invalid balance amount!" << endl;
        }
    }

    
    int getbal() {
        return bal;
    }

    
    void Deposit(int amount) {
        if (amount >= 1) {
            bal += amount;
            cout << "Deposited: " << amount << endl;
            cout << "Current balance: " << bal << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    
    void withdraw(int amount) {
        if (amount >= 1 && bal >= amount) {
            bal -= amount;
            cout << "Withdrawn: " << amount << endl;
            cout << "Current balance: " << bal << endl;
        } else {
            cout << "Invalid withdraw amount or insufficient balance!" << endl;
        }
    }

    void applyLoan(){
        int amt,period,rate,repayAmt;
        cout<<"Enter amount required"<<endl;
        cin>>amt;
        cout<<"Enter period in years"<<endl;
        cin>>period;
        cout<<"enter intrst rate"<<endl;
        cin>>rate;
        repayAmt=amt*rate*period;
        cout<<"Amount to be paid after "<<period<<" years will be "<<repayAmt<<endl;
    }
};

class SavingAcc : public BankAccount{
    public:
    int intRate;
    SavingAcc(){
        cout<<"Welcome to Saving Account"<<endl;
    }
    void intrst(){
        double intrst=(getbal()*(intRate))/100;
        Deposit(intrst);
    }
    



};
class CurrentAcc : public BankAccount{
    public:
    CurrentAcc(){
        cout<<"Welcome to Current Account"<<endl;
    }

};

int main() {
    BankAccount acc;
    acc.setbal(1000); 
    cout << "Initial balance: " << acc.getbal() << endl; 

    acc.Deposit(500); 
    acc.withdraw(300);
    CurrentAcc ca;
    ca.Deposit(1000);
    SavingAcc sa;
    sa.intRate=20;
    cout<<"Interest Rate is :"<<sa.intRate<<endl;

    // sa.applyLoan();
    sa.setbal(10000);
    sa.intrst();
    cout<<"Balance is "<<sa.getbal()<<endl;
    

    

    return 0;
}