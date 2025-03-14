#include <iostream>
using namespace std;
class Student
{
public:
    Student(){
        cout<<"Student Profile"<<endl;
    }
    
    long long int regNo;
    string stdName;
    string stdDept;
    int batch;

private:
    int cgpa;
};
int main()
{
    Student std;
    std.regNo = 410622104087;
    std.stdName = "Muhammad PP";

    cout << std.stdName << endl;
    cout << std.regNo << endl;

    cout << sizeof(std.regNo);

    return 0;
}