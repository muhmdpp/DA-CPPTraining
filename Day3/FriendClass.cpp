#include <iostream>
using namespace std;
class Dog{
    friend class Cat;
private:
    string name;
    int age;
public:
    Dog(){
        cout<<"Dog Class"<<endl;
        name="Tommy";
        age=5;
    }

};
class Cat{
    public:
    void display(Dog &d){
        cout<<"Dog name is :"<<d.name<<" and age is "<<d.age<<endl;
    }
    Cat(){
        cout<<"Cat Class"<<endl;
    }
};
int main()
{
    Dog d1;
    Cat c1;
    c1.display(d1);
return 0;
}