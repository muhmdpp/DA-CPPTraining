#include <iostream>
using namespace std;
class Dog{
    friend void dog_bark(Dog &d);
    friend void dog_bark();

    private:
    string name;
    int age;
    public:
    Dog(string n,int a){
        name=n;
        age=a;
    };
};

void dog_bark(Dog &d){
    cout<<"Dog name is :"<<d.name<<" and age is "<<d.age<<endl;
}
void dog_bark(){
    Dog d1("Tommy",5);
    cout<<"Dog name is :"<<d1.name<<" and age is "<<d1.age<<endl;
}
int main()
{
    Dog d("tom",10);
    dog_bark(d);
    dog_bark();

return 0;
}