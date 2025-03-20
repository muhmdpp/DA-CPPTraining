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
class Child1: public Parent{
    public:
    Child1(){
        cout<<"Child Class 1"<<endl;
    }
    ~Child1(){
        cout<<"Child 1 - Destructor"<<endl;
    }
};
class Child2: public Parent{
    public:
    Child2(){
        cout<<"Child Class 2"<<endl;
    }
    ~Child2(){
        cout<<"Child 2 - Destructor"<<endl;
    }
};
int main()
{
    Child1 c1,c2;
    Child2 c3,c4;

return 0;
}