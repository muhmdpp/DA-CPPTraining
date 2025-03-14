#include <iostream>
using namespace std;
// struct Employee{
//     int empId;
//     char *name;
// };

class Employee{
    //Access Specifer
    public:
    int empId;
    string empname;
    int empSalary;
    
};
int main()
{
    Employee emp;
    emp.empId=124;
    emp.empSalary=20000;
    emp.empname="Muhammad P P";

    cout<<emp.empId<<endl;
    cout<<emp.empname<<endl;
    cout<<emp.empSalary<<endl;

return 0;
}