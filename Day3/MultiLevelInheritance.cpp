#include <iostream>
using namespace std;
class Grandparent
{
protected:
    int a = 10;

public:
    int b = 20;

private:
    int c = 30;
};
class Parent : public Grandparent
{
protected:
    int d = 40;

public:
    int e = 50;

private:
    int f = 60;
};
class Child : public Parent
{
protected:
    int g = 70;

public:
    int h = 80;

private:
    int i = 90;
};
int main()
{
    Child c1;


    // cout<<"a:"<<c1.a<<endl;
    cout<<"b:"<<c1.b<<endl;
    // cout<<"c:"<<c1.c<<endl;
    // cout<<"d:"<<c1.d<<endl;
    cout<<"e:"<<c1.e<<endl;
    // cout<<"f:"<<c1.f<<endl;
    // cout<<"g:"<<c1.g<<endl;
    cout<<"h:"<<c1.h<<endl;
    // cout<<"i:"<<c1.i<<endl;

    return 0;
}