#include <iostream>
using namespace std;

class College
{
private:
    int fees;

public:
    string name;
    string location;
    string course;
    int year;
    string str[5];
    College()
    {
        name = "";
        location = "";
        course = "";
        year = 0;
        cout << "Constructor Called" << endl;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Location: " << location << endl;
        cout << "course: " << course << endl;
        cout << "Departments are:" << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << str[i] << endl;
        }
    }
    void payFees(int fee = 10000)
    {
        fees = fee;
        // cout<<"The Fees is : "<<fees<<endl;
    }

    int getFees()
    { // getter function
        return fees;
    }
    friend void get_fees(College &c);
    friend void share_secret(College &c);
    private:
    string secrets="Top secret";
    public:
    void input()
    {
        cout << "Enter name of clg" << endl;
        cin >> name;
        cout << "Enter location" << endl;
        cin >> location;
        cout << "Enter course" << endl;
        cin >> course;
        cout << "Enter the Department" << endl;
        for (int i = 0; i < 5; i++)
        {
            cin >> str[i];
        }
        cout << "Data Added !" << endl;
    }

    College(string n, string l, string c, int y, string s[]);
    void Admission();
    ~College()
    {
        cout << "Destructor Called" << endl;
    }
};
void College::Admission()
{
    cout << "Admission is open for the year " << year << endl;
}

College::College(string n, string l, string c, int y, string s[])
{
    name = n;
    location = l;
    year = y;
    cout << "Enter the Departments:";
    for (int i = 0; i < 5; i++)
    {
        str[i] = s[i];
    }
}
void get_fees(College &c)
{
    cout << "friend The fees is :" << c.fees << endl;
}
void share_secret(College &c){
    cout<<"my friend's secret is :"<<c.secrets<<endl;
}
int main()
{
    // College clg;
    // clg.input();
    // clg.display();
    // clg.Admission();
    {
        string s[5] = {"CSE", "AIDS", "CSBS", "EE", "ECE"};
        College c2 = {"Dace", "chennai", "BE", 2025, s};
        c2.display();
        // c2.payFees(100043);
        c2.payFees(123456);
        cout << "The Fees is :" << c2.getFees() << endl;
        get_fees(c2);
        share_secret(c2);
    }
    cout << "Program Ends" << endl;

    return 0;
}