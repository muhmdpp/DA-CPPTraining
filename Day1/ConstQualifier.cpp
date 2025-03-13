#include <iostream>
using namespace std;
int main()
{

    int a=10;
    int *p=&a;
    int *q(nullptr);
    *p=20; // it will change the value of a
    //p=20 | it;s not possible we can't assign a value to pointer.


    int b=33;
    int const *t;
    p=&b;

    

    cout<<a<<endl;
    cout<<*p<<endl;
    cout<<p<<endl;
    cout<<*q<<endl;

return 0;
}