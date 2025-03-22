#include <iostream>
using namespace std;
class Parent{
    public:
    void displayParent(){
        cout<<"display from parent"<<endl;
    }
};

class Child : public Parent{
    public:
    void displayParent(){
        cout<<"display from child"<<endl;
    }

};

int main()
{

    Parent par;
    Child ch;
    par.displayParent();
    ch.displayParent();

return 0;
}