#include <iostream>
using namespace std;

class Parent{
    public:
    void display(){
        cout<<"Display of Parent"<<endl;
    }
    Parent(){
        cout<<"Parent Class"<<endl;
    }
    ~Parent(){
        cout<<"Parent - Destructor"<<endl;
    }
};

class Child : public Parent{
    public:
    void display(){
        cout<<"Display of Child"<<endl;
    }

    void show(){
        cout<<"Show of Child"<<endl;
    }
    Child(){
        cout<<"Child Class"<<endl;
    }
    ~Child(){
        cout<<"Child - Destructor"<<endl;
    }

};
int main()
{
    Child c1;
    Parent p1;
    // p1.display(); // display of parent
    c1.display();
    c1.show();

return 0;
}