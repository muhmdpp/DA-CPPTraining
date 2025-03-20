#include <iostream>
using namespace std;

class Parent1{
    public:
    void display(){
        cout<<"Display of Parent 1"<<endl;
    }
};
class Parent2{
    public:
    void display(){
        cout<<"Display of Parent 2"<<endl;
    }
};

class Child: public Parent1,public Parent2{
    public:
    
    // void display(){
    //     cout<<"Display of Child"<<endl;
    // }


};
int main()
{
    Child c1;
    // c1.Parent1::display();
    // c1.Parent2::display();
    c1.display();


return 0;
}