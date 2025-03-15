#include <iostream>
using namespace std;
// whenever we create an object the constructor
// is created automatically.
class Bank
{

public:
    string ifsc;
    string branchName;
    int accno;
    int balance;
    Bank()
    {
        cout << "Welcome to ICICI Bank" << endl;
    }

private:
    int PIN_no;

public:
    // it is used to set the value
    void set(int pinno = 0001)
    {
        PIN_no = pinno;
    }
    // it is used to get the value
    int get()
    {
        return PIN_no;
    }
};
int main()
{
    Bank person1;
    person1.accno = 423435;
    person1.balance = 123;
    person1.branchName = "Vanjuvancheri";
    person1.ifsc = "MHDPP123";
    person1.set();
    cout << person1.get();

    // cout<<
    return 0;
}