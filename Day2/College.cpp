#include <iostream>
using namespace std;
class College
{
public:
    void addDept(string Dept[])
    {
        // cout<<"Enter "
        for(int i=0;i<5;i++){
            dept[i]=Dept[i];
        }
    }
    void getDept(){
        for(int i=0;i<5;i++){
            cout<<dept[i]<<endl;
        }
    }
    string collegeName;
    string dept[5];
    College()
    {
        cout << "Welcome to " << collegeName << endl;
    }
    College(string CollegeName)
    {
        collegeName = CollegeName;
        cout << "Welcome to " << collegeName << endl;
    }
};
int main()
{
    // College dace;
    // dace.collegeName="Dhaanish Ahmed College of Engineering";
    College clg("dace");
    cout << clg.collegeName << endl;
    string s_array[10];
    for (int i = 0; i < 4; i++)
    {
        cout << "Enter Depts:" << endl;
        cin >> s_array[i];
    }
    cout << s_array << endl;
    cout << "Departments Stored" << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << s_array[i] << endl;
    }

    clg.addDept(s_array);
    clg.getDept();

    return 0;
}