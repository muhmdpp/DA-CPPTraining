#include <iostream>
using namespace std;

int main(){
    int a{},b{},c{},d{},e{};
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    cin>>e;

    int avg{};
    avg=(a+b+c+d+e)/5;
    cout<<avg<<" is the average."<<endl;
    return 0;
}